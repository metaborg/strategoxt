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
ATerm term_i_91;
ATerm term_d_91;
ATerm term_c_91;
ATerm term_z_90;
ATerm term_w_90;
ATerm term_s_90;
ATerm term_l_90;
ATerm term_i_90;
ATerm term_d_90;
ATerm term_b_90;
ATerm term_y_89;
ATerm term_x_89;
ATerm term_w_89;
ATerm term_v_89;
ATerm term_u_89;
ATerm term_s_89;
ATerm term_q_89;
ATerm term_p_89;
ATerm term_o_89;
ATerm term_l_89;
ATerm term_k_89;
ATerm term_j_89;
ATerm term_i_89;
ATerm term_h_89;
ATerm term_g_89;
ATerm term_f_89;
ATerm term_e_89;
ATerm term_d_89;
ATerm term_c_89;
ATerm term_b_89;
ATerm term_a_89;
ATerm term_q_88;
ATerm term_p_88;
ATerm term_o_88;
ATerm term_j_88;
ATerm term_i_88;
ATerm term_f_87;
ATerm term_e_87;
ATerm term_d_87;
ATerm term_r_86;
ATerm term_i_86;
ATerm term_h_86;
ATerm term_z_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_p_84;
ATerm term_n_84;
ATerm term_k_84;
ATerm term_g_84;
ATerm term_w_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_x_82;
ATerm term_w_82;
ATerm term_v_82;
ATerm term_u_82;
ATerm term_t_82;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_o_82;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_j_79;
ATerm term_i_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_u_78;
ATerm term_r_78;
ATerm term_p_78;
ATerm term_o_78;
ATerm term_n_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_a_78;
ATerm term_w_77;
ATerm term_u_77;
ATerm term_m_77;
ATerm term_i_77;
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
ATerm term_t_75;
ATerm term_p_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_c_75;
ATerm term_b_75;
ATerm term_n_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_g_74;
ATerm term_e_74;
ATerm term_u_73;
ATerm term_r_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_r_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_l_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_c_71;
ATerm term_s_70;
ATerm term_q_70;
ATerm term_o_70;
ATerm term_k_70;
ATerm term_d_70;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_l_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_m_68;
ATerm term_k_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_y_64;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_u_64;
ATerm term_r_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_i_64;
ATerm term_g_64;
ATerm term_f_64;
ATerm term_e_64;
ATerm term_v_63;
ATerm term_e_63;
ATerm term_s_62;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_a_62;
ATerm term_y_61;
ATerm term_v_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_j_60;
ATerm term_r_59;
ATerm term_f_59;
ATerm term_d_59;
ATerm term_y_58;
ATerm term_w_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_x_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_g_57;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_s_55;
ATerm term_o_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_i_55;
ATerm term_b_55;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
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
ATerm term_i_53;
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
ATerm term_t_52;
ATerm term_s_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_f_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_z_50;
ATerm term_x_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_m_50;
ATerm term_k_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_d_50;
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
ATerm term_k_49;
ATerm term_j_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_n_48;
ATerm term_l_48;
ATerm term_j_48;
ATerm term_h_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_r_47;
ATerm term_p_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_s_46;
ATerm term_q_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_g_45;
ATerm term_b_45;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_r_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_e_44;
ATerm term_b_44;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_f_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_p_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_d_42;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_g_39;
ATerm term_b_39;
ATerm term_v_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_l_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_t_36;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_c_37);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_o_37);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_t_37);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_l_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_o_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_w_39);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_s_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_d_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_h_42);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_z_42);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_f_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_w_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_49, term_m_40, term_e_49);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_49, term_f_37, term_h_49);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_49, term_y_40, term_m_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_p_49, term_q_49);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_49, term_t_49, term_u_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_x_49, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_d_50, term_f_50);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_50, term_k_50, term_m_50);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_50, term_u_50, term_x_50);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_51, term_c_51, term_d_51);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_51, term_g_51, term_p_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_i_44, term_t_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_w_51, term_a_52);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_52, term_f_52, term_h_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_52, term_k_52, term_l_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_q_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_v_52, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_52, term_z_52, term_a_53);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_53, term_d_53, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_53, term_h_53, term_i_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_v_53, term_w_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_54, term_v_46, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_g_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_k_54, term_l_54);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_54, term_o_54, term_p_54);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_l_55);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_v_55);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_l_56);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_s_56);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_d_59);
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(sym__2, term_p_58, term_x_57);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_n_60);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_y_60);
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_v_61);
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_k_68);
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_t_36);
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_36);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(sym__2, term_t_71, term_b_39);
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_b_75);
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(sym__2, term_s_70, term_k_75);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(sym__2, term_s_70, term_n_74);
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(sym__2, term_w_39, term_b_39);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(sym__2, term_o_38, term_b_39);
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(sym__2, term_n_60, term_b_39);
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(sym__2, term_v_55, term_b_39);
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(sym__2, term_w_44, term_b_39);
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_r_78));
  term_r_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(sym__2, term_x_78, term_b_39);
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(sym__2, term_a_79, term_b_39);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(sym__2, term_d_79, term_b_39);
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(sym__2, term_l_56, term_m_40);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(sym__2, term_n_56, term_t_36);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(sym__2, term_v_61, term_b_39);
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_g_84);
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym__2, term_l_71, term_n_71);
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym__2, term_t_85, term_b_39);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_87));
  term_f_87 = (ATerm) ATmakeAppl(sym__3, term_l_71, term_n_71, (ATerm) ATempty);
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_x_78);
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_t_85);
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(sym__2, term_k_68, term_a_89);
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_m_40);
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_t_36);
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(sym__2, term_f_43, term_p_49);
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(sym__2, term_y_60, (ATerm) ATempty);
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_j_89));
  term_j_89 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_p_89));
  term_p_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_q_89));
  term_q_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_s_89));
  term_s_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_u_89));
  term_u_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_v_89));
  term_v_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_w_89));
  term_w_89 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_x_89));
  term_x_89 = (ATerm) ATmakeAppl(sym__2, term_s_56, term_w_89);
  ATprotect(&(term_y_89));
  term_y_89 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_i_55);
  ATprotect(&(term_d_90));
  term_d_90 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_a_79);
  ATprotect(&(term_l_90));
  term_l_90 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_s_90));
  term_s_90 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_d_79);
  ATprotect(&(term_w_90));
  term_w_90 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_90));
  term_z_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
static ATerm d_14 (ATerm i_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_14 (ATerm g_23, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm f_14 (ATerm a_63, ATerm z_62, ATerm t);
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
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
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
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm p_15 (ATerm t);
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
static ATerm h_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm j_14 (ATerm w_67, ATerm x_67, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm g_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm r_20 (ATerm t);
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
static ATerm g_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm g_14 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm h_14 (ATerm v_24, ATerm w_24, ATerm t);
static ATerm i_14 (ATerm o_108 (ATerm), ATerm s_213, ATerm f_25, ATerm t);
static ATerm l_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm t_21 (ATerm t);
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
static ATerm k_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm m_14 (ATerm w_22, ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm c_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm n_15 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm n_14 (ATerm u_56, ATerm v_56, ATerm t);
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm i_27 (ATerm t);
static ATerm n_27 (ATerm t);
static ATerm o_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t);
static ATerm p_14 (ATerm q_43, ATerm r_43, ATerm t);
static ATerm r_14 (ATerm w_43, ATerm x_43, ATerm t);
static ATerm s_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm v_14 (ATerm x_25, ATerm q_226, ATerm t);
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t);
static ATerm u_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm w_14 (ATerm c_63, ATerm b_63, ATerm t);
static ATerm x_14 (ATerm o_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm o_75 (ATerm q_74, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm y_14 (ATerm f_67, ATerm e_67, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm b_15 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t);
static ATerm c_15 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm q_28 (ATerm t);
static ATerm d_15 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t);
static ATerm e_15 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t);
static ATerm g_82 (ATerm x_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_15 (ATerm b_25, ATerm t);
static ATerm g_15 (ATerm w_40, ATerm x_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_84 (ATerm y_82, ATerm t);
static ATerm e_84 (ATerm c_83, ATerm d_83, ATerm e_83, ATerm t);
static ATerm f_84 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm t);
static ATerm h_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_28 (ATerm t);
static ATerm d_29 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm r_29 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm e_30 (ATerm t);
static ATerm f_30 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_88 (ATerm s_87, ATerm t);
static ATerm m_30 (ATerm t);
static ATerm t_30 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm i_15 (ATerm c_67, ATerm d_67, ATerm t);
static ATerm j_15 (ATerm k_40, ATerm l_40, ATerm t);
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_90 (ATerm z_89, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_15 (ATerm g_67, ATerm h_67, ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm t_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
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
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm e_34 (ATerm t);
static ATerm f_34 (ATerm t);
static ATerm g_34 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm t_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm w_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm n_35 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm l_15 (ATerm m_61, ATerm n_61, ATerm t);
static ATerm m_15 (ATerm r_61, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm r_35 (ATerm t);
static ATerm s_35 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm z_35 (ATerm t);
static ATerm a_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm o_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm c_36 (ATerm t);
static ATerm d_36 (ATerm t);
static ATerm e_36 (ATerm t);
static ATerm f_36 (ATerm t);
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t);
static ATerm q_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t);
static ATerm r_15 (ATerm k_61, ATerm l_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
static ATerm s_15 (ATerm z_66, ATerm a_67, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm t_15 (ATerm y_38, ATerm z_38, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm i_36 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm j_36 (ATerm t);
static ATerm l_36 (ATerm t);
static ATerm m_36 (ATerm t);
static ATerm q_36 (ATerm t);
static ATerm s_36 (ATerm t);
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
  t = term_t_36;
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
  t = p_14(d_1, h_1, t);
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
      ATerm u_36 = ATgetArgument(t, 0);
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
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_z_36;
        j_1 = t;
        t = term_c_37;
        k_1 = t;
        t = term_d_37;
        t = n_15(j_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_f_37);
        t = geq_0_0(t);
        t = e_1;
        t = b_126(t);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = e_1;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = term_i_37;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_k_37);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = w_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_37;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_i_37;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm d_14 (ATerm i_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_z_36;
        b_2 = t;
        t = term_o_37;
        c_2 = t;
        t = term_p_37;
        t = n_15(b_2, c_2, t);
        LocalPopChoice(n_37);
      }
    else
      {
        t = m_37;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_q_37;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_z_36;
  s_1 = t;
  t = term_t_37;
  t_1 = t;
  t = term_w_37;
  t = n_15(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_o_37), i_23), term_z_37), term_x_37));
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
      t = j_14(q_1, r_1, t);
      t = term_a_38;
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
  t = term_i_37;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_f_38);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = t_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_i_37;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm e_14 (ATerm g_23, ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(u_1, t);
  l_2 = t;
  t = term_z_36;
  r_2 = t;
  t = term_l_38;
  s_2 = t;
  t = term_n_38;
  t = n_15(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_o_37), g_23), term_o_38));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, n_2);
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
      t = j_14(p_2, q_2, t);
      t = term_a_38;
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
  t = e_14(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14(o_3, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  t = term_i_37;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(l_3), term_r_38);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(l_3), term_r_38));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_z_36;
      i_3 = t;
      t = term_o_38;
      j_3 = t;
      t = term_v_38;
      t = n_15(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
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
static ATerm f_14 (ATerm a_63, ATerm z_62, ATerm t)
{
  ATerm w_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(a_63, z_62);
      LocalPopChoice(a_39);
    }
  else
    {
      t = w_38;
      t = get_errno_0_0(t);
      t = term_b_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, a_63, z_62);
      t = w_14(a_63, z_62, t);
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
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = e_4;
        t = w_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_g_39;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_g_39);
        t = w_14(g_4, v_1, t);
        t = SSL_remove(g_4);
        t = term_g_39;
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              t = e_4;
              t = w_0(t);
              k_2 = t;
              {
                ATerm l_39 = t;
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
                    t = l_39;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_4, k_2);
              t = f_14(g_4, k_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
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
  t = term_m_39;
  o_4 = t;
  t = term_n_39;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_o_39);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_s_39);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_t_39;
  s_4 = t;
  t = x_4;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        t = term_z_36;
        a_5 = t;
        t = term_w_39;
        b_5 = t;
        t = term_x_39;
        t = n_15(a_5, b_5, t);
        t = x_4;
        LocalPopChoice(v_39);
        t = (ATerm) ATinsert(ATempty, term_w_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_z_36;
  y_4 = t;
  t = term_s_39;
  z_4 = t;
  t = term_y_39;
  t = n_15(y_4, z_4, t);
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
  t = term_i_37;
  w_5 = t;
  t = (ATerm) ATinsert(ATempty, term_z_39);
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
    ATerm a_40 = t;
    int b_40 = stack_ptr;
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
        LocalPopChoice(b_40);
        t = xtc_transform_file_2_0(k_3, r_3, t);
      }
    else
      {
        t = a_40;
        t = xtc_transform_term_2_0(s_3, t_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(k_5, l_5, t);
  d_6 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
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
        LocalPopChoice(d_40);
        t = xtc_transform_file_2_0(p_5, q_5, t);
      }
    else
      {
        t = c_40;
        t = xtc_transform_term_2_0(k_6, u_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
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
        LocalPopChoice(f_40);
        t = xtc_transform_file_2_0(w_6, pass_verbose_0_0, t);
      }
    else
      {
        t = e_40;
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
  t = term_i_37;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_g_40);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(y_5), term_g_40));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_i_40);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_i_40);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
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
        LocalPopChoice(o_40);
        t = xtc_transform_file_2_0(z_3, d_4, t);
      }
    else
      {
        t = n_40;
        t = xtc_transform_term_2_0(f_4, h_4, t);
      }
  }
  t = if_keep1_1_0(i_4, t);
  n_6 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
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
        LocalPopChoice(q_40);
        t = xtc_transform_file_2_0(k_4, n_4, t);
      }
    else
      {
        t = p_40;
        t = xtc_transform_term_2_0(u_4, d_5, t);
      }
  }
  t = if_keep1_1_0(f_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_i_40);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_r_40;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_i_40);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_i_40);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_i_40);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = save_as_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_v_40;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_y_40;
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
  t = term_z_40;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_i_40);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_i_40);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = get_outfile_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_d_41;
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
  t = term_i_37;
  f_9 = t;
  t = (ATerm) ATinsert(ATempty, term_e_41);
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
  ATerm h_9 = NULL,i_9 = NULL,s_9 = NULL;
  h_9 = t;
  t = term_i_37;
  i_9 = t;
  t = (ATerm) ATinsert(CheckATermList(h_9), term_h_41);
  s_9 = t;
  t = SSL_printnl(i_9, s_9);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(h_9), term_h_41));
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_l_41);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm z_10 = NULL;
  t = pass_verbose_0_0(t);
  z_10 = t;
  t = (ATerm) ATinsert(CheckATermList(z_10), term_l_41);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
      z_8 = t;
      t = term_z_36;
      a_9 = t;
      t = term_w_39;
      b_9 = t;
      t = term_x_39;
      t = n_15(a_9, b_9, t);
      t = z_8;
      LocalPopChoice(o_41);
      {
        ATerm c_9 = NULL;
        c_9 = t;
        t = if_verbose2_1_0(f_7, t);
        {
          static ATerm h_7 (ATerm t);
          static ATerm h_7 (ATerm t)
          {
            ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
            j_5 = t;
            t = term_p_41;
            h_5 = t;
            t = (ATerm) ATinsert(ATempty, term_q_41);
            i_5 = t;
            t = j_5;
            t = comp_0_2(h_5, i_5, t);
            w_9 = t;
            {
              ATerm u_41 = t;
              int b_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL;
                  t = term_z_36;
                  e_10 = t;
                  t = term_d_42;
                  g_10 = t;
                  t = term_f_42;
                  t = n_15(e_10, g_10, t);
                  a_10 = t;
                  t = term_z_36;
                  c_10 = t;
                  t = term_h_42;
                  d_10 = t;
                  t = term_i_42;
                  t = n_15(c_10, d_10, t);
                  b_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, b_10);
                  {
                    ATerm j_42 = t;
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
                        t = j_42;
                      }
                  }
                  LocalPopChoice(b_42);
                }
              else
                {
                  t = u_41;
                  {
                    ATerm j_10 = NULL,k_10 = NULL;
                    t = term_z_36;
                    j_10 = t;
                    t = term_d_42;
                    k_10 = t;
                    t = term_f_42;
                    t = n_15(j_10, k_10, t);
                    t = debug_1_0(o_7, t);
                    _fail(t);
                  }
                }
            }
            t = w_9;
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
              ATerm k_42 = t;
              int n_42 = stack_ptr;
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
                  LocalPopChoice(n_42);
                  t = xtc_transform_file_2_0(r_7, s_7, t);
                }
              else
                {
                  t = k_42;
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
            t = term_i_37;
            y_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_8)), term_w_42), not_null(x_8)), term_p_42));
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
      t = n_41;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,j_11 = NULL,k_11 = NULL;
        t = term_z_36;
        j_11 = t;
        t = term_z_42;
        k_11 = t;
        t = term_a_43;
        t = n_15(j_11, k_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_m_40);
        t = geq_0_0(t);
        t = e_11;
        t = c_127(t);
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        t = e_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
        t = p_11;
        t = k_136(t);
        r_11 = t;
        t = term_z_36;
        t_11 = t;
        t = term_f_43;
        u_11 = t;
        t = term_n_43;
        t = n_15(t_11, u_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = p_11;
        t = l_136(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = p_11;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_i_40);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_7 = NULL;
  t = pass_verbose_0_0(t);
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(l_7), term_i_40);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_i_40);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm w_8 = NULL;
  t = pass_verbose_0_0(t);
  w_8 = t;
  t = (ATerm) ATinsert(CheckATermList(w_8), term_i_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  {
    ATerm p_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_13;
        {
          ATerm t_43 = t;
          int u_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  d_7 = ATgetArgument(t, 0);
                  {
                    ATerm u_7 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(n_13);
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
                  t = n_13;
                }
              LocalPopChoice(u_43);
              t = xtc_transform_file_2_0(b_8, c_8, t);
            }
          else
            {
              t = t_43;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(s_43);
      }
    else
      {
        t = p_43;
        t = n_13;
        {
          ATerm v_43 = t;
          int a_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  t_8 = ATgetArgument(t, 0);
                  {
                    ATerm l_9 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(n_13);
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
                  t = n_13;
                }
              LocalPopChoice(a_44);
              t = xtc_transform_file_2_0(g_8, h_8, t);
            }
          else
            {
              t = v_43;
              t = xtc_transform_term_2_0(i_8, j_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,w_13 = NULL;
  w_13 = t;
  t = term_b_44;
  t_13 = t;
  t = w_13;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL;
        t = term_z_36;
        a_14 = t;
        t = term_w_39;
        b_14 = t;
        t = term_x_39;
        t = n_15(a_14, b_14, t);
        t = w_13;
        LocalPopChoice(d_44);
        t = (ATerm) ATinsert(ATempty, term_e_44);
      }
    else
      {
        t = c_44;
        t = (ATerm) ATempty;
      }
  }
  u_13 = t;
  t = w_13;
  t = comp_0_2(t_13, u_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL,z_14 = NULL,a_15 = NULL;
        t = term_z_36;
        z_14 = t;
        t = term_z_42;
        a_15 = t;
        t = term_a_43;
        t = n_15(z_14, a_15, t);
        u_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_14, term_i_44);
        t = geq_0_0(t);
        t = q_14;
        t = f_127(t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = q_14;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = term_i_37;
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, term_j_44);
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
  ATerm l_18 = NULL;
  t = if_verbose3_1_0(p_8, t);
  t = olevel_2_0(u_8, d_9, t);
  t = olevel_2_0(r_9, v_9, t);
  t = olevel_2_0(a_11, d_11, t);
  l_18 = t;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_21 = ATgetArgument(t, 0);
            {
              ATerm w_12 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(l_18);
              w_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_21);
              c_6 = t;
              t = SSLsetAnnotations(c_6, w_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_18;
          }
        LocalPopChoice(l_44);
        t = xtc_transform_file_2_0(q_12, r_12, t);
      }
    else
      {
        t = k_44;
        t = xtc_transform_term_2_0(s_12, t_12, t);
      }
  }
  t = olevel_2_0(u_12, v_12, t);
  t = olevel_2_0(r_13, s_13, t);
  t = olevel_2_0(y_15, z_15, t);
  t = olevel_2_0(l_16, m_16, t);
  t = olevel_2_0(n_17, o_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_i_37;
  j_18 = t;
  t = (ATerm) ATinsert(CheckATermList(i_18), term_m_44);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(i_18), term_m_44));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,r_18 = NULL;
  m_18 = t;
  t = term_z_36;
  n_18 = t;
  t = term_f_43;
  r_18 = t;
  t = term_n_43;
  t = n_15(n_18, r_18, t);
  t = debug_1_0(r_8, t);
  t = m_18;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_n_44;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm o_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_18 = ATgetArgument(t, 0);
            {
              ATerm p_9 = NULL,l_4 = NULL;
              t = SSLgetAnnotations(s_18);
              p_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_18);
              l_4 = t;
              t = SSLsetAnnotations(l_4, p_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_18;
          }
        LocalPopChoice(q_44);
        t = xtc_transform_file_2_0(j_9, k_9, t);
      }
    else
      {
        t = o_44;
        t = xtc_transform_term_2_0(m_9, n_9, t);
      }
  }
  t = if_keep1_1_0(o_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_i_40);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm d_19 = NULL;
  t = pass_verbose_0_0(t);
  d_19 = t;
  t = (ATerm) ATinsert(CheckATermList(d_19), term_i_40);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = save_as_1_0(q_9, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_19;
        {
          ATerm v_44 = t;
          if((PushChoice() == 0))
            {
              ATerm n_10 = NULL,q_10 = NULL;
              t = term_z_36;
              n_10 = t;
              t = term_w_44;
              q_10 = t;
              t = term_x_44;
              t = n_15(n_10, q_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_44;
            }
        }
        t = s_19;
        {
          ATerm y_44 = t;
          int a_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  {
                    ATerm v_11 = NULL,r_5 = NULL;
                    t = SSLgetAnnotations(s_19);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, b_11);
                    r_5 = t;
                    t = SSLsetAnnotations(r_5, v_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_19;
                }
              LocalPopChoice(a_45);
              t = xtc_transform_file_2_0(f_10, i_10, t);
            }
          else
            {
              t = y_44;
              t = xtc_transform_term_2_0(l_10, r_10, t);
            }
        }
        t = if_keep2_1_0(s_10, t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
        t = s_19;
      }
  }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm g_11 = NULL;
  t = pass_verbose_0_0(t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(g_11), term_i_40);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm i_11 = NULL;
  t = pass_verbose_0_0(t);
  i_11 = t;
  t = (ATerm) ATinsert(CheckATermList(i_11), term_i_40);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = save_as_1_0(t_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,b_20 = NULL;
  b_20 = t;
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_20 = ATgetArgument(t, 0);
            {
              ATerm a_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(b_20);
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, a_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(i_45);
        t = xtc_transform_file_2_0(f_11, m_11, t);
      }
    else
      {
        t = h_45;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(q_11, t);
  x_19 = t;
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_20 = ATgetArgument(t, 0);
            {
              ATerm e_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(x_19);
              e_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_20);
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
        LocalPopChoice(k_45);
        t = xtc_transform_file_2_0(x_11, y_11, t);
      }
    else
      {
        t = j_45;
        t = xtc_transform_term_2_0(z_11, b_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_12, t);
  w_19 = t;
  {
    ATerm m_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_21 = ATgetArgument(t, 0);
            {
              ATerm j_12 = NULL,u_5 = NULL;
              t = SSLgetAnnotations(w_19);
              j_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
              u_5 = t;
              t = SSLsetAnnotations(u_5, j_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_19;
          }
        LocalPopChoice(q_45);
        t = xtc_transform_file_2_0(f_12, g_12, t);
      }
    else
      {
        t = m_45;
        t = xtc_transform_term_2_0(h_12, n_12, t);
      }
  }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_s_45;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_i_40);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_s_45;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_i_40);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = save_as_1_0(w_11, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_i_40);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_i_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = save_as_1_0(d_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_i_40);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_i_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_i_40);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm r_21 = NULL;
  t = pass_verbose_0_0(t);
  r_21 = t;
  t = (ATerm) ATinsert(CheckATermList(r_21), term_i_40);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  w_21 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_22 = ATgetArgument(t, 0);
            {
              ATerm c_13 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(w_21);
              c_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
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
        LocalPopChoice(a_46);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = z_45;
        t = xtc_transform_term_2_0(z_12, a_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  v_21 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_22 = ATgetArgument(t, 0);
            {
              ATerm m_13 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(v_21);
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, m_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(d_46);
        t = xtc_transform_file_2_0(b_13, d_13, t);
      }
    else
      {
        t = c_46;
        t = xtc_transform_term_2_0(e_13, f_13, t);
      }
  }
  u_21 = t;
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_23 = ATgetArgument(t, 0);
            {
              ATerm y_13 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(u_21);
              y_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, y_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_21;
          }
        LocalPopChoice(f_46);
        t = xtc_transform_file_2_0(g_13, h_13, t);
      }
    else
      {
        t = e_46;
        t = xtc_transform_term_2_0(i_13, j_13, t);
      }
  }
  t = if_keep4_1_0(l_13, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm e_22 = NULL;
  t = pass_verbose_0_0(t);
  e_22 = t;
  t = (ATerm) ATinsert(CheckATermList(e_22), term_i_40);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_i_40);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm n_22 = NULL;
  t = pass_verbose_0_0(t);
  n_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), term_i_40);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm o_22 = NULL;
  t = pass_verbose_0_0(t);
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), term_i_40);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_i_40);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm n_23 = NULL;
  t = pass_verbose_0_0(t);
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), term_i_40);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = save_as_1_0(q_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  p_23 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_23 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(p_23);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_23;
          }
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(v_13, x_13, t);
      }
    else
      {
        t = k_46;
        t = xtc_transform_term_2_0(z_13, c_14, t);
      }
  }
  o_23 = t;
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_24 = ATgetArgument(t, 0);
            {
              ATerm x_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(o_23);
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
            t = o_23;
          }
        LocalPopChoice(n_46);
        t = xtc_transform_file_2_0(k_14, t_14, t);
      }
    else
      {
        t = m_46;
        t = xtc_transform_term_2_0(p_15, u_15, t);
      }
  }
  t = if_keep2_1_0(v_15, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm y_23 = NULL;
  t = pass_verbose_0_0(t);
  y_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_23), term_i_40);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm z_23 = NULL;
  t = pass_verbose_0_0(t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), term_i_40);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm j_24 = NULL;
  t = pass_verbose_0_0(t);
  j_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), term_i_40);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm k_24 = NULL;
  t = pass_verbose_0_0(t);
  k_24 = t;
  t = (ATerm) ATinsert(CheckATermList(k_24), term_i_40);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_24 = ATgetArgument(t, 0);
            {
              ATerm b_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(l_24);
              b_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_24);
              q_6 = t;
              t = SSLsetAnnotations(q_6, b_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_24;
          }
        LocalPopChoice(z_46);
        t = xtc_transform_file_2_0(a_16, c_16, t);
      }
    else
      {
        t = y_46;
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
  t = term_v_45;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm s_24 = NULL;
  t = pass_verbose_0_0(t);
  s_24 = t;
  t = (ATerm) ATinsert(CheckATermList(s_24), term_i_40);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm t_24 = NULL;
  t = pass_verbose_0_0(t);
  t_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), term_i_40);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_y_40;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm z_24 = NULL,c_25 = NULL,d_25 = NULL;
  d_25 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(d_25);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_25;
          }
        LocalPopChoice(f_47);
        t = xtc_transform_file_2_0(o_16, p_16, t);
      }
    else
      {
        t = e_47;
        t = xtc_transform_term_2_0(q_16, s_16, t);
      }
  }
  t = if_keep3_1_0(t_16, t);
  c_25 = t;
  {
    ATerm h_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_26 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(c_25);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_26);
              s_6 = t;
              t = SSLsetAnnotations(s_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_25;
          }
        LocalPopChoice(l_47);
        t = xtc_transform_file_2_0(w_16, x_16, t);
      }
    else
      {
        t = h_47;
        t = xtc_transform_term_2_0(y_16, z_16, t);
      }
  }
  t = if_keep3_1_0(b_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(d_17, t);
  z_24 = t;
  {
    ATerm m_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
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
            t = z_24;
          }
        LocalPopChoice(n_47);
        t = xtc_transform_file_2_0(f_17, g_17, t);
      }
    else
      {
        t = m_47;
        t = xtc_transform_term_2_0(h_17, k_17, t);
      }
  }
  t = if_keep3_1_0(l_17, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_25 = NULL;
  t = pass_verbose_0_0(t);
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), term_i_40);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm s_25 = NULL;
  t = pass_verbose_0_0(t);
  s_25 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), term_i_40);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = save_as_1_0(u_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_r_47;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm g_26 = NULL;
  t = pass_verbose_0_0(t);
  g_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), term_i_40);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_i_40);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = save_as_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = save_as_1_0(e_17, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_u_47;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_i_40);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm s_26 = NULL;
  t = pass_verbose_0_0(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), term_i_40);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = save_as_1_0(m_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm u_26 = NULL,w_26 = NULL;
  w_26 = t;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,x_6 = NULL;
              t = SSLgetAnnotations(w_26);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
              x_6 = t;
              t = SSLsetAnnotations(x_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_26;
          }
        LocalPopChoice(x_47);
        t = xtc_transform_file_2_0(p_17, q_17, t);
      }
    else
      {
        t = w_47;
        t = xtc_transform_term_2_0(r_17, s_17, t);
      }
  }
  t = if_keep1_1_0(v_17, t);
  u_26 = t;
  {
    ATerm y_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,a_7 = NULL;
              t = SSLgetAnnotations(u_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
              a_7 = t;
              t = SSLsetAnnotations(a_7, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_26;
          }
        LocalPopChoice(a_48);
        t = xtc_transform_file_2_0(x_17, y_17, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(z_17, b_18, t);
      }
  }
  t = if_keep1_1_0(h_18, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_i_40);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_i_40);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm p_27 = NULL;
  t = pass_verbose_0_0(t);
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), term_i_40);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_i_40);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = save_as_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_d_48;
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
  t = term_k_41;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_l_41);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm p_29 = NULL;
  t = pass_verbose_0_0(t);
  p_29 = t;
  t = (ATerm) ATinsert(CheckATermList(p_29), term_l_41);
  return(t);
}
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,a_29 = NULL;
  t_28 = t;
  {
    static ATerm t_18 (ATerm t);
    static ATerm t_18 (ATerm t)
    {
      static ATerm w_18 (ATerm t);
      static ATerm w_18 (ATerm t)
      {
        ATerm b_29 = NULL,c_29 = NULL;
        t = b_100(t);
        b_29 = t;
        t = term_e_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_48, b_29);
        t = t_15(c_29, b_29, t);
        return(t);
      }
      t = get_outfile_1_0(w_18, t);
      if(((r_28 != NULL) && (r_28 != t)))
        _fail(t);
      else
        r_28 = t;
      return(t);
    }
    t = copy_to_1_0(t_18, t);
  }
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
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
        LocalPopChoice(g_48);
        t = xtc_transform_file_2_0(x_18, z_18, t);
      }
    else
      {
        t = f_48;
        t = xtc_transform_term_2_0(a_19, e_19, t);
      }
  }
  {
    static ATerm g_19 (ATerm t);
    static ATerm g_19 (ATerm t)
    {
      ATerm q_29 = NULL;
      t = term_h_48;
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), term_h_48);
      t = t_15(not_null(r_28), q_29, t);
      if(((s_28 != NULL) && (s_28 != t)))
        _fail(t);
      else
        s_28 = t;
      return(t);
    }
    t = copy_to_1_0(g_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_48), not_null(s_28)), term_l_48), not_null(r_28)), term_j_48);
  a_29 = t;
  t = SSL_concat_strings(a_29);
  u_28 = t;
  t = term_i_37;
  v_28 = t;
  t = (ATerm) ATinsert(ATempty, u_28);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = t_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL,b_30 = NULL,c_30 = NULL;
        t = term_z_36;
        b_30 = t;
        t = term_z_42;
        c_30 = t;
        t = term_a_43;
        t = n_15(b_30, c_30, t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, term_f_37);
        t = geq_0_0(t);
        t = t_29;
        t = d_127(t);
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        t = t_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm g_30 = NULL,i_30 = NULL,k_30 = NULL,l_30 = NULL;
  t = term_c_37;
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL;
        t = term_z_36;
        n_30 = t;
        t = term_c_37;
        o_30 = t;
        t = term_d_37;
        t = n_15(n_30, o_30, t);
        LocalPopChoice(r_48);
      }
    else
      {
        t = q_48;
        t = term_m_40;
      }
  }
  i_30 = t;
  t = term_m_40;
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_m_40);
  t = r_14(i_30, l_30, t);
  k_30 = t;
  t = SSL_int_to_string(k_30);
  g_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_30), term_c_37);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_48 = ATgetArgument(t, 0);
      if(match_cons(t_48, sym_Stream_1))
        {
          r_30 = ATgetArgument(t_48, 0);
        }
      else
        _fail(t);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(r_30, s_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  q_30 = t;
  t = xtc_new_file_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
  t = i_14(i_19, p_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_30);
  t = xtc_transform_file_2_0(c_135, d_135, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_14 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_execvp(w_67, x_67);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,z_31 = NULL,b_32 = NULL;
  v_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_31 = ATgetArgument(t, 0);
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = SSL_int_to_string(w_31);
        i_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_48), i_17), term_u_48);
        j_17 = t;
        t = SSL_concat_strings(j_17);
      }
    }
  else
    {
      ATerm t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_31 = ATgetArgument(t, 0);
          z_31 = ATgetArgument(t, 1);
          b_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_31);
      t_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_32), term_x_48), t_17), term_w_48), w_31);
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
    ATerm y_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_19 (ATerm t);
        static ATerm k_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_49 = ATgetArgument(t, 0);
              if((i_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_49 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_54), term_m_54), term_i_54), term_e_54), term_b_54), term_x_53), term_t_53), term_p_53), term_l_53), term_f_53), term_b_53), term_x_52), term_s_52), term_m_52), term_i_52), term_b_52), term_u_51), term_q_51), term_e_51), term_z_50), term_s_50), term_g_50), term_z_49), term_v_49), term_r_49), term_n_49), term_j_49), term_f_49);
        t = fetch_elem_1_0(k_19, t);
        LocalPopChoice(z_48);
      }
    else
      {
        t = y_48;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_32 = NULL,d_33 = NULL;
  o_32 = t;
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_54 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
            {
              ATerm v_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_54);
        {
          ATerm w_54 = t;
          int z_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL,c_18 = NULL,g_18 = NULL;
              t = d_33;
              {
                ATerm a_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_18 = t;
              t = term_i_37;
              c_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_18), term_b_55);
              g_18 = t;
              t = SSL_printnl(c_18, g_18);
              t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(ATinsert(ATempty, a_18), term_b_55));
              LocalPopChoice(z_54);
            }
          else
            {
              t = w_54;
              t = o_32;
            }
        }
      }
    else
      {
        t = r_54;
        t = o_32;
      }
  }
  t = o_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,o_33 = NULL;
  o_33 = t;
  t = fork_0_0(t);
  m_33 = t;
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_33;
        t = n_127(t);
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = SSL_waitpid(m_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_55 = ATgetArgument(t, 0);
            if(((ATgetType(e_55) != AT_INT) || (ATgetInt((ATermInt) e_55) != 0)))
              _fail(t);
            {
              ATerm g_55 = ATgetArgument(t, 1);
            }
            {
              ATerm h_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  s_33 = t;
  t = g_136(t);
  t = xtc_find_0_0(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
  {
    static ATerm n_19 (ATerm t);
    static ATerm n_19 (ATerm t)
    {
      ATerm t_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
      t = j_14(r_33, s_33, t);
      t = term_a_38;
      t_33 = t;
      t = SSL_exit(t_33);
      return(t);
    }
    t = fork_and_wait_1_0(n_19, t);
  }
  t = s_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_34 = NULL,b_34 = NULL;
      t = x_33;
      t = xtc_new_file_0_0(t);
      a_34 = t;
      t = t_0(t);
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, (ATerm) ATinsert(ATinsert(ATempty, a_34), term_o_37));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_34);
    }
  else
    {
      ATerm i_34 = NULL,j_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_33;
      t = xtc_new_file_0_0(t);
      i_34 = t;
      t = t_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_34), term_o_37), z_33), term_i_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm j_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL,c_50 = NULL;
      c_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm j_30 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(c_50);
            j_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_50);
            q_8 = t;
            t = SSLsetAnnotations(q_8, j_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_50;
        }
      LocalPopChoice(k_55);
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
          ATerm e_50 = NULL;
          t = pass_verbose_0_0(t);
          e_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), e_50), (ATerm) ATinsert(ATempty, term_i_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, v_19, t);
      }
    }
  else
    {
      t = j_55;
      {
        static ATerm z_19 (ATerm t);
        static ATerm c_20 (ATerm t);
        static ATerm z_19 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm c_20 (ATerm t)
        {
          ATerm h_50 = NULL;
          t = pass_verbose_0_0(t);
          h_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), h_50), (ATerm) ATinsert(ATempty, term_i_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(z_19, c_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm l_34 = NULL,p_34 = NULL,q_34 = NULL;
  l_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_34;
      t = y_115(t);
    }
  else
    {
      ATerm u_34 = NULL,x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_34;
      t = a_116(t);
      u_34 = t;
      t = q_34;
      t = foldr_3_0(y_115, z_115, a_116, t);
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, x_34);
      t = z_115(t);
    }
  return(t);
}
static ATerm e_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_35), term_l_55);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm b_35 = NULL,e_35 = NULL;
  t = term_z_36;
  b_35 = t;
  t = term_l_55;
  e_35 = t;
  t = term_m_55;
  t = n_15(b_35, e_35, t);
  t = foldr_3_0(e_20, conc_0_0, g_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm m_20 = NULL;
  t = pass_verbose_0_0(t);
  m_20 = t;
  t = (ATerm) ATinsert(CheckATermList(m_20), term_i_40);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_i_40);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = get_outfile_1_0(b_21, t);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_s_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL,l_19 = NULL,o_19 = NULL,p_19 = NULL,t_19 = NULL;
        t = term_z_36;
        p_19 = t;
        t = term_v_55;
        t_19 = t;
        t = term_w_55;
        t = n_15(p_19, t_19, t);
        t = r_36;
        {
          ATerm x_55 = t;
          int z_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_36;
              {
                ATerm b_56 = t;
                int c_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        a_20 = ATgetArgument(t, 0);
                        {
                          ATerm i_21 = NULL,s_8 = NULL;
                          t = SSLgetAnnotations(r_36);
                          i_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, a_20);
                          s_8 = t;
                          t = SSLsetAnnotations(s_8, i_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = r_36;
                      }
                    LocalPopChoice(c_56);
                    t = xtc_transform_file_2_0(i_20, l_20, t);
                  }
                else
                  {
                    t = b_56;
                    t = xtc_transform_term_2_0(r_20, u_20, t);
                  }
              }
              LocalPopChoice(z_55);
            }
          else
            {
              t = x_55;
              {
                ATerm o_20 = NULL,w_20 = NULL,x_20 = NULL;
                t = term_i_37;
                w_20 = t;
                t = (ATerm) ATinsert(ATempty, term_d_56);
                x_20 = t;
                t = SSL_printnl(w_20, x_20);
                t = term_m_40;
                o_20 = t;
                t = SSL_exit(o_20);
                t = (ATerm) ATinsert(ATempty, term_d_56);
              }
            }
        }
        t = copy_to_1_0(z_20, t);
        c_19 = t;
        t = term_i_37;
        l_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_56));
        o_19 = t;
        t = SSL_printnl(l_19, o_19);
        t = c_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
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
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL,e_37 = NULL;
        t = term_z_36;
        b_37 = t;
        t = term_z_42;
        e_37 = t;
        t = term_a_43;
        t = n_15(b_37, e_37, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_37, term_v_46);
        t = geq_0_0(t);
        t = y_36;
        t = g_127(t);
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
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
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL,r_37 = NULL,s_37 = NULL;
        t = term_z_36;
        r_37 = t;
        t = term_z_42;
        s_37 = t;
        t = term_a_43;
        t = n_15(r_37, s_37, t);
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_37, term_p_49);
        t = geq_0_0(t);
        t = h_37;
        t = h_127(t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = h_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL;
      t = term_z_36;
      u_37 = t;
      t = term_l_56;
      v_37 = t;
      t = term_m_56;
      t = n_15(u_37, v_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_56);
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      t = (ATerm) ATinsert(ATempty, term_n_56);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,h_38 = NULL,i_38 = NULL;
  d_38 = t;
  t = term_r_56;
  b_38 = t;
  t = term_z_36;
  h_38 = t;
  t = term_s_56;
  i_38 = t;
  t = term_t_56;
  t = n_15(h_38, i_38, t);
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_38), term_s_56);
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
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_38 = NULL,p_38 = NULL,q_38 = NULL;
        t = term_z_36;
        p_38 = t;
        t = term_z_42;
        q_38 = t;
        t = term_a_43;
        t = n_15(p_38, q_38, t);
        m_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_38, term_y_40);
        t = geq_0_0(t);
        t = k_38;
        t = e_127(t);
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        t = k_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm s_38 = NULL;
  static ATerm d_21 (ATerm t);
  static ATerm d_21 (ATerm t)
  {
    t = j_109(t);
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    return(t);
  }
  t = fetch_1_0(d_21, t);
  t = not_null(s_38);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_41 = ATgetArgument(t, 0);
      {
        ATerm s_21 = NULL,a_22 = NULL,t_9 = NULL;
        t = SSLgetAnnotations(f_41);
        s_21 = t;
        t = g_41;
        t = fetch_elem_1_0(g_21, t);
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, a_22);
        t_9 = t;
        t = SSLsetAnnotations(t_9, s_21);
      }
    }
  else
    {
      ATerm d_23 = NULL,j_23 = NULL,u_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          g_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_41);
      d_23 = t;
      t = g_41;
      t = fetch_elem_1_0(h_21, t);
      j_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, j_23);
      u_9 = t;
      t = SSLsetAnnotations(u_9, d_23);
    }
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,q_22 = NULL;
  i_22 = t;
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            j_22 = ATgetArgument(t, 0);
            q_22 = ATgetArgument(t, 1);
            {
              ATerm a_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_56);
        t = j_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = q_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_22;
      }
    else
      {
        t = y_56;
        if(match_cons(t, sym_RDef_3))
          {
            j_22 = ATgetArgument(t, 0);
            q_22 = ATgetArgument(t, 1);
            {
              ATerm b_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = q_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_22;
      }
  }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm l_23 = NULL,q_23 = NULL,r_23 = NULL;
  l_23 = t;
  {
    ATerm c_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
            {
              ATerm e_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_57);
        t = q_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = r_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_23;
      }
    else
      {
        t = c_57;
        if(match_cons(t, sym_RDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
            {
              ATerm f_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = r_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(f_21, t);
  p_39 = t;
  t = term_i_37;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, term_g_57);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = p_39;
  return(t);
}
static ATerm g_14 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm h_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_57;
      }
  }
  t = b_23;
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(j_57);
      }
    else
      {
        t = i_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_k_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm h_14 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_write_term_to_stream_baf(v_24, w_24);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_41);
  return(t);
}
static ATerm i_14 (ATerm o_108 (ATerm), ATerm s_213, ATerm f_25, ATerm t)
{
  ATerm s_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_213, term_l_57);
  t = h_15(t);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, f_25);
  t = o_108(t);
  t = fclose_0_0(t);
  t = f_25;
  return(t);
}
static ATerm l_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t)
{
  ATerm t_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,c_42 = NULL;
  x_41 = t;
  t = k_122(t);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_41, e_45, c_45);
  t = o_15(t_41, e_45, c_45, t);
  {
    ATerm p_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_42 = NULL;
        t = term_x_57;
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_41, term_x_57);
        t = n_15(t_41, e_42, t);
        {
          ATerm y_57 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_57;
            }
        }
        LocalPopChoice(q_57);
      }
    else
      {
        t = p_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_41 = ATgetFirst((ATermList) t);
      w_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_41, term_x_57, (ATerm) ATinsert(CheckATermList(w_41), (ATerm) ATinsert(CheckATermList(v_41), e_45)));
  t = lookup_table_0_1(t_41, t);
  c_42 = t;
  t = term_x_57;
  y_41 = t;
  t = (ATerm) ATinsert(CheckATermList(w_41), (ATerm) ATinsert(CheckATermList(v_41), e_45));
  z_41 = t;
  t = c_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(y_41, z_41, a_42, t);
  t = x_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_42 = NULL;
  ATerm z_57 = t;
  int c_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,n_24 = NULL;
      l_42 = t;
      t = term_d_58;
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, term_d_58);
      t = t_15(l_42, n_24, t);
      g_42 = t;
      t = SSL_mkstemp(g_42);
      LocalPopChoice(c_58);
    }
  else
    {
      t = z_57;
      {
        ATerm m_42 = NULL;
        t = term_e_58;
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
  t = term_p_58;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_42 = NULL,q_42 = NULL,s_42 = NULL,t_42 = NULL,v_42 = NULL;
  t = P__tmpdir_0_0(t);
  t_42 = t;
  t = term_q_58;
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_42, term_q_58);
  t = t_15(t_42, v_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_39;
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_42, term_b_39);
  t = l_14(j_21, q_42, s_42, t);
  t = SSL_close(o_42);
  t = q_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_58;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm g_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_58);
      g_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, (ATerm) ATinsert(ATempty, term_u_58));
      t = j_15(b_43, g_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_58 = ATgetArgument(t, 0);
      if(match_cons(v_58, sym_Stream_1))
        {
          l_43 = ATgetArgument(v_58, 0);
        }
      else
        _fail(t);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(l_43, m_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,k_43 = NULL;
  t = read_from_0_0(t);
  t = e_135(t);
  k_43 = t;
  t = xtc_new_file_0_0(t);
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_43, k_43);
  t = i_14(l_21, i_43, k_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_43);
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = debug_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_w_58;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = save_as_1_0(t_21, t);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = term_y_58;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm z_43 = NULL,p_44 = NULL;
  p_44 = t;
  {
    ATerm b_59 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_25 = NULL,q_25 = NULL;
        t = term_z_36;
        p_25 = t;
        t = term_d_59;
        q_25 = t;
        t = term_f_59;
        t = n_15(p_25, q_25, t);
        z_43 = t;
        t = if_verbose2_1_0(m_21, t);
        t = p_44;
        {
          ATerm i_59 = t;
          int j_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_25 = NULL,u_25 = NULL;
              t = term_z_36;
              r_25 = t;
              t = term_w_39;
              u_25 = t;
              t = term_x_39;
              t = n_15(r_25, u_25, t);
              t = p_44;
              LocalPopChoice(j_59);
            }
          else
            {
              t = i_59;
              {
                static ATerm o_21 (ATerm t);
                static ATerm o_21 (ATerm t)
                {
                  ATerm k_59 = t;
                  int m_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_14(z_43, k_26, t);
                      LocalPopChoice(m_59);
                    }
                  else
                    {
                      t = k_59;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(o_21, t);
              }
            }
        }
        LocalPopChoice(c_59);
      }
    else
      {
        t = b_59;
        t = p_44;
      }
  }
  t = if_keep3_1_0(q_21, t);
  return(t);
}
static ATerm y_21 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_45);
        LocalPopChoice(q_59);
      }
    else
      {
        t = p_59;
        t = u_45;
      }
  }
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_p_58;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm l_45 = NULL,n_45 = NULL;
  static ATerm x_21 (ATerm t);
  static ATerm x_21 (ATerm t)
  {
    ATerm o_45 = NULL,p_45 = NULL,r_45 = NULL;
    o_45 = t;
    t = term_p_58;
    p_45 = t;
    t = term_x_57;
    r_45 = t;
    t = term_r_59;
    t = n_15(p_45, r_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_45 != NULL) && (l_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_45 = ATgetFirst((ATermList) t);
        {
          ATerm t_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_45;
    t = map_1_0(y_21, t);
    t = o_45;
    t = end_scope_1_0(z_21, t);
    return(t);
  }
  t = repeat_2_0(x_21, _id, t);
  n_45 = t;
  t = SSL_exit(n_45);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm u_59 = t;
  int x_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_46 = NULL,t_46 = NULL;
      t = term_z_36;
      r_46 = t;
      t = term_o_37;
      t_46 = t;
      t = term_p_37;
      t = n_15(r_46, t_46, t);
      LocalPopChoice(x_59);
    }
  else
    {
      t = u_59;
      t = term_g_39;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_27 = NULL,h_27 = NULL;
      t = term_o_37;
      {
        ATerm y_59 = t;
        int z_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_27 = NULL,l_27 = NULL;
            t = term_z_36;
            j_27 = t;
            t = term_o_37;
            l_27 = t;
            t = term_p_37;
            t = n_15(j_27, l_27, t);
            LocalPopChoice(z_59);
          }
        else
          {
            t = y_59;
            t = term_g_39;
          }
      }
      g_27 = t;
      t = term_t_58;
      h_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_58, g_27);
      t = w_14(h_27, g_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm a_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_46;
      t = copy_to_1_0(b_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_t_36;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,a_47 = NULL,d_47 = NULL,g_47 = NULL;
  t = a_100(t);
  w_46 = t;
  t = term_z_36;
  d_47 = t;
  t = term_d_42;
  g_47 = t;
  t = term_f_42;
  t = n_15(d_47, g_47, t);
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, w_46);
  t = t_15(a_47, w_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,m_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        t = k_48;
        t = u_0(t);
        m_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = m_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = m_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_48, m_28);
        t = w_14(m_48, m_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
        LocalPopChoice(d_60);
      }
    else
      {
        t = b_60;
        {
          ATerm e_60 = t;
          int h_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_28 = NULL;
              t = k_48;
              t = u_0(t);
              z_28 = t;
              {
                ATerm i_60 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_29 = NULL;
                    g_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_29;
                          }
                        else
                          {
                            t = g_29;
                            if((m_48 != t))
                              {
                                _fail(t);
                              }
                            t = g_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_60;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_48, z_28);
              t = w_14(m_48, z_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
              LocalPopChoice(h_60);
            }
          else
            {
              t = e_60;
              t = k_48;
              t = u_0(t);
              if((m_48 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
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
  t = term_j_60;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  {
    ATerm k_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = term_z_36;
        z_29 = t;
        t = term_n_60;
        a_30 = t;
        t = term_o_60;
        t = n_15(z_29, a_30, t);
        t = i_49;
        t = copy_to_1_0(d_22, t);
        u_29 = t;
        t = term_i_37;
        v_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_60));
        y_29 = t;
        t = SSL_printnl(v_29, y_29);
        t = u_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(l_60);
      }
    else
      {
        t = k_60;
        t = i_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_50 = NULL,l_50 = NULL,n_50 = NULL,o_50 = NULL;
  t = term_z_42;
  {
    ATerm t_60 = t;
    int u_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL,q_50 = NULL;
        t = term_z_36;
        p_50 = t;
        t = term_z_42;
        q_50 = t;
        t = term_a_43;
        t = n_15(p_50, q_50, t);
        LocalPopChoice(u_60);
      }
    else
      {
        t = t_60;
        t = term_m_40;
      }
  }
  l_50 = t;
  t = term_m_40;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_50, term_m_40);
  t = r_14(l_50, o_50, t);
  n_50 = t;
  t = SSL_int_to_string(n_50);
  j_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_50), term_z_42);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm r_50 = NULL,v_50 = NULL,w_50 = NULL,y_50 = NULL,a_51 = NULL,h_51 = NULL;
  t = term_z_36;
  a_51 = t;
  t = term_y_60;
  h_51 = t;
  t = term_z_60;
  t = n_15(a_51, h_51, t);
  r_50 = t;
  t = term_a_61;
  t = xtc_find_path_0_0(t);
  v_50 = t;
  t = term_b_61;
  t = xtc_find_path_0_0(t);
  w_50 = t;
  t = term_c_61;
  t = xtc_find_path_0_0(t);
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_50), term_y_60), w_50), term_y_60), v_50), term_y_60));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
  n_51 = t;
  t = term_d_61;
  i_51 = t;
  t = n_51;
  {
    ATerm f_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_51 = NULL,x_51 = NULL;
        t = term_z_36;
        s_51 = t;
        t = term_o_37;
        x_51 = t;
        t = term_p_37;
        t = n_15(s_51, x_51, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = f_61;
        {
          ATerm y_51 = NULL,z_51 = NULL;
          t = term_z_36;
          y_51 = t;
          t = term_d_42;
          z_51 = t;
          t = term_f_42;
          t = n_15(y_51, z_51, t);
        }
      }
  }
  o_51 = t;
  t = n_51;
  t = get_include_dirs_0_0(t);
  k_51 = t;
  t = n_51;
  t = pass_keep_0_0(t);
  l_51 = t;
  t = term_v_61;
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_52 = NULL,e_52 = NULL;
        t = term_z_36;
        c_52 = t;
        t = term_v_61;
        e_52 = t;
        t = term_y_61;
        t = n_15(c_52, e_52, t);
        LocalPopChoice(x_61);
        t = (ATerm) ATinsert(ATempty, term_v_61);
      }
    else
      {
        t = w_61;
        t = (ATerm) ATempty;
      }
  }
  m_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_51), l_51), k_51), (ATerm) ATinsert(ATinsert(ATempty, o_51), term_a_62));
  t = concat_0_0(t);
  j_51 = t;
  t = n_51;
  t = comp_0_2(i_51, j_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm g_52 = NULL;
  g_52 = t;
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_52 = NULL,r_52 = NULL,u_52 = NULL;
        t = term_z_36;
        r_52 = t;
        t = term_c_37;
        u_52 = t;
        t = term_d_37;
        t = n_15(r_52, u_52, t);
        n_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_52, term_y_40);
        t = geq_0_0(t);
        t = g_52;
        t = c_126(t);
        LocalPopChoice(c_62);
      }
    else
      {
        t = b_62;
        t = g_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  k_53 = t;
  t = SSL_explode_string(k_53);
  {
    ATerm f_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_55 (ATerm t);
        static ATerm f_55 (ATerm t)
        {
          ATerm t_54 = NULL,x_54 = NULL,y_54 = NULL;
          t_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_54 = ATgetFirst((ATermList) t);
              y_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_62 = t;
            int i_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_31 = NULL,k_31 = NULL,m_10 = NULL;
                t = SSLgetAnnotations(t_54);
                a_31 = t;
                t = y_54;
                t = f_55(t);
                k_31 = t;
                t = (ATerm) ATinsert(CheckATermList(k_31), x_54);
                m_10 = t;
                t = SSLsetAnnotations(m_10, a_31);
                LocalPopChoice(i_62);
              }
            else
              {
                t = h_62;
                {
                  ATerm j_62 = t;
                  int k_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(t_54);
                      j_32 = t;
                      t = x_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_54), x_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, j_32);
                      LocalPopChoice(k_62);
                    }
                  else
                    {
                      t = j_62;
                      {
                        ATerm a_33 = NULL,e_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(t_54);
                        a_33 = t;
                        t = x_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = y_54;
                        t = y_119(t);
                        e_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(e_33), x_54);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, a_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_55(t);
        LocalPopChoice(g_62);
      }
    else
      {
        t = f_62;
      }
  }
  j_53 = t;
  t = SSL_implode_string(j_53);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = debug_1_0(k_22, t);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = term_m_62;
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_n_62;
  return(t);
}
static ATerm m_14 (ATerm w_22, ATerm t)
{
  ATerm n_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  n_55 = t;
  t = if_verbose3_1_0(h_22, t);
  t = term_h_42;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_42, n_55);
  t = s_15(r_55, n_55, t);
  {
    ATerm o_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_55 = NULL,a_56 = NULL;
        t = term_z_36;
        y_55 = t;
        t = term_o_37;
        a_56 = t;
        t = term_p_37;
        t = n_15(y_55, a_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(r_62);
      }
    else
      {
        t = o_62;
        t = n_55;
      }
  }
  p_55 = t;
  t = if_verbose3_1_0(m_22, t);
  t = term_d_42;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_42, p_55);
  t = s_15(q_55, p_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_55);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = debug_1_0(s_22, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_s_62;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = if_verbose1_1_0(y_22, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm u_57 = NULL,a_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,h_34 = NULL,k_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      n_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(n_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm t_62 = t;
    int u_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_58 = NULL,r_58 = NULL,s_58 = NULL;
        o_58 = t;
        t = term_z_36;
        r_58 = t;
        t = term_w_39;
        s_58 = t;
        t = term_x_39;
        t = n_15(r_58, s_58, t);
        t = o_58;
        LocalPopChoice(u_62);
      }
    else
      {
        t = t_62;
        t = add_main_0_0(t);
      }
  }
  m_58 = t;
  {
    ATerm v_62 = t;
    int x_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_58 = ATgetArgument(t, 0);
            {
              ATerm v_33 = NULL,v_10 = NULL;
              t = SSLgetAnnotations(m_58);
              v_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_58);
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
        LocalPopChoice(x_62);
        t = xtc_transform_file_2_0(z_22, c_23, t);
      }
    else
      {
        t = v_62;
        t = xtc_transform_term_2_0(f_23, h_23, t);
      }
  }
  l_58 = t;
  {
    ATerm y_62 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_59 = ATgetArgument(t, 0);
            {
              ATerm d_34 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(l_58);
              d_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_59);
              y_10 = t;
              t = SSLsetAnnotations(y_10, d_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(d_63);
        t = xtc_transform_file_2_0(k_23, s_23, t);
      }
    else
      {
        t = y_62;
        t = xtc_transform_term_2_0(t_23, u_23, t);
      }
  }
  t = if_keep5_1_0(v_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(a_24, t);
  m_34 = t;
  t = term_e_63;
  h_34 = t;
  t = m_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  k_34 = t;
  t = m_34;
  t = comp_0_2(h_34, k_34, t);
  t = if_keep6_1_0(c_24, t);
  k_58 = t;
  {
    ATerm h_63 = t;
    int i_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_59 = ATgetArgument(t, 0);
            {
              ATerm o_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(k_58);
              o_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_59);
              c_11 = t;
              t = SSLsetAnnotations(c_11, o_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(i_63);
        t = xtc_transform_file_2_0(e_24, g_24, t);
      }
    else
      {
        t = h_63;
        t = xtc_transform_term_2_0(h_24, i_24, t);
      }
  }
  t = if_keep6_1_0(m_24, t);
  h_58 = t;
  {
    ATerm j_63 = t;
    int k_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm y_34 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(h_58);
              y_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              l_11 = t;
              t = SSLsetAnnotations(l_11, y_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_58;
          }
        LocalPopChoice(k_63);
        t = xtc_transform_file_2_0(p_24, r_24, t);
      }
    else
      {
        t = j_63;
        t = xtc_transform_term_2_0(u_24, x_24, t);
      }
  }
  t = if_keep5_1_0(y_24, t);
  g_58 = t;
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_60 = ATgetArgument(t, 0);
            {
              ATerm d_35 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(g_58);
              d_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_60);
              i_12 = t;
              t = SSLsetAnnotations(i_12, d_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_58;
          }
        LocalPopChoice(m_63);
        t = xtc_transform_file_2_0(e_25, g_25, t);
      }
    else
      {
        t = l_63;
        t = xtc_transform_term_2_0(h_25, i_25, t);
      }
  }
  t = if_keep5_1_0(j_25, t);
  f_58 = t;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_60 = ATgetArgument(t, 0);
            {
              ATerm m_35 = NULL,k_12 = NULL;
              t = SSLgetAnnotations(f_58);
              m_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_60);
              k_12 = t;
              t = SSLsetAnnotations(k_12, m_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(o_63);
        t = xtc_transform_file_2_0(n_25, o_25, t);
      }
    else
      {
        t = n_63;
        t = xtc_transform_term_2_0(t_25, v_25, t);
      }
  }
  t = if_keep5_1_0(w_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL,v_60 = NULL,w_60 = NULL;
        s_60 = t;
        t = term_z_36;
        v_60 = t;
        t = term_w_39;
        w_60 = t;
        t = term_x_39;
        t = n_15(v_60, w_60, t);
        t = s_60;
        LocalPopChoice(q_63);
        {
          ATerm x_60 = NULL;
          x_60 = t;
          {
            ATerm r_63 = t;
            int s_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_61 = ATgetArgument(t, 0);
                    {
                      ATerm x_35 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(x_60);
                      x_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_61);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, x_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = x_60;
                  }
                LocalPopChoice(s_63);
                t = xtc_transform_file_2_0(z_25, a_26, t);
              }
            else
              {
                t = r_63;
                t = xtc_transform_term_2_0(b_26, c_26, t);
              }
          }
        }
      }
    else
      {
        t = p_63;
        {
          ATerm t_61 = NULL;
          t_61 = t;
          {
            ATerm t_63 = t;
            int u_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_61 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(t_61);
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
                    t = t_61;
                  }
                LocalPopChoice(u_63);
                t = xtc_transform_file_2_0(e_26, f_26, t);
              }
            else
              {
                t = t_63;
                t = xtc_transform_term_2_0(i_26, j_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  p_36 = t;
  t = term_v_63;
  n_36 = t;
  t = p_36;
  t = pass_warnings_0_0(t);
  o_36 = t;
  t = p_36;
  t = comp_0_2(n_36, o_36, t);
  a_58 = t;
  {
    ATerm x_63 = t;
    int y_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_62 = ATgetArgument(t, 0);
            {
              ATerm v_36 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(a_58);
              v_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_62);
              o_12 = t;
              t = SSLsetAnnotations(o_12, v_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(y_63);
        t = xtc_transform_file_2_0(o_26, q_26, t);
      }
    else
      {
        t = x_63;
        t = xtc_transform_term_2_0(r_26, t_26, t);
      }
  }
  u_57 = t;
  {
    ATerm z_63 = t;
    int a_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_62 = ATgetArgument(t, 0);
            {
              ATerm g_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(u_57);
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
            t = u_57;
          }
        LocalPopChoice(a_64);
        t = xtc_transform_file_2_0(v_26, x_26, t);
      }
    else
      {
        t = z_63;
        t = xtc_transform_term_2_0(y_26, z_26, t);
      }
  }
  t = if_keep2_1_0(a_27, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = term_i_37;
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(r_57), term_e_64);
  t_57 = t;
  t = SSL_printnl(s_57, t_57);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(r_57), term_e_64));
  return(t);
}
static ATerm z_22 (ATerm t)
{
  t = term_f_64;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm z_58 = NULL;
  t = pass_verbose_0_0(t);
  z_58 = t;
  t = (ATerm) ATinsert(CheckATermList(z_58), term_i_40);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_f_64;
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm a_59 = NULL;
  t = pass_verbose_0_0(t);
  a_59 = t;
  t = (ATerm) ATinsert(CheckATermList(a_59), term_i_40);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm g_59 = NULL;
  t = pass_verbose_0_0(t);
  g_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), term_i_40);
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm h_59 = NULL;
  t = pass_verbose_0_0(t);
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), term_i_40);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = save_as_1_0(x_23, t);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = term_i_64;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = save_as_1_0(b_24, t);
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = term_j_64;
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = save_as_1_0(d_24, t);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_k_64;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_r_64;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_i_40);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_r_64;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_i_40);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = save_as_1_0(o_24, t);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_u_64;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_v_64;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_i_40);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_v_64;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm w_59 = NULL;
  t = pass_verbose_0_0(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), term_i_40);
  return(t);
}
static ATerm y_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_w_64;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_y_64;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm f_60 = NULL;
  t = pass_verbose_0_0(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), term_i_40);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  t = term_y_64;
  return(t);
}
static ATerm i_25 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_i_40);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  t = save_as_1_0(l_25, t);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_d_65;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_e_65;
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_i_40);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_e_65;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_i_40);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = save_as_1_0(y_25, t);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_i_65;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm g_61 = NULL;
  t = pass_verbose_0_0(t);
  g_61 = t;
  t = (ATerm) ATinsert(CheckATermList(g_61), term_i_40);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm s_61 = NULL;
  t = pass_verbose_0_0(t);
  s_61 = t;
  t = (ATerm) ATinsert(CheckATermList(s_61), term_i_40);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_j_65;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm d_62 = NULL;
  t = pass_verbose_0_0(t);
  d_62 = t;
  t = (ATerm) ATinsert(CheckATermList(d_62), term_i_40);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_j_65;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm e_62 = NULL;
  t = pass_verbose_0_0(t);
  e_62 = t;
  t = (ATerm) ATinsert(CheckATermList(e_62), term_i_40);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(m_26, t);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = term_k_65;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_l_65;
  return(t);
}
static ATerm q_26 (ATerm t)
{
  ATerm p_62 = NULL;
  t = pass_verbose_0_0(t);
  p_62 = t;
  t = (ATerm) ATinsert(CheckATermList(p_62), term_i_40);
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = term_l_65;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  ATerm q_62 = NULL;
  t = pass_verbose_0_0(t);
  q_62 = t;
  t = (ATerm) ATinsert(CheckATermList(q_62), term_i_40);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_m_65;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm f_63 = NULL;
  t = pass_verbose_0_0(t);
  f_63 = t;
  t = (ATerm) ATinsert(CheckATermList(f_63), term_i_40);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_m_65;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm g_63 = NULL;
  t = pass_verbose_0_0(t);
  g_63 = t;
  t = (ATerm) ATinsert(CheckATermList(g_63), term_i_40);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = save_as_1_0(c_27, t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_n_65;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(r_22, t);
  t = profile_p__2_0(t_22, x_22, t);
  return(t);
}
static ATerm n_15 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm w_63 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_15(j_58, w_63, t);
  return(t);
}
static ATerm n_14 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  c_64 = t;
  {
    ATerm o_65 = t;
    int q_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        t = n_15(u_56, v_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_65 = ATgetFirst((ATermList) t);
            b_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_65);
        {
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, b_64);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_15(v_56, b_64, d_64, t);
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, b_64);
        }
      }
    else
      {
        t = o_65;
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
          t = l_15(v_56, h_64, t);
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        }
      }
  }
  t = c_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,s_64 = NULL;
  o_64 = t;
  t = h_122(t);
  n_64 = t;
  {
    ATerm s_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_64 = NULL;
        t = term_x_57;
        t_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_64, term_x_57);
        t = n_15(n_64, t_64, t);
        {
          ATerm y_65 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_65;
            }
        }
        LocalPopChoice(x_65);
      }
    else
      {
        t = s_65;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_64 = ATgetFirst((ATermList) t);
      l_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_64, term_x_57, l_64);
  t = lookup_table_0_1(n_64, t);
  s_64 = t;
  t = term_x_57;
  p_64 = t;
  t = s_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(p_64, l_64, q_64, t);
  t = m_64;
  {
    static ATerm f_27 (ATerm t);
    static ATerm f_27 (ATerm t)
    {
      ATerm x_64 = NULL;
      x_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_64, x_64);
      t = n_14(n_64, x_64, t);
      return(t);
    }
    t = map_1_0(f_27, t);
  }
  t = o_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t)
{
  ATerm a_66 = t;
  int b_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_101(t);
      t = i_101(t);
      LocalPopChoice(b_66);
    }
  else
    {
      t = a_66;
      t = i_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  a_65 = t;
  t = g_122(t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_64, term_x_57);
  {
    ATerm c_66 = t;
    int d_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_66 = ATgetArgument(t, 0);
            ATerm g_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_57;
        p_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_64, term_x_57);
        t = n_15(z_64, p_65, t);
        LocalPopChoice(d_66);
      }
    else
      {
        t = c_66;
        t = (ATerm) ATempty;
      }
  }
  b_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_64, term_x_57, (ATerm) ATinsert(CheckATermList(b_65), (ATerm) ATempty));
  t = lookup_table_0_1(z_64, t);
  h_65 = t;
  t = term_x_57;
  c_65 = t;
  t = (ATerm) ATinsert(CheckATermList(b_65), (ATerm) ATempty);
  f_65 = t;
  t = h_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(c_65, f_65, g_65, t);
  t = a_65;
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm n_27 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  {
    ATerm h_66 = t;
    int i_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_65);
        LocalPopChoice(i_66);
      }
    else
      {
        t = h_66;
        t = z_65;
      }
  }
  return(t);
}
static ATerm o_27 (ATerm t)
{
  t = term_p_58;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm t_65 = NULL;
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm u_65 = NULL;
    u_65 = t;
    {
      ATerm k_66 = t;
      int m_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_65 = NULL,w_65 = NULL;
          t = term_p_58;
          v_65 = t;
          t = term_x_57;
          w_65 = t;
          t = term_r_59;
          t = n_15(v_65, w_65, t);
          LocalPopChoice(m_66);
        }
      else
        {
          t = k_66;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_65 != NULL) && (t_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_65 = ATgetFirst((ATermList) t);
        {
          ATerm o_66 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_65;
    t = map_1_0(n_27, t);
    t = u_65;
    t = end_scope_1_0(o_27, t);
    return(t);
  }
  t = begin_scope_1_0(i_27, t);
  t = restore_always_2_0(p_135, k_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  {
    ATerm p_66 = t;
    int q_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_66 = NULL,l_66 = NULL,n_66 = NULL;
        t = term_z_36;
        l_66 = t;
        t = term_c_37;
        n_66 = t;
        t = term_d_37;
        t = n_15(l_66, n_66, t);
        j_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_66, term_m_40);
        t = geq_0_0(t);
        t = f_66;
        t = a_126(t);
        LocalPopChoice(q_66);
      }
    else
      {
        t = p_66;
        t = f_66;
      }
  }
  return(t);
}
static ATerm p_14 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm t_66 = t;
  int u_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_43, r_43);
      LocalPopChoice(u_66);
    }
  else
    {
      t = t_66;
      t = SSL_addr(q_43, r_43);
    }
  return(t);
}
static ATerm r_14 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm x_66 = t;
  int y_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_43, x_43);
      LocalPopChoice(y_66);
    }
  else
    {
      t = x_66;
      t = SSL_subtr(w_43, x_43);
    }
  return(t);
}
static ATerm s_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
  t = r_14(w_68, x_68, t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_68, z_68);
  t = r_14(y_68, z_68, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  t = r_14(a_69, b_69, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, d_69);
  t = r_14(c_69, d_69, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_66, s_66, v_66, w_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_67 = ATgetArgument(t, 0);
      if(match_cons(b_67, sym__4))
        {
          i_67 = ATgetArgument(b_67, 0);
          j_67 = ATgetArgument(b_67, 1);
          k_67 = ATgetArgument(b_67, 2);
          l_67 = ATgetArgument(b_67, 3);
        }
      else
        _fail(t);
      {
        ATerm z_67 = ATgetArgument(t, 1);
        if(match_cons(z_67, sym__4))
          {
            m_67 = ATgetArgument(z_67, 0);
            n_67 = ATgetArgument(z_67, 1);
            o_67 = ATgetArgument(z_67, 2);
            p_67 = ATgetArgument(z_67, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_14(i_67, j_67, k_67, l_67, m_67, n_67, o_67, p_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,y_67 = NULL,b_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,l_68 = NULL,n_68 = NULL;
  y_67 = t;
  t = times_0_0(t);
  q_67 = t;
  t = y_67;
  t = o_129(t);
  r_67 = t;
  t = times_0_0(t);
  v_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_67, q_67);
  t = diff_times_0_0(t);
  u_67 = t;
  if(match_cons(t, sym__4))
    {
      j_68 = ATgetArgument(t, 0);
      {
        ATerm a_68 = ATgetArgument(t, 1);
      }
      l_68 = ATgetArgument(t, 2);
      {
        ATerm c_68 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_68, l_68);
  t = p_14(j_68, l_68, t);
  n_68 = t;
  t = SSL_TicksToSeconds(n_68);
  s_67 = t;
  t = u_67;
  if(match_cons(t, sym__4))
    {
      ATerm d_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
      {
        ATerm e_68 = ATgetArgument(t, 2);
      }
      h_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_68, h_68);
  t = p_14(b_68, h_68, t);
  i_68 = t;
  t = SSL_TicksToSeconds(i_68);
  t_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_67), term_g_68), s_67), term_f_68);
  t = n_129(t);
  t = r_67;
  return(t);
}
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  o_68 = t;
  t = m_108(t);
  p_68 = t;
  t = term_i_37;
  q_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_68), p_68);
  r_68 = t;
  t = SSL_printnl(q_68, r_68);
  t = o_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,e_69 = NULL,f_69 = NULL;
  s_68 = t;
  t = term_z_36;
  e_69 = t;
  t = term_k_68;
  f_69 = t;
  t = term_m_68;
  t = n_15(e_69, f_69, t);
  t_68 = t;
  t = term_g_39;
  u_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_69), term_o_69), term_n_69), term_m_69), term_l_69), term_i_69), term_h_69), t_68), term_g_69);
  v_68 = t;
  t = SSL_printnl(u_68, v_68);
  t = s_68;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_69 = ATgetFirst((ATermList) t);
      k_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_69;
    }
  else
    {
      t = k_69;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm v_14 (ATerm x_25, ATerm q_226, ATerm t)
{
  static ATerm r_27 (ATerm t);
  static ATerm r_27 (ATerm t)
  {
    if((x_25 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = q_226;
  t = fetch_1_0(r_27, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  static ATerm j_70 (ATerm t);
  static ATerm j_70 (ATerm t)
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_109(t);
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        {
          ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,y_37 = NULL,j_38 = NULL,k_13 = NULL;
          g_70 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_70 = ATgetFirst((ATermList) t);
              i_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_70);
          y_37 = t;
          t = i_70;
          t = j_70(t);
          j_38 = t;
          t = (ATerm) ATinsert(CheckATermList(j_38), h_70);
          k_13 = t;
          t = SSLsetAnnotations(k_13, y_37);
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
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm n_70 = NULL,p_70 = NULL,r_70 = NULL,t_70 = NULL,u_70 = NULL,w_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,p_13 = NULL,o_13 = NULL;
    a_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_70 = ATgetFirst((ATermList) t);
        w_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_71);
    t_70 = t;
    t = u_70;
    t = k_109(t);
    y_70 = t;
    t = (ATerm) ATinsert(CheckATermList(w_70), y_70);
    o_13 = t;
    t = SSLsetAnnotations(o_13, t_70);
    z_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_70 = ATgetFirst((ATermList) t);
        r_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_70);
    n_70 = t;
    t = r_70;
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = (ATerm) ATinsert(CheckATermList(r_70), p_70);
    p_13 = t;
    t = SSLsetAnnotations(p_13, n_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_27, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, not_null(l_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm q_71 = NULL,y_71 = NULL;
  ATerm s_69 = t;
  int t_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(u_118, t);
      LocalPopChoice(t_69);
    }
  else
    {
      t = s_69;
      {
        ATerm m_71 = NULL;
        m_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_71;
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
              ATerm u_69 = ATgetFirst((ATermList) t);
              ATerm v_69 = (ATerm) ATgetNext((ATermList) t);
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
          ATerm w_69 = ATgetFirst((ATermList) t);
          ATerm x_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_71);
        }
      else
        {
          ATerm h_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_69 = ATgetFirst((ATermList) t);
              ATerm z_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_71;
          t = list_tokenize_1_0(u_118, t);
          h_72 = t;
          t = (ATerm) ATinsert(CheckATermList(h_72), q_71);
        }
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  t = SSL_implode_string(x_72);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm i_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,p_72 = NULL,q_72 = NULL,t_72 = NULL,o_18 = NULL;
  t_72 = t;
  if(match_cons(t, sym__2))
    {
      m_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_72);
  l_72 = t;
  t = SSL_explode_string(p_72);
  q_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_72, q_72);
  o_18 = t;
  t = SSLsetAnnotations(o_18, l_72);
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_72;
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm u_72 = NULL;
      u_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_72, i_72);
      t = v_14(u_72, i_72, t);
      return(t);
    }
    t = list_tokenize_1_0(t_27, t);
  }
  t = map_1_0(u_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm q_73 = NULL;
  q_73 = t;
  {
    ATerm a_70 = t;
    int b_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        t = SSL_filemode(q_73);
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            {
              ATerm c_70 = ATgetArgument(t, 1);
              if(((ATgetType(c_70) != AT_INT) || (ATgetInt((ATermInt) c_70) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_38;
        LocalPopChoice(b_70);
      }
    else
      {
        t = a_70;
        {
          ATerm e_39 = NULL,f_39 = NULL;
          t = term_d_70;
          f_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_70, q_73);
          t = t_15(f_39, q_73, t);
          e_39 = t;
          t = SSL_perror(e_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm w_14 (ATerm c_63, ATerm b_63, ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  x_73 = t;
  {
    ATerm e_70 = t;
    int f_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_73 = NULL,b_74 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_58);
        b_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_63, (ATerm) ATinsert(ATempty, term_u_58));
        t = j_15(b_63, b_74, t);
        t = filemode_0_0(t);
        y_73 = t;
        t = SSL_S_ISDIR(y_73);
        t = x_73;
        LocalPopChoice(f_70);
        {
          ATerm c_74 = NULL,d_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_k_70), c_63);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          c_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_74), term_o_70), b_63);
          d_74 = t;
          t = SSL_concat_strings(d_74);
        }
      }
    else
      {
        t = e_70;
        t = b_63;
      }
  }
  w_73 = t;
  t = SSL_copy(c_63, w_73);
  return(t);
}
static ATerm x_14 (ATerm o_61, ATerm t)
{
  t = SSL_hashtable_keys(o_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_74 = NULL,h_74 = NULL;
  static ATerm v_27 (ATerm t);
  static ATerm v_27 (ATerm t)
  {
    ATerm i_74 = NULL,j_74 = NULL;
    i_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), i_74);
    t = n_15(not_null(f_74), i_74, t);
    j_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_74, j_74);
    return(t);
  }
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  t = lookup_table_0_1(f_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_14(h_74, t);
  t = map_1_0(v_27, t);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = debug_1_0(x_27, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = term_q_70;
  return(t);
}
static ATerm o_75 (ATerm q_74, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  t = term_s_70;
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_74);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_70, (ATerm) ATmakeAppl(sym_Tool_1, q_74));
  t = n_15(t_74, u_74, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_70 = ATgetFirst((ATermList) t);
      if(match_cons(v_70, sym__2))
        {
          ATerm b_71 = ATgetArgument(v_70, 0);
          s_74 = ATgetArgument(v_70, 1);
        }
      else
        _fail(t);
      {
        ATerm x_70 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_74;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_q_70;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_s_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_28, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_c_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_71 = t;
  int e_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_74 = NULL,y_74 = NULL,z_74 = NULL;
      t = if_verbose5_1_0(w_27, t);
      t = xtc_load_0_0(t);
      z_74 = t;
      if(match_cons(t, sym__2))
        {
          w_74 = ATgetArgument(t, 0);
          y_74 = ATgetArgument(t, 1);
          {
            ATerm f_71 = t;
            int g_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
                t = term_s_70;
                e_75 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_74);
                f_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_70, (ATerm) ATmakeAppl(sym_Tool_1, w_74));
                t = n_15(e_75, f_75, t);
                {
                  static ATerm y_27 (ATerm t);
                  static ATerm y_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_74 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_75 != NULL) && (d_75 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_27, t);
                }
                t = not_null(d_75);
                LocalPopChoice(g_71);
              }
            else
              {
                t = f_71;
                t = o_75(z_74, t);
              }
          }
        }
      else
        {
          t = o_75(z_74, t);
        }
      t = if_verbose5_1_0(z_27, t);
      LocalPopChoice(e_71);
    }
  else
    {
      t = d_71;
      {
        ATerm n_75 = NULL,j_39 = NULL,k_39 = NULL;
        n_75 = t;
        t = term_i_37;
        j_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_71), n_75), term_h_71);
        k_39 = t;
        t = SSL_printnl(j_39, k_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_71), n_75), term_h_71);
        t = if_verbose5_1_0(b_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_14 (ATerm f_67, ATerm e_67, ATerm t)
{
  ATerm r_75 = NULL,v_75 = NULL,g_76 = NULL,h_76 = NULL;
  t = f_67;
  {
    ATerm j_71 = t;
    int k_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_76 = NULL;
        t = term_z_36;
        j_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_36, f_67);
        t = n_15(j_76, f_67, t);
        LocalPopChoice(k_71);
      }
    else
      {
        t = j_71;
        t = (ATerm) ATempty;
      }
  }
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, v_75);
  t = conc_0_0(t);
  r_75 = t;
  t = term_z_36;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, f_67, r_75);
  t = lookup_table_0_1(g_76, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(f_67, r_75, h_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, f_67, r_75);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,r_76 = NULL,t_76 = NULL,u_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_76 = NULL,y_76 = NULL,z_76 = NULL;
      t = term_b_39;
      t = q_0(t);
      w_76 = t;
      t = term_l_71;
      y_76 = t;
      t = term_n_71;
      z_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_71, term_n_71, w_76);
      t = o_15(y_76, z_76, w_76, t);
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
  ATerm g_77 = NULL;
  g_77 = t;
  if(match_string(t, "-S"))
    {
      t = g_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_77;
    }
  return(t);
}
static ATerm e_28 (ATerm t)
{
  ATerm h_77 = NULL,j_77 = NULL;
  t = term_c_37;
  h_77 = t;
  t = term_t_36;
  j_77 = t;
  t = term_o_71;
  t = s_15(h_77, j_77, t);
  t = term_p_71;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_r_71;
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
  ATerm k_77 = NULL,l_77 = NULL,p_77 = NULL;
  k_77 = t;
  t = SSL_string_to_int(k_77);
  l_77 = t;
  t = term_c_37;
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_37, l_77);
  t = s_15(p_77, l_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_77);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_s_71;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_28 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  t = term_t_71;
  q_77 = t;
  t = term_b_39;
  r_77 = t;
  t = term_u_71;
  t = s_15(q_77, r_77, t);
  t = term_v_71;
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = term_w_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_71 = t;
  int z_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_28, e_28, f_28, t);
      LocalPopChoice(z_71);
    }
  else
    {
      t = x_71;
      {
        ATerm a_72 = t;
        int b_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_28, h_28, i_28, t);
            LocalPopChoice(b_72);
          }
        else
          {
            t = a_72;
            t = Option_3_0(j_28, k_28, l_28, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm v_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,b_78 = NULL;
  v_77 = t;
  t = term_z_36;
  z_77 = t;
  t = term_t_37;
  b_78 = t;
  t = term_w_37;
  t = n_15(z_77, b_78, t);
  {
    static ATerm n_28 (ATerm t);
    static ATerm n_28 (ATerm t)
    {
      ATerm c_78 = NULL;
      c_78 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = v_77;
        }
      else
        {
          t = c_78;
        }
      return(t);
    }
    t = map_1_0(n_28, t);
  }
  x_77 = t;
  t = term_t_37;
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, x_77);
  t = s_15(y_77, x_77, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
        t = term_z_36;
        l_78 = t;
        t = term_c_37;
        m_78 = t;
        t = term_d_37;
        t = n_15(l_78, m_78, t);
        k_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_78, term_v_46);
        t = geq_0_0(t);
        t = g_78;
        t = e_126(t);
        LocalPopChoice(d_72);
      }
    else
      {
        t = c_72;
        t = g_78;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm q_78 = NULL;
  q_78 = t;
  {
    ATerm e_72 = t;
    int f_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,t_78 = NULL,v_78 = NULL;
        t = term_z_36;
        t_78 = t;
        t = term_c_37;
        v_78 = t;
        t = term_d_37;
        t = n_15(t_78, v_78, t);
        s_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_78, term_i_44);
        t = geq_0_0(t);
        t = q_78;
        t = d_126(t);
        LocalPopChoice(f_72);
      }
    else
      {
        t = e_72;
        t = q_78;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  if(match_cons(t, sym__2))
    {
      l_79 = ATgetArgument(t, 0);
      m_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_72 = t;
    int j_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_79;
        if((l_79 != t))
          {
            _fail(t);
          }
        t = k_79;
        LocalPopChoice(j_72);
      }
    else
      {
        t = g_72;
        t = (ATerm) ATmakeAppl(sym__2, l_79, m_79);
        {
          ATerm n_72 = t;
          int o_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_79, m_79);
              LocalPopChoice(o_72);
            }
          else
            {
              t = n_72;
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
  ATerm s_79 = NULL;
  s_79 = t;
  {
    ATerm r_72 = t;
    int s_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
        t = term_z_36;
        w_79 = t;
        t = term_c_37;
        x_79 = t;
        t = term_d_37;
        t = n_15(w_79, x_79, t);
        v_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_79, term_p_49);
        t = geq_0_0(t);
        t = s_79;
        t = f_126(t);
        LocalPopChoice(s_72);
      }
    else
      {
        t = r_72;
        t = s_79;
      }
  }
  return(t);
}
static ATerm b_15 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
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
static ATerm c_15 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm v_80 (ATerm t);
  static ATerm v_80 (ATerm t)
  {
    ATerm o_80 = NULL,q_80 = NULL,r_80 = NULL;
    o_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_80 = ATgetFirst((ATermList) t);
            r_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_72 = t;
          int w_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_80;
              {
                static ATerm p_28 (ATerm t);
                static ATerm p_28 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = b_15(i_113, p_28, q_80, r_80, t);
              }
              t = v_80(t);
              LocalPopChoice(w_72);
            }
          else
            {
              t = v_72;
              {
                ATerm u_40 = NULL,b_41 = NULL,q_18 = NULL;
                t = SSLgetAnnotations(o_80);
                u_40 = t;
                t = r_80;
                t = v_80(t);
                b_41 = t;
                t = (ATerm) ATinsert(CheckATermList(b_41), q_80);
                q_18 = t;
                t = SSLsetAnnotations(q_18, u_40);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = v_80(t);
  return(t);
}
static ATerm q_28 (ATerm t)
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
static ATerm d_15 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm y_80 = NULL,a_81 = NULL,c_81 = NULL,d_81 = NULL;
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  {
    ATerm y_72 = t;
    int z_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_73 = ATgetArgument(t, 0);
            ATerm b_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
        t = n_15(m_57, n_57, t);
        LocalPopChoice(z_72);
      }
    else
      {
        t = y_72;
        t = (ATerm) ATempty;
      }
  }
  c_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_81, o_57);
  t = c_15(q_28, c_81, o_57, t);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_57, n_57, a_81);
  t = lookup_table_0_1(m_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(n_57, a_81, d_81, t);
  t = y_80;
  return(t);
}
static ATerm e_15 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t)
{
  static ATerm x_28 (ATerm t);
  static ATerm x_28 (ATerm t)
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
  t = map_1_0(x_28, t);
  return(t);
}
static ATerm g_82 (ATerm x_81, ATerm t)
{
  t = SSL_fclose(x_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_82 = NULL,c_82 = NULL;
  c_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_82 = ATgetArgument(t, 0);
      {
        ATerm c_73 = t;
        int d_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_82);
            LocalPopChoice(d_73);
          }
        else
          {
            t = c_73;
            t = g_82(c_82, t);
          }
      }
    }
  else
    {
      t = g_82(c_82, t);
    }
  return(t);
}
static ATerm f_15 (ATerm b_25, ATerm t)
{
  t = SSL_read_term_from_stream(b_25);
  return(t);
}
static ATerm g_15 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm h_82 = NULL;
  t = SSL_fopen(w_40, x_40);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_82 = NULL;
  t = SSL_stdin_stream();
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_82 = NULL;
  t = SSL_stdout_stream();
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_stderr_stream();
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
static ATerm d_84 (ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_explode_term(y_82);
  if(match_cons(t, sym__2))
    {
      ATerm e_73 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_73) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_73 = ATgetArgument(t, 1);
        if(((ATgetType(f_73) == AT_LIST) && !(ATisEmpty(f_73))))
          {
            z_82 = ATgetFirst((ATermList) f_73);
            {
              ATerm g_73 = (ATerm) ATgetNext((ATermList) f_73);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_84 (ATerm c_83, ATerm d_83, ATerm e_83, ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,m_83 = NULL,u_18 = NULL;
  t = SSLgetAnnotations(e_83);
  h_83 = t;
  t = c_83;
  if(match_cons(t, sym_Path_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_83, d_83);
  u_18 = t;
  t = SSLsetAnnotations(u_18, h_83);
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(f_83, g_83, t);
  return(t);
}
static ATerm f_84 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,y_83 = NULL,v_18 = NULL;
  t = SSLgetAnnotations(s_83);
  v_83 = t;
  t = SSL_is_string(q_83);
  y_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_83, r_83);
  v_18 = t;
  t = SSLsetAnnotations(v_18, v_83);
  if(match_cons(t, sym__2))
    {
      t_83 = ATgetArgument(t, 0);
      u_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(t_83, u_83, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  a_84 = t;
  if(match_cons(t, sym__2))
    {
      b_84 = ATgetArgument(t, 0);
      c_84 = ATgetArgument(t, 1);
      {
        ATerm h_73 = t;
        int i_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_84(a_84, t);
            LocalPopChoice(i_73);
          }
        else
          {
            t = h_73;
            {
              ATerm j_73 = t;
              int k_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_84(b_84, c_84, a_84, t);
                  LocalPopChoice(k_73);
                }
              else
                {
                  t = j_73;
                  t = f_84(b_84, c_84, a_84, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_84(a_84, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,o_84 = NULL;
  o_84 = t;
  {
    ATerm l_73 = t;
    int m_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_84, term_n_73);
        t = h_15(t);
        LocalPopChoice(m_73);
      }
    else
      {
        t = l_73;
        {
          ATerm r_42 = NULL,u_42 = NULL;
          t = term_o_73;
          u_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_73, o_84);
          t = t_15(u_42, o_84, t);
          r_42 = t;
          t = SSL_perror(r_42);
          _fail(t);
        }
      }
  }
  i_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(j_84, t);
  h_84 = t;
  t = i_84;
  t = fclose_0_0(t);
  t = h_84;
  return(t);
}
static ATerm y_28 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm d_29 (ATerm t)
{
  t = term_r_73;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_73 = t;
  int t_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_84 = NULL,s_84 = NULL;
      r_84 = t;
      t = (ATerm) ATinsert(ATempty, term_u_73);
      s_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_84, (ATerm) ATinsert(ATempty, term_u_73));
      t = j_15(r_84, s_84, t);
      LocalPopChoice(t_73);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_73;
      {
        ATerm v_73 = t;
        int z_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_74 = t;
            if((PushChoice() == 0))
              {
                ATerm t_84 = NULL,u_84 = NULL;
                t_84 = t;
                t = (ATerm) ATinsert(ATempty, term_u_58);
                u_84 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_84, (ATerm) ATinsert(ATempty, term_u_58));
                t = j_15(t_84, u_84, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_74;
              }
            t = debug_1_0(y_28, t);
            LocalPopChoice(z_73);
          }
        else
          {
            t = v_73;
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
  t = term_e_74;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = debug_1_0(i_29, t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = term_g_74;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  ATerm q_85 = NULL,v_85 = NULL,w_85 = NULL;
  q_85 = t;
  t = term_i_37;
  v_85 = t;
  t = (ATerm) ATinsert(ATempty, term_k_74);
  w_85 = t;
  t = SSL_printnl(v_85, w_85);
  t = q_85;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,a_86 = NULL;
  if(match_cons(t, sym__3))
    {
      x_85 = ATgetArgument(t, 0);
      y_85 = ATgetArgument(t, 1);
      a_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_15(x_85, y_85, a_86, t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL;
  b_86 = t;
  t = term_i_37;
  c_86 = t;
  t = (ATerm) ATinsert(ATempty, term_l_74);
  d_86 = t;
  t = SSL_printnl(c_86, d_86);
  t = b_86;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
  e_86 = t;
  t = term_i_37;
  f_86 = t;
  t = (ATerm) ATinsert(ATempty, term_k_74);
  g_86 = t;
  t = SSL_printnl(f_86, g_86);
  t = e_86;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  v_84 = t;
  t = if_verbose5_1_0(e_29, t);
  {
    ATerm m_74 = t;
    if((PushChoice() == 0))
      {
        ATerm o_85 = NULL,p_85 = NULL;
        t = term_s_70;
        o_85 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_84);
        p_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_70, (ATerm) ATmakeAppl(sym_Imported_1, v_84));
        t = n_15(o_85, p_85, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_74;
      }
  }
  x_84 = t;
  t = term_s_70;
  j_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_70, term_n_74, (ATerm) ATinsert(ATempty, v_84));
  t = lookup_table_0_1(j_85, t);
  n_85 = t;
  t = term_n_74;
  k_85 = t;
  t = (ATerm) ATinsert(ATempty, v_84);
  l_85 = t;
  t = n_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(k_85, l_85, m_85, t);
  t = x_84;
  t = if_verbose4_1_0(h_29, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_29, t);
  w_84 = t;
  t = term_s_70;
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_70, w_84);
  t = e_15(n_29, h_85, w_84, t);
  t = if_verbose6_1_0(o_29, t);
  t = term_s_70;
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_70, (ATerm)ATmakeAppl(sym_Imported_1, v_84), (ATerm) ATempty);
  t = lookup_table_0_1(y_84, t);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_84);
  z_84 = t;
  t = (ATerm) ATempty;
  e_85 = t;
  t = g_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(z_84, e_85, f_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_70, (ATerm)ATmakeAppl(sym_Imported_1, v_84), (ATerm) ATempty);
  t = if_verbose4_1_0(r_29, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL;
  u_86 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_86;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_86 = ATgetFirst((ATermList) t);
          w_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_74 = t;
        int p_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_43 = NULL,h_43 = NULL,j_43 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(u_86);
            c_43 = t;
            t = v_86;
            t = a_117(t);
            h_43 = t;
            t = w_86;
            t = filter_1_0(a_117, t);
            j_43 = t;
            t = (ATerm) ATinsert(CheckATermList(j_43), h_43);
            f_19 = t;
            t = SSLsetAnnotations(f_19, c_43);
            LocalPopChoice(p_74);
          }
        else
          {
            t = o_74;
            t = w_86;
            t = filter_1_0(a_117, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  static ATerm z_86 (ATerm t);
  static ATerm z_86 (ATerm t)
  {
    ATerm r_74 = t;
    int v_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        t = z_86(t);
        LocalPopChoice(v_74);
      }
    else
      {
        t = r_74;
        t = m_101(t);
      }
    return(t);
  }
  t = z_86(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_74 = t;
  int a_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_87 = NULL,b_87 = NULL;
      t = term_z_36;
      a_87 = t;
      t = term_b_75;
      b_87 = t;
      t = term_c_75;
      t = n_15(a_87, b_87, t);
      LocalPopChoice(a_75);
    }
  else
    {
      t = x_74;
      {
        ATerm g_75 = t;
        int h_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_87 = NULL;
            t = term_i_75;
            c_87 = t;
            t = SSL_getenv(c_87);
            LocalPopChoice(h_75);
          }
        else
          {
            t = g_75;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm s_29 (ATerm t)
{
  t = debug_1_0(w_29, t);
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = term_j_75;
  return(t);
}
static ATerm d_30 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL;
  t = term_s_70;
  m_87 = t;
  t = term_k_75;
  n_87 = t;
  t = term_l_75;
  t = n_15(m_87, n_87, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_75 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_75;
      }
  }
  return(t);
}
static ATerm e_30 (ATerm t)
{
  t = debug_1_0(f_30, t);
  return(t);
}
static ATerm f_30 (ATerm t)
{
  t = term_p_75;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_87 = NULL;
  t = if_verbose5_1_0(s_29, t);
  g_87 = t;
  {
    ATerm q_75 = t;
    int s_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_87 = NULL,k_87 = NULL;
        t = term_s_70;
        h_87 = t;
        t = term_n_74;
        k_87 = t;
        t = term_t_75;
        t = n_15(h_87, k_87, t);
        LocalPopChoice(s_75);
      }
    else
      {
        t = q_75;
        {
          ATerm l_87 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_87 = t;
          t = repeat_2_0(d_30, _id, t);
          t = l_87;
        }
      }
  }
  t = g_87;
  t = if_verbose5_1_0(e_30, t);
  return(t);
}
static ATerm g_88 (ATerm s_87, ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  t = term_s_70;
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_87);
  x_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_70, (ATerm) ATmakeAppl(sym_Tool_1, s_87));
  t = n_15(w_87, x_87, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_75 = ATgetFirst((ATermList) t);
      if(match_cons(u_75, sym__2))
        {
          ATerm x_75 = ATgetArgument(u_75, 0);
          v_87 = ATgetArgument(u_75, 1);
        }
      else
        _fail(t);
      {
        ATerm w_75 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_87;
  return(t);
}
static ATerm m_30 (ATerm t)
{
  t = debug_1_0(t_30, t);
  return(t);
}
static ATerm t_30 (ATerm t)
{
  t = term_q_70;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
  t = xtc_load_0_0(t);
  a_88 = t;
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
      {
        ATerm y_75 = t;
        int z_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
            t = term_s_70;
            e_88 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, y_87);
            f_88 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_s_70, (ATerm) ATmakeAppl(sym_Tool_1, y_87));
            t = n_15(e_88, f_88, t);
            {
              static ATerm h_30 (ATerm t);
              static ATerm h_30 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((z_87 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((d_88 != NULL) && (d_88 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      d_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(h_30, t);
            }
            t = not_null(d_88);
            LocalPopChoice(z_75);
          }
        else
          {
            t = y_75;
            t = g_88(a_88, t);
          }
      }
    }
  else
    {
      t = g_88(a_88, t);
    }
  t = if_verbose5_1_0(m_30, t);
  return(t);
}
static ATerm i_15 (ATerm c_67, ATerm d_67, ATerm t)
{
  ATerm a_76 = t;
  int b_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_88 = NULL,k_88 = NULL,n_88 = NULL;
      t = term_z_36;
      n_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_36, c_67);
      t = n_15(n_88, c_67, t);
      t = term_z_36;
      h_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_36, c_67);
      t = lookup_table_0_1(h_88, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          k_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_15(c_67, k_88, t);
      t = (ATerm) ATmakeAppl(sym__2, term_z_36, c_67);
      LocalPopChoice(b_76);
    }
  else
    {
      t = a_76;
      t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
      t = s_15(c_67, d_67, t);
    }
  return(t);
}
static ATerm j_15 (ATerm k_40, ATerm l_40, ATerm t)
{
  t = SSL_access(k_40, l_40);
  return(t);
}
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  static ATerm t_89 (ATerm t);
  static ATerm t_89 (ATerm t)
  {
    ATerm m_89 = NULL,n_89 = NULL,r_89 = NULL;
    r_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_89 = ATgetFirst((ATermList) t);
        n_89 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_43 = NULL,f_44 = NULL,h_19 = NULL;
          t = SSLgetAnnotations(r_89);
          y_43 = t;
          t = n_89;
          t = t_89(t);
          f_44 = t;
          t = (ATerm) ATinsert(CheckATermList(f_44), m_89);
          h_19 = t;
          t = SSLsetAnnotations(h_19, y_43);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_89;
        t = o_109(t);
      }
    return(t);
  }
  t = t_89(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL,u_88 = NULL;
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
        t = not_null(u_88);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_88 = ATgetFirst((ATermList) t);
          if(((u_88 != NULL) && (u_88 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_88 = (ATerm) ATgetNext((ATermList) t);
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
      ATerm c_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_76) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm c_90 = NULL,f_90 = NULL,g_90 = NULL;
  g_90 = t;
  if(match_cons(t, sym__2))
    {
      c_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      {
        ATerm d_76 = t;
        int e_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_30 (ATerm t);
            static ATerm v_30 (ATerm t)
            {
              t = f_90;
              return(t);
            }
            t = c_90;
            t = at_end_1_0(v_30, t);
            LocalPopChoice(e_76);
          }
        else
          {
            t = d_76;
            t = j_90(g_90, t);
          }
      }
    }
  else
    {
      t = j_90(g_90, t);
    }
  return(t);
}
static ATerm k_15 (ATerm g_67, ATerm h_67, ATerm t)
{
  ATerm k_90 = NULL,m_90 = NULL,o_90 = NULL,p_90 = NULL;
  t = g_67;
  {
    ATerm f_76 = t;
    int i_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_90 = NULL;
        t = term_z_36;
        r_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_36, g_67);
        t = n_15(r_90, g_67, t);
        LocalPopChoice(i_76);
      }
    else
      {
        t = f_76;
        t = (ATerm) ATempty;
      }
  }
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_90, h_67);
  t = conc_0_0(t);
  k_90 = t;
  t = term_z_36;
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, g_67, k_90);
  t = lookup_table_0_1(o_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(g_67, k_90, p_90, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, g_67, k_90);
  return(t);
}
static ATerm w_30 (ATerm t)
{
  ATerm v_90 = NULL;
  v_90 = t;
  if(match_string(t, "-o"))
    {
      t = v_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_90;
    }
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL;
  x_90 = t;
  t = term_o_37;
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, x_90);
  t = s_15(y_90, x_90, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_90);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_k_76;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_30, x_30, y_30, t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  ATerm e_91 = NULL;
  e_91 = t;
  if(match_string(t, "-i"))
    {
      t = e_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_91;
    }
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm g_91 = NULL,j_91 = NULL;
  g_91 = t;
  t = term_i_55;
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_55, g_91);
  t = s_15(j_91, g_91, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_91);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  t = term_l_76;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_30, b_31, c_31, t);
  return(t);
}
static ATerm f_31 (ATerm t)
{
  ATerm x_91 = NULL;
  x_91 = t;
  if(match_string(t, "-I"))
    {
      t = x_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_91;
    }
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL;
  a_92 = t;
  t = term_y_60;
  b_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_92), term_y_60);
  c_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_60, (ATerm) ATinsert(ATinsert(ATempty, a_92), term_y_60));
  t = k_15(b_92, c_92, t);
  t = term_b_39;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_m_76;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  ATerm d_92 = NULL;
  d_92 = t;
  if(match_string(t, "--main"))
    {
      t = d_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = d_92;
    }
  return(t);
}
static ATerm m_31 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  e_92 = t;
  t = term_d_59;
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_59, e_92);
  t = s_15(f_92, e_92, t);
  t = term_b_39;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_o_76;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm g_92 = NULL;
  g_92 = t;
  if(match_string(t, "--library"))
    {
      t = g_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = g_92;
    }
  return(t);
}
static ATerm p_31 (ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL;
  t = term_w_39;
  h_92 = t;
  t = term_b_39;
  i_92 = t;
  t = term_p_76;
  t = s_15(h_92, i_92, t);
  t = term_b_39;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  t = term_q_76;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  t = term_s_39;
  k_92 = t;
  t = (ATerm) ATinsert(ATempty, j_92);
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATempty, j_92));
  t = k_15(k_92, l_92, t);
  t = term_b_39;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_s_76;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL;
  m_92 = t;
  t = term_l_38;
  n_92 = t;
  t = (ATerm) ATinsert(ATempty, m_92);
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATempty, m_92));
  t = y_14(n_92, o_92, t);
  t = term_b_39;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  t = term_v_76;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL;
  p_92 = t;
  t = term_x_76;
  t_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_76, p_92);
  t = t_15(t_92, p_92, t);
  q_92 = t;
  t = term_t_37;
  r_92 = t;
  t = (ATerm) ATinsert(ATempty, q_92);
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATempty, q_92));
  t = y_14(r_92, s_92, t);
  t = term_b_39;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  t = term_a_77;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  u_92 = t;
  t = term_b_77;
  y_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_77, u_92);
  t = t_15(y_92, u_92, t);
  v_92 = t;
  t = term_t_37;
  w_92 = t;
  t = (ATerm) ATinsert(ATempty, v_92);
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATempty, v_92));
  t = y_14(w_92, x_92, t);
  t = term_b_39;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_c_77;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  z_92 = t;
  {
    ATerm e_77 = t;
    int f_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_93 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_58);
        d_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_92, (ATerm) ATinsert(ATempty, term_u_58));
        t = j_15(z_92, d_93, t);
        LocalPopChoice(f_77);
      }
    else
      {
        t = e_77;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_77), z_92), term_i_77);
        {
          ATerm s_77 = t;
          int t_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_44 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_77), z_92), term_i_77);
              s_44 = t;
              t = SSL_concat_strings(s_44);
              t = xtc_find_0_0(t);
              LocalPopChoice(t_77);
            }
          else
            {
              t = s_77;
              {
                ATerm h_93 = NULL;
                t = term_m_40;
                h_93 = t;
                t = SSL_exit(h_93);
              }
            }
        }
      }
  }
  a_93 = t;
  t = term_t_37;
  b_93 = t;
  t = (ATerm) ATinsert(ATempty, a_93);
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATempty, a_93));
  t = y_14(b_93, c_93, t);
  t = term_b_39;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = term_u_77;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm i_93 = NULL,l_93 = NULL;
  t = term_o_38;
  i_93 = t;
  t = term_b_39;
  l_93 = t;
  t = term_w_77;
  t = s_15(i_93, l_93, t);
  t = term_b_39;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_a_78;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL;
  t = term_n_60;
  m_93 = t;
  t = term_b_39;
  n_93 = t;
  t = term_d_78;
  t = s_15(m_93, n_93, t);
  t = term_b_39;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_e_78;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL;
  t = term_v_55;
  q_93 = t;
  t = term_b_39;
  r_93 = t;
  t = term_f_78;
  t = s_15(q_93, r_93, t);
  t = term_b_39;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_h_78;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL;
  s_93 = t;
  t = SSL_string_to_int(s_93);
  t_93 = t;
  t = term_z_42;
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_42, t_93);
  t = s_15(u_93, t_93, t);
  t = term_b_39;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_i_78;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
  x_93 = t;
  t = SSL_string_to_int(x_93);
  y_93 = t;
  t = term_f_43;
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, y_93);
  t = s_15(z_93, y_93, t);
  t = term_b_39;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_j_78;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_33 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL;
  t = term_w_44;
  a_94 = t;
  t = term_b_39;
  b_94 = t;
  t = term_n_78;
  t = i_15(a_94, b_94, t);
  t = term_b_39;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  t = term_o_78;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_33 (ATerm t)
{
  ATerm c_94 = NULL,f_94 = NULL;
  c_94 = t;
  if(match_string(t, "old"))
    {
      t = c_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = c_94;
    }
  t = term_s_56;
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_56, c_94);
  t = s_15(f_94, c_94, t);
  t = term_b_39;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  t = term_p_78;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_33 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_b_39;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  t = term_r_78;
  return(t);
}
static ATerm q_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_33 (ATerm t)
{
  t = term_u_78;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_b_39;
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = term_w_78;
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm l_94 = NULL;
  l_94 = t;
  if(match_string(t, "-h"))
    {
      t = l_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = l_94;
    }
  return(t);
}
static ATerm c_34 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  t = term_x_78;
  m_94 = t;
  t = term_b_39;
  n_94 = t;
  t = term_y_78;
  t = s_15(m_94, n_94, t);
  t = term_b_39;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  t = term_z_78;
  return(t);
}
static ATerm f_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_34 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL;
  t = term_a_79;
  o_94 = t;
  t = term_b_39;
  p_94 = t;
  t = term_b_79;
  t = s_15(o_94, p_94, t);
  t = term_b_39;
  return(t);
}
static ATerm n_34 (ATerm t)
{
  t = term_c_79;
  return(t);
}
static ATerm r_34 (ATerm t)
{
  ATerm q_94 = NULL;
  q_94 = t;
  if(match_string(t, "-v"))
    {
      t = q_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = q_94;
    }
  return(t);
}
static ATerm s_34 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL;
  t = term_d_79;
  r_94 = t;
  t = term_b_39;
  s_94 = t;
  t = term_e_79;
  t = s_15(r_94, s_94, t);
  t = term_b_39;
  return(t);
}
static ATerm t_34 (ATerm t)
{
  t = term_f_79;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm v_94 = NULL;
  v_94 = t;
  if(match_string(t, "--warning"))
    {
      t = v_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = v_94;
    }
  return(t);
}
static ATerm w_34 (ATerm t)
{
  ATerm w_94 = NULL;
  w_94 = t;
  {
    ATerm g_79 = t;
    int h_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,j_19 = NULL;
        t = term_z_36;
        z_94 = t;
        t = term_l_55;
        a_95 = t;
        t = term_m_55;
        t = n_15(z_94, a_95, t);
        e_95 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_95 = ATgetFirst((ATermList) t);
            d_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_95);
        b_95 = t;
        t = c_95;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = d_95;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_95), c_95);
        j_19 = t;
        t = SSLsetAnnotations(j_19, b_95);
        t = term_l_55;
        x_94 = t;
        t = (ATerm) ATinsert(ATempty, w_94);
        y_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_55, (ATerm) ATinsert(ATempty, w_94));
        t = s_15(x_94, y_94, t);
        LocalPopChoice(h_79);
      }
    else
      {
        t = g_79;
        {
          ATerm f_95 = NULL,g_95 = NULL;
          t = term_l_55;
          f_95 = t;
          t = (ATerm) ATinsert(ATempty, w_94);
          g_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_55, (ATerm) ATinsert(ATempty, w_94));
          t = y_14(f_95, g_95, t);
        }
      }
  }
  t = term_b_39;
  return(t);
}
static ATerm z_34 (ATerm t)
{
  t = term_i_79;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_35 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,k_95 = NULL;
  h_95 = t;
  t = term_l_56;
  i_95 = t;
  t = term_m_40;
  k_95 = t;
  t = term_j_79;
  t = s_15(i_95, k_95, t);
  t = h_95;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_l_56;
  return(t);
}
static ATerm h_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_35 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  l_95 = t;
  t = term_n_56;
  m_95 = t;
  t = term_t_36;
  n_95 = t;
  t = term_n_79;
  t = s_15(m_95, n_95, t);
  t = l_95;
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = term_n_56;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_35 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  t = term_v_61;
  o_95 = t;
  t = term_b_39;
  p_95 = t;
  t = term_o_79;
  t = s_15(o_95, p_95, t);
  t = term_b_39;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  t = term_p_79;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm q_79 = t;
  int r_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_79);
    }
  else
    {
      t = q_79;
      {
        ATerm t_79 = t;
        int u_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_79);
          }
        else
          {
            t = t_79;
            {
              ATerm y_79 = t;
              int a_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(f_31, g_31, j_31, t);
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
                        t = ArgOption_3_0(l_31, m_31, n_31, t);
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
                              t = Option_3_0(o_31, p_31, q_31, t);
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
                                    t = ArgOption_3_0(r_31, s_31, t_31, t);
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
                                          t = ArgOption_3_0(u_31, x_31, y_31, t);
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
                                                t = ArgOption_3_0(a_32, c_32, d_32, t);
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
                                                      t = ArgOption_3_0(e_32, f_32, g_32, t);
                                                      LocalPopChoice(m_80);
                                                    }
                                                  else
                                                    {
                                                      t = l_80;
                                                      {
                                                        ATerm n_80 = t;
                                                        int p_80 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(h_32, k_32, l_32, t);
                                                            LocalPopChoice(p_80);
                                                          }
                                                        else
                                                          {
                                                            t = n_80;
                                                            {
                                                              ATerm s_80 = t;
                                                              int t_80 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(m_32, n_32, p_32, t);
                                                                  LocalPopChoice(t_80);
                                                                }
                                                              else
                                                                {
                                                                  t = s_80;
                                                                  {
                                                                    ATerm u_80 = t;
                                                                    int w_80 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Option_3_0(q_32, r_32, s_32, t);
                                                                        LocalPopChoice(w_80);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_80;
                                                                        {
                                                                          ATerm x_80 = t;
                                                                          int z_80 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(t_32, u_32, v_32, t);
                                                                              LocalPopChoice(z_80);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_80;
                                                                              {
                                                                                ATerm b_81 = t;
                                                                                int e_81 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = ArgOption_3_0(w_32, x_32, y_32, t);
                                                                                    LocalPopChoice(e_81);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_81;
                                                                                    {
                                                                                      ATerm f_81 = t;
                                                                                      int g_81 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(z_32, b_33, c_33, t);
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
                                                                                                t = Option_3_0(f_33, g_33, h_33, t);
                                                                                                LocalPopChoice(l_81);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_81;
                                                                                                {
                                                                                                  ATerm m_81 = t;
                                                                                                  int n_81 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(i_33, j_33, k_33, t);
                                                                                                      LocalPopChoice(n_81);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = m_81;
                                                                                                      {
                                                                                                        ATerm o_81 = t;
                                                                                                        int p_81 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = ArgOption_3_0(l_33, n_33, p_33, t);
                                                                                                            LocalPopChoice(p_81);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = o_81;
                                                                                                            {
                                                                                                              ATerm q_81 = t;
                                                                                                              int r_81 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm h_94 = NULL;
                                                                                                                  h_94 = t;
                                                                                                                  t = term_u_78;
                                                                                                                  t = xtc_find_silent_0_0(t);
                                                                                                                  t = h_94;
                                                                                                                  t = Option_3_0(q_33, u_33, w_33, t);
                                                                                                                  LocalPopChoice(r_81);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = q_81;
                                                                                                                  {
                                                                                                                    ATerm s_81 = t;
                                                                                                                    int t_81 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = verbose_option_0_0(t);
                                                                                                                        LocalPopChoice(t_81);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_81;
                                                                                                                        {
                                                                                                                          ATerm u_81 = t;
                                                                                                                          int v_81 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(y_33, c_34, e_34, t);
                                                                                                                              LocalPopChoice(v_81);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_81;
                                                                                                                              {
                                                                                                                                ATerm w_81 = t;
                                                                                                                                int y_81 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(f_34, g_34, n_34, t);
                                                                                                                                    LocalPopChoice(y_81);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = w_81;
                                                                                                                                    {
                                                                                                                                      ATerm z_81 = t;
                                                                                                                                      int b_82 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(r_34, s_34, t_34, t);
                                                                                                                                          LocalPopChoice(b_82);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = z_81;
                                                                                                                                          {
                                                                                                                                            ATerm d_82 = t;
                                                                                                                                            int e_82 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = ArgOption_3_0(v_34, w_34, z_34, t);
                                                                                                                                                LocalPopChoice(e_82);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = d_82;
                                                                                                                                                {
                                                                                                                                                  ATerm f_82 = t;
                                                                                                                                                  int j_82 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(a_35, c_35, g_35, t);
                                                                                                                                                      LocalPopChoice(j_82);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = f_82;
                                                                                                                                                      {
                                                                                                                                                        ATerm m_82 = t;
                                                                                                                                                        int n_82 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = Option_3_0(h_35, i_35, j_35, t);
                                                                                                                                                            LocalPopChoice(n_82);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = m_82;
                                                                                                                                                            t = Option_3_0(k_35, l_35, n_35, t);
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
static ATerm l_15 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm t_95 = NULL;
  t = SSL_hashtable_remove(n_61, m_61);
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_95);
  return(t);
}
static ATerm m_15 (ATerm r_61, ATerm t)
{
  ATerm w_95 = NULL;
  t = SSL_hashtable_destroy(r_61);
  w_95 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_95);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,d_96 = NULL;
  x_95 = t;
  t = table_hashtable_0_0(t);
  y_95 = t;
  t = lookup_table_0_1(x_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(d_96, t);
  t = y_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(x_95, z_95, t);
  t = x_95;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_83), term_l_69), term_b_83), term_a_83), term_x_82), term_l_69), term_w_82), term_v_82), term_u_82), term_t_82), term_s_82), term_r_82), term_q_82), term_p_82), term_o_82);
  return(t);
}
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  static ATerm j_97 (ATerm t);
  static ATerm j_97 (ATerm t)
  {
    ATerm b_97 = NULL,g_97 = NULL,i_97 = NULL;
    b_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_97;
      }
    else
      {
        ATerm z_44 = NULL,d_45 = NULL,f_45 = NULL,m_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_97 = ATgetFirst((ATermList) t);
            i_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_97);
        z_44 = t;
        t = g_97;
        t = x_108(t);
        d_45 = t;
        t = i_97;
        t = j_97(t);
        f_45 = t;
        t = (ATerm) ATinsert(CheckATermList(f_45), d_45);
        m_19 = t;
        t = SSLsetAnnotations(m_19, z_44);
      }
    return(t);
  }
  t = j_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_97 = ATgetFirst((ATermList) t);
      n_97 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_97 = NULL,v_97 = NULL;
        static ATerm o_35 (ATerm t);
        static ATerm o_35 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_97)), not_null(v_97));
          return(t);
        }
        t = n_97;
        t = l_0(t);
        if(((u_97 != NULL) && (u_97 != t)))
          _fail(t);
        else
          u_97 = t;
        t = m_97;
        t = j_0(t);
        if(((v_97 != NULL) && (v_97 != t)))
          _fail(t);
        else
          v_97 = t;
        t = n_97;
        t = reverse_acc_2_0(j_0, o_35, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_39;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_98 = NULL;
  t = term_b_39;
  t = h_0(t);
  a_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_83), a_98), term_o_83), term_l_69), term_n_83), term_l_69), term_l_83), term_k_83), term_l_69), term_j_83);
  return(t);
}
static ATerm r_35 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_35 (ATerm t)
{
  ATerm x_98 = NULL;
  x_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_98), term_w_83);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL,i_98 = NULL;
  ATerm x_83 = t;
  int z_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_98 = NULL,k_98 = NULL;
      t = term_z_36;
      j_98 = t;
      t = term_g_84;
      k_98 = t;
      t = term_k_84;
      t = n_15(j_98, k_98, t);
      e_98 = t;
      LocalPopChoice(z_83);
    }
  else
    {
      t = x_83;
      {
        static ATerm p_35 (ATerm t);
        static ATerm p_35 (ATerm t)
        {
          ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL,q_19 = NULL;
          o_98 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_98);
          m_98 = t;
          t = n_98;
          if(((e_98 != NULL) && (e_98 != t)))
            _fail(t);
          else
            e_98 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_98);
          q_19 = t;
          t = SSLsetAnnotations(q_19, m_98);
          return(t);
        }
        t = fetch_1_0(p_35, t);
      }
    }
  {
    ATerm l_84 = t;
    int m_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_35 (ATerm t);
        static ATerm q_35 (ATerm t)
        {
          t = not_null(e_98);
          return(t);
        }
        t = short_description_1_0(q_35, t);
        t = echo_0_0(t);
        LocalPopChoice(m_84);
      }
    else
      {
        t = l_84;
      }
  }
  t = term_n_84;
  t = echo_0_0(t);
  t = term_l_71;
  f_98 = t;
  t = term_n_71;
  i_98 = t;
  t = term_p_84;
  t = n_15(f_98, i_98, t);
  t = reverse_acc_2_0(_id, r_35, t);
  t = map_1_0(s_35, t);
  {
    ATerm q_84 = t;
    int a_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_98 = NULL;
        static ATerm t_35 (ATerm t);
        static ATerm t_35 (ATerm t)
        {
          t = not_null(e_98);
          return(t);
        }
        t = long_description_1_0(t_35, t);
        y_98 = t;
        t = (ATerm) ATinsert(CheckATermList(y_98), term_l_69);
        t = echo_0_0(t);
        LocalPopChoice(a_85);
      }
    else
      {
        t = q_84;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  static ATerm r_100 (ATerm t);
  static ATerm r_100 (ATerm t)
  {
    ATerm m_100 = NULL,n_100 = NULL,p_100 = NULL;
    m_100 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_100 = ATgetFirst((ATermList) t);
        p_100 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_85 = t;
      int c_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_45 = NULL,b_46 = NULL,u_19 = NULL;
          t = SSLgetAnnotations(m_100);
          x_45 = t;
          t = n_100;
          t = h_109(t);
          b_46 = t;
          t = (ATerm) ATinsert(CheckATermList(p_100), b_46);
          u_19 = t;
          t = SSLsetAnnotations(u_19, x_45);
          LocalPopChoice(c_85);
        }
      else
        {
          t = b_85;
          {
            ATerm o_46 = NULL,x_46 = NULL,y_19 = NULL;
            t = SSLgetAnnotations(m_100);
            o_46 = t;
            t = p_100;
            t = r_100(t);
            x_46 = t;
            t = (ATerm) ATinsert(CheckATermList(x_46), n_100);
            y_19 = t;
            t = SSLsetAnnotations(y_19, o_46);
          }
        }
    }
    return(t);
  }
  t = r_100(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL,a_101 = NULL;
  x_100 = t;
  {
    ATerm d_85 = t;
    int i_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_100;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_85 = ATgetFirst((ATermList) t);
                ATerm s_85 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_100;
          }
        LocalPopChoice(i_85);
      }
    else
      {
        t = d_85;
        t = (ATerm) ATinsert(ATempty, x_100);
      }
  }
  y_100 = t;
  t = term_g_39;
  a_101 = t;
  t = SSL_printnl(a_101, y_100);
  t = x_100;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_101 = NULL,k_101 = NULL;
  t = term_z_36;
  j_101 = t;
  t = term_g_84;
  k_101 = t;
  t = term_k_84;
  t = n_15(j_101, k_101, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL;
  t = term_t_85;
  o_101 = t;
  t = term_b_39;
  p_101 = t;
  t = term_u_85;
  t = s_15(o_101, p_101, t);
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_z_85;
  return(t);
}
static ATerm y_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_35 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL,t_101 = NULL;
  t = term_t_85;
  s_101 = t;
  t = term_b_39;
  t_101 = t;
  t = term_u_85;
  t = s_15(s_101, t_101, t);
  t = term_d_79;
  q_101 = t;
  t = term_b_39;
  r_101 = t;
  t = term_e_79;
  t = s_15(q_101, r_101, t);
  t = term_h_86;
  return(t);
}
static ATerm a_36 (ATerm t)
{
  t = term_i_86;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_86 = t;
  int k_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_35, v_35, w_35, t);
      LocalPopChoice(k_86);
    }
  else
    {
      t = j_86;
      t = Option_3_0(y_35, z_35, a_36, t);
    }
  return(t);
}
static ATerm o_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm w_101 = NULL,y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm l_86 = t;
    int m_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_86 = ATgetArgument(t, 0);
            ATerm o_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = n_15(p_56, q_56, t);
        LocalPopChoice(m_86);
      }
    else
      {
        t = l_86;
        t = (ATerm) ATempty;
      }
  }
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(y_101), o_56));
  t = lookup_table_0_1(p_56, t);
  b_102 = t;
  t = (ATerm) ATinsert(CheckATermList(y_101), o_56);
  z_101 = t;
  t = b_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(q_56, z_101, a_102, t);
  t = w_101;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_102 = NULL,z_102 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL;
      t = term_b_39;
      t = g_0(t);
      c_103 = t;
      t = term_l_71;
      d_103 = t;
      t = term_n_71;
      e_103 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_71, term_n_71, c_103);
      t = o_15(d_103, e_103, c_103, t);
      _fail(t);
    }
  else
    {
      ATerm t_103 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_102 = ATgetFirst((ATermList) t);
          z_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_102;
      t = d_0(t);
      t = term_b_39;
      t = f_0(t);
      t_103 = t;
      t = (ATerm) ATinsert(CheckATermList(z_102), t_103);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm v_103 = NULL,z_103 = NULL,g_104 = NULL,h_104 = NULL,k_104 = NULL,l_104 = NULL,d_20 = NULL;
  l_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_103 = ATgetFirst((ATermList) t);
      g_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_104);
  v_103 = t;
  t = z_103;
  t = n_77(t);
  h_104 = t;
  t = g_104;
  t = o_77(t);
  k_104 = t;
  t = (ATerm) ATinsert(CheckATermList(k_104), h_104);
  d_20 = t;
  t = SSLsetAnnotations(d_20, v_103);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,g_105 = NULL,h_105 = NULL,l_105 = NULL,n_105 = NULL,k_20 = NULL;
  c_105 = t;
  {
    ATerm p_86 = t;
    int q_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_86;
        t = t_130(t);
        LocalPopChoice(q_86);
      }
    else
      {
        t = p_86;
      }
  }
  t = c_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_105 = ATgetFirst((ATermList) t);
      h_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_105);
  d_105 = t;
  t = term_g_84;
  n_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_84, g_105);
  t = s_15(n_105, g_105, t);
  t = h_105;
  {
    static ATerm y_105 (ATerm t);
    static ATerm y_105 (ATerm t)
    {
      ATerm s_86 = t;
      int t_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_86 = t;
          int y_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_105 = NULL;
              q_105 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_105;
              LocalPopChoice(y_86);
            }
          else
            {
              t = x_86;
              t = t_130(t);
              t = Cons_2_0(_id, y_105, t);
            }
          LocalPopChoice(t_86);
        }
      else
        {
          t = s_86;
          {
            ATerm t_105 = NULL,v_105 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_105 = ATgetFirst((ATermList) t);
                v_105 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_105), (ATerm) ATmakeAppl(sym_Undefined_1, t_105));
          }
        }
      return(t);
    }
    t = y_105(t);
  }
  l_105 = t;
  t = (ATerm) ATinsert(CheckATermList(l_105), (ATerm) ATmakeAppl(sym_Program_1, g_105));
  k_20 = t;
  t = SSLsetAnnotations(k_20, d_105);
  return(t);
}
static ATerm c_36 (ATerm t)
{
  ATerm y_106 = NULL;
  y_106 = t;
  if(match_string(t, "--help"))
    {
      t = y_106;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_106;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_106;
        }
    }
  return(t);
}
static ATerm d_36 (ATerm t)
{
  ATerm z_106 = NULL,b_107 = NULL;
  t = term_x_78;
  z_106 = t;
  t = term_b_39;
  b_107 = t;
  t = term_y_78;
  t = s_15(z_106, b_107, t);
  t = term_d_87;
  return(t);
}
static ATerm e_36 (ATerm t)
{
  t = term_e_87;
  return(t);
}
static ATerm f_36 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL,s_106 = NULL,w_106 = NULL,x_106 = NULL;
  p_106 = t;
  t = term_l_71;
  q_106 = t;
  t = term_f_87;
  t = lookup_table_0_1(q_106, t);
  x_106 = t;
  t = term_n_71;
  r_106 = t;
  t = (ATerm) ATempty;
  s_106 = t;
  t = x_106;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(r_106, s_106, w_106, t);
  t = p_106;
  {
    static ATerm b_36 (ATerm t);
    static ATerm b_36 (ATerm t)
    {
      ATerm i_87 = t;
      int j_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_130(t);
          LocalPopChoice(j_87);
        }
      else
        {
          t = i_87;
          {
            ATerm o_87 = t;
            int p_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_36, d_36, e_36, t);
                LocalPopChoice(p_87);
              }
            else
              {
                t = o_87;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_36, t);
  }
  {
    ATerm q_87 = t;
    int r_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_107 = NULL;
        o_107 = t;
        {
          ATerm t_87 = t;
          int u_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_47 = NULL;
              t = o_107;
              {
                ATerm b_88 = t;
                int c_88 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_47 = NULL,k_47 = NULL;
                    t = term_z_36;
                    j_47 = t;
                    t = term_x_78;
                    k_47 = t;
                    t = term_i_88;
                    t = n_15(j_47, k_47, t);
                    LocalPopChoice(c_88);
                  }
                else
                  {
                    t = b_88;
                    t = fetch_1_0(f_36, t);
                  }
              }
              t = o_107;
              t = default_system_usage_0_0(t);
              t = term_t_36;
              i_47 = t;
              t = SSL_exit(i_47);
              LocalPopChoice(u_87);
            }
          else
            {
              t = t_87;
              {
                ATerm o_47 = NULL,q_47 = NULL,s_47 = NULL;
                t = term_z_36;
                q_47 = t;
                t = term_t_85;
                s_47 = t;
                t = term_j_88;
                t = n_15(q_47, s_47, t);
                t = o_107;
                t = default_system_about_0_0(t);
                t = term_t_36;
                o_47 = t;
                t = SSL_exit(o_47);
              }
            }
        }
        LocalPopChoice(r_87);
      }
    else
      {
        t = q_87;
        {
          ATerm l_88 = t;
          int m_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_107 = NULL,q_107 = NULL,r_107 = NULL;
              static ATerm g_36 (ATerm t);
              static ATerm g_36 (ATerm t)
              {
                ATerm s_107 = NULL,t_107 = NULL,w_107 = NULL,p_20 = NULL;
                w_107 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_107 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_107);
                s_107 = t;
                t = t_107;
                if(((n_106 != NULL) && (n_106 != t)))
                  _fail(t);
                else
                  n_106 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_107);
                p_20 = t;
                t = SSLsetAnnotations(p_20, s_107);
                return(t);
              }
              t = fetch_1_0(g_36, t);
              t = term_i_37;
              q_107 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_106)), term_o_88);
              r_107 = t;
              t = SSL_printnl(q_107, r_107);
              t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_106)), term_o_88));
              t = default_system_usage_0_0(t);
              t = term_m_40;
              p_107 = t;
              t = SSL_exit(p_107);
              LocalPopChoice(m_88);
            }
          else
            {
              t = l_88;
            }
        }
      }
  }
  o_106 = t;
  t = term_l_71;
  t = table_destroy_0_0(t);
  t = o_106;
  return(t);
}
static ATerm q_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm d_108 = NULL;
  t = SSL_hashtable_put(j_61, h_61, i_61);
  d_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_108);
  return(t);
}
static ATerm r_15 (ATerm k_61, ATerm l_61, ATerm t)
{
  t = SSL_hashtable_get(l_61, k_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm f_108 = NULL;
  t = SSL_hashtable_create(p_61, q_61);
  f_108 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_108);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,n_108 = NULL,u_108 = NULL,w_108 = NULL;
  g_108 = t;
  t = term_p_88;
  u_108 = t;
  t = term_q_88;
  w_108 = t;
  t = g_108;
  t = new_hashtable_0_2(u_108, w_108, t);
  h_108 = t;
  t = g_108;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(g_108, h_108, n_108, t);
  t = g_108;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_109 = NULL;
  t = SSL_table_hashtable();
  b_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_109);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm y_109 = NULL;
  t = table_hashtable_0_0(t);
  y_109 = t;
  {
    ATerm t_88 = t;
    int v_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL;
        t = y_109;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_15(b_58, z_47, t);
        LocalPopChoice(v_88);
      }
    else
      {
        t = t_88;
        {
          ATerm i_48 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = y_109;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_15(b_58, i_48, t);
        }
      }
  }
  return(t);
}
static ATerm s_15 (ATerm z_66, ATerm a_67, ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL;
  t = term_z_36;
  e_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, z_66, a_67);
  t = lookup_table_0_1(e_110, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(z_66, a_67, f_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_36, z_66, a_67);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm p_110 = NULL,q_110 = NULL;
  q_110 = t;
  t = SSL_explode_string(q_110);
  {
    ATerm w_88 = t;
    int x_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_112 (ATerm t);
        static ATerm b_112 (ATerm t)
        {
          ATerm k_111 = NULL,x_111 = NULL,z_111 = NULL;
          k_111 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_111 = ATgetFirst((ATermList) t);
              z_111 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm y_88 = t;
            int z_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_48 = NULL,a_49 = NULL,v_20 = NULL;
                t = SSLgetAnnotations(k_111);
                s_48 = t;
                t = z_111;
                t = b_112(t);
                a_49 = t;
                t = (ATerm) ATinsert(CheckATermList(a_49), x_111);
                v_20 = t;
                t = SSLsetAnnotations(v_20, s_48);
                LocalPopChoice(z_88);
              }
            else
              {
                t = y_88;
                {
                  ATerm l_49 = NULL,y_20 = NULL;
                  t = SSLgetAnnotations(k_111);
                  l_49 = t;
                  t = x_111;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, x_111);
                  y_20 = t;
                  t = SSLsetAnnotations(y_20, l_49);
                }
              }
          }
          return(t);
        }
        t = b_112(t);
        LocalPopChoice(x_88);
      }
    else
      {
        t = w_88;
        t = (ATerm) ATempty;
      }
  }
  p_110 = t;
  t = SSL_implode_string(p_110);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm t_15 (ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSL_strcat(y_38, z_38);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm q_112 = NULL,r_112 = NULL,u_112 = NULL,x_112 = NULL,z_112 = NULL,d_113 = NULL,e_113 = NULL,h_113 = NULL,k_113 = NULL,n_113 = NULL,p_113 = NULL,q_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,x_113 = NULL,y_113 = NULL,b_114 = NULL,c_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,p_114 = NULL,q_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,x_114 = NULL,y_114 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL;
  q_112 = t;
  t = term_k_68;
  c_115 = t;
  t = term_a_89;
  d_115 = t;
  t = term_b_89;
  t = s_15(c_115, d_115, t);
  t = term_c_37;
  y_114 = t;
  t = term_m_40;
  b_115 = t;
  t = term_c_89;
  t = s_15(y_114, b_115, t);
  t = term_z_42;
  v_114 = t;
  t = term_t_36;
  x_114 = t;
  t = term_d_89;
  t = s_15(v_114, x_114, t);
  t = term_f_43;
  t_114 = t;
  t = term_p_49;
  u_114 = t;
  t = term_e_89;
  t = s_15(t_114, u_114, t);
  t = term_y_60;
  p_114 = t;
  t = (ATerm) ATempty;
  q_114 = t;
  t = term_f_89;
  t = s_15(p_114, q_114, t);
  t = term_s_39;
  l_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_89), term_g_89);
  m_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATempty, term_h_89), term_g_89));
  t = s_15(l_114, m_114, t);
  t = term_i_89;
  t = xtc_find_path_0_0(t);
  p_113 = t;
  t = term_j_89;
  k_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_113, term_j_89);
  t = t_15(p_113, k_114, t);
  d_113 = t;
  t = term_i_89;
  t = xtc_find_path_0_0(t);
  n_113 = t;
  t = term_j_89;
  j_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_113, term_j_89);
  t = t_15(n_113, j_114, t);
  e_113 = t;
  t = term_k_89;
  t = xtc_find_path_0_0(t);
  k_113 = t;
  t = term_j_89;
  h_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_113, term_j_89);
  t = t_15(k_113, h_114, t);
  h_113 = t;
  t = term_l_38;
  f_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_113), term_y_60), e_113), term_y_60), d_113), term_y_60);
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_113), term_y_60), e_113), term_y_60), d_113), term_y_60));
  t = s_15(f_114, g_114, t);
  t = term_i_89;
  t = xtc_find_path_0_0(t);
  z_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_89), z_112), term_x_76);
  c_114 = t;
  t = SSL_concat_strings(c_114);
  r_112 = t;
  t = term_k_89;
  t = xtc_find_path_0_0(t);
  x_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_89), x_112), term_x_76);
  b_114 = t;
  t = SSL_concat_strings(b_114);
  u_112 = t;
  t = term_t_37;
  x_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_89), term_u_89), u_112), term_s_89), term_q_89), term_p_89), r_112);
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_89), term_u_89), u_112), term_s_89), term_q_89), term_p_89), r_112));
  t = s_15(x_113, y_113, t);
  t = term_s_56;
  u_113 = t;
  t = term_w_89;
  v_113 = t;
  t = term_x_89;
  t = s_15(u_113, v_113, t);
  t = term_l_55;
  q_113 = t;
  t = (ATerm) ATinsert(ATempty, term_y_89);
  t_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_55, (ATerm) ATinsert(ATempty, term_y_89));
  t = s_15(q_113, t_113, t);
  t = q_112;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
  f_116 = t;
  t = term_z_36;
  g_116 = t;
  t = term_i_55;
  h_116 = t;
  t = term_b_90;
  t = n_15(g_116, h_116, t);
  t = debug_1_0(i_36, t);
  t = f_116;
  return(t);
}
static ATerm i_36 (ATerm t)
{
  t = term_d_90;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm e_90 = t;
    int h_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
        t = term_z_36;
        k_115 = t;
        t = term_a_79;
        l_115 = t;
        t = term_i_90;
        t = n_15(k_115, l_115, t);
        t = term_l_90;
        t = xtc_find_0_0(t);
        h_115 = t;
        t = term_g_39;
        j_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_115, term_g_39);
        t = w_14(h_115, j_115, t);
        t = term_t_36;
        i_115 = t;
        t = SSL_exit(i_115);
        LocalPopChoice(h_90);
      }
    else
      {
        t = e_90;
      }
  }
  {
    ATerm n_90 = t;
    int q_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL;
        t = term_z_36;
        p_115 = t;
        t = term_d_79;
        q_115 = t;
        t = term_s_90;
        t = n_15(p_115, q_115, t);
        t = strc_version_0_0(t);
        t = term_t_36;
        o_115 = t;
        t = SSL_exit(o_115);
        LocalPopChoice(q_90);
      }
    else
      {
        t = n_90;
      }
  }
  {
    ATerm t_90 = t;
    int u_90 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_115 = NULL,v_115 = NULL,b_116 = NULL;
        t_115 = t;
        t = term_z_36;
        v_115 = t;
        t = term_i_55;
        b_116 = t;
        t = term_b_90;
        t = n_15(v_115, b_116, t);
        t = t_115;
        LocalPopChoice(u_90);
      }
    else
      {
        t = t_90;
        {
          ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL;
          t = term_i_37;
          d_116 = t;
          t = (ATerm) ATinsert(ATempty, term_w_90);
          e_116 = t;
          t = SSL_printnl(d_116, e_116);
          t = term_m_40;
          c_116 = t;
          t = SSL_exit(c_116);
          t = (ATerm) ATinsert(ATempty, term_w_90);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(h_36, t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  t = if_verbose1_1_0(m_36, t);
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = xtc_temp_files_1_0(q_36, t);
  return(t);
}
static ATerm m_36 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,m_116 = NULL;
  j_116 = t;
  t = term_i_37;
  k_116 = t;
  t = (ATerm) ATinsert(CheckATermList(j_116), term_z_90);
  m_116 = t;
  t = SSL_printnl(k_116, m_116);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(CheckATermList(j_116), term_z_90));
  return(t);
}
static ATerm q_36 (ATerm t)
{
  ATerm a_91 = t;
  int b_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL;
      t = term_z_36;
      o_116 = t;
      t = term_i_55;
      p_116 = t;
      t = term_b_90;
      t = n_15(o_116, p_116, t);
      n_116 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_116);
      LocalPopChoice(b_91);
    }
  else
    {
      t = a_91;
      t = term_t_58;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm s_36 (ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL;
  t = run_time_0_0(t);
  q_116 = t;
  t = term_i_37;
  r_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_91), q_116), term_c_91);
  s_116 = t;
  t = SSL_printnl(r_116, s_116);
  t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_91), q_116), term_c_91));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm f_91 = t;
  int h_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_116 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(j_36, l_36, t);
      t = if_verbose2_1_0(s_36, t);
      t = term_t_36;
      i_116 = t;
      t = SSL_exit(i_116);
      LocalPopChoice(h_91);
    }
  else
    {
      t = f_91;
      {
        ATerm t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL;
        t = run_time_0_0(t);
        t_116 = t;
        t = term_i_37;
        v_116 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_91), t_116), term_i_91);
        w_116 = t;
        t = SSL_printnl(v_116, w_116);
        t = term_m_40;
        u_116 = t;
        t = SSL_exit(u_116);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
