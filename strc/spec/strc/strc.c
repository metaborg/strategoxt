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
static ATerm term_k_96;
static ATerm term_f_96;
static ATerm term_e_96;
static ATerm term_b_96;
static ATerm term_a_96;
static ATerm term_x_95;
static ATerm term_o_95;
static ATerm term_m_95;
static ATerm term_z_94;
static ATerm term_w_94;
static ATerm term_v_94;
static ATerm term_u_94;
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
static ATerm term_c_94;
static ATerm term_b_94;
static ATerm term_a_94;
static ATerm term_z_93;
static ATerm term_p_93;
static ATerm term_o_93;
static ATerm term_n_93;
static ATerm term_j_93;
static ATerm term_i_93;
static ATerm term_p_92;
static ATerm term_m_92;
static ATerm term_l_92;
static ATerm term_b_92;
static ATerm term_m_91;
static ATerm term_k_91;
static ATerm term_i_91;
static ATerm term_h_91;
static ATerm term_g_91;
static ATerm term_d_87;
static ATerm term_c_87;
static ATerm term_b_87;
static ATerm term_z_86;
static ATerm term_y_86;
static ATerm term_x_86;
static ATerm term_w_86;
static ATerm term_v_86;
static ATerm term_u_86;
static ATerm term_q_86;
static ATerm term_j_86;
static ATerm term_h_86;
static ATerm term_g_86;
static ATerm term_f_86;
static ATerm term_e_86;
static ATerm term_x_85;
static ATerm term_v_85;
static ATerm term_u_85;
static ATerm term_t_85;
static ATerm term_o_85;
static ATerm term_n_85;
static ATerm term_m_85;
static ATerm term_l_85;
static ATerm term_i_85;
static ATerm term_h_85;
static ATerm term_e_85;
static ATerm term_d_85;
static ATerm term_c_85;
static ATerm term_b_85;
static ATerm term_a_85;
static ATerm term_z_84;
static ATerm term_v_84;
static ATerm term_u_84;
static ATerm term_l_84;
static ATerm term_j_84;
static ATerm term_i_84;
static ATerm term_h_84;
static ATerm term_g_84;
static ATerm term_f_84;
static ATerm term_e_84;
static ATerm term_d_84;
static ATerm term_a_84;
static ATerm term_v_83;
static ATerm term_u_83;
static ATerm term_t_83;
static ATerm term_s_83;
static ATerm term_r_83;
static ATerm term_x_82;
static ATerm term_t_82;
static ATerm term_o_82;
static ATerm term_n_82;
static ATerm term_m_82;
static ATerm term_l_82;
static ATerm term_i_82;
static ATerm term_h_82;
static ATerm term_a_82;
static ATerm term_y_81;
static ATerm term_x_81;
static ATerm term_w_81;
static ATerm term_v_81;
static ATerm term_n_81;
static ATerm term_j_81;
static ATerm term_i_81;
static ATerm term_h_81;
static ATerm term_f_81;
static ATerm term_n_79;
static ATerm term_j_79;
static ATerm term_f_79;
static ATerm term_e_79;
static ATerm term_c_79;
static ATerm term_q_78;
static ATerm term_o_78;
static ATerm term_k_78;
static ATerm term_h_78;
static ATerm term_e_78;
static ATerm term_e_76;
static ATerm term_d_76;
static ATerm term_c_76;
static ATerm term_b_76;
static ATerm term_x_75;
static ATerm term_k_75;
static ATerm term_j_75;
static ATerm term_i_75;
static ATerm term_h_75;
static ATerm term_f_75;
static ATerm term_w_74;
static ATerm term_k_74;
static ATerm term_h_74;
static ATerm term_g_74;
static ATerm term_f_74;
static ATerm term_e_74;
static ATerm term_d_74;
static ATerm term_c_74;
static ATerm term_b_74;
static ATerm term_x_73;
static ATerm term_w_73;
static ATerm term_t_73;
static ATerm term_o_73;
static ATerm term_n_73;
static ATerm term_m_73;
static ATerm term_k_73;
static ATerm term_j_73;
static ATerm term_i_73;
static ATerm term_h_73;
static ATerm term_g_73;
static ATerm term_d_73;
static ATerm term_c_73;
static ATerm term_b_73;
static ATerm term_x_72;
static ATerm term_e_72;
static ATerm term_z_71;
static ATerm term_y_71;
static ATerm term_x_71;
static ATerm term_w_71;
static ATerm term_t_71;
static ATerm term_c_71;
static ATerm term_b_71;
static ATerm term_a_71;
static ATerm term_z_70;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_v_70;
static ATerm term_u_70;
static ATerm term_t_70;
static ATerm term_s_70;
static ATerm term_r_70;
static ATerm term_q_70;
static ATerm term_k_68;
static ATerm term_j_68;
static ATerm term_i_68;
static ATerm term_h_68;
static ATerm term_g_68;
static ATerm term_f_68;
static ATerm term_c_68;
static ATerm term_b_68;
static ATerm term_a_68;
static ATerm term_o_67;
static ATerm term_m_67;
static ATerm term_j_67;
static ATerm term_i_67;
static ATerm term_g_67;
static ATerm term_e_67;
static ATerm term_d_67;
static ATerm term_c_67;
static ATerm term_a_67;
static ATerm term_z_66;
static ATerm term_n_66;
static ATerm term_g_65;
static ATerm term_t_64;
static ATerm term_m_64;
static ATerm term_l_64;
static ATerm term_r_63;
static ATerm term_o_63;
static ATerm term_l_63;
static ATerm term_e_63;
static ATerm term_b_63;
static ATerm term_a_63;
static ATerm term_y_62;
static ATerm term_x_62;
static ATerm term_w_62;
static ATerm term_l_62;
static ATerm term_k_62;
static ATerm term_j_62;
static ATerm term_d_62;
static ATerm term_r_61;
static ATerm term_h_61;
static ATerm term_g_61;
static ATerm term_b_61;
static ATerm term_z_60;
static ATerm term_x_60;
static ATerm term_v_60;
static ATerm term_t_60;
static ATerm term_s_60;
static ATerm term_r_60;
static ATerm term_n_60;
static ATerm term_m_60;
static ATerm term_f_60;
static ATerm term_b_60;
static ATerm term_a_60;
static ATerm term_r_59;
static ATerm term_z_58;
static ATerm term_x_58;
static ATerm term_w_58;
static ATerm term_v_58;
static ATerm term_s_58;
static ATerm term_r_58;
static ATerm term_e_58;
static ATerm term_b_58;
static ATerm term_u_57;
static ATerm term_s_57;
static ATerm term_p_57;
static ATerm term_o_57;
static ATerm term_n_57;
static ATerm term_m_57;
static ATerm term_z_56;
static ATerm term_v_56;
static ATerm term_u_56;
static ATerm term_r_56;
static ATerm term_q_56;
static ATerm term_p_56;
static ATerm term_o_56;
static ATerm term_n_56;
static ATerm term_m_56;
static ATerm term_l_56;
static ATerm term_k_56;
static ATerm term_j_56;
static ATerm term_b_56;
static ATerm term_v_55;
static ATerm term_n_55;
static ATerm term_m_55;
static ATerm term_l_55;
static ATerm term_k_55;
static ATerm term_j_55;
static ATerm term_g_55;
static ATerm term_e_55;
static ATerm term_d_55;
static ATerm term_c_55;
static ATerm term_b_55;
static ATerm term_x_54;
static ATerm term_w_54;
static ATerm term_u_54;
static ATerm term_t_54;
static ATerm term_s_54;
static ATerm term_r_54;
static ATerm term_q_54;
static ATerm term_p_54;
static ATerm term_o_54;
static ATerm term_n_54;
static ATerm term_m_54;
static ATerm term_l_54;
static ATerm term_j_54;
static ATerm term_i_54;
static ATerm term_f_54;
static ATerm term_e_54;
static ATerm term_d_54;
static ATerm term_b_54;
static ATerm term_a_54;
static ATerm term_z_53;
static ATerm term_y_53;
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
static ATerm term_n_52;
static ATerm term_m_52;
static ATerm term_k_52;
static ATerm term_j_52;
static ATerm term_i_52;
static ATerm term_h_52;
static ATerm term_g_52;
static ATerm term_f_52;
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
static ATerm term_s_51;
static ATerm term_r_51;
static ATerm term_q_51;
static ATerm term_p_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_k_51;
static ATerm term_j_51;
static ATerm term_i_51;
static ATerm term_h_51;
static ATerm term_f_51;
static ATerm term_e_51;
static ATerm term_b_51;
static ATerm term_a_51;
static ATerm term_w_50;
static ATerm term_v_50;
static ATerm term_u_50;
static ATerm term_t_50;
static ATerm term_s_50;
static ATerm term_r_50;
static ATerm term_l_50;
static ATerm term_j_50;
static ATerm term_i_50;
static ATerm term_z_49;
static ATerm term_x_49;
static ATerm term_w_49;
static ATerm term_u_49;
static ATerm term_d_49;
static ATerm term_c_49;
static ATerm term_b_49;
static ATerm term_a_49;
static ATerm term_r_48;
static ATerm term_l_48;
static ATerm term_k_48;
static ATerm term_j_48;
static ATerm term_d_48;
static ATerm term_z_47;
static ATerm term_y_47;
static ATerm term_x_47;
static ATerm term_w_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_j_47;
static ATerm term_i_47;
static ATerm term_h_47;
static ATerm term_f_47;
static ATerm term_y_46;
static ATerm term_x_46;
static ATerm term_w_46;
static ATerm term_v_46;
static ATerm term_o_46;
static ATerm term_n_46;
static ATerm term_m_46;
static ATerm term_k_46;
static ATerm term_j_46;
static ATerm term_z_45;
static ATerm term_v_45;
static ATerm term_q_45;
static ATerm term_o_45;
static ATerm term_k_45;
static ATerm term_g_45;
static ATerm term_f_45;
static ATerm term_b_45;
static ATerm term_a_45;
static ATerm term_w_44;
static ATerm term_t_44;
static ATerm term_e_44;
static ATerm term_d_44;
static ATerm term_c_44;
static ATerm term_w_43;
static ATerm term_v_43;
static ATerm term_s_43;
static ATerm term_r_43;
static ATerm term_n_43;
static ATerm term_l_43;
static ATerm term_k_43;
static ATerm term_j_43;
static ATerm term_g_43;
static ATerm term_f_43;
static ATerm term_a_43;
static ATerm term_z_42;
static ATerm term_y_42;
static ATerm term_v_42;
static ATerm term_t_42;
static ATerm term_r_42;
static ATerm term_q_42;
static ATerm term_o_42;
static ATerm term_i_42;
static ATerm term_g_42;
static ATerm term_e_42;
static ATerm term_d_42;
static ATerm term_b_42;
static ATerm term_u_41;
static ATerm term_t_41;
static ATerm term_q_41;
static ATerm term_g_41;
static ATerm term_y_40;
static ATerm term_w_40;
static ATerm term_v_40;
static ATerm term_o_40;
static ATerm term_n_40;
static ATerm term_m_40;
static ATerm term_l_40;
static ATerm term_g_40;
static ATerm term_f_40;
static ATerm term_e_40;
static ATerm term_d_40;
static ATerm term_c_40;
static ATerm term_x_39;
static ATerm term_t_39;
static ATerm term_q_39;
static ATerm term_n_39;
static ATerm term_m_39;
static ATerm term_l_39;
static ATerm term_i_39;
static ATerm term_h_39;
static ATerm term_g_39;
static ATerm term_f_39;
static ATerm term_e_39;
static ATerm term_d_39;
static ATerm term_c_39;
static ATerm term_y_38;
static ATerm term_x_38;
static ATerm term_v_38;
static ATerm term_u_38;
static ATerm term_t_38;
static ATerm term_s_38;
static ATerm term_o_38;
static ATerm term_n_38;
static ATerm term_l_38;
static ATerm term_k_38;
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_h_38;
static ATerm term_z_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_i_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_s_38);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_v_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_g_39);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_i_39);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_m_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_l_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_f_40);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_j_43);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_l_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_v_43);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_c_44);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_o_45);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_50, term_d_39, term_j_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_50, term_k_38, term_s_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_50, term_d_42, term_v_50);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_51, term_b_51, term_e_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_n_51, term_p_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_s_51, term_v_51);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_51, term_y_51, term_z_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_c_52, term_d_52);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_52, term_g_52, term_h_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_52, term_k_52, term_m_52);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_52, term_a_45, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_t_52, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_f_53, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_53, term_j_53, term_k_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_v_53, term_w_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_54, term_e_54, term_f_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_l_54, term_m_54);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_54, term_p_54, term_q_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_j_47, term_t_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_54, term_x_54, term_b_55);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_55, term_e_55, term_g_55);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_55, term_l_55, term_m_55);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_j_56);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym__2, term_l_56, term_m_56);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym__2, term_o_56, term_p_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym__2, term_r_56, term_u_56);
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_z_56, term_m_57);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_s_57);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_r_58);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_x_58);
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_g_61);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(sym__2, term_s_60, term_f_60);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_j_62);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_w_62);
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_l_63);
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_s_70);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_c_73);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_h_75, term_i_75);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_z_37);
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_37);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(sym__2, term_e_79, term_t_39);
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_h_82);
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_82));
  term_n_82 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_n_82);
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_a_82);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_t_39);
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_t_39);
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym__2, term_j_62, term_t_39);
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_t_39);
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_o_45, term_t_39);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(sym__2, term_g_86, term_t_39);
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(sym__2, term_q_86, term_t_39);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym__2, term_w_86, term_t_39);
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(sym__2, term_r_58, term_d_39);
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(sym__2, term_v_58, term_z_37);
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(sym__2, term_l_63, term_t_39);
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_g_91));
  term_g_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym__2, term_g_91, term_t_39);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_91));
  term_k_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_91));
  term_m_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, (ATerm) ATempty);
  ATprotect(&(term_i_93));
  term_i_93 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_g_86);
  ATprotect(&(term_j_93));
  term_j_93 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_g_91);
  ATprotect(&(term_n_93));
  term_n_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_93));
  term_o_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_d_39);
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_z_37);
  ATprotect(&(term_b_94));
  term_b_94 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_b_51);
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(sym__2, term_w_62, (ATerm) ATempty);
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_e_94));
  term_e_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_g_94));
  term_g_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_i_94));
  term_i_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_k_94));
  term_k_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib_opt", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego_opt", 0, ATtrue));
  ATprotect(&(term_n_94));
  term_n_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_p_94));
  term_p_94 = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATempty);
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_u_94);
  ATprotect(&(term_w_94));
  term_w_94 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_b_56);
  ATprotect(&(term_z_94));
  term_z_94 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_m_95));
  term_m_95 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_q_86);
  ATprotect(&(term_o_95));
  term_o_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_x_95));
  term_x_95 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_w_86);
  ATprotect(&(term_a_96));
  term_a_96 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_96));
  term_b_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_e_96));
  term_e_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_143 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm u_14 (ATerm l_24, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm v_14 (ATerm j_24, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm w_14 (ATerm t_74, ATerm s_74, ATerm t);
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
ATerm if_keep1_1_0 (ATerm t_144 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm w_155 (ATerm), ATerm x_155 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm w_144 (ATerm), ATerm t);
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
static ATerm l_12 (ATerm t);
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
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm h_16 (ATerm t);
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
static ATerm h_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm save_as_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm u_144 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm j_154 (ATerm), ATerm k_154 (ATerm), ATerm t);
static ATerm a_15 (ATerm v_79, ATerm w_79, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_145 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm s_155 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm x_23, ATerm y_23, ATerm t);
ATerm foldr_3_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm t);
static ATerm h_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm n_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm x_144 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm y_144 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm v_144 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm t_126 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm x_14 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm y_14 (ATerm m_42, ATerm n_42, ATerm t);
static ATerm z_14 (ATerm b_126 (ATerm), ATerm o_332, ATerm w_42, ATerm t);
static ATerm c_15 (ATerm a_115 (ATerm), ATerm w_24, ATerm u_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm p_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm l_154 (ATerm), ATerm t);
static ATerm t_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm d_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm h_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm g_114 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm t_143 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm p_137 (ATerm), ATerm t);
static ATerm l_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm d_15 (ATerm z_23, ATerm t);
static ATerm u_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm f_16 (ATerm r_65, ATerm s_65, ATerm t);
static ATerm e_15 (ATerm d_64, ATerm e_64, ATerm t);
ATerm end_scope_1_0 (ATerm x_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_114 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm p_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm w_154 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm r_143 (ATerm), ATerm t);
static ATerm g_15 (ATerm h_62, ATerm i_62, ATerm t);
static ATerm i_15 (ATerm n_62, ATerm o_62, ATerm t);
static ATerm j_15 (ATerm k_72, ATerm m_72, ATerm o_72, ATerm q_72, ATerm l_72, ATerm n_72, ATerm p_72, ATerm r_72, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_125 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm u_126 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm h_136 (ATerm), ATerm t);
static ATerm v_27 (ATerm t);
static ATerm m_15 (ATerm a_55, ATerm z_480, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm n_15 (ATerm v_74, ATerm u_74, ATerm t);
static ATerm o_15 (ATerm u_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm j_74 (ATerm l_73, ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
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
ATerm default_system_usage_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm t_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm p_15 (ATerm m_43, ATerm c_344, ATerm t);
static ATerm y_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm v_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_143 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_143 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm w_143 (ATerm), ATerm t);
static ATerm s_15 (ATerm v_130 (ATerm), ATerm w_130 (ATerm), ATerm x_48, ATerm w_48, ATerm t);
static ATerm t_15 (ATerm s_130 (ATerm), ATerm t_48, ATerm s_48, ATerm t);
static ATerm o_30 (ATerm t);
static ATerm u_15 (ATerm v_64, ATerm w_64, ATerm x_64, ATerm t);
ATerm map_1_0 (ATerm j_126 (ATerm), ATerm t);
static ATerm v_15 (ATerm d_140 (ATerm), ATerm f_65, ATerm e_65, ATerm t);
static ATerm q_84 (ATerm k_84, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_15 (ATerm s_42, ATerm t);
static ATerm x_15 (ATerm o_58, ATerm p_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_86 (ATerm f_85, ATerm t);
static ATerm o_86 (ATerm j_85, ATerm k_85, ATerm p_85, ATerm t);
static ATerm p_86 (ATerm y_85, ATerm z_85, ATerm a_86, ATerm t);
static ATerm y_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm u_30 (ATerm t);
static ATerm v_30 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_134 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm x_91 (ATerm b_91, ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm z_15 (ATerm w_78, ATerm x_78, ATerm t);
static ATerm a_16 (ATerm z_78, ATerm y_78, ATerm t);
static ATerm b_16 (ATerm c_58, ATerm d_58, ATerm t);
ATerm at_end_1_0 (ATerm y_126 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_95 (ATerm x_94, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_16 (ATerm a_79, ATerm b_79, ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm j_34 (ATerm t);
static ATerm k_34 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
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
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
static ATerm o_35 (ATerm t);
static ATerm p_35 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
static ATerm s_35 (ATerm t);
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
static ATerm f_36 (ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm d_16 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm e_16 (ATerm x_68, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_126 (ATerm), ATerm t);
static ATerm i_36 (ATerm t);
static ATerm j_36 (ATerm t);
static ATerm l_36 (ATerm t);
static ATerm m_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm p_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm g_16 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_148 (ATerm), ATerm t);
static ATerm u_36 (ATerm t);
static ATerm x_36 (ATerm t);
static ATerm b_37 (ATerm t);
static ATerm c_37 (ATerm t);
ATerm parse_options_3_0 (ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t);
static ATerm i_16 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
static ATerm j_16 (ATerm q_68, ATerm r_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm k_65, ATerm t);
static ATerm k_16 (ATerm t_78, ATerm u_78, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm l_16 (ATerm s_56, ATerm t_56, ATerm t);
ATerm strc_version_number_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm j_37 (ATerm t);
static ATerm l_37 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm m_37 (ATerm t);
static ATerm n_37 (ATerm t);
static ATerm q_37 (ATerm t);
static ATerm r_37 (ATerm t);
static ATerm y_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL,i_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = g_133(t);
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
      t = foldr_2_0(g_133, h_133, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_0, n_0);
      t = h_133(t);
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_z_37;
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
  t = g_15(e_1, i_1, t);
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
      ATerm a_38 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm s_143 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm e_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_h_38;
        h_1 = t;
        t = term_i_38;
        k_1 = t;
        t = term_j_38;
        t = f_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_k_38);
        t = geq_0_0(t);
        t = b_1;
        t = s_143(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = e_38;
        t = b_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  t = term_l_38;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_n_38);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_l_38;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm u_14 (ATerm l_24, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_h_38;
        z_1 = t;
        t = term_s_38;
        c_2 = t;
        t = term_t_38;
        t = f_16(z_1, c_2, t);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_u_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_h_38;
  s_1 = t;
  t = term_v_38;
  t_1 = t;
  t = term_x_38;
  t = f_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_s_38), l_24), term_c_39), term_y_38));
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
      t = a_15(q_1, r_1, t);
      t = term_d_39;
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
  t = term_l_38;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_e_39);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_l_38;
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, b_3);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = b_3;
  return(t);
}
static ATerm v_14 (ATerm j_24, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_h_38;
  u_2 = t;
  t = term_g_39;
  x_2 = t;
  t = term_h_39;
  t = f_16(u_2, x_2, t);
  o_2 = t;
  t = term_h_38;
  s_2 = t;
  t = term_i_39;
  t_2 = t;
  t = term_l_39;
  t = f_16(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_s_38), j_24), term_m_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_39, m_2);
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
      t = a_15(q_2, r_2, t);
      t = term_d_39;
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
  t = v_14(s_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_14(r_3, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  t = term_l_38;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_n_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(o_3), term_n_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_h_38;
      m_3 = t;
      t = term_m_39;
      n_3 = t;
      t = term_q_39;
      t = f_16(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
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
static ATerm w_14 (ATerm t_74, ATerm s_74, ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(t_74, s_74);
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      t = get_errno_0_0(t);
      t = term_t_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, t_74, s_74);
      t = n_15(t_74, s_74, t);
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
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_x_39;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_x_39);
        t = n_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_x_39;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = x_0(t);
              l_2 = t;
              {
                ATerm b_40 = t;
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
                    t = b_40;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = w_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
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
  t = term_c_40;
  r_4 = t;
  t = term_d_40;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_e_40);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_f_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_g_40;
  w_4 = t;
  t = a_5;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_h_38;
        d_5 = t;
        t = term_l_40;
        e_5 = t;
        t = term_m_40;
        t = f_16(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(i_40);
        t = (ATerm) ATinsert(ATempty, term_l_40);
      }
    else
      {
        t = h_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_h_38;
  b_5 = t;
  t = term_f_40;
  c_5 = t;
  t = term_n_40;
  t = f_16(b_5, c_5, t);
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
  t = term_l_38;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_o_40);
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
    ATerm p_40 = t;
    int q_40 = stack_ptr;
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
        LocalPopChoice(q_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = p_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
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
        LocalPopChoice(s_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = r_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
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
        LocalPopChoice(u_40);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = t_40;
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
  t = term_l_38;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_v_40);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(b_6), term_v_40));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_y_40);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_y_40);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm i_41 = t;
    int n_41 = stack_ptr;
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
        LocalPopChoice(n_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = i_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
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
        LocalPopChoice(p_41);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = o_41;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_y_40);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_y_40);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_t_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_y_40);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_y_40);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_d_42;
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
  t = term_e_42;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_y_40);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_y_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_42;
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
  t = term_l_38;
  h_9 = t;
  t = (ATerm) ATinsert(ATempty, term_q_42);
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
  t = term_l_38;
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(j_9), term_r_42);
  m_9 = t;
  t = SSL_printnl(k_9, m_9);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(j_9), term_r_42));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm v_10 = NULL;
  t = pass_verbose_0_0(t);
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(v_10), term_z_42);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_z_42);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_a_43;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL;
  ATerm b_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_h_38;
      b_9 = t;
      t = term_l_40;
      c_9 = t;
      t = term_m_40;
      t = f_16(b_9, c_9, t);
      t = a_9;
      LocalPopChoice(e_43);
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
            t = term_f_43;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_g_43);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            n_9 = t;
            {
              ATerm h_43 = t;
              int i_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
                  t = term_h_38;
                  h_10 = t;
                  t = term_j_43;
                  i_10 = t;
                  t = term_k_43;
                  t = f_16(h_10, i_10, t);
                  a_10 = t;
                  t = term_h_38;
                  f_10 = t;
                  t = term_l_43;
                  g_10 = t;
                  t = term_n_43;
                  t = f_16(f_10, g_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, e_10);
                  {
                    ATerm o_43 = t;
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
                        t = o_43;
                      }
                  }
                  LocalPopChoice(i_43);
                }
              else
                {
                  t = h_43;
                  {
                    ATerm k_10 = NULL,l_10 = NULL;
                    t = term_h_38;
                    k_10 = t;
                    t = term_j_43;
                    l_10 = t;
                    t = term_k_43;
                    t = f_16(k_10, l_10, t);
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
              ATerm p_43 = t;
              int q_43 = stack_ptr;
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
                  LocalPopChoice(q_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = p_43;
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
            t = term_l_38;
            p_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_8)), term_s_43), not_null(x_8)), term_r_43));
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
      t = b_43;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm t_144 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_h_38;
        i_11 = t;
        t = term_v_43;
        j_11 = t;
        t = term_w_43;
        t = f_16(i_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_d_39);
        t = geq_0_0(t);
        t = d_11;
        t = t_144(t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = t_43;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm w_155 (ATerm), ATerm x_155 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = o_11;
        t = w_155(t);
        r_11 = t;
        t = term_h_38;
        u_11 = t;
        t = term_c_44;
        v_11 = t;
        t = term_d_44;
        t = f_16(u_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = o_11;
        t = x_155(t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = o_11;
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_y_40);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_y_40);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_9 = NULL;
  t = pass_verbose_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(CheckATermList(d_9), term_y_40);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_y_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm f_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_13;
        {
          ATerm j_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  {
                    ATerm v_7 = NULL,e_4 = NULL;
                    t = SSLgetAnnotations(i_13);
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
                  t = i_13;
                }
              LocalPopChoice(o_44);
              t = xtc_transform_file_2_0(e_8, f_8, t);
            }
          else
            {
              t = j_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(h_44);
      }
    else
      {
        t = f_44;
        t = i_13;
        {
          ATerm q_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  {
                    ATerm t_9 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(i_13);
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
                  t = i_13;
                }
              LocalPopChoice(s_44);
              t = xtc_transform_file_2_0(j_8, k_8, t);
            }
          else
            {
              t = q_44;
              t = xtc_transform_term_2_0(l_8, m_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  w_13 = t;
  t = term_t_44;
  u_13 = t;
  t = w_13;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,a_14 = NULL;
        t = term_h_38;
        x_13 = t;
        t = term_l_40;
        a_14 = t;
        t = term_m_40;
        t = f_16(x_13, a_14, t);
        t = w_13;
        LocalPopChoice(v_44);
        t = (ATerm) ATinsert(ATempty, term_w_44);
      }
    else
      {
        t = u_44;
        t = (ATerm) ATempty;
      }
  }
  v_13 = t;
  t = w_13;
  t = comp_0_2(u_13, v_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm w_144 (ATerm), ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
        t = term_h_38;
        g_14 = t;
        t = term_v_43;
        h_14 = t;
        t = term_w_43;
        t = f_16(g_14, h_14, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_14, term_a_45);
        t = geq_0_0(t);
        t = c_14;
        t = w_144(t);
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        t = c_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,j_18 = NULL;
  e_18 = t;
  t = term_l_38;
  f_18 = t;
  t = (ATerm) ATinsert(ATempty, term_b_45);
  j_18 = t;
  t = SSL_printnl(f_18, j_18);
  t = e_18;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_18 = NULL;
  t = if_verbose3_1_0(s_8, t);
  t = olevel_2_0(y_8, l_9, t);
  t = olevel_2_0(z_9, d_10, t);
  t = olevel_2_0(a_11, f_11, t);
  n_18 = t;
  {
    ATerm c_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_21 = ATgetArgument(t, 0);
            {
              ATerm g_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(n_18);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, g_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_18;
          }
        LocalPopChoice(e_45);
        t = xtc_transform_file_2_0(s_12, t_12, t);
      }
    else
      {
        t = c_45;
        t = xtc_transform_term_2_0(u_12, v_12, t);
      }
  }
  t = olevel_2_0(w_12, x_12, t);
  t = olevel_2_0(t_13, z_13, t);
  t = olevel_2_0(s_14, t_14, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = term_l_38;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), term_f_45);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(k_18), term_f_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,s_18 = NULL;
  o_18 = t;
  t = term_h_38;
  p_18 = t;
  t = term_c_44;
  s_18 = t;
  t = term_d_44;
  t = f_16(p_18, s_18, t);
  t = debug_1_0(u_8, t);
  t = o_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_18 = ATgetArgument(t, 0);
            {
              ATerm x_9 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(t_18);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_18);
              q_4 = t;
              t = SSLsetAnnotations(q_4, x_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_18;
          }
        LocalPopChoice(j_45);
        t = xtc_transform_file_2_0(r_9, s_9, t);
      }
    else
      {
        t = i_45;
        t = xtc_transform_term_2_0(u_9, v_9, t);
      }
  }
  t = if_keep1_1_0(w_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_y_40);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_19 = NULL;
  t = pass_verbose_0_0(t);
  c_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), term_y_40);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = save_as_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_19;
        {
          ATerm n_45 = t;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL,b_11 = NULL;
              t = term_h_38;
              z_10 = t;
              t = term_o_45;
              b_11 = t;
              t = term_q_45;
              t = f_16(z_10, b_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_45;
            }
        }
        t = v_19;
        {
          ATerm s_45 = t;
          int u_45 = stack_ptr;
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
              LocalPopChoice(u_45);
              t = xtc_transform_file_2_0(m_10, q_10, t);
            }
          else
            {
              t = s_45;
              t = xtc_transform_term_2_0(r_10, u_10, t);
            }
        }
        t = if_keep2_1_0(x_10, t);
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = v_19;
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_y_40);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm q_11 = NULL;
  t = pass_verbose_0_0(t);
  q_11 = t;
  t = (ATerm) ATinsert(CheckATermList(q_11), term_y_40);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = save_as_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  b_20 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(b_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
              v_5 = t;
              t = SSLsetAnnotations(v_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(d_46);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = c_46;
        t = xtc_transform_term_2_0(p_11, w_11, t);
      }
  }
  t = if_keep6_1_0(x_11, t);
  a_20 = t;
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_20 = ATgetArgument(t, 0);
            {
              ATerm k_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(a_20);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_20);
              w_5 = t;
              t = SSLsetAnnotations(w_5, k_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_20;
          }
        LocalPopChoice(f_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = e_46;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_21 = ATgetArgument(t, 0);
            {
              ATerm z_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              z_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
              x_5 = t;
              t = SSLsetAnnotations(x_5, z_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_19;
          }
        LocalPopChoice(i_46);
        t = xtc_transform_file_2_0(l_12, p_12, t);
      }
    else
      {
        t = h_46;
        t = xtc_transform_term_2_0(q_12, r_12, t);
      }
  }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_y_40);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_y_40);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm u_20 = NULL;
  t = pass_verbose_0_0(t);
  u_20 = t;
  t = (ATerm) ATinsert(CheckATermList(u_20), term_y_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm x_20 = NULL;
  t = pass_verbose_0_0(t);
  x_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_20), term_y_40);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_y_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm f_21 = NULL;
  t = pass_verbose_0_0(t);
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), term_y_40);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_y_40);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm q_21 = NULL;
  t = pass_verbose_0_0(t);
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(q_21), term_y_40);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm r_21 = NULL,u_21 = NULL,v_21 = NULL;
  v_21 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_22 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(v_21);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_22);
              i_6 = t;
              t = SSLsetAnnotations(i_6, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(q_46);
        t = xtc_transform_file_2_0(y_12, a_13, t);
      }
    else
      {
        t = p_46;
        t = xtc_transform_term_2_0(b_13, c_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  u_21 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm y_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(u_21);
              y_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, y_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_21;
          }
        LocalPopChoice(s_46);
        t = xtc_transform_file_2_0(d_13, e_13, t);
      }
    else
      {
        t = r_46;
        t = xtc_transform_term_2_0(h_13, k_13, t);
      }
  }
  r_21 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_22 = ATgetArgument(t, 0);
            {
              ATerm j_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(r_21);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, j_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_21;
          }
        LocalPopChoice(u_46);
        t = xtc_transform_file_2_0(l_13, m_13, t);
      }
    else
      {
        t = t_46;
        t = xtc_transform_term_2_0(p_13, q_13, t);
      }
  }
  t = if_keep4_1_0(r_13, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_y_40);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm g_22 = NULL;
  t = pass_verbose_0_0(t);
  g_22 = t;
  t = (ATerm) ATinsert(CheckATermList(g_22), term_y_40);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm r_22 = NULL;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(r_22), term_y_40);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_y_40);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm a_23 = NULL;
  t = pass_verbose_0_0(t);
  a_23 = t;
  t = (ATerm) ATinsert(CheckATermList(a_23), term_y_40);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm b_23 = NULL;
  t = pass_verbose_0_0(t);
  b_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), term_y_40);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = save_as_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_y_46;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL;
  f_23 = t;
  {
    ATerm b_47 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_23 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(f_23);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_23);
              l_6 = t;
              t = SSLsetAnnotations(l_6, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_23;
          }
        LocalPopChoice(c_47);
        t = xtc_transform_file_2_0(b_14, d_14, t);
      }
    else
      {
        t = b_47;
        t = xtc_transform_term_2_0(e_14, i_14, t);
      }
  }
  c_23 = t;
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_23 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(c_23);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
              s_6 = t;
              t = SSLsetAnnotations(s_6, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_23;
          }
        LocalPopChoice(e_47);
        t = xtc_transform_file_2_0(k_14, l_14, t);
      }
    else
      {
        t = d_47;
        t = xtc_transform_term_2_0(m_14, o_14, t);
      }
  }
  t = if_keep2_1_0(p_14, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_f_47;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm n_23 = NULL;
  t = pass_verbose_0_0(t);
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), term_y_40);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_f_47;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm o_23 = NULL;
  t = pass_verbose_0_0(t);
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(o_23), term_y_40);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_h_47;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm h_24 = NULL;
  t = pass_verbose_0_0(t);
  h_24 = t;
  t = (ATerm) ATinsert(CheckATermList(h_24), term_y_40);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_h_47;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm i_24 = NULL;
  t = pass_verbose_0_0(t);
  i_24 = t;
  t = (ATerm) ATinsert(CheckATermList(i_24), term_y_40);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = save_as_1_0(q_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_j_47;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_25 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(m_47);
        t = xtc_transform_file_2_0(b_15, h_15, t);
      }
    else
      {
        t = l_47;
        t = xtc_transform_term_2_0(k_15, l_15, t);
      }
  }
  t = if_keep5_1_0(r_15, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(m_16, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_y_40);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_y_40);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = save_as_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_n_47;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = save_as_1_0(o_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_d_42;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
  l_25 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_25 = ATgetArgument(t, 0);
            {
              ATerm q_15 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(l_25);
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, q_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(s_16, t_16, t);
      }
    else
      {
        t = p_47;
        t = xtc_transform_term_2_0(u_16, w_16, t);
      }
  }
  t = if_keep3_1_0(x_16, t);
  k_25 = t;
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(k_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_25;
          }
        LocalPopChoice(s_47);
        t = xtc_transform_file_2_0(a_17, b_17, t);
      }
    else
      {
        t = r_47;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep3_1_0(f_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(h_17, t);
  j_25 = t;
  {
    ATerm t_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(j_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_25;
          }
        LocalPopChoice(v_47);
        t = xtc_transform_file_2_0(j_17, k_17, t);
      }
    else
      {
        t = t_47;
        t = xtc_transform_term_2_0(l_17, o_17, t);
      }
  }
  t = if_keep3_1_0(p_17, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_w_47;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm u_25 = NULL;
  t = pass_verbose_0_0(t);
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), term_y_40);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_w_47;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm v_25 = NULL;
  t = pass_verbose_0_0(t);
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(v_25), term_y_40);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_y_40);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm g_26 = NULL;
  t = pass_verbose_0_0(t);
  g_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), term_y_40);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_z_47;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm n_26 = NULL;
  t = pass_verbose_0_0(t);
  n_26 = t;
  t = (ATerm) ATinsert(CheckATermList(n_26), term_y_40);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_y_40);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = save_as_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  s_26 = t;
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(s_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
              z_6 = t;
              t = SSLsetAnnotations(z_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_26;
          }
        LocalPopChoice(f_48);
        t = xtc_transform_file_2_0(t_17, u_17, t);
      }
    else
      {
        t = e_48;
        t = xtc_transform_term_2_0(v_17, w_17, t);
      }
  }
  t = if_keep1_1_0(z_17, t);
  r_26 = t;
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(r_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_26;
          }
        LocalPopChoice(h_48);
        t = xtc_transform_file_2_0(b_18, c_18, t);
      }
    else
      {
        t = g_48;
        t = xtc_transform_term_2_0(d_18, h_18, t);
      }
  }
  t = if_keep1_1_0(r_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm b_27 = NULL;
  t = pass_verbose_0_0(t);
  b_27 = t;
  t = (ATerm) ATinsert(CheckATermList(b_27), term_y_40);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_y_40);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = save_as_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_j_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_k_48;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_y_40);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = term_k_48;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_y_40);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = save_as_1_0(v_18, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_l_48;
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
  t = term_y_42;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm n_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(n_29), term_z_42);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm o_29 = NULL;
  t = pass_verbose_0_0(t);
  o_29 = t;
  t = (ATerm) ATinsert(CheckATermList(o_29), term_z_42);
  return(t);
}
ATerm save_as_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,v_28 = NULL;
  q_28 = t;
  {
    static ATerm y_18 (ATerm t);
    static ATerm y_18 (ATerm t)
    {
      static ATerm a_19 (ATerm t);
      static ATerm a_19 (ATerm t)
      {
        ATerm x_28 = NULL,c_29 = NULL;
        t = h_114(t);
        x_28 = t;
        t = term_r_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_48, x_28);
        t = l_16(c_29, x_28, t);
        return(t);
      }
      t = get_outfile_1_0(a_19, t);
      if(((o_28 != NULL) && (o_28 != t)))
        _fail(t);
      else
        o_28 = t;
      return(t);
    }
    t = copy_to_1_0(y_18, t);
  }
  {
    ATerm u_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_29 = NULL,m_29 = NULL;
        m_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(m_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_29;
          }
        LocalPopChoice(y_48);
        t = xtc_transform_file_2_0(d_19, f_19, t);
      }
    else
      {
        t = u_48;
        t = xtc_transform_term_2_0(i_19, j_19, t);
      }
  }
  {
    static ATerm k_19 (ATerm t);
    static ATerm k_19 (ATerm t)
    {
      ATerm p_29 = NULL;
      t = term_a_49;
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_a_49);
      t = l_16(not_null(o_28), p_29, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(k_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_49), not_null(p_28)), term_c_49), not_null(o_28)), term_b_49);
  v_28 = t;
  t = SSL_concat_strings(v_28);
  r_28 = t;
  t = term_l_38;
  s_28 = t;
  t = (ATerm) ATinsert(ATempty, r_28);
  u_28 = t;
  t = SSL_printnl(s_28, u_28);
  t = q_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm u_144 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm h_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,x_29 = NULL,a_30 = NULL;
        t = term_h_38;
        x_29 = t;
        t = term_v_43;
        a_30 = t;
        t = term_w_43;
        t = f_16(x_29, a_30, t);
        w_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_29, term_k_38);
        t = geq_0_0(t);
        t = u_29;
        t = u_144(t);
        LocalPopChoice(j_49);
      }
    else
      {
        t = h_49;
        t = u_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,h_30 = NULL;
  t = term_i_38;
  {
    ATerm o_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,m_30 = NULL;
        t = term_h_38;
        i_30 = t;
        t = term_i_38;
        m_30 = t;
        t = term_j_38;
        t = f_16(i_30, m_30, t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = o_49;
        t = term_d_39;
      }
  }
  d_30 = t;
  t = term_d_39;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, term_d_39);
  t = i_15(d_30, h_30, t);
  e_30 = t;
  t = SSL_int_to_string(e_30);
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_30), term_i_38);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm r_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_49 = ATgetArgument(t, 0);
      if(match_cons(t_49, sym_Stream_1))
        {
          r_30 = ATgetArgument(t_49, 0);
        }
      else
        _fail(t);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14(r_30, t_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm j_154 (ATerm), ATerm k_154 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL;
  q_30 = t;
  t = xtc_new_file_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, q_30);
  t = z_14(m_19, n_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_30);
  t = xtc_transform_file_2_0(j_154, k_154, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm a_15 (ATerm v_79, ATerm w_79, ATerm t)
{
  t = SSL_execvp(v_79, w_79);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_31 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(u_31);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_49), m_17), term_u_49);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_31 = ATgetArgument(t, 0);
          v_31 = ATgetArgument(t, 1);
          w_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_31);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_z_49), x_17), term_x_49), u_31);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_19 (ATerm t);
        static ATerm o_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_50 = ATgetArgument(t, 0);
              if((z_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_50 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_55), term_j_55), term_c_55), term_u_54), term_r_54), term_n_54), term_i_54), term_b_54), term_x_53), term_t_53), term_p_53), term_l_53), term_h_53), term_d_53), term_z_52), term_v_52), term_r_52), term_n_52), term_i_52), term_e_52), term_a_52), term_w_51), term_q_51), term_k_51), term_f_51), term_w_50), term_t_50), term_l_50);
        t = fetch_elem_1_0(o_19, t);
        LocalPopChoice(b_50);
      }
    else
      {
        t = a_50;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_31);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_32 = NULL,n_32 = NULL;
  d_32 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_55 = ATgetArgument(t, 0);
            n_32 = ATgetArgument(t, 1);
            {
              ATerm r_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_55);
        {
          ATerm s_55 = t;
          int t_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL,i_18 = NULL,q_18 = NULL;
              t = n_32;
              {
                ATerm u_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              g_18 = t;
              t = term_l_38;
              i_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_18), term_v_55);
              q_18 = t;
              t = SSL_printnl(i_18, q_18);
              t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATempty, g_18), term_v_55));
              LocalPopChoice(t_55);
            }
          else
            {
              t = s_55;
              t = d_32;
            }
        }
      }
    else
      {
        t = o_55;
        t = d_32;
      }
  }
  t = d_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_145 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = fork_0_0(t);
  w_32 = t;
  {
    ATerm w_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_32;
        t = e_145(t);
        LocalPopChoice(x_55);
      }
    else
      {
        t = w_55;
        t = SSL_waitpid(w_32);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_55 = ATgetArgument(t, 0);
            if(((ATgetType(y_55) != AT_INT) || (ATgetInt((ATermInt) y_55) != 0)))
              _fail(t);
            {
              ATerm z_55 = ATgetArgument(t, 1);
            }
            {
              ATerm a_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_32;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_155 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,f_33 = NULL;
  f_33 = t;
  t = s_155(t);
  t = xtc_find_0_0(t);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, f_33);
  {
    static ATerm s_19 (ATerm t);
    static ATerm s_19 (ATerm t)
    {
      ATerm h_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_33, f_33);
      t = a_15(b_33, f_33, t);
      t = term_d_39;
      h_33 = t;
      t = SSL_exit(h_33);
      return(t);
    }
    t = fork_and_wait_1_0(s_19, t);
  }
  t = f_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_33 = NULL,s_33 = NULL;
      t = j_33;
      t = xtc_new_file_0_0(t);
      q_33 = t;
      t = u_0(t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATinsert(ATinsert(ATempty, q_33), term_s_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_33);
    }
  else
    {
      ATerm u_33 = NULL,v_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_33;
      t = xtc_new_file_0_0(t);
      u_33 = t;
      t = u_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), term_s_38), m_33), term_b_56));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_48 = NULL,o_48 = NULL;
      o_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_48 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(o_48);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
            t_8 = t;
            t = SSLsetAnnotations(t_8, p_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_48;
        }
      LocalPopChoice(d_56);
      {
        static ATerm y_19 (ATerm t);
        static ATerm c_20 (ATerm t);
        static ATerm y_19 (ATerm t)
        {
          t = x_23;
          return(t);
        }
        static ATerm c_20 (ATerm t)
        {
          ATerm q_48 = NULL;
          t = pass_verbose_0_0(t);
          q_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), q_48), (ATerm) ATinsert(ATempty, term_y_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(y_19, c_20, t);
      }
    }
  else
    {
      t = c_56;
      {
        static ATerm d_20 (ATerm t);
        static ATerm g_20 (ATerm t);
        static ATerm d_20 (ATerm t)
        {
          t = x_23;
          return(t);
        }
        static ATerm g_20 (ATerm t)
        {
          ATerm z_48 = NULL;
          t = pass_verbose_0_0(t);
          z_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), z_48), (ATerm) ATinsert(ATempty, term_y_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_20, g_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = i_133(t);
    }
  else
    {
      ATerm f_34 = NULL,g_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_33 = ATgetFirst((ATermList) t);
          z_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_33;
      t = k_133(t);
      f_34 = t;
      t = z_33;
      t = foldr_3_0(i_133, j_133, k_133, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
      t = j_133(t);
    }
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  p_34 = t;
  t = SSL_explode_term(p_34);
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            o_34 = ATgetFirst((ATermList) f_56);
            {
              ATerm g_56 = (ATerm) ATgetNext((ATermList) f_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_34;
  return(t);
}
ATerm get_warnings_0_0 (ATerm t)
{
  ATerm h_56 = t;
  int i_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_34 = NULL,l_34 = NULL;
      t = term_h_38;
      h_34 = t;
      t = term_j_56;
      l_34 = t;
      t = term_k_56;
      t = f_16(h_34, l_34, t);
      LocalPopChoice(i_56);
    }
  else
    {
      t = h_56;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
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
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_34), term_j_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(l_20, conc_0_0, n_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_y_40);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_y_40);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  t = get_outfile_1_0(h_21, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_p_57;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL,q_19 = NULL,r_19 = NULL,w_19 = NULL,x_19 = NULL;
        t = term_h_38;
        w_19 = t;
        t = term_s_57;
        x_19 = t;
        t = term_u_57;
        t = f_16(w_19, x_19, t);
        t = e_36;
        {
          ATerm v_57 = t;
          int w_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_36;
              {
                ATerm z_57 = t;
                int a_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        o_20 = ATgetArgument(t, 0);
                        {
                          ATerm s_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(e_36);
                          s_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, s_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = e_36;
                      }
                    LocalPopChoice(a_58);
                    t = xtc_transform_file_2_0(p_20, s_20, t);
                  }
                else
                  {
                    t = z_57;
                    t = xtc_transform_term_2_0(z_20, a_21, t);
                  }
              }
              LocalPopChoice(w_57);
            }
          else
            {
              t = v_57;
              {
                ATerm w_20 = NULL,d_21 = NULL,g_21 = NULL;
                t = term_l_38;
                d_21 = t;
                t = (ATerm) ATinsert(ATempty, term_b_58);
                g_21 = t;
                t = SSL_printnl(d_21, g_21);
                t = term_d_39;
                w_20 = t;
                t = SSL_exit(w_20);
                t = (ATerm) ATinsert(ATempty, term_b_58);
              }
            }
        }
        t = copy_to_1_0(c_21, t);
        l_19 = t;
        t = term_l_38;
        q_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_58));
        r_19 = t;
        t = SSL_printnl(q_19, r_19);
        t = l_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(r_57);
      }
    else
      {
        t = q_57;
        t = e_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm x_144 (ATerm), ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm f_58 = t;
    int h_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,t_36 = NULL,w_36 = NULL;
        t = term_h_38;
        t_36 = t;
        t = term_v_43;
        w_36 = t;
        t = term_w_43;
        t = f_16(t_36, w_36, t);
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_j_47);
        t = geq_0_0(t);
        t = q_36;
        t = x_144(t);
        LocalPopChoice(h_58);
      }
    else
      {
        t = f_58;
        t = q_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm y_144 (ATerm), ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm k_58 = t;
    int l_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
        t = term_h_38;
        e_37 = t;
        t = term_v_43;
        f_37 = t;
        t = term_w_43;
        t = f_16(e_37, f_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_b_51);
        t = geq_0_0(t);
        t = z_36;
        t = y_144(t);
        LocalPopChoice(l_58);
      }
    else
      {
        t = k_58;
        t = z_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm m_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,k_37 = NULL;
      t = term_h_38;
      h_37 = t;
      t = term_r_58;
      k_37 = t;
      t = term_s_58;
      t = f_16(h_37, k_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_58);
      LocalPopChoice(q_58);
    }
  else
    {
      t = m_58;
      t = (ATerm) ATinsert(ATempty, term_v_58);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  s_37 = t;
  t = term_w_58;
  o_37 = t;
  t = term_h_38;
  u_37 = t;
  t = term_x_58;
  v_37 = t;
  t = term_z_58;
  t = f_16(u_37, v_37, t);
  t_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_37), term_x_58);
  p_37 = t;
  t = s_37;
  t = comp_0_2(o_37, p_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm v_144 (ATerm), ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
        t = term_h_38;
        c_38 = t;
        t = term_v_43;
        d_38 = t;
        t = term_w_43;
        t = f_16(c_38, d_38, t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_d_42);
        t = geq_0_0(t);
        t = x_37;
        t = v_144(t);
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        t = x_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_126 (ATerm), ATerm t)
{
  ATerm f_38 = NULL;
  static ATerm i_21 (ATerm t);
  static ATerm i_21 (ATerm t)
  {
    t = t_126(t);
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    return(t);
  }
  t = fetch_1_0(i_21, t);
  t = not_null(f_38);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  j_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_40 = ATgetArgument(t, 0);
      {
        ATerm e_22 = NULL,i_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(j_40);
        e_22 = t;
        t = k_40;
        t = fetch_elem_1_0(k_21, t);
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, i_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, e_22);
      }
    }
  else
    {
      ATerm t_23 = NULL,v_23 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          k_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_40);
      t_23 = t;
      t = k_40;
      t = fetch_elem_1_0(l_21, t);
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, v_23);
      c_10 = t;
      t = SSLsetAnnotations(c_10, t_23);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,v_22 = NULL;
  n_22 = t;
  {
    ATerm e_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            o_22 = ATgetArgument(t, 0);
            v_22 = ATgetArgument(t, 1);
            {
              ATerm j_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_59);
        t = o_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = v_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_22;
      }
    else
      {
        t = e_59;
        if(match_cons(t, sym_RDef_3))
          {
            o_22 = ATgetArgument(t, 0);
            v_22 = ATgetArgument(t, 1);
            {
              ATerm k_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = v_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_22;
      }
  }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,f_24 = NULL;
  b_24 = t;
  {
    ATerm l_59 = t;
    int m_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            c_24 = ATgetArgument(t, 0);
            f_24 = ATgetArgument(t, 1);
            {
              ATerm o_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_59);
        t = c_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = f_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_24;
      }
    else
      {
        t = l_59;
        if(match_cons(t, sym_RDef_3))
          {
            c_24 = ATgetArgument(t, 0);
            f_24 = ATgetArgument(t, 1);
            {
              ATerm q_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = f_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_24;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  t = fetch_elem_1_0(j_21, t);
  z_38 = t;
  t = term_l_38;
  a_39 = t;
  t = (ATerm) ATinsert(ATempty, term_r_59);
  b_39 = t;
  t = SSL_printnl(a_39, b_39);
  t = z_38;
  return(t);
}
static ATerm x_14 (ATerm d_24, ATerm e_24, ATerm t)
{
  t = d_24;
  {
    ATerm t_59 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_59;
      }
  }
  t = e_24;
  {
    ATerm x_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(z_59);
      }
    else
      {
        t = x_59;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(e_24), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_a_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_24), (ATerm) ATempty))))));
  return(t);
}
static ATerm y_14 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_write_term_to_stream_baf(m_42, n_42);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_40);
  return(t);
}
static ATerm z_14 (ATerm b_126 (ATerm), ATerm o_332, ATerm w_42, ATerm t)
{
  ATerm z_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_332, term_b_60);
  t = y_15(t);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_40, w_42);
  t = b_126(t);
  t = fclose_0_0(t);
  t = w_42;
  return(t);
}
static ATerm c_15 (ATerm a_115 (ATerm), ATerm w_24, ATerm u_24, ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL,j_41 = NULL;
  d_41 = t;
  t = a_115(t);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_41, w_24, u_24);
  t = g_16(a_41, w_24, u_24, t);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL;
        t = term_f_60;
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_41, term_f_60);
        t = f_16(a_41, k_41, t);
        {
          ATerm g_60 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_60;
            }
        }
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_41 = ATgetFirst((ATermList) t);
      c_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_41, term_f_60, (ATerm) ATinsert(CheckATermList(c_41), (ATerm) ATinsert(CheckATermList(b_41), w_24)));
  t = lookup_table_0_1(a_41, t);
  j_41 = t;
  t = term_f_60;
  e_41 = t;
  t = (ATerm) ATinsert(CheckATermList(c_41), (ATerm) ATinsert(CheckATermList(b_41), w_24));
  f_41 = t;
  t = j_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(e_41, f_41, h_41, t);
  t = d_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm m_41 = NULL;
  ATerm h_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,p_24 = NULL;
      r_41 = t;
      t = term_m_60;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_41, term_m_60);
      t = l_16(r_41, p_24, t);
      m_41 = t;
      t = SSL_mkstemp(m_41);
      LocalPopChoice(l_60);
    }
  else
    {
      t = h_60;
      {
        ATerm s_41 = NULL;
        t = term_n_60;
        s_41 = t;
        t = SSL_perror(s_41);
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
  ATerm o_60 = t;
  int p_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_41 = NULL;
      t = term_r_60;
      v_41 = t;
      t = SSL_getenv(v_41);
      LocalPopChoice(p_60);
    }
  else
    {
      t = o_60;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,c_42 = NULL;
  t = temp_dir_0_0(t);
  a_42 = t;
  t = term_t_60;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_42, term_t_60);
  t = l_16(a_42, c_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_39;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, term_t_39);
  t = c_15(n_21, y_41, z_41, t);
  t = SSL_close(x_41);
  t = y_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_60;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_60);
      h_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_42, (ATerm) ATinsert(ATempty, term_x_60));
      t = b_16(f_42, h_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm p_21 (ATerm t)
{
  ATerm l_42 = NULL,p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_60 = ATgetArgument(t, 0);
      if(match_cons(y_60, sym_Stream_1))
        {
          l_42 = ATgetArgument(y_60, 0);
        }
      else
        _fail(t);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_14(l_42, p_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm l_154 (ATerm), ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = read_from_0_0(t);
  t = l_154(t);
  k_42 = t;
  t = xtc_new_file_0_0(t);
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
  t = z_14(p_21, j_42, k_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_42);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = debug_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_z_60;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = save_as_1_0(z_21, t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_b_61;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm x_42 = NULL,x_43 = NULL;
  x_43 = t;
  {
    ATerm c_61 = t;
    int d_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL,m_25 = NULL;
        t = term_h_38;
        g_25 = t;
        t = term_g_61;
        m_25 = t;
        t = term_h_61;
        t = f_16(g_25, m_25, t);
        x_42 = t;
        t = if_verbose2_1_0(t_21, t);
        t = x_43;
        {
          ATerm i_61 = t;
          int j_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_25 = NULL,s_25 = NULL;
              t = term_h_38;
              n_25 = t;
              t = term_l_40;
              s_25 = t;
              t = term_m_40;
              t = f_16(n_25, s_25, t);
              t = x_43;
              LocalPopChoice(j_61);
            }
          else
            {
              t = i_61;
              {
                static ATerm x_21 (ATerm t);
                static ATerm x_21 (ATerm t)
                {
                  ATerm k_61 = t;
                  int m_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          t_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = x_14(x_42, t_26, t);
                      LocalPopChoice(m_61);
                    }
                  else
                    {
                      t = k_61;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(x_21, t);
              }
            }
        }
        LocalPopChoice(d_61);
      }
    else
      {
        t = c_61;
        t = x_43;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_44);
        LocalPopChoice(p_61);
      }
    else
      {
        t = o_61;
        t = x_44;
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm i_44 = NULL,k_44 = NULL;
  static ATerm b_22 (ATerm t);
  static ATerm b_22 (ATerm t)
  {
    ATerm n_44 = NULL,p_44 = NULL,r_44 = NULL;
    n_44 = t;
    t = term_s_60;
    p_44 = t;
    t = term_f_60;
    r_44 = t;
    t = term_r_61;
    t = f_16(p_44, r_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_44 != NULL) && (i_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_44 = ATgetFirst((ATermList) t);
        {
          ATerm s_61 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_44;
    t = map_1_0(c_22, t);
    t = n_44;
    t = end_scope_1_0(d_22, t);
    return(t);
  }
  t = repeat_2_0(b_22, _id, t);
  k_44 = t;
  t = SSL_exit(k_44);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm t_61 = t;
  int u_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_45 = NULL,t_45 = NULL;
      t = term_h_38;
      r_45 = t;
      t = term_s_38;
      t_45 = t;
      t = term_t_38;
      t = f_16(r_45, t_45, t);
      LocalPopChoice(u_61);
    }
  else
    {
      t = t_61;
      t = term_x_39;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      t = term_s_38;
      {
        ATerm v_61 = t;
        int w_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_27 = NULL,u_27 = NULL;
            t = term_h_38;
            s_27 = t;
            t = term_s_38;
            u_27 = t;
            t = term_t_38;
            t = f_16(s_27, u_27, t);
            LocalPopChoice(w_61);
          }
        else
          {
            t = v_61;
            t = term_x_39;
          }
      }
      l_27 = t;
      t = term_v_60;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_60, l_27);
      t = n_15(n_27, l_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm x_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_45;
      t = copy_to_1_0(h_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_z_37;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,a_46 = NULL,b_46 = NULL;
  t = g_114(t);
  w_45 = t;
  t = term_h_38;
  a_46 = t;
  t = term_j_43;
  b_46 = t;
  t = term_k_43;
  t = f_16(a_46, b_46, t);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, w_45);
  t = l_16(x_45, w_45, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  z_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        t = z_46;
        t = w_0(t);
        n_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_47, n_28);
        t = n_15(a_47, n_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
        LocalPopChoice(z_61);
      }
    else
      {
        t = y_61;
        {
          ATerm a_62 = t;
          int b_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_29 = NULL;
              t = z_46;
              t = w_0(t);
              i_29 = t;
              {
                ATerm c_62 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_29 = NULL;
                    j_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = j_29;
                          }
                        else
                          {
                            t = j_29;
                            if((a_47 != t))
                              {
                                _fail(t);
                              }
                            t = j_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_62;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_47, i_29);
              t = n_15(a_47, i_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
              LocalPopChoice(b_62);
            }
          else
            {
              t = a_62;
              t = z_46;
              t = w_0(t);
              if((a_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
            }
        }
      }
  }
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = get_outfile_1_0(k_22, t);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = term_d_62;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  {
    ATerm e_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,f_30 = NULL,g_30 = NULL,j_30 = NULL;
        t = term_h_38;
        g_30 = t;
        t = term_j_62;
        j_30 = t;
        t = term_k_62;
        t = f_16(g_30, j_30, t);
        t = u_47;
        t = copy_to_1_0(j_22, t);
        y_29 = t;
        t = term_l_38;
        z_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_62));
        f_30 = t;
        t = SSL_printnl(z_29, f_30);
        t = y_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(f_62);
      }
    else
      {
        t = e_62;
        t = u_47;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm e_49 = NULL,g_49 = NULL,i_49 = NULL,k_49 = NULL;
  t = term_v_43;
  {
    ATerm r_62 = t;
    int t_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_49 = NULL,m_49 = NULL;
        t = term_h_38;
        l_49 = t;
        t = term_v_43;
        m_49 = t;
        t = term_w_43;
        t = f_16(l_49, m_49, t);
        LocalPopChoice(t_62);
      }
    else
      {
        t = r_62;
        t = term_d_39;
      }
  }
  g_49 = t;
  t = term_d_39;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, term_d_39);
  t = i_15(g_49, k_49, t);
  i_49 = t;
  t = SSL_int_to_string(i_49);
  e_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_49), term_v_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm n_49 = NULL,p_49 = NULL,s_49 = NULL,y_49 = NULL,c_50 = NULL,d_50 = NULL;
  t = term_h_38;
  c_50 = t;
  t = term_w_62;
  d_50 = t;
  t = term_x_62;
  t = f_16(c_50, d_50, t);
  n_49 = t;
  t = term_y_62;
  t = xtc_find_path_0_0(t);
  p_49 = t;
  t = term_a_63;
  t = xtc_find_path_0_0(t);
  s_49 = t;
  t = term_b_63;
  t = xtc_find_path_0_0(t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_49), term_w_62), s_49), term_w_62), p_49), term_w_62));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm f_50 = NULL,k_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  p_50 = t;
  t = term_e_63;
  f_50 = t;
  t = p_50;
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_50 = NULL,y_50 = NULL;
        t = term_h_38;
        x_50 = t;
        t = term_s_38;
        y_50 = t;
        t = term_t_38;
        t = f_16(x_50, y_50, t);
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        {
          ATerm z_50 = NULL,c_51 = NULL;
          t = term_h_38;
          z_50 = t;
          t = term_j_43;
          c_51 = t;
          t = term_k_43;
          t = f_16(z_50, c_51, t);
        }
      }
  }
  q_50 = t;
  t = p_50;
  t = get_include_dirs_0_0(t);
  m_50 = t;
  t = p_50;
  t = pass_keep_0_0(t);
  n_50 = t;
  t = term_l_63;
  {
    ATerm m_63 = t;
    int n_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_51 = NULL,g_51 = NULL;
        t = term_h_38;
        d_51 = t;
        t = term_l_63;
        g_51 = t;
        t = term_o_63;
        t = f_16(d_51, g_51, t);
        LocalPopChoice(n_63);
        t = (ATerm) ATinsert(ATempty, term_l_63);
      }
    else
      {
        t = m_63;
        t = (ATerm) ATempty;
      }
  }
  o_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_50), n_50), m_50), (ATerm) ATinsert(ATinsert(ATempty, q_50), term_r_63));
  t = concat_0_0(t);
  k_50 = t;
  t = p_50;
  t = comp_0_2(f_50, k_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm t_143 (ATerm), ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  {
    ATerm s_63 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL,t_51 = NULL,u_51 = NULL;
        t = term_h_38;
        t_51 = t;
        t = term_i_38;
        u_51 = t;
        t = term_j_38;
        t = f_16(t_51, u_51, t);
        o_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_51, term_d_42);
        t = geq_0_0(t);
        t = l_51;
        t = t_143(t);
        LocalPopChoice(b_64);
      }
    else
      {
        t = s_63;
        t = l_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm p_137 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,o_52 = NULL;
  o_52 = t;
  t = SSL_explode_string(o_52);
  {
    ATerm c_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_54 (ATerm t);
        static ATerm k_54 (ATerm t)
        {
          ATerm c_54 = NULL,g_54 = NULL,h_54 = NULL;
          c_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_54 = ATgetFirst((ATermList) t);
              h_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_64 = t;
            int h_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_31 = NULL,p_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(c_54);
                f_31 = t;
                t = h_54;
                t = k_54(t);
                p_31 = t;
                t = (ATerm) ATinsert(CheckATermList(p_31), g_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, f_31);
                LocalPopChoice(h_64);
              }
            else
              {
                t = g_64;
                {
                  ATerm j_64 = t;
                  int k_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(c_54);
                      r_32 = t;
                      t = g_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(h_54), g_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, r_32);
                      LocalPopChoice(k_64);
                    }
                  else
                    {
                      t = j_64;
                      {
                        ATerm k_33 = NULL,o_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(c_54);
                        k_33 = t;
                        t = g_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = h_54;
                        t = p_137(t);
                        o_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_33), g_54);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, k_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = k_54(t);
        LocalPopChoice(f_64);
      }
    else
      {
        t = c_64;
      }
  }
  l_52 = t;
  t = SSL_implode_string(l_52);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = debug_1_0(m_22, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = term_l_64;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(t_22, t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_m_64;
  return(t);
}
static ATerm d_15 (ATerm z_23, ATerm t)
{
  ATerm v_54 = NULL,y_54 = NULL,z_54 = NULL,f_55 = NULL;
  t = z_23;
  t = basename_1_0(_id, t);
  v_54 = t;
  t = if_verbose3_1_0(l_22, t);
  t = term_l_43;
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, v_54);
  t = k_16(f_55, v_54, t);
  {
    ATerm n_64 = t;
    int s_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_55 = NULL,i_55 = NULL;
        t = term_h_38;
        h_55 = t;
        t = term_s_38;
        i_55 = t;
        t = term_t_38;
        t = f_16(h_55, i_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(s_64);
      }
    else
      {
        t = n_64;
        t = v_54;
      }
  }
  y_54 = t;
  t = if_verbose3_1_0(q_22, t);
  t = term_j_43;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_43, y_54);
  t = k_16(z_54, y_54, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_54);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_t_64;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(d_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,v_36 = NULL,y_36 = NULL,a_37 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_15(i_57, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm u_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
        j_57 = t;
        t = term_h_38;
        k_57 = t;
        t = term_l_40;
        l_57 = t;
        t = term_m_40;
        t = f_16(k_57, l_57, t);
        t = j_57;
        LocalPopChoice(y_64);
      }
    else
      {
        t = u_64;
        t = add_main_0_0(t);
      }
  }
  h_57 = t;
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_57 = ATgetArgument(t, 0);
            {
              ATerm e_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(h_57);
              e_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_57);
              c_11 = t;
              t = SSLsetAnnotations(c_11, e_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_57;
          }
        LocalPopChoice(a_65);
        t = xtc_transform_file_2_0(e_23, g_23, t);
      }
    else
      {
        t = z_64;
        t = xtc_transform_term_2_0(h_23, i_23, t);
      }
  }
  g_57 = t;
  {
    ATerm c_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_58 = ATgetArgument(t, 0);
            {
              ATerm m_34 = NULL,e_11 = NULL;
              t = SSLgetAnnotations(g_57);
              m_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_58);
              e_11 = t;
              t = SSLsetAnnotations(e_11, m_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_57;
          }
        LocalPopChoice(d_65);
        t = xtc_transform_file_2_0(k_23, l_23, t);
      }
    else
      {
        t = c_65;
        t = xtc_transform_term_2_0(m_23, p_23, t);
      }
  }
  t = if_keep5_1_0(q_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(u_23, t);
  x_34 = t;
  t = term_g_65;
  v_34 = t;
  t = x_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  w_34 = t;
  t = x_34;
  t = comp_0_2(v_34, w_34, t);
  t = if_keep6_1_0(a_24, t);
  f_57 = t;
  {
    ATerm h_65 = t;
    int i_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_58 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(f_57);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_58);
              h_11 = t;
              t = SSLsetAnnotations(h_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_57;
          }
        LocalPopChoice(i_65);
        t = xtc_transform_file_2_0(k_24, m_24, t);
      }
    else
      {
        t = h_65;
        t = xtc_transform_term_2_0(n_24, o_24, t);
      }
  }
  t = if_keep6_1_0(q_24, t);
  e_57 = t;
  {
    ATerm j_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_58 = ATgetArgument(t, 0);
            {
              ATerm d_35 = NULL,t_11 = NULL;
              t = SSLgetAnnotations(e_57);
              d_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_58);
              t_11 = t;
              t = SSLsetAnnotations(t_11, d_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_57;
          }
        LocalPopChoice(l_65);
        t = xtc_transform_file_2_0(s_24, t_24, t);
      }
    else
      {
        t = j_65;
        t = xtc_transform_term_2_0(v_24, x_24, t);
      }
  }
  t = if_keep5_1_0(y_24, t);
  d_57 = t;
  {
    ATerm m_65 = t;
    int n_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_59 = ATgetArgument(t, 0);
            {
              ATerm i_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(d_57);
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_59);
              h_12 = t;
              t = SSLsetAnnotations(h_12, i_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_57;
          }
        LocalPopChoice(n_65);
        t = xtc_transform_file_2_0(b_25, c_25, t);
      }
    else
      {
        t = m_65;
        t = xtc_transform_term_2_0(e_25, f_25, t);
      }
  }
  t = if_keep5_1_0(o_25, t);
  c_57 = t;
  {
    ATerm o_65 = t;
    int q_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_59 = ATgetArgument(t, 0);
            {
              ATerm c_36 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(c_57);
              c_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_59);
              i_12 = t;
              t = SSLsetAnnotations(i_12, c_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_57;
          }
        LocalPopChoice(q_65);
        t = xtc_transform_file_2_0(q_25, t_25, t);
      }
    else
      {
        t = o_65;
        t = xtc_transform_term_2_0(w_25, x_25, t);
      }
  }
  t = if_keep5_1_0(y_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm w_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL;
        u_59 = t;
        t = term_h_38;
        v_59 = t;
        t = term_l_40;
        w_59 = t;
        t = term_m_40;
        t = f_16(v_59, w_59, t);
        t = u_59;
        LocalPopChoice(x_65);
        {
          ATerm y_59 = NULL;
          y_59 = t;
          {
            ATerm y_65 = t;
            int c_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_60 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(y_59);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_60);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, k_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = y_59;
                  }
                LocalPopChoice(c_66);
                t = xtc_transform_file_2_0(b_26, c_26, t);
              }
            else
              {
                t = y_65;
                t = xtc_transform_term_2_0(d_26, e_26, t);
              }
          }
        }
      }
    else
      {
        t = w_65;
        {
          ATerm k_60 = NULL;
          k_60 = t;
          {
            ATerm e_66 = t;
            int m_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_60 = ATgetArgument(t, 0);
                    {
                      ATerm o_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(k_60);
                      o_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_60);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, o_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = k_60;
                  }
                LocalPopChoice(m_66);
                t = xtc_transform_file_2_0(h_26, i_26, t);
              }
            else
              {
                t = e_66;
                t = xtc_transform_term_2_0(j_26, k_26, t);
              }
          }
          t = if_keep2_1_0(m_26, t);
        }
      }
  }
  a_37 = t;
  t = term_n_66;
  v_36 = t;
  t = a_37;
  t = pass_warnings_0_0(t);
  y_36 = t;
  t = a_37;
  t = comp_0_2(v_36, y_36, t);
  b_57 = t;
  {
    ATerm r_66 = t;
    int s_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_61 = ATgetArgument(t, 0);
            {
              ATerm i_37 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(b_57);
              i_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_61);
              n_12 = t;
              t = SSLsetAnnotations(n_12, i_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_57;
          }
        LocalPopChoice(s_66);
        t = xtc_transform_file_2_0(q_26, u_26, t);
      }
    else
      {
        t = r_66;
        t = xtc_transform_term_2_0(v_26, w_26, t);
      }
  }
  a_57 = t;
  {
    ATerm u_66 = t;
    int w_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_61 = ATgetArgument(t, 0);
            {
              ATerm w_37 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(a_57);
              w_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_61);
              o_12 = t;
              t = SSLsetAnnotations(o_12, w_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_57;
          }
        LocalPopChoice(w_66);
        t = xtc_transform_file_2_0(x_26, y_26, t);
      }
    else
      {
        t = u_66;
        t = xtc_transform_term_2_0(a_27, c_27, t);
      }
  }
  t = if_keep2_1_0(e_27, t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  t = term_l_38;
  x_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), term_z_66);
  y_56 = t;
  t = SSL_printnl(x_56, y_56);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(w_56), term_z_66));
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_a_67;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm x_57 = NULL;
  t = pass_verbose_0_0(t);
  x_57 = t;
  t = (ATerm) ATinsert(CheckATermList(x_57), term_y_40);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  t = term_a_67;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm y_57 = NULL;
  t = pass_verbose_0_0(t);
  y_57 = t;
  t = (ATerm) ATinsert(CheckATermList(y_57), term_y_40);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_c_67;
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm i_58 = NULL;
  t = pass_verbose_0_0(t);
  i_58 = t;
  t = (ATerm) ATinsert(CheckATermList(i_58), term_y_40);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_c_67;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm j_58 = NULL;
  t = pass_verbose_0_0(t);
  j_58 = t;
  t = (ATerm) ATinsert(CheckATermList(j_58), term_y_40);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = save_as_1_0(r_23, t);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_d_67;
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = save_as_1_0(w_23, t);
  return(t);
}
static ATerm w_23 (ATerm t)
{
  t = term_e_67;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = save_as_1_0(g_24, t);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_g_67;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_i_67;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm t_58 = NULL;
  t = pass_verbose_0_0(t);
  t_58 = t;
  t = (ATerm) ATinsert(CheckATermList(t_58), term_y_40);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_i_67;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm u_58 = NULL;
  t = pass_verbose_0_0(t);
  u_58 = t;
  t = (ATerm) ATinsert(CheckATermList(u_58), term_y_40);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = save_as_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_j_67;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_m_67;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm a_59 = NULL;
  t = pass_verbose_0_0(t);
  a_59 = t;
  t = (ATerm) ATinsert(CheckATermList(a_59), term_y_40);
  return(t);
}
static ATerm v_24 (ATerm t)
{
  t = term_m_67;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm b_59 = NULL;
  t = pass_verbose_0_0(t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), term_y_40);
  return(t);
}
static ATerm y_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_o_67;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm h_59 = NULL;
  t = pass_verbose_0_0(t);
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), term_y_40);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm f_25 (ATerm t)
{
  ATerm i_59 = NULL;
  t = pass_verbose_0_0(t);
  i_59 = t;
  t = (ATerm) ATinsert(CheckATermList(i_59), term_y_40);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = save_as_1_0(p_25, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_b_68;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm p_59 = NULL;
  t = pass_verbose_0_0(t);
  p_59 = t;
  t = (ATerm) ATinsert(CheckATermList(p_59), term_y_40);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm s_59 = NULL;
  t = pass_verbose_0_0(t);
  s_59 = t;
  t = (ATerm) ATinsert(CheckATermList(s_59), term_y_40);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm i_60 = NULL;
  t = pass_verbose_0_0(t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), term_y_40);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm j_60 = NULL;
  t = pass_verbose_0_0(t);
  j_60 = t;
  t = (ATerm) ATinsert(CheckATermList(j_60), term_y_40);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm u_60 = NULL;
  t = pass_verbose_0_0(t);
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), term_y_40);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm w_60 = NULL;
  t = pass_verbose_0_0(t);
  w_60 = t;
  t = (ATerm) ATinsert(CheckATermList(w_60), term_y_40);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = save_as_1_0(o_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_h_68;
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm e_61 = NULL;
  t = pass_verbose_0_0(t);
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(e_61), term_y_40);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_y_40);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm n_61 = NULL;
  t = pass_verbose_0_0(t);
  n_61 = t;
  t = (ATerm) ATinsert(CheckATermList(n_61), term_y_40);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm q_61 = NULL;
  t = pass_verbose_0_0(t);
  q_61 = t;
  t = (ATerm) ATinsert(CheckATermList(q_61), term_y_40);
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_k_68;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_22, t);
  t = profile_p__2_0(x_22, z_22, t);
  return(t);
}
static ATerm f_16 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm g_62 = NULL;
  t = lookup_table_0_1(r_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_16(s_65, g_62, t);
  return(t);
}
static ATerm e_15 (ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm m_62 = NULL,p_62 = NULL;
  p_62 = t;
  {
    ATerm l_68 = t;
    int m_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        t = f_16(d_64, e_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_68 = ATgetFirst((ATermList) t);
            m_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_68);
        {
          ATerm q_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, m_62);
          t = lookup_table_0_1(d_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_16(e_64, m_62, q_62, t);
          t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, m_62);
        }
      }
    else
      {
        t = l_68;
        {
          ATerm s_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
          t = lookup_table_0_1(d_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_16(e_64, s_62, t);
          t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        }
      }
  }
  t = p_62;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,z_62 = NULL,c_63 = NULL,d_63 = NULL,h_63 = NULL,i_63 = NULL;
  c_63 = t;
  t = x_114(t);
  z_62 = t;
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL;
        t = term_f_60;
        j_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_62, term_f_60);
        t = f_16(z_62, j_63, t);
        {
          ATerm b_69 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_69;
            }
        }
        LocalPopChoice(a_69);
      }
    else
      {
        t = z_68;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_62 = ATgetFirst((ATermList) t);
      u_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_62, term_f_60, u_62);
  t = lookup_table_0_1(z_62, t);
  i_63 = t;
  t = term_f_60;
  d_63 = t;
  t = i_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(d_63, u_62, h_63, t);
  t = v_62;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm k_63 = NULL;
      k_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_62, k_63);
      t = e_15(z_62, k_63, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = c_63;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm t)
{
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_118(t);
      t = v_118(t);
      LocalPopChoice(d_69);
    }
  else
    {
      t = c_69;
      t = v_118(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,a_64 = NULL;
  q_63 = t;
  t = w_114(t);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_63, term_f_60);
  {
    ATerm f_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_64 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_69 = ATgetArgument(t, 0);
            ATerm p_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_60;
        i_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_63, term_f_60);
        t = f_16(p_63, i_64, t);
        LocalPopChoice(j_69);
      }
    else
      {
        t = f_69;
        t = (ATerm) ATempty;
      }
  }
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_63, term_f_60, (ATerm) ATinsert(CheckATermList(t_63), (ATerm) ATempty));
  t = lookup_table_0_1(p_63, t);
  a_64 = t;
  t = term_f_60;
  u_63 = t;
  t = (ATerm) ATinsert(CheckATermList(t_63), (ATerm) ATempty);
  v_63 = t;
  t = a_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(u_63, v_63, w_63, t);
  t = q_63;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_s_60;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  ATerm b_65 = NULL;
  b_65 = t;
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_65);
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        t = b_65;
      }
  }
  return(t);
}
static ATerm p_27 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_154 (ATerm), ATerm t)
{
  ATerm o_64 = NULL;
  static ATerm j_27 (ATerm t);
  static ATerm j_27 (ATerm t)
  {
    ATerm p_64 = NULL;
    p_64 = t;
    {
      ATerm s_69 = t;
      int v_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_64 = NULL,r_64 = NULL;
          t = term_s_60;
          q_64 = t;
          t = term_f_60;
          r_64 = t;
          t = term_r_61;
          t = f_16(q_64, r_64, t);
          LocalPopChoice(v_69);
        }
      else
        {
          t = s_69;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_64 != NULL) && (o_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_64 = ATgetFirst((ATermList) t);
        {
          ATerm w_69 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_64;
    t = map_1_0(k_27, t);
    t = p_64;
    t = end_scope_1_0(p_27, t);
    return(t);
  }
  t = begin_scope_1_0(h_27, t);
  t = restore_always_2_0(w_154, j_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_143 (ATerm), ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  {
    ATerm x_69 = t;
    int a_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
        t = term_h_38;
        u_65 = t;
        t = term_i_38;
        v_65 = t;
        t = term_j_38;
        t = f_16(u_65, v_65, t);
        t_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_65, term_d_39);
        t = geq_0_0(t);
        t = p_65;
        t = r_143(t);
        LocalPopChoice(a_70);
      }
    else
      {
        t = x_69;
        t = p_65;
      }
  }
  return(t);
}
static ATerm g_15 (ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm d_70 = t;
  int f_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_62, i_62);
      LocalPopChoice(f_70);
    }
  else
    {
      t = d_70;
      t = SSL_addr(h_62, i_62);
    }
  return(t);
}
static ATerm i_15 (ATerm n_62, ATerm o_62, ATerm t)
{
  ATerm g_70 = t;
  int h_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_62, o_62);
      LocalPopChoice(h_70);
    }
  else
    {
      t = g_70;
      t = SSL_subtr(n_62, o_62);
    }
  return(t);
}
static ATerm j_15 (ATerm k_72, ATerm m_72, ATerm o_72, ATerm q_72, ATerm l_72, ATerm n_72, ATerm p_72, ATerm r_72, ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,d_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_72, l_72);
  t = i_15(k_72, l_72, t);
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_72, n_72);
  t = i_15(m_72, n_72, t);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
  t = i_15(o_72, p_72, t);
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, r_72);
  t = i_15(q_72, r_72, t);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, z_65, a_66, b_66, d_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,o_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_70 = ATgetArgument(t, 0);
      if(match_cons(i_70, sym__4))
        {
          f_66 = ATgetArgument(i_70, 0);
          g_66 = ATgetArgument(i_70, 1);
          h_66 = ATgetArgument(i_70, 2);
          i_66 = ATgetArgument(i_70, 3);
        }
      else
        _fail(t);
      {
        ATerm j_70 = ATgetArgument(t, 1);
        if(match_cons(j_70, sym__4))
          {
            j_66 = ATgetArgument(j_70, 0);
            k_66 = ATgetArgument(j_70, 1);
            l_66 = ATgetArgument(j_70, 2);
            o_66 = ATgetArgument(j_70, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_15(f_66, g_66, h_66, i_66, j_66, k_66, l_66, o_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm n_141 (ATerm), ATerm o_141 (ATerm), ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,t_66 = NULL,v_66 = NULL,x_66 = NULL,y_66 = NULL,b_67 = NULL,f_67 = NULL,h_67 = NULL,k_67 = NULL,l_67 = NULL,n_67 = NULL,p_67 = NULL;
  b_67 = t;
  t = times_0_0(t);
  p_66 = t;
  t = b_67;
  t = o_141(t);
  q_66 = t;
  t = times_0_0(t);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_66, p_66);
  t = diff_times_0_0(t);
  x_66 = t;
  if(match_cons(t, sym__4))
    {
      l_67 = ATgetArgument(t, 0);
      {
        ATerm l_70 = ATgetArgument(t, 1);
      }
      n_67 = ATgetArgument(t, 2);
      {
        ATerm m_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_67, n_67);
  t = g_15(l_67, n_67, t);
  p_67 = t;
  t = SSL_TicksToSeconds(p_67);
  t_66 = t;
  t = x_66;
  if(match_cons(t, sym__4))
    {
      ATerm n_70 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
      {
        ATerm o_70 = ATgetArgument(t, 2);
      }
      h_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_67, h_67);
  t = g_15(f_67, h_67, t);
  k_67 = t;
  t = SSL_TicksToSeconds(k_67);
  v_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_66), term_r_70), t_66), term_q_70);
  t = n_141(t);
  t = q_66;
  return(t);
}
ATerm debug_1_0 (ATerm z_125 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  q_67 = t;
  t = z_125(t);
  r_67 = t;
  t = term_l_38;
  s_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_67), r_67);
  t_67 = t;
  t = SSL_printnl(s_67, t_67);
  t = q_67;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  u_67 = t;
  t = term_h_38;
  y_67 = t;
  t = term_s_70;
  z_67 = t;
  t = term_t_70;
  t = f_16(y_67, z_67, t);
  v_67 = t;
  t = term_x_39;
  w_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_71), term_b_71), term_a_71), term_z_70), term_y_70), term_x_70), term_v_70), v_67), term_u_70);
  x_67 = t;
  t = SSL_printnl(w_67, x_67);
  t = u_67;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_68 = ATgetFirst((ATermList) t);
      e_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_68;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_68;
    }
  else
    {
      t = e_68;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  static ATerm i_69 (ATerm t);
  static ATerm i_69 (ATerm t)
  {
    ATerm d_71 = t;
    int e_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_127(t);
        LocalPopChoice(e_71);
      }
    else
      {
        t = d_71;
        {
          ATerm e_69 = NULL,g_69 = NULL,h_69 = NULL,m_38 = NULL,p_38 = NULL,f_13 = NULL;
          e_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_69 = ATgetFirst((ATermList) t);
              h_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_69);
          m_38 = t;
          t = h_69;
          t = i_69(t);
          p_38 = t;
          t = (ATerm) ATinsert(CheckATermList(p_38), g_69);
          f_13 = t;
          t = SSLsetAnnotations(f_13, m_38);
        }
      }
    return(t);
  }
  t = i_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm u_126 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  static ATerm q_27 (ATerm t);
  static ATerm q_27 (ATerm t)
  {
    ATerm n_69 = NULL,o_69 = NULL,t_69 = NULL,u_69 = NULL,y_69 = NULL,z_69 = NULL,b_70 = NULL,c_70 = NULL,e_70 = NULL,n_13 = NULL,j_13 = NULL;
    e_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_69 = ATgetFirst((ATermList) t);
        z_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_70);
    u_69 = t;
    t = y_69;
    t = u_126(t);
    b_70 = t;
    t = (ATerm) ATinsert(CheckATermList(z_69), b_70);
    j_13 = t;
    t = SSLsetAnnotations(j_13, u_69);
    c_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_69 = ATgetFirst((ATermList) t);
        t_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_70);
    n_69 = t;
    t = t_69;
    if(((l_69 != NULL) && (l_69 != t)))
      _fail(t);
    else
      l_69 = t;
    t = (ATerm) ATinsert(CheckATermList(t_69), o_69);
    n_13 = t;
    t = SSLsetAnnotations(n_13, n_69);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_27, t);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_69, not_null(l_69));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,w_70 = NULL;
  ATerm i_71 = t;
  int j_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(h_136, t);
      LocalPopChoice(j_71);
    }
  else
    {
      t = i_71;
      {
        ATerm k_70 = NULL;
        k_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_70, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      p_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_71 = ATgetFirst((ATermList) t);
              ATerm l_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_70;
          t = list_tokenize_1_0(h_136, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_71 = ATgetFirst((ATermList) t);
          ATerm n_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_70;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, p_70);
        }
      else
        {
          ATerm f_71 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_71 = ATgetFirst((ATermList) t);
              ATerm p_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_70;
          t = list_tokenize_1_0(h_136, t);
          f_71 = t;
          t = (ATerm) ATinsert(CheckATermList(f_71), p_70);
        }
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm h_71 = NULL;
  h_71 = t;
  t = SSL_implode_string(h_71);
  return(t);
}
static ATerm m_15 (ATerm a_55, ATerm z_480, ATerm t)
{
  t = SSL_explode_string(z_480);
  {
    static ATerm r_27 (ATerm t);
    static ATerm r_27 (ATerm t)
    {
      ATerm g_71 = NULL;
      static ATerm t_27 (ATerm t);
      static ATerm t_27 (ATerm t)
      {
        if(((g_71 != NULL) && (g_71 != t)))
          _fail(t);
        else
          g_71 = t;
        return(t);
      }
      if(((g_71 != NULL) && (g_71 != t)))
        _fail(t);
      else
        g_71 = t;
      t = a_55;
      t = fetch_1_0(t_27, t);
      return(t);
    }
    t = list_tokenize_1_0(r_27, t);
  }
  t = map_1_0(v_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm b_72 = NULL;
  b_72 = t;
  {
    ATerm q_71 = t;
    int r_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_38 = NULL;
        t = SSL_filemode(b_72);
        if(match_cons(t, sym__2))
          {
            w_38 = ATgetArgument(t, 0);
            {
              ATerm s_71 = ATgetArgument(t, 1);
              if(((ATgetType(s_71) != AT_INT) || (ATgetInt((ATermInt) s_71) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_38;
        LocalPopChoice(r_71);
      }
    else
      {
        t = q_71;
        {
          ATerm j_39 = NULL,k_39 = NULL;
          t = term_t_71;
          k_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_71, b_72);
          t = l_16(k_39, b_72, t);
          j_39 = t;
          t = SSL_perror(j_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm n_15 (ATerm v_74, ATerm u_74, ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL;
  j_72 = t;
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_72 = NULL,t_72 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_60);
        t_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_74, (ATerm) ATinsert(ATempty, term_x_60));
        t = b_16(u_74, t_72, t);
        t = filemode_0_0(t);
        s_72 = t;
        t = SSL_S_ISDIR(s_72);
        t = j_72;
        LocalPopChoice(v_71);
        {
          ATerm u_72 = NULL,v_72 = NULL,y_72 = NULL;
          t = (ATerm) ATinsert(ATempty, term_w_71);
          y_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_w_71), v_74);
          t = m_15(y_72, v_74, t);
          t = last_0_0(t);
          u_72 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_72), term_x_71), u_74);
          v_72 = t;
          t = SSL_concat_strings(v_72);
        }
      }
    else
      {
        t = u_71;
        t = u_74;
      }
  }
  i_72 = t;
  t = SSL_copy(v_74, i_72);
  return(t);
}
static ATerm o_15 (ATerm u_68, ATerm t)
{
  t = SSL_hashtable_keys(u_68);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  static ATerm w_27 (ATerm t);
  static ATerm w_27 (ATerm t)
  {
    ATerm e_73 = NULL,f_73 = NULL;
    e_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), e_73);
    t = f_16(not_null(z_72), e_73, t);
    f_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_73, f_73);
    return(t);
  }
  if(((z_72 != NULL) && (z_72 != t)))
    _fail(t);
  else
    z_72 = t;
  t = lookup_table_0_1(z_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_15(a_73, t);
  t = map_1_0(w_27, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = debug_1_0(y_27, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_y_71;
  return(t);
}
static ATerm j_74 (ATerm l_73, ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  t = term_z_71;
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_73);
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, l_73));
  t = f_16(q_73, r_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_72 = ATgetFirst((ATermList) t);
      if(match_cons(a_72, sym__2))
        {
          ATerm d_72 = ATgetArgument(a_72, 0);
          p_73 = ATgetArgument(a_72, 1);
        }
      else
        _fail(t);
      {
        ATerm c_72 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_73;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_y_71;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_z_71;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_e_72;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_73 = NULL,u_73 = NULL,v_73 = NULL;
      t = if_verbose5_1_0(x_27, t);
      t = xtc_load_0_0(t);
      v_73 = t;
      if(match_cons(t, sym__2))
        {
          s_73 = ATgetArgument(t, 0);
          u_73 = ATgetArgument(t, 1);
          {
            ATerm h_72 = t;
            int w_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
                t = term_z_71;
                z_73 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_73);
                a_74 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, s_73));
                t = f_16(z_73, a_74, t);
                {
                  static ATerm z_27 (ATerm t);
                  static ATerm z_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_73 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_73 != NULL) && (y_73 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_73 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_27, t);
                }
                t = not_null(y_73);
                LocalPopChoice(w_72);
              }
            else
              {
                t = h_72;
                t = j_74(v_73, t);
              }
          }
        }
      else
        {
          t = j_74(v_73, t);
        }
      t = if_verbose5_1_0(a_28, t);
      LocalPopChoice(g_72);
    }
  else
    {
      t = f_72;
      {
        ATerm i_74 = NULL,w_39 = NULL,a_40 = NULL;
        i_74 = t;
        t = term_l_38;
        w_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_73), i_74), term_x_72);
        a_40 = t;
        t = SSL_printnl(w_39, a_40);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_73), i_74), term_x_72);
        t = if_verbose5_1_0(c_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_74 = NULL,n_74 = NULL;
  t = term_h_38;
  l_74 = t;
  t = term_c_73;
  n_74 = t;
  t = term_d_73;
  t = f_16(l_74, n_74, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_74), term_y_70), term_b_74), term_x_73), term_w_73), term_y_70), term_t_73), term_o_73), term_n_73), term_m_73), term_k_73), term_j_73), term_i_73), term_h_73), term_g_73);
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_74 = NULL;
  t = term_t_39;
  t = k_0(t);
  p_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_74), p_74), term_h_74), term_y_70), term_g_74), term_y_70), term_f_74), term_e_74), term_y_70), term_d_74);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  {
    ATerm m_74 = t;
    int o_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_74 = ATgetFirst((ATermList) t);
                ATerm r_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_74;
          }
        LocalPopChoice(o_74);
      }
    else
      {
        t = m_74;
        t = (ATerm) ATinsert(ATempty, x_74);
      }
  }
  y_74 = t;
  t = term_x_39;
  z_74 = t;
  t = SSL_printnl(z_74, y_74);
  t = x_74;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_75 = NULL,g_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_75 = ATgetFirst((ATermList) t);
      g_75 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_75 = NULL,m_75 = NULL;
        static ATerm e_28 (ATerm t);
        static ATerm e_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_75)), not_null(m_75));
          return(t);
        }
        t = g_75;
        t = h_0(t);
        if(((l_75 != NULL) && (l_75 != t)))
          _fail(t);
        else
          l_75 = t;
        t = e_75;
        t = f_0(t);
        if(((m_75 != NULL) && (m_75 != t)))
          _fail(t);
        else
          m_75 = t;
        t = g_75;
        t = reverse_acc_2_0(f_0, e_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_39;
      t = h_0(t);
    }
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,u_18 = NULL;
  a_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_76);
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_75);
  u_18 = t;
  t = SSLsetAnnotations(u_18, y_75);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm f_76 = NULL;
  f_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_76), term_w_74);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL;
  ATerm a_75 = t;
  int b_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_75 = NULL,w_75 = NULL;
      t = term_h_38;
      u_75 = t;
      t = term_c_73;
      w_75 = t;
      t = term_d_73;
      t = f_16(u_75, w_75, t);
      LocalPopChoice(b_75);
    }
  else
    {
      t = a_75;
      t = fetch_1_0(f_28, t);
    }
  {
    ATerm c_75 = t;
    int d_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148(t);
        t = echo_0_0(t);
        LocalPopChoice(d_75);
      }
    else
      {
        t = c_75;
      }
  }
  t = term_f_75;
  t = echo_0_0(t);
  t = term_h_75;
  s_75 = t;
  t = term_i_75;
  t_75 = t;
  t = term_j_75;
  t = f_16(s_75, t_75, t);
  t = reverse_acc_2_0(_id, g_28, t);
  t = map_1_0(h_28, t);
  t = term_k_75;
  t = echo_0_0(t);
  {
    ATerm n_75 = t;
    int o_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_148(t);
        {
          ATerm p_75 = t;
          int q_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_76 = NULL;
              g_76 = t;
              t = SSL_is_string(g_76);
              t = g_76;
              LocalPopChoice(q_75);
              {
                ATerm h_76 = NULL;
                h_76 = t;
                t = (ATerm) ATinsert(ATempty, h_76);
              }
            }
          else
            {
              t = p_75;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(o_75);
      }
    else
      {
        t = n_75;
      }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_76 = NULL,p_76 = NULL;
  static ATerm j_28 (ATerm t);
  static ATerm k_28 (ATerm t);
  static ATerm j_28 (ATerm t)
  {
    static ATerm l_28 (ATerm t);
    static ATerm l_28 (ATerm t)
    {
      t = not_null(n_76);
      return(t);
    }
    t = short_description_1_0(l_28, t);
    return(t);
  }
  static ATerm k_28 (ATerm t)
  {
    static ATerm m_28 (ATerm t);
    static ATerm m_28 (ATerm t)
    {
      t = not_null(n_76);
      return(t);
    }
    t = long_description_1_0(m_28, t);
    return(t);
  }
  p_76 = t;
  {
    ATerm r_75 = t;
    int v_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_76 = NULL,r_76 = NULL;
        t = term_h_38;
        q_76 = t;
        t = term_c_73;
        r_76 = t;
        t = term_d_73;
        t = f_16(q_76, r_76, t);
        if(((n_76 != NULL) && (n_76 != t)))
          _fail(t);
        else
          n_76 = t;
        LocalPopChoice(v_75);
      }
    else
      {
        t = r_75;
        {
          static ATerm i_28 (ATerm t);
          static ATerm i_28 (ATerm t)
          {
            ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,w_18 = NULL;
            u_76 = t;
            if(match_cons(t, sym_Program_1))
              {
                t_76 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_76);
            s_76 = t;
            t = t_76;
            if(((n_76 != NULL) && (n_76 != t)))
              _fail(t);
            else
              n_76 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, t_76);
            w_18 = t;
            t = SSLsetAnnotations(w_18, s_76);
            return(t);
          }
          t = fetch_1_0(i_28, t);
        }
      }
  }
  t = p_76;
  t = default_system_usage_2_0(j_28, k_28, t);
  return(t);
}
static ATerm t_28 (ATerm t)
{
  ATerm w_76 = NULL,y_76 = NULL,z_76 = NULL;
  if(match_cons(t, sym__2))
    {
      w_76 = ATgetArgument(t, 0);
      y_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_70), y_76), term_b_76), w_76), term_x_75);
  z_76 = t;
  t = SSL_concat_strings(z_76);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(t_28, t);
  return(t);
}
static ATerm p_15 (ATerm m_43, ATerm c_344, ATerm t)
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
  t = c_344;
  t = fetch_1_0(w_28, t);
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm f_77 = NULL;
  f_77 = t;
  if(match_string(t, "--warning"))
    {
      t = f_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = f_77;
    }
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
  t = Display_possible_warnings_0_0(t);
  i_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(i_78), term_e_76), term_d_76), term_c_76);
  j_78 = t;
  t = SSL_concat_strings(j_78);
  return(t);
}
static ATerm b_29 (ATerm t)
{
  ATerm j_77 = NULL,l_77 = NULL;
  l_77 = t;
  t = SSL_explode_term(l_77);
  if(match_cons(t, sym__2))
    {
      ATerm i_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_76 = ATgetArgument(t, 1);
        if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
          {
            j_77 = ATgetFirst((ATermList) j_76);
            {
              ATerm k_76 = (ATerm) ATgetNext((ATermList) j_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_77;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm u_77 = NULL,w_77 = NULL;
  w_77 = t;
  t = SSL_explode_term(w_77);
  if(match_cons(t, sym__2))
    {
      ATerm l_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_76 = ATgetArgument(t, 1);
        if(((ATgetType(m_76) == AT_LIST) && !(ATisEmpty(m_76))))
          {
            u_77 = ATgetFirst((ATermList) m_76);
            {
              ATerm o_76 = (ATerm) ATgetNext((ATermList) m_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_77;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  static ATerm z_28 (ATerm t);
  static ATerm z_28 (ATerm t)
  {
    if(((e_77 != NULL) && (e_77 != t)))
      _fail(t);
    else
      e_77 = t;
    {
      ATerm v_76 = t;
      int x_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = e_77;
          LocalPopChoice(x_76);
          {
            ATerm g_77 = NULL,h_77 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
            t = map_1_0(b_29, t);
            g_77 = t;
            t = term_j_56;
            h_77 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_56, g_77);
            t = k_16(h_77, g_77, t);
          }
        }
      else
        {
          t = v_76;
          t = e_77;
          {
            ATerm a_77 = t;
            int b_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(e_77);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm i_77 = ATgetFirst((ATermList) t);
                    if(((ATgetType(i_77) != AT_INT) || (ATgetInt((ATermInt) i_77) != 110)))
                      _fail(t);
                    {
                      ATerm k_77 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(k_77) == AT_LIST) && !(ATisEmpty(k_77))))
                        {
                          ATerm n_77 = ATgetFirst((ATermList) k_77);
                          if(((ATgetType(n_77) != AT_INT) || (ATgetInt((ATermInt) n_77) != 111)))
                            _fail(t);
                          {
                            ATerm s_77 = (ATerm) ATgetNext((ATermList) k_77);
                            if(((ATgetType(s_77) == AT_LIST) && !(ATisEmpty(s_77))))
                              {
                                ATerm t_77 = ATgetFirst((ATermList) s_77);
                                if(((ATgetType(t_77) != AT_INT) || (ATgetInt((ATermInt) t_77) != 45)))
                                  _fail(t);
                                if(((c_77 != NULL) && (c_77 != (ATerm) ATgetNext((ATermList) s_77))))
                                  _fail((ATerm) ATgetNext((ATermList) s_77));
                                else
                                  c_77 = (ATerm) ATgetNext((ATermList) s_77);
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
                t = e_77;
                LocalPopChoice(b_77);
                {
                  ATerm m_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
                  t = SSL_implode_string(c_77);
                  if(((d_77 != NULL) && (d_77 != t)))
                    _fail(t);
                  else
                    d_77 = t;
                  t = term_h_38;
                  p_77 = t;
                  t = term_j_56;
                  q_77 = t;
                  t = term_k_56;
                  t = f_16(p_77, q_77, t);
                  {
                    static ATerm d_29 (ATerm t);
                    static ATerm d_29 (ATerm t)
                    {
                      if((d_77 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(d_29, t);
                  }
                  m_77 = t;
                  t = term_j_56;
                  o_77 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_56, m_77);
                  t = k_16(o_77, m_77, t);
                }
              }
            else
              {
                t = a_77;
                t = e_77;
                {
                  ATerm v_77 = t;
                  int c_78 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_77 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
                      t = map_1_0(e_29, t);
                      r_77 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_77, r_77);
                      t = p_15(e_77, r_77, t);
                      t = e_77;
                      LocalPopChoice(c_78);
                      {
                        ATerm x_77 = NULL,y_77 = NULL;
                        t = term_j_56;
                        x_77 = t;
                        t = (ATerm) ATinsert(ATempty, e_77);
                        y_77 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_j_56, (ATerm) ATinsert(ATempty, e_77));
                        t = a_16(x_77, y_77, t);
                      }
                    }
                  else
                    {
                      t = v_77;
                      {
                        ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,d_78 = NULL,f_78 = NULL,g_78 = NULL;
                        t = term_h_38;
                        f_78 = t;
                        t = term_c_73;
                        g_78 = t;
                        t = term_d_73;
                        t = f_16(f_78, g_78, t);
                        z_77 = t;
                        t = term_l_38;
                        b_78 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_78), e_77), term_e_78), z_77);
                        d_78 = t;
                        t = SSL_printnl(b_78, d_78);
                        t = term_d_39;
                        a_78 = t;
                        t = SSL_exit(a_78);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_78), e_77), term_e_78), z_77);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(y_28, z_28, a_29, t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm l_78 = NULL;
  l_78 = t;
  if(match_string(t, "-S"))
    {
      t = l_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_78;
    }
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  t = term_i_38;
  m_78 = t;
  t = term_z_37;
  n_78 = t;
  t = term_k_78;
  t = k_16(m_78, n_78, t);
  t = term_o_78;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = term_q_78;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm p_78 = NULL,r_78 = NULL,s_78 = NULL;
  p_78 = t;
  t = SSL_string_to_int(p_78);
  r_78 = t;
  t = term_i_38;
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_38, r_78);
  t = k_16(s_78, r_78, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_78);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = term_c_79;
  return(t);
}
static ATerm s_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm v_78 = NULL,d_79 = NULL;
  t = term_e_79;
  v_78 = t;
  t = term_t_39;
  d_79 = t;
  t = term_f_79;
  t = k_16(v_78, d_79, t);
  t = term_j_79;
  return(t);
}
static ATerm v_29 (ATerm t)
{
  t = term_n_79;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_79 = t;
  int p_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_29, g_29, h_29, t);
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
            t = ArgOption_3_0(k_29, q_29, r_29, t);
            LocalPopChoice(s_79);
          }
        else
          {
            t = q_79;
            t = Option_3_0(s_29, t_29, v_29, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,k_79 = NULL,l_79 = NULL;
  g_79 = t;
  t = term_h_38;
  k_79 = t;
  t = term_v_38;
  l_79 = t;
  t = term_x_38;
  t = f_16(k_79, l_79, t);
  {
    static ATerm b_30 (ATerm t);
    static ATerm b_30 (ATerm t)
    {
      ATerm m_79 = NULL;
      m_79 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = g_79;
        }
      else
        {
          t = m_79;
        }
      return(t);
    }
    t = map_1_0(b_30, t);
  }
  h_79 = t;
  t = term_v_38;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, h_79);
  t = k_16(i_79, h_79, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm r_79 = NULL;
  r_79 = t;
  {
    ATerm x_79 = t;
    int z_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_79 = NULL,u_79 = NULL,y_79 = NULL;
        t = term_h_38;
        u_79 = t;
        t = term_i_38;
        y_79 = t;
        t = term_j_38;
        t = f_16(u_79, y_79, t);
        t_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_79, term_j_47);
        t = geq_0_0(t);
        t = r_79;
        t = v_143(t);
        LocalPopChoice(z_79);
      }
    else
      {
        t = x_79;
        t = r_79;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  ATerm g_80 = NULL;
  g_80 = t;
  {
    ATerm a_80 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_80 = NULL,k_80 = NULL,m_80 = NULL;
        t = term_h_38;
        k_80 = t;
        t = term_i_38;
        m_80 = t;
        t = term_j_38;
        t = f_16(k_80, m_80, t);
        i_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_80, term_a_45);
        t = geq_0_0(t);
        t = g_80;
        t = u_143(t);
        LocalPopChoice(b_80);
      }
    else
      {
        t = a_80;
        t = g_80;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,g_81 = NULL;
  w_80 = t;
  if(match_cons(t, sym__2))
    {
      x_80 = ATgetArgument(t, 0);
      g_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_80 = t;
    int d_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_81;
        if((x_80 != t))
          {
            _fail(t);
          }
        t = w_80;
        LocalPopChoice(d_80);
      }
    else
      {
        t = c_80;
        t = (ATerm) ATmakeAppl(sym__2, x_80, g_81);
        {
          ATerm e_80 = t;
          int f_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_80, g_81);
              LocalPopChoice(f_80);
            }
          else
            {
              t = e_80;
              t = SSL_gtr(x_80, g_81);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_80, g_81);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_143 (ATerm), ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  {
    ATerm h_80 = t;
    int j_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_81 = NULL,r_81 = NULL,s_81 = NULL;
        t = term_h_38;
        r_81 = t;
        t = term_i_38;
        s_81 = t;
        t = term_j_38;
        t = f_16(r_81, s_81, t);
        p_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_81, term_b_51);
        t = geq_0_0(t);
        t = l_81;
        t = w_143(t);
        LocalPopChoice(j_80);
      }
    else
      {
        t = h_80;
        t = l_81;
      }
  }
  return(t);
}
static ATerm s_15 (ATerm v_130 (ATerm), ATerm w_130 (ATerm), ATerm x_48, ATerm w_48, ATerm t)
{
  t = w_130(t);
  {
    static ATerm k_30 (ATerm t);
    static ATerm k_30 (ATerm t)
    {
      ATerm u_81 = NULL;
      u_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_48, u_81);
      t = v_130(t);
      return(t);
    }
    t = fetch_1_0(k_30, t);
  }
  t = w_48;
  return(t);
}
static ATerm t_15 (ATerm s_130 (ATerm), ATerm t_48, ATerm s_48, ATerm t)
{
  static ATerm v_82 (ATerm t);
  static ATerm v_82 (ATerm t)
  {
    ATerm p_82 = NULL,r_82 = NULL,s_82 = NULL;
    p_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_82 = ATgetFirst((ATermList) t);
            s_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_80 = t;
          int n_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_82;
              {
                static ATerm l_30 (ATerm t);
                static ATerm l_30 (ATerm t)
                {
                  t = s_48;
                  return(t);
                }
                t = s_15(s_130, l_30, r_82, s_82, t);
              }
              t = v_82(t);
              LocalPopChoice(n_80);
            }
          else
            {
              t = l_80;
              {
                ATerm l_41 = NULL,w_41 = NULL,z_18 = NULL;
                t = SSLgetAnnotations(p_82);
                l_41 = t;
                t = s_82;
                t = v_82(t);
                w_41 = t;
                t = (ATerm) ATinsert(CheckATermList(w_41), r_82);
                z_18 = t;
                t = SSLsetAnnotations(z_18, l_41);
              }
            }
        }
      }
    return(t);
  }
  t = t_48;
  t = v_82(t);
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm k_83 = NULL;
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      if((k_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_15 (ATerm v_64, ATerm w_64, ATerm x_64, ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL;
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
  {
    ATerm o_80 = t;
    int p_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_80 = ATgetArgument(t, 0);
            ATerm r_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_64, w_64);
        t = f_16(v_64, w_64, t);
        LocalPopChoice(p_80);
      }
    else
      {
        t = o_80;
        t = (ATerm) ATempty;
      }
  }
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_83, x_64);
  t = t_15(o_30, a_83, x_64, t);
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_64, w_64, z_82);
  t = lookup_table_0_1(v_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(w_64, z_82, b_83, t);
  t = y_82;
  return(t);
}
ATerm map_1_0 (ATerm j_126 (ATerm), ATerm t)
{
  static ATerm z_83 (ATerm t);
  static ATerm z_83 (ATerm t)
  {
    ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL;
    w_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_83;
      }
    else
      {
        ATerm u_42 = NULL,c_43 = NULL,d_43 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_83 = ATgetFirst((ATermList) t);
            y_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_83);
        u_42 = t;
        t = x_83;
        t = j_126(t);
        c_43 = t;
        t = y_83;
        t = z_83(t);
        d_43 = t;
        t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
        e_19 = t;
        t = SSLsetAnnotations(e_19, u_42);
      }
    return(t);
  }
  t = z_83(t);
  return(t);
}
static ATerm v_15 (ATerm d_140 (ATerm), ATerm f_65, ATerm e_65, ATerm t)
{
  static ATerm s_30 (ATerm t);
  static ATerm s_30 (ATerm t)
  {
    ATerm b_84 = NULL,c_84 = NULL;
    if(match_cons(t, sym__2))
      {
        b_84 = ATgetArgument(t, 0);
        c_84 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_65, b_84, c_84);
    t = d_140(t);
    return(t);
  }
  t = e_65;
  t = map_1_0(s_30, t);
  return(t);
}
static ATerm q_84 (ATerm k_84, ATerm t)
{
  t = SSL_fclose(k_84);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  o_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_84 = ATgetArgument(t, 0);
      {
        ATerm s_80 = t;
        int t_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_84);
            LocalPopChoice(t_80);
          }
        else
          {
            t = s_80;
            t = q_84(o_84, t);
          }
      }
    }
  else
    {
      t = q_84(o_84, t);
    }
  return(t);
}
static ATerm w_15 (ATerm s_42, ATerm t)
{
  t = SSL_read_term_from_stream(s_42);
  return(t);
}
static ATerm x_15 (ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm r_84 = NULL;
  t = SSL_fopen(o_58, p_58);
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_84 = NULL;
  t = SSL_stdin_stream();
  s_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_84 = NULL;
  t = SSL_stdout_stream();
  t_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_84 = NULL;
  t = SSL_stderr_stream();
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_84);
  return(t);
}
static ATerm n_86 (ATerm f_85, ATerm t)
{
  ATerm g_85 = NULL;
  t = SSL_explode_term(f_85);
  if(match_cons(t, sym__2))
    {
      ATerm u_80 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_80) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_80 = ATgetArgument(t, 1);
        if(((ATgetType(v_80) == AT_LIST) && !(ATisEmpty(v_80))))
          {
            g_85 = ATgetFirst((ATermList) v_80);
            {
              ATerm y_80 = (ATerm) ATgetNext((ATermList) v_80);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_86 (ATerm j_85, ATerm k_85, ATerm p_85, ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL,w_85 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(p_85);
  s_85 = t;
  t = j_85;
  if(match_cons(t, sym_Path_1))
    {
      w_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_85, k_85);
  g_19 = t;
  t = SSLsetAnnotations(g_19, s_85);
  if(match_cons(t, sym__2))
    {
      q_85 = ATgetArgument(t, 0);
      r_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_15(q_85, r_85, t);
  return(t);
}
static ATerm p_86 (ATerm y_85, ATerm z_85, ATerm a_86, ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,i_86 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(a_86);
  d_86 = t;
  t = SSL_is_string(y_85);
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_86, z_85);
  h_19 = t;
  t = SSLsetAnnotations(h_19, d_86);
  if(match_cons(t, sym__2))
    {
      b_86 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_15(b_86, c_86, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  if(match_cons(t, sym__2))
    {
      l_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
      {
        ATerm z_80 = t;
        int a_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_86(k_86, t);
            LocalPopChoice(a_81);
          }
        else
          {
            t = z_80;
            {
              ATerm b_81 = t;
              int c_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_86(l_86, m_86, k_86, t);
                  LocalPopChoice(c_81);
                }
              else
                {
                  t = b_81;
                  t = p_86(l_86, m_86, k_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_86(k_86, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL,a_87 = NULL;
  a_87 = t;
  {
    ATerm d_81 = t;
    int e_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_87, term_f_81);
        t = y_15(t);
        LocalPopChoice(e_81);
      }
    else
      {
        t = d_81;
        {
          ATerm y_43 = NULL,z_43 = NULL;
          t = term_h_81;
          z_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_81, a_87);
          t = l_16(z_43, a_87, t);
          y_43 = t;
          t = SSL_perror(y_43);
          _fail(t);
        }
      }
  }
  s_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(t_86, t);
  r_86 = t;
  t = s_86;
  t = fclose_0_0(t);
  t = r_86;
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = term_i_81;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  t = term_j_81;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_81 = t;
  int m_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_87 = NULL,g_87 = NULL;
      f_87 = t;
      t = (ATerm) ATinsert(ATempty, term_n_81);
      g_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_87, (ATerm) ATinsert(ATempty, term_n_81));
      t = b_16(f_87, g_87, t);
      LocalPopChoice(m_81);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_81;
      {
        ATerm o_81 = t;
        int q_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_81 = t;
            if((PushChoice() == 0))
              {
                ATerm h_87 = NULL,i_87 = NULL;
                h_87 = t;
                t = (ATerm) ATinsert(ATempty, term_x_60);
                i_87 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_87, (ATerm) ATinsert(ATempty, term_x_60));
                t = b_16(h_87, i_87, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_81;
              }
            t = debug_1_0(u_30, t);
            LocalPopChoice(q_81);
          }
        else
          {
            t = o_81;
            t = debug_1_0(v_30, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_30 (ATerm t)
{
  t = debug_1_0(x_30, t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  t = term_v_81;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = debug_1_0(z_30, t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = term_w_81;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  t = term_l_38;
  c_88 = t;
  t = (ATerm) ATinsert(ATempty, term_x_81);
  d_88 = t;
  t = SSL_printnl(c_88, d_88);
  t = b_88;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_cons(t, sym__3))
    {
      e_88 = ATgetArgument(t, 0);
      f_88 = ATgetArgument(t, 1);
      g_88 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_15(e_88, f_88, g_88, t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm i_88 = NULL,l_88 = NULL,m_88 = NULL;
  i_88 = t;
  t = term_l_38;
  l_88 = t;
  t = (ATerm) ATinsert(ATempty, term_y_81);
  m_88 = t;
  t = SSL_printnl(l_88, m_88);
  t = i_88;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm o_88 = NULL,q_88 = NULL,r_88 = NULL;
  o_88 = t;
  t = term_l_38;
  q_88 = t;
  t = (ATerm) ATinsert(ATempty, term_x_81);
  r_88 = t;
  t = SSL_printnl(q_88, r_88);
  t = o_88;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL,m_87 = NULL,n_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL;
  j_87 = t;
  t = if_verbose5_1_0(w_30, t);
  {
    ATerm z_81 = t;
    if((PushChoice() == 0))
      {
        ATerm z_87 = NULL,a_88 = NULL;
        t = term_z_71;
        z_87 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_87);
        a_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Imported_1, j_87));
        t = f_16(z_87, a_88, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_81;
      }
  }
  m_87 = t;
  t = term_z_71;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_82, (ATerm) ATinsert(ATempty, j_87));
  t = lookup_table_0_1(u_87, t);
  y_87 = t;
  t = term_a_82;
  v_87 = t;
  t = (ATerm) ATinsert(ATempty, j_87);
  w_87 = t;
  t = y_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(v_87, w_87, x_87, t);
  t = m_87;
  t = if_verbose4_1_0(y_30, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_31, t);
  k_87 = t;
  t = term_z_71;
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, k_87);
  t = v_15(b_31, t_87, k_87, t);
  t = if_verbose6_1_0(c_31, t);
  t = term_z_71;
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, (ATerm)ATmakeAppl(sym_Imported_1, j_87), (ATerm) ATempty);
  t = lookup_table_0_1(n_87, t);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_87);
  p_87 = t;
  t = (ATerm) ATempty;
  q_87 = t;
  t = s_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(p_87, q_87, r_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, (ATerm)ATmakeAppl(sym_Imported_1, j_87), (ATerm) ATempty);
  t = if_verbose4_1_0(d_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,c_90 = NULL;
  x_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_89;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_89 = ATgetFirst((ATermList) t);
          c_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_82 = t;
        int c_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_44 = NULL,l_44 = NULL,m_44 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(x_89);
            g_44 = t;
            t = y_89;
            t = k_134(t);
            l_44 = t;
            t = c_90;
            t = filter_1_0(k_134, t);
            m_44 = t;
            t = (ATerm) ATinsert(CheckATermList(m_44), l_44);
            n_19 = t;
            t = SSLsetAnnotations(n_19, g_44);
            LocalPopChoice(c_82);
          }
        else
          {
            t = b_82;
            t = c_90;
            t = filter_1_0(k_134, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm t)
{
  static ATerm f_90 (ATerm t);
  static ATerm f_90 (ATerm t)
  {
    ATerm d_82 = t;
    int e_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_118(t);
        t = f_90(t);
        LocalPopChoice(e_82);
      }
    else
      {
        t = d_82;
        t = z_118(t);
      }
    return(t);
  }
  t = f_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_82 = t;
  int g_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_90 = NULL,h_90 = NULL;
      t = term_h_38;
      g_90 = t;
      t = term_h_82;
      h_90 = t;
      t = term_i_82;
      t = f_16(g_90, h_90, t);
      LocalPopChoice(g_82);
    }
  else
    {
      t = f_82;
      {
        ATerm j_82 = t;
        int k_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_90 = NULL;
            t = term_l_82;
            i_90 = t;
            t = SSL_getenv(i_90);
            LocalPopChoice(k_82);
          }
        else
          {
            t = j_82;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm e_31 (ATerm t)
{
  t = debug_1_0(g_31, t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  t = term_m_82;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL;
  t = term_z_71;
  o_90 = t;
  t = term_n_82;
  p_90 = t;
  t = term_o_82;
  t = f_16(o_90, p_90, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_82 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_82;
      }
  }
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = debug_1_0(j_31, t);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_t_82;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_90 = NULL;
  t = if_verbose5_1_0(e_31, t);
  k_90 = t;
  {
    ATerm u_82 = t;
    int w_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_90 = NULL,m_90 = NULL;
        t = term_z_71;
        l_90 = t;
        t = term_a_82;
        m_90 = t;
        t = term_x_82;
        t = f_16(l_90, m_90, t);
        LocalPopChoice(w_82);
      }
    else
      {
        t = u_82;
        {
          ATerm n_90 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_90 = t;
          t = repeat_2_0(h_31, _id, t);
          t = n_90;
        }
      }
  }
  t = k_90;
  t = if_verbose5_1_0(i_31, t);
  return(t);
}
static ATerm x_91 (ATerm b_91, ATerm t)
{
  ATerm e_91 = NULL,f_91 = NULL,j_91 = NULL;
  t = term_z_71;
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_91);
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, b_91));
  t = f_16(f_91, j_91, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_83 = ATgetFirst((ATermList) t);
      if(match_cons(c_83, sym__2))
        {
          ATerm e_83 = ATgetArgument(c_83, 0);
          e_91 = ATgetArgument(c_83, 1);
        }
      else
        _fail(t);
      {
        ATerm d_83 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_91;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(m_31, t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_y_71;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm l_91 = NULL,o_91 = NULL,p_91 = NULL;
  t = xtc_load_0_0(t);
  p_91 = t;
  if(match_cons(t, sym__2))
    {
      l_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
      {
        ATerm f_83 = t;
        int g_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_91 = NULL,v_91 = NULL,w_91 = NULL;
            t = term_z_71;
            v_91 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, l_91);
            w_91 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, l_91));
            t = f_16(v_91, w_91, t);
            {
              static ATerm k_31 (ATerm t);
              static ATerm k_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((o_91 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((s_91 != NULL) && (s_91 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_31, t);
            }
            t = not_null(s_91);
            LocalPopChoice(g_83);
          }
        else
          {
            t = f_83;
            t = x_91(p_91, t);
          }
      }
    }
  else
    {
      t = x_91(p_91, t);
    }
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_92 = NULL,n_92 = NULL,o_92 = NULL;
      t = term_t_39;
      t = r_0(t);
      j_92 = t;
      t = term_h_75;
      n_92 = t;
      t = term_i_75;
      o_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, j_92);
      t = g_16(n_92, o_92, j_92, t);
      _fail(t);
    }
  else
    {
      ATerm u_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_92 = ATgetFirst((ATermList) t);
          g_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_92 = ATgetFirst((ATermList) t);
          i_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_92;
      t = o_0(t);
      t = h_92;
      t = p_0(t);
      u_92 = t;
      t = (ATerm) ATinsert(CheckATermList(i_92), u_92);
    }
  return(t);
}
static ATerm z_15 (ATerm w_78, ATerm x_78, ATerm t)
{
  ATerm h_83 = t;
  int i_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_92 = NULL,y_92 = NULL,c_93 = NULL;
      t = term_h_38;
      c_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, w_78);
      t = f_16(c_93, w_78, t);
      t = term_h_38;
      x_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, w_78);
      t = lookup_table_0_1(x_92, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          y_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_16(w_78, y_92, t);
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, w_78);
      LocalPopChoice(i_83);
    }
  else
    {
      t = h_83;
      t = (ATerm) ATmakeAppl(sym__2, w_78, x_78);
      t = k_16(w_78, x_78, t);
    }
  return(t);
}
static ATerm a_16 (ATerm z_78, ATerm y_78, ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  t = z_78;
  {
    ATerm j_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_93 = NULL;
        t = term_h_38;
        k_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_38, z_78);
        t = f_16(k_93, z_78, t);
        LocalPopChoice(l_83);
      }
    else
      {
        t = j_83;
        t = (ATerm) ATempty;
      }
  }
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_78, e_93);
  t = conc_0_0(t);
  d_93 = t;
  t = term_h_38;
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, z_78, d_93);
  t = lookup_table_0_1(f_93, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(z_78, d_93, g_93, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, z_78, d_93);
  return(t);
}
static ATerm b_16 (ATerm c_58, ATerm d_58, ATerm t)
{
  t = SSL_access(c_58, d_58);
  return(t);
}
ATerm at_end_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  static ATerm t_94 (ATerm t);
  static ATerm t_94 (ATerm t)
  {
    ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
    s_94 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_94 = ATgetFirst((ATermList) t);
        r_94 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_45 = NULL,h_45 = NULL,p_19 = NULL;
          t = SSLgetAnnotations(s_94);
          d_45 = t;
          t = r_94;
          t = t_94(t);
          h_45 = t;
          t = (ATerm) ATinsert(CheckATermList(h_45), q_94);
          p_19 = t;
          t = SSLsetAnnotations(p_19, d_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_94;
        t = y_126(t);
      }
    return(t);
  }
  t = t_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_93 = NULL,s_93 = NULL,v_93 = NULL;
  q_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_93;
    }
  else
    {
      static ATerm n_31 (ATerm t);
      static ATerm n_31 (ATerm t)
      {
        t = not_null(v_93);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_93 = ATgetFirst((ATermList) t);
          if(((v_93 != NULL) && (v_93 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_93;
      t = at_end_1_0(n_31, t);
    }
  return(t);
}
static ATerm f_95 (ATerm x_94, ATerm t)
{
  ATerm y_94 = NULL;
  t = SSL_explode_term(x_94);
  if(match_cons(t, sym__2))
    {
      ATerm m_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_94;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
  c_95 = t;
  if(match_cons(t, sym__2))
    {
      a_95 = ATgetArgument(t, 0);
      b_95 = ATgetArgument(t, 1);
      {
        ATerm n_83 = t;
        int o_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_31 (ATerm t);
            static ATerm o_31 (ATerm t)
            {
              t = b_95;
              return(t);
            }
            t = a_95;
            t = at_end_1_0(o_31, t);
            LocalPopChoice(o_83);
          }
        else
          {
            t = n_83;
            t = f_95(c_95, t);
          }
      }
    }
  else
    {
      t = f_95(c_95, t);
    }
  return(t);
}
static ATerm c_16 (ATerm a_79, ATerm b_79, ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,k_95 = NULL,l_95 = NULL;
  t = a_79;
  {
    ATerm p_83 = t;
    int q_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_95 = NULL;
        t = term_h_38;
        n_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_38, a_79);
        t = f_16(n_95, a_79, t);
        LocalPopChoice(q_83);
      }
    else
      {
        t = p_83;
        t = (ATerm) ATempty;
      }
  }
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_95, b_79);
  t = conc_0_0(t);
  g_95 = t;
  t = term_h_38;
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, a_79, g_95);
  t = lookup_table_0_1(k_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(a_79, g_95, l_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, a_79, g_95);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm p_95 = NULL;
  p_95 = t;
  if(match_string(t, "-o"))
    {
      t = p_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_95;
    }
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  q_95 = t;
  t = term_s_38;
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_38, q_95);
  t = k_16(r_95, q_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_95);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_r_83;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_31, r_31, s_31, t);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  if(match_string(t, "-i"))
    {
      t = t_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_95;
    }
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL;
  u_95 = t;
  t = term_b_56;
  v_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_56, u_95);
  t = k_16(v_95, u_95, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_95);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_s_83;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_31, y_31, a_32, t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm h_96 = NULL;
  h_96 = t;
  if(match_string(t, "-I"))
    {
      t = h_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = h_96;
    }
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm i_96 = NULL,l_96 = NULL,m_96 = NULL;
  i_96 = t;
  t = term_w_62;
  l_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_96), term_w_62);
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_62, (ATerm) ATinsert(ATinsert(ATempty, i_96), term_w_62));
  t = c_16(l_96, m_96, t);
  t = term_t_39;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_t_83;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  if(match_string(t, "--main"))
    {
      t = n_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = n_96;
    }
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  o_96 = t;
  t = term_g_61;
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_61, o_96);
  t = k_16(p_96, o_96, t);
  t = term_t_39;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_u_83;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm q_96 = NULL;
  q_96 = t;
  if(match_string(t, "--library"))
    {
      t = q_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = q_96;
    }
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL;
  t = term_l_40;
  t_96 = t;
  t = term_t_39;
  u_96 = t;
  t = term_v_83;
  t = k_16(t_96, u_96, t);
  t = term_t_39;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_a_84;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm v_96 = NULL,y_96 = NULL,z_96 = NULL;
  v_96 = t;
  t = term_f_40;
  y_96 = t;
  t = (ATerm) ATinsert(ATempty, v_96);
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, (ATerm) ATinsert(ATempty, v_96));
  t = c_16(y_96, z_96, t);
  t = term_t_39;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_d_84;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
  a_97 = t;
  t = term_g_39;
  b_97 = t;
  t = (ATerm) ATinsert(ATempty, a_97);
  c_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATempty, a_97));
  t = a_16(b_97, c_97, t);
  t = term_t_39;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_e_84;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,j_97 = NULL;
  d_97 = t;
  t = term_f_84;
  j_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_84, d_97);
  t = l_16(j_97, d_97, t);
  e_97 = t;
  t = term_i_39;
  f_97 = t;
  t = (ATerm) ATinsert(ATempty, e_97);
  g_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATinsert(ATempty, e_97));
  t = a_16(f_97, g_97, t);
  t = term_t_39;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_g_84;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  k_97 = t;
  t = term_h_84;
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_84, k_97);
  t = l_16(o_97, k_97, t);
  l_97 = t;
  t = term_v_38;
  m_97 = t;
  t = (ATerm) ATinsert(ATempty, l_97);
  n_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, l_97));
  t = a_16(m_97, n_97, t);
  t = term_t_39;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  t = term_i_84;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_33 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL;
  p_97 = t;
  t = term_j_84;
  t_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_84, p_97);
  t = l_16(t_97, p_97, t);
  q_97 = t;
  t = term_v_38;
  r_97 = t;
  t = (ATerm) ATinsert(ATempty, q_97);
  s_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, q_97));
  t = a_16(r_97, s_97, t);
  t = term_t_39;
  return(t);
}
static ATerm e_33 (ATerm t)
{
  t = term_l_84;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,y_97 = NULL;
  u_97 = t;
  {
    ATerm m_84 = t;
    int p_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_97 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_60);
        z_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_97, (ATerm) ATinsert(ATempty, term_x_60));
        t = b_16(u_97, z_97, t);
        LocalPopChoice(p_84);
      }
    else
      {
        t = m_84;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_84), u_97), term_u_84);
        {
          ATerm w_84 = t;
          int x_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_45 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_84), u_97), term_u_84);
              y_45 = t;
              t = SSL_concat_strings(y_45);
              t = xtc_find_0_0(t);
              LocalPopChoice(x_84);
            }
          else
            {
              t = w_84;
              {
                ATerm d_98 = NULL;
                t = term_d_39;
                d_98 = t;
                t = SSL_exit(d_98);
              }
            }
        }
      }
  }
  v_97 = t;
  t = term_v_38;
  w_97 = t;
  t = (ATerm) ATinsert(ATempty, v_97);
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, v_97));
  t = a_16(w_97, y_97, t);
  t = term_t_39;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  t = term_z_84;
  return(t);
}
static ATerm n_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_33 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
  g_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_85), g_98), term_a_85);
  m_98 = t;
  t = SSL_concat_strings(m_98);
  h_98 = t;
  t = term_i_39;
  k_98 = t;
  t = (ATerm) ATinsert(ATempty, h_98);
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATinsert(ATempty, h_98));
  t = a_16(k_98, l_98, t);
  t = term_t_39;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  t = term_c_85;
  return(t);
}
static ATerm t_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  ATerm n_98 = NULL,r_98 = NULL;
  t = term_m_39;
  n_98 = t;
  t = term_t_39;
  r_98 = t;
  t = term_d_85;
  t = k_16(n_98, r_98, t);
  t = term_t_39;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_e_85;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL;
  t = term_j_62;
  s_98 = t;
  t = term_t_39;
  t_98 = t;
  t = term_h_85;
  t = k_16(s_98, t_98, t);
  t = term_t_39;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  t = term_i_85;
  return(t);
}
static ATerm i_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_34 (ATerm t)
{
  ATerm x_98 = NULL,a_99 = NULL;
  t = term_s_57;
  x_98 = t;
  t = term_t_39;
  a_99 = t;
  t = term_l_85;
  t = k_16(x_98, a_99, t);
  t = term_t_39;
  return(t);
}
static ATerm k_34 (ATerm t)
{
  t = term_m_85;
  return(t);
}
static ATerm n_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_34 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,e_99 = NULL;
  b_99 = t;
  t = SSL_string_to_int(b_99);
  c_99 = t;
  t = term_v_43;
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, c_99);
  t = k_16(e_99, c_99, t);
  t = term_t_39;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = term_n_85;
  return(t);
}
static ATerm t_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_34 (ATerm t)
{
  ATerm g_99 = NULL,i_99 = NULL,n_99 = NULL;
  g_99 = t;
  t = SSL_string_to_int(g_99);
  i_99 = t;
  t = term_c_44;
  n_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_44, i_99);
  t = k_16(n_99, i_99, t);
  t = term_t_39;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  t = term_o_85;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_35 (ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL;
  t = term_o_45;
  o_99 = t;
  t = term_t_39;
  p_99 = t;
  t = term_t_85;
  t = z_15(o_99, p_99, t);
  t = term_t_39;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_u_85;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_35 (ATerm t)
{
  ATerm u_99 = NULL,w_99 = NULL;
  u_99 = t;
  if(match_string(t, "old"))
    {
      t = u_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = u_99;
    }
  t = term_x_58;
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_58, u_99);
  t = k_16(w_99, u_99, t);
  t = term_t_39;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_v_85;
  return(t);
}
static ATerm h_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_t_39;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  t = term_x_85;
  return(t);
}
static ATerm l_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_e_86;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_t_39;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  t = term_f_86;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  ATerm a_100 = NULL;
  a_100 = t;
  if(match_string(t, "-h"))
    {
      t = a_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = a_100;
    }
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm b_100 = NULL,e_100 = NULL;
  t = term_g_86;
  b_100 = t;
  t = term_t_39;
  e_100 = t;
  t = term_h_86;
  t = k_16(b_100, e_100, t);
  t = term_t_39;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_j_86;
  return(t);
}
static ATerm r_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_35 (ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL;
  t = term_q_86;
  f_100 = t;
  t = term_t_39;
  g_100 = t;
  t = term_u_86;
  t = k_16(f_100, g_100, t);
  t = term_t_39;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = term_v_86;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  ATerm i_100 = NULL;
  i_100 = t;
  if(match_string(t, "-v"))
    {
      t = i_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = i_100;
    }
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm j_100 = NULL,o_100 = NULL;
  t = term_w_86;
  j_100 = t;
  t = term_t_39;
  o_100 = t;
  t = term_x_86;
  t = k_16(j_100, o_100, t);
  t = term_t_39;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_y_86;
  return(t);
}
static ATerm x_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_35 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  p_100 = t;
  t = term_r_58;
  q_100 = t;
  t = term_d_39;
  r_100 = t;
  t = term_z_86;
  t = k_16(q_100, r_100, t);
  t = p_100;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  t = term_r_58;
  return(t);
}
static ATerm a_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_36 (ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL,w_100 = NULL;
  s_100 = t;
  t = term_v_58;
  t_100 = t;
  t = term_z_37;
  w_100 = t;
  t = term_b_87;
  t = k_16(t_100, w_100, t);
  t = s_100;
  return(t);
}
static ATerm d_36 (ATerm t)
{
  t = term_v_58;
  return(t);
}
static ATerm f_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL;
  t = term_l_63;
  x_100 = t;
  t = term_t_39;
  y_100 = t;
  t = term_c_87;
  t = k_16(x_100, y_100, t);
  t = term_t_39;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_d_87;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm e_87 = t;
  int l_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_87);
    }
  else
    {
      t = e_87;
      {
        ATerm o_87 = t;
        int h_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_88);
          }
        else
          {
            t = o_87;
            {
              ATerm j_88 = t;
              int k_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_32, c_32, e_32, t);
                  LocalPopChoice(k_88);
                }
              else
                {
                  t = j_88;
                  {
                    ATerm n_88 = t;
                    int p_88 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_32, g_32, h_32, t);
                        LocalPopChoice(p_88);
                      }
                    else
                      {
                        t = n_88;
                        {
                          ATerm s_88 = t;
                          int t_88 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(i_32, j_32, k_32, t);
                              LocalPopChoice(t_88);
                            }
                          else
                            {
                              t = s_88;
                              {
                                ATerm u_88 = t;
                                int v_88 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_32, m_32, o_32, t);
                                    LocalPopChoice(v_88);
                                  }
                                else
                                  {
                                    t = u_88;
                                    {
                                      ATerm w_88 = t;
                                      int x_88 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_32, q_32, s_32, t);
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
                                                t = ArgOption_3_0(t_32, u_32, v_32, t);
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
                                                      t = ArgOption_3_0(y_32, z_32, a_33, t);
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
                                                            t = ArgOption_3_0(c_33, d_33, e_33, t);
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
                                                                  t = ArgOption_3_0(g_33, i_33, l_33, t);
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
                                                                        t = ArgOption_3_0(n_33, p_33, r_33, t);
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
                                                                              t = Option_3_0(t_33, w_33, a_34, t);
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
                                                                                    t = Option_3_0(b_34, c_34, d_34, t);
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
                                                                                          t = Option_3_0(i_34, j_34, k_34, t);
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
                                                                                                t = ArgOption_3_0(n_34, r_34, s_34, t);
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
                                                                                                      t = ArgOption_3_0(t_34, u_34, y_34, t);
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
                                                                                                            t = Option_3_0(a_35, b_35, c_35, t);
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
                                                                                                                  t = ArgOption_3_0(e_35, f_35, g_35, t);
                                                                                                                  LocalPopChoice(v_89);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = u_89;
                                                                                                                  {
                                                                                                                    ATerm w_89 = t;
                                                                                                                    int z_89 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(h_35, j_35, k_35, t);
                                                                                                                        LocalPopChoice(z_89);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = w_89;
                                                                                                                        {
                                                                                                                          ATerm a_90 = t;
                                                                                                                          int b_90 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm y_99 = NULL;
                                                                                                                              y_99 = t;
                                                                                                                              t = term_e_86;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = y_99;
                                                                                                                              t = Option_3_0(l_35, m_35, n_35, t);
                                                                                                                              LocalPopChoice(b_90);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_90;
                                                                                                                              {
                                                                                                                                ATerm d_90 = t;
                                                                                                                                int e_90 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(e_90);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = d_90;
                                                                                                                                    {
                                                                                                                                      ATerm j_90 = t;
                                                                                                                                      int q_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(o_35, p_35, q_35, t);
                                                                                                                                          LocalPopChoice(q_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = j_90;
                                                                                                                                          {
                                                                                                                                            ATerm r_90 = t;
                                                                                                                                            int s_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(r_35, s_35, t_35, t);
                                                                                                                                                LocalPopChoice(s_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = r_90;
                                                                                                                                                {
                                                                                                                                                  ATerm t_90 = t;
                                                                                                                                                  int u_90 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(u_35, v_35, w_35, t);
                                                                                                                                                      LocalPopChoice(u_90);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = t_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm v_90 = t;
                                                                                                                                                        int w_90 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
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
                                                                                                                                                                  t = Option_3_0(x_35, y_35, z_35, t);
                                                                                                                                                                  LocalPopChoice(y_90);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = x_90;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm z_90 = t;
                                                                                                                                                                    int a_91 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(a_36, b_36, d_36, t);
                                                                                                                                                                        LocalPopChoice(a_91);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = z_90;
                                                                                                                                                                        t = Option_3_0(f_36, g_36, h_36, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm d_16 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm b_101 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  b_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_101);
  return(t);
}
static ATerm e_16 (ATerm x_68, ATerm t)
{
  ATerm c_101 = NULL;
  t = SSL_hashtable_destroy(x_68);
  c_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_101);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL;
  h_101 = t;
  t = table_hashtable_0_0(t);
  j_101 = t;
  t = lookup_table_0_1(h_101, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_16(l_101, t);
  t = j_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_16(h_101, k_101, t);
  t = h_101;
  return(t);
}
ATerm fetch_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  static ATerm e_103 (ATerm t);
  static ATerm e_103 (ATerm t)
  {
    ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL;
    b_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_103 = ATgetFirst((ATermList) t);
        d_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_91 = t;
      int d_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_46 = NULL,l_46 = NULL,t_19 = NULL;
          t = SSLgetAnnotations(b_103);
          g_46 = t;
          t = c_103;
          t = r_126(t);
          l_46 = t;
          t = (ATerm) ATinsert(CheckATermList(d_103), l_46);
          t_19 = t;
          t = SSLsetAnnotations(t_19, g_46);
          LocalPopChoice(d_91);
        }
      else
        {
          t = c_91;
          {
            ATerm g_47 = NULL,k_47 = NULL,u_19 = NULL;
            t = SSLgetAnnotations(b_103);
            g_47 = t;
            t = d_103;
            t = e_103(t);
            k_47 = t;
            t = (ATerm) ATinsert(CheckATermList(k_47), c_103);
            u_19 = t;
            t = SSLsetAnnotations(u_19, g_47);
          }
        }
    }
    return(t);
  }
  t = e_103(t);
  return(t);
}
static ATerm i_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  t = term_g_91;
  j_103 = t;
  t = term_t_39;
  k_103 = t;
  t = term_h_91;
  t = k_16(j_103, k_103, t);
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = term_i_91;
  return(t);
}
static ATerm m_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_36 (ATerm t)
{
  ATerm l_103 = NULL,n_103 = NULL,o_103 = NULL,q_103 = NULL;
  t = term_g_91;
  o_103 = t;
  t = term_t_39;
  q_103 = t;
  t = term_h_91;
  t = k_16(o_103, q_103, t);
  t = term_w_86;
  l_103 = t;
  t = term_t_39;
  n_103 = t;
  t = term_x_86;
  t = k_16(l_103, n_103, t);
  t = term_k_91;
  return(t);
}
static ATerm p_36 (ATerm t)
{
  t = term_m_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_91 = t;
  int q_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_36, j_36, l_36, t);
      LocalPopChoice(q_91);
    }
  else
    {
      t = n_91;
      t = Option_3_0(m_36, n_36, p_36, t);
    }
  return(t);
}
static ATerm g_16 (ATerm y_63, ATerm z_63, ATerm x_63, ATerm t)
{
  ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL,w_103 = NULL,y_103 = NULL;
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
  {
    ATerm r_91 = t;
    int t_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_91 = ATgetArgument(t, 0);
            ATerm y_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_63, z_63);
        t = f_16(y_63, z_63, t);
        LocalPopChoice(t_91);
      }
    else
      {
        t = r_91;
        t = (ATerm) ATempty;
      }
  }
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_63, z_63, (ATerm) ATinsert(CheckATermList(t_103), x_63));
  t = lookup_table_0_1(y_63, t);
  y_103 = t;
  t = (ATerm) ATinsert(CheckATermList(t_103), x_63);
  u_103 = t;
  t = y_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(z_63, u_103, w_103, t);
  t = s_103;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
      t = term_t_39;
      t = e_0(t);
      i_104 = t;
      t = term_h_75;
      j_104 = t;
      t = term_i_75;
      k_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, i_104);
      t = g_16(j_104, k_104, i_104, t);
      _fail(t);
    }
  else
    {
      ATerm p_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_104 = ATgetFirst((ATermList) t);
          h_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_104;
      t = b_0(t);
      t = term_t_39;
      t = c_0(t);
      p_104 = t;
      t = (ATerm) ATinsert(CheckATermList(h_104), p_104);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL,w_104 = NULL,y_104 = NULL,e_20 = NULL;
  y_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_104 = ATgetFirst((ATermList) t);
      s_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_104);
  q_104 = t;
  t = r_104;
  t = i_95(t);
  t_104 = t;
  t = s_104;
  t = j_95(t);
  w_104 = t;
  t = (ATerm) ATinsert(CheckATermList(w_104), t_104);
  e_20 = t;
  t = SSLsetAnnotations(e_20, q_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_148 (ATerm), ATerm t)
{
  ATerm o_105 = NULL,s_105 = NULL,w_105 = NULL,z_105 = NULL,b_106 = NULL,q_106 = NULL,k_20 = NULL;
  o_105 = t;
  {
    ATerm z_91 = t;
    int a_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_92;
        t = p_148(t);
        LocalPopChoice(a_92);
      }
    else
      {
        t = z_91;
      }
  }
  t = o_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_105 = ATgetFirst((ATermList) t);
      z_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_105);
  s_105 = t;
  t = term_c_73;
  q_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_73, w_105);
  t = k_16(q_106, w_105, t);
  t = z_105;
  {
    static ATerm u_107 (ATerm t);
    static ATerm u_107 (ATerm t)
    {
      ATerm c_92 = t;
      int d_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_92 = t;
          int k_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_106 = NULL;
              v_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_106;
              LocalPopChoice(k_92);
            }
          else
            {
              t = e_92;
              t = p_148(t);
              t = Cons_2_0(_id, u_107, t);
            }
          LocalPopChoice(d_92);
        }
      else
        {
          t = c_92;
          {
            ATerm n_107 = NULL,q_107 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_107 = ATgetFirst((ATermList) t);
                q_107 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_107), (ATerm) ATmakeAppl(sym_Undefined_1, n_107));
          }
        }
      return(t);
    }
    t = u_107(t);
  }
  b_106 = t;
  t = (ATerm) ATinsert(CheckATermList(b_106), (ATerm) ATmakeAppl(sym_Program_1, w_105));
  k_20 = t;
  t = SSLsetAnnotations(k_20, s_105);
  return(t);
}
static ATerm u_36 (ATerm t)
{
  ATerm n_108 = NULL;
  n_108 = t;
  if(match_string(t, "--help"))
    {
      t = n_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_108;
        }
    }
  return(t);
}
static ATerm x_36 (ATerm t)
{
  ATerm o_108 = NULL,r_108 = NULL;
  t = term_g_86;
  o_108 = t;
  t = term_t_39;
  r_108 = t;
  t = term_h_86;
  t = k_16(o_108, r_108, t);
  t = term_l_92;
  return(t);
}
static ATerm b_37 (ATerm t)
{
  t = term_m_92;
  return(t);
}
static ATerm c_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,i_108 = NULL,k_108 = NULL,m_108 = NULL;
  d_108 = t;
  t = term_h_75;
  e_108 = t;
  t = term_p_92;
  t = lookup_table_0_1(e_108, t);
  m_108 = t;
  t = term_i_75;
  f_108 = t;
  t = (ATerm) ATempty;
  i_108 = t;
  t = m_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(f_108, i_108, k_108, t);
  t = d_108;
  {
    static ATerm r_36 (ATerm t);
    static ATerm r_36 (ATerm t)
    {
      ATerm q_92 = t;
      int r_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_148(t);
          LocalPopChoice(r_92);
        }
      else
        {
          t = q_92;
          {
            ATerm s_92 = t;
            int t_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_36, x_36, b_37, t);
                LocalPopChoice(t_92);
              }
            else
              {
                t = s_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_36, t);
  }
  {
    ATerm v_92 = t;
    int w_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_109 = NULL;
        m_109 = t;
        {
          ATerm z_92 = t;
          int a_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48 = NULL;
              t = m_109;
              {
                ATerm b_93 = t;
                int h_93 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_48 = NULL,c_48 = NULL;
                    t = term_h_38;
                    b_48 = t;
                    t = term_g_86;
                    c_48 = t;
                    t = term_i_93;
                    t = f_16(b_48, c_48, t);
                    LocalPopChoice(h_93);
                  }
                else
                  {
                    t = b_93;
                    t = fetch_1_0(c_37, t);
                  }
              }
              t = m_109;
              t = n_148(t);
              t = term_z_37;
              a_48 = t;
              t = SSL_exit(a_48);
              LocalPopChoice(a_93);
            }
          else
            {
              t = z_92;
              {
                ATerm i_48 = NULL,n_48 = NULL,p_48 = NULL;
                t = term_h_38;
                n_48 = t;
                t = term_g_91;
                p_48 = t;
                t = term_j_93;
                t = f_16(n_48, p_48, t);
                t = m_109;
                t = o_148(t);
                t = term_z_37;
                i_48 = t;
                t = SSL_exit(i_48);
              }
            }
        }
        LocalPopChoice(w_92);
      }
    else
      {
        t = v_92;
        {
          ATerm l_93 = t;
          int m_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_109 = NULL,o_109 = NULL,p_109 = NULL;
              static ATerm g_37 (ATerm t);
              static ATerm g_37 (ATerm t)
              {
                ATerm q_109 = NULL,u_109 = NULL,v_109 = NULL,m_20 = NULL;
                v_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_109);
                q_109 = t;
                t = u_109;
                if(((z_107 != NULL) && (z_107 != t)))
                  _fail(t);
                else
                  z_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_109);
                m_20 = t;
                t = SSLsetAnnotations(m_20, q_109);
                return(t);
              }
              t = fetch_1_0(g_37, t);
              t = term_l_38;
              o_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_107)), term_n_93);
              p_109 = t;
              t = SSL_printnl(o_109, p_109);
              t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_107)), term_n_93));
              t = n_148(t);
              t = term_d_39;
              n_109 = t;
              t = SSL_exit(n_109);
              LocalPopChoice(m_93);
            }
          else
            {
              t = l_93;
            }
        }
      }
  }
  a_108 = t;
  t = term_h_75;
  t = table_destroy_0_0(t);
  t = a_108;
  return(t);
}
static ATerm i_16 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm d_110 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  d_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_110);
  return(t);
}
static ATerm j_16 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm e_110 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  e_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_110);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL,h_110 = NULL,j_110 = NULL,k_110 = NULL;
  f_110 = t;
  t = term_o_93;
  j_110 = t;
  t = term_p_93;
  k_110 = t;
  t = f_110;
  t = new_hashtable_0_2(j_110, k_110, t);
  g_110 = t;
  t = f_110;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(f_110, g_110, h_110, t);
  t = f_110;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_110 = NULL;
  t = SSL_table_hashtable();
  l_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_65, ATerm t)
{
  ATerm y_110 = NULL;
  t = table_hashtable_0_0(t);
  y_110 = t;
  {
    ATerm r_93 = t;
    int t_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_48 = NULL;
        t = y_110;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_16(k_65, v_48, t);
        LocalPopChoice(t_93);
      }
    else
      {
        t = r_93;
        {
          ATerm f_49 = NULL;
          t = k_65;
          t = table_create_0_0(t);
          t = y_110;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_16(k_65, f_49, t);
        }
      }
  }
  return(t);
}
static ATerm k_16 (ATerm t_78, ATerm u_78, ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL;
  t = term_h_38;
  c_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, t_78, u_78);
  t = lookup_table_0_1(c_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(t_78, u_78, d_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, t_78, u_78);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm q_111 = NULL,t_111 = NULL;
  t_111 = t;
  t = SSL_explode_string(t_111);
  {
    ATerm u_93 = t;
    int w_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_112 (ATerm t);
        static ATerm z_112 (ATerm t)
        {
          ATerm t_112 = NULL,w_112 = NULL,y_112 = NULL;
          t_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_112 = ATgetFirst((ATermList) t);
              y_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm x_93 = t;
            int y_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_49 = NULL,v_49 = NULL,q_20 = NULL;
                t = SSLgetAnnotations(t_112);
                r_49 = t;
                t = y_112;
                t = z_112(t);
                v_49 = t;
                t = (ATerm) ATinsert(CheckATermList(v_49), w_112);
                q_20 = t;
                t = SSLsetAnnotations(q_20, r_49);
                LocalPopChoice(y_93);
              }
            else
              {
                t = x_93;
                {
                  ATerm h_50 = NULL,y_20 = NULL;
                  t = SSLgetAnnotations(t_112);
                  h_50 = t;
                  t = w_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, w_112);
                  y_20 = t;
                  t = SSLsetAnnotations(y_20, h_50);
                }
              }
          }
          return(t);
        }
        t = z_112(t);
        LocalPopChoice(w_93);
      }
    else
      {
        t = u_93;
        t = (ATerm) ATempty;
      }
  }
  q_111 = t;
  t = SSL_implode_string(q_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm l_16 (ATerm s_56, ATerm t_56, ATerm t)
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
  ATerm c_113 = NULL,d_113 = NULL,f_113 = NULL,g_113 = NULL,i_113 = NULL,j_113 = NULL,m_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,t_113 = NULL,u_113 = NULL,w_113 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL,p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,v_114 = NULL,z_114 = NULL,m_115 = NULL,n_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,u_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL,d_116 = NULL;
  c_113 = t;
  t = strc_version_number_0_0(t);
  u_113 = t;
  t = term_s_70;
  d_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_70, u_113);
  t = k_16(d_116, u_113, t);
  t = term_i_38;
  y_115 = t;
  t = term_d_39;
  z_115 = t;
  t = term_z_93;
  t = k_16(y_115, z_115, t);
  t = term_v_43;
  u_115 = t;
  t = term_z_37;
  x_115 = t;
  t = term_a_94;
  t = k_16(u_115, x_115, t);
  t = term_c_44;
  q_115 = t;
  t = term_b_51;
  r_115 = t;
  t = term_b_94;
  t = k_16(q_115, r_115, t);
  t = term_w_62;
  n_115 = t;
  t = (ATerm) ATempty;
  p_115 = t;
  t = term_c_94;
  t = k_16(n_115, p_115, t);
  t = term_f_40;
  z_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94);
  m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94));
  t = k_16(z_114, m_115, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  t_113 = t;
  t = term_g_94;
  v_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_113, term_g_94);
  t = l_16(t_113, v_114, t);
  j_113 = t;
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  q_113 = t;
  t = term_g_94;
  t_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_113, term_g_94);
  t = l_16(q_113, t_114, t);
  m_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  p_113 = t;
  t = term_g_94;
  s_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_113, term_g_94);
  t = l_16(p_113, s_114, t);
  o_113 = t;
  t = term_g_39;
  q_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_113), term_w_62), m_113), term_w_62), j_113), term_w_62);
  r_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_113), term_w_62), m_113), term_w_62), j_113), term_w_62));
  t = k_16(q_114, r_114, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  i_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_94), i_113), term_h_84);
  p_114 = t;
  t = SSL_concat_strings(p_114);
  d_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  g_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_94), g_113), term_h_84);
  n_114 = t;
  t = SSL_concat_strings(n_114);
  f_113 = t;
  t = term_v_38;
  l_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), f_113), term_m_94), term_l_94), term_k_94), d_113);
  m_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), f_113), term_m_94), term_l_94), term_k_94), d_113));
  t = k_16(l_114, m_114, t);
  t = term_i_39;
  j_114 = t;
  t = (ATerm) ATempty;
  k_114 = t;
  t = term_p_94;
  t = k_16(j_114, k_114, t);
  t = term_x_58;
  w_113 = t;
  t = term_u_94;
  i_114 = t;
  t = term_v_94;
  t = k_16(w_113, i_114, t);
  t = c_113;
  return(t);
}
static ATerm j_37 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,p_117 = NULL;
  l_117 = t;
  t = term_h_38;
  m_117 = t;
  t = term_b_56;
  p_117 = t;
  t = term_w_94;
  t = f_16(m_117, p_117, t);
  t = debug_1_0(l_37, t);
  t = l_117;
  return(t);
}
static ATerm l_37 (ATerm t)
{
  t = term_z_94;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm d_95 = t;
    int e_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL;
        t = term_h_38;
        l_116 = t;
        t = term_q_86;
        m_116 = t;
        t = term_m_95;
        t = f_16(l_116, m_116, t);
        t = term_o_95;
        t = xtc_find_0_0(t);
        i_116 = t;
        t = term_x_39;
        k_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_116, term_x_39);
        t = n_15(i_116, k_116, t);
        t = term_z_37;
        j_116 = t;
        t = SSL_exit(j_116);
        LocalPopChoice(e_95);
      }
    else
      {
        t = d_95;
      }
  }
  {
    ATerm s_95 = t;
    int w_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_116 = NULL,t_116 = NULL,u_116 = NULL;
        t = term_h_38;
        t_116 = t;
        t = term_w_86;
        u_116 = t;
        t = term_x_95;
        t = f_16(t_116, u_116, t);
        t = strc_version_0_0(t);
        t = term_z_37;
        r_116 = t;
        t = SSL_exit(r_116);
        LocalPopChoice(w_95);
      }
    else
      {
        t = s_95;
      }
  }
  {
    ATerm y_95 = t;
    int z_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_117 = NULL,d_117 = NULL,f_117 = NULL;
        b_117 = t;
        t = term_h_38;
        d_117 = t;
        t = term_b_56;
        f_117 = t;
        t = term_w_94;
        t = f_16(d_117, f_117, t);
        t = b_117;
        LocalPopChoice(z_95);
      }
    else
      {
        t = y_95;
        {
          ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL;
          t = term_l_38;
          h_117 = t;
          t = (ATerm) ATinsert(ATempty, term_a_96);
          i_117 = t;
          t = SSL_printnl(h_117, i_117);
          t = term_d_39;
          g_117 = t;
          t = SSL_exit(g_117);
          t = (ATerm) ATinsert(ATempty, term_a_96);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(j_37, t);
  return(t);
}
static ATerm m_37 (ATerm t)
{
  t = if_verbose1_1_0(q_37, t);
  return(t);
}
static ATerm n_37 (ATerm t)
{
  t = xtc_temp_files_1_0(r_37, t);
  return(t);
}
static ATerm q_37 (ATerm t)
{
  ATerm r_117 = NULL,t_117 = NULL,u_117 = NULL;
  r_117 = t;
  t = term_l_38;
  t_117 = t;
  t = (ATerm) ATinsert(CheckATermList(r_117), term_b_96);
  u_117 = t;
  t = SSL_printnl(t_117, u_117);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(r_117), term_b_96));
  return(t);
}
static ATerm r_37 (ATerm t)
{
  ATerm c_96 = t;
  int d_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_117 = NULL,y_117 = NULL,z_117 = NULL;
      t = term_h_38;
      y_117 = t;
      t = term_b_56;
      z_117 = t;
      t = term_w_94;
      t = f_16(y_117, z_117, t);
      x_117 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_117);
      LocalPopChoice(d_96);
    }
  else
    {
      t = c_96;
      t = term_v_60;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm y_37 (ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
  t = run_time_0_0(t);
  c_118 = t;
  t = term_l_38;
  d_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), c_118), term_e_96);
  e_118 = t;
  t = SSL_printnl(d_118, e_118);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), c_118), term_e_96));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm g_96 = t;
  int j_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_37, n_37, t);
      t = if_verbose2_1_0(y_37, t);
      t = term_z_37;
      q_117 = t;
      t = SSL_exit(q_117);
      LocalPopChoice(j_96);
    }
  else
    {
      t = g_96;
      {
        ATerm f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL;
        t = run_time_0_0(t);
        f_118 = t;
        t = term_l_38;
        h_118 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), f_118), term_k_96);
        i_118 = t;
        t = SSL_printnl(h_118, i_118);
        t = term_d_39;
        g_118 = t;
        t = SSL_exit(g_118);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
