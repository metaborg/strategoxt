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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_i_96;
ATerm term_b_96;
ATerm term_a_96;
ATerm term_x_95;
ATerm term_w_95;
ATerm term_t_95;
ATerm term_j_95;
ATerm term_d_95;
ATerm term_v_94;
ATerm term_u_94;
ATerm term_t_94;
ATerm term_o_94;
ATerm term_n_94;
ATerm term_m_94;
ATerm term_l_94;
ATerm term_k_94;
ATerm term_j_94;
ATerm term_i_94;
ATerm term_h_94;
ATerm term_g_94;
ATerm term_f_94;
ATerm term_e_94;
ATerm term_d_94;
ATerm term_c_94;
ATerm term_b_94;
ATerm term_a_94;
ATerm term_z_93;
ATerm term_y_93;
ATerm term_x_93;
ATerm term_q_93;
ATerm term_p_93;
ATerm term_o_93;
ATerm term_i_93;
ATerm term_e_93;
ATerm term_l_92;
ATerm term_k_92;
ATerm term_j_92;
ATerm term_x_91;
ATerm term_j_91;
ATerm term_h_91;
ATerm term_g_91;
ATerm term_f_91;
ATerm term_b_91;
ATerm term_y_86;
ATerm term_x_86;
ATerm term_w_86;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_t_86;
ATerm term_s_86;
ATerm term_o_86;
ATerm term_i_86;
ATerm term_g_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_c_86;
ATerm term_b_86;
ATerm term_u_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_q_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_k_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_s_84;
ATerm term_m_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_b_84;
ATerm term_a_84;
ATerm term_x_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_t_82;
ATerm term_p_82;
ATerm term_m_82;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_e_82;
ATerm term_d_82;
ATerm term_w_81;
ATerm term_u_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_q_81;
ATerm term_j_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_z_80;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_z_78;
ATerm term_x_78;
ATerm term_t_78;
ATerm term_q_78;
ATerm term_o_78;
ATerm term_n_78;
ATerm term_m_78;
ATerm term_l_78;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_w_75;
ATerm term_u_75;
ATerm term_q_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_h_75;
ATerm term_f_75;
ATerm term_y_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_e_74;
ATerm term_c_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_s_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_l_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_s_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_b_72;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_q_70;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_t_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_c_68;
ATerm term_b_68;
ATerm term_a_68;
ATerm term_o_67;
ATerm term_m_67;
ATerm term_i_67;
ATerm term_h_67;
ATerm term_g_67;
ATerm term_e_67;
ATerm term_d_67;
ATerm term_c_67;
ATerm term_z_66;
ATerm term_y_66;
ATerm term_m_66;
ATerm term_g_65;
ATerm term_s_64;
ATerm term_m_64;
ATerm term_k_64;
ATerm term_q_63;
ATerm term_o_63;
ATerm term_l_63;
ATerm term_d_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_l_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_d_62;
ATerm term_q_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_b_61;
ATerm term_z_60;
ATerm term_x_60;
ATerm term_u_60;
ATerm term_t_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_f_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_q_59;
ATerm term_z_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_s_58;
ATerm term_q_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_u_57;
ATerm term_s_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_l_57;
ATerm term_y_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_b_56;
ATerm term_v_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_b_55;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
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
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_l_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_r_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_d_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_f_47;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_q_45;
ATerm term_o_45;
ATerm term_k_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_x_44;
ATerm term_t_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_j_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_a_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_q_41;
ATerm term_e_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_v_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_x_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_x_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_z_37;
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
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
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
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
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
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_l_43);
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
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
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
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
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
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(5);
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
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
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
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_51, term_d_51, term_e_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_k_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_o_51, term_p_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_u_51, term_v_51);
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
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_54, term_e_54, term_h_54);
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
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_k_47, term_t_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_54, term_x_54, term_b_55);
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_55, term_g_55, term_h_55);
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
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(sym__2, term_t_56, term_u_56);
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym__2, term_y_56, term_l_57);
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_s_57);
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_q_58);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_x_58);
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
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
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(sym__2, term_r_60, term_f_60);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_i_62);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_v_62);
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_l_63);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
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
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
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
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_e_73);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_h_75, term_i_75);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_m_78));
  term_m_78 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_z_37);
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_37);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(sym__2, term_x_78, term_t_39);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_d_82);
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(sym__2, term_h_72, term_k_82);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(sym__2, term_h_72, term_w_81);
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_t_39);
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_t_39);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(sym__2, term_i_62, term_t_39);
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_t_39);
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(sym__2, term_o_45, term_t_39);
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(sym__2, term_c_86, term_t_39);
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(sym__2, term_g_86, term_t_39);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(sym__2, term_s_86, term_t_39);
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym__2, term_q_58, term_d_39);
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(sym__2, term_v_58, term_z_37);
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym__2, term_l_63, term_t_39);
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_91));
  term_f_91 = (ATerm) ATmakeAppl(sym__2, term_b_91, term_t_39);
  ATprotect(&(term_g_91));
  term_g_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_91));
  term_j_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_91));
  term_x_91 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_92));
  term_j_92 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_92));
  term_k_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, (ATerm) ATempty);
  ATprotect(&(term_e_93));
  term_e_93 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_c_86);
  ATprotect(&(term_i_93));
  term_i_93 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_b_91);
  ATprotect(&(term_o_93));
  term_o_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_93));
  term_q_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeAppl(sym__2, term_i_38, term_d_39);
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_z_37);
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_d_51);
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(sym__2, term_v_62, (ATerm) ATempty);
  ATprotect(&(term_b_94));
  term_b_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_e_94));
  term_e_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_g_94));
  term_g_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_i_94));
  term_i_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib_opt", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_k_94));
  term_k_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego_opt", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_n_94));
  term_n_94 = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATempty);
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_o_94);
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_b_56);
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_d_95));
  term_d_95 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_g_86);
  ATprotect(&(term_j_95));
  term_j_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_t_95));
  term_t_95 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_s_86);
  ATprotect(&(term_w_95));
  term_w_95 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_x_95));
  term_x_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_96));
  term_a_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_b_96));
  term_b_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_96));
  term_i_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_140 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm t_14 (ATerm l_24, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm u_14 (ATerm j_24, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm v_14 (ATerm i_73, ATerm h_73, ATerm t);
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
ATerm if_keep1_1_0 (ATerm x_141 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm w_152 (ATerm), ATerm x_152 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm a_142 (ATerm), ATerm t);
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
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm j_14 (ATerm t);
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
static ATerm p_15 (ATerm t);
static ATerm g_16 (ATerm t);
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
static ATerm f_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm save_as_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm y_141 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm t);
static ATerm z_14 (ATerm e_78, ATerm f_78, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm i_142 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm s_152 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm x_23, ATerm y_23, ATerm t);
ATerm foldr_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t);
static ATerm h_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm o_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm b_142 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm c_142 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm z_141 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm w_14 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm x_14 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm y_14 (ATerm z_123 (ATerm), ATerm o_329, ATerm y_42, ATerm t);
static ATerm b_15 (ATerm y_112 (ATerm), ATerm w_24, ATerm u_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm p_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm l_151 (ATerm), ATerm t);
static ATerm t_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm d_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm x_140 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm j_135 (ATerm), ATerm t);
static ATerm l_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm c_15 (ATerm z_23, ATerm t);
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
static ATerm g_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
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
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm d_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm e_16 (ATerm q_65, ATerm r_65, ATerm t);
static ATerm d_15 (ATerm c_64, ATerm d_64, ATerm t);
ATerm end_scope_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm p_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm w_151 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm v_140 (ATerm), ATerm t);
static ATerm f_15 (ATerm g_62, ATerm h_62, ATerm t);
static ATerm h_15 (ATerm m_62, ATerm n_62, ATerm t);
static ATerm i_15 (ATerm z_70, ATerm b_71, ATerm d_71, ATerm f_71, ATerm a_71, ATerm c_71, ATerm e_71, ATerm g_71, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_123 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm s_124 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm f_134 (ATerm), ATerm t);
static ATerm v_27 (ATerm t);
static ATerm l_15 (ATerm d_55, ATerm t_478, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm m_15 (ATerm k_73, ATerm j_73, ATerm t);
static ATerm n_15 (ATerm p_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm o_74 (ATerm m_73, ATerm t);
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
ATerm default_system_usage_2_0 (ATerm y_145 (ATerm), ATerm z_145 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm s_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm o_15 (ATerm o_43, ATerm c_341, ATerm t);
static ATerm x_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm v_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_140 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_140 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm a_141 (ATerm), ATerm t);
static ATerm r_15 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm z_48, ATerm y_48, ATerm t);
static ATerm s_15 (ATerm q_128 (ATerm), ATerm v_48, ATerm u_48, ATerm t);
static ATerm n_30 (ATerm t);
static ATerm t_15 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t);
ATerm map_1_0 (ATerm h_124 (ATerm), ATerm t);
static ATerm u_15 (ATerm x_137 (ATerm), ATerm e_65, ATerm d_65, ATerm t);
static ATerm n_84 (ATerm h_84, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_15 (ATerm u_42, ATerm t);
static ATerm w_15 (ATerm n_58, ATerm o_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_86 (ATerm c_85, ATerm t);
static ATerm m_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t);
static ATerm n_86 (ATerm v_85, ATerm w_85, ATerm x_85, ATerm t);
static ATerm x_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_30 (ATerm t);
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
ATerm filter_1_0 (ATerm i_132 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm u_91 (ATerm w_90, ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_15 (ATerm k_77, ATerm l_77, ATerm t);
static ATerm z_15 (ATerm n_77, ATerm m_77, ATerm t);
static ATerm a_16 (ATerm b_58, ATerm c_58, ATerm t);
ATerm at_end_1_0 (ATerm w_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_95 (ATerm w_94, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_16 (ATerm o_77, ATerm p_77, ATerm t);
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
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm s_33 (ATerm t);
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
static ATerm e_36 (ATerm t);
static ATerm f_36 (ATerm t);
static ATerm h_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm c_16 (ATerm n_68, ATerm o_68, ATerm t);
static ATerm d_16 (ATerm s_68, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_124 (ATerm), ATerm t);
static ATerm i_36 (ATerm t);
static ATerm k_36 (ATerm t);
static ATerm l_36 (ATerm t);
static ATerm m_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm p_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm f_16 (ATerm x_63, ATerm y_63, ATerm w_63, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_145 (ATerm), ATerm t);
static ATerm t_36 (ATerm t);
static ATerm x_36 (ATerm t);
static ATerm b_37 (ATerm t);
static ATerm c_37 (ATerm t);
ATerm parse_options_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t);
static ATerm h_16 (ATerm i_68, ATerm j_68, ATerm k_68, ATerm t);
static ATerm i_16 (ATerm l_68, ATerm m_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_68, ATerm r_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm j_65, ATerm t);
static ATerm j_16 (ATerm h_77, ATerm i_77, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm k_16 (ATerm r_56, ATerm s_56, ATerm t);
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
ATerm foldr_2_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL,i_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = e_131(t);
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
      t = foldr_2_0(e_131, f_131, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_0, n_0);
      t = f_131(t);
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
  t = f_15(e_1, i_1, t);
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
ATerm if_verbose2_1_0 (ATerm w_140 (ATerm), ATerm t)
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
        t = e_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_k_38);
        t = geq_0_0(t);
        t = b_1;
        t = w_140(t);
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
static ATerm t_14 (ATerm l_24, ATerm t)
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
        t = e_16(z_1, c_2, t);
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
  t = e_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_s_38), l_24), term_c_39), term_b_39));
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
static ATerm u_14 (ATerm j_24, ATerm t)
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
  t = e_16(u_2, x_2, t);
  o_2 = t;
  t = term_h_38;
  s_2 = t;
  t = term_i_39;
  t_2 = t;
  t = term_l_39;
  t = e_16(s_2, t_2, t);
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
      t = z_14(q_2, r_2, t);
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
      t = e_16(m_3, n_3, t);
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
static ATerm v_14 (ATerm i_73, ATerm h_73, ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(i_73, h_73);
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      t = get_errno_0_0(t);
      t = term_t_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, i_73, h_73);
      t = m_15(i_73, h_73, t);
      t = SSL_remove(i_73);
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
    int w_39 = stack_ptr;
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
        t = m_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_x_39;
        LocalPopChoice(w_39);
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
              t = v_14(l_4, l_2, t);
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
        t = e_16(d_5, e_5, t);
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
  t = e_16(b_5, c_5, t);
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
  t = term_x_40;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_z_40);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_z_40);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_e_41;
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
    ATerm h_41 = t;
    int m_41 = stack_ptr;
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
        LocalPopChoice(m_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = h_41;
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
  t = (ATerm) ATinsert(CheckATermList(f_7), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(g_7), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(q_7), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(r_7), term_z_40);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_a_42;
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
  t = (ATerm) ATinsert(CheckATermList(b_8), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(d_8), term_z_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_j_42;
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
  t = term_s_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_x_42;
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
  t = term_x_42;
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
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_h_38;
      b_9 = t;
      t = term_l_40;
      c_9 = t;
      t = term_m_40;
      t = e_16(b_9, c_9, t);
      t = a_9;
      LocalPopChoice(c_43);
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
                  t = e_16(h_10, i_10, t);
                  a_10 = t;
                  t = term_h_38;
                  f_10 = t;
                  t = term_l_43;
                  g_10 = t;
                  t = term_m_43;
                  t = e_16(f_10, g_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, e_10);
                  {
                    ATerm n_43 = t;
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
                        t = n_43;
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
                    t = e_16(k_10, l_10, t);
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
ATerm if_keep1_1_0 (ATerm x_141 (ATerm), ATerm t)
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
        t = e_16(i_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_d_39);
        t = geq_0_0(t);
        t = d_11;
        t = x_141(t);
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
ATerm olevel_2_0 (ATerm w_152 (ATerm), ATerm x_152 (ATerm), ATerm t)
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
        t = w_152(t);
        r_11 = t;
        t = term_h_38;
        u_11 = t;
        t = term_c_44;
        v_11 = t;
        t = term_d_44;
        t = e_16(u_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = o_11;
        t = x_152(t);
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
  t = (ATerm) ATinsert(CheckATermList(k_7), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(m_7), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(d_9), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(e_9), term_z_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm f_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_13;
        {
          ATerm k_44 = t;
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
              t = k_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(i_44);
      }
    else
      {
        t = f_44;
        t = i_13;
        {
          ATerm p_44 = t;
          int r_44 = stack_ptr;
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
              LocalPopChoice(r_44);
              t = xtc_transform_file_2_0(j_8, k_8, t);
            }
          else
            {
              t = p_44;
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
        ATerm z_13 = NULL,a_14 = NULL;
        t = term_h_38;
        z_13 = t;
        t = term_l_40;
        a_14 = t;
        t = term_m_40;
        t = e_16(z_13, a_14, t);
        t = w_13;
        LocalPopChoice(v_44);
        t = (ATerm) ATinsert(ATempty, term_x_44);
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
ATerm if_keep4_1_0 (ATerm a_142 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
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
        t = e_16(g_14, h_14, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_14, term_a_45);
        t = geq_0_0(t);
        t = d_14;
        t = a_142(t);
        LocalPopChoice(z_44);
      }
    else
      {
        t = y_44;
        t = d_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,i_18 = NULL;
  d_18 = t;
  t = term_l_38;
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, term_b_45);
  i_18 = t;
  t = SSL_printnl(e_18, i_18);
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
              ATerm f_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(n_18);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, f_13);
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
  t = olevel_2_0(t_13, y_13, t);
  t = olevel_2_0(s_14, a_15, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm j_18 = NULL,l_18 = NULL,m_18 = NULL;
  j_18 = t;
  t = term_l_38;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(j_18), term_f_45);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(j_18), term_f_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm o_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  t = term_h_38;
  r_18 = t;
  t = term_c_44;
  s_18 = t;
  t = term_d_44;
  t = e_16(r_18, s_18, t);
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
  t = (ATerm) ATinsert(CheckATermList(b_19), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(c_19), term_z_40);
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
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_19;
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
              t = e_16(z_10, b_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_45;
            }
        }
        t = x_19;
        {
          ATerm r_45 = t;
          int t_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  k_11 = ATgetArgument(t, 0);
                  {
                    ATerm z_11 = NULL,u_5 = NULL;
                    t = SSLgetAnnotations(x_19);
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
                  t = x_19;
                }
              LocalPopChoice(t_45);
              t = xtc_transform_file_2_0(m_10, q_10, t);
            }
          else
            {
              t = r_45;
              t = xtc_transform_term_2_0(r_10, u_10, t);
            }
        }
        t = if_keep2_1_0(x_10, t);
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = x_19;
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
  t = (ATerm) ATinsert(CheckATermList(n_11), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(q_11), term_z_40);
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
              ATerm y_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              y_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
              x_5 = t;
              t = SSLsetAnnotations(x_5, y_12);
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
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_z_40);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_z_40);
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
  t = term_l_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm w_20 = NULL;
  t = pass_verbose_0_0(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), term_z_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_l_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm x_20 = NULL;
  t = pass_verbose_0_0(t);
  x_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_20), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(e_21), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(f_21), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(o_21), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(q_21), term_z_40);
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
              ATerm n_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(v_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_22);
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
        LocalPopChoice(q_46);
        t = xtc_transform_file_2_0(z_12, a_13, t);
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
              ATerm x_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(u_21);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, x_13);
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
        t = xtc_transform_term_2_0(h_13, j_13, t);
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
              ATerm i_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(r_21);
              i_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, i_14);
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
static ATerm z_12 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_z_40);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(r_22), term_z_40);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(a_23), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(b_23), term_z_40);
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
static ATerm y_13 (ATerm t)
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
        t = xtc_transform_file_2_0(b_14, c_14, t);
      }
    else
      {
        t = b_47;
        t = xtc_transform_term_2_0(e_14, j_14, t);
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
static ATerm c_14 (ATerm t)
{
  ATerm n_23 = NULL;
  t = pass_verbose_0_0(t);
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), term_z_40);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_f_47;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm o_23 = NULL;
  t = pass_verbose_0_0(t);
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(o_23), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(h_24), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(i_24), term_z_40);
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
  t = term_k_47;
  return(t);
}
static ATerm a_15 (ATerm t)
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
              ATerm g_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
              g_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_25);
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
        LocalPopChoice(m_47);
        t = xtc_transform_file_2_0(e_15, j_15, t);
      }
    else
      {
        t = l_47;
        t = xtc_transform_term_2_0(k_15, p_15, t);
      }
  }
  t = if_keep5_1_0(g_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(m_16, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_l_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_z_40);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_l_46;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_z_40);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
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
  ATerm j_25 = NULL,k_25 = NULL,n_25 = NULL;
  n_25 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_25 = ATgetArgument(t, 0);
            {
              ATerm q_15 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, q_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
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
        ATerm b_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(k_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
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
  t = (ATerm) ATinsert(CheckATermList(u_25), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(v_25), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(f_26), term_z_40);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_z_40);
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
  ATerm o_26 = NULL;
  t = pass_verbose_0_0(t);
  o_26 = t;
  t = (ATerm) ATinsert(CheckATermList(o_26), term_z_40);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_w_46;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_z_40);
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
        t = xtc_transform_term_2_0(f_18, h_18, t);
      }
  }
  t = if_keep1_1_0(q_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_z_40);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_z_40);
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
  ATerm l_27 = NULL;
  t = pass_verbose_0_0(t);
  l_27 = t;
  t = (ATerm) ATinsert(CheckATermList(l_27), term_z_40);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = term_k_48;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_z_40);
  return(t);
}
static ATerm q_18 (ATerm t)
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
  t = term_x_42;
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
  t = term_x_42;
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
ATerm save_as_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL;
  q_28 = t;
  {
    static ATerm x_18 (ATerm t);
    static ATerm x_18 (ATerm t)
    {
      static ATerm a_19 (ATerm t);
      static ATerm a_19 (ATerm t)
      {
        ATerm b_29 = NULL,c_29 = NULL;
        t = f_112(t);
        b_29 = t;
        t = term_r_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_48, b_29);
        t = k_16(c_29, b_29, t);
        return(t);
      }
      t = get_outfile_1_0(a_19, t);
      if(((o_28 != NULL) && (o_28 != t)))
        _fail(t);
      else
        o_28 = t;
      return(t);
    }
    t = copy_to_1_0(x_18, t);
  }
  {
    ATerm s_48 = t;
    int x_48 = stack_ptr;
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
        LocalPopChoice(x_48);
        t = xtc_transform_file_2_0(d_19, f_19, t);
      }
    else
      {
        t = s_48;
        t = xtc_transform_term_2_0(i_19, j_19, t);
      }
  }
  {
    static ATerm l_19 (ATerm t);
    static ATerm l_19 (ATerm t)
    {
      ATerm p_29 = NULL;
      t = term_a_49;
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_a_49);
      t = k_16(not_null(o_28), p_29, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(l_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_49), not_null(p_28)), term_c_49), not_null(o_28)), term_b_49);
  w_28 = t;
  t = SSL_concat_strings(w_28);
  r_28 = t;
  t = term_l_38;
  t_28 = t;
  t = (ATerm) ATinsert(ATempty, r_28);
  u_28 = t;
  t = SSL_printnl(t_28, u_28);
  t = q_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm y_141 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm g_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = term_h_38;
        z_29 = t;
        t = term_v_43;
        a_30 = t;
        t = term_w_43;
        t = e_16(z_29, a_30, t);
        w_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_29, term_k_38);
        t = geq_0_0(t);
        t = u_29;
        t = y_141(t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = g_49;
        t = u_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL,h_30 = NULL;
  t = term_i_38;
  {
    ATerm n_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL;
        t = term_h_38;
        l_30 = t;
        t = term_i_38;
        m_30 = t;
        t = term_j_38;
        t = e_16(l_30, m_30, t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = n_49;
        t = term_d_39;
      }
  }
  d_30 = t;
  t = term_d_39;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, term_d_39);
  t = h_15(d_30, h_30, t);
  g_30 = t;
  t = SSL_int_to_string(g_30);
  c_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_30), term_i_38);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_49 = ATgetArgument(t, 0);
      if(match_cons(t_49, sym_Stream_1))
        {
          s_30 = ATgetArgument(t_49, 0);
        }
      else
        _fail(t);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(s_30, u_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm j_151 (ATerm), ATerm k_151 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  q_30 = t;
  t = xtc_new_file_0_0(t);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
  t = y_14(m_19, p_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_30);
  t = xtc_transform_file_2_0(j_151, k_151, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm z_14 (ATerm e_78, ATerm f_78, ATerm t)
{
  t = SSL_execvp(e_78, f_78);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_y_49), x_17), term_x_49), u_31);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_55), term_j_55), term_e_55), term_v_54), term_r_54), term_n_54), term_i_54), term_c_54), term_x_53), term_t_53), term_p_53), term_l_53), term_h_53), term_d_53), term_z_52), term_v_52), term_r_52), term_n_52), term_i_52), term_e_52), term_a_52), term_w_51), term_q_51), term_l_51), term_g_51), term_w_50), term_t_50), term_l_50);
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
              ATerm g_18 = NULL,k_18 = NULL,p_18 = NULL;
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
              k_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_18), term_v_55);
              p_18 = t;
              t = SSL_printnl(k_18, p_18);
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
ATerm fork_and_wait_1_0 (ATerm i_142 (ATerm), ATerm t)
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
        t = i_142(t);
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
ATerm xtc_command_1_0 (ATerm s_152 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,e_33 = NULL;
  e_33 = t;
  t = s_152(t);
  t = xtc_find_0_0(t);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_33, e_33);
  {
    static ATerm s_19 (ATerm t);
    static ATerm s_19 (ATerm t)
    {
      ATerm g_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_33, e_33);
      t = z_14(a_33, e_33, t);
      t = term_d_39;
      g_33 = t;
      t = SSL_exit(g_33);
      return(t);
    }
    t = fork_and_wait_1_0(s_19, t);
  }
  t = e_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,l_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_33 = NULL,r_33 = NULL;
      t = j_33;
      t = xtc_new_file_0_0(t);
      p_33 = t;
      t = u_0(t);
      r_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, (ATerm) ATinsert(ATinsert(ATempty, p_33), term_s_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_33);
    }
  else
    {
      ATerm u_33 = NULL,v_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_33;
      t = xtc_new_file_0_0(t);
      u_33 = t;
      t = u_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), term_s_38), l_33), term_b_56));
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
      ATerm n_48 = NULL,p_48 = NULL;
      p_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm o_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(p_48);
            o_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_48);
            t_8 = t;
            t = SSLsetAnnotations(t_8, o_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_48;
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), q_48), (ATerm) ATinsert(ATempty, term_z_40));
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
        static ATerm f_20 (ATerm t);
        static ATerm d_20 (ATerm t)
        {
          t = x_23;
          return(t);
        }
        static ATerm f_20 (ATerm t)
        {
          ATerm t_48 = NULL;
          t = pass_verbose_0_0(t);
          t_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_23), t_48), (ATerm) ATinsert(ATempty, term_z_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = g_131(t);
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
      t = i_131(t);
      f_34 = t;
      t = z_33;
      t = foldr_3_0(g_131, h_131, i_131, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
      t = h_131(t);
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
      t = e_16(h_34, l_34, t);
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
static ATerm k_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_34), term_j_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(k_20, conc_0_0, o_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_z_40);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_z_40);
  return(t);
}
static ATerm d_21 (ATerm t)
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
  ATerm g_36 = NULL;
  g_36 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL,p_19 = NULL,q_19 = NULL,v_19 = NULL,w_19 = NULL;
        t = term_h_38;
        v_19 = t;
        t = term_s_57;
        w_19 = t;
        t = term_u_57;
        t = e_16(v_19, w_19, t);
        t = g_36;
        {
          ATerm v_57 = t;
          int w_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_36;
              {
                ATerm z_57 = t;
                int a_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        n_20 = ATgetArgument(t, 0);
                        {
                          ATerm s_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(g_36);
                          s_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, s_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = g_36;
                      }
                    LocalPopChoice(a_58);
                    t = xtc_transform_file_2_0(p_20, u_20, t);
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
                ATerm v_20 = NULL,c_21 = NULL,g_21 = NULL;
                t = term_l_38;
                c_21 = t;
                t = (ATerm) ATinsert(ATempty, term_d_58);
                g_21 = t;
                t = SSL_printnl(c_21, g_21);
                t = term_d_39;
                v_20 = t;
                t = SSL_exit(v_20);
                t = (ATerm) ATinsert(ATempty, term_d_58);
              }
            }
        }
        t = copy_to_1_0(d_21, t);
        k_19 = t;
        t = term_l_38;
        p_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_58));
        q_19 = t;
        t = SSL_printnl(p_19, q_19);
        t = k_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(r_57);
      }
    else
      {
        t = q_57;
        t = g_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm f_58 = t;
    int h_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,v_36 = NULL,w_36 = NULL;
        t = term_h_38;
        v_36 = t;
        t = term_v_43;
        w_36 = t;
        t = term_w_43;
        t = e_16(v_36, w_36, t);
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_k_47);
        t = geq_0_0(t);
        t = q_36;
        t = b_142(t);
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
ATerm if_keep6_1_0 (ATerm c_142 (ATerm), ATerm t)
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
        t = e_16(e_37, f_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_d_51);
        t = geq_0_0(t);
        t = z_36;
        t = c_142(t);
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
  int p_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,k_37 = NULL;
      t = term_h_38;
      h_37 = t;
      t = term_q_58;
      k_37 = t;
      t = term_s_58;
      t = e_16(h_37, k_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_58);
      LocalPopChoice(p_58);
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
  t = e_16(u_37, v_37, t);
  t_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_37), term_x_58);
  p_37 = t;
  t = s_37;
  t = comp_0_2(o_37, p_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm z_141 (ATerm), ATerm t)
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
        t = e_16(c_38, d_38, t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_d_42);
        t = geq_0_0(t);
        t = x_37;
        t = z_141(t);
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
ATerm fetch_elem_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm f_38 = NULL;
  static ATerm i_21 (ATerm t);
  static ATerm i_21 (ATerm t)
  {
    t = r_124(t);
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
        ATerm e_22 = NULL,h_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(j_40);
        e_22 = t;
        t = k_40;
        t = fetch_elem_1_0(k_21, t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, h_22);
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
              ATerm p_59 = ATgetArgument(t, 2);
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
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  t = fetch_elem_1_0(j_21, t);
  y_38 = t;
  t = term_l_38;
  z_38 = t;
  t = (ATerm) ATinsert(ATempty, term_q_59);
  a_39 = t;
  t = SSL_printnl(z_38, a_39);
  t = y_38;
  return(t);
}
static ATerm w_14 (ATerm d_24, ATerm e_24, ATerm t)
{
  t = d_24;
  {
    ATerm s_59 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_59;
      }
  }
  t = e_24;
  {
    ATerm w_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(z_59);
      }
    else
      {
        t = w_59;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(e_24), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_a_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_24), (ATerm) ATempty))))));
  return(t);
}
static ATerm x_14 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_write_term_to_stream_baf(o_42, p_42);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
static ATerm y_14 (ATerm z_123 (ATerm), ATerm o_329, ATerm y_42, ATerm t)
{
  ATerm y_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_329, term_b_60);
  t = x_15(t);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, y_42);
  t = z_123(t);
  t = fclose_0_0(t);
  t = y_42;
  return(t);
}
static ATerm b_15 (ATerm y_112 (ATerm), ATerm w_24, ATerm u_24, ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL,i_41 = NULL,j_41 = NULL;
  d_41 = t;
  t = y_112(t);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_41, w_24, u_24);
  t = f_16(a_41, w_24, u_24, t);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL;
        t = term_f_60;
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_41, term_f_60);
        t = e_16(a_41, k_41, t);
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
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(c_41), (ATerm) ATinsert(CheckATermList(b_41), w_24));
  g_41 = t;
  t = j_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(f_41, g_41, i_41, t);
  t = d_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  ATerm h_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,p_24 = NULL;
      r_41 = t;
      t = term_m_60;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_41, term_m_60);
      t = k_16(r_41, p_24, t);
      n_41 = t;
      t = SSL_mkstemp(n_41);
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
      ATerm w_41 = NULL;
      t = term_q_60;
      w_41 = t;
      t = SSL_getenv(w_41);
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
  t = term_r_60;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL;
  t = temp_dir_0_0(t);
  b_42 = t;
  t = term_t_60;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_42, term_t_60);
  t = k_16(b_42, c_42, t);
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
  t = b_15(n_21, y_41, z_41, t);
  t = SSL_close(x_41);
  t = y_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_60;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_60);
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_42, (ATerm) ATinsert(ATempty, term_x_60));
      t = a_16(f_42, i_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm p_21 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_60 = ATgetArgument(t, 0);
      if(match_cons(y_60, sym_Stream_1))
        {
          m_42 = ATgetArgument(y_60, 0);
        }
      else
        _fail(t);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(m_42, n_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm l_151 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = read_from_0_0(t);
  t = l_151(t);
  l_42 = t;
  t = xtc_new_file_0_0(t);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  t = y_14(p_21, k_42, l_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_42);
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
  ATerm v_42 = NULL,y_43 = NULL;
  y_43 = t;
  {
    ATerm c_61 = t;
    int d_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,l_25 = NULL;
        t = term_h_38;
        f_25 = t;
        t = term_g_61;
        l_25 = t;
        t = term_h_61;
        t = e_16(f_25, l_25, t);
        v_42 = t;
        t = if_verbose2_1_0(t_21, t);
        t = y_43;
        {
          ATerm i_61 = t;
          int j_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_25 = NULL,r_25 = NULL;
              t = term_h_38;
              m_25 = t;
              t = term_l_40;
              r_25 = t;
              t = term_m_40;
              t = e_16(m_25, r_25, t);
              t = y_43;
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
                      ATerm u_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          u_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_14(v_42, u_26, t);
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
        t = y_43;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_44);
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
        t = w_44;
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_r_60;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm h_44 = NULL,j_44 = NULL;
  static ATerm b_22 (ATerm t);
  static ATerm b_22 (ATerm t)
  {
    ATerm m_44 = NULL,q_44 = NULL,s_44 = NULL;
    m_44 = t;
    t = term_r_60;
    q_44 = t;
    t = term_f_60;
    s_44 = t;
    t = term_q_61;
    t = e_16(q_44, s_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_44 != NULL) && (h_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_44 = ATgetFirst((ATermList) t);
        {
          ATerm s_61 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_44;
    t = map_1_0(c_22, t);
    t = m_44;
    t = end_scope_1_0(d_22, t);
    return(t);
  }
  t = repeat_2_0(b_22, _id, t);
  j_44 = t;
  t = SSL_exit(j_44);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm t_61 = t;
  int u_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_45 = NULL,u_45 = NULL;
      t = term_h_38;
      s_45 = t;
      t = term_s_38;
      u_45 = t;
      t = term_t_38;
      t = e_16(s_45, u_45, t);
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
      ATerm m_27 = NULL,n_27 = NULL;
      t = term_s_38;
      {
        ATerm v_61 = t;
        int w_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_27 = NULL,t_27 = NULL;
            t = term_h_38;
            r_27 = t;
            t = term_s_38;
            t_27 = t;
            t = term_t_38;
            t = e_16(r_27, t_27, t);
            LocalPopChoice(w_61);
          }
        else
          {
            t = v_61;
            t = term_x_39;
          }
      }
      m_27 = t;
      t = term_u_60;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_60, m_27);
      t = m_15(n_27, m_27, t);
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
      t = copy_to_1_0(g_22, t);
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
ATerm get_outfile_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,y_45 = NULL,a_46 = NULL,b_46 = NULL;
  t = e_112(t);
  w_45 = t;
  t = term_h_38;
  a_46 = t;
  t = term_j_43;
  b_46 = t;
  t = term_k_43;
  t = e_16(a_46, b_46, t);
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, w_45);
  t = k_16(y_45, w_45, t);
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
        t = m_15(a_47, n_28, t);
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
              ATerm h_29 = NULL;
              t = z_46;
              t = w_0(t);
              h_29 = t;
              {
                ATerm c_62 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_29 = NULL;
                    i_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_29;
                          }
                        else
                          {
                            t = i_29;
                            if((a_47 != t))
                              {
                                _fail(t);
                              }
                            t = i_29;
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
              t = (ATerm) ATmakeAppl(sym__2, a_47, h_29);
              t = m_15(a_47, h_29, t);
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
        ATerm x_29 = NULL,y_29 = NULL,e_30 = NULL,f_30 = NULL,i_30 = NULL;
        t = term_h_38;
        f_30 = t;
        t = term_i_62;
        i_30 = t;
        t = term_j_62;
        t = e_16(f_30, i_30, t);
        t = u_47;
        t = copy_to_1_0(j_22, t);
        x_29 = t;
        t = term_l_38;
        y_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_62));
        e_30 = t;
        t = SSL_printnl(y_29, e_30);
        t = x_29;
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
  ATerm d_49 = NULL,h_49 = NULL,j_49 = NULL,k_49 = NULL;
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
        t = e_16(l_49, m_49, t);
        LocalPopChoice(t_62);
      }
    else
      {
        t = r_62;
        t = term_d_39;
      }
  }
  h_49 = t;
  t = term_d_39;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_49, term_d_39);
  t = h_15(h_49, k_49, t);
  j_49 = t;
  t = SSL_int_to_string(j_49);
  d_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_49), term_v_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,r_49 = NULL,z_49 = NULL,c_50 = NULL,d_50 = NULL;
  t = term_h_38;
  c_50 = t;
  t = term_v_62;
  d_50 = t;
  t = term_w_62;
  t = e_16(c_50, d_50, t);
  o_49 = t;
  t = term_x_62;
  t = xtc_find_path_0_0(t);
  p_49 = t;
  t = term_z_62;
  t = xtc_find_path_0_0(t);
  r_49 = t;
  t = term_a_63;
  t = xtc_find_path_0_0(t);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_49), term_v_62), r_49), term_v_62), p_49), term_v_62));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm f_50 = NULL,k_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  p_50 = t;
  t = term_d_63;
  f_50 = t;
  t = p_50;
  {
    ATerm e_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_50 = NULL,y_50 = NULL;
        t = term_h_38;
        x_50 = t;
        t = term_s_38;
        y_50 = t;
        t = term_t_38;
        t = e_16(x_50, y_50, t);
        LocalPopChoice(f_63);
      }
    else
      {
        t = e_63;
        {
          ATerm z_50 = NULL,b_51 = NULL;
          t = term_h_38;
          z_50 = t;
          t = term_j_43;
          b_51 = t;
          t = term_k_43;
          t = e_16(z_50, b_51, t);
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
        ATerm c_51 = NULL,f_51 = NULL;
        t = term_h_38;
        c_51 = t;
        t = term_l_63;
        f_51 = t;
        t = term_o_63;
        t = e_16(c_51, f_51, t);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_50), n_50), m_50), (ATerm) ATinsert(ATinsert(ATempty, q_50), term_q_63));
  t = concat_0_0(t);
  k_50 = t;
  t = p_50;
  t = comp_0_2(f_50, k_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_140 (ATerm), ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  {
    ATerm r_63 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL,s_51 = NULL,t_51 = NULL;
        t = term_h_38;
        s_51 = t;
        t = term_i_38;
        t_51 = t;
        t = term_j_38;
        t = e_16(s_51, t_51, t);
        n_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_51, term_d_42);
        t = geq_0_0(t);
        t = j_51;
        t = x_140(t);
        LocalPopChoice(b_64);
      }
    else
      {
        t = r_63;
        t = j_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,o_52 = NULL;
  o_52 = t;
  t = SSL_explode_string(o_52);
  {
    ATerm e_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_54 (ATerm t);
        static ATerm j_54 (ATerm t)
        {
          ATerm b_54 = NULL,f_54 = NULL,g_54 = NULL;
          b_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_54 = ATgetFirst((ATermList) t);
              g_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_64 = t;
            int h_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_31 = NULL,o_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(b_54);
                e_31 = t;
                t = g_54;
                t = j_54(t);
                o_31 = t;
                t = (ATerm) ATinsert(CheckATermList(o_31), f_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, e_31);
                LocalPopChoice(h_64);
              }
            else
              {
                t = g_64;
                {
                  ATerm i_64 = t;
                  int j_64 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(b_54);
                      r_32 = t;
                      t = f_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(g_54), f_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, r_32);
                      LocalPopChoice(j_64);
                    }
                  else
                    {
                      t = i_64;
                      {
                        ATerm k_33 = NULL,o_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(b_54);
                        k_33 = t;
                        t = f_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = g_54;
                        t = j_135(t);
                        o_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_33), f_54);
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
        t = j_54(t);
        LocalPopChoice(f_64);
      }
    else
      {
        t = e_64;
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
  t = term_k_64;
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
static ATerm c_15 (ATerm z_23, ATerm t)
{
  ATerm u_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  t = z_23;
  t = basename_1_0(_id, t);
  u_54 = t;
  t = if_verbose3_1_0(l_22, t);
  t = term_l_43;
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, u_54);
  t = j_16(a_55, u_54, t);
  {
    ATerm n_64 = t;
    int r_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_55 = NULL,i_55 = NULL;
        t = term_h_38;
        c_55 = t;
        t = term_s_38;
        i_55 = t;
        t = term_t_38;
        t = e_16(c_55, i_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(r_64);
      }
    else
      {
        t = n_64;
        t = u_54;
      }
  }
  y_54 = t;
  t = if_verbose3_1_0(q_22, t);
  t = term_j_43;
  z_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_43, y_54);
  t = j_16(z_54, y_54, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_54);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_s_64;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(d_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,u_36 = NULL,y_36 = NULL,a_37 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_15(i_57, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm x_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_57 = NULL,k_57 = NULL,m_57 = NULL;
        j_57 = t;
        t = term_h_38;
        k_57 = t;
        t = term_l_40;
        m_57 = t;
        t = term_m_40;
        t = e_16(k_57, m_57, t);
        t = j_57;
        LocalPopChoice(y_64);
      }
    else
      {
        t = x_64;
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
    int f_65 = stack_ptr;
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
        LocalPopChoice(f_65);
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
        ATerm r_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_58 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(f_57);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_58);
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
    ATerm k_65 = t;
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
        t = k_65;
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
        t = xtc_transform_term_2_0(e_25, g_25, t);
      }
  }
  t = if_keep5_1_0(o_25, t);
  c_57 = t;
  {
    ATerm o_65 = t;
    int s_65 = stack_ptr;
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
        LocalPopChoice(s_65);
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
        ATerm u_59 = NULL,v_59 = NULL,x_59 = NULL;
        u_59 = t;
        t = term_h_38;
        v_59 = t;
        t = term_l_40;
        x_59 = t;
        t = term_m_40;
        t = e_16(v_59, x_59, t);
        t = u_59;
        LocalPopChoice(x_65);
        {
          ATerm y_59 = NULL;
          y_59 = t;
          {
            ATerm y_65 = t;
            int b_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_60 = ATgetArgument(t, 0);
                    {
                      ATerm j_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(y_59);
                      j_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_60);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, j_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = y_59;
                  }
                LocalPopChoice(b_66);
                t = xtc_transform_file_2_0(a_26, c_26, t);
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
            int l_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    s_60 = ATgetArgument(t, 0);
                    {
                      ATerm o_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(k_60);
                      o_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, s_60);
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
                LocalPopChoice(l_66);
                t = xtc_transform_file_2_0(g_26, i_26, t);
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
  t = term_m_66;
  u_36 = t;
  t = a_37;
  t = pass_warnings_0_0(t);
  y_36 = t;
  t = a_37;
  t = comp_0_2(u_36, y_36, t);
  b_57 = t;
  {
    ATerm q_66 = t;
    int r_66 = stack_ptr;
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
        LocalPopChoice(r_66);
        t = xtc_transform_file_2_0(p_26, t_26, t);
      }
    else
      {
        t = q_66;
        t = xtc_transform_term_2_0(v_26, w_26, t);
      }
  }
  a_57 = t;
  {
    ATerm t_66 = t;
    int v_66 = stack_ptr;
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
        LocalPopChoice(v_66);
        t = xtc_transform_file_2_0(x_26, y_26, t);
      }
    else
      {
        t = t_66;
        t = xtc_transform_term_2_0(a_27, b_27, t);
      }
  }
  t = if_keep2_1_0(d_27, t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,z_56 = NULL;
  w_56 = t;
  t = term_l_38;
  x_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), term_y_66);
  z_56 = t;
  t = SSL_printnl(x_56, z_56);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(w_56), term_y_66));
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_z_66;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm x_57 = NULL;
  t = pass_verbose_0_0(t);
  x_57 = t;
  t = (ATerm) ATinsert(CheckATermList(x_57), term_z_40);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  t = term_z_66;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm y_57 = NULL;
  t = pass_verbose_0_0(t);
  y_57 = t;
  t = (ATerm) ATinsert(CheckATermList(y_57), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(i_58), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(j_58), term_z_40);
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
  t = term_h_67;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm t_58 = NULL;
  t = pass_verbose_0_0(t);
  t_58 = t;
  t = (ATerm) ATinsert(CheckATermList(t_58), term_z_40);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_h_67;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm u_58 = NULL;
  t = pass_verbose_0_0(t);
  u_58 = t;
  t = (ATerm) ATinsert(CheckATermList(u_58), term_z_40);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = save_as_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_i_67;
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
  t = (ATerm) ATinsert(CheckATermList(a_59), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(b_59), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(h_59), term_z_40);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm i_59 = NULL;
  t = pass_verbose_0_0(t);
  i_59 = t;
  t = (ATerm) ATinsert(CheckATermList(i_59), term_z_40);
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
  ATerm r_59 = NULL;
  t = pass_verbose_0_0(t);
  r_59 = t;
  t = (ATerm) ATinsert(CheckATermList(r_59), term_z_40);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm t_59 = NULL;
  t = pass_verbose_0_0(t);
  t_59 = t;
  t = (ATerm) ATinsert(CheckATermList(t_59), term_z_40);
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
  t = term_o_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm i_60 = NULL;
  t = pass_verbose_0_0(t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(j_60), term_z_40);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm v_60 = NULL;
  t = pass_verbose_0_0(t);
  v_60 = t;
  t = (ATerm) ATinsert(CheckATermList(v_60), term_z_40);
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
  t = (ATerm) ATinsert(CheckATermList(w_60), term_z_40);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = save_as_1_0(n_26, t);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_h_68;
  return(t);
}
static ATerm p_26 (ATerm t)
{
  t = term_t_68;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  ATerm e_61 = NULL;
  t = pass_verbose_0_0(t);
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(e_61), term_z_40);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_t_68;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_z_40);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_u_68;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm p_61 = NULL;
  t = pass_verbose_0_0(t);
  p_61 = t;
  t = (ATerm) ATinsert(CheckATermList(p_61), term_z_40);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_u_68;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm r_61 = NULL;
  t = pass_verbose_0_0(t);
  r_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), term_z_40);
  return(t);
}
static ATerm d_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_v_68;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_22, t);
  t = profile_p__2_0(x_22, z_22, t);
  return(t);
}
static ATerm e_16 (ATerm q_65, ATerm r_65, ATerm t)
{
  ATerm k_62 = NULL;
  t = lookup_table_0_1(q_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_16(r_65, k_62, t);
  return(t);
}
static ATerm d_15 (ATerm c_64, ATerm d_64, ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL;
  p_62 = t;
  {
    ATerm w_68 = t;
    int x_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
        t = e_16(c_64, d_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_68 = ATgetFirst((ATermList) t);
            o_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_68);
        {
          ATerm q_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, c_64, d_64, o_62);
          t = lookup_table_0_1(c_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_16(d_64, o_62, q_62, t);
          t = (ATerm) ATmakeAppl(sym__3, c_64, d_64, o_62);
        }
      }
    else
      {
        t = w_68;
        {
          ATerm s_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
          t = lookup_table_0_1(c_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_16(d_64, s_62, t);
          t = (ATerm) ATmakeAppl(sym__2, c_64, d_64);
        }
      }
  }
  t = p_62;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm u_62 = NULL,y_62 = NULL,b_63 = NULL,c_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL;
  c_63 = t;
  t = v_112(t);
  b_63 = t;
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL;
        t = term_f_60;
        j_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_63, term_f_60);
        t = e_16(b_63, j_63, t);
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
      y_62 = ATgetFirst((ATermList) t);
      u_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_63, term_f_60, u_62);
  t = lookup_table_0_1(b_63, t);
  i_63 = t;
  t = term_f_60;
  g_63 = t;
  t = i_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(g_63, u_62, h_63, t);
  t = y_62;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm k_63 = NULL;
      k_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_63, k_63);
      t = d_15(b_63, k_63, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = c_63;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm t)
{
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_116(t);
      t = t_116(t);
      LocalPopChoice(d_69);
    }
  else
    {
      t = c_69;
      t = t_116(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm p_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,z_63 = NULL,a_64 = NULL;
  s_63 = t;
  t = u_112(t);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_63, term_f_60);
  {
    ATerm e_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_64 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_69 = ATgetArgument(t, 0);
            ATerm o_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_60;
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_63, term_f_60);
        t = e_16(p_63, l_64, t);
        LocalPopChoice(j_69);
      }
    else
      {
        t = e_69;
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
      z_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(u_63, v_63, z_63, t);
  t = s_63;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_r_60;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  ATerm b_65 = NULL;
  b_65 = t;
  {
    ATerm p_69 = t;
    int q_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_65);
        LocalPopChoice(q_69);
      }
    else
      {
        t = p_69;
        t = b_65;
      }
  }
  return(t);
}
static ATerm p_27 (ATerm t)
{
  t = term_r_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_151 (ATerm), ATerm t)
{
  ATerm o_64 = NULL;
  static ATerm j_27 (ATerm t);
  static ATerm j_27 (ATerm t)
  {
    ATerm p_64 = NULL;
    p_64 = t;
    {
      ATerm r_69 = t;
      int u_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_64 = NULL,t_64 = NULL;
          t = term_r_60;
          q_64 = t;
          t = term_f_60;
          t_64 = t;
          t = term_q_61;
          t = e_16(q_64, t_64, t);
          LocalPopChoice(u_69);
        }
      else
        {
          t = r_69;
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
          ATerm v_69 = (ATerm) ATgetNext((ATermList) t);
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
  t = restore_always_2_0(w_151, j_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  {
    ATerm w_69 = t;
    int z_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
        t = term_h_38;
        u_65 = t;
        t = term_i_38;
        v_65 = t;
        t = term_j_38;
        t = e_16(u_65, v_65, t);
        t_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_65, term_d_39);
        t = geq_0_0(t);
        t = p_65;
        t = v_140(t);
        LocalPopChoice(z_69);
      }
    else
      {
        t = w_69;
        t = p_65;
      }
  }
  return(t);
}
static ATerm f_15 (ATerm g_62, ATerm h_62, ATerm t)
{
  ATerm c_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_62, h_62);
      LocalPopChoice(e_70);
    }
  else
    {
      t = c_70;
      t = SSL_addr(g_62, h_62);
    }
  return(t);
}
static ATerm h_15 (ATerm m_62, ATerm n_62, ATerm t)
{
  ATerm g_70 = t;
  int h_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_62, n_62);
      LocalPopChoice(h_70);
    }
  else
    {
      t = g_70;
      t = SSL_subtr(m_62, n_62);
    }
  return(t);
}
static ATerm i_15 (ATerm z_70, ATerm b_71, ATerm d_71, ATerm f_71, ATerm a_71, ATerm c_71, ATerm e_71, ATerm g_71, ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,c_66 = NULL,d_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_70, a_71);
  t = h_15(z_70, a_71, t);
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_71, c_71);
  t = h_15(b_71, c_71, t);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
  t = h_15(d_71, e_71, t);
  c_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_71, g_71);
  t = h_15(f_71, g_71, t);
  d_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, z_65, a_66, c_66, d_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,n_66 = NULL,o_66 = NULL;
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
            n_66 = ATgetArgument(j_70, 2);
            o_66 = ATgetArgument(j_70, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_15(f_66, g_66, h_66, i_66, j_66, k_66, n_66, o_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm s_138 (ATerm), ATerm t_138 (ATerm), ATerm t)
{
  ATerm p_66 = NULL,s_66 = NULL,u_66 = NULL,w_66 = NULL,x_66 = NULL,a_67 = NULL,b_67 = NULL,f_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,n_67 = NULL,p_67 = NULL;
  b_67 = t;
  t = times_0_0(t);
  p_66 = t;
  t = b_67;
  t = t_138(t);
  s_66 = t;
  t = times_0_0(t);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_67, p_66);
  t = diff_times_0_0(t);
  x_66 = t;
  if(match_cons(t, sym__4))
    {
      l_67 = ATgetArgument(t, 0);
      {
        ATerm k_70 = ATgetArgument(t, 1);
      }
      n_67 = ATgetArgument(t, 2);
      {
        ATerm m_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_67, n_67);
  t = f_15(l_67, n_67, t);
  p_67 = t;
  t = SSL_TicksToSeconds(p_67);
  u_66 = t;
  t = x_66;
  if(match_cons(t, sym__4))
    {
      ATerm n_70 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
      {
        ATerm o_70 = ATgetArgument(t, 2);
      }
      j_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_67, j_67);
  t = f_15(f_67, j_67, t);
  k_67 = t;
  t = SSL_TicksToSeconds(k_67);
  w_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_66), term_r_70), u_66), term_q_70);
  t = s_138(t);
  t = s_66;
  return(t);
}
ATerm debug_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  q_67 = t;
  t = x_123(t);
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
  t = e_16(y_67, z_67, t);
  v_67 = t;
  t = term_x_39;
  w_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_71), term_j_71), term_i_71), term_h_71), term_y_70), term_x_70), term_v_70), v_67), term_u_70);
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
ATerm at_suffix_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  static ATerm i_69 (ATerm t);
  static ATerm i_69 (ATerm t)
  {
    ATerm l_71 = t;
    int m_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_125(t);
        LocalPopChoice(m_71);
      }
    else
      {
        t = l_71;
        {
          ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,m_38 = NULL,p_38 = NULL,g_13 = NULL;
          f_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_69 = ATgetFirst((ATermList) t);
              h_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_69);
          m_38 = t;
          t = h_69;
          t = i_69(t);
          p_38 = t;
          t = (ATerm) ATinsert(CheckATermList(p_38), g_69);
          g_13 = t;
          t = SSLsetAnnotations(g_13, m_38);
        }
      }
    return(t);
  }
  t = i_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm s_124 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  static ATerm q_27 (ATerm t);
  static ATerm q_27 (ATerm t)
  {
    ATerm n_69 = NULL,s_69 = NULL,t_69 = NULL,x_69 = NULL,y_69 = NULL,a_70 = NULL,b_70 = NULL,d_70 = NULL,f_70 = NULL,o_13 = NULL,k_13 = NULL;
    f_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_69 = ATgetFirst((ATermList) t);
        a_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_70);
    x_69 = t;
    t = y_69;
    t = s_124(t);
    b_70 = t;
    t = (ATerm) ATinsert(CheckATermList(a_70), b_70);
    k_13 = t;
    t = SSLsetAnnotations(k_13, x_69);
    d_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_69 = ATgetFirst((ATermList) t);
        t_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_70);
    n_69 = t;
    t = t_69;
    if(((l_69 != NULL) && (l_69 != t)))
      _fail(t);
    else
      l_69 = t;
    t = (ATerm) ATinsert(CheckATermList(t_69), s_69);
    o_13 = t;
    t = SSLsetAnnotations(o_13, n_69);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(q_27, t);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_69, not_null(l_69));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,w_70 = NULL;
  ATerm q_71 = t;
  int r_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(f_134, t);
      LocalPopChoice(r_71);
    }
  else
    {
      t = q_71;
      {
        ATerm l_70 = NULL;
        l_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_70, (ATerm) ATempty);
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
              ATerm s_71 = ATgetFirst((ATermList) t);
              ATerm t_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_70;
          t = list_tokenize_1_0(f_134, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm u_71 = ATgetFirst((ATermList) t);
          ATerm v_71 = (ATerm) ATgetNext((ATermList) t);
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
          ATerm n_71 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_71 = ATgetFirst((ATermList) t);
              ATerm x_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_70;
          t = list_tokenize_1_0(f_134, t);
          n_71 = t;
          t = (ATerm) ATinsert(CheckATermList(n_71), p_70);
        }
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm p_71 = NULL;
  p_71 = t;
  t = SSL_implode_string(p_71);
  return(t);
}
static ATerm l_15 (ATerm d_55, ATerm t_478, ATerm t)
{
  t = SSL_explode_string(t_478);
  {
    static ATerm s_27 (ATerm t);
    static ATerm s_27 (ATerm t)
    {
      ATerm o_71 = NULL;
      static ATerm u_27 (ATerm t);
      static ATerm u_27 (ATerm t)
      {
        if(((o_71 != NULL) && (o_71 != t)))
          _fail(t);
        else
          o_71 = t;
        return(t);
      }
      if(((o_71 != NULL) && (o_71 != t)))
        _fail(t);
      else
        o_71 = t;
      t = d_55;
      t = fetch_1_0(u_27, t);
      return(t);
    }
    t = list_tokenize_1_0(s_27, t);
  }
  t = map_1_0(v_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm j_72 = NULL;
  j_72 = t;
  {
    ATerm y_71 = t;
    int z_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_38 = NULL;
        t = SSL_filemode(j_72);
        if(match_cons(t, sym__2))
          {
            w_38 = ATgetArgument(t, 0);
            {
              ATerm a_72 = ATgetArgument(t, 1);
              if(((ATgetType(a_72) != AT_INT) || (ATgetInt((ATermInt) a_72) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_38;
        LocalPopChoice(z_71);
      }
    else
      {
        t = y_71;
        {
          ATerm j_39 = NULL,k_39 = NULL;
          t = term_b_72;
          k_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_72, j_72);
          t = k_16(k_39, j_72, t);
          j_39 = t;
          t = SSL_perror(j_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm m_15 (ATerm k_73, ATerm j_73, ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  n_72 = t;
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_72 = NULL,p_72 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_60);
        p_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_73, (ATerm) ATinsert(ATempty, term_x_60));
        t = a_16(j_73, p_72, t);
        t = filemode_0_0(t);
        o_72 = t;
        t = SSL_S_ISDIR(o_72);
        t = n_72;
        LocalPopChoice(d_72);
        {
          ATerm q_72 = NULL,r_72 = NULL,w_72 = NULL;
          t = (ATerm) ATinsert(ATempty, term_e_72);
          w_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_e_72), k_73);
          t = l_15(w_72, k_73, t);
          t = last_0_0(t);
          q_72 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_72), term_f_72), j_73);
          r_72 = t;
          t = SSL_concat_strings(r_72);
        }
      }
    else
      {
        t = c_72;
        t = j_73;
      }
  }
  m_72 = t;
  t = SSL_copy(k_73, m_72);
  return(t);
}
static ATerm n_15 (ATerm p_68, ATerm t)
{
  t = SSL_hashtable_keys(p_68);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  static ATerm w_27 (ATerm t);
  static ATerm w_27 (ATerm t)
  {
    ATerm a_73 = NULL,b_73 = NULL;
    a_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_72), a_73);
    t = e_16(not_null(y_72), a_73, t);
    b_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_73, b_73);
    return(t);
  }
  if(((y_72 != NULL) && (y_72 != t)))
    _fail(t);
  else
    y_72 = t;
  t = lookup_table_0_1(y_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(z_72, t);
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
  t = term_g_72;
  return(t);
}
static ATerm o_74 (ATerm m_73, ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,t_73 = NULL;
  t = term_h_72;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_73);
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_72, (ATerm) ATmakeAppl(sym_Tool_1, m_73));
  t = e_16(r_73, t_73, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_72 = ATgetFirst((ATermList) t);
      if(match_cons(i_72, sym__2))
        {
          ATerm l_72 = ATgetArgument(i_72, 0);
          q_73 = ATgetArgument(i_72, 1);
        }
      else
        _fail(t);
      {
        ATerm k_72 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_73;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_g_72;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_h_72;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_s_72;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm t_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
      t = if_verbose5_1_0(x_27, t);
      t = xtc_load_0_0(t);
      w_73 = t;
      if(match_cons(t, sym__2))
        {
          u_73 = ATgetArgument(t, 0);
          v_73 = ATgetArgument(t, 1);
          {
            ATerm v_72 = t;
            int x_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_74 = NULL,d_74 = NULL,f_74 = NULL;
                t = term_h_72;
                d_74 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_73);
                f_74 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_72, (ATerm) ATmakeAppl(sym_Tool_1, u_73));
                t = e_16(d_74, f_74, t);
                {
                  static ATerm z_27 (ATerm t);
                  static ATerm z_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_73 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_74 != NULL) && (b_74 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_74 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_27, t);
                }
                t = not_null(b_74);
                LocalPopChoice(x_72);
              }
            else
              {
                t = v_72;
                t = o_74(w_73, t);
              }
          }
        }
      else
        {
          t = o_74(w_73, t);
        }
      t = if_verbose5_1_0(a_28, t);
      LocalPopChoice(u_72);
    }
  else
    {
      t = t_72;
      {
        ATerm n_74 = NULL,v_39 = NULL,a_40 = NULL;
        n_74 = t;
        t = term_l_38;
        v_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_73), n_74), term_c_73);
        a_40 = t;
        t = SSL_printnl(v_39, a_40);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_73), n_74), term_c_73);
        t = if_verbose5_1_0(c_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  t = term_h_38;
  q_74 = t;
  t = term_e_73;
  r_74 = t;
  t = term_f_73;
  t = e_16(q_74, r_74, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_74), term_y_70), term_e_74), term_c_74), term_a_74), term_y_70), term_z_73), term_y_73), term_x_73), term_s_73), term_p_73), term_o_73), term_n_73), term_l_73), term_g_73);
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_74 = NULL;
  t = term_t_39;
  t = k_0(t);
  s_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_74), s_74), term_l_74), term_y_70), term_k_74), term_y_70), term_j_74), term_i_74), term_y_70), term_h_74);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,z_74 = NULL;
  w_74 = t;
  {
    ATerm p_74 = t;
    int t_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_74 = ATgetFirst((ATermList) t);
                ATerm v_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_74;
          }
        LocalPopChoice(t_74);
      }
    else
      {
        t = p_74;
        t = (ATerm) ATinsert(ATempty, w_74);
      }
  }
  x_74 = t;
  t = term_x_39;
  z_74 = t;
  t = SSL_printnl(z_74, x_74);
  t = w_74;
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
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,u_18 = NULL;
  z_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_75);
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_75);
  u_18 = t;
  t = SSLsetAnnotations(u_18, x_75);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm e_76 = NULL;
  e_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_76), term_y_74);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm y_145 (ATerm), ATerm z_145 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  ATerm a_75 = t;
  int b_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_75 = NULL,v_75 = NULL;
      t = term_h_38;
      t_75 = t;
      t = term_e_73;
      v_75 = t;
      t = term_f_73;
      t = e_16(t_75, v_75, t);
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
        t = y_145(t);
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
  r_75 = t;
  t = term_i_75;
  s_75 = t;
  t = term_j_75;
  t = e_16(r_75, s_75, t);
  t = reverse_acc_2_0(_id, g_28, t);
  t = map_1_0(h_28, t);
  {
    ATerm k_75 = t;
    int n_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_76 = NULL;
        t = z_145(t);
        f_76 = t;
        t = (ATerm) ATinsert(CheckATermList(f_76), term_y_70);
        t = echo_0_0(t);
        LocalPopChoice(n_75);
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
  ATerm k_76 = NULL,l_76 = NULL;
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
    static ATerm m_28 (ATerm t);
    static ATerm m_28 (ATerm t)
    {
      t = not_null(k_76);
      return(t);
    }
    t = long_description_1_0(m_28, t);
    return(t);
  }
  l_76 = t;
  {
    ATerm o_75 = t;
    int p_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_76 = NULL,o_76 = NULL;
        t = term_h_38;
        m_76 = t;
        t = term_e_73;
        o_76 = t;
        t = term_f_73;
        t = e_16(m_76, o_76, t);
        if(((k_76 != NULL) && (k_76 != t)))
          _fail(t);
        else
          k_76 = t;
        LocalPopChoice(p_75);
      }
    else
      {
        t = o_75;
        {
          static ATerm i_28 (ATerm t);
          static ATerm i_28 (ATerm t)
          {
            ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,w_18 = NULL;
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
            w_18 = t;
            t = SSLsetAnnotations(w_18, p_76);
            return(t);
          }
          t = fetch_1_0(i_28, t);
        }
      }
  }
  t = l_76;
  t = default_system_usage_2_0(j_28, k_28, t);
  return(t);
}
static ATerm s_28 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,v_76 = NULL;
  if(match_cons(t, sym__2))
    {
      s_76 = ATgetArgument(t, 0);
      t_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_70), t_76), term_u_75), s_76), term_q_75);
  v_76 = t;
  t = SSL_concat_strings(v_76);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(s_28, t);
  return(t);
}
static ATerm o_15 (ATerm o_43, ATerm c_341, ATerm t)
{
  static ATerm v_28 (ATerm t);
  static ATerm v_28 (ATerm t)
  {
    if((o_43 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = c_341;
  t = fetch_1_0(v_28, t);
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm c_77 = NULL;
  c_77 = t;
  if(match_string(t, "--warning"))
    {
      t = c_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = c_77;
    }
  return(t);
}
static ATerm z_28 (ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
  t = Display_possible_warnings_0_0(t);
  r_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_78), term_b_76), term_a_76), term_w_75);
  s_78 = t;
  t = SSL_concat_strings(s_78);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL;
  g_77 = t;
  t = SSL_explode_term(g_77);
  if(match_cons(t, sym__2))
    {
      ATerm c_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_76 = ATgetArgument(t, 1);
        if(((ATgetType(d_76) == AT_LIST) && !(ATisEmpty(d_76))))
          {
            f_77 = ATgetFirst((ATermList) d_76);
            {
              ATerm g_76 = (ATerm) ATgetNext((ATermList) d_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_77;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL;
  y_77 = t;
  t = SSL_explode_term(y_77);
  if(match_cons(t, sym__2))
    {
      ATerm h_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_76 = ATgetArgument(t, 1);
        if(((ATgetType(i_76) == AT_LIST) && !(ATisEmpty(i_76))))
          {
            x_77 = ATgetFirst((ATermList) i_76);
            {
              ATerm j_76 = (ATerm) ATgetNext((ATermList) i_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_77;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,b_77 = NULL;
  static ATerm y_28 (ATerm t);
  static ATerm y_28 (ATerm t)
  {
    if(((b_77 != NULL) && (b_77 != t)))
      _fail(t);
    else
      b_77 = t;
    {
      ATerm n_76 = t;
      int u_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = b_77;
          LocalPopChoice(u_76);
          {
            ATerm d_77 = NULL,e_77 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
            t = map_1_0(a_29, t);
            d_77 = t;
            t = term_j_56;
            e_77 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_j_56, d_77);
            t = j_16(e_77, d_77, t);
          }
        }
      else
        {
          t = n_76;
          t = b_77;
          {
            ATerm w_76 = t;
            int x_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(b_77);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm a_77 = ATgetFirst((ATermList) t);
                    if(((ATgetType(a_77) != AT_INT) || (ATgetInt((ATermInt) a_77) != 110)))
                      _fail(t);
                    {
                      ATerm j_77 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(j_77) == AT_LIST) && !(ATisEmpty(j_77))))
                        {
                          ATerm r_77 = ATgetFirst((ATermList) j_77);
                          if(((ATgetType(r_77) != AT_INT) || (ATgetInt((ATermInt) r_77) != 111)))
                            _fail(t);
                          {
                            ATerm w_77 = (ATerm) ATgetNext((ATermList) j_77);
                            if(((ATgetType(w_77) == AT_LIST) && !(ATisEmpty(w_77))))
                              {
                                ATerm i_78 = ATgetFirst((ATermList) w_77);
                                if(((ATgetType(i_78) != AT_INT) || (ATgetInt((ATermInt) i_78) != 45)))
                                  _fail(t);
                                if(((y_76 != NULL) && (y_76 != (ATerm) ATgetNext((ATermList) w_77))))
                                  _fail((ATerm) ATgetNext((ATermList) w_77));
                                else
                                  y_76 = (ATerm) ATgetNext((ATermList) w_77);
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
                t = b_77;
                LocalPopChoice(x_76);
                {
                  ATerm q_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
                  t = SSL_implode_string(y_76);
                  if(((z_76 != NULL) && (z_76 != t)))
                    _fail(t);
                  else
                    z_76 = t;
                  t = term_h_38;
                  t_77 = t;
                  t = term_j_56;
                  u_77 = t;
                  t = term_k_56;
                  t = e_16(t_77, u_77, t);
                  {
                    static ATerm d_29 (ATerm t);
                    static ATerm d_29 (ATerm t)
                    {
                      if((z_76 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(d_29, t);
                  }
                  q_77 = t;
                  t = term_j_56;
                  s_77 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_56, q_77);
                  t = j_16(s_77, q_77, t);
                }
              }
            else
              {
                t = w_76;
                t = b_77;
                {
                  ATerm j_78 = t;
                  int k_78 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_77 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_57), term_v_56), term_q_56), term_n_56);
                      t = map_1_0(e_29, t);
                      v_77 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_77, v_77);
                      t = o_15(b_77, v_77, t);
                      t = b_77;
                      LocalPopChoice(k_78);
                      {
                        ATerm z_77 = NULL,a_78 = NULL;
                        t = term_j_56;
                        z_77 = t;
                        t = (ATerm) ATinsert(ATempty, b_77);
                        a_78 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_j_56, (ATerm) ATinsert(ATempty, b_77));
                        t = z_15(z_77, a_78, t);
                      }
                    }
                  else
                    {
                      t = j_78;
                      {
                        ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,g_78 = NULL,h_78 = NULL,p_78 = NULL;
                        t = term_h_38;
                        h_78 = t;
                        t = term_e_73;
                        p_78 = t;
                        t = term_f_73;
                        t = e_16(h_78, p_78, t);
                        b_78 = t;
                        t = term_l_38;
                        d_78 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_78), b_77), term_l_78), b_78);
                        g_78 = t;
                        t = SSL_printnl(d_78, g_78);
                        t = term_d_39;
                        c_78 = t;
                        t = SSL_exit(c_78);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_78), b_77), term_l_78), b_78);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(x_28, y_28, z_28, t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm u_78 = NULL;
  u_78 = t;
  if(match_string(t, "-S"))
    {
      t = u_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_78;
    }
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL;
  t = term_i_38;
  v_78 = t;
  t = term_z_37;
  w_78 = t;
  t = term_n_78;
  t = j_16(v_78, w_78, t);
  t = term_o_78;
  return(t);
}
static ATerm j_29 (ATerm t)
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
  ATerm y_78 = NULL,a_79 = NULL,b_79 = NULL;
  y_78 = t;
  t = SSL_string_to_int(y_78);
  a_79 = t;
  t = term_i_38;
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_38, a_79);
  t = j_16(b_79, a_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_78);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = term_t_78;
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
  ATerm i_79 = NULL,j_79 = NULL;
  t = term_x_78;
  i_79 = t;
  t = term_t_39;
  j_79 = t;
  t = term_z_78;
  t = j_16(i_79, j_79, t);
  t = term_c_79;
  return(t);
}
static ATerm v_29 (ATerm t)
{
  t = term_d_79;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_79 = t;
  int f_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_29, g_29, j_29, t);
      LocalPopChoice(f_79);
    }
  else
    {
      t = e_79;
      {
        ATerm g_79 = t;
        int h_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_29, q_29, r_29, t);
            LocalPopChoice(h_79);
          }
        else
          {
            t = g_79;
            t = Option_3_0(s_29, t_29, v_29, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,p_79 = NULL,q_79 = NULL,t_79 = NULL;
  m_79 = t;
  t = term_h_38;
  q_79 = t;
  t = term_v_38;
  t_79 = t;
  t = term_x_38;
  t = e_16(q_79, t_79, t);
  {
    static ATerm b_30 (ATerm t);
    static ATerm b_30 (ATerm t)
    {
      ATerm u_79 = NULL;
      u_79 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = m_79;
        }
      else
        {
          t = u_79;
        }
      return(t);
    }
    t = map_1_0(b_30, t);
  }
  n_79 = t;
  t = term_v_38;
  p_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, n_79);
  t = j_16(p_79, n_79, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_140 (ATerm), ATerm t)
{
  ATerm a_80 = NULL;
  a_80 = t;
  {
    ATerm k_79 = t;
    int l_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
        t = term_h_38;
        d_80 = t;
        t = term_i_38;
        e_80 = t;
        t = term_j_38;
        t = e_16(d_80, e_80, t);
        c_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_80, term_k_47);
        t = geq_0_0(t);
        t = a_80;
        t = z_140(t);
        LocalPopChoice(l_79);
      }
    else
      {
        t = k_79;
        t = a_80;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm j_80 = NULL;
  j_80 = t;
  {
    ATerm o_79 = t;
    int r_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
        t = term_h_38;
        n_80 = t;
        t = term_i_38;
        o_80 = t;
        t = term_j_38;
        t = e_16(n_80, o_80, t);
        m_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_80, term_a_45);
        t = geq_0_0(t);
        t = j_80;
        t = y_140(t);
        LocalPopChoice(r_79);
      }
    else
      {
        t = o_79;
        t = j_80;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
  a_81 = t;
  if(match_cons(t, sym__2))
    {
      b_81 = ATgetArgument(t, 0);
      c_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_79 = t;
    int v_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_81;
        if((b_81 != t))
          {
            _fail(t);
          }
        t = a_81;
        LocalPopChoice(v_79);
      }
    else
      {
        t = s_79;
        t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
        {
          ATerm w_79 = t;
          int x_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_81, c_81);
              LocalPopChoice(x_79);
            }
          else
            {
              t = w_79;
              t = SSL_gtr(b_81, c_81);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_81, c_81);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  {
    ATerm y_79 = t;
    int z_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_81 = NULL,l_81 = NULL,o_81 = NULL;
        t = term_h_38;
        l_81 = t;
        t = term_i_38;
        o_81 = t;
        t = term_j_38;
        t = e_16(l_81, o_81, t);
        k_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_81, term_d_51);
        t = geq_0_0(t);
        t = i_81;
        t = a_141(t);
        LocalPopChoice(z_79);
      }
    else
      {
        t = y_79;
        t = i_81;
      }
  }
  return(t);
}
static ATerm r_15 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm z_48, ATerm y_48, ATerm t)
{
  t = u_128(t);
  {
    static ATerm j_30 (ATerm t);
    static ATerm j_30 (ATerm t)
    {
      ATerm r_81 = NULL;
      r_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_48, r_81);
      t = t_128(t);
      return(t);
    }
    t = fetch_1_0(j_30, t);
  }
  t = y_48;
  return(t);
}
static ATerm s_15 (ATerm q_128 (ATerm), ATerm v_48, ATerm u_48, ATerm t)
{
  static ATerm s_82 (ATerm t);
  static ATerm s_82 (ATerm t)
  {
    ATerm g_82 = NULL,l_82 = NULL,o_82 = NULL;
    g_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_82 = ATgetFirst((ATermList) t);
            o_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_80 = t;
          int f_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_82;
              {
                static ATerm k_30 (ATerm t);
                static ATerm k_30 (ATerm t)
                {
                  t = u_48;
                  return(t);
                }
                t = r_15(q_128, k_30, l_82, o_82, t);
              }
              t = s_82(t);
              LocalPopChoice(f_80);
            }
          else
            {
              t = b_80;
              {
                ATerm l_41 = NULL,v_41 = NULL,y_18 = NULL;
                t = SSLgetAnnotations(g_82);
                l_41 = t;
                t = o_82;
                t = s_82(t);
                v_41 = t;
                t = (ATerm) ATinsert(CheckATermList(v_41), l_82);
                y_18 = t;
                t = SSLsetAnnotations(y_18, l_41);
              }
            }
        }
      }
    return(t);
  }
  t = v_48;
  t = s_82(t);
  return(t);
}
static ATerm n_30 (ATerm t)
{
  ATerm f_83 = NULL;
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      if((f_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_15 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL;
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_80 = ATgetArgument(t, 0);
            ATerm k_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
        t = e_16(u_64, v_64, t);
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        t = (ATerm) ATempty;
      }
  }
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_82, w_64);
  t = s_15(n_30, x_82, w_64, t);
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_64, v_64, w_82);
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(v_64, w_82, y_82, t);
  t = v_82;
  return(t);
}
ATerm map_1_0 (ATerm h_124 (ATerm), ATerm t)
{
  static ATerm w_83 (ATerm t);
  static ATerm w_83 (ATerm t)
  {
    ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
    t_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_83;
      }
    else
      {
        ATerm t_42 = NULL,d_43 = NULL,e_43 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_83 = ATgetFirst((ATermList) t);
            v_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_83);
        t_42 = t;
        t = u_83;
        t = h_124(t);
        d_43 = t;
        t = v_83;
        t = w_83(t);
        e_43 = t;
        t = (ATerm) ATinsert(CheckATermList(e_43), d_43);
        e_19 = t;
        t = SSLsetAnnotations(e_19, t_42);
      }
    return(t);
  }
  t = w_83(t);
  return(t);
}
static ATerm u_15 (ATerm x_137 (ATerm), ATerm e_65, ATerm d_65, ATerm t)
{
  static ATerm r_30 (ATerm t);
  static ATerm r_30 (ATerm t)
  {
    ATerm y_83 = NULL,z_83 = NULL;
    if(match_cons(t, sym__2))
      {
        y_83 = ATgetArgument(t, 0);
        z_83 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, e_65, y_83, z_83);
    t = x_137(t);
    return(t);
  }
  t = d_65;
  t = map_1_0(r_30, t);
  return(t);
}
static ATerm n_84 (ATerm h_84, ATerm t)
{
  t = SSL_fclose(h_84);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_84 = ATgetArgument(t, 0);
      {
        ATerm l_80 = t;
        int p_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_84);
            LocalPopChoice(p_80);
          }
        else
          {
            t = l_80;
            t = n_84(l_84, t);
          }
      }
    }
  else
    {
      t = n_84(l_84, t);
    }
  return(t);
}
static ATerm v_15 (ATerm u_42, ATerm t)
{
  t = SSL_read_term_from_stream(u_42);
  return(t);
}
static ATerm w_15 (ATerm n_58, ATerm o_58, ATerm t)
{
  ATerm o_84 = NULL;
  t = SSL_fopen(n_58, o_58);
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_84 = NULL;
  t = SSL_stdin_stream();
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_84 = NULL;
  t = SSL_stdout_stream();
  q_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_84 = NULL;
  t = SSL_stderr_stream();
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_84);
  return(t);
}
static ATerm l_86 (ATerm c_85, ATerm t)
{
  ATerm d_85 = NULL;
  t = SSL_explode_term(c_85);
  if(match_cons(t, sym__2))
    {
      ATerm q_80 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_80) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_80 = ATgetArgument(t, 1);
        if(((ATgetType(r_80) == AT_LIST) && !(ATisEmpty(r_80))))
          {
            d_85 = ATgetFirst((ATermList) r_80);
            {
              ATerm s_80 = (ATerm) ATgetNext((ATermList) r_80);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t)
{
  ATerm j_85 = NULL,o_85 = NULL,p_85 = NULL,t_85 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(i_85);
  p_85 = t;
  t = g_85;
  if(match_cons(t, sym_Path_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_85, h_85);
  g_19 = t;
  t = SSLsetAnnotations(g_19, p_85);
  if(match_cons(t, sym__2))
    {
      j_85 = ATgetArgument(t, 0);
      o_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(j_85, o_85, t);
  return(t);
}
static ATerm n_86 (ATerm v_85, ATerm w_85, ATerm x_85, ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,f_86 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(x_85);
  a_86 = t;
  t = SSL_is_string(v_85);
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_86, w_85);
  h_19 = t;
  t = SSLsetAnnotations(h_19, a_86);
  if(match_cons(t, sym__2))
    {
      y_85 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_15(y_85, z_85, t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm h_86 = NULL,j_86 = NULL,k_86 = NULL;
  h_86 = t;
  if(match_cons(t, sym__2))
    {
      j_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
      {
        ATerm t_80 = t;
        int u_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_86(h_86, t);
            LocalPopChoice(u_80);
          }
        else
          {
            t = t_80;
            {
              ATerm v_80 = t;
              int w_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_86(j_86, k_86, h_86, t);
                  LocalPopChoice(w_80);
                }
              else
                {
                  t = v_80;
                  t = n_86(j_86, k_86, h_86, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_86(h_86, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,j_87 = NULL;
  j_87 = t;
  {
    ATerm x_80 = t;
    int y_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_87, term_z_80);
        t = x_15(t);
        LocalPopChoice(y_80);
      }
    else
      {
        t = x_80;
        {
          ATerm x_43 = NULL,z_43 = NULL;
          t = term_d_81;
          z_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_81, j_87);
          t = k_16(z_43, j_87, t);
          x_43 = t;
          t = SSL_perror(x_43);
          _fail(t);
        }
      }
  }
  q_86 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_15(r_86, t);
  p_86 = t;
  t = q_86;
  t = fclose_0_0(t);
  t = p_86;
  return(t);
}
static ATerm t_30 (ATerm t)
{
  t = term_e_81;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  t = term_f_81;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_81 = t;
  int h_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_87 = NULL,n_87 = NULL;
      m_87 = t;
      t = (ATerm) ATinsert(ATempty, term_j_81);
      n_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_87, (ATerm) ATinsert(ATempty, term_j_81));
      t = a_16(m_87, n_87, t);
      LocalPopChoice(h_81);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_81;
      {
        ATerm m_81 = t;
        int n_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_81 = t;
            if((PushChoice() == 0))
              {
                ATerm o_87 = NULL,t_87 = NULL;
                o_87 = t;
                t = (ATerm) ATinsert(ATempty, term_x_60);
                t_87 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_87, (ATerm) ATinsert(ATempty, term_x_60));
                t = a_16(o_87, t_87, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_81;
              }
            t = debug_1_0(t_30, t);
            LocalPopChoice(n_81);
          }
        else
          {
            t = m_81;
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
  t = term_q_81;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = debug_1_0(z_30, t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = term_s_81;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,y_88 = NULL;
  v_88 = t;
  t = term_l_38;
  w_88 = t;
  t = (ATerm) ATinsert(ATempty, term_t_81);
  y_88 = t;
  t = SSL_printnl(w_88, y_88);
  t = v_88;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm z_88 = NULL,b_89 = NULL,c_89 = NULL;
  if(match_cons(t, sym__3))
    {
      z_88 = ATgetArgument(t, 0);
      b_89 = ATgetArgument(t, 1);
      c_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_15(z_88, b_89, c_89, t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  t = term_l_38;
  e_89 = t;
  t = (ATerm) ATinsert(ATempty, term_u_81);
  f_89 = t;
  t = SSL_printnl(e_89, f_89);
  t = d_89;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL;
  g_89 = t;
  t = term_l_38;
  h_89 = t;
  t = (ATerm) ATinsert(ATempty, term_t_81);
  i_89 = t;
  t = SSL_printnl(h_89, i_89);
  t = g_89;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,y_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  v_87 = t;
  t = if_verbose5_1_0(w_30, t);
  {
    ATerm v_81 = t;
    if((PushChoice() == 0))
      {
        ATerm n_88 = NULL,r_88 = NULL;
        t = term_h_72;
        n_88 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_87);
        r_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_72, (ATerm) ATmakeAppl(sym_Imported_1, v_87));
        t = e_16(n_88, r_88, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_81;
      }
  }
  y_87 = t;
  t = term_h_72;
  g_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_72, term_w_81, (ATerm) ATinsert(ATempty, v_87));
  t = lookup_table_0_1(g_88, t);
  m_88 = t;
  t = term_w_81;
  j_88 = t;
  t = (ATerm) ATinsert(ATempty, v_87);
  k_88 = t;
  t = m_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(j_88, k_88, l_88, t);
  t = y_87;
  t = if_verbose4_1_0(y_30, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_31, t);
  w_87 = t;
  t = term_h_72;
  f_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_72, w_87);
  t = u_15(b_31, f_88, w_87, t);
  t = if_verbose6_1_0(c_31, t);
  t = term_h_72;
  a_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_72, (ATerm)ATmakeAppl(sym_Imported_1, v_87), (ATerm) ATempty);
  t = lookup_table_0_1(a_88, t);
  e_88 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_87);
  b_88 = t;
  t = (ATerm) ATempty;
  c_88 = t;
  t = e_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(b_88, c_88, d_88, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_72, (ATerm)ATmakeAppl(sym_Imported_1, v_87), (ATerm) ATempty);
  t = if_verbose4_1_0(d_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,z_89 = NULL;
  w_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_89;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_89 = ATgetFirst((ATermList) t);
          z_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_81 = t;
        int y_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_44 = NULL,l_44 = NULL,n_44 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(w_89);
            g_44 = t;
            t = x_89;
            t = i_132(t);
            l_44 = t;
            t = z_89;
            t = filter_1_0(i_132, t);
            n_44 = t;
            t = (ATerm) ATinsert(CheckATermList(n_44), l_44);
            n_19 = t;
            t = SSLsetAnnotations(n_19, g_44);
            LocalPopChoice(y_81);
          }
        else
          {
            t = x_81;
            t = z_89;
            t = filter_1_0(i_132, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t)
{
  static ATerm d_90 (ATerm t);
  static ATerm d_90 (ATerm t)
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_116(t);
        t = d_90(t);
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        t = x_116(t);
      }
    return(t);
  }
  t = d_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_82 = t;
  int c_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_90 = NULL,h_90 = NULL;
      t = term_h_38;
      g_90 = t;
      t = term_d_82;
      h_90 = t;
      t = term_e_82;
      t = e_16(g_90, h_90, t);
      LocalPopChoice(c_82);
    }
  else
    {
      t = b_82;
      {
        ATerm f_82 = t;
        int h_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_90 = NULL;
            t = term_i_82;
            j_90 = t;
            t = SSL_getenv(j_90);
            LocalPopChoice(h_82);
          }
        else
          {
            t = f_82;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = debug_1_0(g_31, t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  t = term_j_82;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL;
  t = term_h_72;
  r_90 = t;
  t = term_k_82;
  s_90 = t;
  t = term_m_82;
  t = e_16(r_90, s_90, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_82 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_82;
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
  t = term_p_82;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_90 = NULL;
  t = if_verbose5_1_0(f_31, t);
  m_90 = t;
  {
    ATerm q_82 = t;
    int r_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_90 = NULL,p_90 = NULL;
        t = term_h_72;
        o_90 = t;
        t = term_w_81;
        p_90 = t;
        t = term_t_82;
        t = e_16(o_90, p_90, t);
        LocalPopChoice(r_82);
      }
    else
      {
        t = q_82;
        {
          ATerm q_90 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          q_90 = t;
          t = repeat_2_0(h_31, _id, t);
          t = q_90;
        }
      }
  }
  t = m_90;
  t = if_verbose5_1_0(i_31, t);
  return(t);
}
static ATerm u_91 (ATerm w_90, ATerm t)
{
  ATerm a_91 = NULL,c_91 = NULL,d_91 = NULL;
  t = term_h_72;
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, w_90);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_72, (ATerm) ATmakeAppl(sym_Tool_1, w_90));
  t = e_16(c_91, d_91, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_82 = ATgetFirst((ATermList) t);
      if(match_cons(u_82, sym__2))
        {
          ATerm a_83 = ATgetArgument(u_82, 0);
          a_91 = ATgetArgument(u_82, 1);
        }
      else
        _fail(t);
      {
        ATerm z_82 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_91;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(m_31, t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_g_72;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm e_91 = NULL,i_91 = NULL,k_91 = NULL;
  t = xtc_load_0_0(t);
  k_91 = t;
  if(match_cons(t, sym__2))
    {
      e_91 = ATgetArgument(t, 0);
      i_91 = ATgetArgument(t, 1);
      {
        ATerm b_83 = t;
        int c_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
            t = term_h_72;
            q_91 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, e_91);
            r_91 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_h_72, (ATerm) ATmakeAppl(sym_Tool_1, e_91));
            t = e_16(q_91, r_91, t);
            {
              static ATerm k_31 (ATerm t);
              static ATerm k_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((i_91 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((p_91 != NULL) && (p_91 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_31, t);
            }
            t = not_null(p_91);
            LocalPopChoice(c_83);
          }
        else
          {
            t = b_83;
            t = u_91(k_91, t);
          }
      }
    }
  else
    {
      t = u_91(k_91, t);
    }
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL,e_92 = NULL,f_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
      t = term_t_39;
      t = r_0(t);
      g_92 = t;
      t = term_h_75;
      h_92 = t;
      t = term_i_75;
      i_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, g_92);
      t = f_16(h_92, i_92, g_92, t);
      _fail(t);
    }
  else
    {
      ATerm r_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_92 = ATgetFirst((ATermList) t);
          c_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_92 = ATgetFirst((ATermList) t);
          f_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_92;
      t = o_0(t);
      t = e_92;
      t = p_0(t);
      r_92 = t;
      t = (ATerm) ATinsert(CheckATermList(f_92), r_92);
    }
  return(t);
}
static ATerm y_15 (ATerm k_77, ATerm l_77, ATerm t)
{
  ATerm d_83 = t;
  int e_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_92 = NULL,t_92 = NULL,x_92 = NULL;
      t = term_h_38;
      x_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, k_77);
      t = e_16(x_92, k_77, t);
      t = term_h_38;
      s_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, k_77);
      t = lookup_table_0_1(s_92, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          t_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_16(k_77, t_92, t);
      t = (ATerm) ATmakeAppl(sym__2, term_h_38, k_77);
      LocalPopChoice(e_83);
    }
  else
    {
      t = d_83;
      t = (ATerm) ATmakeAppl(sym__2, k_77, l_77);
      t = j_16(k_77, l_77, t);
    }
  return(t);
}
static ATerm z_15 (ATerm n_77, ATerm m_77, ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL;
  t = n_77;
  {
    ATerm g_83 = t;
    int h_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_93 = NULL;
        t = term_h_38;
        f_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_38, n_77);
        t = e_16(f_93, n_77, t);
        LocalPopChoice(h_83);
      }
    else
      {
        t = g_83;
        t = (ATerm) ATempty;
      }
  }
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_77, b_93);
  t = conc_0_0(t);
  a_93 = t;
  t = term_h_38;
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, n_77, a_93);
  t = lookup_table_0_1(c_93, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(n_77, a_93, d_93, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, n_77, a_93);
  return(t);
}
static ATerm a_16 (ATerm b_58, ATerm c_58, ATerm t)
{
  t = SSL_access(b_58, c_58);
  return(t);
}
ATerm at_end_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  static ATerm s_94 (ATerm t);
  static ATerm s_94 (ATerm t)
  {
    ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
    r_94 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_94 = ATgetFirst((ATermList) t);
        q_94 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_45 = NULL,h_45 = NULL,r_19 = NULL;
          t = SSLgetAnnotations(r_94);
          d_45 = t;
          t = q_94;
          t = s_94(t);
          h_45 = t;
          t = (ATerm) ATinsert(CheckATermList(h_45), p_94);
          r_19 = t;
          t = SSLsetAnnotations(r_19, d_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_94;
        t = w_124(t);
      }
    return(t);
  }
  t = s_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  l_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_93;
    }
  else
    {
      static ATerm n_31 (ATerm t);
      static ATerm n_31 (ATerm t)
      {
        t = not_null(n_93);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_93 = ATgetFirst((ATermList) t);
          if(((n_93 != NULL) && (n_93 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_93;
      t = at_end_1_0(n_31, t);
    }
  return(t);
}
static ATerm e_95 (ATerm w_94, ATerm t)
{
  ATerm x_94 = NULL;
  t = SSL_explode_term(w_94);
  if(match_cons(t, sym__2))
    {
      ATerm i_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_94;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  b_95 = t;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      {
        ATerm j_83 = t;
        int k_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_31 (ATerm t);
            static ATerm p_31 (ATerm t)
            {
              t = a_95;
              return(t);
            }
            t = z_94;
            t = at_end_1_0(p_31, t);
            LocalPopChoice(k_83);
          }
        else
          {
            t = j_83;
            t = e_95(b_95, t);
          }
      }
    }
  else
    {
      t = e_95(b_95, t);
    }
  return(t);
}
static ATerm b_16 (ATerm o_77, ATerm p_77, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  t = o_77;
  {
    ATerm l_83 = t;
    int m_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL;
        t = term_h_38;
        k_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_38, o_77);
        t = e_16(k_95, o_77, t);
        LocalPopChoice(m_83);
      }
    else
      {
        t = l_83;
        t = (ATerm) ATempty;
      }
  }
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_95, p_77);
  t = conc_0_0(t);
  f_95 = t;
  t = term_h_38;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, o_77, f_95);
  t = lookup_table_0_1(h_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(o_77, f_95, i_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, o_77, f_95);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  if(match_string(t, "-o"))
    {
      t = m_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_95;
    }
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm n_95 = NULL,o_95 = NULL;
  n_95 = t;
  t = term_s_38;
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_38, n_95);
  t = j_16(o_95, n_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_95);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_n_83;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_31, r_31, s_31, t);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm q_95 = NULL;
  q_95 = t;
  if(match_string(t, "-i"))
    {
      t = q_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_95;
    }
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  r_95 = t;
  t = term_b_56;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_56, r_95);
  t = j_16(s_95, r_95, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_95);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_o_83;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_31, y_31, a_32, t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm e_96 = NULL;
  e_96 = t;
  if(match_string(t, "-I"))
    {
      t = e_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = e_96;
    }
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm f_96 = NULL,g_96 = NULL,h_96 = NULL;
  f_96 = t;
  t = term_v_62;
  g_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_96), term_v_62);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_62, (ATerm) ATinsert(ATinsert(ATempty, f_96), term_v_62));
  t = b_16(g_96, h_96, t);
  t = term_t_39;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_p_83;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm k_96 = NULL;
  k_96 = t;
  if(match_string(t, "--main"))
    {
      t = k_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = k_96;
    }
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  l_96 = t;
  t = term_g_61;
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_61, l_96);
  t = j_16(m_96, l_96, t);
  t = term_t_39;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_q_83;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  if(match_string(t, "--library"))
    {
      t = n_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = n_96;
    }
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  t = term_l_40;
  o_96 = t;
  t = term_t_39;
  p_96 = t;
  t = term_r_83;
  t = j_16(o_96, p_96, t);
  t = term_t_39;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_s_83;
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
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  t = term_f_40;
  t_96 = t;
  t = (ATerm) ATinsert(ATempty, s_96);
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, (ATerm) ATinsert(ATempty, s_96));
  t = b_16(t_96, u_96, t);
  t = term_t_39;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_x_83;
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
  ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL;
  x_96 = t;
  t = term_g_39;
  y_96 = t;
  t = (ATerm) ATinsert(ATempty, x_96);
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATempty, x_96));
  t = z_15(y_96, z_96, t);
  t = term_t_39;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_a_84;
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
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  a_97 = t;
  t = term_b_84;
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_84, a_97);
  t = k_16(e_97, a_97, t);
  b_97 = t;
  t = term_i_39;
  c_97 = t;
  t = (ATerm) ATinsert(ATempty, b_97);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATinsert(ATempty, b_97));
  t = z_15(c_97, d_97, t);
  t = term_t_39;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_c_84;
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
  ATerm f_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
  f_97 = t;
  t = term_d_84;
  l_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_84, f_97);
  t = k_16(l_97, f_97, t);
  i_97 = t;
  t = term_v_38;
  j_97 = t;
  t = (ATerm) ATinsert(ATempty, i_97);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, i_97));
  t = z_15(j_97, k_97, t);
  t = term_t_39;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_e_84;
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
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  m_97 = t;
  t = term_f_84;
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_84, m_97);
  t = k_16(q_97, m_97, t);
  n_97 = t;
  t = term_v_38;
  o_97 = t;
  t = (ATerm) ATinsert(ATempty, n_97);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, n_97));
  t = z_15(o_97, p_97, t);
  t = term_t_39;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_g_84;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL;
  r_97 = t;
  {
    ATerm i_84 = t;
    int j_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_97 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_60);
        v_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATinsert(ATempty, term_x_60));
        t = a_16(r_97, v_97, t);
        LocalPopChoice(j_84);
      }
    else
      {
        t = i_84;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_84), r_97), term_m_84);
        {
          ATerm t_84 = t;
          int u_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_45 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_84), r_97), term_m_84);
              x_45 = t;
              t = SSL_concat_strings(x_45);
              t = xtc_find_0_0(t);
              LocalPopChoice(u_84);
            }
          else
            {
              t = t_84;
              {
                ATerm a_98 = NULL;
                t = term_d_39;
                a_98 = t;
                t = SSL_exit(a_98);
              }
            }
        }
      }
  }
  s_97 = t;
  t = term_v_38;
  t_97 = t;
  t = (ATerm) ATinsert(ATempty, s_97);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATempty, s_97));
  t = z_15(t_97, u_97, t);
  t = term_t_39;
  return(t);
}
static ATerm m_33 (ATerm t)
{
  t = term_v_84;
  return(t);
}
static ATerm n_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_33 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,f_98 = NULL,g_98 = NULL,j_98 = NULL;
  b_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_84), b_98), term_w_84);
  j_98 = t;
  t = SSL_concat_strings(j_98);
  c_98 = t;
  t = term_i_39;
  f_98 = t;
  t = (ATerm) ATinsert(ATempty, c_98);
  g_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, (ATerm) ATinsert(ATempty, c_98));
  t = z_15(f_98, g_98, t);
  t = term_t_39;
  return(t);
}
static ATerm s_33 (ATerm t)
{
  t = term_y_84;
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
  ATerm k_98 = NULL,l_98 = NULL;
  t = term_m_39;
  k_98 = t;
  t = term_t_39;
  l_98 = t;
  t = term_z_84;
  t = j_16(k_98, l_98, t);
  t = term_t_39;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_a_85;
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
  ATerm m_98 = NULL,q_98 = NULL;
  t = term_i_62;
  m_98 = t;
  t = term_t_39;
  q_98 = t;
  t = term_b_85;
  t = j_16(m_98, q_98, t);
  t = term_t_39;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  t = term_e_85;
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
  ATerm r_98 = NULL,s_98 = NULL;
  t = term_s_57;
  r_98 = t;
  t = term_t_39;
  s_98 = t;
  t = term_f_85;
  t = j_16(r_98, s_98, t);
  t = term_t_39;
  return(t);
}
static ATerm k_34 (ATerm t)
{
  t = term_k_85;
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
  ATerm w_98 = NULL,z_98 = NULL,a_99 = NULL;
  w_98 = t;
  t = SSL_string_to_int(w_98);
  z_98 = t;
  t = term_v_43;
  a_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, z_98);
  t = j_16(a_99, z_98, t);
  t = term_t_39;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = term_l_85;
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
  ATerm b_99 = NULL,d_99 = NULL,f_99 = NULL;
  b_99 = t;
  t = SSL_string_to_int(b_99);
  d_99 = t;
  t = term_c_44;
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_44, d_99);
  t = j_16(f_99, d_99, t);
  t = term_t_39;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  t = term_m_85;
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
  ATerm h_99 = NULL,m_99 = NULL;
  t = term_o_45;
  h_99 = t;
  t = term_t_39;
  m_99 = t;
  t = term_n_85;
  t = y_15(h_99, m_99, t);
  t = term_t_39;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_q_85;
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
  ATerm n_99 = NULL,o_99 = NULL;
  n_99 = t;
  if(match_string(t, "old"))
    {
      t = n_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = n_99;
    }
  t = term_x_58;
  o_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_58, n_99);
  t = j_16(o_99, n_99, t);
  t = term_t_39;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_r_85;
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
  t = term_s_85;
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
  t = term_u_85;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_t_39;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  t = term_b_86;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  ATerm x_99 = NULL;
  x_99 = t;
  if(match_string(t, "-h"))
    {
      t = x_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = x_99;
    }
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  t = term_c_86;
  y_99 = t;
  t = term_t_39;
  z_99 = t;
  t = term_d_86;
  t = j_16(y_99, z_99, t);
  t = term_t_39;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_e_86;
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
  ATerm a_100 = NULL,d_100 = NULL;
  t = term_g_86;
  a_100 = t;
  t = term_t_39;
  d_100 = t;
  t = term_i_86;
  t = j_16(a_100, d_100, t);
  t = term_t_39;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = term_o_86;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  ATerm e_100 = NULL;
  e_100 = t;
  if(match_string(t, "-v"))
    {
      t = e_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = e_100;
    }
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm f_100 = NULL,h_100 = NULL;
  t = term_s_86;
  f_100 = t;
  t = term_t_39;
  h_100 = t;
  t = term_t_86;
  t = j_16(f_100, h_100, t);
  t = term_t_39;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_u_86;
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
  ATerm i_100 = NULL,n_100 = NULL,o_100 = NULL;
  i_100 = t;
  t = term_q_58;
  n_100 = t;
  t = term_d_39;
  o_100 = t;
  t = term_v_86;
  t = j_16(n_100, o_100, t);
  t = i_100;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  t = term_q_58;
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
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  p_100 = t;
  t = term_v_58;
  q_100 = t;
  t = term_z_37;
  r_100 = t;
  t = term_w_86;
  t = j_16(q_100, r_100, t);
  t = p_100;
  return(t);
}
static ATerm d_36 (ATerm t)
{
  t = term_v_58;
  return(t);
}
static ATerm e_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_36 (ATerm t)
{
  ATerm s_100 = NULL,v_100 = NULL;
  t = term_l_63;
  s_100 = t;
  t = term_t_39;
  v_100 = t;
  t = term_x_86;
  t = j_16(s_100, v_100, t);
  t = term_t_39;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_y_86;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm z_86 = t;
  int a_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_87);
    }
  else
    {
      t = z_86;
      {
        ATerm b_87 = t;
        int c_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(c_87);
          }
        else
          {
            t = b_87;
            {
              ATerm d_87 = t;
              int e_87 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_32, c_32, e_32, t);
                  LocalPopChoice(e_87);
                }
              else
                {
                  t = d_87;
                  {
                    ATerm f_87 = t;
                    int g_87 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_32, g_32, h_32, t);
                        LocalPopChoice(g_87);
                      }
                    else
                      {
                        t = f_87;
                        {
                          ATerm h_87 = t;
                          int i_87 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(i_32, j_32, k_32, t);
                              LocalPopChoice(i_87);
                            }
                          else
                            {
                              t = h_87;
                              {
                                ATerm k_87 = t;
                                int l_87 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_32, m_32, o_32, t);
                                    LocalPopChoice(l_87);
                                  }
                                else
                                  {
                                    t = k_87;
                                    {
                                      ATerm p_87 = t;
                                      int q_87 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_32, q_32, s_32, t);
                                          LocalPopChoice(q_87);
                                        }
                                      else
                                        {
                                          t = p_87;
                                          {
                                            ATerm r_87 = t;
                                            int s_87 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(t_32, u_32, v_32, t);
                                                LocalPopChoice(s_87);
                                              }
                                            else
                                              {
                                                t = r_87;
                                                {
                                                  ATerm u_87 = t;
                                                  int x_87 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(y_32, z_32, b_33, t);
                                                      LocalPopChoice(x_87);
                                                    }
                                                  else
                                                    {
                                                      t = u_87;
                                                      {
                                                        ATerm z_87 = t;
                                                        int h_88 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(c_33, d_33, f_33, t);
                                                            LocalPopChoice(h_88);
                                                          }
                                                        else
                                                          {
                                                            t = z_87;
                                                            {
                                                              ATerm i_88 = t;
                                                              int o_88 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(h_33, i_33, m_33, t);
                                                                  LocalPopChoice(o_88);
                                                                }
                                                              else
                                                                {
                                                                  t = i_88;
                                                                  {
                                                                    ATerm p_88 = t;
                                                                    int q_88 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(n_33, q_33, s_33, t);
                                                                        LocalPopChoice(q_88);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_88;
                                                                        {
                                                                          ATerm s_88 = t;
                                                                          int t_88 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(t_33, w_33, a_34, t);
                                                                              LocalPopChoice(t_88);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_88;
                                                                              {
                                                                                ATerm u_88 = t;
                                                                                int x_88 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(b_34, c_34, d_34, t);
                                                                                    LocalPopChoice(x_88);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_88;
                                                                                    {
                                                                                      ATerm a_89 = t;
                                                                                      int j_89 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(i_34, j_34, k_34, t);
                                                                                          LocalPopChoice(j_89);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_89;
                                                                                          {
                                                                                            ATerm k_89 = t;
                                                                                            int l_89 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(n_34, r_34, s_34, t);
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
                                                                                                      t = ArgOption_3_0(t_34, u_34, y_34, t);
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
                                                                                                            t = Option_3_0(a_35, b_35, c_35, t);
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
                                                                                                                  t = ArgOption_3_0(e_35, f_35, g_35, t);
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
                                                                                                                        t = ArgOption_3_0(h_35, j_35, k_35, t);
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
                                                                                                                              ATerm v_99 = NULL;
                                                                                                                              v_99 = t;
                                                                                                                              t = term_u_85;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = v_99;
                                                                                                                              t = Option_3_0(l_35, m_35, n_35, t);
                                                                                                                              LocalPopChoice(v_89);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_89;
                                                                                                                              {
                                                                                                                                ATerm y_89 = t;
                                                                                                                                int a_90 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(a_90);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = y_89;
                                                                                                                                    {
                                                                                                                                      ATerm b_90 = t;
                                                                                                                                      int c_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(o_35, p_35, q_35, t);
                                                                                                                                          LocalPopChoice(c_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_90;
                                                                                                                                          {
                                                                                                                                            ATerm e_90 = t;
                                                                                                                                            int f_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(r_35, s_35, t_35, t);
                                                                                                                                                LocalPopChoice(f_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = e_90;
                                                                                                                                                {
                                                                                                                                                  ATerm i_90 = t;
                                                                                                                                                  int k_90 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(u_35, v_35, w_35, t);
                                                                                                                                                      LocalPopChoice(k_90);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = i_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm l_90 = t;
                                                                                                                                                        int n_90 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
                                                                                                                                                            LocalPopChoice(n_90);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = l_90;
                                                                                                                                                            {
                                                                                                                                                              ATerm t_90 = t;
                                                                                                                                                              int u_90 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(x_35, y_35, z_35, t);
                                                                                                                                                                  LocalPopChoice(u_90);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = t_90;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm v_90 = t;
                                                                                                                                                                    int x_90 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(a_36, b_36, d_36, t);
                                                                                                                                                                        LocalPopChoice(x_90);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = v_90;
                                                                                                                                                                        t = Option_3_0(e_36, f_36, h_36, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm c_16 (ATerm n_68, ATerm o_68, ATerm t)
{
  ATerm x_100 = NULL;
  t = SSL_hashtable_remove(o_68, n_68);
  x_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_100);
  return(t);
}
static ATerm d_16 (ATerm s_68, ATerm t)
{
  ATerm z_100 = NULL;
  t = SSL_hashtable_destroy(s_68);
  z_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_100);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_101 = NULL,b_101 = NULL,g_101 = NULL,i_101 = NULL;
  a_101 = t;
  t = table_hashtable_0_0(t);
  b_101 = t;
  t = lookup_table_0_1(a_101, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_16(i_101, t);
  t = b_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(a_101, g_101, t);
  t = a_101;
  return(t);
}
ATerm fetch_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  static ATerm z_102 (ATerm t);
  static ATerm z_102 (ATerm t)
  {
    ATerm s_102 = NULL,u_102 = NULL,y_102 = NULL;
    s_102 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_102 = ATgetFirst((ATermList) t);
        y_102 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_90 = t;
      int z_90 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_46 = NULL,m_46 = NULL,t_19 = NULL;
          t = SSLgetAnnotations(s_102);
          g_46 = t;
          t = u_102;
          t = p_124(t);
          m_46 = t;
          t = (ATerm) ATinsert(CheckATermList(y_102), m_46);
          t_19 = t;
          t = SSLsetAnnotations(t_19, g_46);
          LocalPopChoice(z_90);
        }
      else
        {
          t = y_90;
          {
            ATerm g_47 = NULL,j_47 = NULL,u_19 = NULL;
            t = SSLgetAnnotations(s_102);
            g_47 = t;
            t = y_102;
            t = z_102(t);
            j_47 = t;
            t = (ATerm) ATinsert(CheckATermList(j_47), u_102);
            u_19 = t;
            t = SSLsetAnnotations(u_19, g_47);
          }
        }
    }
    return(t);
  }
  t = z_102(t);
  return(t);
}
static ATerm i_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_36 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL;
  t = term_b_91;
  e_103 = t;
  t = term_t_39;
  f_103 = t;
  t = term_f_91;
  t = j_16(e_103, f_103, t);
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = term_g_91;
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
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL;
  t = term_b_91;
  i_103 = t;
  t = term_t_39;
  j_103 = t;
  t = term_f_91;
  t = j_16(i_103, j_103, t);
  t = term_s_86;
  g_103 = t;
  t = term_t_39;
  h_103 = t;
  t = term_t_86;
  t = j_16(g_103, h_103, t);
  t = term_h_91;
  return(t);
}
static ATerm p_36 (ATerm t)
{
  t = term_j_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_91 = t;
  int m_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_36, k_36, l_36, t);
      LocalPopChoice(m_91);
    }
  else
    {
      t = l_91;
      t = Option_3_0(m_36, n_36, p_36, t);
    }
  return(t);
}
static ATerm f_16 (ATerm x_63, ATerm y_63, ATerm w_63, ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,s_103 = NULL,t_103 = NULL;
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_63, y_63);
  {
    ATerm n_91 = t;
    int o_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_91 = ATgetArgument(t, 0);
            ATerm t_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_63, y_63);
        t = e_16(x_63, y_63, t);
        LocalPopChoice(o_91);
      }
    else
      {
        t = n_91;
        t = (ATerm) ATempty;
      }
  }
  o_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_63, y_63, (ATerm) ATinsert(CheckATermList(o_103), w_63));
  t = lookup_table_0_1(x_63, t);
  t_103 = t;
  t = (ATerm) ATinsert(CheckATermList(o_103), w_63);
  p_103 = t;
  t = t_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(y_63, p_103, s_103, t);
  t = n_103;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_104 = NULL,g_104 = NULL,h_104 = NULL;
      t = term_t_39;
      t = e_0(t);
      d_104 = t;
      t = term_h_75;
      g_104 = t;
      t = term_i_75;
      h_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_75, term_i_75, d_104);
      t = f_16(g_104, h_104, d_104, t);
      _fail(t);
    }
  else
    {
      ATerm k_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_104 = ATgetFirst((ATermList) t);
          c_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_104;
      t = b_0(t);
      t = term_t_39;
      t = c_0(t);
      k_104 = t;
      t = (ATerm) ATinsert(CheckATermList(c_104), k_104);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,o_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL,e_20 = NULL;
  s_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_104 = ATgetFirst((ATermList) t);
      o_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_104);
  l_104 = t;
  t = m_104;
  t = g_93(t);
  q_104 = t;
  t = o_104;
  t = h_93(t);
  r_104 = t;
  t = (ATerm) ATinsert(CheckATermList(r_104), q_104);
  e_20 = t;
  t = SSLsetAnnotations(e_20, l_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_145 (ATerm), ATerm t)
{
  ATerm b_105 = NULL,f_105 = NULL,n_105 = NULL,r_105 = NULL,y_105 = NULL,z_105 = NULL,i_20 = NULL;
  b_105 = t;
  {
    ATerm v_91 = t;
    int w_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_91;
        t = t_145(t);
        LocalPopChoice(w_91);
      }
    else
      {
        t = v_91;
      }
  }
  t = b_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_105 = ATgetFirst((ATermList) t);
      r_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_105);
  f_105 = t;
  t = term_e_73;
  z_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_73, n_105);
  t = j_16(z_105, n_105, t);
  t = r_105;
  {
    static ATerm q_107 (ATerm t);
    static ATerm q_107 (ATerm t)
    {
      ATerm y_91 = t;
      int z_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_92 = t;
          int d_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_106 = NULL;
              r_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_106;
              LocalPopChoice(d_92);
            }
          else
            {
              t = a_92;
              t = t_145(t);
              t = Cons_2_0(_id, q_107, t);
            }
          LocalPopChoice(z_91);
        }
      else
        {
          t = y_91;
          {
            ATerm y_106 = NULL,l_107 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_106 = ATgetFirst((ATermList) t);
                l_107 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_107), (ATerm) ATmakeAppl(sym_Undefined_1, y_106));
          }
        }
      return(t);
    }
    t = q_107(t);
  }
  y_105 = t;
  t = (ATerm) ATinsert(CheckATermList(y_105), (ATerm) ATmakeAppl(sym_Program_1, n_105));
  i_20 = t;
  t = SSLsetAnnotations(i_20, f_105);
  return(t);
}
static ATerm t_36 (ATerm t)
{
  ATerm j_108 = NULL;
  j_108 = t;
  if(match_string(t, "--help"))
    {
      t = j_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_108;
        }
    }
  return(t);
}
static ATerm x_36 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL;
  t = term_c_86;
  k_108 = t;
  t = term_t_39;
  l_108 = t;
  t = term_d_86;
  t = j_16(k_108, l_108, t);
  t = term_j_92;
  return(t);
}
static ATerm b_37 (ATerm t)
{
  t = term_k_92;
  return(t);
}
static ATerm c_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t)
{
  ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,h_108 = NULL;
  y_107 = t;
  t = term_h_75;
  z_107 = t;
  t = term_l_92;
  t = lookup_table_0_1(z_107, t);
  h_108 = t;
  t = term_i_75;
  c_108 = t;
  t = (ATerm) ATempty;
  d_108 = t;
  t = h_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(c_108, d_108, e_108, t);
  t = y_107;
  {
    static ATerm r_36 (ATerm t);
    static ATerm r_36 (ATerm t)
    {
      ATerm m_92 = t;
      int n_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_145(t);
          LocalPopChoice(n_92);
        }
      else
        {
          t = m_92;
          {
            ATerm o_92 = t;
            int p_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_36, x_36, b_37, t);
                LocalPopChoice(p_92);
              }
            else
              {
                t = o_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_36, t);
  }
  {
    ATerm q_92 = t;
    int u_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_109 = NULL;
        i_109 = t;
        {
          ATerm v_92 = t;
          int w_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48 = NULL;
              t = i_109;
              {
                ATerm y_92 = t;
                int z_92 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_48 = NULL,c_48 = NULL;
                    t = term_h_38;
                    b_48 = t;
                    t = term_c_86;
                    c_48 = t;
                    t = term_e_93;
                    t = e_16(b_48, c_48, t);
                    LocalPopChoice(z_92);
                  }
                else
                  {
                    t = y_92;
                    t = fetch_1_0(c_37, t);
                  }
              }
              t = i_109;
              t = r_145(t);
              t = term_z_37;
              a_48 = t;
              t = SSL_exit(a_48);
              LocalPopChoice(w_92);
            }
          else
            {
              t = v_92;
              {
                ATerm i_48 = NULL,m_48 = NULL,o_48 = NULL;
                t = term_h_38;
                m_48 = t;
                t = term_b_91;
                o_48 = t;
                t = term_i_93;
                t = e_16(m_48, o_48, t);
                t = i_109;
                t = s_145(t);
                t = term_z_37;
                i_48 = t;
                t = SSL_exit(i_48);
              }
            }
        }
        LocalPopChoice(u_92);
      }
    else
      {
        t = q_92;
        {
          ATerm j_93 = t;
          int k_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_109 = NULL,k_109 = NULL,l_109 = NULL;
              static ATerm g_37 (ATerm t);
              static ATerm g_37 (ATerm t)
              {
                ATerm m_109 = NULL,n_109 = NULL,r_109 = NULL,m_20 = NULL;
                r_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_109);
                m_109 = t;
                t = n_109;
                if(((w_107 != NULL) && (w_107 != t)))
                  _fail(t);
                else
                  w_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_109);
                m_20 = t;
                t = SSLsetAnnotations(m_20, m_109);
                return(t);
              }
              t = fetch_1_0(g_37, t);
              t = term_l_38;
              k_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_107)), term_o_93);
              l_109 = t;
              t = SSL_printnl(k_109, l_109);
              t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_107)), term_o_93));
              t = r_145(t);
              t = term_d_39;
              j_109 = t;
              t = SSL_exit(j_109);
              LocalPopChoice(k_93);
            }
          else
            {
              t = j_93;
            }
        }
      }
  }
  x_107 = t;
  t = term_h_75;
  t = table_destroy_0_0(t);
  t = x_107;
  return(t);
}
static ATerm h_16 (ATerm i_68, ATerm j_68, ATerm k_68, ATerm t)
{
  ATerm x_109 = NULL;
  t = SSL_hashtable_put(k_68, i_68, j_68);
  x_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_109);
  return(t);
}
static ATerm i_16 (ATerm l_68, ATerm m_68, ATerm t)
{
  t = SSL_hashtable_get(m_68, l_68);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_68, ATerm r_68, ATerm t)
{
  ATerm a_110 = NULL;
  t = SSL_hashtable_create(q_68, r_68);
  a_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_110);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL,d_110 = NULL,f_110 = NULL,g_110 = NULL;
  b_110 = t;
  t = term_p_93;
  f_110 = t;
  t = term_q_93;
  g_110 = t;
  t = b_110;
  t = new_hashtable_0_2(f_110, g_110, t);
  c_110 = t;
  t = b_110;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(b_110, c_110, d_110, t);
  t = b_110;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_110 = NULL;
  t = SSL_table_hashtable();
  h_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_65, ATerm t)
{
  ATerm u_110 = NULL;
  t = table_hashtable_0_0(t);
  u_110 = t;
  {
    ATerm r_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL;
        t = u_110;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_16(j_65, w_48, t);
        LocalPopChoice(s_93);
      }
    else
      {
        t = r_93;
        {
          ATerm f_49 = NULL;
          t = j_65;
          t = table_create_0_0(t);
          t = u_110;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_16(j_65, f_49, t);
        }
      }
  }
  return(t);
}
static ATerm j_16 (ATerm h_77, ATerm i_77, ATerm t)
{
  ATerm x_110 = NULL,z_110 = NULL;
  t = term_h_38;
  x_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, h_77, i_77);
  t = lookup_table_0_1(x_110, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(h_77, i_77, z_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_38, h_77, i_77);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm m_111 = NULL,n_111 = NULL;
  n_111 = t;
  t = SSL_explode_string(n_111);
  {
    ATerm t_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_112 (ATerm t);
        static ATerm p_112 (ATerm t)
        {
          ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
          m_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_112 = ATgetFirst((ATermList) t);
              o_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_93 = t;
            int w_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_49 = NULL,v_49 = NULL,q_20 = NULL;
                t = SSLgetAnnotations(m_112);
                s_49 = t;
                t = o_112;
                t = p_112(t);
                v_49 = t;
                t = (ATerm) ATinsert(CheckATermList(v_49), n_112);
                q_20 = t;
                t = SSLsetAnnotations(q_20, s_49);
                LocalPopChoice(w_93);
              }
            else
              {
                t = v_93;
                {
                  ATerm h_50 = NULL,y_20 = NULL;
                  t = SSLgetAnnotations(m_112);
                  h_50 = t;
                  t = n_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, n_112);
                  y_20 = t;
                  t = SSLsetAnnotations(y_20, h_50);
                }
              }
          }
          return(t);
        }
        t = p_112(t);
        LocalPopChoice(u_93);
      }
    else
      {
        t = t_93;
        t = (ATerm) ATempty;
      }
  }
  m_111 = t;
  t = SSL_implode_string(m_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm k_16 (ATerm r_56, ATerm s_56, ATerm t)
{
  t = SSL_strcat(r_56, s_56);
  return(t);
}
ATerm strc_version_number_0_0 (ATerm t)
{
  t = VERSION_TERM();
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm x_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL,f_113 = NULL,i_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,p_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL,y_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL,f_114 = NULL,g_114 = NULL,i_114 = NULL,t_114 = NULL,v_114 = NULL,x_114 = NULL,j_115 = NULL,k_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,r_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  x_112 = t;
  t = strc_version_number_0_0(t);
  r_113 = t;
  t = term_s_70;
  w_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_70, r_113);
  t = j_16(w_115, r_113, t);
  t = term_i_38;
  u_115 = t;
  t = term_d_39;
  v_115 = t;
  t = term_x_93;
  t = j_16(u_115, v_115, t);
  t = term_v_43;
  o_115 = t;
  t = term_z_37;
  r_115 = t;
  t = term_y_93;
  t = j_16(o_115, r_115, t);
  t = term_c_44;
  m_115 = t;
  t = term_d_51;
  n_115 = t;
  t = term_z_93;
  t = j_16(m_115, n_115, t);
  t = term_v_62;
  j_115 = t;
  t = (ATerm) ATempty;
  k_115 = t;
  t = term_a_94;
  t = j_16(j_115, k_115, t);
  t = term_f_40;
  v_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_94), term_b_94);
  x_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, (ATerm) ATinsert(ATinsert(ATempty, term_c_94), term_b_94));
  t = j_16(v_114, x_114, t);
  t = term_d_94;
  t = xtc_find_path_0_0(t);
  p_113 = t;
  t = term_e_94;
  t_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_113, term_e_94);
  t = k_16(p_113, t_114, t);
  i_113 = t;
  t = term_d_94;
  t = xtc_find_path_0_0(t);
  n_113 = t;
  t = term_e_94;
  i_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_113, term_e_94);
  t = k_16(n_113, i_114, t);
  k_113 = t;
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  m_113 = t;
  t = term_e_94;
  g_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_113, term_e_94);
  t = k_16(m_113, g_114, t);
  l_113 = t;
  t = term_g_39;
  d_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_113), term_v_62), k_113), term_v_62), i_113), term_v_62);
  f_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_113), term_v_62), k_113), term_v_62), i_113), term_v_62));
  t = j_16(d_114, f_114, t);
  t = term_d_94;
  t = xtc_find_path_0_0(t);
  f_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_94), f_113), term_d_84);
  c_114 = t;
  t = SSL_concat_strings(c_114);
  z_112 = t;
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  b_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_94), b_113), term_d_84);
  b_114 = t;
  t = SSL_concat_strings(b_114);
  a_113 = t;
  t = term_v_38;
  y_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_94), term_l_94), a_113), term_k_94), term_j_94), term_i_94), z_112);
  a_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_94), term_l_94), a_113), term_k_94), term_j_94), term_i_94), z_112));
  t = j_16(y_113, a_114, t);
  t = term_i_39;
  u_113 = t;
  t = (ATerm) ATempty;
  v_113 = t;
  t = term_n_94;
  t = j_16(u_113, v_113, t);
  t = term_x_58;
  s_113 = t;
  t = term_o_94;
  t_113 = t;
  t = term_t_94;
  t = j_16(s_113, t_113, t);
  t = x_112;
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
  t = term_u_94;
  t = e_16(m_117, p_117, t);
  t = debug_1_0(l_37, t);
  t = l_117;
  return(t);
}
static ATerm l_37 (ATerm t)
{
  t = term_v_94;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm y_94 = t;
    int c_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL;
        t = term_h_38;
        i_116 = t;
        t = term_g_86;
        j_116 = t;
        t = term_d_95;
        t = e_16(i_116, j_116, t);
        t = term_j_95;
        t = xtc_find_0_0(t);
        f_116 = t;
        t = term_x_39;
        h_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_116, term_x_39);
        t = m_15(f_116, h_116, t);
        t = term_z_37;
        g_116 = t;
        t = SSL_exit(g_116);
        LocalPopChoice(c_95);
      }
    else
      {
        t = y_94;
      }
  }
  {
    ATerm l_95 = t;
    int p_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_116 = NULL,p_116 = NULL,r_116 = NULL;
        t = term_h_38;
        p_116 = t;
        t = term_s_86;
        r_116 = t;
        t = term_t_95;
        t = e_16(p_116, r_116, t);
        t = strc_version_0_0(t);
        t = term_z_37;
        o_116 = t;
        t = SSL_exit(o_116);
        LocalPopChoice(p_95);
      }
    else
      {
        t = l_95;
      }
  }
  {
    ATerm u_95 = t;
    int v_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_117 = NULL,f_117 = NULL,g_117 = NULL;
        b_117 = t;
        t = term_h_38;
        f_117 = t;
        t = term_b_56;
        g_117 = t;
        t = term_u_94;
        t = e_16(f_117, g_117, t);
        t = b_117;
        LocalPopChoice(v_95);
      }
    else
      {
        t = u_95;
        {
          ATerm h_117 = NULL,j_117 = NULL,k_117 = NULL;
          t = term_l_38;
          j_117 = t;
          t = (ATerm) ATinsert(ATempty, term_w_95);
          k_117 = t;
          t = SSL_printnl(j_117, k_117);
          t = term_d_39;
          h_117 = t;
          t = SSL_exit(h_117);
          t = (ATerm) ATinsert(ATempty, term_w_95);
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
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL;
  t_117 = t;
  t = term_l_38;
  u_117 = t;
  t = (ATerm) ATinsert(CheckATermList(t_117), term_x_95);
  v_117 = t;
  t = SSL_printnl(u_117, v_117);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(CheckATermList(t_117), term_x_95));
  return(t);
}
static ATerm r_37 (ATerm t)
{
  ATerm y_95 = t;
  int z_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_117 = NULL,y_117 = NULL,b_118 = NULL;
      t = term_h_38;
      y_117 = t;
      t = term_b_56;
      b_118 = t;
      t = term_u_94;
      t = e_16(y_117, b_118, t);
      x_117 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_117);
      LocalPopChoice(z_95);
    }
  else
    {
      t = y_95;
      t = term_u_60;
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
  ATerm c_118 = NULL,d_118 = NULL,f_118 = NULL;
  t = run_time_0_0(t);
  c_118 = t;
  t = term_l_38;
  d_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_96), c_118), term_a_96);
  f_118 = t;
  t = SSL_printnl(d_118, f_118);
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_96), c_118), term_a_96));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm c_96 = t;
  int d_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_37, n_37, t);
      t = if_verbose2_1_0(y_37, t);
      t = term_z_37;
      q_117 = t;
      t = SSL_exit(q_117);
      LocalPopChoice(d_96);
    }
  else
    {
      t = c_96;
      {
        ATerm g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL;
        t = run_time_0_0(t);
        g_118 = t;
        t = term_l_38;
        i_118 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_96), g_118), term_i_96);
        j_118 = t;
        t = SSL_printnl(i_118, j_118);
        t = term_d_39;
        h_118 = t;
        t = SSL_exit(h_118);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
