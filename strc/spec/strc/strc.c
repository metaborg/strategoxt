#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_F__OK_0;
static Symbol sym_R__OK_0;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_ErrorNumber_1;
static Symbol sym_Path_1;
static Symbol sym_WaitStatus_3;
static Symbol sym_Signal_3;
static Symbol sym_UnknownSignal_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Tool_1;
static Symbol sym_Repository_0;
static Symbol sym_Import_0;
static Symbol sym_Imported_1;
static Symbol sym_XTC_0;
static Symbol sym_FILE_1;
static Symbol sym_TempFiles_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Strategies_1;
static Symbol sym_Rules_1;
static Symbol sym_Specification_1;
static Symbol sym_SVar_1;
static Symbol sym_Path_2;
static Symbol sym_Call_2;
static Symbol sym_SDef_3;
static Symbol sym_RDef_3;
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
static ATerm term_m_96;
static ATerm term_j_96;
static ATerm term_i_96;
static ATerm term_f_96;
static ATerm term_e_96;
static ATerm term_y_95;
static ATerm term_s_95;
static ATerm term_q_95;
static ATerm term_d_95;
static ATerm term_a_95;
static ATerm term_z_94;
static ATerm term_y_94;
static ATerm term_t_94;
static ATerm term_s_94;
static ATerm term_r_94;
static ATerm term_q_94;
static ATerm term_p_94;
static ATerm term_o_94;
static ATerm term_n_94;
static ATerm term_m_94;
static ATerm term_l_94;
static ATerm term_k_94;
static ATerm term_j_94;
static ATerm term_i_94;
static ATerm term_h_94;
static ATerm term_g_94;
static ATerm term_f_94;
static ATerm term_e_94;
static ATerm term_d_94;
static ATerm term_s_93;
static ATerm term_r_93;
static ATerm term_p_93;
static ATerm term_m_93;
static ATerm term_i_93;
static ATerm term_q_92;
static ATerm term_p_92;
static ATerm term_k_92;
static ATerm term_f_92;
static ATerm term_m_91;
static ATerm term_l_91;
static ATerm term_k_91;
static ATerm term_i_91;
static ATerm term_h_91;
static ATerm term_k_88;
static ATerm term_j_88;
static ATerm term_g_88;
static ATerm term_e_88;
static ATerm term_l_87;
static ATerm term_i_87;
static ATerm term_f_87;
static ATerm term_e_87;
static ATerm term_c_87;
static ATerm term_b_87;
static ATerm term_a_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_x_86;
static ATerm term_w_86;
static ATerm term_v_86;
static ATerm term_r_86;
static ATerm term_k_86;
static ATerm term_i_86;
static ATerm term_h_86;
static ATerm term_c_86;
static ATerm term_b_86;
static ATerm term_y_85;
static ATerm term_w_85;
static ATerm term_v_85;
static ATerm term_q_85;
static ATerm term_n_85;
static ATerm term_m_85;
static ATerm term_l_85;
static ATerm term_i_85;
static ATerm term_f_85;
static ATerm term_c_85;
static ATerm term_b_85;
static ATerm term_z_84;
static ATerm term_u_84;
static ATerm term_t_84;
static ATerm term_s_84;
static ATerm term_r_84;
static ATerm term_q_84;
static ATerm term_n_84;
static ATerm term_m_84;
static ATerm term_k_84;
static ATerm term_j_84;
static ATerm term_i_84;
static ATerm term_h_84;
static ATerm term_m_83;
static ATerm term_i_83;
static ATerm term_g_83;
static ATerm term_f_83;
static ATerm term_b_83;
static ATerm term_a_83;
static ATerm term_v_82;
static ATerm term_u_82;
static ATerm term_k_82;
static ATerm term_i_82;
static ATerm term_h_82;
static ATerm term_g_82;
static ATerm term_f_82;
static ATerm term_b_82;
static ATerm term_x_81;
static ATerm term_v_81;
static ATerm term_u_81;
static ATerm term_s_81;
static ATerm term_d_80;
static ATerm term_c_80;
static ATerm term_b_80;
static ATerm term_z_79;
static ATerm term_u_79;
static ATerm term_s_79;
static ATerm term_r_79;
static ATerm term_q_79;
static ATerm term_n_79;
static ATerm term_i_79;
static ATerm term_y_76;
static ATerm term_u_76;
static ATerm term_s_76;
static ATerm term_a_76;
static ATerm term_z_75;
static ATerm term_y_75;
static ATerm term_u_75;
static ATerm term_h_75;
static ATerm term_g_75;
static ATerm term_f_75;
static ATerm term_e_75;
static ATerm term_b_75;
static ATerm term_w_74;
static ATerm term_h_74;
static ATerm term_e_74;
static ATerm term_d_74;
static ATerm term_c_74;
static ATerm term_b_74;
static ATerm term_a_74;
static ATerm term_w_73;
static ATerm term_v_73;
static ATerm term_t_73;
static ATerm term_r_73;
static ATerm term_q_73;
static ATerm term_l_73;
static ATerm term_k_73;
static ATerm term_j_73;
static ATerm term_h_73;
static ATerm term_g_73;
static ATerm term_f_73;
static ATerm term_e_73;
static ATerm term_d_73;
static ATerm term_a_73;
static ATerm term_z_72;
static ATerm term_y_72;
static ATerm term_u_72;
static ATerm term_b_72;
static ATerm term_w_71;
static ATerm term_v_71;
static ATerm term_u_71;
static ATerm term_t_71;
static ATerm term_q_71;
static ATerm term_z_70;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_w_70;
static ATerm term_v_70;
static ATerm term_u_70;
static ATerm term_s_70;
static ATerm term_r_70;
static ATerm term_q_70;
static ATerm term_p_70;
static ATerm term_o_70;
static ATerm term_n_70;
static ATerm term_h_68;
static ATerm term_g_68;
static ATerm term_f_68;
static ATerm term_e_68;
static ATerm term_d_68;
static ATerm term_c_68;
static ATerm term_z_67;
static ATerm term_y_67;
static ATerm term_x_67;
static ATerm term_l_67;
static ATerm term_j_67;
static ATerm term_g_67;
static ATerm term_f_67;
static ATerm term_d_67;
static ATerm term_b_67;
static ATerm term_a_67;
static ATerm term_z_66;
static ATerm term_x_66;
static ATerm term_w_66;
static ATerm term_k_66;
static ATerm term_b_65;
static ATerm term_q_64;
static ATerm term_j_64;
static ATerm term_i_64;
static ATerm term_o_63;
static ATerm term_n_63;
static ATerm term_i_63;
static ATerm term_b_63;
static ATerm term_y_62;
static ATerm term_x_62;
static ATerm term_v_62;
static ATerm term_u_62;
static ATerm term_t_62;
static ATerm term_g_62;
static ATerm term_f_62;
static ATerm term_e_62;
static ATerm term_a_62;
static ATerm term_o_61;
static ATerm term_e_61;
static ATerm term_d_61;
static ATerm term_y_60;
static ATerm term_w_60;
static ATerm term_u_60;
static ATerm term_s_60;
static ATerm term_q_60;
static ATerm term_p_60;
static ATerm term_o_60;
static ATerm term_k_60;
static ATerm term_j_60;
static ATerm term_c_60;
static ATerm term_y_59;
static ATerm term_x_59;
static ATerm term_p_59;
static ATerm term_w_58;
static ATerm term_u_58;
static ATerm term_t_58;
static ATerm term_s_58;
static ATerm term_r_58;
static ATerm term_a_58;
static ATerm term_z_57;
static ATerm term_s_57;
static ATerm term_r_57;
static ATerm term_n_57;
static ATerm term_m_57;
static ATerm term_l_57;
static ATerm term_k_57;
static ATerm term_j_57;
static ATerm term_r_56;
static ATerm term_q_56;
static ATerm term_p_56;
static ATerm term_o_56;
static ATerm term_n_56;
static ATerm term_m_56;
static ATerm term_l_56;
static ATerm term_k_56;
static ATerm term_j_56;
static ATerm term_i_56;
static ATerm term_h_56;
static ATerm term_g_56;
static ATerm term_f_56;
static ATerm term_x_55;
static ATerm term_r_55;
static ATerm term_j_55;
static ATerm term_i_55;
static ATerm term_h_55;
static ATerm term_g_55;
static ATerm term_e_55;
static ATerm term_d_55;
static ATerm term_c_55;
static ATerm term_b_55;
static ATerm term_y_54;
static ATerm term_v_54;
static ATerm term_u_54;
static ATerm term_t_54;
static ATerm term_q_54;
static ATerm term_p_54;
static ATerm term_o_54;
static ATerm term_n_54;
static ATerm term_m_54;
static ATerm term_l_54;
static ATerm term_k_54;
static ATerm term_j_54;
static ATerm term_i_54;
static ATerm term_h_54;
static ATerm term_f_54;
static ATerm term_e_54;
static ATerm term_c_54;
static ATerm term_b_54;
static ATerm term_a_54;
static ATerm term_x_53;
static ATerm term_w_53;
static ATerm term_v_53;
static ATerm term_u_53;
static ATerm term_t_53;
static ATerm term_s_53;
static ATerm term_r_53;
static ATerm term_q_53;
static ATerm term_p_53;
static ATerm term_o_53;
static ATerm term_n_53;
static ATerm term_m_53;
static ATerm term_l_53;
static ATerm term_k_53;
static ATerm term_j_53;
static ATerm term_i_53;
static ATerm term_h_53;
static ATerm term_g_53;
static ATerm term_f_53;
static ATerm term_e_53;
static ATerm term_d_53;
static ATerm term_c_53;
static ATerm term_b_53;
static ATerm term_a_53;
static ATerm term_z_52;
static ATerm term_y_52;
static ATerm term_x_52;
static ATerm term_w_52;
static ATerm term_v_52;
static ATerm term_u_52;
static ATerm term_t_52;
static ATerm term_s_52;
static ATerm term_r_52;
static ATerm term_q_52;
static ATerm term_p_52;
static ATerm term_o_52;
static ATerm term_n_52;
static ATerm term_m_52;
static ATerm term_l_52;
static ATerm term_k_52;
static ATerm term_i_52;
static ATerm term_h_52;
static ATerm term_g_52;
static ATerm term_e_52;
static ATerm term_d_52;
static ATerm term_c_52;
static ATerm term_b_52;
static ATerm term_a_52;
static ATerm term_z_51;
static ATerm term_y_51;
static ATerm term_x_51;
static ATerm term_w_51;
static ATerm term_v_51;
static ATerm term_u_51;
static ATerm term_t_51;
static ATerm term_s_51;
static ATerm term_r_51;
static ATerm term_p_51;
static ATerm term_o_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_j_51;
static ATerm term_i_51;
static ATerm term_h_51;
static ATerm term_f_51;
static ATerm term_e_51;
static ATerm term_d_51;
static ATerm term_c_51;
static ATerm term_b_51;
static ATerm term_y_50;
static ATerm term_u_50;
static ATerm term_t_50;
static ATerm term_s_50;
static ATerm term_r_50;
static ATerm term_q_50;
static ATerm term_p_50;
static ATerm term_j_50;
static ATerm term_g_50;
static ATerm term_f_50;
static ATerm term_e_50;
static ATerm term_u_49;
static ATerm term_t_49;
static ATerm term_r_49;
static ATerm term_q_49;
static ATerm term_a_49;
static ATerm term_y_48;
static ATerm term_u_48;
static ATerm term_r_48;
static ATerm term_h_48;
static ATerm term_g_48;
static ATerm term_f_48;
static ATerm term_e_48;
static ATerm term_w_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_t_47;
static ATerm term_s_47;
static ATerm term_j_47;
static ATerm term_i_47;
static ATerm term_e_47;
static ATerm term_d_47;
static ATerm term_c_47;
static ATerm term_b_47;
static ATerm term_u_46;
static ATerm term_t_46;
static ATerm term_s_46;
static ATerm term_r_46;
static ATerm term_j_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_e_46;
static ATerm term_s_45;
static ATerm term_r_45;
static ATerm term_l_45;
static ATerm term_k_45;
static ATerm term_f_45;
static ATerm term_b_45;
static ATerm term_a_45;
static ATerm term_x_44;
static ATerm term_w_44;
static ATerm term_t_44;
static ATerm term_p_44;
static ATerm term_a_44;
static ATerm term_x_43;
static ATerm term_w_43;
static ATerm term_t_43;
static ATerm term_r_43;
static ATerm term_o_43;
static ATerm term_n_43;
static ATerm term_i_43;
static ATerm term_h_43;
static ATerm term_g_43;
static ATerm term_f_43;
static ATerm term_a_43;
static ATerm term_y_42;
static ATerm term_u_42;
static ATerm term_t_42;
static ATerm term_q_42;
static ATerm term_p_42;
static ATerm term_o_42;
static ATerm term_l_42;
static ATerm term_h_42;
static ATerm term_f_42;
static ATerm term_d_42;
static ATerm term_b_42;
static ATerm term_y_41;
static ATerm term_t_41;
static ATerm term_q_41;
static ATerm term_n_41;
static ATerm term_m_41;
static ATerm term_l_41;
static ATerm term_x_40;
static ATerm term_v_40;
static ATerm term_t_40;
static ATerm term_r_40;
static ATerm term_k_40;
static ATerm term_j_40;
static ATerm term_i_40;
static ATerm term_f_40;
static ATerm term_c_40;
static ATerm term_b_40;
static ATerm term_y_39;
static ATerm term_x_39;
static ATerm term_w_39;
static ATerm term_s_39;
static ATerm term_p_39;
static ATerm term_l_39;
static ATerm term_h_39;
static ATerm term_g_39;
static ATerm term_f_39;
static ATerm term_e_39;
static ATerm term_d_39;
static ATerm term_c_39;
static ATerm term_b_39;
static ATerm term_a_39;
static ATerm term_y_38;
static ATerm term_u_38;
static ATerm term_t_38;
static ATerm term_s_38;
static ATerm term_r_38;
static ATerm term_q_38;
static ATerm term_p_38;
static ATerm term_n_38;
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_h_38;
static ATerm term_g_38;
static ATerm term_f_38;
static ATerm term_e_38;
static ATerm term_d_38;
static ATerm term_u_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_e_38);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_n_38);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_r_38);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_c_39);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_e_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_g_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_f_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_b_40);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_f_43);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_h_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_r_43);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_w_43);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_k_45);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_50, term_y_38, term_f_50);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_50, term_g_38, term_p_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_50, term_t_41, term_s_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_50, term_y_50, term_b_51);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_51, term_e_51, term_f_51);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_51, term_j_51, term_m_51);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_51, term_p_51, term_r_51);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_51, term_u_51, term_v_51);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_51, term_y_51, term_z_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_c_52, term_d_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_52, term_h_52, term_i_52);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_52, term_w_44, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_t_52, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_f_53, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_53, term_j_53, term_k_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_v_53, term_w_53);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_54, term_b_54, term_c_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_h_54, term_i_54);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_54, term_l_54, term_m_54);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_54, term_e_47, term_p_54);
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_54, term_u_54, term_v_54);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_55, term_c_55, term_d_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_55, term_h_55, term_i_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_f_56);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("on", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym__3, term_h_56, term_i_56, term_j_56);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym__3, term_l_56, term_m_56, term_j_56);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("off", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym__3, term_o_56, term_p_56, term_q_56);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__3, term_j_57, term_k_57, term_j_56);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_r_57);
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_u_58);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_d_61);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym__2, term_p_60, term_c_60);
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_e_62);
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_t_62);
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_i_63);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_p_70);
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_z_72);
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(sym__2, term_e_75, term_f_75);
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" [ ", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" ]\n", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories \n", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_u_37);
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_37);
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(sym__2, term_z_79, term_p_39);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_82));
  term_f_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_u_82);
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(sym__2, term_w_71, term_f_83);
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(sym__2, term_w_71, term_k_82);
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_p_39);
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym__2, term_g_39, term_p_39);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(sym__2, term_e_62, term_p_39);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(sym__2, term_r_57, term_p_39);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(sym__2, term_k_45, term_p_39);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(sym__2, term_a_87, term_p_39);
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_f_87));
  term_f_87 = (ATerm) ATmakeAppl(sym__2, term_e_87, term_p_39);
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(sym__2, term_l_87, term_p_39);
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(sym__2, term_i_63, term_p_39);
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(sym__2, term_h_91, term_p_39);
  ATprotect(&(term_k_91));
  term_k_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_91));
  term_m_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_92));
  term_f_92 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_92));
  term_q_92 = (ATerm) ATmakeAppl(sym__3, term_e_75, term_f_75, (ATerm) ATempty);
  ATprotect(&(term_i_93));
  term_i_93 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_a_87);
  ATprotect(&(term_m_93));
  term_m_93 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_h_91);
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_93));
  term_r_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_93));
  term_s_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_y_38);
  ATprotect(&(term_e_94));
  term_e_94 = (ATerm) ATmakeAppl(sym__2, term_r_43, term_u_37);
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(sym__2, term_w_43, term_y_50);
  ATprotect(&(term_g_94));
  term_g_94 = (ATerm) ATmakeAppl(sym__2, term_t_62, (ATerm) ATempty);
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_i_94));
  term_i_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_k_94));
  term_k_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_n_94));
  term_n_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib_opt", 0, ATtrue));
  ATprotect(&(term_p_94));
  term_p_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_q_94));
  term_q_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego_opt", 0, ATtrue));
  ATprotect(&(term_r_94));
  term_r_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_s_94));
  term_s_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATempty);
  ATprotect(&(term_y_94));
  term_y_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_z_94));
  term_z_94 = (ATerm) ATmakeAppl(sym__2, term_u_58, term_y_94);
  ATprotect(&(term_a_95));
  term_a_95 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_x_55);
  ATprotect(&(term_d_95));
  term_d_95 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_q_95));
  term_q_95 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_e_87);
  ATprotect(&(term_s_95));
  term_s_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_y_95));
  term_y_95 = (ATerm) ATmakeAppl(sym__2, term_d_38, term_l_87);
  ATprotect(&(term_e_96));
  term_e_96 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_i_96));
  term_i_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_j_96));
  term_j_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_96));
  term_m_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_143 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm s_14 (ATerm l_24, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm t_14 (ATerm j_24, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm u_14 (ATerm t_74, ATerm s_74, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm w_144 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm z_155 (ATerm), ATerm a_156 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm z_144 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
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
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm save_as_1_0 (ATerm k_114 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm x_144 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm m_154 (ATerm), ATerm n_154 (ATerm), ATerm t);
static ATerm y_14 (ATerm v_79, ATerm w_79, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_145 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm v_155 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm x_23, ATerm y_23, ATerm t);
ATerm foldr_3_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t);
static ATerm h_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm n_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm f_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm a_145 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm b_145 (ATerm), ATerm t);
static ATerm g_21 (ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm y_144 (ATerm), ATerm t);
static ATerm h_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm v_14 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm w_14 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm x_14 (ATerm e_126 (ATerm), ATerm l_333, ATerm w_42, ATerm t);
static ATerm a_15 (ATerm d_115 (ATerm), ATerm w_24, ATerm u_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm t_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm o_154 (ATerm), ATerm t);
static ATerm u_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm e_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm j_114 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm h_22 (ATerm t);
static ATerm i_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm w_143 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm s_137 (ATerm), ATerm t);
static ATerm k_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm b_15 (ATerm z_23, ATerm t);
static ATerm s_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm d_27 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm d_16 (ATerm r_65, ATerm s_65, ATerm t);
static ATerm c_15 (ATerm d_64, ATerm e_64, ATerm t);
ATerm end_scope_1_0 (ATerm a_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_114 (ATerm), ATerm t);
static ATerm i_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm n_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm z_154 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm u_143 (ATerm), ATerm t);
static ATerm e_15 (ATerm h_62, ATerm i_62, ATerm t);
static ATerm g_15 (ATerm n_62, ATerm o_62, ATerm t);
static ATerm h_15 (ATerm k_72, ATerm m_72, ATerm o_72, ATerm q_72, ATerm l_72, ATerm n_72, ATerm p_72, ATerm r_72, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm c_126 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm f_127 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_126 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm k_136 (ATerm), ATerm t);
static ATerm t_27 (ATerm t);
static ATerm k_15 (ATerm a_55, ATerm w_481, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_15 (ATerm v_74, ATerm u_74, ATerm t);
static ATerm m_15 (ATerm u_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm g_74 (ATerm i_73, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm n_15 (ATerm m_43, ATerm z_344, ATerm t);
static ATerm x_28 (ATerm t);
ATerm get_all_warnings_0_0 (ATerm t);
static ATerm y_28 (ATerm t);
ATerm get_default_warnings_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_126 (ATerm), ATerm t);
ATerm warning_exists_0_0 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm v_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm m_30 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm y_143 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm x_143 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm z_143 (ATerm), ATerm t);
static ATerm q_15 (ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm x_48, ATerm w_48, ATerm t);
static ATerm r_15 (ATerm v_130 (ATerm), ATerm t_48, ATerm s_48, ATerm t);
static ATerm v_30 (ATerm t);
static ATerm s_15 (ATerm v_64, ATerm w_64, ATerm x_64, ATerm t);
ATerm map_1_0 (ATerm m_126 (ATerm), ATerm t);
static ATerm t_15 (ATerm g_140 (ATerm), ATerm f_65, ATerm e_65, ATerm t);
static ATerm v_84 (ATerm l_84, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_15 (ATerm s_42, ATerm t);
static ATerm v_15 (ATerm o_58, ATerm p_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_86 (ATerm g_85, ATerm t);
static ATerm p_86 (ATerm o_85, ATerm p_85, ATerm r_85, ATerm t);
static ATerm q_86 (ATerm z_85, ATerm a_86, ATerm d_86, ATerm t);
static ATerm w_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_134 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_92 (ATerm j_91, ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm x_15 (ATerm w_78, ATerm x_78, ATerm t);
static ATerm y_15 (ATerm z_78, ATerm y_78, ATerm t);
static ATerm z_15 (ATerm c_58, ATerm d_58, ATerm t);
ATerm at_end_1_0 (ATerm b_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_95 (ATerm b_95, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_16 (ATerm a_79, ATerm b_79, ATerm t);
static ATerm w_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm z_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm g_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm k_34 (ATerm t);
static ATerm l_34 (ATerm t);
static ATerm p_34 (ATerm t);
static ATerm q_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm t_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
static ATerm o_35 (ATerm t);
static ATerm p_35 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
static ATerm t_35 (ATerm t);
static ATerm u_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm z_35 (ATerm t);
static ATerm a_36 (ATerm t);
static ATerm b_36 (ATerm t);
static ATerm d_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm b_16 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm c_16 (ATerm x_68, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_126 (ATerm), ATerm t);
static ATerm f_36 (ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm i_36 (ATerm t);
static ATerm j_36 (ATerm t);
static ATerm l_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_16 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_148 (ATerm), ATerm t);
static ATerm n_36 (ATerm t);
static ATerm p_36 (ATerm t);
static ATerm s_36 (ATerm t);
static ATerm v_36 (ATerm t);
ATerm parse_options_3_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm r_148 (ATerm), ATerm t);
static ATerm g_16 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
static ATerm h_16 (ATerm q_68, ATerm r_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm k_65, ATerm t);
static ATerm i_16 (ATerm t_78, ATerm u_78, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm j_16 (ATerm s_56, ATerm t_56, ATerm t);
ATerm strc_version_number_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm a_37 (ATerm t);
static ATerm e_37 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm h_37 (ATerm t);
static ATerm j_37 (ATerm t);
static ATerm k_37 (ATerm t);
static ATerm l_37 (ATerm t);
static ATerm p_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL,i_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = j_133(t);
    }
  else
    {
      ATerm n_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_0 = ATgetFirst((ATermList) t);
          i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = foldr_2_0(j_133, k_133, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_0, n_0);
      t = k_133(t);
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm l_0 (ATerm t)
{
  ATerm e_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(e_1, i_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_0 = NULL,a_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(j_0, l_0, t);
  v_0 = t;
  t = SSL_TicksToSeconds(v_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm y_37 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_d_38;
        h_1 = t;
        t = term_e_38;
        k_1 = t;
        t = term_f_38;
        t = d_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_g_38);
        t = geq_0_0(t);
        t = b_1;
        t = v_143(t);
        LocalPopChoice(c_38);
      }
    else
      {
        t = y_37;
        t = b_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  t = term_h_38;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_i_38);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_j_38;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_h_38;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm s_14 (ATerm l_24, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm k_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_d_38;
        z_1 = t;
        t = term_n_38;
        c_2 = t;
        t = term_p_38;
        t = d_16(z_1, c_2, t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = k_38;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_q_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_d_38;
  s_1 = t;
  t = term_r_38;
  t_1 = t;
  t = term_s_38;
  t = d_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_n_38), l_24), term_u_38), term_t_38));
  t = if_verbose3_1_0(j_1, t);
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
      t = y_14(q_1, r_1, t);
      t = term_y_38;
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
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_h_38;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_39);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_h_38;
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, b_3);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = b_3;
  return(t);
}
static ATerm t_14 (ATerm j_24, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_d_38;
  u_2 = t;
  t = term_c_39;
  x_2 = t;
  t = term_d_39;
  t = d_16(u_2, x_2, t);
  o_2 = t;
  t = term_d_38;
  s_2 = t;
  t = term_e_39;
  t_2 = t;
  t = term_f_39;
  t = d_16(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_n_38), j_24), term_g_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, m_2);
  t = if_verbose3_1_0(a_2, t);
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      ATerm i_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
      t = y_14(q_2, r_2, t);
      t = term_y_38;
      i_3 = t;
      t = SSL_exit(i_3);
      return(t);
    }
    t = fork_and_wait_1_0(b_2, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = if_verbose1_1_0(k_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      s_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(s_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(r_3, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  t = term_h_38;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_h_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(o_3), term_h_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_d_38;
      m_3 = t;
      t = term_g_39;
      n_3 = t;
      t = term_l_39;
      t = d_16(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
      t = profile_p__2_0(i_2, j_2, t);
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
static ATerm u_14 (ATerm t_74, ATerm s_74, ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(t_74, s_74);
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      t = get_errno_0_0(t);
      t = term_p_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, t_74, s_74);
      t = l_15(t_74, s_74, t);
      t = SSL_remove(t_74);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,l_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_s_39;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_s_39);
        t = l_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_s_39;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = x_0(t);
              l_2 = t;
              {
                ATerm v_39 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_2 = NULL;
                    n_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_2;
                      }
                    else
                      {
                        t = n_2;
                        if((l_4 != t))
                          {
                            _fail(t);
                          }
                        t = n_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_39;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = u_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              t = i_4;
              t = x_0(t);
              if((l_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  u_4 = t;
  t = term_w_39;
  r_4 = t;
  t = term_x_39;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_y_39);
  s_4 = t;
  t = u_4;
  t = comp_0_2(r_4, s_4, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_b_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_c_40;
  w_4 = t;
  t = a_5;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_d_38;
        d_5 = t;
        t = term_f_40;
        e_5 = t;
        t = term_i_40;
        t = d_16(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(e_40);
        t = (ATerm) ATinsert(ATempty, term_f_40);
      }
    else
      {
        t = d_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_d_38;
  b_5 = t;
  t = term_b_40;
  c_5 = t;
  t = term_j_40;
  t = d_16(b_5, c_5, t);
  t = foldr_3_0(v_2, conc_0_0, w_2, t);
  z_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_4), z_4);
  t = concat_0_0(t);
  x_4 = t;
  t = a_5;
  t = comp_0_2(w_4, x_4, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = term_h_38;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_k_40);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = y_5;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = if_verbose1_1_0(k_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  h_6 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_6 = ATgetArgument(t, 0);
            {
              ATerm d_3 = NULL,q_0 = NULL;
              t = SSLgetAnnotations(h_6);
              d_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
              q_0 = t;
              t = SSLsetAnnotations(q_0, d_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_6;
          }
        LocalPopChoice(m_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = l_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_7 = ATgetArgument(t, 0);
            {
              ATerm n_4 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(g_6);
              n_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, n_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_6;
          }
        LocalPopChoice(o_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = n_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_8 = ATgetArgument(t, 0);
            {
              ATerm h_5 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(f_6);
              h_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_8);
              c_1 = t;
              t = SSLsetAnnotations(c_1, h_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_6;
          }
        LocalPopChoice(q_40);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = p_40;
        t = xtc_transform_term_2_0(c_7, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(d_7, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
  b_6 = t;
  t = term_h_38;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_r_40);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(b_6), term_r_40));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_v_40);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_v_40);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm c_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(r_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
              s_0 = t;
              t = SSLsetAnnotations(s_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_6;
          }
        LocalPopChoice(f_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = c_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm i_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_7 = ATgetArgument(t, 0);
            {
              ATerm c_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(q_6);
              c_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_7);
              y_0 = t;
              t = SSLsetAnnotations(y_0, c_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_6;
          }
        LocalPopChoice(k_41);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = i_41;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_v_40);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_v_40);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_v_40);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_v_40);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_t_41;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = save_as_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_v_40);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_v_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_d_42;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_d_42;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(c_3, t);
  t = profile_p__2_0(f_3, g_3, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  t = term_h_38;
  h_9 = t;
  t = (ATerm) ATinsert(ATempty, term_h_42);
  i_9 = t;
  t = SSL_printnl(h_9, i_9);
  t = g_9;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,m_9 = NULL;
  j_9 = t;
  t = term_h_38;
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(j_9), term_l_42);
  m_9 = t;
  t = SSL_printnl(k_9, m_9);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(j_9), term_l_42));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_p_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm v_10 = NULL;
  t = pass_verbose_0_0(t);
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(v_10), term_t_42);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_t_42);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_u_42;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL;
  ATerm v_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_d_38;
      b_9 = t;
      t = term_f_40;
      c_9 = t;
      t = term_i_40;
      t = d_16(b_9, c_9, t);
      t = a_9;
      LocalPopChoice(x_42);
      {
        ATerm f_9 = NULL;
        f_9 = t;
        t = if_verbose2_1_0(i_7, t);
        {
          static ATerm l_7 (ATerm t);
          static ATerm l_7 (ATerm t)
          {
            ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
            m_5 = t;
            t = term_y_42;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_a_43);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            n_9 = t;
            {
              ATerm b_43 = t;
              int c_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
                  t = term_d_38;
                  h_10 = t;
                  t = term_f_43;
                  i_10 = t;
                  t = term_g_43;
                  t = d_16(h_10, i_10, t);
                  a_10 = t;
                  t = term_d_38;
                  f_10 = t;
                  t = term_h_43;
                  g_10 = t;
                  t = term_i_43;
                  t = d_16(f_10, g_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, e_10);
                  {
                    ATerm j_43 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm j_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            j_10 = ATgetArgument(t, 0);
                            if((j_10 != ATgetArgument(t, 1)))
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
                        t = j_43;
                      }
                  }
                  LocalPopChoice(c_43);
                }
              else
                {
                  t = b_43;
                  {
                    ATerm k_10 = NULL,l_10 = NULL;
                    t = term_d_38;
                    k_10 = t;
                    t = term_f_43;
                    l_10 = t;
                    t = term_g_43;
                    t = d_16(k_10, l_10, t);
                    t = debug_1_0(p_7, t);
                    _fail(t);
                  }
                }
            }
            t = n_9;
            {
              static ATerm s_7 (ATerm t);
              static ATerm s_7 (ATerm t)
              {
                t = get_outfile_1_0(t_7, t);
                if(((x_8 != NULL) && (x_8 != t)))
                  _fail(t);
                else
                  x_8 = t;
                return(t);
              }
              t = copy_to_1_0(s_7, t);
            }
            {
              ATerm k_43 = t;
              int l_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_10 = NULL,t_10 = NULL;
                  t_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      {
                        ATerm p_5 = NULL,b_4 = NULL;
                        t = SSLgetAnnotations(t_10);
                        p_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, s_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, p_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = t_10;
                    }
                  LocalPopChoice(l_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = k_43;
                  t = xtc_transform_term_2_0(x_7, z_7, t);
                }
            }
            {
              static ATerm a_8 (ATerm t);
              static ATerm a_8 (ATerm t)
              {
                t = get_outfile_1_0(c_8, t);
                if(((z_8 != NULL) && (z_8 != t)))
                  _fail(t);
                else
                  z_8 = t;
                return(t);
              }
              t = copy_to_1_0(a_8, t);
            }
            o_9 = t;
            t = term_h_38;
            p_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_8)), term_o_43), not_null(x_8)), term_n_43));
            q_9 = t;
            t = SSL_printnl(p_9, q_9);
            t = o_9;
            return(t);
          }
          t = profile_p__2_0(j_7, l_7, t);
        }
        t = f_9;
      }
    }
  else
    {
      t = v_42;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm w_144 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_d_38;
        i_11 = t;
        t = term_r_43;
        j_11 = t;
        t = term_t_43;
        t = d_16(i_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_y_38);
        t = geq_0_0(t);
        t = d_11;
        t = w_144(t);
        LocalPopChoice(q_43);
      }
    else
      {
        t = p_43;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm z_155 (ATerm), ATerm a_156 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = o_11;
        t = z_155(t);
        r_11 = t;
        t = term_d_38;
        u_11 = t;
        t = term_w_43;
        v_11 = t;
        t = term_x_43;
        t = d_16(u_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = o_11;
        t = a_156(t);
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        t = o_11;
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_v_40);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_v_40);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_9 = NULL;
  t = pass_verbose_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(CheckATermList(d_9), term_v_40);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_v_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_13;
        {
          ATerm d_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  {
                    ATerm v_7 = NULL,e_4 = NULL;
                    t = SSLgetAnnotations(g_13);
                    v_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, e_7);
                    e_4 = t;
                    t = SSLsetAnnotations(e_4, v_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = g_13;
                }
              LocalPopChoice(g_44);
              t = xtc_transform_file_2_0(e_8, f_8, t);
            }
          else
            {
              t = d_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = g_13;
        {
          ATerm j_44 = t;
          int l_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  {
                    ATerm t_9 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(g_13);
                    t_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
                    f_4 = t;
                    t = SSLsetAnnotations(f_4, t_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = g_13;
                }
              LocalPopChoice(l_44);
              t = xtc_transform_file_2_0(j_8, k_8, t);
            }
          else
            {
              t = j_44;
              t = xtc_transform_term_2_0(l_8, m_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  u_13 = t;
  t = term_p_44;
  s_13 = t;
  t = u_13;
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL,y_13 = NULL;
        t = term_d_38;
        v_13 = t;
        t = term_f_40;
        y_13 = t;
        t = term_i_40;
        t = d_16(v_13, y_13, t);
        t = u_13;
        LocalPopChoice(r_44);
        t = (ATerm) ATinsert(ATempty, term_t_44);
      }
    else
      {
        t = q_44;
        t = (ATerm) ATempty;
      }
  }
  t_13 = t;
  t = u_13;
  t = comp_0_2(s_13, t_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm z_144 (ATerm), ATerm t)
{
  ATerm a_14 = NULL;
  a_14 = t;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
        t = term_d_38;
        e_14 = t;
        t = term_r_43;
        f_14 = t;
        t = term_t_43;
        t = d_16(e_14, f_14, t);
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_14, term_w_44);
        t = geq_0_0(t);
        t = a_14;
        t = z_144(t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        t = a_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,h_18 = NULL;
  c_18 = t;
  t = term_h_38;
  d_18 = t;
  t = (ATerm) ATinsert(ATempty, term_x_44);
  h_18 = t;
  t = SSL_printnl(d_18, h_18);
  t = c_18;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm l_18 = NULL;
  t = if_verbose3_1_0(s_8, t);
  t = olevel_2_0(y_8, l_9, t);
  t = olevel_2_0(z_9, d_10, t);
  t = olevel_2_0(a_11, f_11, t);
  l_18 = t;
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_21 = ATgetArgument(t, 0);
            {
              ATerm j_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(l_18);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, j_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_18;
          }
        LocalPopChoice(z_44);
        t = xtc_transform_file_2_0(s_12, t_12, t);
      }
    else
      {
        t = y_44;
        t = xtc_transform_term_2_0(u_12, v_12, t);
      }
  }
  t = olevel_2_0(w_12, x_12, t);
  t = olevel_2_0(x_13, b_14, t);
  t = olevel_2_0(z_14, d_15, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_h_38;
  j_18 = t;
  t = (ATerm) ATinsert(CheckATermList(i_18), term_a_45);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(i_18), term_a_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,q_18 = NULL;
  m_18 = t;
  t = term_d_38;
  n_18 = t;
  t = term_w_43;
  q_18 = t;
  t = term_x_43;
  t = d_16(n_18, q_18, t);
  t = debug_1_0(u_8, t);
  t = m_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_18 = ATgetArgument(t, 0);
            {
              ATerm x_9 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(r_18);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_18);
              q_4 = t;
              t = SSLsetAnnotations(q_4, x_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_18;
          }
        LocalPopChoice(e_45);
        t = xtc_transform_file_2_0(r_9, s_9, t);
      }
    else
      {
        t = d_45;
        t = xtc_transform_term_2_0(u_9, v_9, t);
      }
  }
  t = if_keep1_1_0(w_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_v_40);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm a_19 = NULL;
  t = pass_verbose_0_0(t);
  a_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), term_v_40);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = save_as_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_19;
        {
          ATerm j_45 = t;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL,b_11 = NULL;
              t = term_d_38;
              z_10 = t;
              t = term_k_45;
              b_11 = t;
              t = term_l_45;
              t = d_16(z_10, b_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_45;
            }
        }
        t = v_19;
        {
          ATerm n_45 = t;
          int p_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  k_11 = ATgetArgument(t, 0);
                  {
                    ATerm z_11 = NULL,u_5 = NULL;
                    t = SSLgetAnnotations(v_19);
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, k_11);
                    u_5 = t;
                    t = SSLsetAnnotations(u_5, z_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = v_19;
                }
              LocalPopChoice(p_45);
              t = xtc_transform_file_2_0(m_10, q_10, t);
            }
          else
            {
              t = n_45;
              t = xtc_transform_term_2_0(r_10, u_10, t);
            }
        }
        t = if_keep2_1_0(x_10, t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = v_19;
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_r_45;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_v_40);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_r_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm q_11 = NULL;
  t = pass_verbose_0_0(t);
  q_11 = t;
  t = (ATerm) ATinsert(CheckATermList(q_11), term_v_40);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = save_as_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_s_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  z_19 = t;
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(z_19);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_20);
              v_5 = t;
              t = SSLsetAnnotations(v_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_19;
          }
        LocalPopChoice(w_45);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = v_45;
        t = xtc_transform_term_2_0(p_11, w_11, t);
      }
  }
  t = if_keep6_1_0(x_11, t);
  y_19 = t;
  {
    ATerm z_45 = t;
    int b_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_20 = ATgetArgument(t, 0);
            {
              ATerm o_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(y_19);
              o_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_20);
              w_5 = t;
              t = SSLsetAnnotations(w_5, o_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_19;
          }
        LocalPopChoice(b_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = z_45;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  x_19 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_20 = ATgetArgument(t, 0);
            {
              ATerm z_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(x_19);
              z_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_20);
              x_5 = t;
              t = SSLsetAnnotations(x_5, z_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_19;
          }
        LocalPopChoice(d_46);
        t = xtc_transform_file_2_0(n_12, p_12, t);
      }
    else
      {
        t = c_46;
        t = xtc_transform_term_2_0(q_12, r_12, t);
      }
  }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_v_40);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_v_40);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_v_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm u_20 = NULL;
  t = pass_verbose_0_0(t);
  u_20 = t;
  t = (ATerm) ATinsert(CheckATermList(u_20), term_v_40);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm b_21 = NULL;
  t = pass_verbose_0_0(t);
  b_21 = t;
  t = (ATerm) ATinsert(CheckATermList(b_21), term_v_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_v_40);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_v_40);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_v_40);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  r_21 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_21 = ATgetArgument(t, 0);
            {
              ATerm q_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(r_21);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_21);
              i_6 = t;
              t = SSLsetAnnotations(i_6, q_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_21;
          }
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(y_12, a_13, t);
      }
    else
      {
        t = k_46;
        t = xtc_transform_term_2_0(b_13, c_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  q_21 = t;
  {
    ATerm m_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_22 = ATgetArgument(t, 0);
            {
              ATerm z_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(q_21);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, z_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_21;
          }
        LocalPopChoice(o_46);
        t = xtc_transform_file_2_0(e_13, f_13, t);
      }
    else
      {
        t = m_46;
        t = xtc_transform_term_2_0(i_13, k_13, t);
      }
  }
  p_21 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_22 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(p_21);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_21;
          }
        LocalPopChoice(q_46);
        t = xtc_transform_file_2_0(m_13, n_13, t);
      }
    else
      {
        t = p_46;
        t = xtc_transform_term_2_0(o_13, p_13, t);
      }
  }
  t = if_keep4_1_0(r_13, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm z_21 = NULL;
  t = pass_verbose_0_0(t);
  z_21 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), term_v_40);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_v_40);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm n_22 = NULL;
  t = pass_verbose_0_0(t);
  n_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), term_v_40);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm o_22 = NULL;
  t = pass_verbose_0_0(t);
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), term_v_40);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm x_22 = NULL;
  t = pass_verbose_0_0(t);
  x_22 = t;
  t = (ATerm) ATinsert(CheckATermList(x_22), term_v_40);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm z_22 = NULL;
  t = pass_verbose_0_0(t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_22), term_v_40);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = save_as_1_0(w_13, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm a_23 = NULL,d_23 = NULL;
  d_23 = t;
  {
    ATerm v_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_23 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(d_23);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
              l_6 = t;
              t = SSLsetAnnotations(l_6, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_23;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(c_14, g_14, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(h_14, i_14, t);
      }
  }
  a_23 = t;
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_23 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(a_23);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
              s_6 = t;
              t = SSLsetAnnotations(s_6, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_23;
          }
        LocalPopChoice(a_47);
        t = xtc_transform_file_2_0(k_14, l_14, t);
      }
    else
      {
        t = z_46;
        t = xtc_transform_term_2_0(m_14, o_14, t);
      }
  }
  t = if_keep2_1_0(p_14, t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm l_23 = NULL;
  t = pass_verbose_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_v_40);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_v_40);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm u_23 = NULL;
  t = pass_verbose_0_0(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), term_v_40);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm w_23 = NULL;
  t = pass_verbose_0_0(t);
  w_23 = t;
  t = (ATerm) ATinsert(CheckATermList(w_23), term_v_40);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = save_as_1_0(q_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_e_47;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  {
    ATerm f_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_25 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(h_24);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_24;
          }
        LocalPopChoice(h_47);
        t = xtc_transform_file_2_0(f_15, j_15, t);
      }
    else
      {
        t = f_47;
        t = xtc_transform_term_2_0(o_15, p_15, t);
      }
  }
  t = if_keep5_1_0(k_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(m_16, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm f_25 = NULL;
  t = pass_verbose_0_0(t);
  f_25 = t;
  t = (ATerm) ATinsert(CheckATermList(f_25), term_v_40);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm g_25 = NULL;
  t = pass_verbose_0_0(t);
  g_25 = t;
  t = (ATerm) ATinsert(CheckATermList(g_25), term_v_40);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = save_as_1_0(o_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_j_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_t_41;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,l_25 = NULL;
  l_25 = t;
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(l_25);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(l_47);
        t = xtc_transform_file_2_0(s_16, t_16, t);
      }
    else
      {
        t = k_47;
        t = xtc_transform_term_2_0(u_16, w_16, t);
      }
  }
  t = if_keep3_1_0(x_16, t);
  i_25 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_25 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(i_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_25);
              w_6 = t;
              t = SSLsetAnnotations(w_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_25;
          }
        LocalPopChoice(o_47);
        t = xtc_transform_file_2_0(a_17, b_17, t);
      }
    else
      {
        t = n_47;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep3_1_0(f_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(h_17, t);
  h_25 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(h_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_25;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(j_17, k_17, t);
      }
    else
      {
        t = p_47;
        t = xtc_transform_term_2_0(l_17, o_17, t);
      }
  }
  t = if_keep3_1_0(p_17, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm s_25 = NULL;
  t = pass_verbose_0_0(t);
  s_25 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), term_v_40);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm t_25 = NULL;
  t = pass_verbose_0_0(t);
  t_25 = t;
  t = (ATerm) ATinsert(CheckATermList(t_25), term_v_40);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm d_26 = NULL;
  t = pass_verbose_0_0(t);
  d_26 = t;
  t = (ATerm) ATinsert(CheckATermList(d_26), term_v_40);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_v_40);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_u_47;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm m_26 = NULL;
  t = pass_verbose_0_0(t);
  m_26 = t;
  t = (ATerm) ATinsert(CheckATermList(m_26), term_v_40);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm o_26 = NULL;
  t = pass_verbose_0_0(t);
  o_26 = t;
  t = (ATerm) ATinsert(CheckATermList(o_26), term_v_40);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = save_as_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_w_47;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  q_26 = t;
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_26 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(q_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
              z_6 = t;
              t = SSLsetAnnotations(z_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_26;
          }
        LocalPopChoice(y_47);
        t = xtc_transform_file_2_0(t_17, u_17, t);
      }
    else
      {
        t = x_47;
        t = xtc_transform_term_2_0(v_17, w_17, t);
      }
  }
  t = if_keep1_1_0(z_17, t);
  p_26 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(p_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_26;
          }
        LocalPopChoice(c_48);
        t = xtc_transform_file_2_0(b_18, e_18, t);
      }
    else
      {
        t = b_48;
        t = xtc_transform_term_2_0(f_18, o_18, t);
      }
  }
  t = if_keep1_1_0(t_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm a_27 = NULL;
  t = pass_verbose_0_0(t);
  a_27 = t;
  t = (ATerm) ATinsert(CheckATermList(a_27), term_v_40);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_v_40);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = save_as_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm j_27 = NULL;
  t = pass_verbose_0_0(t);
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), term_v_40);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_v_40);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = save_as_1_0(x_18, t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_g_48;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(n_8, t);
  t = profile_p__2_0(o_8, p_8, t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm l_29 = NULL;
  t = pass_verbose_0_0(t);
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(l_29), term_t_42);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_t_42);
  return(t);
}
ATerm save_as_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL;
  o_28 = t;
  {
    static ATerm y_18 (ATerm t);
    static ATerm y_18 (ATerm t)
    {
      static ATerm b_19 (ATerm t);
      static ATerm b_19 (ATerm t)
      {
        ATerm z_28 = NULL,a_29 = NULL;
        t = k_114(t);
        z_28 = t;
        t = term_h_48;
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_48, z_28);
        t = j_16(a_29, z_28, t);
        return(t);
      }
      t = get_outfile_1_0(b_19, t);
      if(((m_28 != NULL) && (m_28 != t)))
        _fail(t);
      else
        m_28 = t;
      return(t);
    }
    t = copy_to_1_0(y_18, t);
  }
  {
    ATerm i_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = NULL,k_29 = NULL;
        k_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(k_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_29;
          }
        LocalPopChoice(k_48);
        t = xtc_transform_file_2_0(d_19, f_19, t);
      }
    else
      {
        t = i_48;
        t = xtc_transform_term_2_0(i_19, j_19, t);
      }
  }
  {
    static ATerm k_19 (ATerm t);
    static ATerm k_19 (ATerm t)
    {
      ATerm n_29 = NULL;
      t = term_r_48;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), term_r_48);
      t = j_16(not_null(m_28), n_29, t);
      if(((n_28 != NULL) && (n_28 != t)))
        _fail(t);
      else
        n_28 = t;
      return(t);
    }
    t = copy_to_1_0(k_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_49), not_null(n_28)), term_y_48), not_null(m_28)), term_u_48);
  u_28 = t;
  t = SSL_concat_strings(u_28);
  p_28 = t;
  t = term_h_38;
  r_28 = t;
  t = (ATerm) ATinsert(ATempty, p_28);
  s_28 = t;
  t = SSL_printnl(r_28, s_28);
  t = o_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm x_144 (ATerm), ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  {
    ATerm c_49 = t;
    int d_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,x_29 = NULL,y_29 = NULL;
        t = term_d_38;
        x_29 = t;
        t = term_r_43;
        y_29 = t;
        t = term_t_43;
        t = d_16(x_29, y_29, t);
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, term_g_38);
        t = geq_0_0(t);
        t = s_29;
        t = x_144(t);
        LocalPopChoice(d_49);
      }
    else
      {
        t = c_49;
        t = s_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = term_e_38;
  {
    ATerm e_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_30 = NULL,k_30 = NULL;
        t = term_d_38;
        j_30 = t;
        t = term_e_38;
        k_30 = t;
        t = term_f_38;
        t = d_16(j_30, k_30, t);
        LocalPopChoice(l_49);
      }
    else
      {
        t = e_49;
        t = term_y_38;
      }
  }
  b_30 = t;
  t = term_y_38;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, term_y_38);
  t = g_15(b_30, f_30, t);
  e_30 = t;
  t = SSL_int_to_string(e_30);
  a_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_30), term_e_38);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_49 = ATgetArgument(t, 0);
      if(match_cons(o_49, sym_Stream_1))
        {
          q_30 = ATgetArgument(o_49, 0);
        }
      else
        _fail(t);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(q_30, s_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_154 (ATerm), ATerm n_154 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  o_30 = t;
  t = xtc_new_file_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
  t = x_14(m_19, n_30, o_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_30);
  t = xtc_transform_file_2_0(m_154, n_154, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_14 (ATerm v_79, ATerm w_79, ATerm t)
{
  t = SSL_execvp(v_79, w_79);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_31 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(s_31);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_49), m_17), term_q_49);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_31 = ATgetArgument(t, 0);
          t_31 = ATgetArgument(t, 1);
          u_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(t_31);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_31), term_u_49), x_17), term_t_49), s_31);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  {
    ATerm w_49 = t;
    int x_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_19 (ATerm t);
        static ATerm o_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_49 = ATgetArgument(t, 0);
              if((x_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_50 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_55), term_e_55), term_y_54), term_q_54), term_n_54), term_j_54), term_e_54), term_x_53), term_t_53), term_p_53), term_l_53), term_h_53), term_d_53), term_z_52), term_v_52), term_r_52), term_n_52), term_k_52), term_e_52), term_a_52), term_w_51), term_s_51), term_n_51), term_h_51), term_c_51), term_t_50), term_q_50), term_g_50);
        t = fetch_elem_1_0(o_19, t);
        LocalPopChoice(x_49);
      }
    else
      {
        t = w_49;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_31);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_32 = NULL,l_32 = NULL;
  b_32 = t;
  {
    ATerm k_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_55 = ATgetArgument(t, 0);
            l_32 = ATgetArgument(t, 1);
            {
              ATerm n_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_55);
        {
          ATerm o_55 = t;
          int p_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL,p_18 = NULL,w_18 = NULL;
              t = l_32;
              {
                ATerm q_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              g_18 = t;
              t = term_h_38;
              p_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_18), term_r_55);
              w_18 = t;
              t = SSL_printnl(p_18, w_18);
              t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(ATinsert(ATempty, g_18), term_r_55));
              LocalPopChoice(p_55);
            }
          else
            {
              t = o_55;
              t = b_32;
            }
        }
      }
    else
      {
        t = k_55;
        t = b_32;
      }
  }
  t = b_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_145 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  v_32 = t;
  t = fork_0_0(t);
  u_32 = t;
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_32;
        t = h_145(t);
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
        t = SSL_waitpid(u_32);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_55 = ATgetArgument(t, 0);
            if(((ATgetType(u_55) != AT_INT) || (ATgetInt((ATermInt) u_55) != 0)))
              _fail(t);
            {
              ATerm v_55 = ATgetArgument(t, 1);
            }
            {
              ATerm w_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_32;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_155 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,c_33 = NULL;
  c_33 = t;
  t = v_155(t);
  t = xtc_find_0_0(t);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_32, c_33);
  {
    static ATerm q_19 (ATerm t);
    static ATerm q_19 (ATerm t)
    {
      ATerm e_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_32, c_33);
      t = y_14(y_32, c_33, t);
      t = term_y_38;
      e_33 = t;
      t = SSL_exit(e_33);
      return(t);
    }
    t = fork_and_wait_1_0(q_19, t);
  }
  t = c_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,j_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_33 = NULL,p_33 = NULL;
      t = h_33;
      t = xtc_new_file_0_0(t);
      n_33 = t;
      t = u_0(t);
      p_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_33, (ATerm) ATinsert(ATinsert(ATempty, n_33), term_n_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_33);
    }
  else
    {
      ATerm s_33 = NULL,t_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_33;
      t = xtc_new_file_0_0(t);
      s_33 = t;
      t = u_0(t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_33), term_n_38), j_33), term_x_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_48 = NULL,l_48 = NULL;
      l_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          j_48 = ATgetArgument(t, 0);
          {
            ATerm r_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(l_48);
            r_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_48);
            t_8 = t;
            t = SSLsetAnnotations(t_8, r_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_48;
        }
      LocalPopChoice(z_55);
      {
        static ATerm w_19 (ATerm t);
        static ATerm a_20 (ATerm t);
        static ATerm w_19 (ATerm t)
        {
          t = x_23;
          return(t);
        }
        static ATerm a_20 (ATerm t)
        {
          ATerm n_48 = NULL;
          t = pass_verbose_0_0(t);
          n_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), n_48), (ATerm) ATinsert(ATempty, term_v_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(w_19, a_20, t);
      }
    }
  else
    {
      t = y_55;
      {
        static ATerm b_20 (ATerm t);
        static ATerm f_20 (ATerm t);
        static ATerm b_20 (ATerm t)
        {
          t = x_23;
          return(t);
        }
        static ATerm f_20 (ATerm t)
        {
          ATerm o_48 = NULL;
          t = pass_verbose_0_0(t);
          o_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), o_48), (ATerm) ATinsert(ATempty, term_v_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(b_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_33;
      t = l_133(t);
    }
  else
    {
      ATerm d_34 = NULL,e_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_33 = ATgetFirst((ATermList) t);
          x_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_33;
      t = n_133(t);
      d_34 = t;
      t = x_33;
      t = foldr_3_0(l_133, m_133, n_133, t);
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
      t = m_133(t);
    }
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  n_34 = t;
  t = SSL_explode_term(n_34);
  if(match_cons(t, sym__2))
    {
      ATerm a_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_56 = ATgetArgument(t, 1);
        if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
          {
            m_34 = ATgetFirst((ATermList) b_56);
            {
              ATerm c_56 = (ATerm) ATgetNext((ATermList) b_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_34;
  return(t);
}
ATerm get_warnings_0_0 (ATerm t)
{
  ATerm d_56 = t;
  int e_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_34 = NULL,j_34 = NULL;
      t = term_d_38;
      f_34 = t;
      t = term_f_56;
      j_34 = t;
      t = term_g_56;
      t = d_16(f_34, j_34, t);
      LocalPopChoice(e_56);
    }
  else
    {
      t = d_56;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
      t = map_1_0(h_20, t);
    }
  return(t);
}
static ATerm l_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_34), term_f_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(l_20, conc_0_0, n_20, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_v_40);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm d_21 = NULL;
  t = pass_verbose_0_0(t);
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_v_40);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  t = get_outfile_1_0(f_21, t);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  t = term_n_57;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL,t_19 = NULL,u_19 = NULL,d_20 = NULL,g_20 = NULL;
        t = term_d_38;
        d_20 = t;
        t = term_r_57;
        g_20 = t;
        t = term_s_57;
        t = d_16(d_20, g_20, t);
        t = e_36;
        {
          ATerm v_57 = t;
          int w_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_36;
              {
                ATerm x_57 = t;
                int y_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        q_20 = ATgetArgument(t, 0);
                        {
                          ATerm a_22 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(e_36);
                          a_22 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, q_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, a_22);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = e_36;
                      }
                    LocalPopChoice(y_57);
                    t = xtc_transform_file_2_0(r_20, s_20, t);
                  }
                else
                  {
                    t = x_57;
                    t = xtc_transform_term_2_0(w_20, x_20, t);
                  }
              }
              LocalPopChoice(w_57);
            }
          else
            {
              t = v_57;
              {
                ATerm e_21 = NULL,l_21 = NULL,m_21 = NULL;
                t = term_h_38;
                l_21 = t;
                t = (ATerm) ATinsert(ATempty, term_z_57);
                m_21 = t;
                t = SSL_printnl(l_21, m_21);
                t = term_y_38;
                e_21 = t;
                t = SSL_exit(e_21);
                t = (ATerm) ATinsert(ATempty, term_z_57);
              }
            }
        }
        t = copy_to_1_0(a_21, t);
        p_19 = t;
        t = term_h_38;
        t_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_58));
        u_19 = t;
        t = SSL_printnl(t_19, u_19);
        t = p_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        t = e_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm a_145 (ATerm), ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  {
    ATerm e_58 = t;
    int h_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_36 = NULL,t_36 = NULL,u_36 = NULL;
        t = term_d_38;
        t_36 = t;
        t = term_r_43;
        u_36 = t;
        t = term_t_43;
        t = d_16(t_36, u_36, t);
        q_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_36, term_e_47);
        t = geq_0_0(t);
        t = o_36;
        t = a_145(t);
        LocalPopChoice(h_58);
      }
    else
      {
        t = e_58;
        t = o_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm b_145 (ATerm), ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
        t = term_d_38;
        c_37 = t;
        t = term_r_43;
        d_37 = t;
        t = term_t_43;
        t = d_16(c_37, d_37, t);
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_37, term_y_50);
        t = geq_0_0(t);
        t = x_36;
        t = b_145(t);
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = x_36;
      }
  }
  return(t);
}
static ATerm g_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("maybe-unbound-variables", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm l_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_37 = NULL,i_37 = NULL;
      t = term_d_38;
      f_37 = t;
      t = term_f_56;
      i_37 = t;
      t = term_g_56;
      t = d_16(f_37, i_37, t);
      t = fetch_elem_1_0(g_21, t);
      t = (ATerm) ATinsert(ATempty, term_r_58);
      LocalPopChoice(q_58);
    }
  else
    {
      t = l_58;
      t = (ATerm) ATinsert(ATempty, term_s_58);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  q_37 = t;
  t = term_t_58;
  m_37 = t;
  t = term_d_38;
  s_37 = t;
  t = term_u_58;
  t_37 = t;
  t = term_w_58;
  t = d_16(s_37, t_37, t);
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_u_58);
  n_37 = t;
  t = q_37;
  t = comp_0_2(m_37, n_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm y_144 (ATerm), ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
        t = term_d_38;
        a_38 = t;
        t = term_r_43;
        b_38 = t;
        t = term_t_43;
        t = d_16(a_38, b_38, t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_37, term_t_41);
        t = geq_0_0(t);
        t = v_37;
        t = y_144(t);
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = v_37;
      }
  }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  g_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_40 = ATgetArgument(t, 0);
      {
        ATerm j_22 = NULL,q_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(g_40);
        j_22 = t;
        t = h_40;
        t = fetch_elem_1_0(j_21, t);
        q_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, q_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, j_22);
      }
    }
  else
    {
      ATerm v_23 = NULL,b_24 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          h_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_40);
      v_23 = t;
      t = h_40;
      t = fetch_elem_1_0(n_21, t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, b_24);
      c_10 = t;
      t = SSLsetAnnotations(c_10, v_23);
    }
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm t_22 = NULL,y_22 = NULL,b_23 = NULL;
  t_22 = t;
  {
    ATerm b_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            y_22 = ATgetArgument(t, 0);
            b_23 = ATgetArgument(t, 1);
            {
              ATerm g_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_59);
        t = y_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = b_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_22;
      }
    else
      {
        t = b_59;
        if(match_cons(t, sym_RDef_3))
          {
            y_22 = ATgetArgument(t, 0);
            b_23 = ATgetArgument(t, 1);
            {
              ATerm h_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = b_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_22;
      }
  }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,k_24 = NULL;
  f_24 = t;
  {
    ATerm i_59 = t;
    int j_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            g_24 = ATgetArgument(t, 0);
            k_24 = ATgetArgument(t, 1);
            {
              ATerm l_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_59);
        t = g_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = k_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_24;
      }
    else
      {
        t = i_59;
        if(match_cons(t, sym_RDef_3))
          {
            g_24 = ATgetArgument(t, 0);
            k_24 = ATgetArgument(t, 1);
            {
              ATerm n_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = k_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_24;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = fetch_elem_1_0(h_21, t);
  v_38 = t;
  t = term_h_38;
  w_38 = t;
  t = (ATerm) ATinsert(ATempty, term_p_59);
  x_38 = t;
  t = SSL_printnl(w_38, x_38);
  t = v_38;
  return(t);
}
static ATerm v_14 (ATerm d_24, ATerm e_24, ATerm t)
{
  t = d_24;
  {
    ATerm q_59 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_59;
      }
  }
  t = e_24;
  {
    ATerm u_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = u_59;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(e_24), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_x_59, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_24), (ATerm) ATempty))))));
  return(t);
}
static ATerm w_14 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_write_term_to_stream_baf(m_42, n_42);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_40);
  return(t);
}
static ATerm x_14 (ATerm e_126 (ATerm), ATerm l_333, ATerm w_42, ATerm t)
{
  ATerm u_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_333, term_y_59);
  t = w_15(t);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, w_42);
  t = e_126(t);
  t = fclose_0_0(t);
  t = w_42;
  return(t);
}
static ATerm a_15 (ATerm d_115 (ATerm), ATerm w_24, ATerm u_24, ATerm t)
{
  ATerm w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL;
  a_41 = t;
  t = d_115(t);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_40, w_24, u_24);
  t = e_16(w_40, w_24, u_24, t);
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_41 = NULL;
        t = term_c_60;
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_40, term_c_60);
        t = d_16(w_40, h_41, t);
        {
          ATerm d_60 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_60;
            }
        }
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_40, term_c_60, (ATerm) ATinsert(CheckATermList(z_40), (ATerm) ATinsert(CheckATermList(y_40), w_24)));
  t = lookup_table_0_1(w_40, t);
  g_41 = t;
  t = term_c_60;
  b_41 = t;
  t = (ATerm) ATinsert(CheckATermList(z_40), (ATerm) ATinsert(CheckATermList(y_40), w_24));
  d_41 = t;
  t = g_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(b_41, d_41, e_41, t);
  t = a_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  ATerm e_60 = t;
  int i_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_41 = NULL,r_24 = NULL;
      o_41 = t;
      t = term_j_60;
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_41, term_j_60);
      t = j_16(o_41, r_24, t);
      j_41 = t;
      t = SSL_mkstemp(j_41);
      LocalPopChoice(i_60);
    }
  else
    {
      t = e_60;
      {
        ATerm p_41 = NULL;
        t = term_k_60;
        p_41 = t;
        t = SSL_perror(p_41);
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
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm l_60 = t;
  int m_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = NULL;
      t = term_o_60;
      s_41 = t;
      t = SSL_getenv(s_41);
      LocalPopChoice(m_60);
    }
  else
    {
      t = l_60;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_p_60;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL;
  t = temp_dir_0_0(t);
  x_41 = t;
  t = term_q_60;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_41, term_q_60);
  t = j_16(x_41, z_41, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_39;
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, term_p_39);
  t = a_15(s_21, v_41, w_41, t);
  t = SSL_close(u_41);
  t = v_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_60;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_60);
      e_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_42, (ATerm) ATinsert(ATempty, term_u_60));
      t = z_15(c_42, e_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm t_21 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_60 = ATgetArgument(t, 0);
      if(match_cons(v_60, sym_Stream_1))
        {
          j_42 = ATgetArgument(v_60, 0);
        }
      else
        _fail(t);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(j_42, k_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm o_154 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,i_42 = NULL;
  t = read_from_0_0(t);
  t = o_154(t);
  i_42 = t;
  t = xtc_new_file_0_0(t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_42, i_42);
  t = x_14(t_21, g_42, i_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_42);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  t = debug_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_w_60;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = save_as_1_0(b_22, t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = term_y_60;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_43 = NULL;
  s_43 = t;
  {
    ATerm z_60 = t;
    int a_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL,p_25 = NULL;
        t = term_d_38;
        k_25 = t;
        t = term_d_61;
        p_25 = t;
        t = term_e_61;
        t = d_16(k_25, p_25, t);
        r_42 = t;
        t = if_verbose2_1_0(u_21, t);
        t = s_43;
        {
          ATerm f_61 = t;
          int g_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_25 = NULL,y_25 = NULL;
              t = term_d_38;
              w_25 = t;
              t = term_f_40;
              y_25 = t;
              t = term_i_40;
              t = d_16(w_25, y_25, t);
              t = s_43;
              LocalPopChoice(g_61);
            }
          else
            {
              t = f_61;
              {
                static ATerm x_21 (ATerm t);
                static ATerm x_21 (ATerm t)
                {
                  ATerm h_61 = t;
                  int j_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          v_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_14(r_42, v_26, t);
                      LocalPopChoice(j_61);
                    }
                  else
                    {
                      t = h_61;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(x_21, t);
              }
            }
        }
        LocalPopChoice(a_61);
      }
    else
      {
        t = z_60;
        t = s_43;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_44);
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
        t = s_44;
      }
  }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_p_60;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  static ATerm d_22 (ATerm t);
  static ATerm d_22 (ATerm t)
  {
    ATerm h_44 = NULL,k_44 = NULL,o_44 = NULL;
    h_44 = t;
    t = term_p_60;
    k_44 = t;
    t = term_c_60;
    o_44 = t;
    t = term_o_61;
    t = d_16(k_44, o_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_44 != NULL) && (e_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_44 = ATgetFirst((ATermList) t);
        {
          ATerm p_61 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_44;
    t = map_1_0(e_22, t);
    t = h_44;
    t = end_scope_1_0(f_22, t);
    return(t);
  }
  t = repeat_2_0(d_22, _id, t);
  f_44 = t;
  t = SSL_exit(f_44);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm q_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_45 = NULL,q_45 = NULL;
      t = term_d_38;
      o_45 = t;
      t = term_n_38;
      q_45 = t;
      t = term_p_38;
      t = d_16(o_45, q_45, t);
      LocalPopChoice(r_61);
    }
  else
    {
      t = q_61;
      t = term_s_39;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_27 = NULL,r_27 = NULL;
      t = term_n_38;
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_27 = NULL,b_28 = NULL;
            t = term_d_38;
            v_27 = t;
            t = term_n_38;
            b_28 = t;
            t = term_p_38;
            t = d_16(v_27, b_28, t);
            LocalPopChoice(t_61);
          }
        else
          {
            t = s_61;
            t = term_s_39;
          }
      }
      p_27 = t;
      t = term_s_60;
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_60, p_27);
      t = l_15(r_27, p_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm u_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_45;
      t = copy_to_1_0(g_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_u_37;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,x_45 = NULL,y_45 = NULL;
  t = j_114(t);
  t_45 = t;
  t = term_d_38;
  x_45 = t;
  t = term_f_43;
  y_45 = t;
  t = term_g_43;
  t = d_16(x_45, y_45, t);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_45, t_45);
  t = j_16(u_45, t_45, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  w_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 = NULL;
        t = w_46;
        t = w_0(t);
        t_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_46, t_28);
        t = l_15(x_46, t_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_46);
        LocalPopChoice(w_61);
      }
    else
      {
        t = v_61;
        {
          ATerm x_61 = t;
          int y_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_29 = NULL;
              t = w_46;
              t = w_0(t);
              h_29 = t;
              {
                ATerm z_61 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_29 = NULL;
                    o_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = o_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = o_29;
                          }
                        else
                          {
                            t = o_29;
                            if((x_46 != t))
                              {
                                _fail(t);
                              }
                            t = o_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_61;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, x_46, h_29);
              t = l_15(x_46, h_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_46);
              LocalPopChoice(y_61);
            }
          else
            {
              t = x_61;
              t = w_46;
              t = w_0(t);
              if((x_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_46);
            }
        }
      }
  }
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = get_outfile_1_0(i_22, t);
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_a_62;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
        t = term_d_38;
        h_30 = t;
        t = term_e_62;
        i_30 = t;
        t = term_f_62;
        t = d_16(h_30, i_30, t);
        t = r_47;
        t = copy_to_1_0(h_22, t);
        c_30 = t;
        t = term_h_38;
        d_30 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_62));
        g_30 = t;
        t = SSL_printnl(d_30, g_30);
        t = c_30;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(c_62);
      }
    else
      {
        t = b_62;
        t = r_47;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm v_48 = NULL,b_49 = NULL,f_49 = NULL,h_49 = NULL;
  t = term_r_43;
  {
    ATerm m_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_49 = NULL,j_49 = NULL;
        t = term_d_38;
        i_49 = t;
        t = term_r_43;
        j_49 = t;
        t = term_t_43;
        t = d_16(i_49, j_49, t);
        LocalPopChoice(q_62);
      }
    else
      {
        t = m_62;
        t = term_y_38;
      }
  }
  b_49 = t;
  t = term_y_38;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_49, term_y_38);
  t = g_15(b_49, h_49, t);
  f_49 = t;
  t = SSL_int_to_string(f_49);
  v_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_48), term_r_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm k_49 = NULL,m_49 = NULL,n_49 = NULL,p_49 = NULL,z_49 = NULL,a_50 = NULL;
  t = term_d_38;
  z_49 = t;
  t = term_t_62;
  a_50 = t;
  t = term_u_62;
  t = d_16(z_49, a_50, t);
  k_49 = t;
  t = term_v_62;
  t = xtc_find_path_0_0(t);
  m_49 = t;
  t = term_x_62;
  t = xtc_find_path_0_0(t);
  n_49 = t;
  t = term_y_62;
  t = xtc_find_path_0_0(t);
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_49), term_t_62), n_49), term_t_62), m_49), term_t_62));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm b_50 = NULL,d_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  m_50 = t;
  t = term_b_63;
  b_50 = t;
  t = m_50;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,v_50 = NULL;
        t = term_d_38;
        o_50 = t;
        t = term_n_38;
        v_50 = t;
        t = term_p_38;
        t = d_16(o_50, v_50, t);
        LocalPopChoice(d_63);
      }
    else
      {
        t = c_63;
        {
          ATerm w_50 = NULL,x_50 = NULL;
          t = term_d_38;
          w_50 = t;
          t = term_f_43;
          x_50 = t;
          t = term_g_43;
          t = d_16(w_50, x_50, t);
        }
      }
  }
  n_50 = t;
  t = m_50;
  t = get_include_dirs_0_0(t);
  i_50 = t;
  t = m_50;
  t = pass_keep_0_0(t);
  k_50 = t;
  t = term_i_63;
  {
    ATerm j_63 = t;
    int k_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_50 = NULL,a_51 = NULL;
        t = term_d_38;
        z_50 = t;
        t = term_i_63;
        a_51 = t;
        t = term_n_63;
        t = d_16(z_50, a_51, t);
        LocalPopChoice(k_63);
        t = (ATerm) ATinsert(ATempty, term_i_63);
      }
    else
      {
        t = j_63;
        t = (ATerm) ATempty;
      }
  }
  l_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_50), k_50), i_50), (ATerm) ATinsert(ATinsert(ATempty, n_50), term_o_63));
  t = concat_0_0(t);
  d_50 = t;
  t = m_50;
  t = comp_0_2(b_50, d_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_143 (ATerm), ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  {
    ATerm p_63 = t;
    int v_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_51 = NULL,l_51 = NULL,q_51 = NULL;
        t = term_d_38;
        l_51 = t;
        t = term_e_38;
        q_51 = t;
        t = term_f_38;
        t = d_16(l_51, q_51, t);
        k_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_51, term_t_41);
        t = geq_0_0(t);
        t = g_51;
        t = w_143(t);
        LocalPopChoice(v_63);
      }
    else
      {
        t = p_63;
        t = g_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm s_137 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,j_52 = NULL;
  j_52 = t;
  t = SSL_explode_string(j_52);
  {
    ATerm w_63 = t;
    int a_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm g_54 (ATerm t);
        static ATerm g_54 (ATerm t)
        {
          ATerm y_53 = NULL,z_53 = NULL,d_54 = NULL;
          y_53 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_53 = ATgetFirst((ATermList) t);
              d_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_64 = t;
            int c_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_31 = NULL,y_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(y_53);
                i_31 = t;
                t = d_54;
                t = g_54(t);
                y_31 = t;
                t = (ATerm) ATinsert(CheckATermList(y_31), z_53);
                n_10 = t;
                t = SSLsetAnnotations(n_10, i_31);
                LocalPopChoice(c_64);
              }
            else
              {
                t = b_64;
                {
                  ATerm g_64 = t;
                  int h_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(y_53);
                      t_32 = t;
                      t = z_53;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(d_54), z_53);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, t_32);
                      LocalPopChoice(h_64);
                    }
                  else
                    {
                      t = g_64;
                      {
                        ATerm l_33 = NULL,q_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(y_53);
                        l_33 = t;
                        t = z_53;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = d_54;
                        t = s_137(t);
                        q_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_33), z_53);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, l_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = g_54(t);
        LocalPopChoice(a_64);
      }
    else
      {
        t = w_63;
      }
  }
  f_52 = t;
  t = SSL_implode_string(f_52);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = debug_1_0(m_22, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = term_i_64;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = debug_1_0(r_22, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_j_64;
  return(t);
}
static ATerm b_15 (ATerm z_23, ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,w_54 = NULL,x_54 = NULL;
  t = z_23;
  t = basename_1_0(_id, t);
  r_54 = t;
  t = if_verbose3_1_0(k_22, t);
  t = term_h_43;
  x_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_43, r_54);
  t = i_16(x_54, r_54, t);
  {
    ATerm k_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_54 = NULL,f_55 = NULL;
        t = term_d_38;
        z_54 = t;
        t = term_n_38;
        f_55 = t;
        t = term_p_38;
        t = d_16(z_54, f_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = k_64;
        t = r_54;
      }
  }
  s_54 = t;
  t = if_verbose3_1_0(p_22, t);
  t = term_f_43;
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, s_54);
  t = i_16(w_54, s_54, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_54);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = debug_1_0(u_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = term_q_64;
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = if_verbose1_1_0(e_23, t);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,y_36 = NULL,z_36 = NULL,g_37 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15(f_57, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm r_64 = t;
    int s_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
        g_57 = t;
        t = term_d_38;
        h_57 = t;
        t = term_f_40;
        i_57 = t;
        t = term_i_40;
        t = d_16(h_57, i_57, t);
        t = g_57;
        LocalPopChoice(s_64);
      }
    else
      {
        t = r_64;
        t = add_main_0_0(t);
      }
  }
  e_57 = t;
  {
    ATerm u_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_57 = ATgetArgument(t, 0);
            {
              ATerm h_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(e_57);
              h_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_57);
              c_11 = t;
              t = SSLsetAnnotations(c_11, h_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_57;
          }
        LocalPopChoice(y_64);
        t = xtc_transform_file_2_0(f_23, g_23, t);
      }
    else
      {
        t = u_64;
        t = xtc_transform_term_2_0(i_23, j_23, t);
      }
  }
  d_57 = t;
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_58 = ATgetArgument(t, 0);
            {
              ATerm s_34 = NULL,e_11 = NULL;
              t = SSLgetAnnotations(d_57);
              s_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_58);
              e_11 = t;
              t = SSLsetAnnotations(e_11, s_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_57;
          }
        LocalPopChoice(a_65);
        t = xtc_transform_file_2_0(k_23, n_23, t);
      }
    else
      {
        t = z_64;
        t = xtc_transform_term_2_0(o_23, p_23, t);
      }
  }
  t = if_keep5_1_0(r_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(t_23, t);
  x_34 = t;
  t = term_b_65;
  v_34 = t;
  t = x_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  w_34 = t;
  t = x_34;
  t = comp_0_2(v_34, w_34, t);
  t = if_keep6_1_0(c_24, t);
  c_57 = t;
  {
    ATerm c_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_58 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(c_57);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_58);
              h_11 = t;
              t = SSLsetAnnotations(h_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_57;
          }
        LocalPopChoice(d_65);
        t = xtc_transform_file_2_0(m_24, n_24, t);
      }
    else
      {
        t = c_65;
        t = xtc_transform_term_2_0(o_24, p_24, t);
      }
  }
  t = if_keep6_1_0(q_24, t);
  b_57 = t;
  {
    ATerm g_65 = t;
    int h_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_58 = ATgetArgument(t, 0);
            {
              ATerm d_35 = NULL,t_11 = NULL;
              t = SSLgetAnnotations(b_57);
              d_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_58);
              t_11 = t;
              t = SSLsetAnnotations(t_11, d_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_57;
          }
        LocalPopChoice(h_65);
        t = xtc_transform_file_2_0(t_24, v_24, t);
      }
    else
      {
        t = g_65;
        t = xtc_transform_term_2_0(x_24, y_24, t);
      }
  }
  t = if_keep5_1_0(z_24, t);
  a_57 = t;
  {
    ATerm i_65 = t;
    int j_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_59 = ATgetArgument(t, 0);
            {
              ATerm s_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(a_57);
              s_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_59);
              h_12 = t;
              t = SSLsetAnnotations(h_12, s_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_57;
          }
        LocalPopChoice(j_65);
        t = xtc_transform_file_2_0(c_25, d_25, t);
      }
    else
      {
        t = i_65;
        t = xtc_transform_term_2_0(e_25, j_25, t);
      }
  }
  t = if_keep5_1_0(m_25, t);
  z_56 = t;
  {
    ATerm l_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_59 = ATgetArgument(t, 0);
            {
              ATerm c_36 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(z_56);
              c_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_59);
              i_12 = t;
              t = SSLsetAnnotations(i_12, c_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_56;
          }
        LocalPopChoice(m_65);
        t = xtc_transform_file_2_0(o_25, r_25, t);
      }
    else
      {
        t = l_65;
        t = xtc_transform_term_2_0(u_25, v_25, t);
      }
  }
  t = if_keep5_1_0(x_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm n_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
        r_59 = t;
        t = term_d_38;
        s_59 = t;
        t = term_f_40;
        t_59 = t;
        t = term_i_40;
        t = d_16(s_59, t_59, t);
        t = r_59;
        LocalPopChoice(p_65);
        {
          ATerm v_59 = NULL;
          v_59 = t;
          {
            ATerm v_65 = t;
            int z_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_60 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(v_59);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_60);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, k_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = v_59;
                  }
                LocalPopChoice(z_65);
                t = xtc_transform_file_2_0(b_26, c_26, t);
              }
            else
              {
                t = v_65;
                t = xtc_transform_term_2_0(e_26, g_26, t);
              }
          }
        }
      }
    else
      {
        t = n_65;
        {
          ATerm h_60 = NULL;
          h_60 = t;
          {
            ATerm b_66 = t;
            int j_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    n_60 = ATgetArgument(t, 0);
                    {
                      ATerm r_36 = NULL,k_12 = NULL;
                      t = SSLgetAnnotations(h_60);
                      r_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, n_60);
                      k_12 = t;
                      t = SSLsetAnnotations(k_12, r_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = h_60;
                  }
                LocalPopChoice(j_66);
                t = xtc_transform_file_2_0(h_26, i_26, t);
              }
            else
              {
                t = b_66;
                t = xtc_transform_term_2_0(k_26, l_26, t);
              }
          }
          t = if_keep2_1_0(n_26, t);
        }
      }
  }
  g_37 = t;
  t = term_k_66;
  y_36 = t;
  t = g_37;
  t = pass_warnings_0_0(t);
  z_36 = t;
  t = g_37;
  t = comp_0_2(y_36, z_36, t);
  y_56 = t;
  {
    ATerm o_66 = t;
    int p_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_60 = ATgetArgument(t, 0);
            {
              ATerm o_37 = NULL,l_12 = NULL;
              t = SSLgetAnnotations(y_56);
              o_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_60);
              l_12 = t;
              t = SSLsetAnnotations(l_12, o_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_56;
          }
        LocalPopChoice(p_66);
        t = xtc_transform_file_2_0(s_26, t_26, t);
      }
    else
      {
        t = o_66;
        t = xtc_transform_term_2_0(u_26, w_26, t);
      }
  }
  x_56 = t;
  {
    ATerm r_66 = t;
    int t_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_61 = ATgetArgument(t, 0);
            {
              ATerm x_37 = NULL,m_12 = NULL;
              t = SSLgetAnnotations(x_56);
              x_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_61);
              m_12 = t;
              t = SSLsetAnnotations(m_12, x_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_56;
          }
        LocalPopChoice(t_66);
        t = xtc_transform_file_2_0(y_26, z_26, t);
      }
    else
      {
        t = r_66;
        t = xtc_transform_term_2_0(b_27, d_27, t);
      }
  }
  t = if_keep2_1_0(e_27, t);
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
  u_56 = t;
  t = term_h_38;
  v_56 = t;
  t = (ATerm) ATinsert(CheckATermList(u_56), term_w_66);
  w_56 = t;
  t = SSL_printnl(v_56, w_56);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(u_56), term_w_66));
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_x_66;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm t_57 = NULL;
  t = pass_verbose_0_0(t);
  t_57 = t;
  t = (ATerm) ATinsert(CheckATermList(t_57), term_v_40);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_x_66;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm u_57 = NULL;
  t = pass_verbose_0_0(t);
  u_57 = t;
  t = (ATerm) ATinsert(CheckATermList(u_57), term_v_40);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_z_66;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm f_58 = NULL;
  t = pass_verbose_0_0(t);
  f_58 = t;
  t = (ATerm) ATinsert(CheckATermList(f_58), term_v_40);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  t = term_z_66;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm g_58 = NULL;
  t = pass_verbose_0_0(t);
  g_58 = t;
  t = (ATerm) ATinsert(CheckATermList(g_58), term_v_40);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = save_as_1_0(s_23, t);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_a_67;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = save_as_1_0(a_24, t);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_b_67;
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = save_as_1_0(i_24, t);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_d_67;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_f_67;
  return(t);
}
static ATerm n_24 (ATerm t)
{
  ATerm m_58 = NULL;
  t = pass_verbose_0_0(t);
  m_58 = t;
  t = (ATerm) ATinsert(CheckATermList(m_58), term_v_40);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_f_67;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm n_58 = NULL;
  t = pass_verbose_0_0(t);
  n_58 = t;
  t = (ATerm) ATinsert(CheckATermList(n_58), term_v_40);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = save_as_1_0(s_24, t);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_g_67;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = term_j_67;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm x_58 = NULL;
  t = pass_verbose_0_0(t);
  x_58 = t;
  t = (ATerm) ATinsert(CheckATermList(x_58), term_v_40);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  t = term_j_67;
  return(t);
}
static ATerm y_24 (ATerm t)
{
  ATerm y_58 = NULL;
  t = pass_verbose_0_0(t);
  y_58 = t;
  t = (ATerm) ATinsert(CheckATermList(y_58), term_v_40);
  return(t);
}
static ATerm z_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_l_67;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  t = term_x_67;
  return(t);
}
static ATerm d_25 (ATerm t)
{
  ATerm e_59 = NULL;
  t = pass_verbose_0_0(t);
  e_59 = t;
  t = (ATerm) ATinsert(CheckATermList(e_59), term_v_40);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_x_67;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm f_59 = NULL;
  t = pass_verbose_0_0(t);
  f_59 = t;
  t = (ATerm) ATinsert(CheckATermList(f_59), term_v_40);
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = save_as_1_0(n_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_y_67;
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = term_z_67;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_v_40);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_z_67;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_v_40);
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = save_as_1_0(a_26, t);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm f_60 = NULL;
  t = pass_verbose_0_0(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), term_v_40);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_v_40);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_v_40);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm l_26 (ATerm t)
{
  ATerm t_60 = NULL;
  t = pass_verbose_0_0(t);
  t_60 = t;
  t = (ATerm) ATinsert(CheckATermList(t_60), term_v_40);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = save_as_1_0(r_26, t);
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = term_e_68;
  return(t);
}
static ATerm s_26 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  ATerm b_61 = NULL;
  t = pass_verbose_0_0(t);
  b_61 = t;
  t = (ATerm) ATinsert(CheckATermList(b_61), term_v_40);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm c_61 = NULL;
  t = pass_verbose_0_0(t);
  c_61 = t;
  t = (ATerm) ATinsert(CheckATermList(c_61), term_v_40);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm k_61 = NULL;
  t = pass_verbose_0_0(t);
  k_61 = t;
  t = (ATerm) ATinsert(CheckATermList(k_61), term_v_40);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm d_27 (ATerm t)
{
  ATerm n_61 = NULL;
  t = pass_verbose_0_0(t);
  n_61 = t;
  t = (ATerm) ATinsert(CheckATermList(n_61), term_v_40);
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_h_68;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(s_22, t);
  t = profile_p__2_0(w_22, c_23, t);
  return(t);
}
static ATerm d_16 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm d_62 = NULL;
  t = lookup_table_0_1(r_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(s_65, d_62, t);
  return(t);
}
static ATerm c_15 (ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  k_62 = t;
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        t = d_16(d_64, e_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_68 = ATgetFirst((ATermList) t);
            j_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_68);
        {
          ATerm l_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, j_62);
          t = lookup_table_0_1(d_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_16(e_64, j_62, l_62, t);
          t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, j_62);
        }
      }
    else
      {
        t = i_68;
        {
          ATerm p_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
          t = lookup_table_0_1(d_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_16(e_64, p_62, t);
          t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        }
      }
  }
  t = k_62;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,w_62 = NULL,z_62 = NULL,a_63 = NULL,e_63 = NULL,f_63 = NULL;
  z_62 = t;
  t = a_115(t);
  w_62 = t;
  {
    ATerm l_68 = t;
    int m_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_63 = NULL;
        t = term_c_60;
        g_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_62, term_c_60);
        t = d_16(w_62, g_63, t);
        {
          ATerm y_68 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_68;
            }
        }
        LocalPopChoice(m_68);
      }
    else
      {
        t = l_68;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_62 = ATgetFirst((ATermList) t);
      r_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_62, term_c_60, r_62);
  t = lookup_table_0_1(w_62, t);
  f_63 = t;
  t = term_c_60;
  a_63 = t;
  t = f_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(a_63, r_62, e_63, t);
  t = s_62;
  {
    static ATerm h_27 (ATerm t);
    static ATerm h_27 (ATerm t)
    {
      ATerm h_63 = NULL;
      h_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_62, h_63);
      t = c_15(w_62, h_63, t);
      return(t);
    }
    t = map_1_0(h_27, t);
  }
  t = z_62;
  return(t);
}
ATerm restore_always_2_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm t)
{
  ATerm z_68 = t;
  int a_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_118(t);
      t = y_118(t);
      LocalPopChoice(a_69);
    }
  else
    {
      t = z_68;
      t = y_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
  m_63 = t;
  t = z_114(t);
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_63, term_c_60);
  {
    ATerm c_69 = t;
    int g_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_64 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_69 = ATgetArgument(t, 0);
            ATerm m_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_60;
        f_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_63, term_c_60);
        t = d_16(l_63, f_64, t);
        LocalPopChoice(g_69);
      }
    else
      {
        t = c_69;
        t = (ATerm) ATempty;
      }
  }
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_63, term_c_60, (ATerm) ATinsert(CheckATermList(q_63), (ATerm) ATempty));
  t = lookup_table_0_1(l_63, t);
  u_63 = t;
  t = term_c_60;
  r_63 = t;
  t = (ATerm) ATinsert(CheckATermList(q_63), (ATerm) ATempty);
  s_63 = t;
  t = u_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(r_63, s_63, t_63, t);
  t = m_63;
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_p_60;
  return(t);
}
static ATerm l_27 (ATerm t)
{
  ATerm t_64 = NULL;
  t_64 = t;
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_64);
        LocalPopChoice(o_69);
      }
    else
      {
        t = n_69;
        t = t_64;
      }
  }
  return(t);
}
static ATerm n_27 (ATerm t)
{
  t = term_p_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm z_154 (ATerm), ATerm t)
{
  ATerm l_64 = NULL;
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm m_64 = NULL;
    m_64 = t;
    {
      ATerm p_69 = t;
      int s_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_64 = NULL,o_64 = NULL;
          t = term_p_60;
          n_64 = t;
          t = term_c_60;
          o_64 = t;
          t = term_o_61;
          t = d_16(n_64, o_64, t);
          LocalPopChoice(s_69);
        }
      else
        {
          t = p_69;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_64 != NULL) && (l_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_64 = ATgetFirst((ATermList) t);
        {
          ATerm t_69 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_64;
    t = map_1_0(l_27, t);
    t = m_64;
    t = end_scope_1_0(n_27, t);
    return(t);
  }
  t = begin_scope_1_0(i_27, t);
  t = restore_always_2_0(z_154, k_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  ATerm o_65 = NULL;
  o_65 = t;
  {
    ATerm u_69 = t;
    int x_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_65 = NULL,t_65 = NULL,u_65 = NULL;
        t = term_d_38;
        t_65 = t;
        t = term_e_38;
        u_65 = t;
        t = term_f_38;
        t = d_16(t_65, u_65, t);
        q_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_65, term_y_38);
        t = geq_0_0(t);
        t = o_65;
        t = u_143(t);
        LocalPopChoice(x_69);
      }
    else
      {
        t = u_69;
        t = o_65;
      }
  }
  return(t);
}
static ATerm e_15 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm a_70 = t;
  int c_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_62, i_62);
      LocalPopChoice(c_70);
    }
  else
    {
      t = a_70;
      t = SSL_addr(h_62, i_62);
    }
  return(t);
}
static ATerm g_15 (ATerm n_62, ATerm o_62, ATerm t)
{
  ATerm d_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_62, o_62);
      LocalPopChoice(e_70);
    }
  else
    {
      t = d_70;
      t = SSL_subtr(n_62, o_62);
    }
  return(t);
}
static ATerm h_15 (ATerm k_72, ATerm m_72, ATerm o_72, ATerm q_72, ATerm l_72, ATerm n_72, ATerm p_72, ATerm r_72, ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL,a_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
  t = g_15(k_72, l_72, t);
  w_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_72, n_72);
  t = g_15(m_72, n_72, t);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
  t = g_15(o_72, p_72, t);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, r_72);
  t = g_15(q_72, r_72, t);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, w_65, x_65, y_65, a_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_70 = ATgetArgument(t, 0);
      if(match_cons(f_70, sym__4))
        {
          c_66 = ATgetArgument(f_70, 0);
          d_66 = ATgetArgument(f_70, 1);
          e_66 = ATgetArgument(f_70, 2);
          f_66 = ATgetArgument(f_70, 3);
        }
      else
        _fail(t);
      {
        ATerm g_70 = ATgetArgument(t, 1);
        if(match_cons(g_70, sym__4))
          {
            g_66 = ATgetArgument(g_70, 0);
            h_66 = ATgetArgument(g_70, 1);
            i_66 = ATgetArgument(g_70, 2);
            l_66 = ATgetArgument(g_70, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_15(c_66, d_66, e_66, f_66, g_66, h_66, i_66, l_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,q_66 = NULL,s_66 = NULL,u_66 = NULL,v_66 = NULL,y_66 = NULL,c_67 = NULL,e_67 = NULL,h_67 = NULL,i_67 = NULL,k_67 = NULL,m_67 = NULL;
  y_66 = t;
  t = times_0_0(t);
  m_66 = t;
  t = y_66;
  t = r_141(t);
  n_66 = t;
  t = times_0_0(t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_66, m_66);
  t = diff_times_0_0(t);
  u_66 = t;
  if(match_cons(t, sym__4))
    {
      i_67 = ATgetArgument(t, 0);
      {
        ATerm i_70 = ATgetArgument(t, 1);
      }
      k_67 = ATgetArgument(t, 2);
      {
        ATerm j_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_67, k_67);
  t = e_15(i_67, k_67, t);
  m_67 = t;
  t = SSL_TicksToSeconds(m_67);
  q_66 = t;
  t = u_66;
  if(match_cons(t, sym__4))
    {
      ATerm k_70 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
      {
        ATerm l_70 = ATgetArgument(t, 2);
      }
      e_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_67, e_67);
  t = e_15(c_67, e_67, t);
  h_67 = t;
  t = SSL_TicksToSeconds(h_67);
  s_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_66), term_o_70), q_66), term_n_70);
  t = q_141(t);
  t = n_66;
  return(t);
}
ATerm debug_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  n_67 = t;
  t = c_126(t);
  o_67 = t;
  t = term_h_38;
  p_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_67), o_67);
  q_67 = t;
  t = SSL_printnl(p_67, q_67);
  t = n_67;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL;
  r_67 = t;
  t = term_d_38;
  v_67 = t;
  t = term_p_70;
  w_67 = t;
  t = term_q_70;
  t = d_16(v_67, w_67, t);
  s_67 = t;
  t = term_s_39;
  t_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_70), term_y_70), term_x_70), term_w_70), term_v_70), term_u_70), term_s_70), s_67), term_r_70);
  u_67 = t;
  t = SSL_printnl(t_67, u_67);
  t = r_67;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_68 = ATgetFirst((ATermList) t);
      b_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_68;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_68;
    }
  else
    {
      t = b_68;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  static ATerm f_69 (ATerm t);
  static ATerm f_69 (ATerm t)
  {
    ATerm a_71 = t;
    int b_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_127(t);
        LocalPopChoice(b_71);
      }
    else
      {
        t = a_71;
        {
          ATerm b_69 = NULL,d_69 = NULL,e_69 = NULL,l_38 = NULL,o_38 = NULL,d_13 = NULL;
          b_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_69 = ATgetFirst((ATermList) t);
              e_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_69);
          l_38 = t;
          t = e_69;
          t = f_69(t);
          o_38 = t;
          t = (ATerm) ATinsert(CheckATermList(o_38), d_69);
          d_13 = t;
          t = SSLsetAnnotations(d_13, l_38);
        }
      }
    return(t);
  }
  t = f_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL;
  static ATerm o_27 (ATerm t);
  static ATerm o_27 (ATerm t)
  {
    ATerm k_69 = NULL,l_69 = NULL,q_69 = NULL,r_69 = NULL,v_69 = NULL,w_69 = NULL,y_69 = NULL,z_69 = NULL,b_70 = NULL,l_13 = NULL,h_13 = NULL;
    b_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_69 = ATgetFirst((ATermList) t);
        w_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_70);
    r_69 = t;
    t = v_69;
    t = x_126(t);
    y_69 = t;
    t = (ATerm) ATinsert(CheckATermList(w_69), y_69);
    h_13 = t;
    t = SSLsetAnnotations(h_13, r_69);
    z_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_69 = ATgetFirst((ATermList) t);
        q_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_69);
    k_69 = t;
    t = q_69;
    if(((i_69 != NULL) && (i_69 != t)))
      _fail(t);
    else
      i_69 = t;
    t = (ATerm) ATinsert(CheckATermList(q_69), l_69);
    l_13 = t;
    t = SSLsetAnnotations(l_13, k_69);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(o_27, t);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_69, not_null(i_69));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm m_70 = NULL,t_70 = NULL;
  ATerm f_71 = t;
  int g_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(k_136, t);
      LocalPopChoice(g_71);
    }
  else
    {
      t = f_71;
      {
        ATerm h_70 = NULL;
        h_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_70, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      m_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_71 = ATgetFirst((ATermList) t);
              ATerm i_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_70;
          t = list_tokenize_1_0(k_136, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm j_71 = ATgetFirst((ATermList) t);
          ATerm k_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, m_70);
        }
      else
        {
          ATerm c_71 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_71 = ATgetFirst((ATermList) t);
              ATerm m_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_70;
          t = list_tokenize_1_0(k_136, t);
          c_71 = t;
          t = (ATerm) ATinsert(CheckATermList(c_71), m_70);
        }
    }
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm e_71 = NULL;
  e_71 = t;
  t = SSL_implode_string(e_71);
  return(t);
}
static ATerm k_15 (ATerm a_55, ATerm w_481, ATerm t)
{
  t = SSL_explode_string(w_481);
  {
    static ATerm q_27 (ATerm t);
    static ATerm q_27 (ATerm t)
    {
      ATerm d_71 = NULL;
      static ATerm s_27 (ATerm t);
      static ATerm s_27 (ATerm t)
      {
        if(((d_71 != NULL) && (d_71 != t)))
          _fail(t);
        else
          d_71 = t;
        return(t);
      }
      if(((d_71 != NULL) && (d_71 != t)))
        _fail(t);
      else
        d_71 = t;
      t = a_55;
      t = fetch_1_0(s_27, t);
      return(t);
    }
    t = list_tokenize_1_0(q_27, t);
  }
  t = map_1_0(t_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm y_71 = NULL;
  y_71 = t;
  {
    ATerm n_71 = t;
    int o_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL;
        t = SSL_filemode(y_71);
        if(match_cons(t, sym__2))
          {
            z_38 = ATgetArgument(t, 0);
            {
              ATerm p_71 = ATgetArgument(t, 1);
              if(((ATgetType(p_71) != AT_INT) || (ATgetInt((ATermInt) p_71) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_38;
        LocalPopChoice(o_71);
      }
    else
      {
        t = n_71;
        {
          ATerm k_39 = NULL,m_39 = NULL;
          t = term_q_71;
          m_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_71, y_71);
          t = j_16(m_39, y_71, t);
          k_39 = t;
          t = SSL_perror(k_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_15 (ATerm v_74, ATerm u_74, ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  g_72 = t;
  {
    ATerm r_71 = t;
    int s_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_72 = NULL,i_72 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_60);
        i_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_74, (ATerm) ATinsert(ATempty, term_u_60));
        t = z_15(u_74, i_72, t);
        t = filemode_0_0(t);
        h_72 = t;
        t = SSL_S_ISDIR(h_72);
        t = g_72;
        LocalPopChoice(s_71);
        {
          ATerm j_72 = NULL,s_72 = NULL,v_72 = NULL;
          t = (ATerm) ATinsert(ATempty, term_t_71);
          v_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_t_71), v_74);
          t = k_15(v_72, v_74, t);
          t = last_0_0(t);
          j_72 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_72), term_u_71), u_74);
          s_72 = t;
          t = SSL_concat_strings(s_72);
        }
      }
    else
      {
        t = r_71;
        t = u_74;
      }
  }
  f_72 = t;
  t = SSL_copy(v_74, f_72);
  return(t);
}
static ATerm m_15 (ATerm u_68, ATerm t)
{
  t = SSL_hashtable_keys(u_68);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_72 = NULL,x_72 = NULL;
  static ATerm u_27 (ATerm t);
  static ATerm u_27 (ATerm t)
  {
    ATerm b_73 = NULL,c_73 = NULL;
    b_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_72), b_73);
    t = d_16(not_null(w_72), b_73, t);
    c_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_73, c_73);
    return(t);
  }
  if(((w_72 != NULL) && (w_72 != t)))
    _fail(t);
  else
    w_72 = t;
  t = lookup_table_0_1(w_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(x_72, t);
  t = map_1_0(u_27, t);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = debug_1_0(x_27, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = term_v_71;
  return(t);
}
static ATerm g_74 (ATerm i_73, ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
  t = term_w_71;
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_73);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_71, (ATerm) ATmakeAppl(sym_Tool_1, i_73));
  t = d_16(n_73, o_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_71 = ATgetFirst((ATermList) t);
      if(match_cons(x_71, sym__2))
        {
          ATerm a_72 = ATgetArgument(x_71, 0);
          m_73 = ATgetArgument(x_71, 1);
        }
      else
        _fail(t);
      {
        ATerm z_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_73;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_v_71;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_w_71;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_b_72;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_72 = t;
  int d_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_73 = NULL,s_73 = NULL,u_73 = NULL;
      t = if_verbose5_1_0(w_27, t);
      t = xtc_load_0_0(t);
      u_73 = t;
      if(match_cons(t, sym__2))
        {
          p_73 = ATgetArgument(t, 0);
          s_73 = ATgetArgument(t, 1);
          {
            ATerm e_72 = t;
            int t_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
                t = term_w_71;
                y_73 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_73);
                z_73 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_71, (ATerm) ATmakeAppl(sym_Tool_1, p_73));
                t = d_16(y_73, z_73, t);
                {
                  static ATerm y_27 (ATerm t);
                  static ATerm y_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((s_73 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((x_73 != NULL) && (x_73 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_73 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_27, t);
                }
                t = not_null(x_73);
                LocalPopChoice(t_72);
              }
            else
              {
                t = e_72;
                t = g_74(u_73, t);
              }
          }
        }
      else
        {
          t = g_74(u_73, t);
        }
      t = if_verbose5_1_0(z_27, t);
      LocalPopChoice(d_72);
    }
  else
    {
      t = c_72;
      {
        ATerm f_74 = NULL,z_39 = NULL,a_40 = NULL;
        f_74 = t;
        t = term_h_38;
        z_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_72), f_74), term_u_72);
        a_40 = t;
        t = SSL_printnl(z_39, a_40);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_72), f_74), term_u_72);
        t = if_verbose5_1_0(c_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_74 = NULL,k_74 = NULL;
  t = term_d_38;
  i_74 = t;
  t = term_z_72;
  k_74 = t;
  t = term_a_73;
  t = d_16(i_74, k_74, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_73), term_v_70), term_v_73), term_t_73), term_r_73), term_v_70), term_q_73), term_l_73), term_k_73), term_j_73), term_h_73), term_g_73), term_f_73), term_e_73), term_d_73);
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_74 = NULL;
  t = term_p_39;
  t = k_0(t);
  m_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_74), m_74), term_e_74), term_v_70), term_d_74), term_v_70), term_c_74), term_b_74), term_v_70), term_a_74);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
  p_74 = t;
  {
    ATerm j_74 = t;
    int l_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_74 = ATgetFirst((ATermList) t);
                ATerm o_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_74;
          }
        LocalPopChoice(l_74);
      }
    else
      {
        t = j_74;
        t = (ATerm) ATinsert(ATempty, p_74);
      }
  }
  q_74 = t;
  t = term_s_39;
  r_74 = t;
  t = SSL_printnl(r_74, q_74);
  t = p_74;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_75 = ATgetFirst((ATermList) t);
      d_75 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_75 = NULL,j_75 = NULL;
        static ATerm e_28 (ATerm t);
        static ATerm e_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_75)), not_null(j_75));
          return(t);
        }
        t = d_75;
        t = h_0(t);
        if(((i_75 != NULL) && (i_75 != t)))
          _fail(t);
        else
          i_75 = t;
        t = c_75;
        t = f_0(t);
        if(((j_75 != NULL) && (j_75 != t)))
          _fail(t);
        else
          j_75 = t;
        t = d_75;
        t = reverse_acc_2_0(f_0, e_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_39;
      t = h_0(t);
    }
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,s_18 = NULL;
  x_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_75);
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_75);
  s_18 = t;
  t = SSLsetAnnotations(s_18, v_75);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm c_76 = NULL;
  c_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_76), term_w_74);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  ATerm x_74 = t;
  int y_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_75 = NULL,t_75 = NULL;
      t = term_d_38;
      r_75 = t;
      t = term_z_72;
      t_75 = t;
      t = term_a_73;
      t = d_16(r_75, t_75, t);
      LocalPopChoice(y_74);
    }
  else
    {
      t = x_74;
      t = fetch_1_0(f_28, t);
    }
  {
    ATerm z_74 = t;
    int a_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_148(t);
        t = echo_0_0(t);
        LocalPopChoice(a_75);
      }
    else
      {
        t = z_74;
      }
  }
  t = term_b_75;
  t = echo_0_0(t);
  t = term_e_75;
  p_75 = t;
  t = term_f_75;
  q_75 = t;
  t = term_g_75;
  t = d_16(p_75, q_75, t);
  t = reverse_acc_2_0(_id, g_28, t);
  t = map_1_0(h_28, t);
  t = term_h_75;
  t = echo_0_0(t);
  {
    ATerm k_75 = t;
    int l_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_148(t);
        {
          ATerm m_75 = t;
          int n_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_76 = NULL;
              d_76 = t;
              t = SSL_is_string(d_76);
              t = d_76;
              LocalPopChoice(n_75);
              {
                ATerm e_76 = NULL;
                e_76 = t;
                t = (ATerm) ATinsert(ATempty, e_76);
              }
            }
          else
            {
              t = m_75;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(l_75);
      }
    else
      {
        t = k_75;
      }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_76 = NULL,m_76 = NULL;
  static ATerm j_28 (ATerm t);
  static ATerm k_28 (ATerm t);
  static ATerm j_28 (ATerm t)
  {
    static ATerm l_28 (ATerm t);
    static ATerm l_28 (ATerm t)
    {
      t = not_null(k_76);
      return(t);
    }
    t = short_description_1_0(l_28, t);
    return(t);
  }
  static ATerm k_28 (ATerm t)
  {
    static ATerm q_28 (ATerm t);
    static ATerm q_28 (ATerm t)
    {
      t = not_null(k_76);
      return(t);
    }
    t = long_description_1_0(q_28, t);
    return(t);
  }
  m_76 = t;
  {
    ATerm o_75 = t;
    int s_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_76 = NULL,o_76 = NULL;
        t = term_d_38;
        n_76 = t;
        t = term_z_72;
        o_76 = t;
        t = term_a_73;
        t = d_16(n_76, o_76, t);
        if(((k_76 != NULL) && (k_76 != t)))
          _fail(t);
        else
          k_76 = t;
        LocalPopChoice(s_75);
      }
    else
      {
        t = o_75;
        {
          static ATerm i_28 (ATerm t);
          static ATerm i_28 (ATerm t)
          {
            ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,u_18 = NULL;
            r_76 = t;
            if(match_cons(t, sym_Program_1))
              {
                q_76 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_76);
            p_76 = t;
            t = q_76;
            if(((k_76 != NULL) && (k_76 != t)))
              _fail(t);
            else
              k_76 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, q_76);
            u_18 = t;
            t = SSLsetAnnotations(u_18, p_76);
            return(t);
          }
          t = fetch_1_0(i_28, t);
        }
      }
  }
  t = m_76;
  t = default_system_usage_2_0(j_28, k_28, t);
  return(t);
}
static ATerm v_28 (ATerm t)
{
  ATerm t_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL;
  if(match_cons(t, sym__3))
    {
      t_76 = ATgetArgument(t, 0);
      v_76 = ATgetArgument(t, 1);
      w_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_76), w_76), term_z_75), v_76), term_y_75), t_76), term_u_75);
  x_76 = t;
  t = SSL_concat_strings(x_76);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(v_28, t);
  return(t);
}
static ATerm n_15 (ATerm m_43, ATerm z_344, ATerm t)
{
  static ATerm w_28 (ATerm t);
  static ATerm w_28 (ATerm t)
  {
    if((m_43 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = z_344;
  t = fetch_1_0(w_28, t);
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL;
  a_77 = t;
  t = SSL_explode_term(a_77);
  if(match_cons(t, sym__2))
    {
      ATerm b_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_76 = ATgetArgument(t, 1);
        if(((ATgetType(f_76) == AT_LIST) && !(ATisEmpty(f_76))))
          {
            z_76 = ATgetFirst((ATermList) f_76);
            {
              ATerm g_76 = (ATerm) ATgetNext((ATermList) f_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_76;
  return(t);
}
ATerm get_all_warnings_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
  t = map_1_0(x_28, t);
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm b_77 = NULL;
  if(match_cons(t, sym__3))
    {
      b_77 = ATgetArgument(t, 0);
      {
        ATerm h_76 = ATgetArgument(t, 1);
      }
      {
        ATerm i_76 = ATgetArgument(t, 2);
        if((ATgetSymbol((ATermAppl) i_76) != ATmakeSymbol("on", 0, ATtrue)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_77;
  return(t);
}
ATerm get_default_warnings_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
  t = filter_1_0(y_28, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm c_77 = NULL;
  static ATerm b_29 (ATerm t);
  static ATerm b_29 (ATerm t)
  {
    t = w_126(t);
    if(((c_77 != NULL) && (c_77 != t)))
      _fail(t);
    else
      c_77 = t;
    return(t);
  }
  t = fetch_1_0(b_29, t);
  t = not_null(c_77);
  return(t);
}
ATerm warning_exists_0_0 (ATerm t)
{
  ATerm d_77 = NULL;
  static ATerm c_29 (ATerm t);
  static ATerm c_29 (ATerm t)
  {
    if(match_cons(t, sym__3))
      {
        if(((d_77 != NULL) && (d_77 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          d_77 = ATgetArgument(t, 0);
        {
          ATerm j_76 = ATgetArgument(t, 1);
        }
        {
          ATerm l_76 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    return(t);
  }
  if(((d_77 != NULL) && (d_77 != t)))
    _fail(t);
  else
    d_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
  t = fetch_elem_1_0(c_29, t);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  if(match_string(t, "--warning"))
    {
      t = l_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = l_77;
    }
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
  t = Display_possible_warnings_0_0(t);
  j_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_78), term_y_76), term_u_76), term_s_76);
  k_78 = t;
  t = SSL_concat_strings(k_78);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm o_77 = NULL,r_77 = NULL;
  r_77 = t;
  t = SSL_explode_term(r_77);
  if(match_cons(t, sym__2))
    {
      ATerm e_77 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_77) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_77 = ATgetArgument(t, 1);
        if(((ATgetType(f_77) == AT_LIST) && !(ATisEmpty(f_77))))
          {
            o_77 = ATgetFirst((ATermList) f_77);
            {
              ATerm h_77 = (ATerm) ATgetNext((ATermList) f_77);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_77;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm g_77 = NULL,i_77 = NULL,j_77 = NULL;
  static ATerm e_29 (ATerm t);
  static ATerm e_29 (ATerm t)
  {
    if(((j_77 != NULL) && (j_77 != t)))
      _fail(t);
    else
      j_77 = t;
    {
      ATerm k_77 = t;
      int p_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = j_77;
          LocalPopChoice(p_77);
          {
            ATerm m_77 = NULL,n_77 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_r_56), term_n_56), term_k_56);
            t = map_1_0(g_29, t);
            m_77 = t;
            t = term_f_56;
            n_77 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_f_56, m_77);
            t = i_16(n_77, m_77, t);
          }
        }
      else
        {
          t = k_77;
          t = j_77;
          {
            ATerm q_77 = t;
            int s_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(j_77);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm z_77 = ATgetFirst((ATermList) t);
                    if(((ATgetType(z_77) != AT_INT) || (ATgetInt((ATermInt) z_77) != 110)))
                      _fail(t);
                    {
                      ATerm b_78 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(b_78) == AT_LIST) && !(ATisEmpty(b_78))))
                        {
                          ATerm e_78 = ATgetFirst((ATermList) b_78);
                          if(((ATgetType(e_78) != AT_INT) || (ATgetInt((ATermInt) e_78) != 111)))
                            _fail(t);
                          {
                            ATerm l_78 = (ATerm) ATgetNext((ATermList) b_78);
                            if(((ATgetType(l_78) == AT_LIST) && !(ATisEmpty(l_78))))
                              {
                                ATerm m_78 = ATgetFirst((ATermList) l_78);
                                if(((ATgetType(m_78) != AT_INT) || (ATgetInt((ATermInt) m_78) != 45)))
                                  _fail(t);
                                if(((g_77 != NULL) && (g_77 != (ATerm) ATgetNext((ATermList) l_78))))
                                  _fail((ATerm) ATgetNext((ATermList) l_78));
                                else
                                  g_77 = (ATerm) ATgetNext((ATermList) l_78);
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = j_77;
                LocalPopChoice(s_77);
                {
                  ATerm t_77 = NULL,u_77 = NULL;
                  t = SSL_implode_string(g_77);
                  if(((i_77 != NULL) && (i_77 != t)))
                    _fail(t);
                  else
                    i_77 = t;
                  t = warning_exists_0_0(t);
                  t = term_f_56;
                  {
                    ATerm n_78 = t;
                    int r_78 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_77 = NULL,w_77 = NULL;
                        t = term_d_38;
                        v_77 = t;
                        t = term_f_56;
                        w_77 = t;
                        t = term_g_56;
                        t = d_16(v_77, w_77, t);
                        LocalPopChoice(r_78);
                      }
                    else
                      {
                        t = n_78;
                        t = get_default_warnings_0_0(t);
                      }
                  }
                  {
                    static ATerm i_29 (ATerm t);
                    static ATerm i_29 (ATerm t)
                    {
                      ATerm f_79 = t;
                      if((PushChoice() == 0))
                        {
                          if((i_77 != t))
                            {
                              _fail(t);
                            }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_79;
                        }
                      return(t);
                    }
                    t = filter_1_0(i_29, t);
                  }
                  t_77 = t;
                  t = term_f_56;
                  u_77 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_f_56, t_77);
                  t = i_16(u_77, t_77, t);
                }
              }
            else
              {
                t = q_77;
                t = j_77;
                {
                  ATerm g_79 = t;
                  int h_79 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_77 = NULL;
                      t = j_77;
                      t = get_all_warnings_0_0(t);
                      x_77 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_77, x_77);
                      t = n_15(j_77, x_77, t);
                      t = j_77;
                      LocalPopChoice(h_79);
                      {
                        ATerm y_77 = NULL,a_78 = NULL;
                        t = term_f_56;
                        y_77 = t;
                        t = (ATerm) ATinsert(ATempty, j_77);
                        a_78 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_f_56, (ATerm) ATinsert(ATempty, j_77));
                        t = y_15(y_77, a_78, t);
                      }
                    }
                  else
                    {
                      t = g_79;
                      {
                        ATerm c_78 = NULL,d_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
                        t = term_d_38;
                        h_78 = t;
                        t = term_z_72;
                        i_78 = t;
                        t = term_a_73;
                        t = d_16(h_78, i_78, t);
                        c_78 = t;
                        t = term_h_38;
                        f_78 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_79), j_77), term_i_79), c_78);
                        g_78 = t;
                        t = SSL_printnl(f_78, g_78);
                        t = term_y_38;
                        d_78 = t;
                        t = SSL_exit(d_78);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_79), j_77), term_i_79), c_78);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(d_29, e_29, f_29, t);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  ATerm o_78 = NULL;
  o_78 = t;
  if(match_string(t, "-S"))
    {
      t = o_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_78;
    }
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL;
  t = term_e_38;
  p_78 = t;
  t = term_u_37;
  q_78 = t;
  t = term_q_79;
  t = i_16(p_78, q_78, t);
  t = term_r_79;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = term_s_79;
  return(t);
}
static ATerm t_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_29 (ATerm t)
{
  ATerm s_78 = NULL,v_78 = NULL,c_79 = NULL;
  s_78 = t;
  t = SSL_string_to_int(s_78);
  v_78 = t;
  t = term_e_38;
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_38, v_78);
  t = i_16(c_79, v_78, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_78);
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = term_u_79;
  return(t);
}
static ATerm z_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_30 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  t = term_z_79;
  d_79 = t;
  t = term_p_39;
  e_79 = t;
  t = term_b_80;
  t = i_16(d_79, e_79, t);
  t = term_c_80;
  return(t);
}
static ATerm m_30 (ATerm t)
{
  t = term_d_80;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_80 = t;
  int f_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_29, q_29, r_29, t);
      LocalPopChoice(f_80);
    }
  else
    {
      t = e_80;
      {
        ATerm g_80 = t;
        int h_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_29, v_29, w_29, t);
            LocalPopChoice(h_80);
          }
        else
          {
            t = g_80;
            t = Option_3_0(z_29, l_30, m_30, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,o_79 = NULL;
  j_79 = t;
  t = term_d_38;
  m_79 = t;
  t = term_r_38;
  o_79 = t;
  t = term_s_38;
  t = d_16(m_79, o_79, t);
  {
    static ATerm p_30 (ATerm t);
    static ATerm p_30 (ATerm t)
    {
      ATerm p_79 = NULL;
      p_79 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = j_79;
        }
      else
        {
          t = p_79;
        }
      return(t);
    }
    t = map_1_0(p_30, t);
  }
  k_79 = t;
  t = term_r_38;
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, k_79);
  t = i_16(l_79, k_79, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm y_143 (ATerm), ATerm t)
{
  ATerm t_79 = NULL;
  t_79 = t;
  {
    ATerm i_80 = t;
    int k_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_79 = NULL,y_79 = NULL,a_80 = NULL;
        t = term_d_38;
        y_79 = t;
        t = term_e_38;
        a_80 = t;
        t = term_f_38;
        t = d_16(y_79, a_80, t);
        x_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_79, term_e_47);
        t = geq_0_0(t);
        t = t_79;
        t = y_143(t);
        LocalPopChoice(k_80);
      }
    else
      {
        t = i_80;
        t = t_79;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm x_143 (ATerm), ATerm t)
{
  ATerm j_80 = NULL;
  j_80 = t;
  {
    ATerm o_80 = t;
    int p_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
        t = term_d_38;
        m_80 = t;
        t = term_e_38;
        n_80 = t;
        t = term_f_38;
        t = d_16(m_80, n_80, t);
        l_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_80, term_w_44);
        t = geq_0_0(t);
        t = j_80;
        t = x_143(t);
        LocalPopChoice(p_80);
      }
    else
      {
        t = o_80;
        t = j_80;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL;
  g_81 = t;
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_80 = t;
    int r_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_81;
        if((h_81 != t))
          {
            _fail(t);
          }
        t = g_81;
        LocalPopChoice(r_80);
      }
    else
      {
        t = q_80;
        t = (ATerm) ATmakeAppl(sym__2, h_81, i_81);
        {
          ATerm s_80 = t;
          int t_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_81, i_81);
              LocalPopChoice(t_80);
            }
          else
            {
              t = s_80;
              t = SSL_gtr(h_81, i_81);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_81, i_81);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm z_143 (ATerm), ATerm t)
{
  ATerm p_81 = NULL;
  p_81 = t;
  {
    ATerm u_80 = t;
    int v_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_81 = NULL,t_81 = NULL,w_81 = NULL;
        t = term_d_38;
        t_81 = t;
        t = term_e_38;
        w_81 = t;
        t = term_f_38;
        t = d_16(t_81, w_81, t);
        r_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_81, term_y_50);
        t = geq_0_0(t);
        t = p_81;
        t = z_143(t);
        LocalPopChoice(v_80);
      }
    else
      {
        t = u_80;
        t = p_81;
      }
  }
  return(t);
}
static ATerm q_15 (ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm x_48, ATerm w_48, ATerm t)
{
  t = z_130(t);
  {
    static ATerm t_30 (ATerm t);
    static ATerm t_30 (ATerm t)
    {
      ATerm y_81 = NULL;
      y_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_48, y_81);
      t = y_130(t);
      return(t);
    }
    t = fetch_1_0(t_30, t);
  }
  t = w_48;
  return(t);
}
static ATerm r_15 (ATerm v_130 (ATerm), ATerm t_48, ATerm s_48, ATerm t)
{
  static ATerm w_82 (ATerm t);
  static ATerm w_82 (ATerm t)
  {
    ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
    r_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_82 = ATgetFirst((ATermList) t);
            t_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_80 = t;
          int x_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_82;
              {
                static ATerm u_30 (ATerm t);
                static ATerm u_30 (ATerm t)
                {
                  t = s_48;
                  return(t);
                }
                t = q_15(v_130, u_30, s_82, t_82, t);
              }
              t = w_82(t);
              LocalPopChoice(x_80);
            }
          else
            {
              t = w_80;
              {
                ATerm r_41 = NULL,a_42 = NULL,c_19 = NULL;
                t = SSLgetAnnotations(r_82);
                r_41 = t;
                t = t_82;
                t = w_82(t);
                a_42 = t;
                t = (ATerm) ATinsert(CheckATermList(a_42), s_82);
                c_19 = t;
                t = SSLsetAnnotations(c_19, r_41);
              }
            }
        }
      }
    return(t);
  }
  t = t_48;
  t = w_82(t);
  return(t);
}
static ATerm v_30 (ATerm t)
{
  ATerm l_83 = NULL;
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      if((l_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm v_64, ATerm w_64, ATerm x_64, ATerm t)
{
  ATerm z_82 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
  {
    ATerm y_80 = t;
    int z_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_81 = ATgetArgument(t, 0);
            ATerm b_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
        t = d_16(v_64, w_64, t);
        LocalPopChoice(z_80);
      }
    else
      {
        t = y_80;
        t = (ATerm) ATempty;
      }
  }
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_83, x_64);
  t = r_15(v_30, d_83, x_64, t);
  c_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_64, w_64, c_83);
  t = lookup_table_0_1(v_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(w_64, c_83, e_83, t);
  t = z_82;
  return(t);
}
ATerm map_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  static ATerm a_84 (ATerm t);
  static ATerm a_84 (ATerm t)
  {
    ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
    x_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_83;
      }
    else
      {
        ATerm z_42 = NULL,d_43 = NULL,e_43 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_83 = ATgetFirst((ATermList) t);
            z_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_83);
        z_42 = t;
        t = y_83;
        t = m_126(t);
        d_43 = t;
        t = z_83;
        t = a_84(t);
        e_43 = t;
        t = (ATerm) ATinsert(CheckATermList(e_43), d_43);
        e_19 = t;
        t = SSLsetAnnotations(e_19, z_42);
      }
    return(t);
  }
  t = a_84(t);
  return(t);
}
static ATerm t_15 (ATerm g_140 (ATerm), ATerm f_65, ATerm e_65, ATerm t)
{
  static ATerm w_30 (ATerm t);
  static ATerm w_30 (ATerm t)
  {
    ATerm c_84 = NULL,d_84 = NULL;
    if(match_cons(t, sym__2))
      {
        c_84 = ATgetArgument(t, 0);
        d_84 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_65, c_84, d_84);
    t = g_140(t);
    return(t);
  }
  t = e_65;
  t = map_1_0(w_30, t);
  return(t);
}
static ATerm v_84 (ATerm l_84, ATerm t)
{
  t = SSL_fclose(l_84);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL;
  p_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_84 = ATgetArgument(t, 0);
      {
        ATerm c_81 = t;
        int d_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_84);
            LocalPopChoice(d_81);
          }
        else
          {
            t = c_81;
            t = v_84(p_84, t);
          }
      }
    }
  else
    {
      t = v_84(p_84, t);
    }
  return(t);
}
static ATerm u_15 (ATerm s_42, ATerm t)
{
  t = SSL_read_term_from_stream(s_42);
  return(t);
}
static ATerm v_15 (ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm w_84 = NULL;
  t = SSL_fopen(o_58, p_58);
  w_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_84 = NULL;
  t = SSL_stdin_stream();
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_84 = NULL;
  t = SSL_stdout_stream();
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_85 = NULL;
  t = SSL_stderr_stream();
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_85);
  return(t);
}
static ATerm o_86 (ATerm g_85, ATerm t)
{
  ATerm h_85 = NULL;
  t = SSL_explode_term(g_85);
  if(match_cons(t, sym__2))
    {
      ATerm e_81 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_81) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_81 = ATgetArgument(t, 1);
        if(((ATgetType(f_81) == AT_LIST) && !(ATisEmpty(f_81))))
          {
            h_85 = ATgetFirst((ATermList) f_81);
            {
              ATerm j_81 = (ATerm) ATgetNext((ATermList) f_81);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_86 (ATerm o_85, ATerm p_85, ATerm r_85, ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,x_85 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(r_85);
  u_85 = t;
  t = o_85;
  if(match_cons(t, sym_Path_1))
    {
      x_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_85, p_85);
  g_19 = t;
  t = SSLsetAnnotations(g_19, u_85);
  if(match_cons(t, sym__2))
    {
      s_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(s_85, t_85, t);
  return(t);
}
static ATerm q_86 (ATerm z_85, ATerm a_86, ATerm d_86, ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL,j_86 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(d_86);
  g_86 = t;
  t = SSL_is_string(z_85);
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_86, a_86);
  h_19 = t;
  t = SSLsetAnnotations(h_19, g_86);
  if(match_cons(t, sym__2))
    {
      e_86 = ATgetArgument(t, 0);
      f_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(e_86, f_86, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  if(match_cons(t, sym__2))
    {
      m_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
      {
        ATerm k_81 = t;
        int l_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_86(l_86, t);
            LocalPopChoice(l_81);
          }
        else
          {
            t = k_81;
            {
              ATerm m_81 = t;
              int n_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_86(m_86, n_86, l_86, t);
                  LocalPopChoice(n_81);
                }
              else
                {
                  t = m_81;
                  t = q_86(m_86, n_86, l_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_86(l_86, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,d_87 = NULL;
  d_87 = t;
  {
    ATerm o_81 = t;
    int q_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_87, term_s_81);
        t = w_15(t);
        LocalPopChoice(q_81);
      }
    else
      {
        t = o_81;
        {
          ATerm y_43 = NULL,z_43 = NULL;
          t = term_u_81;
          z_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_81, d_87);
          t = j_16(z_43, d_87, t);
          y_43 = t;
          t = SSL_perror(y_43);
          _fail(t);
        }
      }
  }
  t_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_15(u_86, t);
  s_86 = t;
  t = t_86;
  t = fclose_0_0(t);
  t = s_86;
  return(t);
}
static ATerm x_30 (ATerm t)
{
  t = term_v_81;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_x_81;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_81 = t;
  int a_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_87 = NULL,h_87 = NULL;
      g_87 = t;
      t = (ATerm) ATinsert(ATempty, term_b_82);
      h_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_87, (ATerm) ATinsert(ATempty, term_b_82));
      t = z_15(g_87, h_87, t);
      LocalPopChoice(a_82);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_81;
      {
        ATerm c_82 = t;
        int d_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_82 = t;
            if((PushChoice() == 0))
              {
                ATerm j_87 = NULL,k_87 = NULL;
                j_87 = t;
                t = (ATerm) ATinsert(ATempty, term_u_60);
                k_87 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_87, (ATerm) ATinsert(ATempty, term_u_60));
                t = z_15(j_87, k_87, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_82;
              }
            t = debug_1_0(x_30, t);
            LocalPopChoice(d_82);
          }
        else
          {
            t = c_82;
            t = debug_1_0(y_30, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = debug_1_0(a_31, t);
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_f_82;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  t = debug_1_0(c_31, t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  t = term_g_82;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,f_88 = NULL;
  c_88 = t;
  t = term_h_38;
  d_88 = t;
  t = (ATerm) ATinsert(ATempty, term_h_82);
  f_88 = t;
  t = SSL_printnl(d_88, f_88);
  t = c_88;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,l_88 = NULL;
  if(match_cons(t, sym__3))
    {
      h_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
      l_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_15(h_88, i_88, l_88, t);
  return(t);
}
static ATerm f_31 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL;
  n_88 = t;
  t = term_h_38;
  o_88 = t;
  t = (ATerm) ATinsert(ATempty, term_i_82);
  p_88 = t;
  t = SSL_printnl(o_88, p_88);
  t = n_88;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,v_88 = NULL;
  s_88 = t;
  t = term_h_38;
  t_88 = t;
  t = (ATerm) ATinsert(ATempty, term_h_82);
  v_88 = t;
  t = SSL_printnl(t_88, v_88);
  t = s_88;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  m_87 = t;
  t = if_verbose5_1_0(z_30, t);
  {
    ATerm j_82 = t;
    if((PushChoice() == 0))
      {
        ATerm a_88 = NULL,b_88 = NULL;
        t = term_w_71;
        a_88 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_87);
        b_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_71, (ATerm) ATmakeAppl(sym_Imported_1, m_87));
        t = d_16(a_88, b_88, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_82;
      }
  }
  o_87 = t;
  t = term_w_71;
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_71, term_k_82, (ATerm) ATinsert(ATempty, m_87));
  t = lookup_table_0_1(v_87, t);
  z_87 = t;
  t = term_k_82;
  w_87 = t;
  t = (ATerm) ATinsert(ATempty, m_87);
  x_87 = t;
  t = z_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(w_87, x_87, y_87, t);
  t = o_87;
  t = if_verbose4_1_0(b_31, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(d_31, t);
  n_87 = t;
  t = term_w_71;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_71, n_87);
  t = t_15(e_31, u_87, n_87, t);
  t = if_verbose6_1_0(f_31, t);
  t = term_w_71;
  p_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_71, (ATerm)ATmakeAppl(sym_Imported_1, m_87), (ATerm) ATempty);
  t = lookup_table_0_1(p_87, t);
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_87);
  q_87 = t;
  t = (ATerm) ATempty;
  r_87 = t;
  t = t_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(q_87, r_87, s_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_71, (ATerm)ATmakeAppl(sym_Imported_1, m_87), (ATerm) ATempty);
  t = if_verbose4_1_0(g_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm a_90 = NULL,c_90 = NULL,d_90 = NULL;
  a_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_90;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_90 = ATgetFirst((ATermList) t);
          d_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_82 = t;
        int m_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_44 = NULL,m_44 = NULL,n_44 = NULL,l_19 = NULL;
            t = SSLgetAnnotations(a_90);
            i_44 = t;
            t = c_90;
            t = n_134(t);
            m_44 = t;
            t = d_90;
            t = filter_1_0(n_134, t);
            n_44 = t;
            t = (ATerm) ATinsert(CheckATermList(n_44), m_44);
            l_19 = t;
            t = SSLsetAnnotations(l_19, i_44);
            LocalPopChoice(m_82);
          }
        else
          {
            t = l_82;
            t = d_90;
            t = filter_1_0(n_134, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  static ATerm g_90 (ATerm t);
  static ATerm g_90 (ATerm t)
  {
    ATerm n_82 = t;
    int o_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_119(t);
        t = g_90(t);
        LocalPopChoice(o_82);
      }
    else
      {
        t = n_82;
        t = c_119(t);
      }
    return(t);
  }
  t = g_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_82 = t;
  int q_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_90 = NULL,i_90 = NULL;
      t = term_d_38;
      h_90 = t;
      t = term_u_82;
      i_90 = t;
      t = term_v_82;
      t = d_16(h_90, i_90, t);
      LocalPopChoice(q_82);
    }
  else
    {
      t = p_82;
      {
        ATerm x_82 = t;
        int y_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_90 = NULL;
            t = term_a_83;
            j_90 = t;
            t = SSL_getenv(j_90);
            LocalPopChoice(y_82);
          }
        else
          {
            t = x_82;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm h_31 (ATerm t)
{
  t = debug_1_0(j_31, t);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_b_83;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL;
  t = term_w_71;
  a_91 = t;
  t = term_f_83;
  b_91 = t;
  t = term_g_83;
  t = d_16(a_91, b_91, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_83 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_83;
      }
  }
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(m_31, t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_i_83;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_90 = NULL;
  t = if_verbose5_1_0(h_31, t);
  l_90 = t;
  {
    ATerm j_83 = t;
    int k_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_90 = NULL,n_90 = NULL;
        t = term_w_71;
        m_90 = t;
        t = term_k_82;
        n_90 = t;
        t = term_m_83;
        t = d_16(m_90, n_90, t);
        LocalPopChoice(k_83);
      }
    else
      {
        t = j_83;
        {
          ATerm t_90 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_90 = t;
          t = repeat_2_0(k_31, _id, t);
          t = t_90;
        }
      }
  }
  t = l_90;
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
static ATerm e_92 (ATerm j_91, ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL,q_91 = NULL;
  t = term_w_71;
  p_91 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_91);
  q_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_71, (ATerm) ATmakeAppl(sym_Tool_1, j_91));
  t = d_16(p_91, q_91, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_83 = ATgetFirst((ATermList) t);
      if(match_cons(n_83, sym__2))
        {
          ATerm p_83 = ATgetArgument(n_83, 0);
          o_91 = ATgetArgument(n_83, 1);
        }
      else
        _fail(t);
      {
        ATerm o_83 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_91;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  t = debug_1_0(p_31, t);
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_v_71;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,v_91 = NULL;
  t = xtc_load_0_0(t);
  v_91 = t;
  if(match_cons(t, sym__2))
    {
      r_91 = ATgetArgument(t, 0);
      s_91 = ATgetArgument(t, 1);
      {
        ATerm q_83 = t;
        int r_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_91 = NULL,c_92 = NULL,d_92 = NULL;
            t = term_w_71;
            c_92 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, r_91);
            d_92 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_w_71, (ATerm) ATmakeAppl(sym_Tool_1, r_91));
            t = d_16(c_92, d_92, t);
            {
              static ATerm n_31 (ATerm t);
              static ATerm n_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((s_91 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((z_91 != NULL) && (z_91 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(n_31, t);
            }
            t = not_null(z_91);
            LocalPopChoice(r_83);
          }
        else
          {
            t = q_83;
            t = e_92(v_91, t);
          }
      }
    }
  else
    {
      t = e_92(v_91, t);
    }
  t = if_verbose5_1_0(o_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
      t = term_p_39;
      t = r_0(t);
      s_92 = t;
      t = term_e_75;
      t_92 = t;
      t = term_f_75;
      u_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_75, term_f_75, s_92);
      t = e_16(t_92, u_92, s_92, t);
      _fail(t);
    }
  else
    {
      ATerm c_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_92 = ATgetFirst((ATermList) t);
          m_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_92 = ATgetFirst((ATermList) t);
          o_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_92;
      t = o_0(t);
      t = n_92;
      t = p_0(t);
      c_93 = t;
      t = (ATerm) ATinsert(CheckATermList(o_92), c_93);
    }
  return(t);
}
static ATerm x_15 (ATerm w_78, ATerm x_78, ATerm t)
{
  ATerm s_83 = t;
  int t_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_93 = NULL,e_93 = NULL,g_93 = NULL;
      t = term_d_38;
      g_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_38, w_78);
      t = d_16(g_93, w_78, t);
      t = term_d_38;
      d_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_38, w_78);
      t = lookup_table_0_1(d_93, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          e_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16(w_78, e_93, t);
      t = (ATerm) ATmakeAppl(sym__2, term_d_38, w_78);
      LocalPopChoice(t_83);
    }
  else
    {
      t = s_83;
      t = (ATerm) ATmakeAppl(sym__2, w_78, x_78);
      t = i_16(w_78, x_78, t);
    }
  return(t);
}
static ATerm y_15 (ATerm z_78, ATerm y_78, ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,q_93 = NULL;
  t = z_78;
  {
    ATerm u_83 = t;
    int v_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_93 = NULL;
        t = term_d_38;
        v_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_38, z_78);
        t = d_16(v_93, z_78, t);
        LocalPopChoice(v_83);
      }
    else
      {
        t = u_83;
        t = (ATerm) ATempty;
      }
  }
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_78, k_93);
  t = conc_0_0(t);
  j_93 = t;
  t = term_d_38;
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, z_78, j_93);
  t = lookup_table_0_1(l_93, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(z_78, j_93, q_93, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, z_78, j_93);
  return(t);
}
static ATerm z_15 (ATerm c_58, ATerm d_58, ATerm t)
{
  t = SSL_access(c_58, d_58);
  return(t);
}
ATerm at_end_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  static ATerm x_94 (ATerm t);
  static ATerm x_94 (ATerm t)
  {
    ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL;
    w_94 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_94 = ATgetFirst((ATermList) t);
        v_94 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_45 = NULL,i_45 = NULL,n_19 = NULL;
          t = SSLgetAnnotations(w_94);
          c_45 = t;
          t = v_94;
          t = x_94(t);
          i_45 = t;
          t = (ATerm) ATinsert(CheckATermList(i_45), u_94);
          n_19 = t;
          t = SSLsetAnnotations(n_19, c_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_94;
        t = b_127(t);
      }
    return(t);
  }
  t = x_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_93 = NULL,b_94 = NULL,c_94 = NULL;
  z_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_93;
    }
  else
    {
      static ATerm q_31 (ATerm t);
      static ATerm q_31 (ATerm t)
      {
        t = not_null(c_94);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_94 = ATgetFirst((ATermList) t);
          if(((c_94 != NULL) && (c_94 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_94;
      t = at_end_1_0(q_31, t);
    }
  return(t);
}
static ATerm j_95 (ATerm b_95, ATerm t)
{
  ATerm c_95 = NULL;
  t = SSL_explode_term(b_95);
  if(match_cons(t, sym__2))
    {
      ATerm w_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_95;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  g_95 = t;
  if(match_cons(t, sym__2))
    {
      e_95 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
      {
        ATerm b_84 = t;
        int e_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_31 (ATerm t);
            static ATerm v_31 (ATerm t)
            {
              t = f_95;
              return(t);
            }
            t = e_95;
            t = at_end_1_0(v_31, t);
            LocalPopChoice(e_84);
          }
        else
          {
            t = b_84;
            t = j_95(g_95, t);
          }
      }
    }
  else
    {
      t = j_95(g_95, t);
    }
  return(t);
}
static ATerm a_16 (ATerm a_79, ATerm b_79, ATerm t)
{
  ATerm k_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  t = a_79;
  {
    ATerm f_84 = t;
    int g_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_95 = NULL;
        t = term_d_38;
        r_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_38, a_79);
        t = d_16(r_95, a_79, t);
        LocalPopChoice(g_84);
      }
    else
      {
        t = f_84;
        t = (ATerm) ATempty;
      }
  }
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_95, b_79);
  t = conc_0_0(t);
  k_95 = t;
  t = term_d_38;
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, a_79, k_95);
  t = lookup_table_0_1(o_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(a_79, k_95, p_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, a_79, k_95);
  return(t);
}
static ATerm w_31 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  if(match_string(t, "-o"))
    {
      t = t_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_95;
    }
  return(t);
}
static ATerm z_31 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  u_95 = t;
  t = term_n_38;
  v_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, u_95);
  t = i_16(v_95, u_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_95);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_h_84;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_31, z_31, a_32, t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm z_95 = NULL;
  z_95 = t;
  if(match_string(t, "-i"))
    {
      t = z_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_95;
    }
  return(t);
}
static ATerm d_32 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL;
  a_96 = t;
  t = term_x_55;
  b_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_55, a_96);
  t = i_16(b_96, a_96, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_96);
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_i_84;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_32, d_32, e_32, t);
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  if(match_string(t, "-I"))
    {
      t = n_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_96;
    }
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL;
  o_96 = t;
  t = term_t_62;
  p_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_96), term_t_62);
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_62, (ATerm) ATinsert(ATinsert(ATempty, o_96), term_t_62));
  t = a_16(p_96, q_96, t);
  t = term_p_39;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_j_84;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm t_96 = NULL;
  t_96 = t;
  if(match_string(t, "--main"))
    {
      t = t_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = t_96;
    }
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL;
  u_96 = t;
  t = term_d_61;
  v_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_61, u_96);
  t = i_16(v_96, u_96, t);
  t = term_p_39;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_k_84;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm y_96 = NULL;
  y_96 = t;
  if(match_string(t, "--library"))
    {
      t = y_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = y_96;
    }
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL;
  t = term_f_40;
  z_96 = t;
  t = term_p_39;
  a_97 = t;
  t = term_m_84;
  t = i_16(z_96, a_97, t);
  t = term_p_39;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_n_84;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
  b_97 = t;
  t = term_b_40;
  c_97 = t;
  t = (ATerm) ATinsert(ATempty, b_97);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, (ATerm) ATinsert(ATempty, b_97));
  t = a_16(c_97, d_97, t);
  t = term_p_39;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_q_84;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_32 (ATerm t)
{
  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL;
  e_97 = t;
  t = term_c_39;
  f_97 = t;
  t = (ATerm) ATinsert(ATempty, e_97);
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_39, (ATerm) ATinsert(ATempty, e_97));
  t = y_15(f_97, g_97, t);
  t = term_p_39;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  t = term_r_84;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL;
  j_97 = t;
  t = term_s_84;
  n_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_84, j_97);
  t = j_16(n_97, j_97, t);
  k_97 = t;
  t = term_e_39;
  l_97 = t;
  t = (ATerm) ATinsert(ATempty, k_97);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATempty, k_97));
  t = y_15(l_97, m_97, t);
  t = term_p_39;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_t_84;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_33 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL;
  o_97 = t;
  t = term_u_84;
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_84, o_97);
  t = j_16(s_97, o_97, t);
  p_97 = t;
  t = term_r_38;
  q_97 = t;
  t = (ATerm) ATinsert(ATempty, p_97);
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, (ATerm) ATinsert(ATempty, p_97));
  t = y_15(q_97, r_97, t);
  t = term_p_39;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  t = term_z_84;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_33 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,y_97 = NULL;
  t_97 = t;
  t = term_b_85;
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_85, t_97);
  t = j_16(y_97, t_97, t);
  u_97 = t;
  t = term_r_38;
  v_97 = t;
  t = (ATerm) ATinsert(ATempty, u_97);
  w_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, (ATerm) ATinsert(ATempty, u_97));
  t = y_15(v_97, w_97, t);
  t = term_p_39;
  return(t);
}
static ATerm m_33 (ATerm t)
{
  t = term_c_85;
  return(t);
}
static ATerm o_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_33 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL;
  z_97 = t;
  {
    ATerm d_85 = t;
    int e_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_98 = NULL;
        t = (ATerm) ATinsert(ATempty, term_u_60);
        d_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_97, (ATerm) ATinsert(ATempty, term_u_60));
        t = z_15(z_97, d_98, t);
        LocalPopChoice(e_85);
      }
    else
      {
        t = d_85;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_85), z_97), term_f_85);
        {
          ATerm j_85 = t;
          int k_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_46 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_85), z_97), term_f_85);
              a_46 = t;
              t = SSL_concat_strings(a_46);
              t = xtc_find_0_0(t);
              LocalPopChoice(k_85);
            }
          else
            {
              t = j_85;
              {
                ATerm l_98 = NULL;
                t = term_y_38;
                l_98 = t;
                t = SSL_exit(l_98);
              }
            }
        }
      }
  }
  a_98 = t;
  t = term_r_38;
  b_98 = t;
  t = (ATerm) ATinsert(ATempty, a_98);
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, (ATerm) ATinsert(ATempty, a_98));
  t = y_15(b_98, c_98, t);
  t = term_p_39;
  return(t);
}
static ATerm u_33 (ATerm t)
{
  t = term_l_85;
  return(t);
}
static ATerm y_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_33 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL;
  m_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_85), m_98), term_m_85);
  t_98 = t;
  t = SSL_concat_strings(t_98);
  n_98 = t;
  t = term_e_39;
  r_98 = t;
  t = (ATerm) ATinsert(ATempty, n_98);
  s_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_39, (ATerm) ATinsert(ATempty, n_98));
  t = y_15(r_98, s_98, t);
  t = term_p_39;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_q_85;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  ATerm x_98 = NULL,a_99 = NULL;
  t = term_g_39;
  x_98 = t;
  t = term_p_39;
  a_99 = t;
  t = term_v_85;
  t = i_16(x_98, a_99, t);
  t = term_p_39;
  return(t);
}
static ATerm g_34 (ATerm t)
{
  t = term_w_85;
  return(t);
}
static ATerm i_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_34 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  t = term_e_62;
  b_99 = t;
  t = term_p_39;
  c_99 = t;
  t = term_y_85;
  t = i_16(b_99, c_99, t);
  t = term_p_39;
  return(t);
}
static ATerm l_34 (ATerm t)
{
  t = term_b_86;
  return(t);
}
static ATerm p_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_34 (ATerm t)
{
  ATerm e_99 = NULL,g_99 = NULL;
  t = term_r_57;
  e_99 = t;
  t = term_p_39;
  g_99 = t;
  t = term_c_86;
  t = i_16(e_99, g_99, t);
  t = term_p_39;
  return(t);
}
static ATerm r_34 (ATerm t)
{
  t = term_h_86;
  return(t);
}
static ATerm t_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_34 (ATerm t)
{
  ATerm i_99 = NULL,n_99 = NULL,o_99 = NULL;
  i_99 = t;
  t = SSL_string_to_int(i_99);
  n_99 = t;
  t = term_r_43;
  o_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_43, n_99);
  t = i_16(o_99, n_99, t);
  t = term_p_39;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  t = term_i_86;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_35 (ATerm t)
{
  ATerm p_99 = NULL,u_99 = NULL,w_99 = NULL;
  p_99 = t;
  t = SSL_string_to_int(p_99);
  u_99 = t;
  t = term_w_43;
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_43, u_99);
  t = i_16(w_99, u_99, t);
  t = term_p_39;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_k_86;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_35 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL;
  t = term_k_45;
  x_99 = t;
  t = term_p_39;
  y_99 = t;
  t = term_r_86;
  t = x_15(x_99, y_99, t);
  t = term_p_39;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_v_86;
  return(t);
}
static ATerm h_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_35 (ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL;
  z_99 = t;
  if(match_string(t, "old"))
    {
      t = z_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = z_99;
    }
  t = term_u_58;
  a_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_58, z_99);
  t = i_16(a_100, z_99, t);
  t = term_p_39;
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = term_w_86;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_35 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_p_39;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_x_86;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_35 (ATerm t)
{
  t = term_y_86;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_p_39;
  return(t);
}
static ATerm p_35 (ATerm t)
{
  t = term_z_86;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  ATerm g_100 = NULL;
  g_100 = t;
  if(match_string(t, "-h"))
    {
      t = g_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = g_100;
    }
  return(t);
}
static ATerm r_35 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL;
  t = term_a_87;
  i_100 = t;
  t = term_p_39;
  j_100 = t;
  t = term_b_87;
  t = i_16(i_100, j_100, t);
  t = term_p_39;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = term_c_87;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL;
  t = term_e_87;
  o_100 = t;
  t = term_p_39;
  p_100 = t;
  t = term_f_87;
  t = i_16(o_100, p_100, t);
  t = term_p_39;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_i_87;
  return(t);
}
static ATerm x_35 (ATerm t)
{
  ATerm q_100 = NULL;
  q_100 = t;
  if(match_string(t, "-v"))
    {
      t = q_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = q_100;
    }
  return(t);
}
static ATerm y_35 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL;
  t = term_l_87;
  r_100 = t;
  t = term_p_39;
  s_100 = t;
  t = term_e_88;
  t = i_16(r_100, s_100, t);
  t = term_p_39;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  t = term_g_88;
  return(t);
}
static ATerm a_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_36 (ATerm t)
{
  ATerm t_100 = NULL,w_100 = NULL;
  t = term_i_63;
  t_100 = t;
  t = term_p_39;
  w_100 = t;
  t = term_j_88;
  t = i_16(t_100, w_100, t);
  t = term_p_39;
  return(t);
}
static ATerm d_36 (ATerm t)
{
  t = term_k_88;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm m_88 = t;
  int q_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_88);
    }
  else
    {
      t = m_88;
      {
        ATerm r_88 = t;
        int u_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_88);
          }
        else
          {
            t = r_88;
            {
              ATerm w_88 = t;
              int x_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(f_32, g_32, h_32, t);
                  LocalPopChoice(x_88);
                }
              else
                {
                  t = w_88;
                  {
                    ATerm y_88 = t;
                    int z_88 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(i_32, j_32, k_32, t);
                        LocalPopChoice(z_88);
                      }
                    else
                      {
                        t = y_88;
                        {
                          ATerm a_89 = t;
                          int b_89 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(m_32, n_32, o_32, t);
                              LocalPopChoice(b_89);
                            }
                          else
                            {
                              t = a_89;
                              {
                                ATerm c_89 = t;
                                int d_89 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(p_32, q_32, r_32, t);
                                    LocalPopChoice(d_89);
                                  }
                                else
                                  {
                                    t = c_89;
                                    {
                                      ATerm e_89 = t;
                                      int f_89 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(s_32, w_32, x_32, t);
                                          LocalPopChoice(f_89);
                                        }
                                      else
                                        {
                                          t = e_89;
                                          {
                                            ATerm g_89 = t;
                                            int h_89 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(z_32, a_33, b_33, t);
                                                LocalPopChoice(h_89);
                                              }
                                            else
                                              {
                                                t = g_89;
                                                {
                                                  ATerm i_89 = t;
                                                  int j_89 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(d_33, f_33, g_33, t);
                                                      LocalPopChoice(j_89);
                                                    }
                                                  else
                                                    {
                                                      t = i_89;
                                                      {
                                                        ATerm k_89 = t;
                                                        int l_89 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(i_33, k_33, m_33, t);
                                                            LocalPopChoice(l_89);
                                                          }
                                                        else
                                                          {
                                                            t = k_89;
                                                            {
                                                              ATerm m_89 = t;
                                                              int n_89 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(o_33, r_33, u_33, t);
                                                                  LocalPopChoice(n_89);
                                                                }
                                                              else
                                                                {
                                                                  t = m_89;
                                                                  {
                                                                    ATerm o_89 = t;
                                                                    int p_89 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(y_33, z_33, a_34, t);
                                                                        LocalPopChoice(p_89);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_89;
                                                                        {
                                                                          ATerm q_89 = t;
                                                                          int r_89 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(b_34, c_34, g_34, t);
                                                                              LocalPopChoice(r_89);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_89;
                                                                              {
                                                                                ATerm s_89 = t;
                                                                                int t_89 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(i_34, k_34, l_34, t);
                                                                                    LocalPopChoice(t_89);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_89;
                                                                                    {
                                                                                      ATerm u_89 = t;
                                                                                      int v_89 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(p_34, q_34, r_34, t);
                                                                                          LocalPopChoice(v_89);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_89;
                                                                                          {
                                                                                            ATerm w_89 = t;
                                                                                            int x_89 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(t_34, u_34, y_34, t);
                                                                                                LocalPopChoice(x_89);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = w_89;
                                                                                                {
                                                                                                  ATerm y_89 = t;
                                                                                                  int z_89 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(a_35, b_35, c_35, t);
                                                                                                      LocalPopChoice(z_89);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_89;
                                                                                                      {
                                                                                                        ATerm b_90 = t;
                                                                                                        int e_90 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(e_35, f_35, g_35, t);
                                                                                                            LocalPopChoice(e_90);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_90;
                                                                                                            {
                                                                                                              ATerm f_90 = t;
                                                                                                              int k_90 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(h_35, i_35, j_35, t);
                                                                                                                  LocalPopChoice(k_90);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_90;
                                                                                                                  {
                                                                                                                    ATerm o_90 = t;
                                                                                                                    int p_90 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(k_35, l_35, m_35, t);
                                                                                                                        LocalPopChoice(p_90);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_90;
                                                                                                                        {
                                                                                                                          ATerm q_90 = t;
                                                                                                                          int r_90 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm e_100 = NULL;
                                                                                                                              e_100 = t;
                                                                                                                              t = term_y_86;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = e_100;
                                                                                                                              t = Option_3_0(n_35, o_35, p_35, t);
                                                                                                                              LocalPopChoice(r_90);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_90;
                                                                                                                              {
                                                                                                                                ATerm s_90 = t;
                                                                                                                                int u_90 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(u_90);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = s_90;
                                                                                                                                    {
                                                                                                                                      ATerm v_90 = t;
                                                                                                                                      int w_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(q_35, r_35, t_35, t);
                                                                                                                                          LocalPopChoice(w_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = v_90;
                                                                                                                                          {
                                                                                                                                            ATerm x_90 = t;
                                                                                                                                            int y_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(u_35, v_35, w_35, t);
                                                                                                                                                LocalPopChoice(y_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = x_90;
                                                                                                                                                {
                                                                                                                                                  ATerm z_90 = t;
                                                                                                                                                  int c_91 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(x_35, y_35, z_35, t);
                                                                                                                                                      LocalPopChoice(c_91);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = z_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm d_91 = t;
                                                                                                                                                        int e_91 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
                                                                                                                                                            LocalPopChoice(e_91);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = d_91;
                                                                                                                                                            t = Option_3_0(a_36, b_36, d_36, t);
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm b_16 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm y_100 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  y_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_100);
  return(t);
}
static ATerm c_16 (ATerm x_68, ATerm t)
{
  ATerm a_101 = NULL;
  t = SSL_hashtable_destroy(x_68);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_101);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,h_101 = NULL,j_101 = NULL;
  b_101 = t;
  t = table_hashtable_0_0(t);
  c_101 = t;
  t = lookup_table_0_1(b_101, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(j_101, t);
  t = c_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_16(b_101, h_101, t);
  t = b_101;
  return(t);
}
ATerm fetch_1_0 (ATerm u_126 (ATerm), ATerm t)
{
  static ATerm c_103 (ATerm t);
  static ATerm c_103 (ATerm t)
  {
    ATerm x_102 = NULL,a_103 = NULL,b_103 = NULL;
    x_102 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_103 = ATgetFirst((ATermList) t);
        b_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_91 = t;
      int g_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_46 = NULL,n_46 = NULL,r_19 = NULL;
          t = SSLgetAnnotations(x_102);
          f_46 = t;
          t = a_103;
          t = u_126(t);
          n_46 = t;
          t = (ATerm) ATinsert(CheckATermList(b_103), n_46);
          r_19 = t;
          t = SSLsetAnnotations(r_19, f_46);
          LocalPopChoice(g_91);
        }
      else
        {
          t = f_91;
          {
            ATerm g_47 = NULL,m_47 = NULL,s_19 = NULL;
            t = SSLgetAnnotations(x_102);
            g_47 = t;
            t = b_103;
            t = c_103(t);
            m_47 = t;
            t = (ATerm) ATinsert(CheckATermList(m_47), a_103);
            s_19 = t;
            t = SSLsetAnnotations(s_19, g_47);
          }
        }
    }
    return(t);
  }
  t = c_103(t);
  return(t);
}
static ATerm f_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  ATerm f_103 = NULL,h_103 = NULL;
  t = term_h_91;
  f_103 = t;
  t = term_p_39;
  h_103 = t;
  t = term_i_91;
  t = i_16(f_103, h_103, t);
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_k_91;
  return(t);
}
static ATerm i_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL,l_103 = NULL,o_103 = NULL;
  t = term_h_91;
  l_103 = t;
  t = term_p_39;
  o_103 = t;
  t = term_i_91;
  t = i_16(l_103, o_103, t);
  t = term_l_87;
  j_103 = t;
  t = term_p_39;
  k_103 = t;
  t = term_e_88;
  t = i_16(j_103, k_103, t);
  t = term_l_91;
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = term_m_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_91 = t;
  int t_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_36, g_36, h_36, t);
      LocalPopChoice(t_91);
    }
  else
    {
      t = n_91;
      t = Option_3_0(i_36, j_36, l_36, t);
    }
  return(t);
}
static ATerm e_16 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL;
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
  {
    ATerm u_91 = t;
    int w_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_91 = ATgetArgument(t, 0);
            ATerm y_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
        t = d_16(y_63, z_63, t);
        LocalPopChoice(w_91);
      }
    else
      {
        t = u_91;
        t = (ATerm) ATempty;
      }
  }
  r_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_63, z_63, (ATerm) ATinsert(CheckATermList(r_103), x_63));
  t = lookup_table_0_1(y_63, t);
  u_103 = t;
  t = (ATerm) ATinsert(CheckATermList(r_103), x_63);
  s_103 = t;
  t = u_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(z_63, s_103, t_103, t);
  t = q_103;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_104 = NULL,f_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
      t = term_p_39;
      t = e_0(t);
      g_104 = t;
      t = term_e_75;
      h_104 = t;
      t = term_f_75;
      i_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_75, term_f_75, g_104);
      t = e_16(h_104, i_104, g_104, t);
      _fail(t);
    }
  else
    {
      ATerm l_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_104 = ATgetFirst((ATermList) t);
          f_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_104;
      t = b_0(t);
      t = term_p_39;
      t = c_0(t);
      l_104 = t;
      t = (ATerm) ATinsert(CheckATermList(f_104), l_104);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm t)
{
  ATerm n_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL,c_20 = NULL;
  t_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_104 = ATgetFirst((ATermList) t);
      q_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_104);
  n_104 = t;
  t = p_104;
  t = l_95(t);
  r_104 = t;
  t = q_104;
  t = m_95(t);
  s_104 = t;
  t = (ATerm) ATinsert(CheckATermList(s_104), r_104);
  c_20 = t;
  t = SSLsetAnnotations(c_20, n_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_148 (ATerm), ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,o_105 = NULL,s_105 = NULL,z_105 = NULL,a_106 = NULL,k_20 = NULL;
  f_105 = t;
  {
    ATerm a_92 = t;
    int b_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_92;
        t = s_148(t);
        LocalPopChoice(b_92);
      }
    else
      {
        t = a_92;
      }
  }
  t = f_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_105 = ATgetFirst((ATermList) t);
      s_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_105);
  g_105 = t;
  t = term_z_72;
  a_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_72, o_105);
  t = i_16(a_106, o_105, t);
  t = s_105;
  {
    static ATerm n_107 (ATerm t);
    static ATerm n_107 (ATerm t)
    {
      ATerm g_92 = t;
      int h_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_92 = t;
          int j_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_106 = NULL;
              s_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_106;
              LocalPopChoice(j_92);
            }
          else
            {
              t = i_92;
              t = s_148(t);
              t = Cons_2_0(_id, n_107, t);
            }
          LocalPopChoice(h_92);
        }
      else
        {
          t = g_92;
          {
            ATerm z_106 = NULL,i_107 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_106 = ATgetFirst((ATermList) t);
                i_107 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_107), (ATerm) ATmakeAppl(sym_Undefined_1, z_106));
          }
        }
      return(t);
    }
    t = n_107(t);
  }
  z_105 = t;
  t = (ATerm) ATinsert(CheckATermList(z_105), (ATerm) ATmakeAppl(sym_Program_1, o_105));
  k_20 = t;
  t = SSLsetAnnotations(k_20, g_105);
  return(t);
}
static ATerm n_36 (ATerm t)
{
  ATerm g_108 = NULL;
  g_108 = t;
  if(match_string(t, "--help"))
    {
      t = g_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_108;
        }
    }
  return(t);
}
static ATerm p_36 (ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  t = term_a_87;
  i_108 = t;
  t = term_p_39;
  j_108 = t;
  t = term_b_87;
  t = i_16(i_108, j_108, t);
  t = term_k_92;
  return(t);
}
static ATerm s_36 (ATerm t)
{
  t = term_p_92;
  return(t);
}
static ATerm v_36 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm r_148 (ATerm), ATerm t)
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,e_108 = NULL;
  v_107 = t;
  t = term_e_75;
  w_107 = t;
  t = term_q_92;
  t = lookup_table_0_1(w_107, t);
  e_108 = t;
  t = term_f_75;
  z_107 = t;
  t = (ATerm) ATempty;
  a_108 = t;
  t = e_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(z_107, a_108, b_108, t);
  t = v_107;
  {
    static ATerm m_36 (ATerm t);
    static ATerm m_36 (ATerm t)
    {
      ATerm r_92 = t;
      int v_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_148(t);
          LocalPopChoice(v_92);
        }
      else
        {
          t = r_92;
          {
            ATerm w_92 = t;
            int x_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_36, p_36, s_36, t);
                LocalPopChoice(x_92);
              }
            else
              {
                t = w_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_36, t);
  }
  {
    ATerm y_92 = t;
    int z_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_109 = NULL;
        g_109 = t;
        {
          ATerm a_93 = t;
          int b_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_47 = NULL;
              t = g_109;
              {
                ATerm f_93 = t;
                int h_93 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_48 = NULL,d_48 = NULL;
                    t = term_d_38;
                    a_48 = t;
                    t = term_a_87;
                    d_48 = t;
                    t = term_i_93;
                    t = d_16(a_48, d_48, t);
                    LocalPopChoice(h_93);
                  }
                else
                  {
                    t = f_93;
                    t = fetch_1_0(v_36, t);
                  }
              }
              t = g_109;
              t = q_148(t);
              t = term_u_37;
              z_47 = t;
              t = SSL_exit(z_47);
              LocalPopChoice(b_93);
            }
          else
            {
              t = a_93;
              {
                ATerm m_48 = NULL,p_48 = NULL,q_48 = NULL;
                t = term_d_38;
                p_48 = t;
                t = term_h_91;
                q_48 = t;
                t = term_m_93;
                t = d_16(p_48, q_48, t);
                t = g_109;
                t = r_148(t);
                t = term_u_37;
                m_48 = t;
                t = SSL_exit(m_48);
              }
            }
        }
        LocalPopChoice(z_92);
      }
    else
      {
        t = y_92;
        {
          ATerm n_93 = t;
          int o_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
              static ATerm w_36 (ATerm t);
              static ATerm w_36 (ATerm t)
              {
                ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL,m_20 = NULL;
                m_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_109);
                k_109 = t;
                t = l_109;
                if(((t_107 != NULL) && (t_107 != t)))
                  _fail(t);
                else
                  t_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_109);
                m_20 = t;
                t = SSLsetAnnotations(m_20, k_109);
                return(t);
              }
              t = fetch_1_0(w_36, t);
              t = term_h_38;
              i_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), term_p_93);
              j_109 = t;
              t = SSL_printnl(i_109, j_109);
              t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), term_p_93));
              t = q_148(t);
              t = term_y_38;
              h_109 = t;
              t = SSL_exit(h_109);
              LocalPopChoice(o_93);
            }
          else
            {
              t = n_93;
            }
        }
      }
  }
  u_107 = t;
  t = term_e_75;
  t = table_destroy_0_0(t);
  t = u_107;
  return(t);
}
static ATerm g_16 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm v_109 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  v_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_109);
  return(t);
}
static ATerm h_16 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm w_109 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  w_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_109);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL,d_110 = NULL,e_110 = NULL;
  z_109 = t;
  t = term_r_93;
  d_110 = t;
  t = term_s_93;
  e_110 = t;
  t = z_109;
  t = new_hashtable_0_2(d_110, e_110, t);
  a_110 = t;
  t = z_109;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(z_109, a_110, b_110, t);
  t = z_109;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_110 = NULL;
  t = SSL_table_hashtable();
  f_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_65, ATerm t)
{
  ATerm q_110 = NULL;
  t = table_hashtable_0_0(t);
  q_110 = t;
  {
    ATerm t_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_48 = NULL;
        t = q_110;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_16(k_65, z_48, t);
        LocalPopChoice(u_93);
      }
    else
      {
        t = t_93;
        {
          ATerm g_49 = NULL;
          t = k_65;
          t = table_create_0_0(t);
          t = q_110;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_16(k_65, g_49, t);
        }
      }
  }
  return(t);
}
static ATerm i_16 (ATerm t_78, ATerm u_78, ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL;
  t = term_d_38;
  v_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, t_78, u_78);
  t = lookup_table_0_1(v_110, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(t_78, u_78, w_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, t_78, u_78);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm i_111 = NULL,l_111 = NULL;
  l_111 = t;
  t = SSL_explode_string(l_111);
  {
    ATerm w_93 = t;
    int x_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_112 (ATerm t);
        static ATerm s_112 (ATerm t)
        {
          ATerm l_112 = NULL,o_112 = NULL,p_112 = NULL;
          l_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_112 = ATgetFirst((ATermList) t);
              p_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm y_93 = t;
            int a_94 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_49 = NULL,v_49 = NULL,o_20 = NULL;
                t = SSLgetAnnotations(l_112);
                s_49 = t;
                t = p_112;
                t = s_112(t);
                v_49 = t;
                t = (ATerm) ATinsert(CheckATermList(v_49), o_112);
                o_20 = t;
                t = SSLsetAnnotations(o_20, s_49);
                LocalPopChoice(a_94);
              }
            else
              {
                t = y_93;
                {
                  ATerm h_50 = NULL,v_20 = NULL;
                  t = SSLgetAnnotations(l_112);
                  h_50 = t;
                  t = o_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, o_112);
                  v_20 = t;
                  t = SSLsetAnnotations(v_20, h_50);
                }
              }
          }
          return(t);
        }
        t = s_112(t);
        LocalPopChoice(x_93);
      }
    else
      {
        t = w_93;
        t = (ATerm) ATempty;
      }
  }
  i_111 = t;
  t = SSL_implode_string(i_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm j_16 (ATerm s_56, ATerm t_56, ATerm t)
{
  t = SSL_strcat(s_56, t_56);
  return(t);
}
ATerm strc_version_number_0_0 (ATerm t)
{
  t = VERSION_TERM();
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL,z_112 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL,i_113 = NULL,k_113 = NULL,m_113 = NULL,n_113 = NULL,p_113 = NULL,q_113 = NULL,s_113 = NULL,d_114 = NULL,f_114 = NULL,h_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL,q_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,i_115 = NULL,j_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,q_115 = NULL,t_115 = NULL,u_115 = NULL;
  w_112 = t;
  t = strc_version_number_0_0(t);
  n_113 = t;
  t = term_p_70;
  u_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_70, n_113);
  t = i_16(u_115, n_113, t);
  t = term_e_38;
  q_115 = t;
  t = term_y_38;
  t_115 = t;
  t = term_d_94;
  t = i_16(q_115, t_115, t);
  t = term_r_43;
  m_115 = t;
  t = term_u_37;
  n_115 = t;
  t = term_e_94;
  t = i_16(m_115, n_115, t);
  t = term_w_43;
  j_115 = t;
  t = term_y_50;
  l_115 = t;
  t = term_f_94;
  t = i_16(j_115, l_115, t);
  t = term_t_62;
  w_114 = t;
  t = (ATerm) ATempty;
  i_115 = t;
  t = term_g_94;
  t = i_16(w_114, i_115, t);
  t = term_b_40;
  u_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_94), term_h_94);
  v_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, (ATerm) ATinsert(ATinsert(ATempty, term_i_94), term_h_94));
  t = i_16(u_114, v_114, t);
  t = term_j_94;
  t = xtc_find_path_0_0(t);
  m_113 = t;
  t = term_k_94;
  t_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_113, term_k_94);
  t = j_16(m_113, t_114, t);
  d_113 = t;
  t = term_j_94;
  t = xtc_find_path_0_0(t);
  k_113 = t;
  t = term_k_94;
  q_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_113, term_k_94);
  t = j_16(k_113, q_114, t);
  e_113 = t;
  t = term_l_94;
  t = xtc_find_path_0_0(t);
  i_113 = t;
  t = term_k_94;
  p_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_113, term_k_94);
  t = j_16(i_113, p_114, t);
  f_113 = t;
  t = term_c_39;
  n_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_113), term_t_62), e_113), term_t_62), d_113), term_t_62);
  o_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_113), term_t_62), e_113), term_t_62), d_113), term_t_62));
  t = i_16(n_114, o_114, t);
  t = term_j_94;
  t = xtc_find_path_0_0(t);
  c_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_94), c_113), term_u_84);
  m_114 = t;
  t = SSL_concat_strings(m_114);
  x_112 = t;
  t = term_l_94;
  t = xtc_find_path_0_0(t);
  z_112 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_94), z_112), term_u_84);
  l_114 = t;
  t = SSL_concat_strings(l_114);
  y_112 = t;
  t = term_r_38;
  f_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_94), term_r_94), y_112), term_q_94), term_p_94), term_o_94), x_112);
  h_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_94), term_r_94), y_112), term_q_94), term_p_94), term_o_94), x_112));
  t = i_16(f_114, h_114, t);
  t = term_e_39;
  s_113 = t;
  t = (ATerm) ATempty;
  d_114 = t;
  t = term_t_94;
  t = i_16(s_113, d_114, t);
  t = term_u_58;
  p_113 = t;
  t = term_y_94;
  q_113 = t;
  t = term_z_94;
  t = i_16(p_113, q_113, t);
  t = w_112;
  return(t);
}
static ATerm a_37 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL,h_117 = NULL;
  d_117 = t;
  t = term_d_38;
  e_117 = t;
  t = term_x_55;
  h_117 = t;
  t = term_a_95;
  t = d_16(e_117, h_117, t);
  t = debug_1_0(e_37, t);
  t = d_117;
  return(t);
}
static ATerm e_37 (ATerm t)
{
  t = term_d_95;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm h_95 = t;
    int i_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL;
        t = term_d_38;
        f_116 = t;
        t = term_e_87;
        g_116 = t;
        t = term_q_95;
        t = d_16(f_116, g_116, t);
        t = term_s_95;
        t = xtc_find_0_0(t);
        a_116 = t;
        t = term_s_39;
        e_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_116, term_s_39);
        t = l_15(a_116, e_116, t);
        t = term_u_37;
        d_116 = t;
        t = SSL_exit(d_116);
        LocalPopChoice(i_95);
      }
    else
      {
        t = h_95;
      }
  }
  {
    ATerm w_95 = t;
    int x_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL;
        t = term_d_38;
        m_116 = t;
        t = term_l_87;
        n_116 = t;
        t = term_y_95;
        t = d_16(m_116, n_116, t);
        t = strc_version_0_0(t);
        t = term_u_37;
        l_116 = t;
        t = SSL_exit(l_116);
        LocalPopChoice(x_95);
      }
    else
      {
        t = w_95;
      }
  }
  {
    ATerm c_96 = t;
    int d_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_116 = NULL,x_116 = NULL,y_116 = NULL;
        t_116 = t;
        t = term_d_38;
        x_116 = t;
        t = term_x_55;
        y_116 = t;
        t = term_a_95;
        t = d_16(x_116, y_116, t);
        t = t_116;
        LocalPopChoice(d_96);
      }
    else
      {
        t = c_96;
        {
          ATerm z_116 = NULL,b_117 = NULL,c_117 = NULL;
          t = term_h_38;
          b_117 = t;
          t = (ATerm) ATinsert(ATempty, term_e_96);
          c_117 = t;
          t = SSL_printnl(b_117, c_117);
          t = term_y_38;
          z_116 = t;
          t = SSL_exit(z_116);
          t = (ATerm) ATinsert(ATempty, term_e_96);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(a_37, t);
  return(t);
}
static ATerm h_37 (ATerm t)
{
  t = if_verbose1_1_0(k_37, t);
  return(t);
}
static ATerm j_37 (ATerm t)
{
  t = xtc_temp_files_1_0(l_37, t);
  return(t);
}
static ATerm k_37 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL;
  l_117 = t;
  t = term_h_38;
  m_117 = t;
  t = (ATerm) ATinsert(CheckATermList(l_117), term_f_96);
  n_117 = t;
  t = SSL_printnl(m_117, n_117);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(CheckATermList(l_117), term_f_96));
  return(t);
}
static ATerm l_37 (ATerm t)
{
  ATerm g_96 = t;
  int h_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_117 = NULL,q_117 = NULL,t_117 = NULL;
      t = term_d_38;
      q_117 = t;
      t = term_x_55;
      t_117 = t;
      t = term_a_95;
      t = d_16(q_117, t_117, t);
      p_117 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_117);
      LocalPopChoice(h_96);
    }
  else
    {
      t = g_96;
      t = term_s_60;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm p_37 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,x_117 = NULL;
  t = run_time_0_0(t);
  u_117 = t;
  t = term_h_38;
  v_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_96), u_117), term_i_96);
  x_117 = t;
  t = SSL_printnl(v_117, x_117);
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_96), u_117), term_i_96));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm k_96 = t;
  int l_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(h_37, j_37, t);
      t = if_verbose2_1_0(p_37, t);
      t = term_u_37;
      i_117 = t;
      t = SSL_exit(i_117);
      LocalPopChoice(l_96);
    }
  else
    {
      t = k_96;
      {
        ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL;
        t = run_time_0_0(t);
        y_117 = t;
        t = term_h_38;
        a_118 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_96), y_117), term_m_96);
        b_118 = t;
        t = SSL_printnl(a_118, b_118);
        t = term_y_38;
        z_117 = t;
        t = SSL_exit(z_117);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
