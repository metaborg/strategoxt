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
ATerm term_f_96;
ATerm term_x_95;
ATerm term_w_95;
ATerm term_q_95;
ATerm term_m_95;
ATerm term_j_95;
ATerm term_b_95;
ATerm term_a_95;
ATerm term_t_94;
ATerm term_s_94;
ATerm term_r_94;
ATerm term_q_94;
ATerm term_p_94;
ATerm term_o_94;
ATerm term_n_94;
ATerm term_m_94;
ATerm term_l_94;
ATerm term_k_94;
ATerm term_j_94;
ATerm term_f_94;
ATerm term_d_94;
ATerm term_z_93;
ATerm term_y_93;
ATerm term_v_93;
ATerm term_r_93;
ATerm term_q_93;
ATerm term_p_93;
ATerm term_o_93;
ATerm term_n_93;
ATerm term_m_93;
ATerm term_l_93;
ATerm term_a_93;
ATerm term_z_92;
ATerm term_v_92;
ATerm term_s_92;
ATerm term_r_92;
ATerm term_x_91;
ATerm term_v_91;
ATerm term_t_91;
ATerm term_n_91;
ATerm term_v_90;
ATerm term_u_90;
ATerm term_t_90;
ATerm term_s_90;
ATerm term_p_90;
ATerm term_w_85;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_k_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_f_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_u_84;
ATerm term_t_84;
ATerm term_s_84;
ATerm term_r_84;
ATerm term_q_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_c_84;
ATerm term_y_83;
ATerm term_x_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_n_83;
ATerm term_m_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_h_83;
ATerm term_g_83;
ATerm term_f_83;
ATerm term_e_83;
ATerm term_h_82;
ATerm term_e_82;
ATerm term_c_82;
ATerm term_b_82;
ATerm term_a_82;
ATerm term_z_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_g_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_w_80;
ATerm term_o_80;
ATerm term_j_80;
ATerm term_h_80;
ATerm term_e_80;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_b_77;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_u_75;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_o_75;
ATerm term_g_75;
ATerm term_f_75;
ATerm term_d_75;
ATerm term_z_74;
ATerm term_s_74;
ATerm term_m_74;
ATerm term_g_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_a_73;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_k_72;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_h_71;
ATerm term_d_71;
ATerm term_c_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_n_68;
ATerm term_k_68;
ATerm term_j_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_a_68;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_s_67;
ATerm term_r_67;
ATerm term_j_67;
ATerm term_c_67;
ATerm term_a_67;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_l_66;
ATerm term_q_65;
ATerm term_p_64;
ATerm term_k_64;
ATerm term_i_64;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_p_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_e_63;
ATerm term_b_63;
ATerm term_z_62;
ATerm term_w_62;
ATerm term_t_61;
ATerm term_j_61;
ATerm term_h_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_y_60;
ATerm term_w_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_i_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_u_59;
ATerm term_b_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_t_58;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
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
ATerm term_i_56;
ATerm term_a_56;
ATerm term_o_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_s_54;
ATerm term_r_54;
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
ATerm term_k_53;
ATerm term_j_53;
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
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_a_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_t_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_r_49;
ATerm term_p_49;
ATerm term_n_49;
ATerm term_j_49;
ATerm term_a_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_n_48;
ATerm term_f_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_m_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_w_44;
ATerm term_s_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_w_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_z_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_t_42;
ATerm term_l_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_c_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_g_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_u_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_b_38);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_w_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_z_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_j_39);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_n_39);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_s_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_n_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_j_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_m_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_o_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_z_43);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_d_44);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_r_45);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_50, term_e_39, term_e_50);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_50, term_g_38, term_i_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_50, term_x_41, term_q_50);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_50, term_w_50, term_x_50);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_51, term_g_51, term_h_51);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_51, term_k_51, term_l_51);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_51, term_q_51, term_r_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_51, term_v_51, term_w_51);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_52, term_e_52, term_f_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_i_52, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_52, term_o_52, term_p_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_52, term_c_45, term_s_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_52, term_v_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_f_53, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_53, term_j_53, term_k_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_53, term_r_53, term_s_53);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_53, term_v_53, term_w_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_54, term_d_54, term_e_54);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_54, term_h_54, term_i_54);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_54, term_l_54, term_m_54);
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
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_m_47, term_w_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_54, term_z_54, term_b_55);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_55, term_e_55, term_f_55);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_55, term_k_55, term_l_55);
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_q_56);
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_s_56, term_t_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_w_56);
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(sym__2, term_y_56, term_z_56);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_c_57);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_i_57);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_t_58);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_z_58);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_h_61);
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(sym__2, term_s_60, term_i_60);
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_z_62);
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_h_63);
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_p_63);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_w_70);
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_h_73);
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(sym__2, term_d_75, term_f_75);
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_u_37);
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_37);
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(sym__2, term_j_77, term_z_39);
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_s_81);
  ATprotect(&(term_z_81));
  term_z_81 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(sym__2, term_w_72, term_b_82);
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(sym__2, term_w_72, term_g_81);
  ATprotect(&(term_e_83));
  term_e_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_83));
  term_f_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(sym__2, term_n_40, term_z_39);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym__2, term_s_39, term_z_39);
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym__2, term_z_62, term_z_39);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym__2, term_i_57, term_z_39);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(sym__2, term_r_45, term_z_39);
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(sym__2, term_z_84, term_z_39);
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(sym__2, term_i_85, term_z_39);
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(sym__2, term_l_85, term_z_39);
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(sym__2, term_t_58, term_e_39);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_u_37);
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_p_63, term_z_39);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_90));
  term_s_90 = (ATerm) ATmakeAppl(sym__2, term_p_90, term_z_39);
  ATprotect(&(term_t_90));
  term_t_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_90));
  term_u_90 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_91));
  term_t_91 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_91));
  term_v_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_91));
  term_x_91 = (ATerm) ATmakeAppl(sym__3, term_d_75, term_f_75, (ATerm) ATempty);
  ATprotect(&(term_r_92));
  term_r_92 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_z_84);
  ATprotect(&(term_s_92));
  term_s_92 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_p_90);
  ATprotect(&(term_v_92));
  term_v_92 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_92));
  term_z_92 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_93));
  term_a_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_93));
  term_l_93 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_m_93));
  term_m_93 = (ATerm) ATmakeAppl(sym__2, term_w_70, term_l_93);
  ATprotect(&(term_n_93));
  term_n_93 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_e_39);
  ATprotect(&(term_o_93));
  term_o_93 = (ATerm) ATmakeAppl(sym__2, term_z_43, term_u_37);
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_w_50);
  ATprotect(&(term_q_93));
  term_q_93 = (ATerm) ATmakeAppl(sym__2, term_h_63, (ATerm) ATempty);
  ATprotect(&(term_r_93));
  term_r_93 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_v_93));
  term_v_93 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
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
  term_p_94 = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATempty);
  ATprotect(&(term_q_94));
  term_q_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_r_94));
  term_r_94 = (ATerm) ATmakeAppl(sym__2, term_z_58, term_q_94);
  ATprotect(&(term_s_94));
  term_s_94 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_i_56);
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_a_95));
  term_a_95 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_i_85);
  ATprotect(&(term_b_95));
  term_b_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_j_95));
  term_j_95 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_l_85);
  ATprotect(&(term_m_95));
  term_m_95 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_q_95));
  term_q_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_w_95));
  term_w_95 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_x_95));
  term_x_95 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm i_130 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm t_14 (ATerm n_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm u_14 (ATerm l_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm v_14 (ATerm g_67, ATerm f_67, ATerm t);
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t);
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
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm j_131 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm m_131 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm u_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm save_as_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm k_131 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm n_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm t);
static ATerm z_14 (ATerm c_72, ATerm d_72, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_131 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm z_141 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm z_22, ATerm a_23, ATerm t);
ATerm foldr_3_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm h_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm l_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm g_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm n_131 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm o_131 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm l_131 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm w_114 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm w_14 (ATerm f_23, ATerm g_23, ATerm t);
static ATerm x_14 (ATerm i_36, ATerm j_36, ATerm t);
static ATerm y_14 (ATerm b_114 (ATerm), ATerm k_289, ATerm s_36, ATerm t);
static ATerm b_15 (ATerm p_104 (ATerm), ATerm y_23, ATerm w_23, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm s_140 (ATerm), ATerm t);
static ATerm u_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm e_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm i_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm k_22 (ATerm t);
static ATerm l_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm j_130 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm l_125 (ATerm), ATerm t);
static ATerm o_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm c_15 (ATerm b_23, ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm d_16 (ATerm h_59, ATerm i_59, ATerm t);
static ATerm d_15 (ATerm t_57, ATerm u_57, ATerm t);
ATerm end_scope_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_141 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm h_130 (ATerm), ATerm t);
static ATerm f_15 (ATerm x_55, ATerm y_55, ATerm t);
static ATerm h_15 (ATerm d_56, ATerm e_56, ATerm t);
static ATerm i_15 (ATerm x_64, ATerm z_64, ATerm b_65, ATerm d_65, ATerm y_64, ATerm a_65, ATerm c_65, ATerm e_65, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_113 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm f_115 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_114 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm h_124 (ATerm), ATerm t);
static ATerm u_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_15 (ATerm i_67, ATerm h_67, ATerm t);
static ATerm m_15 (ATerm n_62, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm t_75 (ATerm r_74, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
ATerm default_system_usage_2_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm n_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm n_15 (ATerm k_37, ATerm i_302, ATerm t);
static ATerm t_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm x_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm l_130 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm k_130 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm m_130 (ATerm), ATerm t);
static ATerm q_15 (ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm v_42, ATerm u_42, ATerm t);
static ATerm r_15 (ATerm v_118 (ATerm), ATerm r_42, ATerm q_42, ATerm t);
static ATerm i_30 (ATerm t);
static ATerm s_15 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm t);
ATerm map_1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm t_15 (ATerm y_127 (ATerm), ATerm v_58, ATerm u_58, ATerm t);
static ATerm x_85 (ATerm r_85, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_15 (ATerm o_36, ATerm t);
static ATerm v_15 (ATerm j_52, ATerm k_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_87 (ATerm l_86, ATerm t);
static ATerm v_87 (ATerm q_86, ATerm r_86, ATerm s_86, ATerm t);
static ATerm w_87 (ATerm f_87, ATerm g_87, ATerm h_87, ATerm t);
static ATerm w_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm r_30 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm u_30 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_122 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm q_92 (ATerm u_91, ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm x_15 (ATerm i_71, ATerm j_71, ATerm t);
static ATerm y_15 (ATerm l_71, ATerm k_71, ATerm t);
static ATerm z_15 (ATerm x_51, ATerm y_51, ATerm t);
ATerm at_end_1_0 (ATerm b_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_95 (ATerm d_95, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_16 (ATerm m_71, ATerm n_71, ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm e_34 (ATerm t);
static ATerm h_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm l_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
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
static ATerm s_35 (ATerm t);
static ATerm t_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm z_35 (ATerm t);
static ATerm a_36 (ATerm t);
static ATerm b_36 (ATerm t);
static ATerm c_36 (ATerm t);
static ATerm d_36 (ATerm t);
static ATerm f_36 (ATerm t);
static ATerm h_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm b_16 (ATerm l_62, ATerm m_62, ATerm t);
static ATerm c_16 (ATerm q_62, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_114 (ATerm), ATerm t);
static ATerm k_36 (ATerm t);
static ATerm l_36 (ATerm t);
static ATerm m_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm p_36 (ATerm t);
static ATerm r_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_16 (ATerm o_57, ATerm p_57, ATerm n_57, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_135 (ATerm), ATerm t);
static ATerm w_36 (ATerm t);
static ATerm b_37 (ATerm t);
static ATerm d_37 (ATerm t);
static ATerm e_37 (ATerm t);
ATerm parse_options_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t);
static ATerm g_16 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm t);
static ATerm h_16 (ATerm j_62, ATerm k_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_62, ATerm p_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm a_59, ATerm t);
static ATerm i_16 (ATerm f_71, ATerm g_71, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm j_16 (ATerm l_50, ATerm m_50, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm h_37 (ATerm t);
static ATerm j_37 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm l_37 (ATerm t);
static ATerm m_37 (ATerm t);
static ATerm n_37 (ATerm t);
static ATerm p_37 (ATerm t);
static ATerm t_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL,i_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = j_121(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_0 = ATgetFirst((ATermList) t);
          i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = foldr_2_0(j_121, k_121, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_0, s_0);
      t = k_121(t);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm e_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15(e_1, i_1, t);
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
      ATerm v_37 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(k_0, n_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_a_38;
        h_1 = t;
        t = term_b_38;
        k_1 = t;
        t = term_c_38;
        t = d_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_g_38);
        t = geq_0_0(t);
        t = b_1;
        t = i_130(t);
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
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
  t = (ATerm) ATinsert(ATempty, term_o_38);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_p_38;
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
static ATerm t_14 (ATerm n_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm t_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_a_38;
        z_1 = t;
        t = term_w_38;
        c_2 = t;
        t = term_x_38;
        t = d_16(z_1, c_2, t);
        LocalPopChoice(v_38);
      }
    else
      {
        t = t_38;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_y_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_a_38;
  s_1 = t;
  t = term_z_38;
  t_1 = t;
  t = term_b_39;
  t = d_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_w_38), n_23), term_d_39), term_c_39));
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
      t = z_14(q_1, r_1, t);
      t = term_e_39;
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
  t = (ATerm) ATinsert(ATempty, term_h_39);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_i_39;
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
static ATerm u_14 (ATerm l_23, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_a_38;
  u_2 = t;
  t = term_j_39;
  x_2 = t;
  t = term_m_39;
  t = d_16(u_2, x_2, t);
  o_2 = t;
  t = term_a_38;
  s_2 = t;
  t = term_n_39;
  t_2 = t;
  t = term_o_39;
  t = d_16(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_w_38), l_23), term_s_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, m_2);
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
      t = z_14(q_2, r_2, t);
      t = term_e_39;
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
  t = u_14(s_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(r_3, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  t = term_l_38;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_t_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(o_3), term_t_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_a_38;
      m_3 = t;
      t = term_s_39;
      n_3 = t;
      t = term_w_39;
      t = d_16(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(v_39);
    }
  else
    {
      t = u_39;
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
static ATerm v_14 (ATerm g_67, ATerm f_67, ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(g_67, f_67);
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      t = get_errno_0_0(t);
      t = term_z_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, g_67, f_67);
      t = l_15(g_67, f_67, t);
      t = SSL_remove(g_67);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
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
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_c_40;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_c_40);
        t = l_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_c_40;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = u_0(t);
              l_2 = t;
              {
                ATerm f_40 = t;
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
                    t = f_40;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = v_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = i_4;
              t = u_0(t);
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
  t = term_g_40;
  r_4 = t;
  t = term_h_40;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_i_40);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_j_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_k_40;
  w_4 = t;
  t = a_5;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_a_38;
        d_5 = t;
        t = term_n_40;
        e_5 = t;
        t = term_o_40;
        t = d_16(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(m_40);
        t = (ATerm) ATinsert(ATempty, term_n_40);
      }
    else
      {
        t = l_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_a_38;
  b_5 = t;
  t = term_j_40;
  c_5 = t;
  t = term_p_40;
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
  t = term_l_38;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_q_40);
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
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_6 = ATgetArgument(t, 0);
            {
              ATerm d_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(h_6);
              d_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
              v_0 = t;
              t = SSLsetAnnotations(v_0, d_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_6;
          }
        LocalPopChoice(s_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = r_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_7 = ATgetArgument(t, 0);
            {
              ATerm n_4 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(g_6);
              n_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_7);
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
        LocalPopChoice(u_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = t_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm v_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_8 = ATgetArgument(t, 0);
            {
              ATerm h_5 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(f_6);
              h_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_8);
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
        LocalPopChoice(z_40);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = v_40;
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
  t = (ATerm) ATinsert(CheckATermList(b_6), term_a_41);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(b_6), term_a_41));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_c_41);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_c_41);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm e_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(r_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
              w_0 = t;
              t = SSLsetAnnotations(w_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_6;
          }
        LocalPopChoice(g_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = e_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
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
        LocalPopChoice(i_41);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = h_41;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_c_41);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_c_41);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_c_41);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_c_41);
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
  t = term_x_41;
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
  t = term_z_41;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_c_41);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_8 = NULL;
  t = pass_verbose_0_0(t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), term_c_41);
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
  t = term_e_42;
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
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  t = term_l_38;
  i_9 = t;
  t = (ATerm) ATinsert(ATempty, term_f_42);
  j_9 = t;
  t = SSL_printnl(i_9, j_9);
  t = h_9;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL;
  k_9 = t;
  t = term_l_38;
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), term_i_42);
  n_9 = t;
  t = SSL_printnl(l_9, n_9);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(k_9), term_i_42));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_l_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_x_42);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_x_42);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm y_8 = NULL,a_9 = NULL;
  ATerm e_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
      b_9 = t;
      t = term_a_38;
      c_9 = t;
      t = term_n_40;
      d_9 = t;
      t = term_o_40;
      t = d_16(c_9, d_9, t);
      t = b_9;
      LocalPopChoice(g_43);
      {
        ATerm g_9 = NULL;
        g_9 = t;
        t = if_verbose2_1_0(i_7, t);
        {
          static ATerm l_7 (ATerm t);
          static ATerm l_7 (ATerm t)
          {
            ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
            m_5 = t;
            t = term_h_43;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_i_43);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            o_9 = t;
            {
              ATerm j_43 = t;
              int k_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
                  t = term_a_38;
                  i_10 = t;
                  t = term_m_43;
                  j_10 = t;
                  t = term_n_43;
                  t = d_16(i_10, j_10, t);
                  b_10 = t;
                  t = term_a_38;
                  g_10 = t;
                  t = term_o_43;
                  h_10 = t;
                  t = term_p_43;
                  t = d_16(g_10, h_10, t);
                  f_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_10, f_10);
                  {
                    ATerm q_43 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm k_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            k_10 = ATgetArgument(t, 0);
                            if((k_10 != ATgetArgument(t, 1)))
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
                        t = q_43;
                      }
                  }
                  LocalPopChoice(k_43);
                }
              else
                {
                  t = j_43;
                  {
                    ATerm l_10 = NULL,m_10 = NULL;
                    t = term_a_38;
                    l_10 = t;
                    t = term_m_43;
                    m_10 = t;
                    t = term_n_43;
                    t = d_16(l_10, m_10, t);
                    t = debug_1_0(p_7, t);
                    _fail(t);
                  }
                }
            }
            t = o_9;
            {
              static ATerm s_7 (ATerm t);
              static ATerm s_7 (ATerm t)
              {
                t = get_outfile_1_0(t_7, t);
                if(((y_8 != NULL) && (y_8 != t)))
                  _fail(t);
                else
                  y_8 = t;
                return(t);
              }
              t = copy_to_1_0(s_7, t);
            }
            {
              ATerm r_43 = t;
              int s_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_10 = NULL,u_10 = NULL;
                  u_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      t_10 = ATgetArgument(t, 0);
                      {
                        ATerm p_5 = NULL,b_4 = NULL;
                        t = SSLgetAnnotations(u_10);
                        p_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, t_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, p_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = u_10;
                    }
                  LocalPopChoice(s_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = r_43;
                  t = xtc_transform_term_2_0(x_7, y_7, t);
                }
            }
            {
              static ATerm a_8 (ATerm t);
              static ATerm a_8 (ATerm t)
              {
                t = get_outfile_1_0(b_8, t);
                if(((a_9 != NULL) && (a_9 != t)))
                  _fail(t);
                else
                  a_9 = t;
                return(t);
              }
              t = copy_to_1_0(a_8, t);
            }
            p_9 = t;
            t = term_l_38;
            q_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_9)), term_w_43), not_null(y_8)), term_t_43));
            r_9 = t;
            t = SSL_printnl(q_9, r_9);
            t = p_9;
            return(t);
          }
          t = profile_p__2_0(j_7, l_7, t);
        }
        t = g_9;
      }
    }
  else
    {
      t = e_43;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,j_11 = NULL,k_11 = NULL;
        t = term_a_38;
        j_11 = t;
        t = term_z_43;
        k_11 = t;
        t = term_a_44;
        t = d_16(j_11, k_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_e_39);
        t = geq_0_0(t);
        t = e_11;
        t = j_131(t);
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        t = e_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm d_142 (ATerm), ATerm e_142 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL;
        t = p_11;
        t = d_142(t);
        s_11 = t;
        t = term_a_38;
        v_11 = t;
        t = term_d_44;
        w_11 = t;
        t = term_e_44;
        t = d_16(v_11, w_11, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, s_11);
        t = geq_0_0(t);
        t = p_11;
        t = e_142(t);
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = p_11;
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_c_41);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_c_41);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm z_8 = NULL;
  t = pass_verbose_0_0(t);
  z_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_8), term_c_41);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_c_41);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  {
    ATerm i_44 = t;
    int j_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_13;
        {
          ATerm k_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  {
                    ATerm v_7 = NULL,e_4 = NULL;
                    t = SSLgetAnnotations(j_13);
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
                  t = j_13;
                }
              LocalPopChoice(n_44);
              t = xtc_transform_file_2_0(d_8, f_8, t);
            }
          else
            {
              t = k_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(j_44);
      }
    else
      {
        t = i_44;
        t = j_13;
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  {
                    ATerm t_9 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(j_13);
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
                  t = j_13;
                }
              LocalPopChoice(p_44);
              t = xtc_transform_file_2_0(i_8, k_8, t);
            }
          else
            {
              t = o_44;
              t = xtc_transform_term_2_0(l_8, m_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  x_13 = t;
  t = term_s_44;
  v_13 = t;
  t = x_13;
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,b_14 = NULL;
        t = term_a_38;
        a_14 = t;
        t = term_n_40;
        b_14 = t;
        t = term_o_40;
        t = d_16(a_14, b_14, t);
        t = x_13;
        LocalPopChoice(v_44);
        t = (ATerm) ATinsert(ATempty, term_w_44);
      }
    else
      {
        t = u_44;
        t = (ATerm) ATempty;
      }
  }
  w_13 = t;
  t = x_13;
  t = comp_0_2(v_13, w_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm e_14 = NULL;
  e_14 = t;
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL,h_14 = NULL,j_14 = NULL;
        t = term_a_38;
        h_14 = t;
        t = term_z_43;
        j_14 = t;
        t = term_a_44;
        t = d_16(h_14, j_14, t);
        g_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_14, term_c_45);
        t = geq_0_0(t);
        t = e_14;
        t = m_131(t);
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = e_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_18 = NULL,h_18 = NULL,i_18 = NULL;
  d_18 = t;
  t = term_l_38;
  h_18 = t;
  t = (ATerm) ATinsert(ATempty, term_d_45);
  i_18 = t;
  t = SSL_printnl(h_18, i_18);
  t = d_18;
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
  t = olevel_2_0(x_8, f_9, t);
  t = olevel_2_0(z_9, d_10, t);
  t = olevel_2_0(b_11, g_11, t);
  n_18 = t;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_21 = ATgetArgument(t, 0);
            {
              ATerm c_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(n_18);
              c_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, c_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_18;
          }
        LocalPopChoice(h_45);
        t = xtc_transform_file_2_0(s_12, t_12, t);
      }
    else
      {
        t = g_45;
        t = xtc_transform_term_2_0(u_12, v_12, t);
      }
  }
  t = olevel_2_0(w_12, y_12, t);
  t = olevel_2_0(u_13, y_13, t);
  t = olevel_2_0(s_14, a_15, t);
  t = olevel_2_0(o_16, p_16, t);
  t = olevel_2_0(q_17, r_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = term_l_38;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), term_i_45);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(k_18), term_i_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = term_a_38;
  r_18 = t;
  t = term_d_44;
  s_18 = t;
  t = term_e_44;
  t = d_16(r_18, s_18, t);
  t = debug_1_0(u_8, t);
  t = q_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_18 = ATgetArgument(t, 0);
            {
              ATerm x_9 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(t_18);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
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
        LocalPopChoice(l_45);
        t = xtc_transform_file_2_0(m_9, s_9, t);
      }
    else
      {
        t = k_45;
        t = xtc_transform_term_2_0(u_9, v_9, t);
      }
  }
  t = if_keep1_1_0(w_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_c_41);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_19 = NULL;
  t = pass_verbose_0_0(t);
  c_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), term_c_41);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = save_as_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_19;
        {
          ATerm q_45 = t;
          if((PushChoice() == 0))
            {
              ATerm y_10 = NULL,a_11 = NULL;
              t = term_a_38;
              y_10 = t;
              t = term_r_45;
              a_11 = t;
              t = term_s_45;
              t = d_16(y_10, a_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_45;
            }
        }
        t = x_19;
        {
          ATerm t_45 = t;
          int u_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  i_11 = ATgetArgument(t, 0);
                  {
                    ATerm z_11 = NULL,u_5 = NULL;
                    t = SSLgetAnnotations(x_19);
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
                    u_5 = t;
                    t = SSLsetAnnotations(u_5, z_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = x_19;
                }
              LocalPopChoice(u_45);
              t = xtc_transform_file_2_0(e_10, q_10, t);
            }
          else
            {
              t = t_45;
              t = xtc_transform_term_2_0(r_10, s_10, t);
            }
        }
        t = if_keep2_1_0(v_10, t);
        LocalPopChoice(o_45);
      }
    else
      {
        t = n_45;
        t = x_19;
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_c_41);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm o_11 = NULL;
  t = pass_verbose_0_0(t);
  o_11 = t;
  t = (ATerm) ATinsert(CheckATermList(o_11), term_c_41);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = save_as_1_0(z_10, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  b_20 = t;
  {
    ATerm y_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(b_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
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
        LocalPopChoice(a_46);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = y_45;
        t = xtc_transform_term_2_0(q_11, u_11, t);
      }
  }
  t = if_keep6_1_0(x_11, t);
  a_20 = t;
  {
    ATerm d_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_20 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(a_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
              w_5 = t;
              t = SSLsetAnnotations(w_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_20;
          }
        LocalPopChoice(g_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = d_46;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm h_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_21 = ATgetArgument(t, 0);
            {
              ATerm x_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              x_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
              x_5 = t;
              t = SSLsetAnnotations(x_5, x_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_19;
          }
        LocalPopChoice(k_46);
        t = xtc_transform_file_2_0(l_12, m_12, t);
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
  t = term_m_46;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_c_41);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_c_41);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_c_41);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm w_20 = NULL;
  t = pass_verbose_0_0(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), term_c_41);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_c_41);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm f_21 = NULL;
  t = pass_verbose_0_0(t);
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), term_c_41);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_c_41);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_c_41);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,v_21 = NULL;
  v_21 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_22 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(v_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
              i_6 = t;
              t = SSLsetAnnotations(i_6, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(s_46);
        t = xtc_transform_file_2_0(z_12, a_13, t);
      }
    else
      {
        t = r_46;
        t = xtc_transform_term_2_0(b_13, d_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  t_21 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm t_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(t_21);
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, t_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_21;
          }
        LocalPopChoice(v_46);
        t = xtc_transform_file_2_0(e_13, f_13, t);
      }
    else
      {
        t = u_46;
        t = xtc_transform_term_2_0(g_13, i_13, t);
      }
  }
  s_21 = t;
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_22 = ATgetArgument(t, 0);
            {
              ATerm d_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(s_21);
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, d_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(x_46);
        t = xtc_transform_file_2_0(k_13, m_13, t);
      }
    else
      {
        t = w_46;
        t = xtc_transform_term_2_0(o_13, q_13, t);
      }
  }
  t = if_keep4_1_0(r_13, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm g_22 = NULL;
  t = pass_verbose_0_0(t);
  g_22 = t;
  t = (ATerm) ATinsert(CheckATermList(g_22), term_c_41);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_c_41);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_a_47;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm r_22 = NULL;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(r_22), term_c_41);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_a_47;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_c_41);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm k_23 = NULL;
  t = pass_verbose_0_0(t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), term_c_41);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_c_41);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = save_as_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_24 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(d_24);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_24;
          }
        LocalPopChoice(e_47);
        t = xtc_transform_file_2_0(z_13, c_14, t);
      }
    else
      {
        t = d_47;
        t = xtc_transform_term_2_0(f_14, i_14, t);
      }
  }
  c_24 = t;
  {
    ATerm f_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_24 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(c_24);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
              s_6 = t;
              t = SSLsetAnnotations(s_6, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_24;
          }
        LocalPopChoice(g_47);
        t = xtc_transform_file_2_0(k_14, l_14, t);
      }
    else
      {
        t = f_47;
        t = xtc_transform_term_2_0(m_14, o_14, t);
      }
  }
  t = if_keep2_1_0(p_14, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_h_47;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm l_24 = NULL;
  t = pass_verbose_0_0(t);
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(l_24), term_c_41);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_h_47;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm o_24 = NULL;
  t = pass_verbose_0_0(t);
  o_24 = t;
  t = (ATerm) ATinsert(CheckATermList(o_24), term_c_41);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_c_41);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_c_41);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = save_as_1_0(q_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_l_47;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_25 = ATgetArgument(t, 0);
            {
              ATerm g_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, g_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(o_47);
        t = xtc_transform_file_2_0(e_15, j_15, t);
      }
    else
      {
        t = n_47;
        t = xtc_transform_term_2_0(k_15, o_15, t);
      }
  }
  t = if_keep5_1_0(f_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(l_16, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_c_41);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_c_41);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = save_as_1_0(n_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_q_47;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  {
    ATerm r_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_25 = ATgetArgument(t, 0);
            {
              ATerm p_15 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
              p_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, p_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(v_47);
        t = xtc_transform_file_2_0(r_16, s_16, t);
      }
    else
      {
        t = r_47;
        t = xtc_transform_term_2_0(t_16, v_16, t);
      }
  }
  t = if_keep3_1_0(w_16, t);
  m_25 = t;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_26 = ATgetArgument(t, 0);
            {
              ATerm m_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(m_25);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, m_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_25;
          }
        LocalPopChoice(x_47);
        t = xtc_transform_file_2_0(z_16, a_17, t);
      }
    else
      {
        t = w_47;
        t = xtc_transform_term_2_0(b_17, c_17, t);
      }
  }
  t = if_keep3_1_0(e_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(g_17, t);
  l_25 = t;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_26 = ATgetArgument(t, 0);
            {
              ATerm q_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(l_25);
              q_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, q_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(z_47);
        t = xtc_transform_file_2_0(i_17, j_17, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(k_17, n_17, t);
      }
  }
  t = if_keep3_1_0(o_17, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_a_48;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm u_25 = NULL;
  t = pass_verbose_0_0(t);
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), term_c_41);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_a_48;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm v_25 = NULL;
  t = pass_verbose_0_0(t);
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(v_25), term_c_41);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_c_41);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_c_41);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = save_as_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_a_47;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_c_41);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_a_47;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_c_41);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = save_as_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm u_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(t_26);
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, u_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(h_48);
        t = xtc_transform_file_2_0(s_17, t_17, t);
      }
    else
      {
        t = g_48;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  t = if_keep1_1_0(y_17, t);
  r_26 = t;
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(r_26);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_26;
          }
        LocalPopChoice(m_48);
        t = xtc_transform_file_2_0(a_18, b_18, t);
      }
    else
      {
        t = l_48;
        t = xtc_transform_term_2_0(c_18, f_18, t);
      }
  }
  t = if_keep1_1_0(o_18, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_c_41);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_c_41);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = save_as_1_0(z_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_n_48;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_p_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_c_41);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_p_48;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_c_41);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = save_as_1_0(u_18, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(n_8, t);
  t = profile_p__2_0(o_8, p_8, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm n_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(n_29), term_x_42);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm q_29 = NULL;
  t = pass_verbose_0_0(t);
  q_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), term_x_42);
  return(t);
}
ATerm save_as_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,z_28 = NULL,a_29 = NULL;
  r_28 = t;
  {
    static ATerm w_18 (ATerm t);
    static ATerm w_18 (ATerm t)
    {
      static ATerm y_18 (ATerm t);
      static ATerm y_18 (ATerm t)
      {
        ATerm b_29 = NULL,c_29 = NULL;
        t = w_103(t);
        b_29 = t;
        t = term_r_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_48, b_29);
        t = j_16(c_29, b_29, t);
        return(t);
      }
      t = get_outfile_1_0(y_18, t);
      if(((o_28 != NULL) && (o_28 != t)))
        _fail(t);
      else
        o_28 = t;
      return(t);
    }
    t = copy_to_1_0(w_18, t);
  }
  {
    ATerm s_48 = t;
    int t_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_29 = NULL,m_29 = NULL;
        m_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_29 = ATgetArgument(t, 0);
            {
              ATerm d_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(m_29);
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, d_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_29;
          }
        LocalPopChoice(t_48);
        t = xtc_transform_file_2_0(a_19, e_19, t);
      }
    else
      {
        t = s_48;
        t = xtc_transform_term_2_0(f_19, h_19, t);
      }
  }
  {
    static ATerm k_19 (ATerm t);
    static ATerm k_19 (ATerm t)
    {
      ATerm r_29 = NULL;
      t = term_v_48;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_v_48);
      t = j_16(not_null(o_28), r_29, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(k_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_49), not_null(p_28)), term_y_48), not_null(o_28)), term_x_48);
  a_29 = t;
  t = SSL_concat_strings(a_29);
  s_28 = t;
  t = term_l_38;
  u_28 = t;
  t = (ATerm) ATinsert(ATempty, s_28);
  z_28 = t;
  t = SSL_printnl(u_28, z_28);
  t = r_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm k_131 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = term_a_38;
        z_29 = t;
        t = term_z_43;
        a_30 = t;
        t = term_a_44;
        t = d_16(z_29, a_30, t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_g_38);
        t = geq_0_0(t);
        t = u_29;
        t = k_131(t);
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
        t = u_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_b_38;
  {
    ATerm e_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL;
        t = term_a_38;
        n_30 = t;
        t = term_b_38;
        o_30 = t;
        t = term_c_38;
        t = d_16(n_30, o_30, t);
        LocalPopChoice(g_49);
      }
    else
      {
        t = e_49;
        t = term_e_39;
      }
  }
  f_30 = t;
  t = term_e_39;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, term_e_39);
  t = h_15(f_30, k_30, t);
  j_30 = t;
  t = SSL_int_to_string(j_30);
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_30), term_b_38);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_49 = ATgetArgument(t, 0);
      if(match_cons(i_49, sym_Stream_1))
        {
          t_30 = ATgetArgument(i_49, 0);
        }
      else
        _fail(t);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(t_30, v_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL;
  s_30 = t;
  t = xtc_new_file_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, s_30);
  t = y_14(n_19, q_30, s_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_30);
  t = xtc_transform_file_2_0(q_140, r_140, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm z_14 (ATerm c_72, ATerm d_72, ATerm t)
{
  t = SSL_execvp(c_72, d_72);
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
        ATerm l_17 = NULL,m_17 = NULL;
        t = SSL_int_to_string(u_31);
        l_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_49), l_17), term_j_49);
        m_17 = t;
        t = SSL_concat_strings(m_17);
      }
    }
  else
    {
      ATerm w_17 = NULL,x_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_31 = ATgetArgument(t, 0);
          v_31 = ATgetArgument(t, 1);
          w_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_31);
      w_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_r_49), w_17), term_p_49), u_31);
      x_17 = t;
      t = SSL_concat_strings(x_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  {
    ATerm w_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_19 (ATerm t);
        static ATerm q_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_49 = ATgetArgument(t, 0);
              if((z_31 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_55), term_g_55), term_c_55), term_x_54), term_r_54), term_n_54), term_j_54), term_f_54), term_b_54), term_x_53), term_t_53), term_p_53), term_l_53), term_h_53), term_d_53), term_z_52), term_t_52), term_q_52), term_m_52), term_g_52), term_c_52), term_s_51), term_m_51), term_i_51), term_y_50), term_t_50), term_o_50), term_f_50);
        t = fetch_elem_1_0(q_19, t);
        LocalPopChoice(y_49);
      }
    else
      {
        t = w_49;
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
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_55 = ATgetArgument(t, 0);
            n_32 = ATgetArgument(t, 1);
            {
              ATerm s_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_55);
        {
          ATerm t_55 = t;
          int u_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,g_18 = NULL,j_18 = NULL;
              t = n_32;
              {
                ATerm v_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_18 = t;
              t = term_l_38;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_a_56);
              j_18 = t;
              t = SSL_printnl(g_18, j_18);
              t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_a_56));
              LocalPopChoice(u_55);
            }
          else
            {
              t = t_55;
              t = d_32;
            }
        }
      }
    else
      {
        t = p_55;
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
ATerm fork_and_wait_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = fork_0_0(t);
  w_32 = t;
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_32;
        t = u_131(t);
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        t = SSL_waitpid(w_32);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_56 = ATgetArgument(t, 0);
            if(((ATgetType(f_56) != AT_INT) || (ATgetInt((ATermInt) f_56) != 0)))
              _fail(t);
            {
              ATerm g_56 = ATgetArgument(t, 1);
            }
            {
              ATerm h_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_32;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_141 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,e_33 = NULL;
  e_33 = t;
  t = z_141(t);
  t = xtc_find_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
  {
    static ATerm s_19 (ATerm t);
    static ATerm s_19 (ATerm t)
    {
      ATerm g_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
      t = z_14(c_33, e_33, t);
      t = term_e_39;
      g_33 = t;
      t = SSL_exit(g_33);
      return(t);
    }
    t = fork_and_wait_1_0(s_19, t);
  }
  t = e_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,n_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_33 = NULL,s_33 = NULL;
      t = j_33;
      t = xtc_new_file_0_0(t);
      p_33 = t;
      t = r_0(t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATinsert(ATinsert(ATempty, p_33), term_w_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_33);
    }
  else
    {
      ATerm u_33 = NULL,v_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_33;
      t = xtc_new_file_0_0(t);
      u_33 = t;
      t = r_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), term_w_38), n_33), term_i_56));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_48 = NULL,w_48 = NULL;
      w_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          u_48 = ATgetArgument(t, 0);
          {
            ATerm l_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(w_48);
            l_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, u_48);
            t_8 = t;
            t = SSLsetAnnotations(t_8, l_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_48;
        }
      LocalPopChoice(k_56);
      {
        static ATerm v_19 (ATerm t);
        static ATerm y_19 (ATerm t);
        static ATerm v_19 (ATerm t)
        {
          t = z_22;
          return(t);
        }
        static ATerm y_19 (ATerm t)
        {
          ATerm d_49 = NULL;
          t = pass_verbose_0_0(t);
          d_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_23), d_49), (ATerm) ATinsert(ATempty, term_c_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(v_19, y_19, t);
      }
    }
  else
    {
      t = j_56;
      {
        static ATerm d_20 (ATerm t);
        static ATerm e_20 (ATerm t);
        static ATerm d_20 (ATerm t)
        {
          t = z_22;
          return(t);
        }
        static ATerm e_20 (ATerm t)
        {
          ATerm h_49 = NULL;
          t = pass_verbose_0_0(t);
          h_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_23), h_49), (ATerm) ATinsert(ATempty, term_c_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_20, e_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = l_121(t);
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
      t = n_121(t);
      f_34 = t;
      t = z_33;
      t = foldr_3_0(l_121, m_121, n_121, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
      t = m_121(t);
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
      ATerm l_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_56 = ATgetArgument(t, 1);
        if(((ATgetType(m_56) == AT_LIST) && !(ATisEmpty(m_56))))
          {
            o_34 = ATgetFirst((ATermList) m_56);
            {
              ATerm n_56 = (ATerm) ATgetNext((ATermList) m_56);
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
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,n_34 = NULL;
      t = term_a_38;
      k_34 = t;
      t = term_q_56;
      n_34 = t;
      t = term_r_56;
      t = d_16(k_34, n_34, t);
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_57), term_a_57), term_x_56), term_u_56);
      t = map_1_0(h_20, t);
    }
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_34), term_q_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(j_20, conc_0_0, l_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_e_57;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm m_20 = NULL;
  t = pass_verbose_0_0(t);
  m_20 = t;
  t = (ATerm) ATinsert(CheckATermList(m_20), term_c_41);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  t = term_e_57;
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_c_41);
  return(t);
}
static ATerm g_21 (ATerm t)
{
  t = get_outfile_1_0(h_21, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL,o_19 = NULL,p_19 = NULL,t_19 = NULL;
        t = term_a_38;
        p_19 = t;
        t = term_i_57;
        t_19 = t;
        t = term_j_57;
        t = d_16(p_19, t_19, t);
        t = g_36;
        {
          ATerm k_57 = t;
          int l_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_36;
              {
                ATerm m_57 = t;
                int q_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        i_20 = ATgetArgument(t, 0);
                        {
                          ATerm q_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(g_36);
                          q_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, i_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, q_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = g_36;
                      }
                    LocalPopChoice(q_57);
                    t = xtc_transform_file_2_0(p_20, u_20, t);
                  }
                else
                  {
                    t = m_57;
                    t = xtc_transform_term_2_0(x_20, d_21, t);
                  }
              }
              LocalPopChoice(l_57);
            }
          else
            {
              t = k_57;
              {
                ATerm s_20 = NULL,y_20 = NULL,b_21 = NULL;
                t = term_l_38;
                y_20 = t;
                t = (ATerm) ATinsert(ATempty, term_r_57);
                b_21 = t;
                t = SSL_printnl(y_20, b_21);
                t = term_e_39;
                s_20 = t;
                t = SSL_exit(s_20);
                t = (ATerm) ATinsert(ATempty, term_r_57);
              }
            }
        }
        t = copy_to_1_0(g_21, t);
        i_19 = t;
        t = term_l_38;
        j_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_57));
        o_19 = t;
        t = SSL_printnl(j_19, o_19);
        t = i_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        t = g_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL,y_36 = NULL,g_37 = NULL;
        t = term_a_38;
        y_36 = t;
        t = term_z_43;
        g_37 = t;
        t = term_a_44;
        t = d_16(y_36, g_37, t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_36, term_m_47);
        t = geq_0_0(t);
        t = v_36;
        t = n_131(t);
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
        t = v_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  {
    ATerm o_58 = t;
    int p_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
        t = term_a_38;
        r_37 = t;
        t = term_z_43;
        s_37 = t;
        t = term_a_44;
        t = d_16(r_37, s_37, t);
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_37, term_w_50);
        t = geq_0_0(t);
        t = o_37;
        t = o_131(t);
        LocalPopChoice(p_58);
      }
    else
      {
        t = o_58;
        t = o_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm r_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_37 = NULL,z_37 = NULL;
      t = term_a_38;
      y_37 = t;
      t = term_t_58;
      z_37 = t;
      t = term_w_58;
      t = d_16(y_37, z_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_t_58);
      LocalPopChoice(s_58);
    }
  else
    {
      t = r_58;
      t = (ATerm) ATinsert(ATempty, term_x_58);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  t = term_y_58;
  d_38 = t;
  t = term_a_38;
  j_38 = t;
  t = term_z_58;
  k_38 = t;
  t = term_b_59;
  t = d_16(j_38, k_38, t);
  i_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_38), term_z_58);
  e_38 = t;
  t = h_38;
  t = comp_0_2(d_38, e_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
        t = term_a_38;
        r_38 = t;
        t = term_z_43;
        s_38 = t;
        t = term_a_44;
        t = d_16(r_38, s_38, t);
        q_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_38, term_x_41);
        t = geq_0_0(t);
        t = m_38;
        t = l_131(t);
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        t = m_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm u_38 = NULL;
  static ATerm i_21 (ATerm t);
  static ATerm i_21 (ATerm t)
  {
    t = w_114(t);
    if(((u_38 != NULL) && (u_38 != t)))
      _fail(t);
    else
      u_38 = t;
    return(t);
  }
  t = fetch_1_0(i_21, t);
  t = not_null(u_38);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  w_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_40 = ATgetArgument(t, 0);
      {
        ATerm b_22 = NULL,f_22 = NULL,a_10 = NULL;
        t = SSLgetAnnotations(w_40);
        b_22 = t;
        t = x_40;
        t = fetch_elem_1_0(k_21, t);
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, f_22);
        a_10 = t;
        t = SSLsetAnnotations(a_10, b_22);
      }
    }
  else
    {
      ATerm h_23 = NULL,m_23 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          x_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_40);
      h_23 = t;
      t = x_40;
      t = fetch_elem_1_0(l_21, t);
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, m_23);
      c_10 = t;
      t = SSLsetAnnotations(c_10, h_23);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm j_22 = NULL,m_22 = NULL,n_22 = NULL;
  j_22 = t;
  {
    ATerm f_59 = t;
    int k_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            m_22 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
            {
              ATerm l_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_59);
        t = m_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = n_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_22;
      }
    else
      {
        t = f_59;
        if(match_cons(t, sym_RDef_3))
          {
            m_22 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
            {
              ATerm m_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = n_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_22;
      }
  }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
            {
              ATerm q_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_59);
        t = q_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = r_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_23;
      }
    else
      {
        t = n_59;
        if(match_cons(t, sym_RDef_3))
          {
            q_23 = ATgetArgument(t, 0);
            r_23 = ATgetArgument(t, 1);
            {
              ATerm t_59 = ATgetArgument(t, 2);
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
        t = p_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(j_21, t);
  p_39 = t;
  t = term_l_38;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_59);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = p_39;
  return(t);
}
static ATerm w_14 (ATerm f_23, ATerm g_23, ATerm t)
{
  t = f_23;
  {
    ATerm v_59 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_59;
      }
  }
  t = g_23;
  {
    ATerm x_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(a_60);
      }
    else
      {
        t = x_59;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(g_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm x_14 (ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_write_term_to_stream_baf(i_36, j_36);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
static ATerm y_14 (ATerm b_114 (ATerm), ATerm k_289, ATerm s_36, ATerm t)
{
  ATerm n_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_289, term_c_60);
  t = w_15(t);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, s_36);
  t = b_114(t);
  t = fclose_0_0(t);
  t = s_36;
  return(t);
}
static ATerm b_15 (ATerm p_104 (ATerm), ATerm y_23, ATerm w_23, ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  s_41 = t;
  t = p_104(t);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_41, y_23, w_23);
  t = e_16(o_41, y_23, w_23, t);
  {
    ATerm e_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL;
        t = term_i_60;
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, term_i_60);
        t = d_16(o_41, y_41, t);
        {
          ATerm j_60 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_60;
            }
        }
        LocalPopChoice(h_60);
      }
    else
      {
        t = e_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_41 = ATgetFirst((ATermList) t);
      r_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_41, term_i_60, (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), y_23)));
  t = lookup_table_0_1(o_41, t);
  w_41 = t;
  t = term_i_60;
  t_41 = t;
  t = (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), y_23));
  u_41 = t;
  t = w_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(t_41, u_41, v_41, t);
  t = s_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_42 = NULL;
  ATerm l_60 = t;
  int o_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_42 = NULL,z_23 = NULL;
      g_42 = t;
      t = term_p_60;
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, term_p_60);
      t = j_16(g_42, z_23, t);
      b_42 = t;
      t = SSL_mkstemp(b_42);
      LocalPopChoice(o_60);
    }
  else
    {
      t = l_60;
      {
        ATerm h_42 = NULL;
        t = term_q_60;
        h_42 = t;
        t = SSL_perror(h_42);
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
static ATerm n_21 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,m_42 = NULL,o_42 = NULL,p_42 = NULL;
  t = P__tmpdir_0_0(t);
  o_42 = t;
  t = term_t_60;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, term_t_60);
  t = j_16(o_42, p_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_39;
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, term_z_39);
  t = b_15(n_21, k_42, m_42, t);
  t = SSL_close(j_42);
  t = k_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_60;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm a_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_60);
      a_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_42, (ATerm) ATinsert(ATempty, term_y_60));
      t = z_15(y_42, a_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm d_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_61 = ATgetArgument(t, 0);
      if(match_cons(c_61, sym_Stream_1))
        {
          d_43 = ATgetArgument(c_61, 0);
        }
      else
        _fail(t);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(d_43, f_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm s_140 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  t = read_from_0_0(t);
  t = s_140(t);
  c_43 = t;
  t = xtc_new_file_0_0(t);
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
  t = y_14(r_21, b_43, c_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_43);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  t = debug_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_d_61;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = save_as_1_0(z_21, t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_e_61;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm l_43 = NULL,g_44 = NULL;
  g_44 = t;
  {
    ATerm f_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = term_a_38;
        c_25 = t;
        t = term_h_61;
        d_25 = t;
        t = term_j_61;
        t = d_16(c_25, d_25, t);
        l_43 = t;
        t = if_verbose2_1_0(u_21, t);
        t = g_44;
        {
          ATerm l_61 = t;
          int m_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_25 = NULL,k_25 = NULL;
              t = term_a_38;
              j_25 = t;
              t = term_n_40;
              k_25 = t;
              t = term_o_40;
              t = d_16(j_25, k_25, t);
              t = g_44;
              LocalPopChoice(m_61);
            }
          else
            {
              t = l_61;
              {
                static ATerm x_21 (ATerm t);
                static ATerm x_21 (ATerm t)
                {
                  ATerm p_61 = t;
                  int q_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          n_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_14(l_43, n_26, t);
                      LocalPopChoice(q_61);
                    }
                  else
                    {
                      t = p_61;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(x_21, t);
              }
            }
        }
        LocalPopChoice(g_61);
      }
    else
      {
        t = f_61;
        t = g_44;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm e_45 = NULL;
  e_45 = t;
  {
    ATerm r_61 = t;
    int s_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_45);
        LocalPopChoice(s_61);
      }
    else
      {
        t = r_61;
        t = e_45;
      }
  }
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  static ATerm a_22 (ATerm t);
  static ATerm a_22 (ATerm t)
  {
    ATerm t_44 = NULL,x_44 = NULL,z_44 = NULL;
    t_44 = t;
    t = term_s_60;
    x_44 = t;
    t = term_i_60;
    z_44 = t;
    t = term_t_61;
    t = d_16(x_44, z_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_44 != NULL) && (q_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_44 = ATgetFirst((ATermList) t);
        {
          ATerm v_61 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_44;
    t = map_1_0(d_22, t);
    t = t_44;
    t = end_scope_1_0(e_22, t);
    return(t);
  }
  t = repeat_2_0(a_22, _id, t);
  r_44 = t;
  t = SSL_exit(r_44);
  return(t);
}
static ATerm i_22 (ATerm t)
{
  ATerm w_61 = t;
  int x_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_45 = NULL,b_46 = NULL;
      t = term_a_38;
      z_45 = t;
      t = term_w_38;
      b_46 = t;
      t = term_x_38;
      t = d_16(z_45, b_46, t);
      LocalPopChoice(x_61);
    }
  else
    {
      t = w_61;
      t = term_c_40;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_27 = NULL,l_27 = NULL;
      t = term_w_38;
      {
        ATerm a_62 = t;
        int b_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_27 = NULL,p_27 = NULL;
            t = term_a_38;
            n_27 = t;
            t = term_w_38;
            p_27 = t;
            t = term_x_38;
            t = d_16(n_27, p_27, t);
            LocalPopChoice(b_62);
          }
        else
          {
            t = a_62;
            t = term_c_40;
          }
      }
      i_27 = t;
      t = term_w_60;
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_60, i_27);
      t = l_15(l_27, i_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm c_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_45;
      t = copy_to_1_0(i_22, t);
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
ATerm get_outfile_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,i_46 = NULL,j_46 = NULL;
  t = v_103(t);
  e_46 = t;
  t = term_a_38;
  i_46 = t;
  t = term_m_43;
  j_46 = t;
  t = term_n_43;
  t = d_16(i_46, j_46, t);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_46, e_46);
  t = j_16(f_46, e_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        t = j_47;
        t = t_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, k_47, m_28);
        t = l_15(k_47, m_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
        LocalPopChoice(f_62);
      }
    else
      {
        t = d_62;
        {
          ATerm s_62 = t;
          int t_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_28 = NULL;
              t = j_47;
              t = t_0(t);
              y_28 = t;
              {
                ATerm v_62 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_29 = NULL;
                    f_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_29;
                          }
                        else
                          {
                            t = f_29;
                            if((k_47 != t))
                              {
                                _fail(t);
                              }
                            t = f_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_62;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, k_47, y_28);
              t = l_15(k_47, y_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
              LocalPopChoice(t_62);
            }
          else
            {
              t = s_62;
              t = j_47;
              t = t_0(t);
              if((k_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
            }
        }
      }
  }
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = get_outfile_1_0(l_22, t);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = term_w_62;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  {
    ATerm x_62 = t;
    int y_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,v_29 = NULL,w_29 = NULL,c_30 = NULL,d_30 = NULL;
        t = term_a_38;
        c_30 = t;
        t = term_z_62;
        d_30 = t;
        t = term_b_63;
        t = d_16(c_30, d_30, t);
        t = e_48;
        t = copy_to_1_0(k_22, t);
        t_29 = t;
        t = term_l_38;
        v_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_63));
        w_29 = t;
        t = SSL_printnl(v_29, w_29);
        t = t_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(y_62);
      }
    else
      {
        t = x_62;
        t = e_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm k_49 = NULL,m_49 = NULL,o_49 = NULL,q_49 = NULL;
  t = term_z_43;
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_49 = NULL,t_49 = NULL;
        t = term_a_38;
        s_49 = t;
        t = term_z_43;
        t_49 = t;
        t = term_a_44;
        t = d_16(s_49, t_49, t);
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        t = term_e_39;
      }
  }
  m_49 = t;
  t = term_e_39;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, term_e_39);
  t = h_15(m_49, q_49, t);
  o_49 = t;
  t = SSL_int_to_string(o_49);
  k_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_49), term_z_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,x_49 = NULL,a_50 = NULL,g_50 = NULL,j_50 = NULL;
  t = term_a_38;
  g_50 = t;
  t = term_h_63;
  j_50 = t;
  t = term_i_63;
  t = d_16(g_50, j_50, t);
  u_49 = t;
  t = term_j_63;
  t = xtc_find_path_0_0(t);
  v_49 = t;
  t = term_k_63;
  t = xtc_find_path_0_0(t);
  x_49 = t;
  t = term_l_63;
  t = xtc_find_path_0_0(t);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_50), term_h_63), x_49), term_h_63), v_49), term_h_63));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm k_50 = NULL,n_50 = NULL,r_50 = NULL,s_50 = NULL,u_50 = NULL,z_50 = NULL,b_51 = NULL;
  z_50 = t;
  t = term_m_63;
  k_50 = t;
  t = z_50;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_51 = NULL,d_51 = NULL;
        t = term_a_38;
        c_51 = t;
        t = term_w_38;
        d_51 = t;
        t = term_x_38;
        t = d_16(c_51, d_51, t);
        LocalPopChoice(o_63);
      }
    else
      {
        t = n_63;
        {
          ATerm e_51 = NULL,f_51 = NULL;
          t = term_a_38;
          e_51 = t;
          t = term_m_43;
          f_51 = t;
          t = term_n_43;
          t = d_16(e_51, f_51, t);
        }
      }
  }
  b_51 = t;
  t = z_50;
  t = get_include_dirs_0_0(t);
  r_50 = t;
  t = z_50;
  t = pass_keep_0_0(t);
  s_50 = t;
  t = term_p_63;
  {
    ATerm q_63 = t;
    int r_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL,o_51 = NULL;
        t = term_a_38;
        n_51 = t;
        t = term_p_63;
        o_51 = t;
        t = term_s_63;
        t = d_16(n_51, o_51, t);
        LocalPopChoice(r_63);
        t = (ATerm) ATinsert(ATempty, term_p_63);
      }
    else
      {
        t = q_63;
        t = (ATerm) ATempty;
      }
  }
  u_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_50), s_50), r_50), (ATerm) ATinsert(ATinsert(ATempty, b_51), term_t_63));
  t = concat_0_0(t);
  n_50 = t;
  t = z_50;
  t = comp_0_2(k_50, n_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm j_130 (ATerm), ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  {
    ATerm u_63 = t;
    int v_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
        t = term_a_38;
        a_52 = t;
        t = term_b_38;
        b_52 = t;
        t = term_c_38;
        t = d_16(a_52, b_52, t);
        z_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_51, term_x_41);
        t = geq_0_0(t);
        t = t_51;
        t = j_130(t);
        LocalPopChoice(v_63);
      }
    else
      {
        t = u_63;
        t = t_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  x_52 = t;
  t = SSL_explode_string(x_52);
  {
    ATerm w_63 = t;
    int y_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_55 (ATerm t);
        static ATerm a_55 (ATerm t)
        {
          ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
          t_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_54 = ATgetFirst((ATermList) t);
              v_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm c_64 = t;
            int e_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_31 = NULL,i_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(t_54);
                b_31 = t;
                t = v_54;
                t = a_55(t);
                i_31 = t;
                t = (ATerm) ATinsert(CheckATermList(i_31), u_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, b_31);
                LocalPopChoice(e_64);
              }
            else
              {
                t = c_64;
                {
                  ATerm g_64 = t;
                  int h_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(t_54);
                      j_32 = t;
                      t = u_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(v_54), u_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, j_32);
                      LocalPopChoice(h_64);
                    }
                  else
                    {
                      t = g_64;
                      {
                        ATerm i_33 = NULL,m_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(t_54);
                        i_33 = t;
                        t = u_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = v_54;
                        t = l_125(t);
                        m_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_33), u_54);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, i_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = a_55(t);
        LocalPopChoice(y_63);
      }
    else
      {
        t = w_63;
      }
  }
  w_52 = t;
  t = SSL_implode_string(w_52);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = debug_1_0(q_22, t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_i_64;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = debug_1_0(u_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = term_k_64;
  return(t);
}
static ATerm c_15 (ATerm b_23, ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,m_55 = NULL,n_55 = NULL;
  t = b_23;
  t = basename_1_0(_id, t);
  i_55 = t;
  t = if_verbose3_1_0(o_22, t);
  t = term_o_43;
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_43, i_55);
  t = i_16(n_55, i_55, t);
  {
    ATerm l_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_55 = NULL,z_55 = NULL;
        t = term_a_38;
        w_55 = t;
        t = term_w_38;
        z_55 = t;
        t = term_x_38;
        t = d_16(w_55, z_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(o_64);
      }
    else
      {
        t = l_64;
        t = i_55;
      }
  }
  j_55 = t;
  t = if_verbose3_1_0(t_22, t);
  t = term_m_43;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, j_55);
  t = i_16(m_55, j_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_55);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_p_64;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(d_23, t);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,u_36 = NULL,z_36 = NULL,a_37 = NULL,s_34 = NULL,t_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      g_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_15(g_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm q_64 = t;
    int u_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_58 = NULL,k_58 = NULL,q_58 = NULL;
        h_58 = t;
        t = term_a_38;
        k_58 = t;
        t = term_n_40;
        q_58 = t;
        t = term_o_40;
        t = d_16(k_58, q_58, t);
        t = h_58;
        LocalPopChoice(u_64);
      }
    else
      {
        t = q_64;
        t = add_main_0_0(t);
      }
  }
  f_58 = t;
  {
    ATerm v_64 = t;
    int g_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_59 = ATgetArgument(t, 0);
            {
              ATerm b_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(f_58);
              b_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_59);
              c_11 = t;
              t = SSLsetAnnotations(c_11, b_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(g_65);
        t = xtc_transform_file_2_0(e_23, i_23, t);
      }
    else
      {
        t = v_64;
        t = xtc_transform_term_2_0(j_23, o_23, t);
      }
  }
  e_58 = t;
  {
    ATerm h_65 = t;
    int i_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_59 = ATgetArgument(t, 0);
            {
              ATerm j_34 = NULL,d_11 = NULL;
              t = SSLgetAnnotations(e_58);
              j_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_59);
              d_11 = t;
              t = SSLsetAnnotations(d_11, j_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_58;
          }
        LocalPopChoice(i_65);
        t = xtc_transform_file_2_0(s_23, t_23, t);
      }
    else
      {
        t = h_65;
        t = xtc_transform_term_2_0(u_23, v_23, t);
      }
  }
  t = if_keep5_1_0(x_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(e_24, t);
  w_34 = t;
  t = term_q_65;
  s_34 = t;
  t = w_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  t_34 = t;
  t = w_34;
  t = comp_0_2(s_34, t_34, t);
  t = if_keep6_1_0(g_24, t);
  d_58 = t;
  {
    ATerm r_65 = t;
    int s_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_59 = ATgetArgument(t, 0);
            {
              ATerm y_34 = NULL,f_11 = NULL;
              t = SSLgetAnnotations(d_58);
              y_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_59);
              f_11 = t;
              t = SSLsetAnnotations(f_11, y_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_58;
          }
        LocalPopChoice(s_65);
        t = xtc_transform_file_2_0(i_24, k_24, t);
      }
    else
      {
        t = r_65;
        t = xtc_transform_term_2_0(m_24, n_24, t);
      }
  }
  t = if_keep6_1_0(p_24, t);
  c_58 = t;
  {
    ATerm t_65 = t;
    int u_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_60 = ATgetArgument(t, 0);
            {
              ATerm c_35 = NULL,r_11 = NULL;
              t = SSLgetAnnotations(c_58);
              c_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_60);
              r_11 = t;
              t = SSLsetAnnotations(r_11, c_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_58;
          }
        LocalPopChoice(u_65);
        t = xtc_transform_file_2_0(r_24, t_24, t);
      }
    else
      {
        t = t_65;
        t = xtc_transform_term_2_0(u_24, v_24, t);
      }
  }
  t = if_keep5_1_0(w_24, t);
  b_58 = t;
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_60 = ATgetArgument(t, 0);
            {
              ATerm g_35 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(b_58);
              g_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_60);
              i_12 = t;
              t = SSLsetAnnotations(i_12, g_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_58;
          }
        LocalPopChoice(w_65);
        t = xtc_transform_file_2_0(b_25, e_25, t);
      }
    else
      {
        t = v_65;
        t = xtc_transform_term_2_0(g_25, o_25, t);
      }
  }
  t = if_keep5_1_0(p_25, t);
  a_58 = t;
  {
    ATerm y_65 = t;
    int z_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_60 = ATgetArgument(t, 0);
            {
              ATerm u_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(a_58);
              u_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_60);
              j_12 = t;
              t = SSLsetAnnotations(j_12, u_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(z_65);
        t = xtc_transform_file_2_0(r_25, t_25, t);
      }
    else
      {
        t = y_65;
        t = xtc_transform_term_2_0(w_25, x_25, t);
      }
  }
  t = if_keep5_1_0(y_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm c_66 = t;
    int d_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL,z_60 = NULL,a_61 = NULL;
        x_60 = t;
        t = term_a_38;
        z_60 = t;
        t = term_n_40;
        a_61 = t;
        t = term_o_40;
        t = d_16(z_60, a_61, t);
        t = x_60;
        LocalPopChoice(d_66);
        {
          ATerm b_61 = NULL;
          b_61 = t;
          {
            ATerm g_66 = t;
            int h_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    i_61 = ATgetArgument(t, 0);
                    {
                      ATerm e_36 = NULL,k_12 = NULL;
                      t = SSLgetAnnotations(b_61);
                      e_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, i_61);
                      k_12 = t;
                      t = SSLsetAnnotations(k_12, e_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = b_61;
                  }
                LocalPopChoice(h_66);
                t = xtc_transform_file_2_0(a_26, c_26, t);
              }
            else
              {
                t = g_66;
                t = xtc_transform_term_2_0(d_26, e_26, t);
              }
          }
        }
      }
    else
      {
        t = c_66;
        {
          ATerm o_61 = NULL;
          o_61 = t;
          {
            ATerm j_66 = t;
            int k_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    u_61 = ATgetArgument(t, 0);
                    {
                      ATerm q_36 = NULL,n_12 = NULL;
                      t = SSLgetAnnotations(o_61);
                      q_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, u_61);
                      n_12 = t;
                      t = SSLsetAnnotations(n_12, q_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = o_61;
                  }
                LocalPopChoice(k_66);
                t = xtc_transform_file_2_0(g_26, i_26, t);
              }
            else
              {
                t = j_66;
                t = xtc_transform_term_2_0(j_26, k_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  a_37 = t;
  t = term_l_66;
  u_36 = t;
  t = a_37;
  t = pass_warnings_0_0(t);
  z_36 = t;
  t = a_37;
  t = comp_0_2(u_36, z_36, t);
  z_57 = t;
  {
    ATerm n_66 = t;
    int r_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_62 = ATgetArgument(t, 0);
            {
              ATerm c_37 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(z_57);
              c_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_62);
              o_12 = t;
              t = SSLsetAnnotations(o_12, c_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_57;
          }
        LocalPopChoice(r_66);
        t = xtc_transform_file_2_0(s_26, u_26, t);
      }
    else
      {
        t = n_66;
        t = xtc_transform_term_2_0(v_26, w_26, t);
      }
  }
  y_57 = t;
  {
    ATerm s_66 = t;
    int t_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_63 = ATgetArgument(t, 0);
            {
              ATerm i_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(y_57);
              i_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_63);
              p_12 = t;
              t = SSLsetAnnotations(p_12, i_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_57;
          }
        LocalPopChoice(t_66);
        t = xtc_transform_file_2_0(x_26, y_26, t);
      }
    else
      {
        t = s_66;
        t = xtc_transform_term_2_0(z_26, b_27, t);
      }
  }
  t = if_keep2_1_0(c_27, t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  t = term_l_38;
  w_57 = t;
  t = (ATerm) ATinsert(CheckATermList(v_57), term_u_66);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(v_57), term_u_66));
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_v_66;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm g_59 = NULL;
  t = pass_verbose_0_0(t);
  g_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), term_c_41);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = term_v_66;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm j_59 = NULL;
  t = pass_verbose_0_0(t);
  j_59 = t;
  t = (ATerm) ATinsert(CheckATermList(j_59), term_c_41);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_w_66;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm r_59 = NULL;
  t = pass_verbose_0_0(t);
  r_59 = t;
  t = (ATerm) ATinsert(CheckATermList(r_59), term_c_41);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_w_66;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm s_59 = NULL;
  t = pass_verbose_0_0(t);
  s_59 = t;
  t = (ATerm) ATinsert(CheckATermList(s_59), term_c_41);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = save_as_1_0(a_24, t);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_a_67;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = save_as_1_0(f_24, t);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_c_67;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = save_as_1_0(h_24, t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_j_67;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_r_67;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm y_59 = NULL;
  t = pass_verbose_0_0(t);
  y_59 = t;
  t = (ATerm) ATinsert(CheckATermList(y_59), term_c_41);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_r_67;
  return(t);
}
static ATerm n_24 (ATerm t)
{
  ATerm z_59 = NULL;
  t = pass_verbose_0_0(t);
  z_59 = t;
  t = (ATerm) ATinsert(CheckATermList(z_59), term_c_41);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = save_as_1_0(q_24, t);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = term_s_67;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_x_67;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm f_60 = NULL;
  t = pass_verbose_0_0(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), term_c_41);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_x_67;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_c_41);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_y_67;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm m_60 = NULL;
  t = pass_verbose_0_0(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), term_c_41);
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm n_60 = NULL;
  t = pass_verbose_0_0(t);
  n_60 = t;
  t = (ATerm) ATinsert(CheckATermList(n_60), term_c_41);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = save_as_1_0(q_25, t);
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm u_60 = NULL;
  t = pass_verbose_0_0(t);
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), term_c_41);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm v_60 = NULL;
  t = pass_verbose_0_0(t);
  v_60 = t;
  t = (ATerm) ATinsert(CheckATermList(v_60), term_c_41);
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
static ATerm a_26 (ATerm t)
{
  t = term_e_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm k_61 = NULL;
  t = pass_verbose_0_0(t);
  k_61 = t;
  t = (ATerm) ATinsert(CheckATermList(k_61), term_c_41);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_e_57;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm n_61 = NULL;
  t = pass_verbose_0_0(t);
  n_61 = t;
  t = (ATerm) ATinsert(CheckATermList(n_61), term_c_41);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm y_61 = NULL;
  t = pass_verbose_0_0(t);
  y_61 = t;
  t = (ATerm) ATinsert(CheckATermList(y_61), term_c_41);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm z_61 = NULL;
  t = pass_verbose_0_0(t);
  z_61 = t;
  t = (ATerm) ATinsert(CheckATermList(z_61), term_c_41);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(o_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_h_68;
  return(t);
}
static ATerm s_26 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm r_62 = NULL;
  t = pass_verbose_0_0(t);
  r_62 = t;
  t = (ATerm) ATinsert(CheckATermList(r_62), term_c_41);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm u_62 = NULL;
  t = pass_verbose_0_0(t);
  u_62 = t;
  t = (ATerm) ATinsert(CheckATermList(u_62), term_c_41);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_k_68;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm c_63 = NULL;
  t = pass_verbose_0_0(t);
  c_63 = t;
  t = (ATerm) ATinsert(CheckATermList(c_63), term_c_41);
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_k_68;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm d_63 = NULL;
  t = pass_verbose_0_0(t);
  d_63 = t;
  t = (ATerm) ATinsert(CheckATermList(d_63), term_c_41);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_n_68;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_22, t);
  t = profile_p__2_0(x_22, c_23, t);
  return(t);
}
static ATerm d_16 (ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm x_63 = NULL;
  t = lookup_table_0_1(h_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(i_59, x_63, t);
  return(t);
}
static ATerm d_15 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  a_64 = t;
  {
    ATerm o_68 = t;
    int p_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
        t = d_16(t_57, u_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_68 = ATgetFirst((ATermList) t);
            z_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_68);
        {
          ATerm b_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_57, u_57, z_63);
          t = lookup_table_0_1(t_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_16(u_57, z_63, b_64, t);
          t = (ATerm) ATmakeAppl(sym__3, t_57, u_57, z_63);
        }
      }
    else
      {
        t = o_68;
        {
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
          t = lookup_table_0_1(t_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_16(u_57, d_64, t);
          t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
        }
      }
  }
  t = a_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm f_64 = NULL,j_64 = NULL,m_64 = NULL,n_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL;
  n_64 = t;
  t = m_104(t);
  m_64 = t;
  {
    ATerm d_69 = t;
    int e_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_64 = NULL;
        t = term_i_60;
        w_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_64, term_i_60);
        t = d_16(m_64, w_64, t);
        {
          ATerm f_69 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_69;
            }
        }
        LocalPopChoice(e_69);
      }
    else
      {
        t = d_69;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_64 = ATgetFirst((ATermList) t);
      f_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_64, term_i_60, f_64);
  t = lookup_table_0_1(m_64, t);
  t_64 = t;
  t = term_i_60;
  r_64 = t;
  t = t_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(r_64, f_64, s_64, t);
  t = j_64;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm f_65 = NULL;
      f_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_64, f_65);
      t = d_15(m_64, f_65, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = n_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm i_69 = t;
  int j_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_106(t);
      t = v_106(t);
      LocalPopChoice(j_69);
    }
  else
    {
      t = i_69;
      t = v_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  k_65 = t;
  t = l_104(t);
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_65, term_i_60);
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_69 = ATgetArgument(t, 0);
            ATerm n_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_60;
        x_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_65, term_i_60);
        t = d_16(j_65, x_65, t);
        LocalPopChoice(l_69);
      }
    else
      {
        t = k_69;
        t = (ATerm) ATempty;
      }
  }
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_65, term_i_60, (ATerm) ATinsert(CheckATermList(l_65), (ATerm) ATempty));
  t = lookup_table_0_1(j_65, t);
  p_65 = t;
  t = term_i_60;
  m_65 = t;
  t = (ATerm) ATinsert(CheckATermList(l_65), (ATerm) ATempty);
  n_65 = t;
  t = p_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(m_65, n_65, o_65, t);
  t = k_65;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_s_60;
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  {
    ATerm o_69 = t;
    int p_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_66);
        LocalPopChoice(p_69);
      }
    else
      {
        t = o_69;
        t = i_66;
      }
  }
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_s_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_141 (ATerm), ATerm t)
{
  ATerm a_66 = NULL;
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm b_66 = NULL;
    b_66 = t;
    {
      ATerm q_69 = t;
      int r_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_66 = NULL,f_66 = NULL;
          t = term_s_60;
          e_66 = t;
          t = term_i_60;
          f_66 = t;
          t = term_t_61;
          t = d_16(e_66, f_66, t);
          LocalPopChoice(r_69);
        }
      else
        {
          t = q_69;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_66 != NULL) && (a_66 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_66 = ATgetFirst((ATermList) t);
        {
          ATerm s_69 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_66;
    t = map_1_0(q_27, t);
    t = b_66;
    t = end_scope_1_0(r_27, t);
    return(t);
  }
  t = begin_scope_1_0(h_27, t);
  t = restore_always_2_0(d_141, k_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm m_66 = NULL;
  m_66 = t;
  {
    ATerm t_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
        t = term_a_38;
        p_66 = t;
        t = term_b_38;
        q_66 = t;
        t = term_c_38;
        t = d_16(p_66, q_66, t);
        o_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_66, term_e_39);
        t = geq_0_0(t);
        t = m_66;
        t = h_130(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = t_69;
        t = m_66;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm v_69 = t;
  int a_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_55, y_55);
      LocalPopChoice(a_70);
    }
  else
    {
      t = v_69;
      t = SSL_addr(x_55, y_55);
    }
  return(t);
}
static ATerm h_15 (ATerm d_56, ATerm e_56, ATerm t)
{
  ATerm b_70 = t;
  int f_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_56, e_56);
      LocalPopChoice(f_70);
    }
  else
    {
      t = b_70;
      t = SSL_subtr(d_56, e_56);
    }
  return(t);
}
static ATerm i_15 (ATerm x_64, ATerm z_64, ATerm b_65, ATerm d_65, ATerm y_64, ATerm a_65, ATerm c_65, ATerm e_65, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,b_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_64, y_64);
  t = h_15(x_64, y_64, t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_64, a_65);
  t = h_15(z_64, a_65, t);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_65, c_65);
  t = h_15(b_65, c_65, t);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_65, e_65);
  t = h_15(d_65, e_65, t);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__4, x_66, y_66, z_66, b_67);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_70 = ATgetArgument(t, 0);
      if(match_cons(k_70, sym__4))
        {
          d_67 = ATgetArgument(k_70, 0);
          e_67 = ATgetArgument(k_70, 1);
          k_67 = ATgetArgument(k_70, 2);
          l_67 = ATgetArgument(k_70, 3);
        }
      else
        _fail(t);
      {
        ATerm l_70 = ATgetArgument(t, 1);
        if(match_cons(l_70, sym__4))
          {
            m_67 = ATgetArgument(l_70, 0);
            n_67 = ATgetArgument(l_70, 1);
            o_67 = ATgetArgument(l_70, 2);
            p_67 = ATgetArgument(l_70, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_15(d_67, e_67, k_67, l_67, m_67, n_67, o_67, p_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,z_67 = NULL,b_68 = NULL,e_68 = NULL,i_68 = NULL,l_68 = NULL,m_68 = NULL,q_68 = NULL,s_68 = NULL;
  b_68 = t;
  t = times_0_0(t);
  q_67 = t;
  t = b_68;
  t = f_128(t);
  t_67 = t;
  t = times_0_0(t);
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_67, q_67);
  t = diff_times_0_0(t);
  w_67 = t;
  if(match_cons(t, sym__4))
    {
      m_68 = ATgetArgument(t, 0);
      {
        ATerm m_70 = ATgetArgument(t, 1);
      }
      q_68 = ATgetArgument(t, 2);
      {
        ATerm n_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_68, q_68);
  t = f_15(m_68, q_68, t);
  s_68 = t;
  t = SSL_TicksToSeconds(s_68);
  u_67 = t;
  t = w_67;
  if(match_cons(t, sym__4))
    {
      ATerm q_70 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      {
        ATerm r_70 = ATgetArgument(t, 2);
      }
      i_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_68, i_68);
  t = f_15(e_68, i_68, t);
  l_68 = t;
  t = SSL_TicksToSeconds(l_68);
  v_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_67), term_v_70), u_67), term_u_70);
  t = e_128(t);
  t = t_67;
  return(t);
}
ATerm debug_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
  t_68 = t;
  t = z_113(t);
  u_68 = t;
  t = term_l_38;
  v_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_68), u_68);
  w_68 = t;
  t = SSL_printnl(v_68, w_68);
  t = t_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  x_68 = t;
  t = term_a_38;
  b_69 = t;
  t = term_w_70;
  c_69 = t;
  t = term_x_70;
  t = d_16(b_69, c_69, t);
  y_68 = t;
  t = term_c_40;
  z_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_71), term_o_71), term_h_71), term_d_71), term_c_71), term_a_71), term_z_70), y_68), term_y_70);
  a_69 = t;
  t = SSL_printnl(z_68, a_69);
  t = x_68;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_69 = ATgetFirst((ATermList) t);
      h_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_69;
    }
  else
    {
      t = h_69;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  static ATerm z_69 (ATerm t);
  static ATerm z_69 (ATerm t)
  {
    ATerm q_71 = t;
    int s_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_115(t);
        LocalPopChoice(s_71);
      }
    else
      {
        t = q_71;
        {
          ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,f_38 = NULL,n_38 = NULL,h_13 = NULL;
          w_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_69 = ATgetFirst((ATermList) t);
              y_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_69);
          f_38 = t;
          t = y_69;
          t = z_69(t);
          n_38 = t;
          t = (ATerm) ATinsert(CheckATermList(n_38), x_69);
          h_13 = t;
          t = SSLsetAnnotations(h_13, f_38);
        }
      }
    return(t);
  }
  t = z_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL;
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm e_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,o_70 = NULL,p_70 = NULL,s_70 = NULL,t_70 = NULL,p_13 = NULL,l_13 = NULL;
    t_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_70 = ATgetFirst((ATermList) t);
        o_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_70);
    i_70 = t;
    t = j_70;
    t = x_114(t);
    p_70 = t;
    t = (ATerm) ATinsert(CheckATermList(o_70), p_70);
    l_13 = t;
    t = SSLsetAnnotations(l_13, i_70);
    s_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_70 = ATgetFirst((ATermList) t);
        h_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_70);
    e_70 = t;
    t = h_70;
    if(((c_70 != NULL) && (c_70 != t)))
      _fail(t);
    else
      c_70 = t;
    t = (ATerm) ATinsert(CheckATermList(h_70), g_70);
    p_13 = t;
    t = SSLsetAnnotations(p_13, e_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_27, t);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_70, not_null(c_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  ATerm e_71 = NULL,r_71 = NULL;
  ATerm t_71 = t;
  int u_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(h_124, t);
      LocalPopChoice(u_71);
    }
  else
    {
      t = t_71;
      {
        ATerm b_71 = NULL;
        b_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      r_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_71 = ATgetFirst((ATermList) t);
              ATerm w_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_71;
          t = list_tokenize_1_0(h_124, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm x_71 = ATgetFirst((ATermList) t);
          ATerm y_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, e_71);
        }
      else
        {
          ATerm a_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_71 = ATgetFirst((ATermList) t);
              ATerm f_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_71;
          t = list_tokenize_1_0(h_124, t);
          a_72 = t;
          t = (ATerm) ATinsert(CheckATermList(a_72), e_71);
        }
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm u_72 = NULL;
  u_72 = t;
  t = SSL_implode_string(u_72);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm b_72 = NULL,e_72 = NULL,i_72 = NULL,n_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,p_18 = NULL;
  s_72 = t;
  if(match_cons(t, sym__2))
    {
      n_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_72);
  i_72 = t;
  t = SSL_explode_string(q_72);
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_72, r_72);
  p_18 = t;
  t = SSLsetAnnotations(p_18, i_72);
  if(match_cons(t, sym__2))
    {
      b_72 = ATgetArgument(t, 0);
      e_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_72;
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm t_72 = NULL;
      t_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_72, b_72);
      t = n_15(t_72, b_72, t);
      return(t);
    }
    t = list_tokenize_1_0(t_27, t);
  }
  t = map_1_0(u_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  {
    ATerm g_72 = t;
    int h_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_39 = NULL;
        t = SSL_filemode(r_73);
        if(match_cons(t, sym__2))
          {
            a_39 = ATgetArgument(t, 0);
            {
              ATerm j_72 = ATgetArgument(t, 1);
              if(((ATgetType(j_72) != AT_INT) || (ATgetInt((ATermInt) j_72) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_39;
        LocalPopChoice(h_72);
      }
    else
      {
        t = g_72;
        {
          ATerm f_39 = NULL,g_39 = NULL;
          t = term_k_72;
          g_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_72, r_73);
          t = j_16(g_39, r_73, t);
          f_39 = t;
          t = SSL_perror(f_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_15 (ATerm i_67, ATerm h_67, ATerm t)
{
  ATerm w_73 = NULL,z_73 = NULL;
  z_73 = t;
  {
    ATerm l_72 = t;
    int m_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_74 = NULL,b_74 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_60);
        b_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_67, (ATerm) ATinsert(ATempty, term_y_60));
        t = z_15(h_67, b_74, t);
        t = filemode_0_0(t);
        a_74 = t;
        t = SSL_S_ISDIR(a_74);
        t = z_73;
        LocalPopChoice(m_72);
        {
          ATerm f_74 = NULL,h_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_o_72), i_67);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          f_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_74), term_p_72), h_67);
          h_74 = t;
          t = SSL_concat_strings(h_74);
        }
      }
    else
      {
        t = l_72;
        t = h_67;
      }
  }
  w_73 = t;
  t = SSL_copy(i_67, w_73);
  return(t);
}
static ATerm m_15 (ATerm n_62, ATerm t)
{
  t = SSL_hashtable_keys(n_62);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL;
  static ATerm v_27 (ATerm t);
  static ATerm v_27 (ATerm t)
  {
    ATerm k_74 = NULL,l_74 = NULL;
    k_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_74), k_74);
    t = d_16(not_null(i_74), k_74, t);
    l_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_74, l_74);
    return(t);
  }
  if(((i_74 != NULL) && (i_74 != t)))
    _fail(t);
  else
    i_74 = t;
  t = lookup_table_0_1(i_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(j_74, t);
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
  t = term_v_72;
  return(t);
}
static ATerm t_75 (ATerm r_74, ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,a_75 = NULL;
  t = term_w_72;
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_74);
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_72, (ATerm) ATmakeAppl(sym_Tool_1, r_74));
  t = d_16(x_74, a_75, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_72 = ATgetFirst((ATermList) t);
      if(match_cons(x_72, sym__2))
        {
          ATerm z_72 = ATgetArgument(x_72, 0);
          w_74 = ATgetArgument(x_72, 1);
        }
      else
        _fail(t);
      {
        ATerm y_72 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_74;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_v_72;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_w_72;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_28, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_a_73;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_75 = NULL,c_75 = NULL,e_75 = NULL;
      t = if_verbose5_1_0(w_27, t);
      t = xtc_load_0_0(t);
      e_75 = t;
      if(match_cons(t, sym__2))
        {
          b_75 = ATgetArgument(t, 0);
          c_75 = ATgetArgument(t, 1);
          {
            ATerm d_73 = t;
            int e_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_75 = NULL,j_75 = NULL,m_75 = NULL;
                t = term_w_72;
                j_75 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_75);
                m_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_72, (ATerm) ATmakeAppl(sym_Tool_1, b_75));
                t = d_16(j_75, m_75, t);
                {
                  static ATerm y_27 (ATerm t);
                  static ATerm y_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_75 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_75 != NULL) && (i_75 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_27, t);
                }
                t = not_null(i_75);
                LocalPopChoice(e_73);
              }
            else
              {
                t = d_73;
                t = t_75(e_75, t);
              }
          }
        }
      else
        {
          t = t_75(e_75, t);
        }
      t = if_verbose5_1_0(z_27, t);
      LocalPopChoice(c_73);
    }
  else
    {
      t = b_73;
      {
        ATerm s_75 = NULL,k_39 = NULL,l_39 = NULL;
        s_75 = t;
        t = term_l_38;
        k_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_73), s_75), term_f_73);
        l_39 = t;
        t = SSL_printnl(k_39, l_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_73), s_75), term_f_73);
        t = if_verbose5_1_0(b_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  t = term_a_38;
  x_75 = t;
  t = term_h_73;
  y_75 = t;
  t = term_i_73;
  t = d_16(x_75, y_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_73), term_c_71), term_v_73), term_u_73), term_t_73), term_c_71), term_s_73), term_q_73), term_p_73), term_o_73), term_n_73), term_m_73), term_l_73), term_k_73), term_j_73);
  return(t);
}
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_76 = NULL;
  t = term_z_39;
  t = j_0(t);
  a_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_74), a_76), term_g_74), term_c_71), term_e_74), term_c_71), term_d_74), term_c_74), term_c_71), term_y_73);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL;
  c_76 = t;
  {
    ATerm n_74 = t;
    int o_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_74 = ATgetFirst((ATermList) t);
                ATerm q_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_76;
          }
        LocalPopChoice(o_74);
      }
    else
      {
        t = n_74;
        t = (ATerm) ATinsert(ATempty, c_76);
      }
  }
  d_76 = t;
  t = term_c_40;
  e_76 = t;
  t = SSL_printnl(e_76, d_76);
  t = c_76;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_76 = ATgetFirst((ATermList) t);
      m_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_76 = NULL,s_76 = NULL;
        static ATerm d_28 (ATerm t);
        static ATerm d_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_76)), not_null(s_76));
          return(t);
        }
        t = m_76;
        t = h_0(t);
        if(((r_76 != NULL) && (r_76 != t)))
          _fail(t);
        else
          r_76 = t;
        t = l_76;
        t = f_0(t);
        if(((s_76 != NULL) && (s_76 != t)))
          _fail(t);
        else
          s_76 = t;
        t = m_76;
        t = reverse_acc_2_0(f_0, d_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_39;
      t = h_0(t);
    }
  return(t);
}
static ATerm e_28 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,v_18 = NULL;
  f_77 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_77);
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_77);
  v_18 = t;
  t = SSLsetAnnotations(v_18, d_77);
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_77), term_s_74);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL;
  ATerm t_74 = t;
  int u_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_77 = NULL,c_77 = NULL;
      t = term_a_38;
      a_77 = t;
      t = term_h_73;
      c_77 = t;
      t = term_i_73;
      t = d_16(a_77, c_77, t);
      LocalPopChoice(u_74);
    }
  else
    {
      t = t_74;
      t = fetch_1_0(e_28, t);
    }
  {
    ATerm v_74 = t;
    int y_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_135(t);
        t = echo_0_0(t);
        LocalPopChoice(y_74);
      }
    else
      {
        t = v_74;
      }
  }
  t = term_z_74;
  t = echo_0_0(t);
  t = term_d_75;
  y_76 = t;
  t = term_f_75;
  z_76 = t;
  t = term_g_75;
  t = d_16(y_76, z_76, t);
  t = reverse_acc_2_0(_id, f_28, t);
  t = map_1_0(g_28, t);
  {
    ATerm h_75 = t;
    int k_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_77 = NULL;
        t = l_135(t);
        m_77 = t;
        t = (ATerm) ATinsert(CheckATermList(m_77), term_c_71);
        t = echo_0_0(t);
        LocalPopChoice(k_75);
      }
    else
      {
        t = h_75;
      }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  static ATerm i_28 (ATerm t);
  static ATerm j_28 (ATerm t);
  static ATerm i_28 (ATerm t)
  {
    static ATerm k_28 (ATerm t);
    static ATerm k_28 (ATerm t)
    {
      t = not_null(q_77);
      return(t);
    }
    t = short_description_1_0(k_28, t);
    return(t);
  }
  static ATerm j_28 (ATerm t)
  {
    static ATerm l_28 (ATerm t);
    static ATerm l_28 (ATerm t)
    {
      t = not_null(q_77);
      return(t);
    }
    t = long_description_1_0(l_28, t);
    return(t);
  }
  r_77 = t;
  {
    ATerm l_75 = t;
    int n_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_77 = NULL,t_77 = NULL;
        t = term_a_38;
        s_77 = t;
        t = term_h_73;
        t_77 = t;
        t = term_i_73;
        t = d_16(s_77, t_77, t);
        if(((q_77 != NULL) && (q_77 != t)))
          _fail(t);
        else
          q_77 = t;
        LocalPopChoice(n_75);
      }
    else
      {
        t = l_75;
        {
          static ATerm h_28 (ATerm t);
          static ATerm h_28 (ATerm t)
          {
            ATerm u_77 = NULL,w_77 = NULL,y_77 = NULL,x_18 = NULL;
            y_77 = t;
            if(match_cons(t, sym_Program_1))
              {
                w_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_77);
            u_77 = t;
            t = w_77;
            if(((q_77 != NULL) && (q_77 != t)))
              _fail(t);
            else
              q_77 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, w_77);
            x_18 = t;
            t = SSLsetAnnotations(x_18, u_77);
            return(t);
          }
          t = fetch_1_0(h_28, t);
        }
      }
  }
  t = r_77;
  t = default_system_usage_2_0(i_28, j_28, t);
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,c_78 = NULL;
  if(match_cons(t, sym__2))
    {
      z_77 = ATgetArgument(t, 0);
      a_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_71), a_78), term_p_75), z_77), term_o_75);
  c_78 = t;
  t = SSL_concat_strings(c_78);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(n_28, t);
  return(t);
}
static ATerm n_15 (ATerm k_37, ATerm i_302, ATerm t)
{
  static ATerm q_28 (ATerm t);
  static ATerm q_28 (ATerm t)
  {
    if((k_37 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = i_302;
  t = fetch_1_0(q_28, t);
  return(t);
}
static ATerm t_28 (ATerm t)
{
  ATerm h_78 = NULL;
  h_78 = t;
  if(match_string(t, "--warning"))
    {
      t = h_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = h_78;
    }
  return(t);
}
static ATerm w_28 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_57), term_a_57), term_x_56), term_u_56);
  t = Display_possible_warnings_0_0(t);
  x_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_79), term_u_75), term_r_75), term_q_75);
  y_79 = t;
  t = SSL_concat_strings(y_79);
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm m_78 = NULL,o_78 = NULL;
  o_78 = t;
  t = SSL_explode_term(o_78);
  if(match_cons(t, sym__2))
    {
      ATerm v_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_75 = ATgetArgument(t, 1);
        if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
          {
            m_78 = ATgetFirst((ATermList) w_75);
            {
              ATerm z_75 = (ATerm) ATgetNext((ATermList) w_75);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_78;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  z_78 = t;
  t = SSL_explode_term(z_78);
  if(match_cons(t, sym__2))
    {
      ATerm b_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_76 = ATgetArgument(t, 1);
        if(((ATgetType(f_76) == AT_LIST) && !(ATisEmpty(f_76))))
          {
            y_78 = ATgetFirst((ATermList) f_76);
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
  t = y_78;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL;
  static ATerm v_28 (ATerm t);
  static ATerm v_28 (ATerm t)
  {
    if(((g_78 != NULL) && (g_78 != t)))
      _fail(t);
    else
      g_78 = t;
    {
      ATerm h_76 = t;
      int i_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_78;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = g_78;
          LocalPopChoice(i_76);
          {
            ATerm j_78 = NULL,l_78 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_57), term_a_57), term_x_56), term_u_56);
            t = map_1_0(x_28, t);
            j_78 = t;
            t = term_q_56;
            l_78 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_q_56, j_78);
            t = i_16(l_78, j_78, t);
          }
        }
      else
        {
          t = h_76;
          t = g_78;
          {
            ATerm j_76 = t;
            int k_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(g_78);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm n_76 = ATgetFirst((ATermList) t);
                    if(((ATgetType(n_76) != AT_INT) || (ATgetInt((ATermInt) n_76) != 110)))
                      _fail(t);
                    {
                      ATerm o_76 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(o_76) == AT_LIST) && !(ATisEmpty(o_76))))
                        {
                          ATerm p_76 = ATgetFirst((ATermList) o_76);
                          if(((ATgetType(p_76) != AT_INT) || (ATgetInt((ATermInt) p_76) != 111)))
                            _fail(t);
                          {
                            ATerm q_76 = (ATerm) ATgetNext((ATermList) o_76);
                            if(((ATgetType(q_76) == AT_LIST) && !(ATisEmpty(q_76))))
                              {
                                ATerm t_76 = ATgetFirst((ATermList) q_76);
                                if(((ATgetType(t_76) != AT_INT) || (ATgetInt((ATermInt) t_76) != 45)))
                                  _fail(t);
                                if(((e_78 != NULL) && (e_78 != (ATerm) ATgetNext((ATermList) q_76))))
                                  _fail((ATerm) ATgetNext((ATermList) q_76));
                                else
                                  e_78 = (ATerm) ATgetNext((ATermList) q_76);
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
                t = g_78;
                LocalPopChoice(k_76);
                {
                  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,v_78 = NULL;
                  t = SSL_implode_string(e_78);
                  if(((f_78 != NULL) && (f_78 != t)))
                    _fail(t);
                  else
                    f_78 = t;
                  t = term_a_38;
                  r_78 = t;
                  t = term_q_56;
                  v_78 = t;
                  t = term_r_56;
                  t = d_16(r_78, v_78, t);
                  {
                    static ATerm d_29 (ATerm t);
                    static ATerm d_29 (ATerm t)
                    {
                      if((f_78 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(d_29, t);
                  }
                  p_78 = t;
                  t = term_q_56;
                  q_78 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_q_56, p_78);
                  t = i_16(q_78, p_78, t);
                }
              }
            else
              {
                t = j_76;
                t = g_78;
                {
                  ATerm u_76 = t;
                  int v_76 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_78 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_57), term_a_57), term_x_56), term_u_56);
                      t = map_1_0(e_29, t);
                      x_78 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_78, x_78);
                      t = n_15(g_78, x_78, t);
                      t = g_78;
                      LocalPopChoice(v_76);
                      {
                        ATerm a_79 = NULL,b_79 = NULL;
                        t = term_q_56;
                        a_79 = t;
                        t = (ATerm) ATinsert(ATempty, g_78);
                        b_79 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_q_56, (ATerm) ATinsert(ATempty, g_78));
                        t = y_15(a_79, b_79, t);
                      }
                    }
                  else
                    {
                      t = u_76;
                      {
                        ATerm c_79 = NULL,h_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL;
                        t = term_a_38;
                        u_79 = t;
                        t = term_h_73;
                        v_79 = t;
                        t = term_i_73;
                        t = d_16(u_79, v_79, t);
                        c_79 = t;
                        t = term_l_38;
                        s_79 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_76), g_78), term_w_76), c_79);
                        t_79 = t;
                        t = SSL_printnl(s_79, t_79);
                        t = term_e_39;
                        h_79 = t;
                        t = SSL_exit(h_79);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_76), g_78), term_w_76), c_79);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(t_28, v_28, w_28, t);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm d_80 = NULL;
  d_80 = t;
  if(match_string(t, "-S"))
    {
      t = d_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_80;
    }
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL;
  t = term_b_38;
  f_80 = t;
  t = term_u_37;
  g_80 = t;
  t = term_b_77;
  t = i_16(f_80, g_80, t);
  t = term_g_77;
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = term_h_77;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_29 (ATerm t)
{
  ATerm i_80 = NULL,k_80 = NULL,l_80 = NULL;
  i_80 = t;
  t = SSL_string_to_int(i_80);
  k_80 = t;
  t = term_b_38;
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_38, k_80);
  t = i_16(l_80, k_80, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_80);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  t = term_i_77;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL;
  t = term_j_77;
  m_80 = t;
  t = term_z_39;
  n_80 = t;
  t = term_k_77;
  t = i_16(m_80, n_80, t);
  t = term_n_77;
  return(t);
}
static ATerm x_29 (ATerm t)
{
  t = term_o_77;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_77 = t;
  int v_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_29, h_29, i_29, t);
      LocalPopChoice(v_77);
    }
  else
    {
      t = p_77;
      {
        ATerm x_77 = t;
        int b_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_29, k_29, o_29, t);
            LocalPopChoice(b_78);
          }
        else
          {
            t = x_77;
            t = Option_3_0(p_29, s_29, x_29, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,v_80 = NULL;
  q_80 = t;
  t = term_a_38;
  t_80 = t;
  t = term_z_38;
  v_80 = t;
  t = term_b_39;
  t = d_16(t_80, v_80, t);
  {
    static ATerm b_30 (ATerm t);
    static ATerm b_30 (ATerm t)
    {
      ATerm x_80 = NULL;
      x_80 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = q_80;
        }
      else
        {
          t = x_80;
        }
      return(t);
    }
    t = map_1_0(b_30, t);
  }
  r_80 = t;
  t = term_z_38;
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, r_80);
  t = i_16(s_80, r_80, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  {
    ATerm d_78 = t;
    int i_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
        t = term_a_38;
        l_81 = t;
        t = term_b_38;
        m_81 = t;
        t = term_c_38;
        t = d_16(l_81, m_81, t);
        k_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_81, term_m_47);
        t = geq_0_0(t);
        t = i_81;
        t = l_130(t);
        LocalPopChoice(i_78);
      }
    else
      {
        t = d_78;
        t = i_81;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  {
    ATerm k_78 = t;
    int n_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
        t = term_a_38;
        v_81 = t;
        t = term_b_38;
        w_81 = t;
        t = term_c_38;
        t = d_16(v_81, w_81, t);
        u_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_81, term_c_45);
        t = geq_0_0(t);
        t = r_81;
        t = k_130(t);
        LocalPopChoice(n_78);
      }
    else
      {
        t = k_78;
        t = r_81;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL;
  i_82 = t;
  if(match_cons(t, sym__2))
    {
      j_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_78 = t;
    int t_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_82;
        if((j_82 != t))
          {
            _fail(t);
          }
        t = i_82;
        LocalPopChoice(t_78);
      }
    else
      {
        t = s_78;
        t = (ATerm) ATmakeAppl(sym__2, j_82, k_82);
        {
          ATerm u_78 = t;
          int w_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_82, k_82);
              LocalPopChoice(w_78);
            }
          else
            {
              t = u_78;
              t = SSL_gtr(j_82, k_82);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_82, k_82);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm q_82 = NULL;
  q_82 = t;
  {
    ATerm d_79 = t;
    int e_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_82 = NULL,t_82 = NULL,w_82 = NULL;
        t = term_a_38;
        t_82 = t;
        t = term_b_38;
        w_82 = t;
        t = term_c_38;
        t = d_16(t_82, w_82, t);
        s_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_82, term_w_50);
        t = geq_0_0(t);
        t = q_82;
        t = m_130(t);
        LocalPopChoice(e_79);
      }
    else
      {
        t = d_79;
        t = q_82;
      }
  }
  return(t);
}
static ATerm q_15 (ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm v_42, ATerm u_42, ATerm t)
{
  t = z_118(t);
  {
    static ATerm g_30 (ATerm t);
    static ATerm g_30 (ATerm t)
    {
      ATerm z_82 = NULL;
      z_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_42, z_82);
      t = y_118(t);
      return(t);
    }
    t = fetch_1_0(g_30, t);
  }
  t = u_42;
  return(t);
}
static ATerm r_15 (ATerm v_118 (ATerm), ATerm r_42, ATerm q_42, ATerm t)
{
  static ATerm a_84 (ATerm t);
  static ATerm a_84 (ATerm t)
  {
    ATerm o_83 = NULL,t_83 = NULL,w_83 = NULL;
    o_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_83 = ATgetFirst((ATermList) t);
            w_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_79 = t;
          int g_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_83;
              {
                static ATerm h_30 (ATerm t);
                static ATerm h_30 (ATerm t)
                {
                  t = q_42;
                  return(t);
                }
                t = q_15(v_118, h_30, t_83, w_83, t);
              }
              t = a_84(t);
              LocalPopChoice(g_79);
            }
          else
            {
              t = f_79;
              {
                ATerm y_40 = NULL,f_41 = NULL,d_19 = NULL;
                t = SSLgetAnnotations(o_83);
                y_40 = t;
                t = w_83;
                t = a_84(t);
                f_41 = t;
                t = (ATerm) ATinsert(CheckATermList(f_41), t_83);
                d_19 = t;
                t = SSLsetAnnotations(d_19, y_40);
              }
            }
        }
      }
    return(t);
  }
  t = r_42;
  t = a_84(t);
  return(t);
}
static ATerm i_30 (ATerm t)
{
  ATerm n_84 = NULL;
  if(match_cons(t, sym__2))
    {
      n_84 = ATgetArgument(t, 0);
      if((n_84 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm l_58, ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_58, m_58);
  {
    ATerm i_79 = t;
    int j_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_79 = ATgetArgument(t, 0);
            ATerm l_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_58, m_58);
        t = d_16(l_58, m_58, t);
        LocalPopChoice(j_79);
      }
    else
      {
        t = i_79;
        t = (ATerm) ATempty;
      }
  }
  f_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_84, n_58);
  t = r_15(i_30, f_84, n_58, t);
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_58, m_58, e_84);
  t = lookup_table_0_1(l_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(m_58, e_84, g_84, t);
  t = d_84;
  return(t);
}
ATerm map_1_0 (ATerm k_114 (ATerm), ATerm t)
{
  static ATerm e_85 (ATerm t);
  static ATerm e_85 (ATerm t)
  {
    ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
    b_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_85;
      }
    else
      {
        ATerm a_42 = NULL,n_42 = NULL,s_42 = NULL,g_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_85 = ATgetFirst((ATermList) t);
            d_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_85);
        a_42 = t;
        t = c_85;
        t = k_114(t);
        n_42 = t;
        t = d_85;
        t = e_85(t);
        s_42 = t;
        t = (ATerm) ATinsert(CheckATermList(s_42), n_42);
        g_19 = t;
        t = SSLsetAnnotations(g_19, a_42);
      }
    return(t);
  }
  t = e_85(t);
  return(t);
}
static ATerm t_15 (ATerm y_127 (ATerm), ATerm v_58, ATerm u_58, ATerm t)
{
  static ATerm m_30 (ATerm t);
  static ATerm m_30 (ATerm t)
  {
    ATerm g_85 = NULL,h_85 = NULL;
    if(match_cons(t, sym__2))
      {
        g_85 = ATgetArgument(t, 0);
        h_85 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_58, g_85, h_85);
    t = y_127(t);
    return(t);
  }
  t = u_58;
  t = map_1_0(m_30, t);
  return(t);
}
static ATerm x_85 (ATerm r_85, ATerm t)
{
  t = SSL_fclose(r_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  v_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_85 = ATgetArgument(t, 0);
      {
        ATerm m_79 = t;
        int n_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_85);
            LocalPopChoice(n_79);
          }
        else
          {
            t = m_79;
            t = x_85(v_85, t);
          }
      }
    }
  else
    {
      t = x_85(v_85, t);
    }
  return(t);
}
static ATerm u_15 (ATerm o_36, ATerm t)
{
  t = SSL_read_term_from_stream(o_36);
  return(t);
}
static ATerm v_15 (ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm y_85 = NULL;
  t = SSL_fopen(j_52, k_52);
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_85 = NULL;
  t = SSL_stdin_stream();
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_86 = NULL;
  t = SSL_stdout_stream();
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_86);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_86 = NULL;
  t = SSL_stderr_stream();
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_86);
  return(t);
}
static ATerm u_87 (ATerm l_86, ATerm t)
{
  ATerm m_86 = NULL;
  t = SSL_explode_term(l_86);
  if(match_cons(t, sym__2))
    {
      ATerm o_79 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_79) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_79 = ATgetArgument(t, 1);
        if(((ATgetType(p_79) == AT_LIST) && !(ATisEmpty(p_79))))
          {
            m_86 = ATgetFirst((ATermList) p_79);
            {
              ATerm q_79 = (ATerm) ATgetNext((ATermList) p_79);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_86;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_86;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_86;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_86;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_87 (ATerm q_86, ATerm r_86, ATerm s_86, ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,c_87 = NULL,l_19 = NULL;
  t = SSLgetAnnotations(s_86);
  v_86 = t;
  t = q_86;
  if(match_cons(t, sym_Path_1))
    {
      c_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_87, r_86);
  l_19 = t;
  t = SSLsetAnnotations(l_19, v_86);
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(t_86, u_86, t);
  return(t);
}
static ATerm w_87 (ATerm f_87, ATerm g_87, ATerm h_87, ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,n_87 = NULL,m_19 = NULL;
  t = SSLgetAnnotations(h_87);
  k_87 = t;
  t = SSL_is_string(f_87);
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_87, g_87);
  m_19 = t;
  t = SSLsetAnnotations(m_19, k_87);
  if(match_cons(t, sym__2))
    {
      i_87 = ATgetArgument(t, 0);
      j_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(i_87, j_87, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  if(match_cons(t, sym__2))
    {
      s_87 = ATgetArgument(t, 0);
      t_87 = ATgetArgument(t, 1);
      {
        ATerm r_79 = t;
        int w_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_87(r_87, t);
            LocalPopChoice(w_79);
          }
        else
          {
            t = r_79;
            {
              ATerm z_79 = t;
              int a_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_87(s_87, t_87, r_87, t);
                  LocalPopChoice(a_80);
                }
              else
                {
                  t = z_79;
                  t = w_87(s_87, t_87, r_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_87(r_87, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,f_88 = NULL;
  f_88 = t;
  {
    ATerm b_80 = t;
    int c_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_88, term_e_80);
        t = w_15(t);
        LocalPopChoice(c_80);
      }
    else
      {
        t = b_80;
        {
          ATerm u_43 = NULL,v_43 = NULL;
          t = term_h_80;
          v_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_80, f_88);
          t = j_16(v_43, f_88, t);
          u_43 = t;
          t = SSL_perror(u_43);
          _fail(t);
        }
      }
  }
  z_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_15(a_88, t);
  y_87 = t;
  t = z_87;
  t = fclose_0_0(t);
  t = y_87;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_j_80;
  return(t);
}
static ATerm r_30 (ATerm t)
{
  t = term_o_80;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_88 = NULL,l_88 = NULL;
      i_88 = t;
      t = (ATerm) ATinsert(ATempty, term_w_80);
      l_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_88, (ATerm) ATinsert(ATempty, term_w_80));
      t = z_15(i_88, l_88, t);
      LocalPopChoice(u_80);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_80;
      {
        ATerm y_80 = t;
        int z_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_81 = t;
            if((PushChoice() == 0))
              {
                ATerm m_88 = NULL,p_88 = NULL;
                m_88 = t;
                t = (ATerm) ATinsert(ATempty, term_y_60);
                p_88 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_88, (ATerm) ATinsert(ATempty, term_y_60));
                t = z_15(m_88, p_88, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_81;
              }
            t = debug_1_0(p_30, t);
            LocalPopChoice(z_80);
          }
        else
          {
            t = y_80;
            t = debug_1_0(r_30, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = debug_1_0(w_30, t);
  return(t);
}
static ATerm w_30 (ATerm t)
{
  t = term_b_81;
  return(t);
}
static ATerm x_30 (ATerm t)
{
  t = debug_1_0(y_30, t);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_c_81;
  return(t);
}
static ATerm z_30 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  t = term_l_38;
  j_89 = t;
  t = (ATerm) ATinsert(ATempty, term_d_81);
  k_89 = t;
  t = SSL_printnl(j_89, k_89);
  t = i_89;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,p_89 = NULL;
  if(match_cons(t, sym__3))
    {
      l_89 = ATgetArgument(t, 0);
      m_89 = ATgetArgument(t, 1);
      p_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_15(l_89, m_89, p_89, t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
  r_89 = t;
  t = term_l_38;
  s_89 = t;
  t = (ATerm) ATinsert(ATempty, term_e_81);
  t_89 = t;
  t = SSL_printnl(s_89, t_89);
  t = r_89;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,z_89 = NULL;
  w_89 = t;
  t = term_l_38;
  x_89 = t;
  t = (ATerm) ATinsert(ATempty, term_d_81);
  z_89 = t;
  t = SSL_printnl(x_89, z_89);
  t = w_89;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,x_88 = NULL,y_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
  q_88 = t;
  t = if_verbose5_1_0(u_30, t);
  {
    ATerm f_81 = t;
    if((PushChoice() == 0))
      {
        ATerm g_89 = NULL,h_89 = NULL;
        t = term_w_72;
        g_89 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, q_88);
        h_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_72, (ATerm) ATmakeAppl(sym_Imported_1, q_88));
        t = d_16(g_89, h_89, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_81;
      }
  }
  s_88 = t;
  t = term_w_72;
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_72, term_g_81, (ATerm) ATinsert(ATempty, q_88));
  t = lookup_table_0_1(b_89, t);
  f_89 = t;
  t = term_g_81;
  c_89 = t;
  t = (ATerm) ATinsert(ATempty, q_88);
  d_89 = t;
  t = f_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(c_89, d_89, e_89, t);
  t = s_88;
  t = if_verbose4_1_0(x_30, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(z_30, t);
  r_88 = t;
  t = term_w_72;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_72, r_88);
  t = t_15(a_31, a_89, r_88, t);
  t = if_verbose6_1_0(c_31, t);
  t = term_w_72;
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_72, (ATerm)ATmakeAppl(sym_Imported_1, q_88), (ATerm) ATempty);
  t = lookup_table_0_1(t_88, t);
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, q_88);
  u_88 = t;
  t = (ATerm) ATempty;
  v_88 = t;
  t = y_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(u_88, v_88, x_88, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_72, (ATerm)ATmakeAppl(sym_Imported_1, q_88), (ATerm) ATempty);
  t = if_verbose4_1_0(d_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm o_90 = NULL,q_90 = NULL,r_90 = NULL;
  o_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_90;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_90 = ATgetFirst((ATermList) t);
          r_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_81 = t;
        int j_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_44 = NULL,l_44 = NULL,m_44 = NULL,r_19 = NULL;
            t = SSLgetAnnotations(o_90);
            f_44 = t;
            t = q_90;
            t = n_122(t);
            l_44 = t;
            t = r_90;
            t = filter_1_0(n_122, t);
            m_44 = t;
            t = (ATerm) ATinsert(CheckATermList(m_44), l_44);
            r_19 = t;
            t = SSLsetAnnotations(r_19, f_44);
            LocalPopChoice(j_81);
          }
        else
          {
            t = h_81;
            t = r_90;
            t = filter_1_0(n_122, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  static ATerm y_90 (ATerm t);
  static ATerm y_90 (ATerm t)
  {
    ATerm n_81 = t;
    int o_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_106(t);
        t = y_90(t);
        LocalPopChoice(o_81);
      }
    else
      {
        t = n_81;
        t = z_106(t);
      }
    return(t);
  }
  t = y_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_81 = t;
  int q_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_91 = NULL,c_91 = NULL;
      t = term_a_38;
      b_91 = t;
      t = term_s_81;
      c_91 = t;
      t = term_t_81;
      t = d_16(b_91, c_91, t);
      LocalPopChoice(q_81);
    }
  else
    {
      t = p_81;
      {
        ATerm x_81 = t;
        int y_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_91 = NULL;
            t = term_z_81;
            d_91 = t;
            t = SSL_getenv(d_91);
            LocalPopChoice(y_81);
          }
        else
          {
            t = x_81;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm e_31 (ATerm t)
{
  t = debug_1_0(f_31, t);
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_a_82;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm m_91 = NULL,p_91 = NULL;
  t = term_w_72;
  m_91 = t;
  t = term_b_82;
  p_91 = t;
  t = term_c_82;
  t = d_16(m_91, p_91, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_82 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_82;
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
  t = term_e_82;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_91 = NULL;
  t = if_verbose5_1_0(e_31, t);
  f_91 = t;
  {
    ATerm f_82 = t;
    int g_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_91 = NULL,j_91 = NULL;
        t = term_w_72;
        i_91 = t;
        t = term_g_81;
        j_91 = t;
        t = term_h_82;
        t = d_16(i_91, j_91, t);
        LocalPopChoice(g_82);
      }
    else
      {
        t = f_82;
        {
          ATerm k_91 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_91 = t;
          t = repeat_2_0(g_31, _id, t);
          t = k_91;
        }
      }
  }
  t = f_91;
  t = if_verbose5_1_0(h_31, t);
  return(t);
}
static ATerm q_92 (ATerm u_91, ATerm t)
{
  ATerm w_91 = NULL,a_92 = NULL,b_92 = NULL;
  t = term_w_72;
  a_92 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_91);
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_72, (ATerm) ATmakeAppl(sym_Tool_1, u_91));
  t = d_16(a_92, b_92, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_82 = ATgetFirst((ATermList) t);
      if(match_cons(l_82, sym__2))
        {
          ATerm n_82 = ATgetArgument(l_82, 0);
          w_91 = ATgetArgument(l_82, 1);
        }
      else
        _fail(t);
      {
        ATerm m_82 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_91;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(m_31, t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_v_72;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
  t = xtc_load_0_0(t);
  g_92 = t;
  if(match_cons(t, sym__2))
    {
      e_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
      {
        ATerm o_82 = t;
        int p_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_92 = NULL,o_92 = NULL,p_92 = NULL;
            t = term_w_72;
            o_92 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, e_92);
            p_92 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_w_72, (ATerm) ATmakeAppl(sym_Tool_1, e_92));
            t = d_16(o_92, p_92, t);
            {
              static ATerm k_31 (ATerm t);
              static ATerm k_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((f_92 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((l_92 != NULL) && (l_92 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_92 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_31, t);
            }
            t = not_null(l_92);
            LocalPopChoice(p_82);
          }
        else
          {
            t = o_82;
            t = q_92(g_92, t);
          }
      }
    }
  else
    {
      t = q_92(g_92, t);
    }
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,d_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_93 = NULL,i_93 = NULL,j_93 = NULL;
      t = term_z_39;
      t = p_0(t);
      f_93 = t;
      t = term_d_75;
      i_93 = t;
      t = term_f_75;
      j_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_75, term_f_75, f_93);
      t = e_16(i_93, j_93, f_93, t);
      _fail(t);
    }
  else
    {
      ATerm s_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_92 = ATgetFirst((ATermList) t);
          x_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_92 = ATgetFirst((ATermList) t);
          d_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_92;
      t = m_0(t);
      t = y_92;
      t = o_0(t);
      s_93 = t;
      t = (ATerm) ATinsert(CheckATermList(d_93), s_93);
    }
  return(t);
}
static ATerm x_15 (ATerm i_71, ATerm j_71, ATerm t)
{
  ATerm r_82 = t;
  int u_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_93 = NULL,u_93 = NULL,w_93 = NULL;
      t = term_a_38;
      w_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_38, i_71);
      t = d_16(w_93, i_71, t);
      t = term_a_38;
      t_93 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_38, i_71);
      t = lookup_table_0_1(t_93, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          u_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16(i_71, u_93, t);
      t = (ATerm) ATmakeAppl(sym__2, term_a_38, i_71);
      LocalPopChoice(u_82);
    }
  else
    {
      t = r_82;
      t = (ATerm) ATmakeAppl(sym__2, i_71, j_71);
      t = i_16(i_71, j_71, t);
    }
  return(t);
}
static ATerm y_15 (ATerm l_71, ATerm k_71, ATerm t)
{
  ATerm x_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL;
  t = l_71;
  {
    ATerm v_82 = t;
    int x_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_94 = NULL;
        t = term_a_38;
        e_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_38, l_71);
        t = d_16(e_94, l_71, t);
        LocalPopChoice(x_82);
      }
    else
      {
        t = v_82;
        t = (ATerm) ATempty;
      }
  }
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_71, a_94);
  t = conc_0_0(t);
  x_93 = t;
  t = term_a_38;
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, l_71, x_93);
  t = lookup_table_0_1(b_94, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(l_71, x_93, c_94, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, l_71, x_93);
  return(t);
}
static ATerm z_15 (ATerm x_51, ATerm y_51, ATerm t)
{
  t = SSL_access(x_51, y_51);
  return(t);
}
ATerm at_end_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  static ATerm z_94 (ATerm t);
  static ATerm z_94 (ATerm t)
  {
    ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
    y_94 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_94 = ATgetFirst((ATermList) t);
        x_94 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_44 = NULL,f_45 = NULL,u_19 = NULL;
          t = SSLgetAnnotations(y_94);
          y_44 = t;
          t = x_94;
          t = z_94(t);
          f_45 = t;
          t = (ATerm) ATinsert(CheckATermList(f_45), w_94);
          u_19 = t;
          t = SSLsetAnnotations(u_19, y_44);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_94;
        t = b_115(t);
      }
    return(t);
  }
  t = z_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  g_94 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_94;
    }
  else
    {
      static ATerm n_31 (ATerm t);
      static ATerm n_31 (ATerm t)
      {
        t = not_null(i_94);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_94 = ATgetFirst((ATermList) t);
          if(((i_94 != NULL) && (i_94 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_94;
      t = at_end_1_0(n_31, t);
    }
  return(t);
}
static ATerm n_95 (ATerm d_95, ATerm t)
{
  ATerm e_95 = NULL;
  t = SSL_explode_term(d_95);
  if(match_cons(t, sym__2))
    {
      ATerm y_82 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_82) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_95;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
  i_95 = t;
  if(match_cons(t, sym__2))
    {
      g_95 = ATgetArgument(t, 0);
      h_95 = ATgetArgument(t, 1);
      {
        ATerm a_83 = t;
        int b_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_31 (ATerm t);
            static ATerm o_31 (ATerm t)
            {
              t = h_95;
              return(t);
            }
            t = g_95;
            t = at_end_1_0(o_31, t);
            LocalPopChoice(b_83);
          }
        else
          {
            t = a_83;
            t = n_95(i_95, t);
          }
      }
    }
  else
    {
      t = n_95(i_95, t);
    }
  return(t);
}
static ATerm a_16 (ATerm m_71, ATerm n_71, ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL,s_95 = NULL,t_95 = NULL;
  t = m_71;
  {
    ATerm c_83 = t;
    int d_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_95 = NULL;
        t = term_a_38;
        v_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_38, m_71);
        t = d_16(v_95, m_71, t);
        LocalPopChoice(d_83);
      }
    else
      {
        t = c_83;
        t = (ATerm) ATempty;
      }
  }
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_95, n_71);
  t = conc_0_0(t);
  o_95 = t;
  t = term_a_38;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, m_71, o_95);
  t = lookup_table_0_1(s_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(m_71, o_95, t_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, m_71, o_95);
  return(t);
}
static ATerm p_31 (ATerm t)
{
  ATerm z_95 = NULL;
  z_95 = t;
  if(match_string(t, "-o"))
    {
      t = z_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_95;
    }
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL;
  a_96 = t;
  t = term_w_38;
  b_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_38, a_96);
  t = i_16(b_96, a_96, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_96);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  t = term_e_83;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_31, q_31, r_31, t);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  ATerm d_96 = NULL;
  d_96 = t;
  if(match_string(t, "-i"))
    {
      t = d_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_96;
    }
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm e_96 = NULL,h_96 = NULL;
  e_96 = t;
  t = term_i_56;
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_56, e_96);
  t = i_16(h_96, e_96, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_96);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  t = term_f_83;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_31, x_31, y_31, t);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm r_96 = NULL;
  r_96 = t;
  if(match_string(t, "-I"))
    {
      t = r_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = r_96;
    }
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  t = term_h_63;
  t_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_96), term_h_63);
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_63, (ATerm) ATinsert(ATinsert(ATempty, s_96), term_h_63));
  t = a_16(t_96, u_96, t);
  t = term_z_39;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_g_83;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  ATerm x_96 = NULL;
  x_96 = t;
  if(match_string(t, "--main"))
    {
      t = x_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = x_96;
    }
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL;
  y_96 = t;
  t = term_h_61;
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_61, y_96);
  t = i_16(z_96, y_96, t);
  t = term_z_39;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_h_83;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  ATerm a_97 = NULL;
  a_97 = t;
  if(match_string(t, "--library"))
    {
      t = a_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = a_97;
    }
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL;
  t = term_n_40;
  b_97 = t;
  t = term_z_39;
  c_97 = t;
  t = term_i_83;
  t = i_16(b_97, c_97, t);
  t = term_z_39;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_j_83;
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
  ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL;
  d_97 = t;
  t = term_j_40;
  e_97 = t;
  t = (ATerm) ATinsert(ATempty, d_97);
  f_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATempty, d_97));
  t = a_16(e_97, f_97, t);
  t = term_z_39;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_k_83;
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
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL;
  g_97 = t;
  t = term_j_39;
  h_97 = t;
  t = (ATerm) ATinsert(ATempty, g_97);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_39, (ATerm) ATinsert(ATempty, g_97));
  t = y_15(h_97, i_97, t);
  t = term_z_39;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_l_83;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  j_97 = t;
  t = term_m_83;
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_83, j_97);
  t = j_16(o_97, j_97, t);
  k_97 = t;
  t = term_n_39;
  m_97 = t;
  t = (ATerm) ATinsert(ATempty, k_97);
  n_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATempty, k_97));
  t = y_15(m_97, n_97, t);
  t = term_z_39;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_n_83;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_32 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL,r_97 = NULL,u_97 = NULL,v_97 = NULL;
  p_97 = t;
  t = term_p_83;
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_83, p_97);
  t = j_16(v_97, p_97, t);
  q_97 = t;
  t = term_z_38;
  r_97 = t;
  t = (ATerm) ATinsert(ATempty, q_97);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATempty, q_97));
  t = y_15(r_97, u_97, t);
  t = term_z_39;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_q_83;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,f_98 = NULL;
  y_97 = t;
  t = term_r_83;
  f_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_83, y_97);
  t = j_16(f_98, y_97, t);
  z_97 = t;
  t = term_z_38;
  a_98 = t;
  t = (ATerm) ATinsert(ATempty, z_97);
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATempty, z_97));
  t = y_15(a_98, b_98, t);
  t = term_z_39;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  t = term_s_83;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_33 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL,l_98 = NULL,o_98 = NULL;
  g_98 = t;
  {
    ATerm u_83 = t;
    int v_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_98 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_60);
        p_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_98, (ATerm) ATinsert(ATempty, term_y_60));
        t = z_15(g_98, p_98, t);
        LocalPopChoice(v_83);
      }
    else
      {
        t = u_83;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_83), g_98), term_x_83);
        {
          ATerm z_83 = t;
          int b_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_45 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_83), g_98), term_x_83);
              p_45 = t;
              t = SSL_concat_strings(p_45);
              t = xtc_find_0_0(t);
              LocalPopChoice(b_84);
            }
          else
            {
              t = z_83;
              {
                ATerm w_98 = NULL;
                t = term_e_39;
                w_98 = t;
                t = SSL_exit(w_98);
              }
            }
        }
      }
  }
  h_98 = t;
  t = term_z_38;
  l_98 = t;
  t = (ATerm) ATinsert(ATempty, h_98);
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATempty, h_98));
  t = y_15(l_98, o_98, t);
  t = term_z_39;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  t = term_c_84;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_33 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,i_99 = NULL,k_99 = NULL;
  b_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_84), b_99), term_h_84);
  k_99 = t;
  t = SSL_concat_strings(k_99);
  c_99 = t;
  t = term_n_39;
  d_99 = t;
  t = (ATerm) ATinsert(ATempty, c_99);
  i_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_39, (ATerm) ATinsert(ATempty, c_99));
  t = y_15(d_99, i_99, t);
  t = term_z_39;
  return(t);
}
static ATerm q_33 (ATerm t)
{
  t = term_j_84;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_33 (ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL;
  t = term_s_39;
  l_99 = t;
  t = term_z_39;
  m_99 = t;
  t = term_k_84;
  t = i_16(l_99, m_99, t);
  t = term_z_39;
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = term_l_84;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL;
  t = term_z_62;
  n_99 = t;
  t = term_z_39;
  o_99 = t;
  t = term_m_84;
  t = i_16(n_99, o_99, t);
  t = term_z_39;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  t = term_o_84;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_34 (ATerm t)
{
  ATerm p_99 = NULL,s_99 = NULL;
  t = term_i_57;
  p_99 = t;
  t = term_z_39;
  s_99 = t;
  t = term_p_84;
  t = i_16(p_99, s_99, t);
  t = term_z_39;
  return(t);
}
static ATerm i_34 (ATerm t)
{
  t = term_q_84;
  return(t);
}
static ATerm l_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_34 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,w_99 = NULL;
  t_99 = t;
  t = SSL_string_to_int(t_99);
  u_99 = t;
  t = term_z_43;
  w_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_43, u_99);
  t = i_16(w_99, u_99, t);
  t = term_z_39;
  return(t);
}
static ATerm r_34 (ATerm t)
{
  t = term_r_84;
  return(t);
}
static ATerm u_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm x_99 = NULL,c_100 = NULL,d_100 = NULL;
  x_99 = t;
  t = SSL_string_to_int(x_99);
  c_100 = t;
  t = term_d_44;
  d_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_44, c_100);
  t = i_16(d_100, c_100, t);
  t = term_z_39;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  t = term_s_84;
  return(t);
}
static ATerm z_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_35 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL;
  t = term_r_45;
  e_100 = t;
  t = term_z_39;
  f_100 = t;
  t = term_t_84;
  t = x_15(e_100, f_100, t);
  t = term_z_39;
  return(t);
}
static ATerm b_35 (ATerm t)
{
  t = term_u_84;
  return(t);
}
static ATerm d_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_35 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL;
  g_100 = t;
  if(match_string(t, "old"))
    {
      t = g_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = g_100;
    }
  t = term_z_58;
  h_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_58, g_100);
  t = i_16(h_100, g_100, t);
  t = term_z_39;
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = term_v_84;
  return(t);
}
static ATerm h_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_35 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_z_39;
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = term_w_84;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_35 (ATerm t)
{
  t = term_x_84;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_z_39;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_y_84;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  ATerm o_100 = NULL;
  o_100 = t;
  if(match_string(t, "-h"))
    {
      t = o_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = o_100;
    }
  return(t);
}
static ATerm o_35 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL;
  t = term_z_84;
  p_100 = t;
  t = term_z_39;
  q_100 = t;
  t = term_a_85;
  t = i_16(p_100, q_100, t);
  t = term_z_39;
  return(t);
}
static ATerm p_35 (ATerm t)
{
  t = term_f_85;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_35 (ATerm t)
{
  ATerm v_100 = NULL,x_100 = NULL;
  t = term_i_85;
  v_100 = t;
  t = term_z_39;
  x_100 = t;
  t = term_j_85;
  t = i_16(v_100, x_100, t);
  t = term_z_39;
  return(t);
}
static ATerm s_35 (ATerm t)
{
  t = term_k_85;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  ATerm y_100 = NULL;
  y_100 = t;
  if(match_string(t, "-v"))
    {
      t = y_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = y_100;
    }
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL;
  t = term_l_85;
  z_100 = t;
  t = term_z_39;
  a_101 = t;
  t = term_m_85;
  t = i_16(z_100, a_101, t);
  t = term_z_39;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_n_85;
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
  ATerm b_101 = NULL,c_101 = NULL,f_101 = NULL;
  b_101 = t;
  t = term_t_58;
  c_101 = t;
  t = term_e_39;
  f_101 = t;
  t = term_o_85;
  t = i_16(c_101, f_101, t);
  t = b_101;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  t = term_t_58;
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
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL;
  g_101 = t;
  t = term_x_58;
  h_101 = t;
  t = term_u_37;
  i_101 = t;
  t = term_s_85;
  t = i_16(h_101, i_101, t);
  t = g_101;
  return(t);
}
static ATerm c_36 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm d_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_36 (ATerm t)
{
  ATerm j_101 = NULL,q_101 = NULL;
  t = term_p_63;
  j_101 = t;
  t = term_z_39;
  q_101 = t;
  t = term_t_85;
  t = i_16(j_101, q_101, t);
  t = term_z_39;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_w_85;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm c_86 = t;
  int d_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_86);
    }
  else
    {
      t = c_86;
      {
        ATerm e_86 = t;
        int f_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_86);
          }
        else
          {
            t = e_86;
            {
              ATerm g_86 = t;
              int h_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(a_32, b_32, c_32, t);
                  LocalPopChoice(h_86);
                }
              else
                {
                  t = g_86;
                  {
                    ATerm i_86 = t;
                    int j_86 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(e_32, f_32, g_32, t);
                        LocalPopChoice(j_86);
                      }
                    else
                      {
                        t = i_86;
                        {
                          ATerm k_86 = t;
                          int n_86 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(h_32, i_32, k_32, t);
                              LocalPopChoice(n_86);
                            }
                          else
                            {
                              t = k_86;
                              {
                                ATerm o_86 = t;
                                int p_86 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_32, m_32, o_32, t);
                                    LocalPopChoice(p_86);
                                  }
                                else
                                  {
                                    t = o_86;
                                    {
                                      ATerm w_86 = t;
                                      int x_86 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_32, q_32, r_32, t);
                                          LocalPopChoice(x_86);
                                        }
                                      else
                                        {
                                          t = w_86;
                                          {
                                            ATerm y_86 = t;
                                            int z_86 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(s_32, t_32, u_32, t);
                                                LocalPopChoice(z_86);
                                              }
                                            else
                                              {
                                                t = y_86;
                                                {
                                                  ATerm a_87 = t;
                                                  int b_87 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(v_32, y_32, z_32, t);
                                                      LocalPopChoice(b_87);
                                                    }
                                                  else
                                                    {
                                                      t = a_87;
                                                      {
                                                        ATerm d_87 = t;
                                                        int e_87 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(a_33, b_33, d_33, t);
                                                            LocalPopChoice(e_87);
                                                          }
                                                        else
                                                          {
                                                            t = d_87;
                                                            {
                                                              ATerm l_87 = t;
                                                              int m_87 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(f_33, h_33, k_33, t);
                                                                  LocalPopChoice(m_87);
                                                                }
                                                              else
                                                                {
                                                                  t = l_87;
                                                                  {
                                                                    ATerm o_87 = t;
                                                                    int p_87 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(l_33, o_33, q_33, t);
                                                                        LocalPopChoice(p_87);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = o_87;
                                                                        {
                                                                          ATerm q_87 = t;
                                                                          int x_87 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(r_33, t_33, w_33, t);
                                                                              LocalPopChoice(x_87);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_87;
                                                                              {
                                                                                ATerm b_88 = t;
                                                                                int c_88 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(a_34, c_34, d_34, t);
                                                                                    LocalPopChoice(c_88);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_88;
                                                                                    {
                                                                                      ATerm d_88 = t;
                                                                                      int e_88 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(e_34, h_34, i_34, t);
                                                                                          LocalPopChoice(e_88);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_88;
                                                                                          {
                                                                                            ATerm g_88 = t;
                                                                                            int h_88 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(l_34, m_34, r_34, t);
                                                                                                LocalPopChoice(h_88);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_88;
                                                                                                {
                                                                                                  ATerm j_88 = t;
                                                                                                  int k_88 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(u_34, v_34, x_34, t);
                                                                                                      LocalPopChoice(k_88);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_88;
                                                                                                      {
                                                                                                        ATerm n_88 = t;
                                                                                                        int o_88 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(z_34, a_35, b_35, t);
                                                                                                            LocalPopChoice(o_88);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_88;
                                                                                                            {
                                                                                                              ATerm w_88 = t;
                                                                                                              int z_88 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(d_35, e_35, f_35, t);
                                                                                                                  LocalPopChoice(z_88);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = w_88;
                                                                                                                  {
                                                                                                                    ATerm n_89 = t;
                                                                                                                    int o_89 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(h_35, i_35, j_35, t);
                                                                                                                        LocalPopChoice(o_89);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = n_89;
                                                                                                                        {
                                                                                                                          ATerm q_89 = t;
                                                                                                                          int u_89 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm l_100 = NULL;
                                                                                                                              l_100 = t;
                                                                                                                              t = term_x_84;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = l_100;
                                                                                                                              t = Option_3_0(k_35, l_35, m_35, t);
                                                                                                                              LocalPopChoice(u_89);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_89;
                                                                                                                              {
                                                                                                                                ATerm v_89 = t;
                                                                                                                                int y_89 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(y_89);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_89;
                                                                                                                                    {
                                                                                                                                      ATerm a_90 = t;
                                                                                                                                      int b_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(n_35, o_35, p_35, t);
                                                                                                                                          LocalPopChoice(b_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_90;
                                                                                                                                          {
                                                                                                                                            ATerm c_90 = t;
                                                                                                                                            int d_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(q_35, r_35, s_35, t);
                                                                                                                                                LocalPopChoice(d_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = c_90;
                                                                                                                                                {
                                                                                                                                                  ATerm e_90 = t;
                                                                                                                                                  int f_90 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(t_35, v_35, w_35, t);
                                                                                                                                                      LocalPopChoice(f_90);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = e_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm g_90 = t;
                                                                                                                                                        int h_90 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
                                                                                                                                                            LocalPopChoice(h_90);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = g_90;
                                                                                                                                                            {
                                                                                                                                                              ATerm i_90 = t;
                                                                                                                                                              int j_90 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(x_35, y_35, z_35, t);
                                                                                                                                                                  LocalPopChoice(j_90);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = i_90;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm k_90 = t;
                                                                                                                                                                    int l_90 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(a_36, b_36, c_36, t);
                                                                                                                                                                        LocalPopChoice(l_90);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = k_90;
                                                                                                                                                                        t = Option_3_0(d_36, f_36, h_36, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm b_16 (ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm w_101 = NULL;
  t = SSL_hashtable_remove(m_62, l_62);
  w_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_101);
  return(t);
}
static ATerm c_16 (ATerm q_62, ATerm t)
{
  ATerm y_101 = NULL;
  t = SSL_hashtable_destroy(q_62);
  y_101 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_101);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL,e_102 = NULL,g_102 = NULL;
  z_101 = t;
  t = table_hashtable_0_0(t);
  a_102 = t;
  t = lookup_table_0_1(z_101, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(g_102, t);
  t = a_102;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_16(z_101, e_102, t);
  t = z_101;
  return(t);
}
ATerm fetch_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  static ATerm q_103 (ATerm t);
  static ATerm q_103 (ATerm t)
  {
    ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
    l_103 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_103 = ATgetFirst((ATermList) t);
        n_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_90 = t;
      int n_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_46 = NULL,l_46 = NULL,w_19 = NULL;
          t = SSLgetAnnotations(l_103);
          c_46 = t;
          t = m_103;
          t = u_114(t);
          l_46 = t;
          t = (ATerm) ATinsert(CheckATermList(n_103), l_46);
          w_19 = t;
          t = SSLsetAnnotations(w_19, c_46);
          LocalPopChoice(n_90);
        }
      else
        {
          t = m_90;
          {
            ATerm t_46 = NULL,y_46 = NULL,c_20 = NULL;
            t = SSLgetAnnotations(l_103);
            t_46 = t;
            t = n_103;
            t = q_103(t);
            y_46 = t;
            t = (ATerm) ATinsert(CheckATermList(y_46), m_103);
            c_20 = t;
            t = SSLsetAnnotations(c_20, t_46);
          }
        }
    }
    return(t);
  }
  t = q_103(t);
  return(t);
}
static ATerm k_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_36 (ATerm t)
{
  ATerm t_103 = NULL,u_103 = NULL;
  t = term_p_90;
  t_103 = t;
  t = term_z_39;
  u_103 = t;
  t = term_s_90;
  t = i_16(t_103, u_103, t);
  return(t);
}
static ATerm m_36 (ATerm t)
{
  t = term_t_90;
  return(t);
}
static ATerm n_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_36 (ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL;
  t = term_p_90;
  z_103 = t;
  t = term_z_39;
  a_104 = t;
  t = term_s_90;
  t = i_16(z_103, a_104, t);
  t = term_l_85;
  x_103 = t;
  t = term_z_39;
  y_103 = t;
  t = term_m_85;
  t = i_16(x_103, y_103, t);
  t = term_u_90;
  return(t);
}
static ATerm r_36 (ATerm t)
{
  t = term_v_90;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_90 = t;
  int x_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_36, l_36, m_36, t);
      LocalPopChoice(x_90);
    }
  else
    {
      t = w_90;
      t = Option_3_0(n_36, p_36, r_36, t);
    }
  return(t);
}
static ATerm e_16 (ATerm o_57, ATerm p_57, ATerm n_57, ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL;
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
  {
    ATerm z_90 = t;
    int a_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_91 = ATgetArgument(t, 0);
            ATerm g_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
        t = d_16(o_57, p_57, t);
        LocalPopChoice(a_91);
      }
    else
      {
        t = z_90;
        t = (ATerm) ATempty;
      }
  }
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_57, p_57, (ATerm) ATinsert(CheckATermList(d_104), n_57));
  t = lookup_table_0_1(o_57, t);
  g_104 = t;
  t = (ATerm) ATinsert(CheckATermList(d_104), n_57);
  e_104 = t;
  t = g_104;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(p_57, e_104, f_104, t);
  t = c_104;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_104 = NULL,w_104 = NULL,y_104 = NULL;
      t = term_z_39;
      t = e_0(t);
      t_104 = t;
      t = term_d_75;
      w_104 = t;
      t = term_f_75;
      y_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_75, term_f_75, t_104);
      t = e_16(w_104, y_104, t_104, t);
      _fail(t);
    }
  else
    {
      ATerm m_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_104 = ATgetFirst((ATermList) t);
          s_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_104;
      t = b_0(t);
      t = term_z_39;
      t = c_0(t);
      m_105 = t;
      t = (ATerm) ATinsert(CheckATermList(s_104), m_105);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm q_105 = NULL,u_105 = NULL,x_105 = NULL,y_105 = NULL,z_105 = NULL,p_106 = NULL,f_20 = NULL;
  p_106 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_105 = ATgetFirst((ATermList) t);
      x_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_106);
  q_105 = t;
  t = u_105;
  t = p_85(t);
  y_105 = t;
  t = x_105;
  t = q_85(t);
  z_105 = t;
  t = (ATerm) ATinsert(CheckATermList(z_105), y_105);
  f_20 = t;
  t = SSLsetAnnotations(f_20, q_105);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_135 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,r_107 = NULL,s_107 = NULL,v_107 = NULL,y_107 = NULL,z_107 = NULL,o_20 = NULL;
  e_107 = t;
  {
    ATerm h_91 = t;
    int l_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_91;
        t = f_135(t);
        LocalPopChoice(l_91);
      }
    else
      {
        t = h_91;
      }
  }
  t = e_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_107 = ATgetFirst((ATermList) t);
      v_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_107);
  r_107 = t;
  t = term_h_73;
  z_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_73, s_107);
  t = i_16(z_107, s_107, t);
  t = v_107;
  {
    static ATerm n_108 (ATerm t);
    static ATerm n_108 (ATerm t)
    {
      ATerm o_91 = t;
      int q_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_91 = t;
          int s_91 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_108 = NULL;
              c_108 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_108;
              LocalPopChoice(s_91);
            }
          else
            {
              t = r_91;
              t = f_135(t);
              t = Cons_2_0(_id, n_108, t);
            }
          LocalPopChoice(q_91);
        }
      else
        {
          t = o_91;
          {
            ATerm f_108 = NULL,i_108 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_108 = ATgetFirst((ATermList) t);
                i_108 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_108), (ATerm) ATmakeAppl(sym_Undefined_1, f_108));
          }
        }
      return(t);
    }
    t = n_108(t);
  }
  y_107 = t;
  t = (ATerm) ATinsert(CheckATermList(y_107), (ATerm) ATmakeAppl(sym_Program_1, s_107));
  o_20 = t;
  t = SSLsetAnnotations(o_20, r_107);
  return(t);
}
static ATerm w_36 (ATerm t)
{
  ATerm n_109 = NULL;
  n_109 = t;
  if(match_string(t, "--help"))
    {
      t = n_109;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_109;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_109;
        }
    }
  return(t);
}
static ATerm b_37 (ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL;
  t = term_z_84;
  o_109 = t;
  t = term_z_39;
  p_109 = t;
  t = term_a_85;
  t = i_16(o_109, p_109, t);
  t = term_t_91;
  return(t);
}
static ATerm d_37 (ATerm t)
{
  t = term_v_91;
  return(t);
}
static ATerm e_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm e_135 (ATerm), ATerm t)
{
  ATerm v_108 = NULL,x_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,k_109 = NULL;
  z_108 = t;
  t = term_d_75;
  a_109 = t;
  t = term_x_91;
  t = lookup_table_0_1(a_109, t);
  k_109 = t;
  t = term_f_75;
  b_109 = t;
  t = (ATerm) ATempty;
  c_109 = t;
  t = k_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(b_109, c_109, d_109, t);
  t = z_108;
  {
    static ATerm t_36 (ATerm t);
    static ATerm t_36 (ATerm t)
    {
      ATerm y_91 = t;
      int z_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_135(t);
          LocalPopChoice(z_91);
        }
      else
        {
          t = y_91;
          {
            ATerm c_92 = t;
            int d_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_36, b_37, d_37, t);
                LocalPopChoice(d_92);
              }
            else
              {
                t = c_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_36, t);
  }
  {
    ATerm h_92 = t;
    int i_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_110 = NULL;
        g_110 = t;
        {
          ATerm j_92 = t;
          int k_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_47 = NULL;
              t = g_110;
              {
                ATerm m_92 = t;
                int n_92 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_47 = NULL,u_47 = NULL;
                    t = term_a_38;
                    t_47 = t;
                    t = term_z_84;
                    u_47 = t;
                    t = term_r_92;
                    t = d_16(t_47, u_47, t);
                    LocalPopChoice(n_92);
                  }
                else
                  {
                    t = m_92;
                    t = fetch_1_0(e_37, t);
                  }
              }
              t = g_110;
              t = d_135(t);
              t = term_u_37;
              s_47 = t;
              t = SSL_exit(s_47);
              LocalPopChoice(k_92);
            }
          else
            {
              t = j_92;
              {
                ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
                t = term_a_38;
                j_48 = t;
                t = term_p_90;
                k_48 = t;
                t = term_s_92;
                t = d_16(j_48, k_48, t);
                t = g_110;
                t = e_135(t);
                t = term_u_37;
                i_48 = t;
                t = SSL_exit(i_48);
              }
            }
        }
        LocalPopChoice(i_92);
      }
    else
      {
        t = h_92;
        {
          ATerm t_92 = t;
          int u_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
              static ATerm f_37 (ATerm t);
              static ATerm f_37 (ATerm t)
              {
                ATerm k_110 = NULL,l_110 = NULL,m_110 = NULL,q_20 = NULL;
                m_110 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_110 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_110);
                k_110 = t;
                t = l_110;
                if(((v_108 != NULL) && (v_108 != t)))
                  _fail(t);
                else
                  v_108 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_110);
                q_20 = t;
                t = SSLsetAnnotations(q_20, k_110);
                return(t);
              }
              t = fetch_1_0(f_37, t);
              t = term_l_38;
              i_110 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_108)), term_v_92);
              j_110 = t;
              t = SSL_printnl(i_110, j_110);
              t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_108)), term_v_92));
              t = d_135(t);
              t = term_e_39;
              h_110 = t;
              t = SSL_exit(h_110);
              LocalPopChoice(u_92);
            }
          else
            {
              t = t_92;
            }
        }
      }
  }
  x_108 = t;
  t = term_d_75;
  t = table_destroy_0_0(t);
  t = x_108;
  return(t);
}
static ATerm g_16 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm t)
{
  ATerm r_110 = NULL;
  t = SSL_hashtable_put(i_62, g_62, h_62);
  r_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_110);
  return(t);
}
static ATerm h_16 (ATerm j_62, ATerm k_62, ATerm t)
{
  t = SSL_hashtable_get(k_62, j_62);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_62, ATerm p_62, ATerm t)
{
  ATerm s_110 = NULL;
  t = SSL_hashtable_create(o_62, p_62);
  s_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_110);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,x_110 = NULL,b_111 = NULL,c_111 = NULL;
  t_110 = t;
  t = term_z_92;
  b_111 = t;
  t = term_a_93;
  c_111 = t;
  t = t_110;
  t = new_hashtable_0_2(b_111, c_111, t);
  u_110 = t;
  t = t_110;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(t_110, u_110, x_110, t);
  t = t_110;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_111 = NULL;
  t = SSL_table_hashtable();
  d_111 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_111);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_59, ATerm t)
{
  ATerm y_111 = NULL;
  t = table_hashtable_0_0(t);
  y_111 = t;
  {
    ATerm b_93 = t;
    int c_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_48 = NULL;
        t = y_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_16(a_59, o_48, t);
        LocalPopChoice(c_93);
      }
    else
      {
        t = b_93;
        {
          ATerm z_48 = NULL;
          t = a_59;
          t = table_create_0_0(t);
          t = y_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_16(a_59, z_48, t);
        }
      }
  }
  return(t);
}
static ATerm i_16 (ATerm f_71, ATerm g_71, ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL;
  t = term_a_38;
  e_112 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, f_71, g_71);
  t = lookup_table_0_1(e_112, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(f_71, g_71, f_112, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_38, f_71, g_71);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL;
  q_112 = t;
  t = SSL_explode_string(q_112);
  {
    ATerm e_93 = t;
    int g_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_113 (ATerm t);
        static ATerm q_113 (ATerm t)
        {
          ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL;
          l_113 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_113 = ATgetFirst((ATermList) t);
              n_113 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_93 = t;
            int k_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_49 = NULL,l_49 = NULL,z_20 = NULL;
                t = SSLgetAnnotations(l_113);
                f_49 = t;
                t = n_113;
                t = q_113(t);
                l_49 = t;
                t = (ATerm) ATinsert(CheckATermList(l_49), m_113);
                z_20 = t;
                t = SSLsetAnnotations(z_20, f_49);
                LocalPopChoice(k_93);
              }
            else
              {
                t = h_93;
                {
                  ATerm b_50 = NULL,a_21 = NULL;
                  t = SSLgetAnnotations(l_113);
                  b_50 = t;
                  t = m_113;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, m_113);
                  a_21 = t;
                  t = SSLsetAnnotations(a_21, b_50);
                }
              }
          }
          return(t);
        }
        t = q_113(t);
        LocalPopChoice(g_93);
      }
    else
      {
        t = e_93;
        t = (ATerm) ATempty;
      }
  }
  p_112 = t;
  t = SSL_implode_string(p_112);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm j_16 (ATerm l_50, ATerm m_50, ATerm t)
{
  t = SSL_strcat(l_50, m_50);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,x_113 = NULL,y_113 = NULL,s_114 = NULL,y_114 = NULL,o_115 = NULL,p_115 = NULL,r_115 = NULL,s_115 = NULL,w_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,f_116 = NULL,g_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,n_116 = NULL,o_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,v_116 = NULL,w_116 = NULL,z_116 = NULL,a_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL;
  u_113 = t;
  t = term_w_70;
  j_117 = t;
  t = term_l_93;
  k_117 = t;
  t = term_m_93;
  t = i_16(j_117, k_117, t);
  t = term_b_38;
  h_117 = t;
  t = term_e_39;
  i_117 = t;
  t = term_n_93;
  t = i_16(h_117, i_117, t);
  t = term_z_43;
  e_117 = t;
  t = term_u_37;
  f_117 = t;
  t = term_o_93;
  t = i_16(e_117, f_117, t);
  t = term_d_44;
  a_117 = t;
  t = term_w_50;
  d_117 = t;
  t = term_p_93;
  t = i_16(a_117, d_117, t);
  t = term_h_63;
  w_116 = t;
  t = (ATerm) ATempty;
  z_116 = t;
  t = term_q_93;
  t = i_16(w_116, z_116, t);
  t = term_j_40;
  t_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_93), term_r_93);
  v_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_40, (ATerm) ATinsert(ATinsert(ATempty, term_v_93), term_r_93));
  t = i_16(t_116, v_116, t);
  t = term_y_93;
  t = xtc_find_path_0_0(t);
  w_115 = t;
  t = term_z_93;
  s_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_115, term_z_93);
  t = j_16(w_115, s_116, t);
  y_114 = t;
  t = term_y_93;
  t = xtc_find_path_0_0(t);
  s_115 = t;
  t = term_z_93;
  r_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_115, term_z_93);
  t = j_16(s_115, r_116, t);
  o_115 = t;
  t = term_d_94;
  t = xtc_find_path_0_0(t);
  r_115 = t;
  t = term_z_93;
  o_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_115, term_z_93);
  t = j_16(r_115, o_116, t);
  p_115 = t;
  t = term_j_39;
  m_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_115), term_h_63), o_115), term_h_63), y_114), term_h_63);
  n_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_115), term_h_63), o_115), term_h_63), y_114), term_h_63));
  t = i_16(m_116, n_116, t);
  t = term_y_93;
  t = xtc_find_path_0_0(t);
  s_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_94), s_114), term_p_83);
  l_116 = t;
  t = SSL_concat_strings(l_116);
  v_113 = t;
  t = term_d_94;
  t = xtc_find_path_0_0(t);
  y_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_94), y_113), term_p_83);
  k_116 = t;
  t = SSL_concat_strings(k_116);
  x_113 = t;
  t = term_z_38;
  g_116 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), x_113), term_m_94), term_l_94), term_k_94), v_113);
  j_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), x_113), term_m_94), term_l_94), term_k_94), v_113));
  t = i_16(g_116, j_116, t);
  t = term_n_39;
  b_116 = t;
  t = (ATerm) ATempty;
  f_116 = t;
  t = term_p_94;
  t = i_16(b_116, f_116, t);
  t = term_z_58;
  z_115 = t;
  t = term_q_94;
  a_116 = t;
  t = term_r_94;
  t = i_16(z_115, a_116, t);
  t = u_113;
  return(t);
}
static ATerm h_37 (ATerm t)
{
  ATerm o_118 = NULL,p_118 = NULL,q_118 = NULL;
  o_118 = t;
  t = term_a_38;
  p_118 = t;
  t = term_i_56;
  q_118 = t;
  t = term_s_94;
  t = d_16(p_118, q_118, t);
  t = debug_1_0(j_37, t);
  t = o_118;
  return(t);
}
static ATerm j_37 (ATerm t)
{
  t = term_t_94;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm u_94 = t;
    int v_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,v_117 = NULL,w_117 = NULL;
        t = term_a_38;
        v_117 = t;
        t = term_i_85;
        w_117 = t;
        t = term_a_95;
        t = d_16(v_117, w_117, t);
        t = term_b_95;
        t = xtc_find_0_0(t);
        r_117 = t;
        t = term_c_40;
        t_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_117, term_c_40);
        t = l_15(r_117, t_117, t);
        t = term_u_37;
        s_117 = t;
        t = SSL_exit(s_117);
        LocalPopChoice(v_94);
      }
    else
      {
        t = u_94;
      }
  }
  {
    ATerm c_95 = t;
    int f_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_118 = NULL,d_118 = NULL,e_118 = NULL;
        t = term_a_38;
        d_118 = t;
        t = term_l_85;
        e_118 = t;
        t = term_j_95;
        t = d_16(d_118, e_118, t);
        t = strc_version_0_0(t);
        t = term_u_37;
        b_118 = t;
        t = SSL_exit(b_118);
        LocalPopChoice(f_95);
      }
    else
      {
        t = c_95;
      }
  }
  {
    ATerm k_95 = t;
    int l_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_118 = NULL,j_118 = NULL,k_118 = NULL;
        h_118 = t;
        t = term_a_38;
        j_118 = t;
        t = term_i_56;
        k_118 = t;
        t = term_s_94;
        t = d_16(j_118, k_118, t);
        t = h_118;
        LocalPopChoice(l_95);
      }
    else
      {
        t = k_95;
        {
          ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL;
          t = term_l_38;
          m_118 = t;
          t = (ATerm) ATinsert(ATempty, term_m_95);
          n_118 = t;
          t = SSL_printnl(m_118, n_118);
          t = term_e_39;
          l_118 = t;
          t = SSL_exit(l_118);
          t = (ATerm) ATinsert(ATempty, term_m_95);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(h_37, t);
  return(t);
}
static ATerm l_37 (ATerm t)
{
  t = if_verbose1_1_0(n_37, t);
  return(t);
}
static ATerm m_37 (ATerm t)
{
  t = xtc_temp_files_1_0(p_37, t);
  return(t);
}
static ATerm n_37 (ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL,u_118 = NULL;
  s_118 = t;
  t = term_l_38;
  t_118 = t;
  t = (ATerm) ATinsert(CheckATermList(s_118), term_q_95);
  u_118 = t;
  t = SSL_printnl(t_118, u_118);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(s_118), term_q_95));
  return(t);
}
static ATerm p_37 (ATerm t)
{
  ATerm r_95 = t;
  int u_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_118 = NULL,a_119 = NULL,b_119 = NULL;
      t = term_a_38;
      a_119 = t;
      t = term_i_56;
      b_119 = t;
      t = term_s_94;
      t = d_16(a_119, b_119, t);
      x_118 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_118);
      LocalPopChoice(u_95);
    }
  else
    {
      t = r_95;
      t = term_w_60;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm t_37 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL;
  t = run_time_0_0(t);
  c_119 = t;
  t = term_l_38;
  d_119 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_95), c_119), term_w_95);
  e_119 = t;
  t = SSL_printnl(d_119, e_119);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_95), c_119), term_w_95));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm y_95 = t;
  int c_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_118 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(l_37, m_37, t);
      t = if_verbose2_1_0(t_37, t);
      t = term_u_37;
      r_118 = t;
      t = SSL_exit(r_118);
      LocalPopChoice(c_96);
    }
  else
    {
      t = y_95;
      {
        ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL;
        t = run_time_0_0(t);
        f_119 = t;
        t = term_l_38;
        h_119 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_95), f_119), term_f_96);
        i_119 = t;
        t = SSL_printnl(h_119, i_119);
        t = term_e_39;
        g_119 = t;
        t = SSL_exit(g_119);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
