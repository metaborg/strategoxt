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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_y_89;
ATerm term_v_89;
ATerm term_u_89;
ATerm term_n_89;
ATerm term_m_89;
ATerm term_j_89;
ATerm term_g_89;
ATerm term_f_89;
ATerm term_c_89;
ATerm term_b_89;
ATerm term_a_89;
ATerm term_z_88;
ATerm term_y_88;
ATerm term_x_88;
ATerm term_w_88;
ATerm term_v_88;
ATerm term_u_88;
ATerm term_q_88;
ATerm term_p_88;
ATerm term_n_88;
ATerm term_m_88;
ATerm term_k_88;
ATerm term_j_88;
ATerm term_f_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_a_88;
ATerm term_z_87;
ATerm term_s_87;
ATerm term_q_87;
ATerm term_p_87;
ATerm term_z_86;
ATerm term_y_86;
ATerm term_w_86;
ATerm term_q_86;
ATerm term_p_86;
ATerm term_t_85;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_w_84;
ATerm term_e_84;
ATerm term_x_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_n_83;
ATerm term_v_82;
ATerm term_u_82;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_l_82;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_e_82;
ATerm term_d_82;
ATerm term_a_82;
ATerm term_z_81;
ATerm term_y_81;
ATerm term_x_81;
ATerm term_v_81;
ATerm term_u_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_p_81;
ATerm term_o_81;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_w_78;
ATerm term_t_78;
ATerm term_r_78;
ATerm term_q_78;
ATerm term_o_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_s_77;
ATerm term_m_77;
ATerm term_l_77;
ATerm term_j_77;
ATerm term_e_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_x_76;
ATerm term_v_76;
ATerm term_s_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_m_76;
ATerm term_l_76;
ATerm term_k_76;
ATerm term_j_76;
ATerm term_h_76;
ATerm term_f_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_j_75;
ATerm term_g_75;
ATerm term_b_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_u_74;
ATerm term_p_74;
ATerm term_n_74;
ATerm term_y_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_q_73;
ATerm term_m_73;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_n_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_b_71;
ATerm term_z_70;
ATerm term_k_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_w_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_k_68;
ATerm term_i_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_v_67;
ATerm term_e_65;
ATerm term_y_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_l_64;
ATerm term_i_64;
ATerm term_g_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_o_63;
ATerm term_s_62;
ATerm term_i_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_z_60;
ATerm term_s_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_h_60;
ATerm term_e_60;
ATerm term_c_60;
ATerm term_z_59;
ATerm term_h_59;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_h_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_z_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_t_55;
ATerm term_r_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_x_54;
ATerm term_r_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_r_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_e_50;
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
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_o_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_d_47;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_q_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_k_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_c_44;
ATerm term_a_44;
ATerm term_u_43;
ATerm term_o_43;
ATerm term_z_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_n_42;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_v_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_v_38;
ATerm term_s_38;
ATerm term_l_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_q_36;
ATerm term_k_36;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_s_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_f_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_l_37);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_w_37);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_y_37);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_o_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_h_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_p_41);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_l_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_w_42);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_o_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_48, term_e_40, term_x_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_48, term_u_36, term_a_49);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_49, term_p_40, term_e_49);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_49, term_h_49, term_i_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_49, term_m_49, term_n_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_49, term_q_49, term_r_49);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_49, term_u_49, term_v_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_y_49, term_z_49);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_50, term_e_50, term_g_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_50, term_n_50, term_o_50);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_50, term_w_50, term_x_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_50, term_a_44, term_a_51);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_51, term_k_51, term_l_51);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_51, term_p_51, term_q_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_x_51, term_b_52);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_52, term_e_52, term_g_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_52, term_k_52, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_52, term_p_52, term_t_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_w_52, term_x_52);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_52, term_a_53, term_b_53);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_53, term_e_53, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_53, term_k_53, term_l_53);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_53, term_o_53, term_p_53);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_53, term_s_53, term_t_53);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_53, term_l_46, term_w_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_54, term_d_54, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_54, term_h_54, term_i_54);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_e_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_k_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_e_56);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_i_56);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_t_58);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(sym__2, term_t_57, term_h_57);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_c_60);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_k_60);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_z_60);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_a_68);
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_s_36, term_k_36);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_36);
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(sym__2, term_k_71, term_s_38);
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_n_74);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(sym__2, term_c_70, term_a_75);
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_c_70, term_y_73);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(sym__2, term_o_39, term_s_38);
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_s_38);
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(sym__2, term_c_60, term_s_38);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_s_38);
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_s_38);
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_s_38);
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(sym__2, term_c_78, term_s_38);
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(sym__2, term_f_78, term_s_38);
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(sym__2, term_e_56, term_e_40);
  ATprotect(&(term_r_78));
  term_r_78 = (ATerm) ATmakeAppl(sym__2, term_g_56, term_k_36);
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(sym__2, term_z_60, term_s_38);
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_z_81));
  term_z_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_q_82);
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(sym__2, term_e_71, term_f_71);
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(sym__2, term_n_83, term_s_38);
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__3, term_e_71, term_f_71, (ATerm) ATempty);
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_t_77);
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_n_83);
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_87));
  term_p_87 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_q_87));
  term_q_87 = (ATerm) ATmakeAppl(sym__2, term_a_68, term_p_87);
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(sym__2, term_s_36, term_e_40);
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(sym__2, term_l_42, term_k_36);
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_h_49);
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATempty);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_v_88));
  term_v_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_w_88));
  term_w_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(sym__2, term_i_56, term_y_88);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_x_54);
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_c_78);
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_f_78);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_89));
  term_y_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_126 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm x_13 (ATerm i_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm y_13 (ATerm g_23, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm z_13 (ATerm a_63, ATerm z_62, ATerm t);
ATerm rename_to_1_0 (ATerm w_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm f_127 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
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
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
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
static ATerm z_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm d_14 (ATerm w_67, ATerm x_67, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm g_127 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm h_127 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm e_127 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm j_109 (ATerm), ATerm t);
static ATerm f_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm a_14 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm b_14 (ATerm v_24, ATerm w_24, ATerm t);
static ATerm c_14 (ATerm o_108 (ATerm), ATerm s_213, ATerm f_25, ATerm t);
static ATerm f_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm v_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm d_22 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm c_126 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm y_119 (ATerm), ATerm t);
static ATerm h_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm g_14 (ATerm w_22, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm h_15 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm h_14 (ATerm u_56, ATerm v_56, ATerm t);
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm j_27 (ATerm t);
static ATerm m_27 (ATerm t);
static ATerm p_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t);
static ATerm j_14 (ATerm q_43, ATerm r_43, ATerm t);
static ATerm l_14 (ATerm w_43, ATerm x_43, ATerm t);
static ATerm m_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm p_14 (ATerm x_25, ATerm q_226, ATerm t);
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t);
static ATerm t_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm q_14 (ATerm c_63, ATerm b_63, ATerm t);
static ATerm r_14 (ATerm o_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm n_75 (ATerm o_74, ATerm t);
static ATerm y_27 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_14 (ATerm f_67, ATerm e_67, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm v_14 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t);
static ATerm w_14 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm s_28 (ATerm t);
static ATerm x_14 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t);
static ATerm y_14 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t);
static ATerm c_15 (ATerm k_40, ATerm l_40, ATerm t);
static ATerm f_82 (ATerm w_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_14 (ATerm b_25, ATerm t);
static ATerm a_15 (ATerm w_40, ATerm x_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_84 (ATerm w_82, ATerm t);
static ATerm c_84 (ATerm a_83, ATerm b_83, ATerm c_83, ATerm t);
static ATerm d_84 (ATerm o_83, ATerm p_83, ATerm q_83, ATerm t);
static ATerm b_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm d_29 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm r_29 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm f_30 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_88 (ATerm r_87, ATerm t);
static ATerm o_30 (ATerm t);
static ATerm t_30 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm d_15 (ATerm c_67, ATerm d_67, ATerm t);
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_90 (ATerm z_89, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_15 (ATerm g_67, ATerm h_67, ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm t_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm s_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm x_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm f_34 (ATerm t);
static ATerm g_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm q_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm t_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm w_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm f_15 (ATerm m_61, ATerm n_61, ATerm t);
static ATerm g_15 (ATerm r_61, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_35 (ATerm t);
static ATerm p_35 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
static ATerm s_35 (ATerm t);
static ATerm t_35 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm i_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t);
static ATerm k_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t);
static ATerm l_15 (ATerm k_61, ATerm l_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
static ATerm m_15 (ATerm z_66, ATerm a_67, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm n_15 (ATerm y_38, ATerm z_38, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm b_36 (ATerm t);
static ATerm c_36 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm d_36 (ATerm t);
static ATerm e_36 (ATerm t);
static ATerm f_36 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm i_36 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = w_115(t);
    }
  else
    {
      ATerm n_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = foldr_2_0(w_115, x_115, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, n_0);
      t = x_115(t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm d_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_14(d_1, h_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_0 = NULL,a_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(i_0, k_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_q_36;
        j_1 = t;
        t = term_s_36;
        k_1 = t;
        t = term_t_36;
        t = h_15(j_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_u_36);
        t = geq_0_0(t);
        t = e_1;
        t = b_126(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = e_1;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = term_v_36;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_x_36);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = w_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_v_36;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm x_13 (ATerm i_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_q_36;
        b_2 = t;
        t = term_f_37;
        c_2 = t;
        t = term_i_37;
        t = h_15(b_2, c_2, t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_k_37;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_q_36;
  s_1 = t;
  t = term_l_37;
  t_1 = t;
  t = term_m_37;
  t = h_15(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_f_37), i_23), term_o_37), term_n_37));
  t = if_verbose3_1_0(i_1, t);
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
  {
    static ATerm l_1 (ATerm t);
    static ATerm l_1 (ATerm t)
    {
      ATerm g_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
      t = d_14(q_1, r_1, t);
      t = term_r_37;
      g_2 = t;
      t = SSL_exit(g_2);
      return(t);
    }
    t = fork_and_wait_1_0(l_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_2 = NULL,w_2 = NULL,x_2 = NULL;
  t_2 = t;
  t = term_v_36;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_s_37);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = t_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_v_36;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm y_13 (ATerm g_23, ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(u_1, t);
  l_2 = t;
  t = term_q_36;
  r_2 = t;
  t = term_w_37;
  s_2 = t;
  t = term_x_37;
  t = h_15(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_f_37), g_23), term_y_37));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, n_2);
  t = if_verbose3_1_0(z_1, t);
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
  {
    static ATerm a_2 (ATerm t);
    static ATerm a_2 (ATerm t)
    {
      ATerm d_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
      t = d_14(p_2, q_2, t);
      t = term_r_37;
      d_3 = t;
      t = SSL_exit(d_3);
      return(t);
    }
    t = fork_and_wait_1_0(a_2, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = if_verbose1_1_0(j_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_13(o_3, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  t = term_v_36;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(l_3), term_z_37);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(l_3), term_z_37));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_q_36;
      i_3 = t;
      t = term_y_37;
      j_3 = t;
      t = term_l_38;
      t = h_15(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      t = profile_p__2_0(h_2, i_2, t);
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
static ATerm z_13 (ATerm a_63, ATerm z_62, ATerm t)
{
  ATerm n_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(a_63, z_62);
      LocalPopChoice(q_38);
    }
  else
    {
      t = n_38;
      t = get_errno_0_0(t);
      t = term_s_38;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, a_63, z_62);
      t = q_14(a_63, z_62, t);
      t = SSL_remove(a_63);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,g_4 = NULL;
  e_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = e_4;
        t = w_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_v_38;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_v_38);
        t = q_14(g_4, v_1, t);
        t = SSL_remove(g_4);
        t = term_v_38;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm w_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              t = e_4;
              t = w_0(t);
              k_2 = t;
              {
                ATerm b_39 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_2 = NULL;
                    m_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_2;
                      }
                    else
                      {
                        t = m_2;
                        if((g_4 != t))
                          {
                            _fail(t);
                          }
                        t = m_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_39;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_4, k_2);
              t = z_13(g_4, k_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
              LocalPopChoice(a_39);
            }
          else
            {
              t = w_38;
              t = e_4;
              t = w_0(t);
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
  t = term_c_39;
  o_4 = t;
  t = term_d_39;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_g_39);
  p_4 = t;
  t = r_4;
  t = comp_0_2(o_4, p_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_h_39);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_i_39;
  s_4 = t;
  t = x_4;
  {
    ATerm l_39 = t;
    int m_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        t = term_q_36;
        a_5 = t;
        t = term_o_39;
        b_5 = t;
        t = term_p_39;
        t = h_15(a_5, b_5, t);
        t = x_4;
        LocalPopChoice(m_39);
        t = (ATerm) ATinsert(ATempty, term_o_39);
      }
    else
      {
        t = l_39;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_q_36;
  y_4 = t;
  t = term_h_39;
  z_4 = t;
  t = term_s_39;
  t = h_15(y_4, z_4, t);
  t = foldr_3_0(u_2, conc_0_0, v_2, t);
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_4), w_4);
  t = concat_0_0(t);
  t_4 = t;
  t = x_4;
  t = comp_0_2(s_4, t_4, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  v_5 = t;
  t = term_v_36;
  w_5 = t;
  t = (ATerm) ATinsert(ATempty, term_t_39);
  x_5 = t;
  t = SSL_printnl(w_5, x_5);
  t = v_5;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_6 = ATgetArgument(t, 0);
            {
              ATerm c_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(e_6);
              c_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
              s_0 = t;
              t = SSLsetAnnotations(s_0, c_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_6;
          }
        LocalPopChoice(v_39);
        t = xtc_transform_file_2_0(k_3, r_3, t);
      }
    else
      {
        t = u_39;
        t = xtc_transform_term_2_0(s_3, t_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(k_5, l_5, t);
  d_6 = t;
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_7 = ATgetArgument(t, 0);
            {
              ATerm m_4 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(d_6);
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, m_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(x_39);
        t = xtc_transform_file_2_0(p_5, q_5, t);
      }
    else
      {
        t = w_39;
        t = xtc_transform_term_2_0(k_6, u_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_8 = ATgetArgument(t, 0);
            {
              ATerm e_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(b_6);
              e_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_8);
              b_1 = t;
              t = SSLsetAnnotations(b_1, e_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_6;
          }
        LocalPopChoice(z_39);
        t = xtc_transform_file_2_0(w_6, pass_verbose_0_0, t);
      }
    else
      {
        t = y_39;
        t = xtc_transform_term_2_0(y_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(b_7, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = term_v_36;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_a_40);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(y_5), term_a_40));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_40;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_c_40);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_b_40;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_c_40);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_d_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_6 = ATgetArgument(t, 0);
            {
              ATerm q_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(o_6);
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_6);
              v_0 = t;
              t = SSLsetAnnotations(v_0, q_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_6;
          }
        LocalPopChoice(g_40);
        t = xtc_transform_file_2_0(z_3, d_4, t);
      }
    else
      {
        t = f_40;
        t = xtc_transform_term_2_0(f_4, h_4, t);
      }
  }
  t = if_keep1_1_0(i_4, t);
  n_6 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_7 = ATgetArgument(t, 0);
            {
              ATerm b_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(n_6);
              b_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
              y_0 = t;
              t = SSLsetAnnotations(y_0, b_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_6;
          }
        LocalPopChoice(i_40);
        t = xtc_transform_file_2_0(k_4, n_4, t);
      }
    else
      {
        t = h_40;
        t = xtc_transform_term_2_0(u_4, d_5, t);
      }
  }
  t = if_keep1_1_0(f_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_c_40);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_c_40);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_c_40);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_c_40);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = save_as_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(n_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = save_as_1_0(o_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_c_40);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_c_40);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = get_outfile_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_u_40;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(b_3, t);
  t = profile_p__2_0(e_3, f_3, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  t = term_v_36;
  f_9 = t;
  t = (ATerm) ATinsert(ATempty, term_v_40);
  g_9 = t;
  t = SSL_printnl(f_9, g_9);
  t = e_9;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,p_9 = NULL;
  h_9 = t;
  t = term_v_36;
  i_9 = t;
  t = (ATerm) ATinsert(CheckATermList(h_9), term_y_40);
  p_9 = t;
  t = SSL_printnl(i_9, p_9);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(h_9), term_y_40));
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_f_41);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm y_10 = NULL;
  t = pass_verbose_0_0(t);
  y_10 = t;
  t = (ATerm) ATinsert(CheckATermList(y_10), term_f_41);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
      z_8 = t;
      t = term_q_36;
      a_9 = t;
      t = term_o_39;
      b_9 = t;
      t = term_p_39;
      t = h_15(a_9, b_9, t);
      t = z_8;
      LocalPopChoice(i_41);
      {
        ATerm c_9 = NULL;
        c_9 = t;
        t = if_verbose2_1_0(f_7, t);
        {
          static ATerm h_7 (ATerm t);
          static ATerm h_7 (ATerm t)
          {
            ATerm t_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
            j_5 = t;
            t = term_j_41;
            h_5 = t;
            t = (ATerm) ATinsert(ATempty, term_k_41);
            i_5 = t;
            t = j_5;
            t = comp_0_2(h_5, i_5, t);
            t_9 = t;
            {
              ATerm l_41 = t;
              int m_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL;
                  t = term_q_36;
                  e_10 = t;
                  t = term_n_41;
                  g_10 = t;
                  t = term_o_41;
                  t = h_15(e_10, g_10, t);
                  a_10 = t;
                  t = term_q_36;
                  c_10 = t;
                  t = term_p_41;
                  d_10 = t;
                  t = term_v_41;
                  t = h_15(c_10, d_10, t);
                  b_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, b_10);
                  {
                    ATerm x_41 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm h_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            h_10 = ATgetArgument(t, 0);
                            if((h_10 != ATgetArgument(t, 1)))
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
                        t = x_41;
                      }
                  }
                  LocalPopChoice(m_41);
                }
              else
                {
                  t = l_41;
                  {
                    ATerm j_10 = NULL,k_10 = NULL;
                    t = term_q_36;
                    j_10 = t;
                    t = term_n_41;
                    k_10 = t;
                    t = term_o_41;
                    t = h_15(j_10, k_10, t);
                    t = debug_1_0(o_7, t);
                    _fail(t);
                  }
                }
            }
            t = t_9;
            {
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                t = get_outfile_1_0(q_7, t);
                if(((x_8 != NULL) && (x_8 != t)))
                  _fail(t);
                else
                  x_8 = t;
                return(t);
              }
              t = copy_to_1_0(p_7, t);
            }
            {
              ATerm c_42 = t;
              int e_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_10 = NULL,w_10 = NULL;
                  w_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      u_10 = ATgetArgument(t, 0);
                      {
                        ATerm m_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(w_10);
                        m_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, u_10);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, m_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = w_10;
                    }
                  LocalPopChoice(e_42);
                  t = xtc_transform_file_2_0(r_7, s_7, t);
                }
              else
                {
                  t = c_42;
                  t = xtc_transform_term_2_0(t_7, w_7, t);
                }
            }
            {
              static ATerm x_7 (ATerm t);
              static ATerm x_7 (ATerm t)
              {
                t = get_outfile_1_0(z_7, t);
                if(((y_8 != NULL) && (y_8 != t)))
                  _fail(t);
                else
                  y_8 = t;
                return(t);
              }
              t = copy_to_1_0(x_7, t);
            }
            x_9 = t;
            t = term_v_36;
            y_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_8)), term_h_42), not_null(x_8)), term_g_42));
            z_9 = t;
            t = SSL_printnl(y_9, z_9);
            t = x_9;
            return(t);
          }
          t = profile_p__2_0(g_7, h_7, t);
        }
        t = c_9;
      }
    }
  else
    {
      t = h_41;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
        t = term_q_36;
        j_11 = t;
        t = term_l_42;
        k_11 = t;
        t = term_n_42;
        t = h_15(j_11, k_11, t);
        i_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_11, term_e_40);
        t = geq_0_0(t);
        t = e_11;
        t = c_127(t);
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = e_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm o_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
        t = n_11;
        t = k_136(t);
        s_11 = t;
        t = term_q_36;
        x_11 = t;
        t = term_w_42;
        y_11 = t;
        t = term_x_42;
        t = h_15(x_11, y_11, t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_11, s_11);
        t = geq_0_0(t);
        t = n_11;
        t = l_136(t);
        LocalPopChoice(t_42);
      }
    else
      {
        t = o_42;
        t = n_11;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_c_40);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_7 = NULL;
  t = pass_verbose_0_0(t);
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(l_7), term_c_40);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_c_40);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm w_8 = NULL;
  t = pass_verbose_0_0(t);
  w_8 = t;
  t = (ATerm) ATinsert(CheckATermList(w_8), term_c_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_13;
        {
          ATerm d_43 = t;
          int f_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  d_7 = ATgetArgument(t, 0);
                  {
                    ATerm u_7 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(l_13);
                    u_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, d_7);
                    a_4 = t;
                    t = SSLsetAnnotations(a_4, u_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = l_13;
                }
              LocalPopChoice(f_43);
              t = xtc_transform_file_2_0(b_8, c_8, t);
            }
          else
            {
              t = d_43;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
        t = l_13;
        {
          ATerm l_43 = t;
          int m_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  t_8 = ATgetArgument(t, 0);
                  {
                    ATerm l_9 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(l_13);
                    l_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, l_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = l_13;
                }
              LocalPopChoice(m_43);
              t = xtc_transform_file_2_0(g_8, h_8, t);
            }
          else
            {
              t = l_43;
              t = xtc_transform_term_2_0(i_8, j_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm v_13 = NULL,i_14 = NULL,k_14 = NULL;
  k_14 = t;
  t = term_o_43;
  v_13 = t;
  t = k_14;
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,o_14 = NULL;
        t = term_q_36;
        n_14 = t;
        t = term_o_39;
        o_14 = t;
        t = term_p_39;
        t = h_15(n_14, o_14, t);
        t = k_14;
        LocalPopChoice(t_43);
        t = (ATerm) ATinsert(ATempty, term_u_43);
      }
    else
      {
        t = s_43;
        t = (ATerm) ATempty;
      }
  }
  i_14 = t;
  t = k_14;
  t = comp_0_2(v_13, i_14, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  {
    ATerm v_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
        t = term_q_36;
        r_15 = t;
        t = term_l_42;
        s_15 = t;
        t = term_n_42;
        t = h_15(r_15, s_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_a_44);
        t = geq_0_0(t);
        t = u_14;
        t = f_127(t);
        LocalPopChoice(z_43);
      }
    else
      {
        t = v_43;
        t = u_14;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = term_v_36;
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, term_c_44);
  f_18 = t;
  t = SSL_printnl(e_18, f_18);
  t = d_18;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = if_verbose1_1_0(n_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm m_18 = NULL;
  t = if_verbose3_1_0(p_8, t);
  t = olevel_2_0(u_8, d_9, t);
  t = olevel_2_0(s_9, w_9, t);
  t = olevel_2_0(z_10, d_11, t);
  m_18 = t;
  {
    ATerm d_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_21 = ATgetArgument(t, 0);
            {
              ATerm s_12 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(m_18);
              s_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_21);
              c_6 = t;
              t = SSLsetAnnotations(c_6, s_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_18;
          }
        LocalPopChoice(f_44);
        t = xtc_transform_file_2_0(q_12, r_12, t);
      }
    else
      {
        t = d_44;
        t = xtc_transform_term_2_0(t_12, u_12, t);
      }
  }
  t = olevel_2_0(v_12, w_12, t);
  t = olevel_2_0(r_13, s_13, t);
  t = olevel_2_0(y_15, z_15, t);
  t = olevel_2_0(l_16, m_16, t);
  t = olevel_2_0(n_17, o_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm g_18 = NULL,k_18 = NULL,l_18 = NULL;
  g_18 = t;
  t = term_v_36;
  k_18 = t;
  t = (ATerm) ATinsert(CheckATermList(g_18), term_g_44);
  l_18 = t;
  t = SSL_printnl(k_18, l_18);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(g_18), term_g_44));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,r_18 = NULL;
  n_18 = t;
  t = term_q_36;
  o_18 = t;
  t = term_w_42;
  r_18 = t;
  t = term_x_42;
  t = h_15(o_18, r_18, t);
  t = debug_1_0(r_8, t);
  t = n_18;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm i_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_18 = ATgetArgument(t, 0);
            {
              ATerm q_9 = NULL,l_4 = NULL;
              t = SSLgetAnnotations(s_18);
              q_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_18);
              l_4 = t;
              t = SSLsetAnnotations(l_4, q_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_18;
          }
        LocalPopChoice(j_44);
        t = xtc_transform_file_2_0(j_9, k_9, t);
      }
    else
      {
        t = i_44;
        t = xtc_transform_term_2_0(m_9, n_9, t);
      }
  }
  t = if_keep1_1_0(o_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm a_19 = NULL;
  t = pass_verbose_0_0(t);
  a_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), term_c_40);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_c_40);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = save_as_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_k_44;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_19;
        {
          ATerm n_44 = t;
          if((PushChoice() == 0))
            {
              ATerm n_10 = NULL,q_10 = NULL;
              t = term_q_36;
              n_10 = t;
              t = term_o_44;
              q_10 = t;
              t = term_p_44;
              t = h_15(n_10, q_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_44;
            }
        }
        t = u_19;
        {
          ATerm q_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm r_11 = NULL,r_5 = NULL;
                    t = SSLgetAnnotations(u_19);
                    r_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
                    r_5 = t;
                    t = SSLsetAnnotations(r_5, r_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = u_19;
                }
              LocalPopChoice(s_44);
              t = xtc_transform_file_2_0(f_10, i_10, t);
            }
          else
            {
              t = q_44;
              t = xtc_transform_term_2_0(l_10, r_10, t);
            }
        }
        t = if_keep2_1_0(s_10, t);
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        t = u_19;
      }
  }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm f_11 = NULL;
  t = pass_verbose_0_0(t);
  f_11 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), term_c_40);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_c_40);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = save_as_1_0(t_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  y_19 = t;
  {
    ATerm v_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_20 = ATgetArgument(t, 0);
            {
              ATerm a_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(y_19);
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, a_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_19;
          }
        LocalPopChoice(x_44);
        t = xtc_transform_file_2_0(g_11, l_11, t);
      }
    else
      {
        t = v_44;
        t = xtc_transform_term_2_0(o_11, p_11, t);
      }
  }
  t = if_keep6_1_0(q_11, t);
  x_19 = t;
  {
    ATerm y_44 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_20 = ATgetArgument(t, 0);
            {
              ATerm e_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(x_19);
              e_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
              t_5 = t;
              t = SSLsetAnnotations(t_5, e_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_19;
          }
        LocalPopChoice(b_45);
        t = xtc_transform_file_2_0(u_11, v_11, t);
      }
    else
      {
        t = y_44;
        t = xtc_transform_term_2_0(z_11, b_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_12, t);
  w_19 = t;
  {
    ATerm d_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_20 = ATgetArgument(t, 0);
            {
              ATerm k_12 = NULL,u_5 = NULL;
              t = SSLgetAnnotations(w_19);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_20);
              u_5 = t;
              t = SSLsetAnnotations(u_5, k_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_19;
          }
        LocalPopChoice(f_45);
        t = xtc_transform_file_2_0(f_12, g_12, t);
      }
    else
      {
        t = d_45;
        t = xtc_transform_term_2_0(h_12, o_12, t);
      }
  }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_c_40);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_c_40);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_c_40);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_c_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = save_as_1_0(d_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_c_40);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_c_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm q_21 = NULL;
  t = pass_verbose_0_0(t);
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(q_21), term_c_40);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm r_21 = NULL;
  t = pass_verbose_0_0(t);
  r_21 = t;
  t = (ATerm) ATinsert(CheckATermList(r_21), term_c_40);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,w_21 = NULL;
  w_21 = t;
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_22 = ATgetArgument(t, 0);
            {
              ATerm c_13 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(w_21);
              c_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_22);
              f_6 = t;
              t = SSLsetAnnotations(f_6, c_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_21;
          }
        LocalPopChoice(s_45);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = r_45;
        t = xtc_transform_term_2_0(z_12, a_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  t_21 = t;
  {
    ATerm t_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_22 = ATgetArgument(t, 0);
            {
              ATerm p_13 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(t_21);
              p_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, p_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_21;
          }
        LocalPopChoice(w_45);
        t = xtc_transform_file_2_0(b_13, d_13, t);
      }
    else
      {
        t = t_45;
        t = xtc_transform_term_2_0(e_13, f_13, t);
      }
  }
  s_21 = t;
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_23 = ATgetArgument(t, 0);
            {
              ATerm w_13 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(s_21);
              w_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, w_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(y_45);
        t = xtc_transform_file_2_0(g_13, h_13, t);
      }
    else
      {
        t = x_45;
        t = xtc_transform_term_2_0(i_13, k_13, t);
      }
  }
  t = if_keep4_1_0(m_13, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm e_22 = NULL;
  t = pass_verbose_0_0(t);
  e_22 = t;
  t = (ATerm) ATinsert(CheckATermList(e_22), term_c_40);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_c_40);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm n_22 = NULL;
  t = pass_verbose_0_0(t);
  n_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), term_c_40);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm o_22 = NULL;
  t = pass_verbose_0_0(t);
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), term_c_40);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm n_23 = NULL;
  t = pass_verbose_0_0(t);
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), term_c_40);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm o_23 = NULL;
  t = pass_verbose_0_0(t);
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(o_23), term_c_40);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = save_as_1_0(q_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL;
  q_23 = t;
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_23 = ATgetArgument(t, 0);
            {
              ATerm o_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(q_23);
              o_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, o_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_23;
          }
        LocalPopChoice(e_46);
        t = xtc_transform_file_2_0(t_13, u_13, t);
      }
    else
      {
        t = d_46;
        t = xtc_transform_term_2_0(e_14, t_14, t);
      }
  }
  p_23 = t;
  {
    ATerm f_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_24 = ATgetArgument(t, 0);
            {
              ATerm x_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(p_23);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_24);
              p_6 = t;
              t = SSLsetAnnotations(p_6, x_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_23;
          }
        LocalPopChoice(h_46);
        t = xtc_transform_file_2_0(j_15, p_15, t);
      }
    else
      {
        t = f_46;
        t = xtc_transform_term_2_0(t_15, u_15, t);
      }
  }
  t = if_keep2_1_0(v_15, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm y_23 = NULL;
  t = pass_verbose_0_0(t);
  y_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_23), term_c_40);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm z_23 = NULL;
  t = pass_verbose_0_0(t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), term_c_40);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm i_24 = NULL;
  t = pass_verbose_0_0(t);
  i_24 = t;
  t = (ATerm) ATinsert(CheckATermList(i_24), term_c_40);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm j_24 = NULL;
  t = pass_verbose_0_0(t);
  j_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), term_c_40);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_l_46;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_24 = ATgetArgument(t, 0);
            {
              ATerm b_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(k_24);
              b_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_24);
              q_6 = t;
              t = SSLsetAnnotations(q_6, b_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_24;
          }
        LocalPopChoice(n_46);
        t = xtc_transform_file_2_0(a_16, c_16, t);
      }
    else
      {
        t = m_46;
        t = xtc_transform_term_2_0(d_16, e_16, t);
      }
  }
  t = if_keep5_1_0(g_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(i_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm u_24 = NULL;
  t = pass_verbose_0_0(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), term_c_40);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_c_40);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,c_25 = NULL;
  c_25 = t;
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(c_25);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_25;
          }
        LocalPopChoice(t_46);
        t = xtc_transform_file_2_0(o_16, p_16, t);
      }
    else
      {
        t = s_46;
        t = xtc_transform_term_2_0(q_16, s_16, t);
      }
  }
  t = if_keep3_1_0(t_16, t);
  z_24 = t;
  {
    ATerm v_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_26 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(z_24);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_26);
              s_6 = t;
              t = SSLsetAnnotations(s_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(x_46);
        t = xtc_transform_file_2_0(w_16, x_16, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(y_16, z_16, t);
      }
  }
  t = if_keep3_1_0(b_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(d_17, t);
  y_24 = t;
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(y_24);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_26);
              t_6 = t;
              t = SSLsetAnnotations(t_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_24;
          }
        LocalPopChoice(z_46);
        t = xtc_transform_file_2_0(f_17, g_17, t);
      }
    else
      {
        t = y_46;
        t = xtc_transform_term_2_0(h_17, k_17, t);
      }
  }
  t = if_keep3_1_0(l_17, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm s_25 = NULL;
  t = pass_verbose_0_0(t);
  s_25 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), term_c_40);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm u_25 = NULL;
  t = pass_verbose_0_0(t);
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), term_c_40);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = save_as_1_0(u_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm e_26 = NULL;
  t = pass_verbose_0_0(t);
  e_26 = t;
  t = (ATerm) ATinsert(CheckATermList(e_26), term_c_40);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_c_40);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = save_as_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_j_47;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = save_as_1_0(e_17, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm r_26 = NULL;
  t = pass_verbose_0_0(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), term_c_40);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm s_26 = NULL;
  t = pass_verbose_0_0(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), term_c_40);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = save_as_1_0(m_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm t_26 = NULL,v_26 = NULL;
  v_26 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,x_6 = NULL;
              t = SSLgetAnnotations(v_26);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
              x_6 = t;
              t = SSLsetAnnotations(x_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_26;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(p_17, q_17, t);
      }
    else
      {
        t = p_47;
        t = xtc_transform_term_2_0(r_17, s_17, t);
      }
  }
  t = if_keep1_1_0(v_17, t);
  t_26 = t;
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,a_7 = NULL;
              t = SSLgetAnnotations(t_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_27);
              a_7 = t;
              t = SSLsetAnnotations(a_7, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(t_47);
        t = xtc_transform_file_2_0(x_17, y_17, t);
      }
    else
      {
        t = s_47;
        t = xtc_transform_term_2_0(z_17, b_18, t);
      }
  }
  t = if_keep1_1_0(i_18, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_c_40);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm g_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), term_c_40);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_u_47;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm n_27 = NULL;
  t = pass_verbose_0_0(t);
  n_27 = t;
  t = (ATerm) ATinsert(CheckATermList(n_27), term_c_40);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_c_40);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = save_as_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_w_47;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  t = profile_p__2_0(l_8, m_8, t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_f_41);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm n_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(n_29), term_f_41);
  return(t);
}
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  u_28 = t;
  {
    static ATerm t_18 (ATerm t);
    static ATerm t_18 (ATerm t)
    {
      static ATerm v_18 (ATerm t);
      static ATerm v_18 (ATerm t)
      {
        ATerm z_28 = NULL,c_29 = NULL;
        t = b_100(t);
        z_28 = t;
        t = term_x_47;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_47, z_28);
        t = n_15(c_29, z_28, t);
        return(t);
      }
      t = get_outfile_1_0(v_18, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(t_18, t);
  }
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL,l_29 = NULL;
        l_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_29 = ATgetArgument(t, 0);
            {
              ATerm a_17 = NULL,o_8 = NULL;
              t = SSLgetAnnotations(l_29);
              a_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_29);
              o_8 = t;
              t = SSLsetAnnotations(o_8, a_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_29;
          }
        LocalPopChoice(z_47);
        t = xtc_transform_file_2_0(x_18, z_18, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(c_19, e_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t);
    static ATerm f_19 (ATerm t)
    {
      ATerm q_29 = NULL;
      t = term_b_48;
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_28), term_b_48);
      t = n_15(not_null(p_28), q_29, t);
      if(((q_28 != NULL) && (q_28 != t)))
        _fail(t);
      else
        q_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_48), not_null(q_28)), term_d_48), not_null(p_28)), term_c_48);
  y_28 = t;
  t = SSL_concat_strings(y_28);
  v_28 = t;
  t = term_v_36;
  w_28 = t;
  t = (ATerm) ATinsert(ATempty, v_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = u_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL,c_30 = NULL,e_30 = NULL;
        t = term_q_36;
        c_30 = t;
        t = term_l_42;
        e_30 = t;
        t = term_n_42;
        t = h_15(c_30, e_30, t);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_30, term_u_36);
        t = geq_0_0(t);
        t = w_29;
        t = d_127(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
        t = w_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_s_36;
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL;
        t = term_q_36;
        l_30 = t;
        t = term_s_36;
        m_30 = t;
        t = term_t_36;
        t = h_15(l_30, m_30, t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = term_e_40;
      }
  }
  i_30 = t;
  t = term_e_40;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_e_40);
  t = l_14(i_30, k_30, t);
  j_30 = t;
  t = SSL_int_to_string(j_30);
  h_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_30), term_s_36);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_48 = ATgetArgument(t, 0);
      if(match_cons(j_48, sym_Stream_1))
        {
          r_30 = ATgetArgument(j_48, 0);
        }
      else
        _fail(t);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14(r_30, s_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  q_30 = t;
  t = xtc_new_file_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
  t = c_14(h_19, p_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_30);
  t = xtc_transform_file_2_0(c_135, d_135, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_14 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_execvp(w_67, x_67);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_31 = ATgetArgument(t, 0);
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = SSL_int_to_string(x_31);
        i_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_48), i_17), term_n_48);
        j_17 = t;
        t = SSL_concat_strings(j_17);
      }
    }
  else
    {
      ATerm t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_31 = ATgetArgument(t, 0);
          y_31 = ATgetArgument(t, 1);
          z_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_31);
      t_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_31), term_q_48), t_17), term_p_48), x_31);
      u_17 = t;
      t = SSL_concat_strings(u_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  {
    ATerm r_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_19 (ATerm t);
        static ATerm l_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm u_48 = ATgetArgument(t, 0);
              if((i_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm v_48 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_54), term_f_54), term_b_54), term_x_53), term_u_53), term_q_53), term_m_53), term_g_53), term_c_53), term_y_52), term_u_52), term_m_52), term_i_52), term_c_52), term_u_51), term_n_51), term_d_51), term_y_50), term_r_50), term_i_50), term_a_50), term_w_49), term_s_49), term_o_49), term_j_49), term_f_49), term_b_49), term_y_48);
        t = fetch_elem_1_0(l_19, t);
        LocalPopChoice(t_48);
      }
    else
      {
        t = r_48;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_32 = NULL,d_33 = NULL;
  q_32 = t;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_54 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
            {
              ATerm n_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_54);
        {
          ATerm o_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL,c_18 = NULL,h_18 = NULL;
              t = d_33;
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
              a_18 = t;
              t = term_v_36;
              c_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_18), term_r_54);
              h_18 = t;
              t = SSL_printnl(c_18, h_18);
              t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(ATinsert(ATempty, a_18), term_r_54));
              LocalPopChoice(p_54);
            }
          else
            {
              t = o_54;
              t = q_32;
            }
        }
      }
    else
      {
        t = k_54;
        t = q_32;
      }
  }
  t = q_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = fork_0_0(t);
  m_33 = t;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_33;
        t = n_127(t);
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = SSL_waitpid(m_33);
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
              ATerm w_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,t_33 = NULL;
  t_33 = t;
  t = g_136(t);
  t = xtc_find_0_0(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, t_33);
  {
    static ATerm p_19 (ATerm t);
    static ATerm p_19 (ATerm t)
    {
      ATerm u_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_33, t_33);
      t = d_14(r_33, t_33, t);
      t = term_r_37;
      u_33 = t;
      t = SSL_exit(u_33);
      return(t);
    }
    t = fork_and_wait_1_0(p_19, t);
  }
  t = t_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,c_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_34 = NULL,e_34 = NULL;
      t = z_33;
      t = xtc_new_file_0_0(t);
      d_34 = t;
      t = t_0(t);
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_34, (ATerm) ATinsert(ATinsert(ATempty, d_34), term_f_37));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_34);
    }
  else
    {
      ATerm j_34 = NULL,k_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_34;
      t = xtc_new_file_0_0(t);
      j_34 = t;
      t = t_0(t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_34), term_f_37), c_34), term_x_54));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm b_55 = t;
  int c_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_50 = NULL,d_50 = NULL;
      d_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          c_50 = ATgetArgument(t, 0);
          {
            ATerm n_30 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(d_50);
            n_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_50);
            q_8 = t;
            t = SSLsetAnnotations(q_8, n_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_50;
        }
      LocalPopChoice(c_55);
      {
        static ATerm r_19 (ATerm t);
        static ATerm v_19 (ATerm t);
        static ATerm r_19 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm v_19 (ATerm t)
        {
          ATerm f_50 = NULL;
          t = pass_verbose_0_0(t);
          f_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), f_50), (ATerm) ATinsert(ATempty, term_c_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, v_19, t);
      }
    }
  else
    {
      t = b_55;
      {
        static ATerm a_20 (ATerm t);
        static ATerm b_20 (ATerm t);
        static ATerm a_20 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm b_20 (ATerm t)
        {
          ATerm h_50 = NULL;
          t = pass_verbose_0_0(t);
          h_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), h_50), (ATerm) ATinsert(ATempty, term_c_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(a_20, b_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,r_34 = NULL;
  n_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_34;
      t = y_115(t);
    }
  else
    {
      ATerm z_34 = NULL,a_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          r_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = a_116(t);
      z_34 = t;
      t = r_34;
      t = foldr_3_0(y_115, z_115, a_116, t);
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_34, a_35);
      t = z_115(t);
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_35), term_e_55);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  t = term_q_36;
  b_35 = t;
  t = term_e_55;
  c_35 = t;
  t = term_f_55;
  t = h_15(b_35, c_35, t);
  t = foldr_3_0(d_20, conc_0_0, f_20, t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_c_40);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_c_40);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = get_outfile_1_0(b_21, t);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_h_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL,m_19 = NULL,n_19 = NULL,s_19 = NULL;
        t = term_q_36;
        n_19 = t;
        t = term_k_55;
        s_19 = t;
        t = term_l_55;
        t = h_15(n_19, s_19, t);
        t = r_36;
        {
          ATerm m_55 = t;
          int n_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_36;
              {
                ATerm o_55 = t;
                int q_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        g_20 = ATgetArgument(t, 0);
                        {
                          ATerm g_21 = NULL,s_8 = NULL;
                          t = SSLgetAnnotations(r_36);
                          g_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
                          s_8 = t;
                          t = SSLsetAnnotations(s_8, g_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = r_36;
                      }
                    LocalPopChoice(q_55);
                    t = xtc_transform_file_2_0(h_20, l_20, t);
                  }
                else
                  {
                    t = o_55;
                    t = xtc_transform_term_2_0(p_20, u_20, t);
                  }
              }
              LocalPopChoice(n_55);
            }
          else
            {
              t = m_55;
              {
                ATerm r_20 = NULL,w_20 = NULL,a_21 = NULL;
                t = term_v_36;
                w_20 = t;
                t = (ATerm) ATinsert(ATempty, term_r_55);
                a_21 = t;
                t = SSL_printnl(w_20, a_21);
                t = term_e_40;
                r_20 = t;
                t = SSL_exit(r_20);
                t = (ATerm) ATinsert(ATempty, term_r_55);
              }
            }
        }
        t = copy_to_1_0(z_20, t);
        i_19 = t;
        t = term_v_36;
        j_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_t_55));
        m_19 = t;
        t = SSL_printnl(j_19, m_19);
        t = i_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
        t = r_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm v_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
        t = term_q_36;
        b_37 = t;
        t = term_l_42;
        c_37 = t;
        t = term_n_42;
        t = h_15(b_37, c_37, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_37, term_l_46);
        t = geq_0_0(t);
        t = y_36;
        t = g_127(t);
        LocalPopChoice(x_55);
      }
    else
      {
        t = v_55;
        t = y_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,p_37 = NULL,q_37 = NULL;
        t = term_q_36;
        p_37 = t;
        t = term_l_42;
        q_37 = t;
        t = term_n_42;
        t = h_15(p_37, q_37, t);
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, term_h_49);
        t = geq_0_0(t);
        t = h_37;
        t = h_127(t);
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        t = h_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL;
      t = term_q_36;
      u_37 = t;
      t = term_e_56;
      v_37 = t;
      t = term_f_56;
      t = h_15(u_37, v_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_56);
      LocalPopChoice(d_56);
    }
  else
    {
      t = c_56;
      t = (ATerm) ATinsert(ATempty, term_g_56);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  d_38 = t;
  t = term_h_56;
  b_38 = t;
  t = term_q_36;
  f_38 = t;
  t = term_i_56;
  g_38 = t;
  t = term_j_56;
  t = h_15(f_38, g_38, t);
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_38), term_i_56);
  c_38 = t;
  t = d_38;
  t = comp_0_2(b_38, c_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_38 = NULL,o_38 = NULL,p_38 = NULL;
        t = term_q_36;
        o_38 = t;
        t = term_l_42;
        p_38 = t;
        t = term_n_42;
        t = h_15(o_38, p_38, t);
        m_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_38, term_p_40);
        t = geq_0_0(t);
        t = k_38;
        t = e_127(t);
        LocalPopChoice(l_56);
      }
    else
      {
        t = k_56;
        t = k_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm r_38 = NULL;
  static ATerm d_21 (ATerm t);
  static ATerm d_21 (ATerm t)
  {
    t = j_109(t);
    if(((r_38 != NULL) && (r_38 != t)))
      _fail(t);
    else
      r_38 = t;
    return(t);
  }
  t = fetch_1_0(d_21, t);
  t = not_null(r_38);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  c_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_41 = ATgetArgument(t, 0);
      {
        ATerm u_21 = NULL,c_22 = NULL,u_9 = NULL;
        t = SSLgetAnnotations(c_41);
        u_21 = t;
        t = d_41;
        t = fetch_elem_1_0(h_21, t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, c_22);
        u_9 = t;
        t = SSLsetAnnotations(u_9, u_21);
      }
    }
  else
    {
      ATerm d_23 = NULL,j_23 = NULL,v_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          d_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_41);
      d_23 = t;
      t = d_41;
      t = fetch_elem_1_0(i_21, t);
      j_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, j_23);
      v_9 = t;
      t = SSLsetAnnotations(v_9, d_23);
    }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,s_22 = NULL;
  k_22 = t;
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            l_22 = ATgetArgument(t, 0);
            s_22 = ATgetArgument(t, 1);
            {
              ATerm r_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_56);
        t = l_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_22;
      }
    else
      {
        t = m_56;
        if(match_cons(t, sym_RDef_3))
          {
            l_22 = ATgetArgument(t, 0);
            s_22 = ATgetArgument(t, 1);
            {
              ATerm s_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_22;
      }
  }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,u_23 = NULL;
  l_23 = t;
  {
    ATerm t_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            m_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
            {
              ATerm x_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_56);
        t = m_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_23;
      }
    else
      {
        t = t_56;
        if(match_cons(t, sym_RDef_3))
          {
            m_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
            {
              ATerm y_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(f_21, t);
  n_39 = t;
  t = term_v_36;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, term_z_56);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = n_39;
  return(t);
}
static ATerm a_14 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm a_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_57;
      }
  }
  t = b_23;
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_d_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm b_14 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm q_41 = NULL;
  t = SSL_write_term_to_stream_baf(v_24, w_24);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_41);
  return(t);
}
static ATerm c_14 (ATerm o_108 (ATerm), ATerm s_213, ATerm f_25, ATerm t)
{
  ATerm r_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_213, term_e_57);
  t = b_15(t);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_41, f_25);
  t = o_108(t);
  t = fclose_0_0(t);
  t = f_25;
  return(t);
}
static ATerm f_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,w_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  w_41 = t;
  t = k_122(t);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_41, e_45, c_45);
  t = i_15(s_41, e_45, c_45, t);
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_42 = NULL;
        t = term_h_57;
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_41, term_h_57);
        t = h_15(s_41, d_42, t);
        {
          ATerm i_57 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_57;
            }
        }
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_41, term_h_57, (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATinsert(CheckATermList(t_41), e_45)));
  t = lookup_table_0_1(s_41, t);
  b_42 = t;
  t = term_h_57;
  y_41 = t;
  t = (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATinsert(CheckATermList(t_41), e_45));
  z_41 = t;
  t = b_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(y_41, z_41, a_42, t);
  t = w_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_42 = NULL;
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_42 = NULL,q_24 = NULL;
      k_42 = t;
      t = term_p_57;
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_42, term_p_57);
      t = n_15(k_42, q_24, t);
      f_42 = t;
      t = SSL_mkstemp(f_42);
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      {
        ATerm m_42 = NULL;
        t = term_q_57;
        m_42 = t;
        t = SSL_perror(m_42);
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
static ATerm j_21 (ATerm t)
{
  t = term_t_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_42 = NULL,r_42 = NULL,u_42 = NULL,v_42 = NULL,y_42 = NULL;
  t = P__tmpdir_0_0(t);
  v_42 = t;
  t = term_u_57;
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_42, term_u_57);
  t = n_15(v_42, y_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_38;
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, term_s_38);
  t = f_14(j_21, r_42, u_42, t);
  t = SSL_close(p_42);
  t = r_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_43 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_57);
      g_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_43, (ATerm) ATinsert(ATempty, term_y_57));
      t = c_15(e_43, g_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm n_43 = NULL,p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_58 = ATgetArgument(t, 0);
      if(match_cons(c_58, sym_Stream_1))
        {
          n_43 = ATgetArgument(c_58, 0);
        }
      else
        _fail(t);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14(n_43, p_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  t = read_from_0_0(t);
  t = e_135(t);
  i_43 = t;
  t = xtc_new_file_0_0(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
  t = c_14(k_21, h_43, i_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_43);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = debug_1_0(m_21, t);
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = term_d_58;
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = save_as_1_0(v_21, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_e_58;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm b_44 = NULL,r_44 = NULL;
  r_44 = t;
  {
    ATerm r_58 = t;
    int s_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,p_25 = NULL;
        t = term_q_36;
        o_25 = t;
        t = term_t_58;
        p_25 = t;
        t = term_u_58;
        t = h_15(o_25, p_25, t);
        b_44 = t;
        t = if_verbose2_1_0(l_21, t);
        t = r_44;
        {
          ATerm w_58 = t;
          int z_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_25 = NULL,r_25 = NULL;
              t = term_q_36;
              q_25 = t;
              t = term_o_39;
              r_25 = t;
              t = term_p_39;
              t = h_15(q_25, r_25, t);
              t = r_44;
              LocalPopChoice(z_58);
            }
          else
            {
              t = w_58;
              {
                static ATerm n_21 (ATerm t);
                static ATerm n_21 (ATerm t)
                {
                  ATerm a_59 = t;
                  int b_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = a_14(b_44, k_26, t);
                      LocalPopChoice(b_59);
                    }
                  else
                    {
                      t = a_59;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(n_21, t);
              }
            }
        }
        LocalPopChoice(s_58);
      }
    else
      {
        t = r_58;
        t = r_44;
      }
  }
  t = if_keep3_1_0(p_21, t);
  return(t);
}
static ATerm y_21 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  {
    ATerm d_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_45);
        LocalPopChoice(g_59);
      }
    else
      {
        t = d_59;
        t = u_45;
      }
  }
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_t_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  static ATerm x_21 (ATerm t);
  static ATerm x_21 (ATerm t)
  {
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
    n_45 = t;
    t = term_t_57;
    o_45 = t;
    t = term_h_57;
    p_45 = t;
    t = term_h_59;
    t = h_15(o_45, p_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_45 != NULL) && (l_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_45 = ATgetFirst((ATermList) t);
        {
          ATerm i_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_45;
    t = map_1_0(y_21, t);
    t = n_45;
    t = end_scope_1_0(z_21, t);
    return(t);
  }
  t = repeat_2_0(x_21, _id, t);
  m_45 = t;
  t = SSL_exit(m_45);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm k_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_46 = NULL,w_46 = NULL;
      t = term_q_36;
      u_46 = t;
      t = term_f_37;
      w_46 = t;
      t = term_i_37;
      t = h_15(u_46, w_46, t);
      LocalPopChoice(n_59);
    }
  else
    {
      t = k_59;
      t = term_v_38;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      t = term_f_37;
      {
        ATerm o_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = NULL,c_28 = NULL;
            t = term_q_36;
            h_27 = t;
            t = term_f_37;
            c_28 = t;
            t = term_i_37;
            t = h_15(h_27, c_28, t);
            LocalPopChoice(p_59);
          }
        else
          {
            t = o_59;
            t = term_v_38;
          }
      }
      d_27 = t;
      t = term_x_57;
      f_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_57, d_27);
      t = q_14(f_27, d_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm q_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_46;
      t = copy_to_1_0(b_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_k_36;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm a_47 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL;
  t = a_100(t);
  a_47 = t;
  t = term_q_36;
  e_47 = t;
  t = term_n_41;
  f_47 = t;
  t = term_o_41;
  t = h_15(e_47, f_47, t);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, a_47);
  t = n_15(c_47, a_47, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_59 = t;
    int t_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = k_48;
        t = u_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, l_48, k_28);
        t = q_14(l_48, k_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
        LocalPopChoice(t_59);
      }
    else
      {
        t = s_59;
        {
          ATerm u_59 = t;
          int x_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL;
              t = k_48;
              t = u_0(t);
              b_29 = t;
              {
                ATerm y_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_29 = NULL;
                    h_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = h_29;
                          }
                        else
                          {
                            t = h_29;
                            if((l_48 != t))
                              {
                                _fail(t);
                              }
                            t = h_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_48, b_29);
              t = q_14(l_48, b_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
              LocalPopChoice(x_59);
            }
          else
            {
              t = u_59;
              t = k_48;
              t = u_0(t);
              if((l_48 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
            }
        }
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = get_outfile_1_0(g_22, t);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = term_z_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm k_49 = NULL;
  k_49 = t;
  {
    ATerm a_60 = t;
    int b_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL;
        t = term_q_36;
        x_29 = t;
        t = term_c_60;
        y_29 = t;
        t = term_e_60;
        t = h_15(x_29, y_29, t);
        t = k_49;
        t = copy_to_1_0(d_22, t);
        t_29 = t;
        t = term_v_36;
        u_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_60));
        v_29 = t;
        t = SSL_printnl(u_29, v_29);
        t = t_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(b_60);
      }
    else
      {
        t = a_60;
        t = k_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,p_50 = NULL;
  t = term_l_42;
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,s_50 = NULL;
        t = term_q_36;
        q_50 = t;
        t = term_l_42;
        s_50 = t;
        t = term_n_42;
        t = h_15(q_50, s_50, t);
        LocalPopChoice(j_60);
      }
    else
      {
        t = i_60;
        t = term_e_40;
      }
  }
  k_50 = t;
  t = term_e_40;
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, term_e_40);
  t = l_14(k_50, p_50, t);
  l_50 = t;
  t = SSL_int_to_string(l_50);
  j_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_50), term_l_42);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,b_51 = NULL,c_51 = NULL,e_51 = NULL,f_51 = NULL;
  t = term_q_36;
  e_51 = t;
  t = term_k_60;
  f_51 = t;
  t = term_l_60;
  t = h_15(e_51, f_51, t);
  t_50 = t;
  t = term_n_60;
  t = xtc_find_path_0_0(t);
  u_50 = t;
  t = term_o_60;
  t = xtc_find_path_0_0(t);
  b_51 = t;
  t = term_p_60;
  t = xtc_find_path_0_0(t);
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_51), term_k_60), b_51), term_k_60), u_50), term_k_60));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,m_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  s_51 = t;
  t = term_s_60;
  g_51 = t;
  t = s_51;
  {
    ATerm t_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL,y_51 = NULL;
        t = term_q_36;
        w_51 = t;
        t = term_f_37;
        y_51 = t;
        t = term_i_37;
        t = h_15(w_51, y_51, t);
        LocalPopChoice(w_60);
      }
    else
      {
        t = t_60;
        {
          ATerm z_51 = NULL,a_52 = NULL;
          t = term_q_36;
          z_51 = t;
          t = term_n_41;
          a_52 = t;
          t = term_o_41;
          t = h_15(z_51, a_52, t);
        }
      }
  }
  t_51 = t;
  t = s_51;
  t = get_include_dirs_0_0(t);
  i_51 = t;
  t = s_51;
  t = pass_keep_0_0(t);
  m_51 = t;
  t = term_z_60;
  {
    ATerm a_61 = t;
    int b_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL,h_52 = NULL;
        t = term_q_36;
        f_52 = t;
        t = term_z_60;
        h_52 = t;
        t = term_d_61;
        t = h_15(f_52, h_52, t);
        LocalPopChoice(b_61);
        t = (ATerm) ATinsert(ATempty, term_z_60);
      }
    else
      {
        t = a_61;
        t = (ATerm) ATempty;
      }
  }
  r_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_51), m_51), i_51), (ATerm) ATinsert(ATinsert(ATempty, t_51), term_e_61));
  t = concat_0_0(t);
  h_51 = t;
  t = s_51;
  t = comp_0_2(g_51, h_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm o_52 = NULL;
  o_52 = t;
  {
    ATerm f_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
        t = term_q_36;
        r_52 = t;
        t = term_s_36;
        s_52 = t;
        t = term_t_36;
        t = h_15(r_52, s_52, t);
        q_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_52, term_p_40);
        t = geq_0_0(t);
        t = o_52;
        t = c_126(t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = f_61;
        t = o_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  j_53 = t;
  t = SSL_explode_string(j_53);
  {
    ATerm v_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_55 (ATerm t);
        static ATerm d_55 (ATerm t)
        {
          ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
          y_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_54 = ATgetFirst((ATermList) t);
              a_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_61 = t;
            int y_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_30 = NULL,s_31 = NULL,m_10 = NULL;
                t = SSLgetAnnotations(y_54);
                z_30 = t;
                t = a_55;
                t = d_55(t);
                s_31 = t;
                t = (ATerm) ATinsert(CheckATermList(s_31), z_54);
                m_10 = t;
                t = SSLsetAnnotations(m_10, z_30);
                LocalPopChoice(y_61);
              }
            else
              {
                t = x_61;
                {
                  ATerm a_62 = t;
                  int b_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(y_54);
                      j_32 = t;
                      t = z_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(a_55), z_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, j_32);
                      LocalPopChoice(b_62);
                    }
                  else
                    {
                      t = a_62;
                      {
                        ATerm w_32 = NULL,h_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(y_54);
                        w_32 = t;
                        t = z_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = a_55;
                        t = y_119(t);
                        h_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_33), z_54);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, w_32);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = d_55(t);
        LocalPopChoice(w_61);
      }
    else
      {
        t = v_61;
      }
  }
  i_53 = t;
  t = SSL_implode_string(i_53);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = debug_1_0(i_22, t);
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_c_62;
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_d_62;
  return(t);
}
static ATerm g_14 (ATerm w_22, ATerm t)
{
  ATerm p_55 = NULL,s_55 = NULL,u_55 = NULL,w_55 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  p_55 = t;
  t = if_verbose3_1_0(h_22, t);
  t = term_p_41;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_41, p_55);
  t = m_15(w_55, p_55, t);
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL,b_56 = NULL;
        t = term_q_36;
        a_56 = t;
        t = term_f_37;
        b_56 = t;
        t = term_i_37;
        t = h_15(a_56, b_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(h_62);
      }
    else
      {
        t = g_62;
        t = p_55;
      }
  }
  s_55 = t;
  t = if_verbose3_1_0(m_22, t);
  t = term_n_41;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_41, s_55);
  t = m_15(u_55, s_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_55);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(r_22, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_i_62;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = if_verbose1_1_0(y_22, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,j_36 = NULL,o_36 = NULL,p_36 = NULL,h_34 = NULL,i_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      n_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(n_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm j_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL;
        o_58 = t;
        t = term_q_36;
        p_58 = t;
        t = term_o_39;
        q_58 = t;
        t = term_p_39;
        t = h_15(p_58, q_58, t);
        t = o_58;
        LocalPopChoice(k_62);
      }
    else
      {
        t = j_62;
        t = add_main_0_0(t);
      }
  }
  m_58 = t;
  {
    ATerm m_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_58 = ATgetArgument(t, 0);
            {
              ATerm v_33 = NULL,v_10 = NULL;
              t = SSLgetAnnotations(m_58);
              v_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_58);
              v_10 = t;
              t = SSLsetAnnotations(v_10, v_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_58;
          }
        LocalPopChoice(o_62);
        t = xtc_transform_file_2_0(z_22, c_23, t);
      }
    else
      {
        t = m_62;
        t = xtc_transform_term_2_0(f_23, h_23, t);
      }
  }
  l_58 = t;
  {
    ATerm p_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_59 = ATgetArgument(t, 0);
            {
              ATerm a_34 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(l_58);
              a_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_59);
              a_11 = t;
              t = SSLsetAnnotations(a_11, a_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(r_62);
        t = xtc_transform_file_2_0(k_23, r_23, t);
      }
    else
      {
        t = p_62;
        t = xtc_transform_term_2_0(s_23, t_23, t);
      }
  }
  t = if_keep5_1_0(v_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(a_24, t);
  l_34 = t;
  t = term_s_62;
  h_34 = t;
  t = l_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  i_34 = t;
  t = l_34;
  t = comp_0_2(h_34, i_34, t);
  t = if_keep6_1_0(c_24, t);
  k_58 = t;
  {
    ATerm t_62 = t;
    int u_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_59 = ATgetArgument(t, 0);
            {
              ATerm p_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(k_58);
              p_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_59);
              b_11 = t;
              t = SSLsetAnnotations(b_11, p_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(u_62);
        t = xtc_transform_file_2_0(e_24, g_24, t);
      }
    else
      {
        t = t_62;
        t = xtc_transform_term_2_0(h_24, l_24, t);
      }
  }
  t = if_keep6_1_0(m_24, t);
  h_58 = t;
  {
    ATerm v_62 = t;
    int x_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_59 = ATgetArgument(t, 0);
            {
              ATerm u_34 = NULL,m_11 = NULL;
              t = SSLgetAnnotations(h_58);
              u_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_59);
              m_11 = t;
              t = SSLsetAnnotations(m_11, u_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_58;
          }
        LocalPopChoice(x_62);
        t = xtc_transform_file_2_0(o_24, r_24, t);
      }
    else
      {
        t = v_62;
        t = xtc_transform_term_2_0(s_24, t_24, t);
      }
  }
  t = if_keep5_1_0(a_25, t);
  g_58 = t;
  {
    ATerm d_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_60 = ATgetArgument(t, 0);
            {
              ATerm i_35 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(g_58);
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_60);
              i_12 = t;
              t = SSLsetAnnotations(i_12, i_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_58;
          }
        LocalPopChoice(f_63);
        t = xtc_transform_file_2_0(e_25, g_25, t);
      }
    else
      {
        t = d_63;
        t = xtc_transform_term_2_0(h_25, j_25, t);
      }
  }
  t = if_keep5_1_0(k_25, t);
  f_58 = t;
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_60 = ATgetArgument(t, 0);
            {
              ATerm m_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(f_58);
              m_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_60);
              j_12 = t;
              t = SSLsetAnnotations(j_12, m_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(h_63);
        t = xtc_transform_file_2_0(m_25, n_25, t);
      }
    else
      {
        t = g_63;
        t = xtc_transform_term_2_0(t_25, v_25, t);
      }
  }
  t = if_keep5_1_0(w_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm i_63 = t;
    int j_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_60 = NULL,v_60 = NULL,x_60 = NULL;
        u_60 = t;
        t = term_q_36;
        v_60 = t;
        t = term_o_39;
        x_60 = t;
        t = term_p_39;
        t = h_15(v_60, x_60, t);
        t = u_60;
        LocalPopChoice(j_63);
        {
          ATerm y_60 = NULL;
          y_60 = t;
          {
            ATerm k_63 = t;
            int l_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    c_61 = ATgetArgument(t, 0);
                    {
                      ATerm z_35 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(y_60);
                      z_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, c_61);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, z_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = y_60;
                  }
                LocalPopChoice(l_63);
                t = xtc_transform_file_2_0(z_25, a_26, t);
              }
            else
              {
                t = k_63;
                t = xtc_transform_term_2_0(b_26, d_26, t);
              }
          }
        }
      }
    else
      {
        t = i_63;
        {
          ATerm t_61 = NULL;
          t_61 = t;
          {
            ATerm m_63 = t;
            int n_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_61 = ATgetArgument(t, 0);
                    {
                      ATerm g_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(t_61);
                      g_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, z_61);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, g_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_61;
                  }
                LocalPopChoice(n_63);
                t = xtc_transform_file_2_0(g_26, h_26, t);
              }
            else
              {
                t = m_63;
                t = xtc_transform_term_2_0(i_26, j_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  p_36 = t;
  t = term_o_63;
  j_36 = t;
  t = p_36;
  t = pass_warnings_0_0(t);
  o_36 = t;
  t = p_36;
  t = comp_0_2(j_36, o_36, t);
  a_58 = t;
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_62 = ATgetArgument(t, 0);
            {
              ATerm w_36 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(a_58);
              w_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_62);
              n_12 = t;
              t = SSLsetAnnotations(n_12, w_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(q_63);
        t = xtc_transform_file_2_0(o_26, p_26, t);
      }
    else
      {
        t = p_63;
        t = xtc_transform_term_2_0(q_26, u_26, t);
      }
  }
  z_57 = t;
  {
    ATerm r_63 = t;
    int s_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_62 = ATgetArgument(t, 0);
            {
              ATerm g_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(z_57);
              g_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, g_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_57;
          }
        LocalPopChoice(s_63);
        t = xtc_transform_file_2_0(w_26, x_26, t);
      }
    else
      {
        t = r_63;
        t = xtc_transform_term_2_0(y_26, a_27, t);
      }
  }
  t = if_keep2_1_0(b_27, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm l_57 = NULL,r_57 = NULL,s_57 = NULL;
  l_57 = t;
  t = term_v_36;
  r_57 = t;
  t = (ATerm) ATinsert(CheckATermList(l_57), term_t_63);
  s_57 = t;
  t = SSL_printnl(r_57, s_57);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(l_57), term_t_63));
  return(t);
}
static ATerm z_22 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm x_58 = NULL;
  t = pass_verbose_0_0(t);
  x_58 = t;
  t = (ATerm) ATinsert(CheckATermList(x_58), term_c_40);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm y_58 = NULL;
  t = pass_verbose_0_0(t);
  y_58 = t;
  t = (ATerm) ATinsert(CheckATermList(y_58), term_c_40);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm e_59 = NULL;
  t = pass_verbose_0_0(t);
  e_59 = t;
  t = (ATerm) ATinsert(CheckATermList(e_59), term_c_40);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm f_59 = NULL;
  t = pass_verbose_0_0(t);
  f_59 = t;
  t = (ATerm) ATinsert(CheckATermList(f_59), term_c_40);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = save_as_1_0(x_23, t);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = save_as_1_0(b_24, t);
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = save_as_1_0(d_24, t);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  ATerm l_59 = NULL;
  t = pass_verbose_0_0(t);
  l_59 = t;
  t = (ATerm) ATinsert(CheckATermList(l_59), term_c_40);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm l_24 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_c_40);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = save_as_1_0(n_24, t);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_d_64;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_c_40);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_d_64;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm w_59 = NULL;
  t = pass_verbose_0_0(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), term_c_40);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = save_as_1_0(d_25, t);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_i_64;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm f_60 = NULL;
  t = pass_verbose_0_0(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), term_c_40);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  t = term_i_64;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_c_40);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = save_as_1_0(l_25, t);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_l_64;
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = term_o_64;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_c_40);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_o_64;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_c_40);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = save_as_1_0(y_25, t);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_p_64;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm g_61 = NULL;
  t = pass_verbose_0_0(t);
  g_61 = t;
  t = (ATerm) ATinsert(CheckATermList(g_61), term_c_40);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm s_61 = NULL;
  t = pass_verbose_0_0(t);
  s_61 = t;
  t = (ATerm) ATinsert(CheckATermList(s_61), term_c_40);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_q_64;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm e_62 = NULL;
  t = pass_verbose_0_0(t);
  e_62 = t;
  t = (ATerm) ATinsert(CheckATermList(e_62), term_c_40);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_q_64;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm f_62 = NULL;
  t = pass_verbose_0_0(t);
  f_62 = t;
  t = (ATerm) ATinsert(CheckATermList(f_62), term_c_40);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(m_26, t);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = term_w_64;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_x_64;
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm n_62 = NULL;
  t = pass_verbose_0_0(t);
  n_62 = t;
  t = (ATerm) ATinsert(CheckATermList(n_62), term_c_40);
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_x_64;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm q_62 = NULL;
  t = pass_verbose_0_0(t);
  q_62 = t;
  t = (ATerm) ATinsert(CheckATermList(q_62), term_c_40);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = term_y_64;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm y_62 = NULL;
  t = pass_verbose_0_0(t);
  y_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_62), term_c_40);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_y_64;
  return(t);
}
static ATerm a_27 (ATerm t)
{
  ATerm e_63 = NULL;
  t = pass_verbose_0_0(t);
  e_63 = t;
  t = (ATerm) ATinsert(CheckATermList(e_63), term_c_40);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = save_as_1_0(c_27, t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_e_65;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(t_22, x_22, t);
  return(t);
}
static ATerm h_15 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm x_63 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(j_58, x_63, t);
  return(t);
}
static ATerm h_14 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm b_64 = NULL,e_64 = NULL;
  e_64 = t;
  {
    ATerm f_65 = t;
    int h_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        t = h_15(u_56, v_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_65 = ATgetFirst((ATermList) t);
            b_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_65);
        {
          ATerm f_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, b_64);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_15(v_56, b_64, f_64, t);
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, b_64);
        }
      }
    else
      {
        t = f_65;
        {
          ATerm h_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_15(v_56, h_64, t);
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        }
      }
  }
  t = e_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,m_64 = NULL,n_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  n_64 = t;
  t = h_122(t);
  m_64 = t;
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_64 = NULL;
        t = term_h_57;
        u_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_64, term_h_57);
        t = h_15(m_64, u_64, t);
        {
          ATerm m_65 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_65;
            }
        }
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_64 = ATgetFirst((ATermList) t);
      j_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_64, term_h_57, j_64);
  t = lookup_table_0_1(m_64, t);
  t_64 = t;
  t = term_h_57;
  r_64 = t;
  t = t_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(r_64, j_64, s_64, t);
  t = k_64;
  {
    static ATerm i_27 (ATerm t);
    static ATerm i_27 (ATerm t)
    {
      ATerm v_64 = NULL;
      v_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_64, v_64);
      t = h_14(m_64, v_64, t);
      return(t);
    }
    t = map_1_0(i_27, t);
  }
  t = n_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t)
{
  ATerm n_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_101(t);
      t = i_101(t);
      LocalPopChoice(p_65);
    }
  else
    {
      t = n_65;
      t = i_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,g_65 = NULL,j_65 = NULL;
  a_65 = t;
  t = g_122(t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_64, term_h_57);
  {
    ATerm q_65 = t;
    int v_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_65 = ATgetArgument(t, 0);
            ATerm x_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_57;
        o_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_64, term_h_57);
        t = h_15(z_64, o_65, t);
        LocalPopChoice(v_65);
      }
    else
      {
        t = q_65;
        t = (ATerm) ATempty;
      }
  }
  b_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_64, term_h_57, (ATerm) ATinsert(CheckATermList(b_65), (ATerm) ATempty));
  t = lookup_table_0_1(z_64, t);
  j_65 = t;
  t = term_h_57;
  c_65 = t;
  t = (ATerm) ATinsert(CheckATermList(b_65), (ATerm) ATempty);
  d_65 = t;
  t = j_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(c_65, d_65, g_65, t);
  t = a_65;
  return(t);
}
static ATerm j_27 (ATerm t)
{
  t = term_t_57;
  return(t);
}
static ATerm m_27 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  {
    ATerm y_65 = t;
    int a_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_65);
        LocalPopChoice(a_66);
      }
    else
      {
        t = y_65;
        t = z_65;
      }
  }
  return(t);
}
static ATerm p_27 (ATerm t)
{
  t = term_t_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm r_65 = NULL;
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm s_65 = NULL;
    s_65 = t;
    {
      ATerm b_66 = t;
      int c_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_65 = NULL,u_65 = NULL;
          t = term_t_57;
          t_65 = t;
          t = term_h_57;
          u_65 = t;
          t = term_h_59;
          t = h_15(t_65, u_65, t);
          LocalPopChoice(c_66);
        }
      else
        {
          t = b_66;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_65 != NULL) && (r_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_65 = ATgetFirst((ATermList) t);
        {
          ATerm d_66 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_65;
    t = map_1_0(m_27, t);
    t = s_65;
    t = end_scope_1_0(p_27, t);
    return(t);
  }
  t = begin_scope_1_0(j_27, t);
  t = restore_always_2_0(p_135, k_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  {
    ATerm e_66 = t;
    int f_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_66 = NULL,m_66 = NULL,p_66 = NULL;
        t = term_q_36;
        m_66 = t;
        t = term_s_36;
        p_66 = t;
        t = term_t_36;
        t = h_15(m_66, p_66, t);
        l_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_66, term_e_40);
        t = geq_0_0(t);
        t = h_66;
        t = a_126(t);
        LocalPopChoice(f_66);
      }
    else
      {
        t = e_66;
        t = h_66;
      }
  }
  return(t);
}
static ATerm j_14 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm g_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_43, r_43);
      LocalPopChoice(i_66);
    }
  else
    {
      t = g_66;
      t = SSL_addr(q_43, r_43);
    }
  return(t);
}
static ATerm l_14 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm j_66 = t;
  int k_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_43, x_43);
      LocalPopChoice(k_66);
    }
  else
    {
      t = j_66;
      t = SSL_subtr(w_43, x_43);
    }
  return(t);
}
static ATerm m_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t)
{
  ATerm r_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
  t = l_14(w_68, x_68, t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_68, z_68);
  t = l_14(y_68, z_68, t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  t = l_14(a_69, b_69, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, d_69);
  t = l_14(c_69, d_69, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_66, u_66, v_66, w_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm y_66 = NULL,b_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_66 = ATgetArgument(t, 0);
      if(match_cons(n_66, sym__4))
        {
          y_66 = ATgetArgument(n_66, 0);
          b_67 = ATgetArgument(n_66, 1);
          i_67 = ATgetArgument(n_66, 2);
          j_67 = ATgetArgument(n_66, 3);
        }
      else
        _fail(t);
      {
        ATerm o_66 = ATgetArgument(t, 1);
        if(match_cons(o_66, sym__4))
          {
            k_67 = ATgetArgument(o_66, 0);
            l_67 = ATgetArgument(o_66, 1);
            m_67 = ATgetArgument(o_66, 2);
            n_67 = ATgetArgument(o_66, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_14(y_66, b_67, i_67, j_67, k_67, l_67, m_67, n_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,y_67 = NULL,b_68 = NULL,c_68 = NULL,h_68 = NULL,j_68 = NULL,l_68 = NULL;
  u_67 = t;
  t = times_0_0(t);
  o_67 = t;
  t = u_67;
  t = o_129(t);
  p_67 = t;
  t = times_0_0(t);
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_67, o_67);
  t = diff_times_0_0(t);
  s_67 = t;
  if(match_cons(t, sym__4))
    {
      h_68 = ATgetArgument(t, 0);
      {
        ATerm q_66 = ATgetArgument(t, 1);
      }
      j_68 = ATgetArgument(t, 2);
      {
        ATerm s_66 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_68, j_68);
  t = j_14(h_68, j_68, t);
  l_68 = t;
  t = SSL_TicksToSeconds(l_68);
  q_67 = t;
  t = s_67;
  if(match_cons(t, sym__4))
    {
      ATerm t_66 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
      {
        ATerm x_66 = ATgetArgument(t, 2);
      }
      b_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_67, b_68);
  t = j_14(y_67, b_68, t);
  c_68 = t;
  t = SSL_TicksToSeconds(c_68);
  r_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_67), term_z_67), q_67), term_v_67);
  t = n_129(t);
  t = p_67;
  return(t);
}
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  m_68 = t;
  t = m_108(t);
  n_68 = t;
  t = term_v_36;
  o_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_68), n_68);
  p_68 = t;
  t = SSL_printnl(o_68, p_68);
  t = m_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  q_68 = t;
  t = term_q_36;
  u_68 = t;
  t = term_a_68;
  v_68 = t;
  t = term_d_68;
  t = h_15(u_68, v_68, t);
  r_68 = t;
  t = term_v_38;
  s_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_69), term_f_69), term_e_69), term_k_68), term_i_68), term_g_68), term_f_68), r_68), term_e_68);
  t_68 = t;
  t = SSL_printnl(s_68, t_68);
  t = q_68;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_69 = ATgetFirst((ATermList) t);
      i_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_69;
    }
  else
    {
      t = i_69;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm p_14 (ATerm x_25, ATerm q_226, ATerm t)
{
  static ATerm q_27 (ATerm t);
  static ATerm q_27 (ATerm t)
  {
    if((x_25 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = q_226;
  t = fetch_1_0(q_27, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  static ATerm j_70 (ATerm t);
  static ATerm j_70 (ATerm t)
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_109(t);
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
        {
          ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,a_38 = NULL,j_38 = NULL,j_13 = NULL;
          g_70 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_70 = ATgetFirst((ATermList) t);
              i_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_70);
          a_38 = t;
          t = i_70;
          t = j_70(t);
          j_38 = t;
          t = (ATerm) ATinsert(CheckATermList(j_38), h_70);
          j_13 = t;
          t = SSLsetAnnotations(j_13, a_38);
        }
      }
    return(t);
  }
  t = j_70(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  static ATerm r_27 (ATerm t);
  static ATerm r_27 (ATerm t)
  {
    ATerm n_70 = NULL,p_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,y_70 = NULL,a_71 = NULL,o_13 = NULL,n_13 = NULL;
    a_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_70 = ATgetFirst((ATermList) t);
        v_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_71);
    t_70 = t;
    t = u_70;
    t = k_109(t);
    w_70 = t;
    t = (ATerm) ATinsert(CheckATermList(v_70), w_70);
    n_13 = t;
    t = SSLsetAnnotations(n_13, t_70);
    y_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_70 = ATgetFirst((ATermList) t);
        s_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_70);
    n_70 = t;
    t = s_70;
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = (ATerm) ATinsert(CheckATermList(s_70), p_70);
    o_13 = t;
    t = SSLsetAnnotations(o_13, n_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(r_27, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, not_null(l_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,y_71 = NULL;
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(u_118, t);
      LocalPopChoice(m_69);
    }
  else
    {
      t = l_69;
      {
        ATerm o_71 = NULL;
        o_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      v_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_69 = ATgetFirst((ATermList) t);
              ATerm o_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_71;
          t = list_tokenize_1_0(u_118, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_69 = ATgetFirst((ATermList) t);
          ATerm q_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, v_71);
        }
      else
        {
          ATerm g_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_69 = ATgetFirst((ATermList) t);
              ATerm s_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_71;
          t = list_tokenize_1_0(u_118, t);
          g_72 = t;
          t = (ATerm) ATinsert(CheckATermList(g_72), v_71);
        }
    }
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  t = SSL_implode_string(a_73);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,n_72 = NULL,o_72 = NULL,r_72 = NULL,u_72 = NULL,v_72 = NULL,j_18 = NULL;
  v_72 = t;
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_72);
  n_72 = t;
  t = SSL_explode_string(r_72);
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_72, u_72);
  j_18 = t;
  t = SSLsetAnnotations(j_18, n_72);
  if(match_cons(t, sym__2))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_72;
  {
    static ATerm s_27 (ATerm t);
    static ATerm s_27 (ATerm t)
    {
      ATerm w_72 = NULL;
      w_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_72, j_72);
      t = p_14(w_72, j_72, t);
      return(t);
    }
    t = list_tokenize_1_0(s_27, t);
  }
  t = map_1_0(t_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  {
    ATerm t_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        t = SSL_filemode(r_73);
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            {
              ATerm v_69 = ATgetArgument(t, 1);
              if(((ATgetType(v_69) != AT_INT) || (ATgetInt((ATermInt) v_69) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_38;
        LocalPopChoice(u_69);
      }
    else
      {
        t = t_69;
        {
          ATerm e_39 = NULL,f_39 = NULL;
          t = term_w_69;
          f_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_69, r_73);
          t = n_15(f_39, r_73, t);
          e_39 = t;
          t = SSL_perror(e_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm q_14 (ATerm c_63, ATerm b_63, ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  x_73 = t;
  {
    ATerm x_69 = t;
    int y_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_73 = NULL,b_74 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_57);
        b_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_63, (ATerm) ATinsert(ATempty, term_y_57));
        t = c_15(b_63, b_74, t);
        t = filemode_0_0(t);
        z_73 = t;
        t = SSL_S_ISDIR(z_73);
        t = x_73;
        LocalPopChoice(y_69);
        {
          ATerm c_74 = NULL,d_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_69), c_63);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          c_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_74), term_a_70), b_63);
          d_74 = t;
          t = SSL_concat_strings(d_74);
        }
      }
    else
      {
        t = x_69;
        t = b_63;
      }
  }
  w_73 = t;
  t = SSL_copy(c_63, w_73);
  return(t);
}
static ATerm r_14 (ATerm o_61, ATerm t)
{
  t = SSL_hashtable_keys(o_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_74 = NULL,h_74 = NULL;
  static ATerm u_27 (ATerm t);
  static ATerm u_27 (ATerm t)
  {
    ATerm j_74 = NULL,k_74 = NULL;
    j_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_74), j_74);
    t = h_15(not_null(e_74), j_74, t);
    k_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_74, k_74);
    return(t);
  }
  if(((e_74 != NULL) && (e_74 != t)))
    _fail(t);
  else
    e_74 = t;
  t = lookup_table_0_1(e_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(h_74, t);
  t = map_1_0(u_27, t);
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = debug_1_0(w_27, t);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = term_b_70;
  return(t);
}
static ATerm n_75 (ATerm o_74, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,v_74 = NULL;
  t = term_c_70;
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, o_74);
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_70, (ATerm) ATmakeAppl(sym_Tool_1, o_74));
  t = h_15(t_74, v_74, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_70 = ATgetFirst((ATermList) t);
      if(match_cons(d_70, sym__2))
        {
          ATerm f_70 = ATgetArgument(d_70, 0);
          s_74 = ATgetArgument(d_70, 1);
        }
      else
        _fail(t);
      {
        ATerm e_70 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_74;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = debug_1_0(z_27, t);
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = term_b_70;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_c_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_k_70;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_70 = t;
  int q_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
      t = if_verbose5_1_0(v_27, t);
      t = xtc_load_0_0(t);
      y_74 = t;
      if(match_cons(t, sym__2))
        {
          w_74 = ATgetArgument(t, 0);
          x_74 = ATgetArgument(t, 1);
          {
            ATerm r_70 = t;
            int x_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_75 = NULL,e_75 = NULL,f_75 = NULL;
                t = term_c_70;
                e_75 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_74);
                f_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_70, (ATerm) ATmakeAppl(sym_Tool_1, w_74));
                t = h_15(e_75, f_75, t);
                {
                  static ATerm x_27 (ATerm t);
                  static ATerm x_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_74 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_75 != NULL) && (c_75 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(x_27, t);
                }
                t = not_null(c_75);
                LocalPopChoice(x_70);
              }
            else
              {
                t = r_70;
                t = n_75(y_74, t);
              }
          }
        }
      else
        {
          t = n_75(y_74, t);
        }
      t = if_verbose5_1_0(y_27, t);
      LocalPopChoice(q_70);
    }
  else
    {
      t = o_70;
      {
        ATerm m_75 = NULL,j_39 = NULL,k_39 = NULL;
        m_75 = t;
        t = term_v_36;
        j_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_71), m_75), term_z_70);
        k_39 = t;
        t = SSL_printnl(j_39, k_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_71), m_75), term_z_70);
        t = if_verbose5_1_0(a_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_14 (ATerm f_67, ATerm e_67, ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,v_75 = NULL,g_76 = NULL;
  t = f_67;
  {
    ATerm c_71 = t;
    int d_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_76 = NULL;
        t = term_q_36;
        i_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_36, f_67);
        t = h_15(i_76, f_67, t);
        LocalPopChoice(d_71);
      }
    else
      {
        t = c_71;
        t = (ATerm) ATempty;
      }
  }
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, q_75);
  t = conc_0_0(t);
  p_75 = t;
  t = term_q_36;
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, f_67, p_75);
  t = lookup_table_0_1(v_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(f_67, p_75, g_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, f_67, p_75);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,r_76 = NULL,t_76 = NULL,u_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_76 = NULL,y_76 = NULL,z_76 = NULL;
      t = term_s_38;
      t = q_0(t);
      w_76 = t;
      t = term_e_71;
      y_76 = t;
      t = term_f_71;
      z_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_71, term_f_71, w_76);
      t = i_15(y_76, z_76, w_76, t);
      _fail(t);
    }
  else
    {
      ATerm d_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_76 = ATgetFirst((ATermList) t);
          r_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_76 = ATgetFirst((ATermList) t);
          u_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_76;
      t = o_0(t);
      t = t_76;
      t = p_0(t);
      d_77 = t;
      t = (ATerm) ATinsert(CheckATermList(u_76), d_77);
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm f_77 = NULL;
  f_77 = t;
  if(match_string(t, "-S"))
    {
      t = f_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_77;
    }
  return(t);
}
static ATerm e_28 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  t = term_s_36;
  g_77 = t;
  t = term_k_36;
  h_77 = t;
  t = term_g_71;
  t = m_15(g_77, h_77, t);
  t = term_h_71;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_i_71;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm i_77 = NULL,k_77 = NULL,p_77 = NULL;
  i_77 = t;
  t = SSL_string_to_int(i_77);
  k_77 = t;
  t = term_s_36;
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_36, k_77);
  t = m_15(p_77, k_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_77);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_j_71;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  t = term_k_71;
  q_77 = t;
  t = term_s_38;
  r_77 = t;
  t = term_l_71;
  t = m_15(q_77, r_77, t);
  t = term_m_71;
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_n_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_71 = t;
  int q_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_28, e_28, f_28, t);
      LocalPopChoice(q_71);
    }
  else
    {
      t = p_71;
      {
        ATerm r_71 = t;
        int s_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_28, h_28, i_28, t);
            LocalPopChoice(s_71);
          }
        else
          {
            t = r_71;
            t = Option_3_0(j_28, l_28, m_28, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  v_77 = t;
  t = term_q_36;
  y_77 = t;
  t = term_l_37;
  z_77 = t;
  t = term_m_37;
  t = h_15(y_77, z_77, t);
  {
    static ATerm n_28 (ATerm t);
    static ATerm n_28 (ATerm t)
    {
      ATerm a_78 = NULL;
      a_78 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = v_77;
        }
      else
        {
          t = a_78;
        }
      return(t);
    }
    t = map_1_0(n_28, t);
  }
  w_77 = t;
  t = term_l_37;
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_37, w_77);
  t = m_15(x_77, w_77, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  {
    ATerm t_71 = t;
    int u_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
        t = term_q_36;
        k_78 = t;
        t = term_s_36;
        l_78 = t;
        t = term_t_36;
        t = h_15(k_78, l_78, t);
        j_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_78, term_l_46);
        t = geq_0_0(t);
        t = g_78;
        t = e_126(t);
        LocalPopChoice(u_71);
      }
    else
      {
        t = t_71;
        t = g_78;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm p_78 = NULL;
  p_78 = t;
  {
    ATerm w_71 = t;
    int x_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,u_78 = NULL,v_78 = NULL;
        t = term_q_36;
        u_78 = t;
        t = term_s_36;
        v_78 = t;
        t = term_t_36;
        t = h_15(u_78, v_78, t);
        s_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_78, term_a_44);
        t = geq_0_0(t);
        t = p_78;
        t = d_126(t);
        LocalPopChoice(x_71);
      }
    else
      {
        t = w_71;
        t = p_78;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_79 = NULL,l_79 = NULL,m_79 = NULL;
  j_79 = t;
  if(match_cons(t, sym__2))
    {
      l_79 = ATgetArgument(t, 0);
      m_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_71 = t;
    int a_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_79;
        if((l_79 != t))
          {
            _fail(t);
          }
        t = j_79;
        LocalPopChoice(a_72);
      }
    else
      {
        t = z_71;
        t = (ATerm) ATmakeAppl(sym__2, l_79, m_79);
        {
          ATerm b_72 = t;
          int c_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_79, m_79);
              LocalPopChoice(c_72);
            }
          else
            {
              t = b_72;
              t = SSL_gtr(l_79, m_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_79, m_79);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm r_79 = NULL;
  r_79 = t;
  {
    ATerm d_72 = t;
    int e_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_79 = NULL,v_79 = NULL,x_79 = NULL;
        t = term_q_36;
        v_79 = t;
        t = term_s_36;
        x_79 = t;
        t = term_t_36;
        t = h_15(v_79, x_79, t);
        t_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_79, term_h_49);
        t = geq_0_0(t);
        t = r_79;
        t = f_126(t);
        LocalPopChoice(e_72);
      }
    else
      {
        t = d_72;
        t = r_79;
      }
  }
  return(t);
}
static ATerm v_14 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
{
  t = m_113(t);
  {
    static ATerm o_28 (ATerm t);
    static ATerm o_28 (ATerm t)
    {
      ATerm z_79 = NULL;
      z_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_31, z_79);
      t = l_113(t);
      return(t);
    }
    t = fetch_1_0(o_28, t);
  }
  t = h_31;
  return(t);
}
static ATerm w_14 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm u_80 (ATerm t);
  static ATerm u_80 (ATerm t)
  {
    ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL;
    o_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_80 = ATgetFirst((ATermList) t);
            q_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_72 = t;
          int h_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_80;
              {
                static ATerm r_28 (ATerm t);
                static ATerm r_28 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = v_14(i_113, r_28, p_80, q_80, t);
              }
              t = u_80(t);
              LocalPopChoice(h_72);
            }
          else
            {
              t = f_72;
              {
                ATerm s_40 = NULL,e_41 = NULL,q_18 = NULL;
                t = SSLgetAnnotations(o_80);
                s_40 = t;
                t = q_80;
                t = u_80(t);
                e_41 = t;
                t = (ATerm) ATinsert(CheckATermList(e_41), p_80);
                q_18 = t;
                t = SSLsetAnnotations(q_18, s_40);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = u_80(t);
  return(t);
}
static ATerm s_28 (ATerm t)
{
  ATerm i_81 = NULL;
  if(match_cons(t, sym__2))
    {
      i_81 = ATgetArgument(t, 0);
      if((i_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_14 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  {
    ATerm i_72 = t;
    int l_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_72 = ATgetArgument(t, 0);
            ATerm p_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
        t = h_15(m_57, n_57, t);
        LocalPopChoice(l_72);
      }
    else
      {
        t = i_72;
        t = (ATerm) ATempty;
      }
  }
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_81, o_57);
  t = w_14(s_28, a_81, o_57, t);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_57, n_57, z_80);
  t = lookup_table_0_1(m_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(n_57, z_80, b_81, t);
  t = y_80;
  return(t);
}
static ATerm y_14 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t)
{
  static ATerm t_28 (ATerm t);
  static ATerm t_28 (ATerm t)
  {
    ATerm j_81 = NULL,k_81 = NULL;
    if(match_cons(t, sym__2))
      {
        j_81 = ATgetArgument(t, 0);
        k_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_57, j_81, k_81);
    t = w_123(t);
    return(t);
  }
  t = v_57;
  t = map_1_0(t_28, t);
  return(t);
}
static ATerm c_15 (ATerm k_40, ATerm l_40, ATerm t)
{
  t = SSL_access(k_40, l_40);
  return(t);
}
static ATerm f_82 (ATerm w_81, ATerm t)
{
  t = SSL_fclose(w_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  c_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_82 = ATgetArgument(t, 0);
      {
        ATerm q_72 = t;
        int s_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_82);
            LocalPopChoice(s_72);
          }
        else
          {
            t = q_72;
            t = f_82(c_82, t);
          }
      }
    }
  else
    {
      t = f_82(c_82, t);
    }
  return(t);
}
static ATerm z_14 (ATerm b_25, ATerm t)
{
  t = SSL_read_term_from_stream(b_25);
  return(t);
}
static ATerm a_15 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm g_82 = NULL;
  t = SSL_fopen(w_40, x_40);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_82 = NULL;
  t = SSL_stdin_stream();
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_stdout_stream();
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_82 = NULL;
  t = SSL_stderr_stream();
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_82);
  return(t);
}
static ATerm b_84 (ATerm w_82, ATerm t)
{
  ATerm x_82 = NULL;
  t = SSL_explode_term(w_82);
  if(match_cons(t, sym__2))
    {
      ATerm t_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_72 = ATgetArgument(t, 1);
        if(((ATgetType(x_72) == AT_LIST) && !(ATisEmpty(x_72))))
          {
            x_82 = ATgetFirst((ATermList) x_72);
            {
              ATerm y_72 = (ATerm) ATgetNext((ATermList) x_72);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_84 (ATerm a_83, ATerm b_83, ATerm c_83, ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,m_83 = NULL,u_18 = NULL;
  t = SSLgetAnnotations(c_83);
  h_83 = t;
  t = a_83;
  if(match_cons(t, sym_Path_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_83, b_83);
  u_18 = t;
  t = SSLsetAnnotations(u_18, h_83);
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(f_83, g_83, t);
  return(t);
}
static ATerm d_84 (ATerm o_83, ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,w_83 = NULL,w_18 = NULL;
  t = SSLgetAnnotations(q_83);
  t_83 = t;
  t = SSL_is_string(o_83);
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_83, p_83);
  w_18 = t;
  t = SSLsetAnnotations(w_18, t_83);
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      s_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(r_83, s_83, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  y_83 = t;
  if(match_cons(t, sym__2))
    {
      z_83 = ATgetArgument(t, 0);
      a_84 = ATgetArgument(t, 1);
      {
        ATerm z_72 = t;
        int b_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_84(y_83, t);
            LocalPopChoice(b_73);
          }
        else
          {
            t = z_72;
            {
              ATerm c_73 = t;
              int d_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_84(z_83, a_84, y_83, t);
                  LocalPopChoice(d_73);
                }
              else
                {
                  t = c_73;
                  t = d_84(z_83, a_84, y_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_84(y_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,m_84 = NULL;
  m_84 = t;
  {
    ATerm e_73 = t;
    int f_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_84, term_g_73);
        t = b_15(t);
        LocalPopChoice(f_73);
      }
    else
      {
        t = e_73;
        {
          ATerm q_42 = NULL,s_42 = NULL;
          t = term_h_73;
          s_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_73, m_84);
          t = n_15(s_42, m_84, t);
          q_42 = t;
          t = SSL_perror(q_42);
          _fail(t);
        }
      }
  }
  g_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_14(h_84, t);
  f_84 = t;
  t = g_84;
  t = fclose_0_0(t);
  t = f_84;
  return(t);
}
static ATerm a_29 (ATerm t)
{
  t = term_i_73;
  return(t);
}
static ATerm d_29 (ATerm t)
{
  t = term_j_73;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_73 = t;
  int l_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_84 = NULL,q_84 = NULL;
      p_84 = t;
      t = (ATerm) ATinsert(ATempty, term_m_73);
      q_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_84, (ATerm) ATinsert(ATempty, term_m_73));
      t = c_15(p_84, q_84, t);
      LocalPopChoice(l_73);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_73;
      {
        ATerm n_73 = t;
        int o_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_73 = t;
            if((PushChoice() == 0))
              {
                ATerm r_84 = NULL,s_84 = NULL;
                r_84 = t;
                t = (ATerm) ATinsert(ATempty, term_y_57);
                s_84 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_84, (ATerm) ATinsert(ATempty, term_y_57));
                t = c_15(r_84, s_84, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_73;
              }
            t = debug_1_0(a_29, t);
            LocalPopChoice(o_73);
          }
        else
          {
            t = n_73;
            t = debug_1_0(d_29, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_29 (ATerm t)
{
  t = debug_1_0(f_29, t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  t = term_q_73;
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = debug_1_0(i_29, t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = term_s_73;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  ATerm s_85 = NULL,u_85 = NULL,v_85 = NULL;
  s_85 = t;
  t = term_v_36;
  u_85 = t;
  t = (ATerm) ATinsert(ATempty, term_t_73);
  v_85 = t;
  t = SSL_printnl(u_85, v_85);
  t = s_85;
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  if(match_cons(t, sym__3))
    {
      w_85 = ATgetArgument(t, 0);
      x_85 = ATgetArgument(t, 1);
      y_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_14(w_85, x_85, y_85, t);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  t = term_v_36;
  a_86 = t;
  t = (ATerm) ATinsert(ATempty, term_u_73);
  b_86 = t;
  t = SSL_printnl(a_86, b_86);
  t = z_85;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,g_86 = NULL;
  c_86 = t;
  t = term_v_36;
  d_86 = t;
  t = (ATerm) ATinsert(ATempty, term_t_73);
  g_86 = t;
  t = SSL_printnl(d_86, g_86);
  t = c_86;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,p_85 = NULL;
  t_84 = t;
  t = if_verbose5_1_0(e_29, t);
  {
    ATerm v_73 = t;
    if((PushChoice() == 0))
      {
        ATerm q_85 = NULL,r_85 = NULL;
        t = term_c_70;
        q_85 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_84);
        r_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_70, (ATerm) ATmakeAppl(sym_Imported_1, t_84));
        t = h_15(q_85, r_85, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_73;
      }
  }
  z_84 = t;
  t = term_c_70;
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_70, term_y_73, (ATerm) ATinsert(ATempty, t_84));
  t = lookup_table_0_1(h_85, t);
  p_85 = t;
  t = term_y_73;
  i_85 = t;
  t = (ATerm) ATinsert(ATempty, t_84);
  j_85 = t;
  t = p_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(i_85, j_85, k_85, t);
  t = z_84;
  t = if_verbose4_1_0(g_29, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_29, t);
  y_84 = t;
  t = term_c_70;
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_70, y_84);
  t = y_14(o_29, g_85, y_84, t);
  t = if_verbose6_1_0(p_29, t);
  t = term_c_70;
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_70, (ATerm)ATmakeAppl(sym_Imported_1, t_84), (ATerm) ATempty);
  t = lookup_table_0_1(a_85, t);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_84);
  b_85 = t;
  t = (ATerm) ATempty;
  d_85 = t;
  t = f_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(b_85, d_85, e_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_70, (ATerm)ATmakeAppl(sym_Imported_1, t_84), (ATerm) ATempty);
  t = if_verbose4_1_0(r_29, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_86;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_86 = ATgetFirst((ATermList) t);
          u_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_74 = t;
        int f_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_43 = NULL,j_43 = NULL,k_43 = NULL,d_19 = NULL;
            t = SSLgetAnnotations(s_86);
            a_43 = t;
            t = t_86;
            t = a_117(t);
            j_43 = t;
            t = u_86;
            t = filter_1_0(a_117, t);
            k_43 = t;
            t = (ATerm) ATinsert(CheckATermList(k_43), j_43);
            d_19 = t;
            t = SSLsetAnnotations(d_19, a_43);
            LocalPopChoice(f_74);
          }
        else
          {
            t = a_74;
            t = u_86;
            t = filter_1_0(a_117, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  static ATerm x_86 (ATerm t);
  static ATerm x_86 (ATerm t)
  {
    ATerm g_74 = t;
    int i_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        t = x_86(t);
        LocalPopChoice(i_74);
      }
    else
      {
        t = g_74;
        t = m_101(t);
      }
    return(t);
  }
  t = x_86(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_74 = t;
  int m_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_87 = NULL,b_87 = NULL;
      t = term_q_36;
      a_87 = t;
      t = term_n_74;
      b_87 = t;
      t = term_p_74;
      t = h_15(a_87, b_87, t);
      LocalPopChoice(m_74);
    }
  else
    {
      t = l_74;
      {
        ATerm q_74 = t;
        int r_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_87 = NULL;
            t = term_u_74;
            e_87 = t;
            t = SSL_getenv(e_87);
            LocalPopChoice(r_74);
          }
        else
          {
            t = q_74;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm s_29 (ATerm t)
{
  t = debug_1_0(z_29, t);
  return(t);
}
static ATerm z_29 (ATerm t)
{
  t = term_z_74;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  ATerm k_87 = NULL,m_87 = NULL;
  t = term_c_70;
  k_87 = t;
  t = term_a_75;
  m_87 = t;
  t = term_b_75;
  t = h_15(k_87, m_87, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_75 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_75;
      }
  }
  return(t);
}
static ATerm d_30 (ATerm t)
{
  t = debug_1_0(f_30, t);
  return(t);
}
static ATerm f_30 (ATerm t)
{
  t = term_g_75;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_87 = NULL;
  t = if_verbose5_1_0(s_29, t);
  g_87 = t;
  {
    ATerm h_75 = t;
    int i_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_87 = NULL,i_87 = NULL;
        t = term_c_70;
        h_87 = t;
        t = term_y_73;
        i_87 = t;
        t = term_j_75;
        t = h_15(h_87, i_87, t);
        LocalPopChoice(i_75);
      }
    else
      {
        t = h_75;
        {
          ATerm j_87 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_87 = t;
          t = repeat_2_0(b_30, _id, t);
          t = j_87;
        }
      }
  }
  t = g_87;
  t = if_verbose5_1_0(d_30, t);
  return(t);
}
static ATerm h_88 (ATerm r_87, ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL;
  t = term_c_70;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_87);
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_70, (ATerm) ATmakeAppl(sym_Tool_1, r_87));
  t = h_15(u_87, v_87, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_75 = ATgetFirst((ATermList) t);
      if(match_cons(k_75, sym__2))
        {
          ATerm o_75 = ATgetArgument(k_75, 0);
          t_87 = ATgetArgument(k_75, 1);
        }
      else
        _fail(t);
      {
        ATerm l_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_87;
  return(t);
}
static ATerm o_30 (ATerm t)
{
  t = debug_1_0(t_30, t);
  return(t);
}
static ATerm t_30 (ATerm t)
{
  t = term_b_70;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  t = xtc_load_0_0(t);
  y_87 = t;
  if(match_cons(t, sym__2))
    {
      w_87 = ATgetArgument(t, 0);
      x_87 = ATgetArgument(t, 1);
      {
        ATerm r_75 = t;
        int s_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_88 = NULL,e_88 = NULL,g_88 = NULL;
            t = term_c_70;
            e_88 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, w_87);
            g_88 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_c_70, (ATerm) ATmakeAppl(sym_Tool_1, w_87));
            t = h_15(e_88, g_88, t);
            {
              static ATerm g_30 (ATerm t);
              static ATerm g_30 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((x_87 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((b_88 != NULL) && (b_88 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      b_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(g_30, t);
            }
            t = not_null(b_88);
            LocalPopChoice(s_75);
          }
        else
          {
            t = r_75;
            t = h_88(y_87, t);
          }
      }
    }
  else
    {
      t = h_88(y_87, t);
    }
  t = if_verbose5_1_0(o_30, t);
  return(t);
}
static ATerm d_15 (ATerm c_67, ATerm d_67, ATerm t)
{
  ATerm t_75 = t;
  int u_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_88 = NULL,l_88 = NULL,o_88 = NULL;
      t = term_q_36;
      o_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_36, c_67);
      t = h_15(o_88, c_67, t);
      t = term_q_36;
      i_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_36, c_67);
      t = lookup_table_0_1(i_88, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          l_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_15(c_67, l_88, t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_36, c_67);
      LocalPopChoice(u_75);
    }
  else
    {
      t = t_75;
      t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
      t = m_15(c_67, d_67, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  static ATerm t_89 (ATerm t);
  static ATerm t_89 (ATerm t)
  {
    ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL;
    s_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_89 = ATgetFirst((ATermList) t);
        r_89 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_43 = NULL,e_44 = NULL,g_19 = NULL;
          t = SSLgetAnnotations(s_89);
          y_43 = t;
          t = r_89;
          t = t_89(t);
          e_44 = t;
          t = (ATerm) ATinsert(CheckATermList(e_44), q_89);
          g_19 = t;
          t = SSLsetAnnotations(g_19, y_43);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_89;
        t = o_109(t);
      }
    return(t);
  }
  t = t_89(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,t_88 = NULL;
  r_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_88;
    }
  else
    {
      static ATerm u_30 (ATerm t);
      static ATerm u_30 (ATerm t)
      {
        t = not_null(t_88);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_88 = ATgetFirst((ATermList) t);
          if(((t_88 != NULL) && (t_88 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_88;
      t = at_end_1_0(u_30, t);
    }
  return(t);
}
static ATerm j_90 (ATerm z_89, ATerm t)
{
  ATerm a_90 = NULL;
  t = SSL_explode_term(z_89);
  if(match_cons(t, sym__2))
    {
      ATerm w_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_90;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,f_90 = NULL;
  f_90 = t;
  if(match_cons(t, sym__2))
    {
      c_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
      {
        ATerm x_75 = t;
        int y_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_30 (ATerm t);
            static ATerm v_30 (ATerm t)
            {
              t = d_90;
              return(t);
            }
            t = c_90;
            t = at_end_1_0(v_30, t);
            LocalPopChoice(y_75);
          }
        else
          {
            t = x_75;
            t = j_90(f_90, t);
          }
      }
    }
  else
    {
      t = j_90(f_90, t);
    }
  return(t);
}
static ATerm e_15 (ATerm g_67, ATerm h_67, ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,p_90 = NULL;
  t = g_67;
  {
    ATerm z_75 = t;
    int a_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_90 = NULL;
        t = term_q_36;
        s_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_36, g_67);
        t = h_15(s_90, g_67, t);
        LocalPopChoice(a_76);
      }
    else
      {
        t = z_75;
        t = (ATerm) ATempty;
      }
  }
  l_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_90, h_67);
  t = conc_0_0(t);
  k_90 = t;
  t = term_q_36;
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, g_67, k_90);
  t = lookup_table_0_1(m_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(g_67, k_90, p_90, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, g_67, k_90);
  return(t);
}
static ATerm w_30 (ATerm t)
{
  ATerm y_90 = NULL;
  y_90 = t;
  if(match_string(t, "-o"))
    {
      t = y_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_90;
    }
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm a_91 = NULL,d_91 = NULL;
  a_91 = t;
  t = term_f_37;
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_37, a_91);
  t = m_15(d_91, a_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_91);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_b_76;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_30, x_30, y_30, t);
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm h_91 = NULL;
  h_91 = t;
  if(match_string(t, "-i"))
    {
      t = h_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_91;
    }
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  t = term_x_54;
  k_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_54, j_91);
  t = m_15(k_91, j_91, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_91);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  t = term_c_76;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_31, b_31, c_31, t);
  return(t);
}
static ATerm f_31 (ATerm t)
{
  ATerm w_91 = NULL;
  w_91 = t;
  if(match_string(t, "-I"))
    {
      t = w_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = w_91;
    }
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  t = term_k_60;
  y_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_91), term_k_60);
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_60, (ATerm) ATinsert(ATinsert(ATempty, x_91), term_k_60));
  t = e_15(y_91, z_91, t);
  t = term_s_38;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_d_76;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  if(match_string(t, "--main"))
    {
      t = a_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = a_92;
    }
  return(t);
}
static ATerm l_31 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL;
  b_92 = t;
  t = term_t_58;
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_58, b_92);
  t = m_15(c_92, b_92, t);
  t = term_s_38;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_e_76;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  ATerm d_92 = NULL;
  d_92 = t;
  if(match_string(t, "--library"))
    {
      t = d_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = d_92;
    }
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  t = term_o_39;
  e_92 = t;
  t = term_s_38;
  f_92 = t;
  t = term_f_76;
  t = m_15(e_92, f_92, t);
  t = term_s_38;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_h_76;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  g_92 = t;
  t = term_h_39;
  h_92 = t;
  t = (ATerm) ATinsert(ATempty, g_92);
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_39, (ATerm) ATinsert(ATempty, g_92));
  t = e_15(h_92, i_92, t);
  t = term_s_38;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_j_76;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  t = term_w_37;
  k_92 = t;
  t = (ATerm) ATinsert(ATempty, j_92);
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_37, (ATerm) ATinsert(ATempty, j_92));
  t = s_14(k_92, l_92, t);
  t = term_s_38;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_k_76;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
  m_92 = t;
  t = term_l_76;
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_76, m_92);
  t = n_15(q_92, m_92, t);
  n_92 = t;
  t = term_l_37;
  o_92 = t;
  t = (ATerm) ATinsert(ATempty, n_92);
  p_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_37, (ATerm) ATinsert(ATempty, n_92));
  t = s_14(o_92, p_92, t);
  t = term_s_38;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  t = term_m_76;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  t = term_y_37;
  r_92 = t;
  t = term_s_38;
  s_92 = t;
  t = term_o_76;
  t = m_15(r_92, s_92, t);
  t = term_s_38;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_p_76;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL;
  t = term_c_60;
  t_92 = t;
  t = term_s_38;
  u_92 = t;
  t = term_q_76;
  t = m_15(t_92, u_92, t);
  t = term_s_38;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = term_s_76;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL;
  t = term_k_55;
  v_92 = t;
  t = term_s_38;
  w_92 = t;
  t = term_v_76;
  t = m_15(v_92, w_92, t);
  t = term_s_38;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_x_76;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
  x_92 = t;
  t = SSL_string_to_int(x_92);
  y_92 = t;
  t = term_l_42;
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_42, y_92);
  t = m_15(z_92, y_92, t);
  t = term_s_38;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_a_77;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  t = SSL_string_to_int(a_93);
  b_93 = t;
  t = term_w_42;
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_42, b_93);
  t = m_15(c_93, b_93, t);
  t = term_s_38;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_b_77;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_32 (ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL;
  t = term_o_44;
  f_93 = t;
  t = term_s_38;
  g_93 = t;
  t = term_c_77;
  t = d_15(f_93, g_93, t);
  t = term_s_38;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_e_77;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm h_93 = NULL,k_93 = NULL;
  h_93 = t;
  if(match_string(t, "old"))
    {
      t = h_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = h_93;
    }
  t = term_i_56;
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_56, h_93);
  t = m_15(k_93, h_93, t);
  t = term_s_38;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_j_77;
  return(t);
}
static ATerm e_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_s_38;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  t = term_l_77;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_m_77;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_s_38;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  t = term_s_77;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  ATerm o_93 = NULL;
  o_93 = t;
  if(match_string(t, "-h"))
    {
      t = o_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = o_93;
    }
  return(t);
}
static ATerm o_33 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL;
  t = term_t_77;
  r_93 = t;
  t = term_s_38;
  s_93 = t;
  t = term_u_77;
  t = m_15(r_93, s_93, t);
  t = term_s_38;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  t = term_b_78;
  return(t);
}
static ATerm q_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_33 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL;
  t = term_c_78;
  t_93 = t;
  t = term_s_38;
  u_93 = t;
  t = term_d_78;
  t = m_15(t_93, u_93, t);
  t = term_s_38;
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = term_e_78;
  return(t);
}
static ATerm x_33 (ATerm t)
{
  ATerm v_93 = NULL;
  v_93 = t;
  if(match_string(t, "-v"))
    {
      t = v_93;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = v_93;
    }
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm w_93 = NULL,z_93 = NULL;
  t = term_f_78;
  w_93 = t;
  t = term_s_38;
  z_93 = t;
  t = term_h_78;
  t = m_15(w_93, z_93, t);
  t = term_s_38;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  t = term_i_78;
  return(t);
}
static ATerm f_34 (ATerm t)
{
  ATerm a_94 = NULL;
  a_94 = t;
  if(match_string(t, "--warning"))
    {
      t = a_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = a_94;
    }
  return(t);
}
static ATerm g_34 (ATerm t)
{
  ATerm b_94 = NULL;
  b_94 = t;
  {
    ATerm m_78 = t;
    int n_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,k_19 = NULL;
        t = term_q_36;
        g_94 = t;
        t = term_e_55;
        h_94 = t;
        t = term_f_55;
        t = h_15(g_94, h_94, t);
        l_94 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_94 = ATgetFirst((ATermList) t);
            k_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_94);
        i_94 = t;
        t = j_94;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = k_94;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_94), j_94);
        k_19 = t;
        t = SSLsetAnnotations(k_19, i_94);
        t = term_e_55;
        e_94 = t;
        t = (ATerm) ATinsert(ATempty, b_94);
        f_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATinsert(ATempty, b_94));
        t = m_15(e_94, f_94, t);
        LocalPopChoice(n_78);
      }
    else
      {
        t = m_78;
        {
          ATerm m_94 = NULL,p_94 = NULL;
          t = term_e_55;
          m_94 = t;
          t = (ATerm) ATinsert(ATempty, b_94);
          p_94 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATinsert(ATempty, b_94));
          t = s_14(m_94, p_94, t);
        }
      }
  }
  t = term_s_38;
  return(t);
}
static ATerm m_34 (ATerm t)
{
  t = term_o_78;
  return(t);
}
static ATerm q_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_34 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  t = term_e_56;
  r_94 = t;
  t = term_e_40;
  s_94 = t;
  t = term_q_78;
  t = m_15(r_94, s_94, t);
  t = q_94;
  return(t);
}
static ATerm t_34 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_34 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
  t_94 = t;
  t = term_g_56;
  u_94 = t;
  t = term_k_36;
  v_94 = t;
  t = term_r_78;
  t = m_15(u_94, v_94, t);
  t = t_94;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  t = term_g_56;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_35 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL;
  t = term_z_60;
  w_94 = t;
  t = term_s_38;
  x_94 = t;
  t = term_t_78;
  t = m_15(w_94, x_94, t);
  t = term_s_38;
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = term_w_78;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm x_78 = t;
  int y_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_78);
    }
  else
    {
      t = x_78;
      {
        ATerm z_78 = t;
        int a_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_79);
          }
        else
          {
            t = z_78;
            {
              ATerm b_79 = t;
              int c_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(f_31, g_31, j_31, t);
                  LocalPopChoice(c_79);
                }
              else
                {
                  t = b_79;
                  {
                    ATerm d_79 = t;
                    int e_79 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(k_31, l_31, m_31, t);
                        LocalPopChoice(e_79);
                      }
                    else
                      {
                        t = d_79;
                        {
                          ATerm f_79 = t;
                          int g_79 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(n_31, o_31, p_31, t);
                              LocalPopChoice(g_79);
                            }
                          else
                            {
                              t = f_79;
                              {
                                ATerm h_79 = t;
                                int i_79 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(q_31, r_31, t_31, t);
                                    LocalPopChoice(i_79);
                                  }
                                else
                                  {
                                    t = h_79;
                                    {
                                      ATerm k_79 = t;
                                      int n_79 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(u_31, v_31, a_32, t);
                                          LocalPopChoice(n_79);
                                        }
                                      else
                                        {
                                          t = k_79;
                                          {
                                            ATerm o_79 = t;
                                            int p_79 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(b_32, c_32, d_32, t);
                                                LocalPopChoice(p_79);
                                              }
                                            else
                                              {
                                                t = o_79;
                                                {
                                                  ATerm q_79 = t;
                                                  int s_79 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(e_32, f_32, g_32, t);
                                                      LocalPopChoice(s_79);
                                                    }
                                                  else
                                                    {
                                                      t = q_79;
                                                      {
                                                        ATerm u_79 = t;
                                                        int w_79 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(h_32, k_32, l_32, t);
                                                            LocalPopChoice(w_79);
                                                          }
                                                        else
                                                          {
                                                            t = u_79;
                                                            {
                                                              ATerm y_79 = t;
                                                              int a_80 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(m_32, n_32, o_32, t);
                                                                  LocalPopChoice(a_80);
                                                                }
                                                              else
                                                                {
                                                                  t = y_79;
                                                                  {
                                                                    ATerm b_80 = t;
                                                                    int c_80 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(p_32, r_32, s_32, t);
                                                                        LocalPopChoice(c_80);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_80;
                                                                        {
                                                                          ATerm d_80 = t;
                                                                          int e_80 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(t_32, u_32, v_32, t);
                                                                              LocalPopChoice(e_80);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_80;
                                                                              {
                                                                                ATerm f_80 = t;
                                                                                int g_80 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(x_32, y_32, z_32, t);
                                                                                    LocalPopChoice(g_80);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_80;
                                                                                    {
                                                                                      ATerm h_80 = t;
                                                                                      int i_80 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(a_33, b_33, c_33, t);
                                                                                          LocalPopChoice(i_80);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_80;
                                                                                          {
                                                                                            ATerm j_80 = t;
                                                                                            int k_80 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(e_33, f_33, g_33, t);
                                                                                                LocalPopChoice(k_80);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_80;
                                                                                                {
                                                                                                  ATerm l_80 = t;
                                                                                                  int m_80 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm m_93 = NULL;
                                                                                                      m_93 = t;
                                                                                                      t = term_m_77;
                                                                                                      t = xtc_find_silent_0_0(t);
                                                                                                      t = m_93;
                                                                                                      t = Option_3_0(i_33, j_33, k_33, t);
                                                                                                      LocalPopChoice(m_80);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = l_80;
                                                                                                      {
                                                                                                        ATerm n_80 = t;
                                                                                                        int r_80 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = verbose_option_0_0(t);
                                                                                                            LocalPopChoice(r_80);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_80;
                                                                                                            {
                                                                                                              ATerm s_80 = t;
                                                                                                              int t_80 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(l_33, o_33, p_33, t);
                                                                                                                  LocalPopChoice(t_80);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_80;
                                                                                                                  {
                                                                                                                    ATerm v_80 = t;
                                                                                                                    int w_80 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(q_33, s_33, w_33, t);
                                                                                                                        LocalPopChoice(w_80);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = v_80;
                                                                                                                        {
                                                                                                                          ATerm x_80 = t;
                                                                                                                          int c_81 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(x_33, y_33, b_34, t);
                                                                                                                              LocalPopChoice(c_81);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_80;
                                                                                                                              {
                                                                                                                                ATerm d_81 = t;
                                                                                                                                int e_81 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = ArgOption_3_0(f_34, g_34, m_34, t);
                                                                                                                                    LocalPopChoice(e_81);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = d_81;
                                                                                                                                    {
                                                                                                                                      ATerm f_81 = t;
                                                                                                                                      int g_81 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(q_34, s_34, t_34, t);
                                                                                                                                          LocalPopChoice(g_81);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = f_81;
                                                                                                                                          {
                                                                                                                                            ATerm h_81 = t;
                                                                                                                                            int l_81 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(v_34, w_34, x_34, t);
                                                                                                                                                LocalPopChoice(l_81);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = h_81;
                                                                                                                                                t = Option_3_0(y_34, e_35, f_35, t);
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
static ATerm f_15 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm y_94 = NULL;
  t = SSL_hashtable_remove(n_61, m_61);
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_94);
  return(t);
}
static ATerm g_15 (ATerm r_61, ATerm t)
{
  ATerm z_94 = NULL;
  t = SSL_hashtable_destroy(r_61);
  z_94 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_94);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,e_95 = NULL;
  a_95 = t;
  t = table_hashtable_0_0(t);
  b_95 = t;
  t = lookup_table_0_1(a_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(e_95, t);
  t = b_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(a_95, c_95, t);
  t = a_95;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_81), term_i_68), term_y_81), term_x_81), term_v_81), term_i_68), term_u_81), term_t_81), term_s_81), term_r_81), term_q_81), term_p_81), term_o_81), term_n_81), term_m_81);
  return(t);
}
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  static ATerm a_96 (ATerm t);
  static ATerm a_96 (ATerm t)
  {
    ATerm u_95 = NULL,v_95 = NULL,z_95 = NULL;
    u_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_95;
      }
    else
      {
        ATerm w_44 = NULL,z_44 = NULL,a_45 = NULL,o_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_95 = ATgetFirst((ATermList) t);
            z_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_95);
        w_44 = t;
        t = v_95;
        t = x_108(t);
        z_44 = t;
        t = z_95;
        t = a_96(t);
        a_45 = t;
        t = (ATerm) ATinsert(CheckATermList(a_45), z_44);
        o_19 = t;
        t = SSLsetAnnotations(o_19, w_44);
      }
    return(t);
  }
  t = a_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_96 = ATgetFirst((ATermList) t);
      j_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_96 = NULL,v_96 = NULL;
        static ATerm g_35 (ATerm t);
        static ATerm g_35 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_96)), not_null(v_96));
          return(t);
        }
        t = j_96;
        t = l_0(t);
        if(((q_96 != NULL) && (q_96 != t)))
          _fail(t);
        else
          q_96 = t;
        t = i_96;
        t = j_0(t);
        if(((v_96 != NULL) && (v_96 != t)))
          _fail(t);
        else
          v_96 = t;
        t = j_96;
        t = reverse_acc_2_0(j_0, g_35, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_38;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_96 = NULL;
  t = term_s_38;
  t = h_0(t);
  w_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_82), w_96), term_j_82), term_i_68), term_i_82), term_i_68), term_e_82), term_d_82), term_i_68), term_a_82);
  return(t);
}
static ATerm k_35 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_35 (ATerm t)
{
  ATerm x_97 = NULL;
  x_97 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_97), term_l_82);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL;
  ATerm n_82 = t;
  int o_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_97 = NULL,j_97 = NULL;
      t = term_q_36;
      i_97 = t;
      t = term_q_82;
      j_97 = t;
      t = term_r_82;
      t = h_15(i_97, j_97, t);
      f_97 = t;
      LocalPopChoice(o_82);
    }
  else
    {
      t = n_82;
      {
        static ATerm h_35 (ATerm t);
        static ATerm h_35 (ATerm t)
        {
          ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,q_19 = NULL;
          o_97 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_97 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_97);
          m_97 = t;
          t = n_97;
          if(((f_97 != NULL) && (f_97 != t)))
            _fail(t);
          else
            f_97 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_97);
          q_19 = t;
          t = SSLsetAnnotations(q_19, m_97);
          return(t);
        }
        t = fetch_1_0(h_35, t);
      }
    }
  {
    ATerm s_82 = t;
    int t_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_35 (ATerm t);
        static ATerm j_35 (ATerm t)
        {
          t = not_null(f_97);
          return(t);
        }
        t = short_description_1_0(j_35, t);
        t = echo_0_0(t);
        LocalPopChoice(t_82);
      }
    else
      {
        t = s_82;
      }
  }
  t = term_u_82;
  t = echo_0_0(t);
  t = term_e_71;
  g_97 = t;
  t = term_f_71;
  h_97 = t;
  t = term_v_82;
  t = h_15(g_97, h_97, t);
  t = reverse_acc_2_0(_id, k_35, t);
  t = map_1_0(l_35, t);
  {
    ATerm y_82 = t;
    int z_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_97 = NULL;
        static ATerm n_35 (ATerm t);
        static ATerm n_35 (ATerm t)
        {
          t = not_null(f_97);
          return(t);
        }
        t = long_description_1_0(n_35, t);
        y_97 = t;
        t = (ATerm) ATinsert(CheckATermList(y_97), term_i_68);
        t = echo_0_0(t);
        LocalPopChoice(z_82);
      }
    else
      {
        t = y_82;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  static ATerm s_99 (ATerm t);
  static ATerm s_99 (ATerm t)
  {
    ATerm k_99 = NULL,p_99 = NULL,q_99 = NULL;
    k_99 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_99 = ATgetFirst((ATermList) t);
        q_99 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_83 = t;
      int e_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_45 = NULL,v_45 = NULL,t_19 = NULL;
          t = SSLgetAnnotations(k_99);
          k_45 = t;
          t = p_99;
          t = h_109(t);
          v_45 = t;
          t = (ATerm) ATinsert(CheckATermList(q_99), v_45);
          t_19 = t;
          t = SSLsetAnnotations(t_19, k_45);
          LocalPopChoice(e_83);
        }
      else
        {
          t = d_83;
          {
            ATerm g_46 = NULL,p_46 = NULL,z_19 = NULL;
            t = SSLgetAnnotations(k_99);
            g_46 = t;
            t = q_99;
            t = s_99(t);
            p_46 = t;
            t = (ATerm) ATinsert(CheckATermList(p_46), p_99);
            z_19 = t;
            t = SSLsetAnnotations(z_19, g_46);
          }
        }
    }
    return(t);
  }
  t = s_99(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL;
  c_100 = t;
  {
    ATerm i_83 = t;
    int j_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_100;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_83 = ATgetFirst((ATermList) t);
                ATerm l_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_100;
          }
        LocalPopChoice(j_83);
      }
    else
      {
        t = i_83;
        t = (ATerm) ATinsert(ATempty, c_100);
      }
  }
  d_100 = t;
  t = term_v_38;
  e_100 = t;
  t = SSL_printnl(e_100, d_100);
  t = c_100;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_100 = NULL,k_100 = NULL;
  t = term_q_36;
  i_100 = t;
  t = term_q_82;
  k_100 = t;
  t = term_r_82;
  t = h_15(i_100, k_100, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL;
  t = term_n_83;
  l_100 = t;
  t = term_s_38;
  m_100 = t;
  t = term_u_83;
  t = m_15(l_100, m_100, t);
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_v_83;
  return(t);
}
static ATerm r_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_35 (ATerm t)
{
  ATerm n_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL;
  t = term_n_83;
  r_100 = t;
  t = term_s_38;
  s_100 = t;
  t = term_u_83;
  t = m_15(r_100, s_100, t);
  t = term_f_78;
  n_100 = t;
  t = term_s_38;
  q_100 = t;
  t = term_h_78;
  t = m_15(n_100, q_100, t);
  t = term_x_83;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = term_e_84;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_84 = t;
  int j_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_35, p_35, q_35, t);
      LocalPopChoice(j_84);
    }
  else
    {
      t = i_84;
      t = Option_3_0(r_35, s_35, t_35, t);
    }
  return(t);
}
static ATerm i_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm u_100 = NULL,w_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL;
  u_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm k_84 = t;
    int l_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_84 = ATgetArgument(t, 0);
            ATerm o_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = h_15(p_56, q_56, t);
        LocalPopChoice(l_84);
      }
    else
      {
        t = k_84;
        t = (ATerm) ATempty;
      }
  }
  w_100 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(w_100), o_56));
  t = lookup_table_0_1(p_56, t);
  a_101 = t;
  t = (ATerm) ATinsert(CheckATermList(w_100), o_56);
  y_100 = t;
  t = a_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(q_56, y_100, z_100, t);
  t = u_100;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_101 = NULL,o_101 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_101 = NULL,s_101 = NULL,t_101 = NULL;
      t = term_s_38;
      t = g_0(t);
      q_101 = t;
      t = term_e_71;
      s_101 = t;
      t = term_f_71;
      t_101 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_71, term_f_71, q_101);
      t = i_15(s_101, t_101, q_101, t);
      _fail(t);
    }
  else
    {
      ATerm w_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_101 = ATgetFirst((ATermList) t);
          o_101 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_101;
      t = d_0(t);
      t = term_s_38;
      t = f_0(t);
      w_101 = t;
      t = (ATerm) ATinsert(CheckATermList(o_101), w_101);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm z_101 = NULL,b_102 = NULL,d_102 = NULL,h_102 = NULL,p_102 = NULL,y_102 = NULL,c_20 = NULL;
  y_102 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_102 = ATgetFirst((ATermList) t);
      d_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_102);
  z_101 = t;
  t = b_102;
  t = n_77(t);
  h_102 = t;
  t = d_102;
  t = o_77(t);
  p_102 = t;
  t = (ATerm) ATinsert(CheckATermList(p_102), h_102);
  c_20 = t;
  t = SSLsetAnnotations(c_20, z_101);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm o_103 = NULL,p_103 = NULL,s_103 = NULL,t_103 = NULL,h_104 = NULL,i_104 = NULL,k_20 = NULL;
  o_103 = t;
  {
    ATerm u_84 = t;
    int v_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_84;
        t = t_130(t);
        LocalPopChoice(v_84);
      }
    else
      {
        t = u_84;
      }
  }
  t = o_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_103 = ATgetFirst((ATermList) t);
      t_103 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_103);
  p_103 = t;
  t = term_q_82;
  i_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_82, s_103);
  t = m_15(i_104, s_103, t);
  t = t_103;
  {
    static ATerm x_104 (ATerm t);
    static ATerm x_104 (ATerm t)
    {
      ATerm x_84 = t;
      int c_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_85 = t;
          int m_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_104 = NULL;
              l_104 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_104;
              LocalPopChoice(m_85);
            }
          else
            {
              t = l_85;
              t = t_130(t);
              t = Cons_2_0(_id, x_104, t);
            }
          LocalPopChoice(c_85);
        }
      else
        {
          t = x_84;
          {
            ATerm q_104 = NULL,t_104 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_104 = ATgetFirst((ATermList) t);
                t_104 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_104), (ATerm) ATmakeAppl(sym_Undefined_1, q_104));
          }
        }
      return(t);
    }
    t = x_104(t);
  }
  h_104 = t;
  t = (ATerm) ATinsert(CheckATermList(h_104), (ATerm) ATmakeAppl(sym_Program_1, s_103));
  k_20 = t;
  t = SSLsetAnnotations(k_20, p_103);
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm v_105 = NULL;
  v_105 = t;
  if(match_string(t, "--help"))
    {
      t = v_105;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_105;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_105;
        }
    }
  return(t);
}
static ATerm w_35 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL;
  t = term_t_77;
  w_105 = t;
  t = term_s_38;
  x_105 = t;
  t = term_u_77;
  t = m_15(w_105, x_105, t);
  t = term_n_85;
  return(t);
}
static ATerm x_35 (ATerm t)
{
  t = term_o_85;
  return(t);
}
static ATerm y_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,r_105 = NULL,u_105 = NULL;
  f_105 = t;
  t = term_e_71;
  g_105 = t;
  t = term_t_85;
  t = lookup_table_0_1(g_105, t);
  u_105 = t;
  t = term_f_71;
  h_105 = t;
  t = (ATerm) ATempty;
  i_105 = t;
  t = u_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(h_105, i_105, r_105, t);
  t = f_105;
  {
    static ATerm u_35 (ATerm t);
    static ATerm u_35 (ATerm t)
    {
      ATerm e_86 = t;
      int f_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_130(t);
          LocalPopChoice(f_86);
        }
      else
        {
          t = e_86;
          {
            ATerm h_86 = t;
            int i_86 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_35, w_35, x_35, t);
                LocalPopChoice(i_86);
              }
            else
              {
                t = h_86;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_35, t);
  }
  {
    ATerm j_86 = t;
    int k_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_106 = NULL;
        o_106 = t;
        {
          ATerm l_86 = t;
          int m_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_47 = NULL;
              t = o_106;
              {
                ATerm n_86 = t;
                int o_86 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_47 = NULL,h_47 = NULL;
                    t = term_q_36;
                    g_47 = t;
                    t = term_t_77;
                    h_47 = t;
                    t = term_p_86;
                    t = h_15(g_47, h_47, t);
                    LocalPopChoice(o_86);
                  }
                else
                  {
                    t = n_86;
                    t = fetch_1_0(y_35, t);
                  }
              }
              t = o_106;
              t = default_system_usage_0_0(t);
              t = term_k_36;
              b_47 = t;
              t = SSL_exit(b_47);
              LocalPopChoice(m_86);
            }
          else
            {
              t = l_86;
              {
                ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
                t = term_q_36;
                m_47 = t;
                t = term_n_83;
                n_47 = t;
                t = term_q_86;
                t = h_15(m_47, n_47, t);
                t = o_106;
                t = default_system_about_0_0(t);
                t = term_k_36;
                l_47 = t;
                t = SSL_exit(l_47);
              }
            }
        }
        LocalPopChoice(k_86);
      }
    else
      {
        t = j_86;
        {
          ATerm r_86 = t;
          int v_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
              static ATerm a_36 (ATerm t);
              static ATerm a_36 (ATerm t)
              {
                ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL,m_20 = NULL;
                u_106 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_106 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_106);
                s_106 = t;
                t = t_106;
                if(((d_105 != NULL) && (d_105 != t)))
                  _fail(t);
                else
                  d_105 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_106);
                m_20 = t;
                t = SSLsetAnnotations(m_20, s_106);
                return(t);
              }
              t = fetch_1_0(a_36, t);
              t = term_v_36;
              q_106 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_105)), term_w_86);
              r_106 = t;
              t = SSL_printnl(q_106, r_106);
              t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_105)), term_w_86));
              t = default_system_usage_0_0(t);
              t = term_e_40;
              p_106 = t;
              t = SSL_exit(p_106);
              LocalPopChoice(v_86);
            }
          else
            {
              t = r_86;
            }
        }
      }
  }
  e_105 = t;
  t = term_e_71;
  t = table_destroy_0_0(t);
  t = e_105;
  return(t);
}
static ATerm k_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm z_106 = NULL;
  t = SSL_hashtable_put(j_61, h_61, i_61);
  z_106 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_106);
  return(t);
}
static ATerm l_15 (ATerm k_61, ATerm l_61, ATerm t)
{
  t = SSL_hashtable_get(l_61, k_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm a_107 = NULL;
  t = SSL_hashtable_create(p_61, q_61);
  a_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_107);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_107 = NULL,e_107 = NULL,h_107 = NULL,j_107 = NULL,k_107 = NULL;
  b_107 = t;
  t = term_y_86;
  j_107 = t;
  t = term_z_86;
  k_107 = t;
  t = b_107;
  t = new_hashtable_0_2(j_107, k_107, t);
  e_107 = t;
  t = b_107;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(b_107, e_107, h_107, t);
  t = b_107;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_107 = NULL;
  t = SSL_table_hashtable();
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_107);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm g_108 = NULL;
  t = table_hashtable_0_0(t);
  g_108 = t;
  {
    ATerm c_87 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_47 = NULL;
        t = g_108;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_15(b_58, r_47, t);
        LocalPopChoice(d_87);
      }
    else
      {
        t = c_87;
        {
          ATerm a_48 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = g_108;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_15(b_58, a_48, t);
        }
      }
  }
  return(t);
}
static ATerm m_15 (ATerm z_66, ATerm a_67, ATerm t)
{
  ATerm n_108 = NULL,p_108 = NULL;
  t = term_q_36;
  n_108 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, z_66, a_67);
  t = lookup_table_0_1(n_108, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_15(z_66, a_67, p_108, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_36, z_66, a_67);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm c_109 = NULL,d_109 = NULL;
  d_109 = t;
  t = SSL_explode_string(d_109);
  {
    ATerm f_87 = t;
    int l_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_110 (ATerm t);
        static ATerm m_110 (ATerm t)
        {
          ATerm g_110 = NULL,h_110 = NULL,k_110 = NULL;
          g_110 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_110 = ATgetFirst((ATermList) t);
              k_110 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm n_87 = t;
            int o_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_48 = NULL,s_48 = NULL,v_20 = NULL;
                t = SSLgetAnnotations(g_110);
                m_48 = t;
                t = k_110;
                t = m_110(t);
                s_48 = t;
                t = (ATerm) ATinsert(CheckATermList(s_48), h_110);
                v_20 = t;
                t = SSLsetAnnotations(v_20, m_48);
                LocalPopChoice(o_87);
              }
            else
              {
                t = n_87;
                {
                  ATerm d_49 = NULL,x_20 = NULL;
                  t = SSLgetAnnotations(g_110);
                  d_49 = t;
                  t = h_110;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, h_110);
                  x_20 = t;
                  t = SSLsetAnnotations(x_20, d_49);
                }
              }
          }
          return(t);
        }
        t = m_110(t);
        LocalPopChoice(l_87);
      }
    else
      {
        t = f_87;
        t = (ATerm) ATempty;
      }
  }
  c_109 = t;
  t = SSL_implode_string(c_109);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm n_15 (ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSL_strcat(y_38, z_38);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm p_110 = NULL,r_110 = NULL,s_110 = NULL,f_111 = NULL,j_111 = NULL,v_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,c_112 = NULL,g_112 = NULL,h_112 = NULL,l_112 = NULL,m_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL,b_113 = NULL,c_113 = NULL,f_113 = NULL,g_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,x_113 = NULL,y_113 = NULL;
  p_110 = t;
  t = term_a_68;
  x_113 = t;
  t = term_p_87;
  y_113 = t;
  t = term_q_87;
  t = m_15(x_113, y_113, t);
  t = term_s_36;
  t_113 = t;
  t = term_e_40;
  u_113 = t;
  t = term_s_87;
  t = m_15(t_113, u_113, t);
  t = term_l_42;
  r_113 = t;
  t = term_k_36;
  s_113 = t;
  t = term_z_87;
  t = m_15(r_113, s_113, t);
  t = term_w_42;
  o_113 = t;
  t = term_h_49;
  p_113 = t;
  t = term_a_88;
  t = m_15(o_113, p_113, t);
  t = term_k_60;
  g_113 = t;
  t = (ATerm) ATempty;
  n_113 = t;
  t = term_c_88;
  t = m_15(g_113, n_113, t);
  t = term_h_39;
  c_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_88), term_d_88);
  f_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_39, (ATerm) ATinsert(ATinsert(ATempty, term_f_88), term_d_88));
  t = m_15(c_113, f_113, t);
  t = term_j_88;
  t = xtc_find_path_0_0(t);
  g_112 = t;
  t = term_k_88;
  b_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_112, term_k_88);
  t = n_15(g_112, b_113, t);
  v_111 = t;
  t = term_j_88;
  t = xtc_find_path_0_0(t);
  c_112 = t;
  t = term_k_88;
  z_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_112, term_k_88);
  t = n_15(c_112, z_112, t);
  x_111 = t;
  t = term_m_88;
  t = xtc_find_path_0_0(t);
  z_111 = t;
  t = term_k_88;
  y_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_111, term_k_88);
  t = n_15(z_111, y_112, t);
  y_111 = t;
  t = term_w_37;
  u_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_111), term_k_60), x_111), term_k_60), v_111), term_k_60);
  x_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_111), term_k_60), x_111), term_k_60), v_111), term_k_60));
  t = m_15(u_112, x_112, t);
  t = term_j_88;
  t = xtc_find_path_0_0(t);
  j_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_88), j_111), term_l_76);
  t_112 = t;
  t = SSL_concat_strings(t_112);
  r_110 = t;
  t = term_m_88;
  t = xtc_find_path_0_0(t);
  f_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_88), f_111), term_l_76);
  s_112 = t;
  t = SSL_concat_strings(s_112);
  s_110 = t;
  t = term_l_37;
  q_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_88), term_w_88), s_110), term_v_88), term_u_88), term_q_88), r_110);
  r_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_88), term_w_88), s_110), term_v_88), term_u_88), term_q_88), r_110));
  t = m_15(q_112, r_112, t);
  t = term_i_56;
  m_112 = t;
  t = term_y_88;
  p_112 = t;
  t = term_z_88;
  t = m_15(m_112, p_112, t);
  t = term_e_55;
  h_112 = t;
  t = (ATerm) ATinsert(ATempty, term_a_89);
  l_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, (ATerm) ATinsert(ATempty, term_a_89));
  t = m_15(h_112, l_112, t);
  t = p_110;
  return(t);
}
static ATerm b_36 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL;
  a_115 = t;
  t = term_q_36;
  b_115 = t;
  t = term_x_54;
  c_115 = t;
  t = term_b_89;
  t = h_15(b_115, c_115, t);
  t = debug_1_0(c_36, t);
  t = a_115;
  return(t);
}
static ATerm c_36 (ATerm t)
{
  t = term_c_89;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm d_89 = t;
    int e_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_114 = NULL,f_114 = NULL,g_114 = NULL,j_114 = NULL,k_114 = NULL;
        t = term_q_36;
        j_114 = t;
        t = term_c_78;
        k_114 = t;
        t = term_f_89;
        t = h_15(j_114, k_114, t);
        t = term_g_89;
        t = xtc_find_0_0(t);
        d_114 = t;
        t = term_v_38;
        g_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_114, term_v_38);
        t = q_14(d_114, g_114, t);
        t = term_k_36;
        f_114 = t;
        t = SSL_exit(f_114);
        LocalPopChoice(e_89);
      }
    else
      {
        t = d_89;
      }
  }
  {
    ATerm h_89 = t;
    int i_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
        t = term_q_36;
        p_114 = t;
        t = term_f_78;
        q_114 = t;
        t = term_j_89;
        t = h_15(p_114, q_114, t);
        t = strc_version_0_0(t);
        t = term_k_36;
        o_114 = t;
        t = SSL_exit(o_114);
        LocalPopChoice(i_89);
      }
    else
      {
        t = h_89;
      }
  }
  {
    ATerm k_89 = t;
    int l_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_114 = NULL,v_114 = NULL,w_114 = NULL;
        t_114 = t;
        t = term_q_36;
        v_114 = t;
        t = term_x_54;
        w_114 = t;
        t = term_b_89;
        t = h_15(v_114, w_114, t);
        t = t_114;
        LocalPopChoice(l_89);
      }
    else
      {
        t = k_89;
        {
          ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
          t = term_v_36;
          y_114 = t;
          t = (ATerm) ATinsert(ATempty, term_m_89);
          z_114 = t;
          t = SSL_printnl(y_114, z_114);
          t = term_e_40;
          x_114 = t;
          t = SSL_exit(x_114);
          t = (ATerm) ATinsert(ATempty, term_m_89);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(b_36, t);
  return(t);
}
static ATerm d_36 (ATerm t)
{
  t = if_verbose1_1_0(f_36, t);
  return(t);
}
static ATerm e_36 (ATerm t)
{
  t = xtc_temp_files_1_0(h_36, t);
  return(t);
}
static ATerm f_36 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  e_115 = t;
  t = term_v_36;
  f_115 = t;
  t = (ATerm) ATinsert(CheckATermList(e_115), term_n_89);
  g_115 = t;
  t = SSL_printnl(f_115, g_115);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(CheckATermList(e_115), term_n_89));
  return(t);
}
static ATerm h_36 (ATerm t)
{
  ATerm o_89 = t;
  int p_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL;
      t = term_q_36;
      i_115 = t;
      t = term_x_54;
      j_115 = t;
      t = term_b_89;
      t = h_15(i_115, j_115, t);
      h_115 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_115);
      LocalPopChoice(p_89);
    }
  else
    {
      t = o_89;
      t = term_x_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm i_36 (ATerm t)
{
  ATerm k_115 = NULL,l_115 = NULL,m_115 = NULL;
  t = run_time_0_0(t);
  k_115 = t;
  t = term_v_36;
  l_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_89), k_115), term_u_89);
  m_115 = t;
  t = SSL_printnl(l_115, m_115);
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_89), k_115), term_u_89));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm w_89 = t;
  int x_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_115 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(d_36, e_36, t);
      t = if_verbose2_1_0(i_36, t);
      t = term_k_36;
      d_115 = t;
      t = SSL_exit(d_115);
      LocalPopChoice(x_89);
    }
  else
    {
      t = w_89;
      {
        ATerm n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
        t = run_time_0_0(t);
        n_115 = t;
        t = term_v_36;
        p_115 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_89), n_115), term_y_89);
        q_115 = t;
        t = SSL_printnl(p_115, q_115);
        t = term_e_40;
        o_115 = t;
        t = SSL_exit(o_115);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
