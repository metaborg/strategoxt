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
ATerm term_o_96;
ATerm term_d_96;
ATerm term_c_96;
ATerm term_z_95;
ATerm term_y_95;
ATerm term_v_95;
ATerm term_p_95;
ATerm term_l_95;
ATerm term_c_95;
ATerm term_y_94;
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
ATerm term_p_93;
ATerm term_o_93;
ATerm term_n_93;
ATerm term_i_93;
ATerm term_g_93;
ATerm term_n_92;
ATerm term_m_92;
ATerm term_l_92;
ATerm term_z_91;
ATerm term_l_91;
ATerm term_j_91;
ATerm term_i_91;
ATerm term_h_91;
ATerm term_d_91;
ATerm term_f_86;
ATerm term_e_86;
ATerm term_z_85;
ATerm term_y_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_l_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_w_84;
ATerm term_t_84;
ATerm term_s_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_i_83;
ATerm term_p_82;
ATerm term_m_82;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_h_82;
ATerm term_e_82;
ATerm term_d_82;
ATerm term_w_81;
ATerm term_u_81;
ATerm term_t_81;
ATerm term_r_81;
ATerm term_p_81;
ATerm term_j_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_z_80;
ATerm term_v_78;
ATerm term_q_78;
ATerm term_n_78;
ATerm term_l_78;
ATerm term_e_78;
ATerm term_a_78;
ATerm term_y_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_n_77;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_z_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_o_75;
ATerm term_n_75;
ATerm term_m_75;
ATerm term_i_75;
ATerm term_b_75;
ATerm term_w_74;
ATerm term_s_74;
ATerm term_r_74;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_h_73;
ATerm term_n_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_f_72;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_d_71;
ATerm term_c_71;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_z_68;
ATerm term_s_68;
ATerm term_j_68;
ATerm term_i_68;
ATerm term_g_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_v_67;
ATerm term_t_67;
ATerm term_e_67;
ATerm term_t_65;
ATerm term_i_65;
ATerm term_e_65;
ATerm term_b_65;
ATerm term_m_64;
ATerm term_k_64;
ATerm term_a_64;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_f_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_u_62;
ATerm term_f_62;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_r_60;
ATerm term_m_60;
ATerm term_i_60;
ATerm term_z_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_y_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_k_58;
ATerm term_h_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_g_57;
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
ATerm term_p_56;
ATerm term_h_56;
ATerm term_b_56;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_p_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_t_54;
ATerm term_s_54;
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
ATerm term_k_52;
ATerm term_j_52;
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
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_y_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_r_49;
ATerm term_d_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_x_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_p_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_a_45;
ATerm term_w_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_x_43;
ATerm term_v_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_v_42;
ATerm term_t_42;
ATerm term_n_42;
ATerm term_l_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_s_38;
ATerm term_q_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_a_38;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_l_38);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_a_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_k_39);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_o_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_t_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_o_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_k_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_k_43);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_m_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_v_43);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_e_44);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_t_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_50, term_f_39, term_i_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_50, term_n_38, term_n_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_50, term_z_41, term_v_50);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_50, term_y_50, term_z_50);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_51, term_f_51, term_g_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_51, term_n_51, term_o_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_s_51, term_t_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_w_51, term_c_52);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_52, term_f_52, term_g_52);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_52, term_j_52, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_n_52, term_o_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_52, term_e_45, term_r_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_u_52, term_x_52);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_52, term_a_53, term_b_53);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_53, term_e_53, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_53, term_k_53, term_l_53);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_53, term_o_53, term_p_53);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_53, term_s_53, term_t_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_53, term_y_53, term_z_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_54, term_c_54, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_g_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_k_54, term_l_54);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_54, term_o_54, term_p_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_t_54, term_w_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_54, term_o_47, term_z_54);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_55, term_d_55, term_e_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_55, term_h_55, term_i_55);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_55, term_p_55, term_r_55);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_p_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym__2, term_r_56, term_s_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_u_56, term_v_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(sym__2, term_x_56, term_y_56);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym__2, term_a_57, term_b_57);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_a_58);
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_u_58);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_b_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_u_61);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym__2, term_i_61, term_r_60);
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_x_62);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_c_63);
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_a_64);
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_f_71);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_s_73);
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(sym__2, term_m_75, term_n_75);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_a_38);
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_38);
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(sym__2, term_l_78, term_a_40);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_d_82);
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(sym__2, term_n_72, term_j_82);
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym__2, term_n_72, term_w_81);
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(sym__2, term_o_40, term_a_40);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_t_39, term_a_40);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_x_62, term_a_40);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym__2, term_a_58, term_a_40);
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(sym__2, term_t_45, term_a_40);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym__2, term_f_85, term_a_40);
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym__2, term_l_85, term_a_40);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym__2, term_t_85, term_a_40);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(sym__2, term_u_58, term_f_39);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(sym__2, term_w_58, term_a_38);
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_a_64, term_a_40);
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym__2, term_d_91, term_a_40);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_91));
  term_j_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_92));
  term_n_92 = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, (ATerm) ATempty);
  ATprotect(&(term_g_93));
  term_g_93 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_f_85);
  ATprotect(&(term_i_93));
  term_i_93 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_d_91);
  ATprotect(&(term_n_93));
  term_n_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_93));
  term_o_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeAppl(ATmakeSymbol("0.12", 0, ATtrue));
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(sym__2, term_f_71, term_x_93);
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_f_39);
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_a_38);
  ATprotect(&(term_b_94));
  term_b_94 = (ATerm) ATmakeAppl(sym__2, term_e_44, term_y_50);
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(sym__2, term_c_63, (ATerm) ATempty);
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
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATempty);
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(sym__2, term_b_59, term_u_94);
  ATprotect(&(term_y_94));
  term_y_94 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_h_56);
  ATprotect(&(term_c_95));
  term_c_95 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_l_95));
  term_l_95 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_l_85);
  ATprotect(&(term_p_95));
  term_p_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_v_95));
  term_v_95 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_t_85);
  ATprotect(&(term_y_95));
  term_y_95 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_95));
  term_z_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_c_96));
  term_c_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_d_96));
  term_d_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_96));
  term_o_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_134 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm s_14 (ATerm y_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm t_14 (ATerm w_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm u_14 (ATerm p_68, ATerm o_68, ATerm t);
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm t);
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
ATerm if_keep1_1_0 (ATerm z_135 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm c_136 (ATerm), ATerm t);
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
static ATerm c_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm save_as_1_0 (ATerm z_106 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm a_136 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t);
static ATerm y_14 (ATerm l_73, ATerm m_73, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm k_136 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm u_146 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm k_23, ATerm l_23, ATerm t);
ATerm foldr_3_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t);
static ATerm i_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm m_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm d_136 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm e_136 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm b_136 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm v_118 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm v_14 (ATerm q_23, ATerm r_23, ATerm t);
static ATerm w_14 (ATerm v_37, ATerm w_37, ATerm t);
static ATerm x_14 (ATerm b_118 (ATerm), ATerm e_306, ATerm f_38, ATerm t);
static ATerm a_15 (ATerm s_107 (ATerm), ATerm j_24, ATerm h_24, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm n_145 (ATerm), ATerm t);
static ATerm u_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm y_106 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm z_134 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm l_129 (ATerm), ATerm t);
static ATerm l_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm b_15 (ATerm m_23, ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm l_24 (ATerm t);
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
static ATerm c_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm o_25 (ATerm t);
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
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
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
static ATerm d_16 (ATerm x_60, ATerm y_60, ATerm t);
static ATerm c_15 (ATerm j_59, ATerm k_59, ATerm t);
ATerm end_scope_1_0 (ATerm p_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm q_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm y_145 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm x_134 (ATerm), ATerm t);
static ATerm e_15 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm g_15 (ATerm t_57, ATerm u_57, ATerm t);
static ATerm h_15 (ATerm g_66, ATerm i_66, ATerm k_66, ATerm m_66, ATerm h_66, ATerm j_66, ATerm l_66, ATerm n_66, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_117 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm e_119 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm w_118 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm h_128 (ATerm), ATerm t);
static ATerm v_27 (ATerm t);
static ATerm k_15 (ATerm k_50, ATerm j_455, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_15 (ATerm r_68, ATerm q_68, ATerm t);
static ATerm m_15 (ATerm w_63, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm f_75 (ATerm y_73, ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
ATerm default_system_usage_2_0 (ATerm a_140 (ATerm), ATerm b_140 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm n_15 (ATerm v_38, ATerm s_317, ATerm t);
static ATerm v_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm y_28 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm x_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_135 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_135 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm c_135 (ATerm), ATerm t);
static ATerm q_15 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm g_44, ATerm f_44, ATerm t);
static ATerm r_15 (ATerm u_122 (ATerm), ATerm c_44, ATerm b_44, ATerm t);
static ATerm l_30 (ATerm t);
static ATerm s_15 (ATerm b_60, ATerm c_60, ATerm d_60, ATerm t);
ATerm map_1_0 (ATerm j_118 (ATerm), ATerm t);
static ATerm t_15 (ATerm z_131 (ATerm), ATerm l_60, ATerm k_60, ATerm t);
static ATerm m_85 (ATerm g_85, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_15 (ATerm b_38, ATerm t);
static ATerm v_15 (ATerm u_53, ATerm v_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_87 (ATerm w_85, ATerm t);
static ATerm i_87 (ATerm a_86, ATerm b_86, ATerm c_86, ATerm t);
static ATerm j_87 (ATerm p_86, ATerm q_86, ATerm r_86, ATerm t);
static ATerm w_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm r_30 (ATerm t);
static ATerm u_30 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_126 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm w_91 (ATerm y_90, ATerm t);
static ATerm l_31 (ATerm t);
static ATerm n_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm x_15 (ATerm r_72, ATerm s_72, ATerm t);
static ATerm y_15 (ATerm u_72, ATerm t_72, ATerm t);
static ATerm z_15 (ATerm i_53, ATerm j_53, ATerm t);
ATerm at_end_1_0 (ATerm a_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_95 (ATerm w_94, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_16 (ATerm v_72, ATerm w_72, ATerm t);
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
static ATerm i_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm e_34 (ATerm t);
static ATerm h_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm j_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
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
static ATerm u_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm z_35 (ATerm t);
static ATerm a_36 (ATerm t);
static ATerm c_36 (ATerm t);
static ATerm d_36 (ATerm t);
static ATerm e_36 (ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm b_16 (ATerm u_63, ATerm v_63, ATerm t);
static ATerm c_16 (ATerm z_63, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_118 (ATerm), ATerm t);
static ATerm j_36 (ATerm t);
static ATerm k_36 (ATerm t);
static ATerm l_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm o_36 (ATerm t);
static ATerm p_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_16 (ATerm e_59, ATerm f_59, ATerm d_59, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_139 (ATerm), ATerm t);
static ATerm s_36 (ATerm t);
static ATerm x_36 (ATerm t);
static ATerm a_37 (ATerm t);
static ATerm c_37 (ATerm t);
ATerm parse_options_3_0 (ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t);
static ATerm g_16 (ATerm p_63, ATerm q_63, ATerm r_63, ATerm t);
static ATerm h_16 (ATerm s_63, ATerm t_63, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_63, ATerm y_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm q_60, ATerm t);
static ATerm i_16 (ATerm o_72, ATerm p_72, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm j_16 (ATerm y_51, ATerm z_51, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm i_37 (ATerm t);
static ATerm l_37 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm m_37 (ATerm t);
static ATerm n_37 (ATerm t);
static ATerm p_37 (ATerm t);
static ATerm q_37 (ATerm t);
static ATerm z_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,e_0 = NULL,g_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = i_125(t);
    }
  else
    {
      ATerm o_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          g_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_0;
      t = foldr_2_0(i_125, j_125, t);
      o_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_0, o_0);
      t = j_125(t);
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = term_a_38;
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
  ATerm x_0 = NULL,a_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(j_0, l_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm e_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_k_38;
        h_1 = t;
        t = term_l_38;
        k_1 = t;
        t = term_m_38;
        t = d_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_n_38);
        t = geq_0_0(t);
        t = b_1;
        t = y_134(t);
        LocalPopChoice(j_38);
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
  t = term_o_38;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_q_38);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_o_38;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm s_14 (ATerm y_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm u_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_k_38;
        z_1 = t;
        t = term_x_38;
        c_2 = t;
        t = term_y_38;
        t = d_16(z_1, c_2, t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = u_38;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_z_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_k_38;
  s_1 = t;
  t = term_a_39;
  t_1 = t;
  t = term_c_39;
  t = d_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_x_38), y_23), term_e_39), term_d_39));
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
      t = term_f_39;
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
  t = term_o_38;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_i_39);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_o_38;
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, b_3);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = b_3;
  return(t);
}
static ATerm t_14 (ATerm w_23, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_k_38;
  u_2 = t;
  t = term_k_39;
  x_2 = t;
  t = term_n_39;
  t = d_16(u_2, x_2, t);
  o_2 = t;
  t = term_k_38;
  s_2 = t;
  t = term_o_39;
  t_2 = t;
  t = term_s_39;
  t = d_16(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_x_38), w_23), term_t_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_39, m_2);
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
      t = term_f_39;
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
  t = term_o_38;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_u_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(o_3), term_u_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_k_38;
      m_3 = t;
      t = term_t_39;
      n_3 = t;
      t = term_x_39;
      t = d_16(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
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
static ATerm u_14 (ATerm p_68, ATerm o_68, ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(p_68, o_68);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = get_errno_0_0(t);
      t = term_a_40;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, p_68, o_68);
      t = l_15(p_68, o_68, t);
      t = SSL_remove(p_68);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm t)
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
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = v_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_d_40;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_d_40);
        t = l_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_d_40;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        {
          ATerm e_40 = t;
          int f_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = v_0(t);
              l_2 = t;
              {
                ATerm g_40 = t;
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
                    t = g_40;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = u_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(f_40);
            }
          else
            {
              t = e_40;
              t = i_4;
              t = v_0(t);
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
  t = term_h_40;
  r_4 = t;
  t = term_i_40;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_j_40);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_k_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_l_40;
  w_4 = t;
  t = a_5;
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_k_38;
        d_5 = t;
        t = term_o_40;
        e_5 = t;
        t = term_p_40;
        t = d_16(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(n_40);
        t = (ATerm) ATinsert(ATempty, term_o_40);
      }
    else
      {
        t = m_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_k_38;
  b_5 = t;
  t = term_k_40;
  c_5 = t;
  t = term_q_40;
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
  t = term_o_38;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_r_40);
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
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_6 = ATgetArgument(t, 0);
            {
              ATerm d_3 = NULL,t_0 = NULL;
              t = SSLgetAnnotations(h_6);
              d_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
              t_0 = t;
              t = SSLsetAnnotations(t_0, d_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_6;
          }
        LocalPopChoice(t_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = s_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
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
        LocalPopChoice(v_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = u_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm y_40 = t;
    int a_41 = stack_ptr;
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
        LocalPopChoice(a_41);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = y_40;
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
  t = term_o_38;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_b_41);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(b_6), term_b_41));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_d_41);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_d_41);
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
  t = term_f_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm f_41 = t;
    int h_41 = stack_ptr;
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
        LocalPopChoice(h_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = f_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
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
        LocalPopChoice(j_41);
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
  t = term_k_41;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_d_41);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_d_41);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_d_41);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_d_41);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_z_41;
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
  t = term_a_42;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_d_41);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_d_41);
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
  t = term_o_38;
  h_9 = t;
  t = (ATerm) ATinsert(ATempty, term_i_42);
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
  t = term_o_38;
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(j_9), term_l_42);
  m_9 = t;
  t = SSL_printnl(k_9, m_9);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(j_9), term_l_42));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_v_42;
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
  t = term_v_42;
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
  t = term_b_43;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL;
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_k_38;
      b_9 = t;
      t = term_o_40;
      c_9 = t;
      t = term_p_40;
      t = d_16(b_9, c_9, t);
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
              ATerm i_43 = t;
              int j_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
                  t = term_k_38;
                  h_10 = t;
                  t = term_k_43;
                  i_10 = t;
                  t = term_l_43;
                  t = d_16(h_10, i_10, t);
                  a_10 = t;
                  t = term_k_38;
                  f_10 = t;
                  t = term_m_43;
                  g_10 = t;
                  t = term_n_43;
                  t = d_16(f_10, g_10, t);
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
                  LocalPopChoice(j_43);
                }
              else
                {
                  t = i_43;
                  {
                    ATerm k_10 = NULL,l_10 = NULL;
                    t = term_k_38;
                    k_10 = t;
                    t = term_k_43;
                    l_10 = t;
                    t = term_l_43;
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
            t = term_o_38;
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
      t = d_43;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_k_38;
        i_11 = t;
        t = term_v_43;
        j_11 = t;
        t = term_x_43;
        t = d_16(i_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_f_39);
        t = geq_0_0(t);
        t = d_11;
        t = z_135(t);
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
ATerm olevel_2_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm a_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = o_11;
        t = y_146(t);
        r_11 = t;
        t = term_k_38;
        u_11 = t;
        t = term_e_44;
        v_11 = t;
        t = term_h_44;
        t = d_16(u_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = o_11;
        t = z_146(t);
        LocalPopChoice(d_44);
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
  t = term_i_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_d_41);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_d_41);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_9 = NULL;
  t = pass_verbose_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(CheckATermList(d_9), term_d_41);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_d_41);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm j_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_13;
        {
          ATerm m_44 = t;
          int r_44 = stack_ptr;
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
              LocalPopChoice(r_44);
              t = xtc_transform_file_2_0(e_8, f_8, t);
            }
          else
            {
              t = m_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(l_44);
      }
    else
      {
        t = j_44;
        t = i_13;
        {
          ATerm s_44 = t;
          int u_44 = stack_ptr;
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
              LocalPopChoice(u_44);
              t = xtc_transform_file_2_0(j_8, k_8, t);
            }
          else
            {
              t = s_44;
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
  t = term_w_44;
  u_13 = t;
  t = w_13;
  {
    ATerm y_44 = t;
    int z_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL;
        t = term_k_38;
        z_13 = t;
        t = term_o_40;
        a_14 = t;
        t = term_p_40;
        t = d_16(z_13, a_14, t);
        t = w_13;
        LocalPopChoice(z_44);
        t = (ATerm) ATinsert(ATempty, term_a_45);
      }
    else
      {
        t = y_44;
        t = (ATerm) ATempty;
      }
  }
  v_13 = t;
  t = w_13;
  t = comp_0_2(u_13, v_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
        t = term_k_38;
        g_14 = t;
        t = term_v_43;
        i_14 = t;
        t = term_x_43;
        t = d_16(g_14, i_14, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_14, term_e_45);
        t = geq_0_0(t);
        t = d_14;
        t = c_136(t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = d_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_18 = NULL,h_18 = NULL,i_18 = NULL;
  d_18 = t;
  t = term_o_38;
  h_18 = t;
  t = (ATerm) ATinsert(ATempty, term_f_45);
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
  t = olevel_2_0(y_8, l_9, t);
  t = olevel_2_0(z_9, d_10, t);
  t = olevel_2_0(a_11, f_11, t);
  n_18 = t;
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
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
        LocalPopChoice(j_45);
        t = xtc_transform_file_2_0(s_12, t_12, t);
      }
    else
      {
        t = i_45;
        t = xtc_transform_term_2_0(u_12, v_12, t);
      }
  }
  t = olevel_2_0(w_12, x_12, t);
  t = olevel_2_0(t_13, y_13, t);
  t = olevel_2_0(z_14, d_15, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = term_o_38;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), term_k_45);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(k_18), term_k_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = term_k_38;
  r_18 = t;
  t = term_e_44;
  s_18 = t;
  t = term_h_44;
  t = d_16(r_18, s_18, t);
  t = debug_1_0(u_8, t);
  t = q_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_45;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
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
        LocalPopChoice(n_45);
        t = xtc_transform_file_2_0(r_9, s_9, t);
      }
    else
      {
        t = m_45;
        t = xtc_transform_term_2_0(u_9, v_9, t);
      }
  }
  t = if_keep1_1_0(w_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_d_41);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_19 = NULL;
  t = pass_verbose_0_0(t);
  c_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), term_d_41);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = save_as_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_n_38;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_19;
        {
          ATerm s_45 = t;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL,b_11 = NULL;
              t = term_k_38;
              z_10 = t;
              t = term_t_45;
              b_11 = t;
              t = term_u_45;
              t = d_16(z_10, b_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_45;
            }
        }
        t = x_19;
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
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
              LocalPopChoice(w_45);
              t = xtc_transform_file_2_0(m_10, q_10, t);
            }
          else
            {
              t = v_45;
              t = xtc_transform_term_2_0(r_10, u_10, t);
            }
        }
        t = if_keep2_1_0(x_10, t);
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = x_19;
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_d_41);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm q_11 = NULL;
  t = pass_verbose_0_0(t);
  q_11 = t;
  t = (ATerm) ATinsert(CheckATermList(q_11), term_d_41);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = save_as_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  b_20 = t;
  {
    ATerm a_46 = t;
    int b_46 = stack_ptr;
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
        LocalPopChoice(b_46);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = a_46;
        t = xtc_transform_term_2_0(p_11, w_11, t);
      }
  }
  t = if_keep6_1_0(x_11, t);
  a_20 = t;
  {
    ATerm f_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_20 = ATgetArgument(t, 0);
            {
              ATerm k_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(a_20);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
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
        LocalPopChoice(i_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = f_46;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_21 = ATgetArgument(t, 0);
            {
              ATerm y_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              y_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
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
        LocalPopChoice(m_46);
        t = xtc_transform_file_2_0(l_12, p_12, t);
      }
    else
      {
        t = l_46;
        t = xtc_transform_term_2_0(q_12, r_12, t);
      }
  }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_d_41);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_d_41);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_d_41);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm w_20 = NULL;
  t = pass_verbose_0_0(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), term_d_41);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_d_41);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm f_21 = NULL;
  t = pass_verbose_0_0(t);
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), term_d_41);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_d_41);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_d_41);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,v_21 = NULL;
  v_21 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
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
        LocalPopChoice(u_46);
        t = xtc_transform_file_2_0(z_12, a_13, t);
      }
    else
      {
        t = t_46;
        t = xtc_transform_term_2_0(b_13, c_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  t_21 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm x_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(t_21);
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
            t = t_21;
          }
        LocalPopChoice(w_46);
        t = xtc_transform_file_2_0(d_13, e_13, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(h_13, j_13, t);
      }
  }
  s_21 = t;
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_22 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(s_21);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(l_13, m_13, t);
      }
    else
      {
        t = x_46;
        t = xtc_transform_term_2_0(p_13, q_13, t);
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
  t = (ATerm) ATinsert(CheckATermList(g_22), term_d_41);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_d_41);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm r_22 = NULL;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(r_22), term_d_41);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_d_41);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm a_23 = NULL;
  t = pass_verbose_0_0(t);
  a_23 = t;
  t = (ATerm) ATinsert(CheckATermList(a_23), term_d_41);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm b_23 = NULL;
  t = pass_verbose_0_0(t);
  b_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), term_d_41);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = save_as_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_n_38;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  f_23 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
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
        LocalPopChoice(f_47);
        t = xtc_transform_file_2_0(b_14, c_14, t);
      }
    else
      {
        t = e_47;
        t = xtc_transform_term_2_0(e_14, j_14, t);
      }
  }
  e_23 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_24 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(e_23);
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
            t = e_23;
          }
        LocalPopChoice(h_47);
        t = xtc_transform_file_2_0(k_14, l_14, t);
      }
    else
      {
        t = g_47;
        t = xtc_transform_term_2_0(m_14, o_14, t);
      }
  }
  t = if_keep2_1_0(p_14, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm v_23 = NULL;
  t = pass_verbose_0_0(t);
  v_23 = t;
  t = (ATerm) ATinsert(CheckATermList(v_23), term_d_41);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm o_24 = NULL;
  t = pass_verbose_0_0(t);
  o_24 = t;
  t = (ATerm) ATinsert(CheckATermList(o_24), term_d_41);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_d_41);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_d_41);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = save_as_1_0(q_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_n_47;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_25 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(f_15, j_15, t);
      }
    else
      {
        t = p_47;
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
  t = term_q_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_d_41);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_d_41);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_r_47;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = save_as_1_0(o_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_z_41;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(u_47);
        t = xtc_transform_file_2_0(s_16, t_16, t);
      }
    else
      {
        t = t_47;
        t = xtc_transform_term_2_0(u_16, w_16, t);
      }
  }
  t = if_keep3_1_0(x_16, t);
  m_25 = t;
  {
    ATerm v_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(m_25);
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
            t = m_25;
          }
        LocalPopChoice(x_47);
        t = xtc_transform_file_2_0(a_17, b_17, t);
      }
    else
      {
        t = v_47;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep3_1_0(f_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(h_17, t);
  l_25 = t;
  {
    ATerm y_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(l_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(a_48);
        t = xtc_transform_file_2_0(j_17, k_17, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(l_17, o_17, t);
      }
  }
  t = if_keep3_1_0(p_17, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm u_25 = NULL;
  t = pass_verbose_0_0(t);
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), term_d_41);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm v_25 = NULL;
  t = pass_verbose_0_0(t);
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(v_25), term_d_41);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_d_41);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_d_41);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_d_41);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_d_41);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = save_as_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(t_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(j_48);
        t = xtc_transform_file_2_0(t_17, u_17, t);
      }
    else
      {
        t = i_48;
        t = xtc_transform_term_2_0(v_17, w_17, t);
      }
  }
  t = if_keep1_1_0(z_17, t);
  r_26 = t;
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(r_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
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
        LocalPopChoice(o_48);
        t = xtc_transform_file_2_0(b_18, c_18, t);
      }
    else
      {
        t = n_48;
        t = xtc_transform_term_2_0(e_18, g_18, t);
      }
  }
  t = if_keep1_1_0(p_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_d_41);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_d_41);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = save_as_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_p_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_r_48;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_d_41);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_r_48;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_d_41);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = save_as_1_0(v_18, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_s_48;
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
  t = term_v_42;
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
static ATerm h_19 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm q_29 = NULL;
  t = pass_verbose_0_0(t);
  q_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), term_z_42);
  return(t);
}
ATerm save_as_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,z_28 = NULL,a_29 = NULL;
  r_28 = t;
  {
    static ATerm x_18 (ATerm t);
    static ATerm x_18 (ATerm t)
    {
      static ATerm a_19 (ATerm t);
      static ATerm a_19 (ATerm t)
      {
        ATerm b_29 = NULL,c_29 = NULL;
        t = z_106(t);
        b_29 = t;
        t = term_t_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_48, b_29);
        t = j_16(c_29, b_29, t);
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
    ATerm u_48 = t;
    int v_48 = stack_ptr;
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
        LocalPopChoice(v_48);
        t = xtc_transform_file_2_0(d_19, f_19, t);
      }
    else
      {
        t = u_48;
        t = xtc_transform_term_2_0(h_19, i_19, t);
      }
  }
  {
    static ATerm l_19 (ATerm t);
    static ATerm l_19 (ATerm t)
    {
      ATerm r_29 = NULL;
      t = term_x_48;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_x_48);
      t = j_16(not_null(o_28), r_29, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(l_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_49), not_null(p_28)), term_a_49), not_null(o_28)), term_z_48);
  a_29 = t;
  t = SSL_concat_strings(a_29);
  s_28 = t;
  t = term_o_38;
  u_28 = t;
  t = (ATerm) ATinsert(ATempty, s_28);
  z_28 = t;
  t = SSL_printnl(u_28, z_28);
  t = r_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm a_136 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = term_k_38;
        z_29 = t;
        t = term_v_43;
        a_30 = t;
        t = term_x_43;
        t = d_16(z_29, a_30, t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_n_38);
        t = geq_0_0(t);
        t = u_29;
        t = a_136(t);
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
        t = u_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_l_38;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL;
        t = term_k_38;
        n_30 = t;
        t = term_l_38;
        o_30 = t;
        t = term_m_38;
        t = d_16(n_30, o_30, t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = term_f_39;
      }
  }
  f_30 = t;
  t = term_f_39;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, term_f_39);
  t = g_15(f_30, k_30, t);
  j_30 = t;
  t = SSL_int_to_string(j_30);
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_30), term_l_38);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_49 = ATgetArgument(t, 0);
      if(match_cons(m_49, sym_Stream_1))
        {
          t_30 = ATgetArgument(m_49, 0);
        }
      else
        _fail(t);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(t_30, v_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL;
  s_30 = t;
  t = xtc_new_file_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, s_30);
  t = x_14(m_19, q_30, s_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_30);
  t = xtc_transform_file_2_0(l_145, m_145, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_14 (ATerm l_73, ATerm m_73, ATerm t)
{
  t = SSL_execvp(l_73, m_73);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_49), m_17), term_r_49);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_y_49), x_17), term_w_49), u_31);
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
        static ATerm q_19 (ATerm t);
        static ATerm q_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_50 = ATgetArgument(t, 0);
              if((z_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm f_50 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_55), term_m_55), term_f_55), term_a_55), term_x_54), term_q_54), term_m_54), term_i_54), term_e_54), term_a_54), term_w_53), term_q_53), term_m_53), term_g_53), term_c_53), term_y_52), term_s_52), term_p_52), term_l_52), term_h_52), term_d_52), term_u_51), term_p_51), term_k_51), term_a_51), term_w_50), term_o_50), term_l_50);
        t = fetch_elem_1_0(q_19, t);
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
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_55 = ATgetArgument(t, 0);
            n_32 = ATgetArgument(t, 1);
            {
              ATerm x_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_55);
        {
          ATerm y_55 = t;
          int z_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,j_18 = NULL,o_18 = NULL;
              t = n_32;
              {
                ATerm a_56 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_56;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_18 = t;
              t = term_o_38;
              j_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_b_56);
              o_18 = t;
              t = SSL_printnl(j_18, o_18);
              t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(ATinsert(ATempty, f_18), term_b_56));
              LocalPopChoice(z_55);
            }
          else
            {
              t = y_55;
              t = d_32;
            }
        }
      }
    else
      {
        t = u_55;
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
ATerm fork_and_wait_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = fork_0_0(t);
  w_32 = t;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_32;
        t = k_136(t);
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        t = SSL_waitpid(w_32);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_56 = ATgetArgument(t, 0);
            if(((ATgetType(e_56) != AT_INT) || (ATgetInt((ATermInt) e_56) != 0)))
              _fail(t);
            {
              ATerm f_56 = ATgetArgument(t, 1);
            }
            {
              ATerm g_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_32;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,e_33 = NULL;
  e_33 = t;
  t = u_146(t);
  t = xtc_find_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
  {
    static ATerm s_19 (ATerm t);
    static ATerm s_19 (ATerm t)
    {
      ATerm g_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
      t = y_14(c_33, e_33, t);
      t = term_f_39;
      g_33 = t;
      t = SSL_exit(g_33);
      return(t);
    }
    t = fork_and_wait_1_0(s_19, t);
  }
  t = e_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,n_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_33 = NULL,s_33 = NULL;
      t = j_33;
      t = xtc_new_file_0_0(t);
      p_33 = t;
      t = s_0(t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATinsert(ATinsert(ATempty, p_33), term_x_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
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
      t = s_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), term_x_38), n_33), term_h_56));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm k_23, ATerm l_23, ATerm t)
{
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_48 = NULL,y_48 = NULL;
      y_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          w_48 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(y_48);
            m_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, w_48);
            t_8 = t;
            t = SSLsetAnnotations(t_8, m_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_48;
        }
      LocalPopChoice(j_56);
      {
        static ATerm y_19 (ATerm t);
        static ATerm c_20 (ATerm t);
        static ATerm y_19 (ATerm t)
        {
          t = k_23;
          return(t);
        }
        static ATerm c_20 (ATerm t)
        {
          ATerm c_49 = NULL;
          t = pass_verbose_0_0(t);
          c_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_23), c_49), (ATerm) ATinsert(ATempty, term_d_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(y_19, c_20, t);
      }
    }
  else
    {
      t = i_56;
      {
        static ATerm d_20 (ATerm t);
        static ATerm f_20 (ATerm t);
        static ATerm d_20 (ATerm t)
        {
          t = k_23;
          return(t);
        }
        static ATerm f_20 (ATerm t)
        {
          ATerm e_49 = NULL;
          t = pass_verbose_0_0(t);
          e_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_23), e_49), (ATerm) ATinsert(ATempty, term_d_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = k_125(t);
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
      t = m_125(t);
      f_34 = t;
      t = z_33;
      t = foldr_3_0(k_125, l_125, m_125, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
      t = l_125(t);
    }
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  p_34 = t;
  t = SSL_explode_term(p_34);
  if(match_cons(t, sym__2))
    {
      ATerm k_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_56 = ATgetArgument(t, 1);
        if(((ATgetType(l_56) == AT_LIST) && !(ATisEmpty(l_56))))
          {
            o_34 = ATgetFirst((ATermList) l_56);
            {
              ATerm m_56 = (ATerm) ATgetNext((ATermList) l_56);
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
  ATerm n_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,n_34 = NULL;
      t = term_k_38;
      k_34 = t;
      t = term_p_56;
      n_34 = t;
      t = term_q_56;
      t = d_16(k_34, n_34, t);
      LocalPopChoice(o_56);
    }
  else
    {
      t = n_56;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), term_z_56), term_w_56), term_t_56);
      t = map_1_0(i_20, t);
    }
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_34), term_p_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(j_20, conc_0_0, m_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_d_41);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_d_41);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  t = get_outfile_1_0(h_21, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_g_57;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  {
    ATerm j_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL,o_19 = NULL,p_19 = NULL,t_19 = NULL,u_19 = NULL;
        t = term_k_38;
        t_19 = t;
        t = term_a_58;
        u_19 = t;
        t = term_b_58;
        t = d_16(t_19, u_19, t);
        t = f_36;
        {
          ATerm c_58 = t;
          int d_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_36;
              {
                ATerm e_58 = t;
                int g_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        l_20 = ATgetArgument(t, 0);
                        {
                          ATerm r_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(f_36);
                          r_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, r_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = f_36;
                      }
                    LocalPopChoice(g_58);
                    t = xtc_transform_file_2_0(p_20, u_20, t);
                  }
                else
                  {
                    t = e_58;
                    t = xtc_transform_term_2_0(z_20, a_21, t);
                  }
              }
              LocalPopChoice(d_58);
            }
          else
            {
              t = c_58;
              {
                ATerm y_20 = NULL,b_21 = NULL,g_21 = NULL;
                t = term_o_38;
                b_21 = t;
                t = (ATerm) ATinsert(ATempty, term_h_58);
                g_21 = t;
                t = SSL_printnl(b_21, g_21);
                t = term_f_39;
                y_20 = t;
                t = SSL_exit(y_20);
                t = (ATerm) ATinsert(ATempty, term_h_58);
              }
            }
        }
        t = copy_to_1_0(d_21, t);
        j_19 = t;
        t = term_o_38;
        o_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_58));
        p_19 = t;
        t = SSL_printnl(o_19, p_19);
        t = j_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(z_57);
      }
    else
      {
        t = j_57;
        t = f_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm d_136 (ATerm), ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
        t = term_k_38;
        v_36 = t;
        t = term_v_43;
        w_36 = t;
        t = term_x_43;
        t = d_16(v_36, w_36, t);
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_36, term_o_47);
        t = geq_0_0(t);
        t = q_36;
        t = d_136(t);
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
        t = q_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm b_37 = NULL;
  b_37 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
        t = term_k_38;
        e_37 = t;
        t = term_v_43;
        f_37 = t;
        t = term_x_43;
        t = d_16(e_37, f_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_y_50);
        t = geq_0_0(t);
        t = b_37;
        t = e_136(t);
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
        t = b_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm q_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_37 = NULL,k_37 = NULL;
      t = term_k_38;
      j_37 = t;
      t = term_u_58;
      k_37 = t;
      t = term_v_58;
      t = d_16(j_37, k_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_u_58);
      LocalPopChoice(t_58);
    }
  else
    {
      t = q_58;
      t = (ATerm) ATinsert(ATempty, term_w_58);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,x_37 = NULL;
  s_37 = t;
  t = term_y_58;
  o_37 = t;
  t = term_k_38;
  u_37 = t;
  t = term_b_59;
  x_37 = t;
  t = term_c_59;
  t = d_16(u_37, x_37, t);
  t_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_37), term_b_59);
  r_37 = t;
  t = s_37;
  t = comp_0_2(o_37, r_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  {
    ATerm g_59 = t;
    int i_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
        t = term_k_38;
        h_38 = t;
        t = term_v_43;
        i_38 = t;
        t = term_x_43;
        t = d_16(h_38, i_38, t);
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_38, term_z_41);
        t = geq_0_0(t);
        t = c_38;
        t = b_136(t);
        LocalPopChoice(i_59);
      }
    else
      {
        t = g_59;
        t = c_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm r_38 = NULL;
  static ATerm i_21 (ATerm t);
  static ATerm i_21 (ATerm t)
  {
    t = v_118(t);
    if(((r_38 != NULL) && (r_38 != t)))
      _fail(t);
    else
      r_38 = t;
    return(t);
  }
  t = fetch_1_0(i_21, t);
  t = not_null(r_38);
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
        ATerm e_22 = NULL,i_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(w_40);
        e_22 = t;
        t = x_40;
        t = fetch_elem_1_0(k_21, t);
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, i_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, e_22);
      }
    }
  else
    {
      ATerm p_23 = NULL,t_23 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          x_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_40);
      p_23 = t;
      t = x_40;
      t = fetch_elem_1_0(l_21, t);
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, t_23);
      c_10 = t;
      t = SSLsetAnnotations(c_10, p_23);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,u_22 = NULL;
  m_22 = t;
  {
    ATerm l_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            n_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
            {
              ATerm p_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_59);
        t = n_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_22;
      }
    else
      {
        t = l_59;
        if(match_cons(t, sym_RDef_3))
          {
            n_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
            {
              ATerm q_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_22;
      }
  }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  {
    ATerm s_59 = t;
    int v_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            a_24 = ATgetArgument(t, 0);
            b_24 = ATgetArgument(t, 1);
            {
              ATerm w_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_59);
        t = a_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = b_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_23;
      }
    else
      {
        t = s_59;
        if(match_cons(t, sym_RDef_3))
          {
            a_24 = ATgetArgument(t, 0);
            b_24 = ATgetArgument(t, 1);
            {
              ATerm x_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = b_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(j_21, t);
  p_39 = t;
  t = term_o_38;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, term_z_59);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = p_39;
  return(t);
}
static ATerm v_14 (ATerm q_23, ATerm r_23, ATerm t)
{
  t = q_23;
  {
    ATerm a_60 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_60;
      }
  }
  t = r_23;
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(r_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_i_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm w_14 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_write_term_to_stream_baf(v_37, w_37);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
static ATerm x_14 (ATerm b_118 (ATerm), ATerm e_306, ATerm f_38, ATerm t)
{
  ATerm n_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_306, term_m_60);
  t = w_15(t);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, f_38);
  t = b_118(t);
  t = fclose_0_0(t);
  t = f_38;
  return(t);
}
static ATerm a_15 (ATerm s_107 (ATerm), ATerm j_24, ATerm h_24, ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  s_41 = t;
  t = s_107(t);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_41, j_24, h_24);
  t = e_16(o_41, j_24, h_24, t);
  {
    ATerm n_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL;
        t = term_r_60;
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, term_r_60);
        t = d_16(o_41, y_41, t);
        {
          ATerm s_60 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_60;
            }
        }
        LocalPopChoice(o_60);
      }
    else
      {
        t = n_60;
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
  t = (ATerm) ATmakeAppl(sym__3, o_41, term_r_60, (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), j_24)));
  t = lookup_table_0_1(o_41, t);
  w_41 = t;
  t = term_r_60;
  t_41 = t;
  t = (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), j_24));
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
  ATerm t_60 = t;
  int w_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_42 = NULL,i_24 = NULL;
      g_42 = t;
      t = term_z_60;
      i_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_42, term_z_60);
      t = j_16(g_42, i_24, t);
      b_42 = t;
      t = SSL_mkstemp(b_42);
      LocalPopChoice(w_60);
    }
  else
    {
      t = t_60;
      {
        ATerm h_42 = NULL;
        t = term_a_61;
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
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm c_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_42 = NULL;
      t = term_h_61;
      j_42 = t;
      t = SSL_getenv(j_42);
      LocalPopChoice(e_61);
    }
  else
    {
      t = c_61;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_42 = NULL,m_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  t = temp_dir_0_0(t);
  p_42 = t;
  t = term_j_61;
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_42, term_j_61);
  t = j_16(p_42, q_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_40;
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_42, term_a_40);
  t = a_15(n_21, m_42, o_42, t);
  t = SSL_close(k_42);
  t = m_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_61;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_61);
      w_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_42, (ATerm) ATinsert(ATempty, term_l_61));
      t = z_15(u_42, w_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm a_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_61 = ATgetArgument(t, 0);
      if(match_cons(n_61, sym_Stream_1))
        {
          a_43 = ATgetArgument(n_61, 0);
        }
      else
        _fail(t);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(a_43, c_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm n_145 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  t = read_from_0_0(t);
  t = n_145(t);
  y_42 = t;
  t = xtc_new_file_0_0(t);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
  t = x_14(q_21, x_42, y_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_42);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  t = debug_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_o_61;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = save_as_1_0(z_21, t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm h_43 = NULL,z_43 = NULL;
  z_43 = t;
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,j_25 = NULL;
        t = term_k_38;
        d_25 = t;
        t = term_u_61;
        j_25 = t;
        t = term_v_61;
        t = d_16(d_25, j_25, t);
        h_43 = t;
        t = if_verbose2_1_0(u_21, t);
        t = z_43;
        {
          ATerm w_61 = t;
          int y_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_25 = NULL,p_25 = NULL;
              t = term_k_38;
              k_25 = t;
              t = term_o_40;
              p_25 = t;
              t = term_p_40;
              t = d_16(k_25, p_25, t);
              t = z_43;
              LocalPopChoice(y_61);
            }
          else
            {
              t = w_61;
              {
                static ATerm x_21 (ATerm t);
                static ATerm x_21 (ATerm t)
                {
                  ATerm z_61 = t;
                  int a_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          s_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_14(h_43, s_26, t);
                      LocalPopChoice(a_62);
                    }
                  else
                    {
                      t = z_61;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(x_21, t);
              }
            }
        }
        LocalPopChoice(t_61);
      }
    else
      {
        t = s_61;
        t = z_43;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm c_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_45);
        LocalPopChoice(e_62);
      }
    else
      {
        t = c_62;
        t = g_45;
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm n_44 = NULL,p_44 = NULL;
  static ATerm a_22 (ATerm t);
  static ATerm a_22 (ATerm t)
  {
    ATerm t_44 = NULL,v_44 = NULL,x_44 = NULL;
    t_44 = t;
    t = term_i_61;
    v_44 = t;
    t = term_r_60;
    x_44 = t;
    t = term_f_62;
    t = d_16(v_44, x_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_44 != NULL) && (n_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_44 = ATgetFirst((ATermList) t);
        {
          ATerm g_62 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_44;
    t = map_1_0(b_22, t);
    t = t_44;
    t = end_scope_1_0(d_22, t);
    return(t);
  }
  t = repeat_2_0(a_22, _id, t);
  p_44 = t;
  t = SSL_exit(p_44);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm i_62 = t;
  int j_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_46 = NULL,d_46 = NULL;
      t = term_k_38;
      c_46 = t;
      t = term_x_38;
      d_46 = t;
      t = term_y_38;
      t = d_16(c_46, d_46, t);
      LocalPopChoice(j_62);
    }
  else
    {
      t = i_62;
      t = term_d_40;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      t = term_x_38;
      {
        ATerm k_62 = t;
        int n_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_27 = NULL,r_27 = NULL;
            t = term_k_38;
            p_27 = t;
            t = term_x_38;
            r_27 = t;
            t = term_y_38;
            t = d_16(p_27, r_27, t);
            LocalPopChoice(n_62);
          }
        else
          {
            t = k_62;
            t = term_d_40;
          }
      }
      l_27 = t;
      t = term_k_61;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_61, l_27);
      t = l_15(n_27, l_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm o_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_45;
      t = copy_to_1_0(f_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_a_38;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = y_106(t);
  g_46 = t;
  t = term_k_38;
  j_46 = t;
  t = term_k_43;
  k_46 = t;
  t = term_l_43;
  t = d_16(j_46, k_46, t);
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, g_46);
  t = j_16(h_46, g_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        t = i_47;
        t = u_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, j_47, n_28);
        t = l_15(j_47, n_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
        LocalPopChoice(q_62);
      }
    else
      {
        t = p_62;
        {
          ATerm r_62 = t;
          int s_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_29 = NULL;
              t = i_47;
              t = u_0(t);
              f_29 = t;
              {
                ATerm t_62 = t;
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
                            if((j_47 != t))
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
                    t = t_62;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_47, f_29);
              t = l_15(j_47, f_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
              LocalPopChoice(s_62);
            }
          else
            {
              t = r_62;
              t = i_47;
              t = u_0(t);
              if((j_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
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
  t = term_u_62;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  {
    ATerm v_62 = t;
    int w_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL,w_29 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL;
        t = term_k_38;
        d_30 = t;
        t = term_x_62;
        g_30 = t;
        t = term_y_62;
        t = d_16(d_30, g_30, t);
        t = d_48;
        t = copy_to_1_0(j_22, t);
        v_29 = t;
        t = term_o_38;
        w_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_62));
        c_30 = t;
        t = SSL_printnl(w_29, c_30);
        t = v_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(w_62);
      }
    else
      {
        t = v_62;
        t = d_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_49 = NULL,l_49 = NULL,n_49 = NULL,o_49 = NULL;
  t = term_v_43;
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_49 = NULL,q_49 = NULL;
        t = term_k_38;
        p_49 = t;
        t = term_v_43;
        q_49 = t;
        t = term_x_43;
        t = d_16(p_49, q_49, t);
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
        t = term_f_39;
      }
  }
  l_49 = t;
  t = term_f_39;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, term_f_39);
  t = g_15(l_49, o_49, t);
  n_49 = t;
  t = SSL_int_to_string(n_49);
  j_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_49), term_v_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm s_49 = NULL,v_49 = NULL,x_49 = NULL,z_49 = NULL,c_50 = NULL,e_50 = NULL;
  t = term_k_38;
  c_50 = t;
  t = term_c_63;
  e_50 = t;
  t = term_d_63;
  t = d_16(c_50, e_50, t);
  s_49 = t;
  t = term_f_63;
  t = xtc_find_path_0_0(t);
  v_49 = t;
  t = term_j_63;
  t = xtc_find_path_0_0(t);
  x_49 = t;
  t = term_k_63;
  t = xtc_find_path_0_0(t);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_49), term_c_63), x_49), term_c_63), v_49), term_c_63));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm j_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,b_51 = NULL;
  u_50 = t;
  t = term_l_63;
  j_50 = t;
  t = u_50;
  {
    ATerm m_63 = t;
    int n_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_51 = NULL,d_51 = NULL;
        t = term_k_38;
        c_51 = t;
        t = term_x_38;
        d_51 = t;
        t = term_y_38;
        t = d_16(c_51, d_51, t);
        LocalPopChoice(n_63);
      }
    else
      {
        t = m_63;
        {
          ATerm h_51 = NULL,i_51 = NULL;
          t = term_k_38;
          h_51 = t;
          t = term_k_43;
          i_51 = t;
          t = term_l_43;
          t = d_16(h_51, i_51, t);
        }
      }
  }
  b_51 = t;
  t = u_50;
  t = get_include_dirs_0_0(t);
  r_50 = t;
  t = u_50;
  t = pass_keep_0_0(t);
  s_50 = t;
  t = term_a_64;
  {
    ATerm i_64 = t;
    int j_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_51 = NULL,m_51 = NULL;
        t = term_k_38;
        j_51 = t;
        t = term_a_64;
        m_51 = t;
        t = term_k_64;
        t = d_16(j_51, m_51, t);
        LocalPopChoice(j_64);
        t = (ATerm) ATinsert(ATempty, term_a_64);
      }
    else
      {
        t = i_64;
        t = (ATerm) ATempty;
      }
  }
  t_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_50), s_50), r_50), (ATerm) ATinsert(ATinsert(ATempty, b_51), term_m_64));
  t = concat_0_0(t);
  q_50 = t;
  t = u_50;
  t = comp_0_2(j_50, q_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  {
    ATerm n_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_51 = NULL,a_52 = NULL,b_52 = NULL;
        t = term_k_38;
        a_52 = t;
        t = term_l_38;
        b_52 = t;
        t = term_m_38;
        t = d_16(a_52, b_52, t);
        x_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_51, term_z_41);
        t = geq_0_0(t);
        t = q_51;
        t = z_134(t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = n_64;
        t = q_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm l_129 (ATerm), ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  w_52 = t;
  t = SSL_explode_string(w_52);
  {
    ATerm q_64 = t;
    int r_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_55 (ATerm t);
        static ATerm b_55 (ATerm t)
        {
          ATerm r_54 = NULL,u_54 = NULL,v_54 = NULL;
          r_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_54 = ATgetFirst((ATermList) t);
              v_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_64 = t;
            int w_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_31 = NULL,m_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(r_54);
                c_31 = t;
                t = v_54;
                t = b_55(t);
                m_31 = t;
                t = (ATerm) ATinsert(CheckATermList(m_31), u_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, c_31);
                LocalPopChoice(w_64);
              }
            else
              {
                t = s_64;
                {
                  ATerm x_64 = t;
                  int a_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(r_54);
                      q_32 = t;
                      t = u_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(v_54), u_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, q_32);
                      LocalPopChoice(a_65);
                    }
                  else
                    {
                      t = x_64;
                      {
                        ATerm k_33 = NULL,o_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(r_54);
                        k_33 = t;
                        t = u_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = v_54;
                        t = l_129(t);
                        o_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_33), u_54);
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
        t = b_55(t);
        LocalPopChoice(r_64);
      }
    else
      {
        t = q_64;
      }
  }
  v_52 = t;
  t = SSL_implode_string(v_52);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = debug_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(t_22, t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_e_65;
  return(t);
}
static ATerm b_15 (ATerm m_23, ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,o_55 = NULL;
  t = m_23;
  t = basename_1_0(_id, t);
  j_55 = t;
  t = if_verbose3_1_0(l_22, t);
  t = term_m_43;
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_43, j_55);
  t = i_16(o_55, j_55, t);
  {
    ATerm f_65 = t;
    int g_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_55 = NULL,t_55 = NULL;
        t = term_k_38;
        q_55 = t;
        t = term_x_38;
        t_55 = t;
        t = term_y_38;
        t = d_16(q_55, t_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(g_65);
      }
    else
      {
        t = f_65;
        t = j_55;
      }
  }
  k_55 = t;
  t = if_verbose3_1_0(q_22, t);
  t = term_k_43;
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_43, k_55);
  t = i_16(l_55, k_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_55);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_i_65;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(c_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm i_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,v_57 = NULL,t_36 = NULL,y_36 = NULL,z_36 = NULL,t_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      v_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15(v_57, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
        w_57 = t;
        t = term_k_38;
        x_57 = t;
        t = term_o_40;
        y_57 = t;
        t = term_p_40;
        t = d_16(x_57, y_57, t);
        t = w_57;
        LocalPopChoice(k_65);
      }
    else
      {
        t = j_65;
        t = add_main_0_0(t);
      }
  }
  s_57 = t;
  {
    ATerm m_65 = t;
    int n_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_58 = ATgetArgument(t, 0);
            {
              ATerm d_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(s_57);
              d_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_58);
              c_11 = t;
              t = SSLsetAnnotations(c_11, d_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_57;
          }
        LocalPopChoice(n_65);
        t = xtc_transform_file_2_0(d_23, g_23, t);
      }
    else
      {
        t = m_65;
        t = xtc_transform_term_2_0(h_23, i_23, t);
      }
  }
  r_57 = t;
  {
    ATerm o_65 = t;
    int s_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_58 = ATgetArgument(t, 0);
            {
              ATerm l_34 = NULL,e_11 = NULL;
              t = SSLgetAnnotations(r_57);
              l_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_58);
              e_11 = t;
              t = SSLsetAnnotations(e_11, l_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_57;
          }
        LocalPopChoice(s_65);
        t = xtc_transform_file_2_0(n_23, o_23, t);
      }
    else
      {
        t = o_65;
        t = xtc_transform_term_2_0(s_23, u_23, t);
      }
  }
  t = if_keep5_1_0(x_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(d_24, t);
  x_34 = t;
  t = term_t_65;
  t_34 = t;
  t = x_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  w_34 = t;
  t = x_34;
  t = comp_0_2(t_34, w_34, t);
  t = if_keep6_1_0(f_24, t);
  q_57 = t;
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_58 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(q_57);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_58);
              h_11 = t;
              t = SSLsetAnnotations(h_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_57;
          }
        LocalPopChoice(w_65);
        t = xtc_transform_file_2_0(k_24, l_24, t);
      }
    else
      {
        t = v_65;
        t = xtc_transform_term_2_0(m_24, n_24, t);
      }
  }
  t = if_keep6_1_0(p_24, t);
  p_57 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_59 = ATgetArgument(t, 0);
            {
              ATerm d_35 = NULL,t_11 = NULL;
              t = SSLgetAnnotations(p_57);
              d_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_59);
              t_11 = t;
              t = SSLsetAnnotations(t_11, d_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_57;
          }
        LocalPopChoice(y_65);
        t = xtc_transform_file_2_0(r_24, t_24, t);
      }
    else
      {
        t = x_65;
        t = xtc_transform_term_2_0(u_24, v_24, t);
      }
  }
  t = if_keep5_1_0(w_24, t);
  m_57 = t;
  {
    ATerm z_65 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_59 = ATgetArgument(t, 0);
            {
              ATerm h_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(m_57);
              h_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_59);
              h_12 = t;
              t = SSLsetAnnotations(h_12, h_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_57;
          }
        LocalPopChoice(b_66);
        t = xtc_transform_file_2_0(b_25, c_25, t);
      }
    else
      {
        t = z_65;
        t = xtc_transform_term_2_0(e_25, g_25, t);
      }
  }
  t = if_keep5_1_0(o_25, t);
  l_57 = t;
  {
    ATerm c_66 = t;
    int d_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_59 = ATgetArgument(t, 0);
            {
              ATerm b_36 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(l_57);
              b_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_59);
              i_12 = t;
              t = SSLsetAnnotations(i_12, b_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_57;
          }
        LocalPopChoice(d_66);
        t = xtc_transform_file_2_0(r_25, t_25, t);
      }
    else
      {
        t = c_66;
        t = xtc_transform_term_2_0(w_25, x_25, t);
      }
  }
  t = if_keep5_1_0(y_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm o_66 = t;
    int p_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL,p_60 = NULL,u_60 = NULL;
        j_60 = t;
        t = term_k_38;
        p_60 = t;
        t = term_o_40;
        u_60 = t;
        t = term_p_40;
        t = d_16(p_60, u_60, t);
        t = j_60;
        LocalPopChoice(p_66);
        {
          ATerm v_60 = NULL;
          v_60 = t;
          {
            ATerm r_66 = t;
            int t_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_61 = ATgetArgument(t, 0);
                    {
                      ATerm i_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(v_60);
                      i_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_61);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, i_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = v_60;
                  }
                LocalPopChoice(t_66);
                t = xtc_transform_file_2_0(a_26, c_26, t);
              }
            else
              {
                t = r_66;
                t = xtc_transform_term_2_0(d_26, e_26, t);
              }
          }
        }
      }
    else
      {
        t = o_66;
        {
          ATerm g_61 = NULL;
          g_61 = t;
          {
            ATerm x_66 = t;
            int d_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    m_61 = ATgetArgument(t, 0);
                    {
                      ATerm m_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(g_61);
                      m_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, m_61);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, m_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = g_61;
                  }
                LocalPopChoice(d_67);
                t = xtc_transform_file_2_0(g_26, i_26, t);
              }
            else
              {
                t = x_66;
                t = xtc_transform_term_2_0(j_26, k_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  z_36 = t;
  t = term_e_67;
  t_36 = t;
  t = z_36;
  t = pass_warnings_0_0(t);
  y_36 = t;
  t = z_36;
  t = comp_0_2(t_36, y_36, t);
  k_57 = t;
  {
    ATerm i_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_61 = ATgetArgument(t, 0);
            {
              ATerm h_37 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(k_57);
              h_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_61);
              n_12 = t;
              t = SSLsetAnnotations(n_12, h_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_57;
          }
        LocalPopChoice(j_67);
        t = xtc_transform_file_2_0(o_26, u_26, t);
      }
    else
      {
        t = i_67;
        t = xtc_transform_term_2_0(v_26, w_26, t);
      }
  }
  i_57 = t;
  {
    ATerm l_67 = t;
    int n_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_62 = ATgetArgument(t, 0);
            {
              ATerm y_37 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(i_57);
              y_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_62);
              o_12 = t;
              t = SSLsetAnnotations(o_12, y_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_57;
          }
        LocalPopChoice(n_67);
        t = xtc_transform_file_2_0(x_26, y_26, t);
      }
    else
      {
        t = l_67;
        t = xtc_transform_term_2_0(z_26, b_27, t);
      }
  }
  t = if_keep2_1_0(c_27, t);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,h_57 = NULL;
  e_57 = t;
  t = term_o_38;
  f_57 = t;
  t = (ATerm) ATinsert(CheckATermList(e_57), term_t_67);
  h_57 = t;
  t = SSL_printnl(f_57, h_57);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(e_57), term_t_67));
  return(t);
}
static ATerm d_23 (ATerm t)
{
  t = term_v_67;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm i_58 = NULL;
  t = pass_verbose_0_0(t);
  i_58 = t;
  t = (ATerm) ATinsert(CheckATermList(i_58), term_d_41);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  t = term_v_67;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm j_58 = NULL;
  t = pass_verbose_0_0(t);
  j_58 = t;
  t = (ATerm) ATinsert(CheckATermList(j_58), term_d_41);
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = term_y_67;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm r_58 = NULL;
  t = pass_verbose_0_0(t);
  r_58 = t;
  t = (ATerm) ATinsert(CheckATermList(r_58), term_d_41);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_y_67;
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm s_58 = NULL;
  t = pass_verbose_0_0(t);
  s_58 = t;
  t = (ATerm) ATinsert(CheckATermList(s_58), term_d_41);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = save_as_1_0(c_24, t);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_z_67;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = save_as_1_0(e_24, t);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = save_as_1_0(g_24, t);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm l_24 (ATerm t)
{
  ATerm z_58 = NULL;
  t = pass_verbose_0_0(t);
  z_58 = t;
  t = (ATerm) ATinsert(CheckATermList(z_58), term_d_41);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_d_68;
  return(t);
}
static ATerm n_24 (ATerm t)
{
  ATerm a_59 = NULL;
  t = pass_verbose_0_0(t);
  a_59 = t;
  t = (ATerm) ATinsert(CheckATermList(a_59), term_d_41);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = save_as_1_0(q_24, t);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = term_e_68;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_d_41);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_d_41);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm t_59 = NULL;
  t = pass_verbose_0_0(t);
  t_59 = t;
  t = (ATerm) ATinsert(CheckATermList(t_59), term_d_41);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_d_41);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = save_as_1_0(q_25, t);
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_s_68;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_d_41);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm h_60 = NULL;
  t = pass_verbose_0_0(t);
  h_60 = t;
  t = (ATerm) ATinsert(CheckATermList(h_60), term_d_41);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_a_69;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm d_61 = NULL;
  t = pass_verbose_0_0(t);
  d_61 = t;
  t = (ATerm) ATinsert(CheckATermList(d_61), term_d_41);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_d_41);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_b_69;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm q_61 = NULL;
  t = pass_verbose_0_0(t);
  q_61 = t;
  t = (ATerm) ATinsert(CheckATermList(q_61), term_d_41);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_b_69;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm r_61 = NULL;
  t = pass_verbose_0_0(t);
  r_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), term_d_41);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(n_26, t);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_e_69;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_f_69;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm b_62 = NULL;
  t = pass_verbose_0_0(t);
  b_62 = t;
  t = (ATerm) ATinsert(CheckATermList(b_62), term_d_41);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_f_69;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm d_62 = NULL;
  t = pass_verbose_0_0(t);
  d_62 = t;
  t = (ATerm) ATinsert(CheckATermList(d_62), term_d_41);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_g_69;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm l_62 = NULL;
  t = pass_verbose_0_0(t);
  l_62 = t;
  t = (ATerm) ATinsert(CheckATermList(l_62), term_d_41);
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_g_69;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm m_62 = NULL;
  t = pass_verbose_0_0(t);
  m_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), term_d_41);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_h_69;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_22, t);
  t = profile_p__2_0(x_22, z_22, t);
  return(t);
}
static ATerm d_16 (ATerm x_60, ATerm y_60, ATerm t)
{
  ATerm e_63 = NULL;
  t = lookup_table_0_1(x_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(y_60, e_63, t);
  return(t);
}
static ATerm c_15 (ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL;
  h_63 = t;
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
        t = d_16(j_59, k_59, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_69 = ATgetFirst((ATermList) t);
            g_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_69);
        {
          ATerm i_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_59, k_59, g_63);
          t = lookup_table_0_1(j_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_16(k_59, g_63, i_63, t);
          t = (ATerm) ATmakeAppl(sym__3, j_59, k_59, g_63);
        }
      }
    else
      {
        t = i_69;
        {
          ATerm o_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
          t = lookup_table_0_1(j_59, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_16(k_59, o_63, t);
          t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
        }
      }
  }
  t = h_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL;
  e_64 = t;
  t = p_107(t);
  d_64 = t;
  {
    ATerm l_69 = t;
    int m_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_64 = NULL;
        t = term_r_60;
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_64, term_r_60);
        t = d_16(d_64, l_64, t);
        {
          ATerm n_69 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_69;
            }
        }
        LocalPopChoice(m_69);
      }
    else
      {
        t = l_69;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_64 = ATgetFirst((ATermList) t);
      b_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_64, term_r_60, b_64);
  t = lookup_table_0_1(d_64, t);
  h_64 = t;
  t = term_r_60;
  f_64 = t;
  t = h_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(f_64, b_64, g_64, t);
  t = c_64;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm o_64 = NULL;
      o_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_64, o_64);
      t = c_15(d_64, o_64, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = e_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm o_69 = t;
  int p_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_110(t);
      t = v_110(t);
      LocalPopChoice(p_69);
    }
  else
    {
      t = o_69;
      t = v_110(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,y_64 = NULL,z_64 = NULL,c_65 = NULL,d_65 = NULL;
  u_64 = t;
  t = o_107(t);
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_64, term_r_60);
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_69 = ATgetArgument(t, 0);
            ATerm c_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_60;
        h_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_64, term_r_60);
        t = d_16(t_64, h_65, t);
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        t = (ATerm) ATempty;
      }
  }
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_64, term_r_60, (ATerm) ATinsert(CheckATermList(v_64), (ATerm) ATempty));
  t = lookup_table_0_1(t_64, t);
  d_65 = t;
  t = term_r_60;
  y_64 = t;
  t = (ATerm) ATinsert(CheckATermList(v_64), (ATerm) ATempty);
  z_64 = t;
  t = d_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(y_64, z_64, c_65, t);
  t = u_64;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_i_61;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  ATerm u_65 = NULL;
  u_65 = t;
  {
    ATerm h_70 = t;
    int k_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_65);
        LocalPopChoice(k_70);
      }
    else
      {
        t = h_70;
        t = u_65;
      }
  }
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_145 (ATerm), ATerm t)
{
  ATerm l_65 = NULL;
  static ATerm i_27 (ATerm t);
  static ATerm i_27 (ATerm t)
  {
    ATerm p_65 = NULL;
    p_65 = t;
    {
      ATerm l_70 = t;
      int m_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_65 = NULL,r_65 = NULL;
          t = term_i_61;
          q_65 = t;
          t = term_r_60;
          r_65 = t;
          t = term_f_62;
          t = d_16(q_65, r_65, t);
          LocalPopChoice(m_70);
        }
      else
        {
          t = l_70;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_65 != NULL) && (l_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_65 = ATgetFirst((ATermList) t);
        {
          ATerm n_70 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_65;
    t = map_1_0(k_27, t);
    t = p_65;
    t = end_scope_1_0(q_27, t);
    return(t);
  }
  t = begin_scope_1_0(h_27, t);
  t = restore_always_2_0(y_145, i_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_134 (ATerm), ATerm t)
{
  ATerm a_66 = NULL;
  a_66 = t;
  {
    ATerm o_70 = t;
    int p_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_66 = NULL,f_66 = NULL,q_66 = NULL;
        t = term_k_38;
        f_66 = t;
        t = term_l_38;
        q_66 = t;
        t = term_m_38;
        t = d_16(f_66, q_66, t);
        e_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_66, term_f_39);
        t = geq_0_0(t);
        t = a_66;
        t = x_134(t);
        LocalPopChoice(p_70);
      }
    else
      {
        t = o_70;
        t = a_66;
      }
  }
  return(t);
}
static ATerm e_15 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm q_70 = t;
  int r_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_57, o_57);
      LocalPopChoice(r_70);
    }
  else
    {
      t = q_70;
      t = SSL_addr(n_57, o_57);
    }
  return(t);
}
static ATerm g_15 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm s_70 = t;
  int t_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_57, u_57);
      LocalPopChoice(t_70);
    }
  else
    {
      t = s_70;
      t = SSL_subtr(t_57, u_57);
    }
  return(t);
}
static ATerm h_15 (ATerm g_66, ATerm i_66, ATerm k_66, ATerm m_66, ATerm h_66, ATerm j_66, ATerm l_66, ATerm n_66, ATerm t)
{
  ATerm s_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_66, h_66);
  t = g_15(g_66, h_66, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_66, j_66);
  t = g_15(i_66, j_66, t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_66, l_66);
  t = g_15(k_66, l_66, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_66, n_66);
  t = g_15(m_66, n_66, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, s_66, u_66, v_66, w_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_70 = ATgetArgument(t, 0);
      if(match_cons(u_70, sym__4))
        {
          y_66 = ATgetArgument(u_70, 0);
          z_66 = ATgetArgument(u_70, 1);
          a_67 = ATgetArgument(u_70, 2);
          b_67 = ATgetArgument(u_70, 3);
        }
      else
        _fail(t);
      {
        ATerm w_70 = ATgetArgument(t, 1);
        if(match_cons(w_70, sym__4))
          {
            c_67 = ATgetArgument(w_70, 0);
            f_67 = ATgetArgument(w_70, 1);
            g_67 = ATgetArgument(w_70, 2);
            h_67 = ATgetArgument(w_70, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_15(y_66, z_66, a_67, b_67, c_67, f_67, g_67, h_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  ATerm k_67 = NULL,m_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,u_67 = NULL,w_67 = NULL,x_67 = NULL,b_68 = NULL,f_68 = NULL,h_68 = NULL;
  s_67 = t;
  t = times_0_0(t);
  k_67 = t;
  t = s_67;
  t = v_132(t);
  m_67 = t;
  t = times_0_0(t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_67, k_67);
  t = diff_times_0_0(t);
  q_67 = t;
  if(match_cons(t, sym__4))
    {
      b_68 = ATgetArgument(t, 0);
      {
        ATerm x_70 = ATgetArgument(t, 1);
      }
      f_68 = ATgetArgument(t, 2);
      {
        ATerm y_70 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_68, f_68);
  t = e_15(b_68, f_68, t);
  h_68 = t;
  t = SSL_TicksToSeconds(h_68);
  o_67 = t;
  t = q_67;
  if(match_cons(t, sym__4))
    {
      ATerm a_71 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
      {
        ATerm b_71 = ATgetArgument(t, 2);
      }
      w_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_67, w_67);
  t = e_15(u_67, w_67, t);
  x_67 = t;
  t = SSL_TicksToSeconds(x_67);
  p_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_67), term_d_71), o_67), term_c_71);
  t = u_132(t);
  t = m_67;
  return(t);
}
ATerm debug_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  k_68 = t;
  t = z_117(t);
  l_68 = t;
  t = term_o_38;
  m_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_68), l_68);
  n_68 = t;
  t = SSL_printnl(m_68, n_68);
  t = k_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  t_68 = t;
  t = term_k_38;
  x_68 = t;
  t = term_f_71;
  y_68 = t;
  t = term_g_71;
  t = d_16(x_68, y_68, t);
  u_68 = t;
  t = term_d_40;
  v_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_71), term_o_71), term_m_71), term_l_71), term_k_71), term_j_71), term_i_71), u_68), term_h_71);
  w_68 = t;
  t = SSL_printnl(v_68, w_68);
  t = t_68;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      d_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_69;
    }
  else
    {
      t = d_69;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  static ATerm v_69 (ATerm t);
  static ATerm v_69 (ATerm t)
  {
    ATerm r_71 = t;
    int s_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_119(t);
        LocalPopChoice(s_71);
      }
    else
      {
        t = r_71;
        {
          ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,p_38 = NULL,t_38 = NULL,g_13 = NULL;
          s_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_69 = ATgetFirst((ATermList) t);
              u_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_69);
          p_38 = t;
          t = u_69;
          t = v_69(t);
          t_38 = t;
          t = (ATerm) ATinsert(CheckATermList(t_38), t_69);
          g_13 = t;
          t = SSLsetAnnotations(g_13, p_38);
        }
      }
    return(t);
  }
  t = v_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,i_70 = NULL,j_70 = NULL,o_13 = NULL,k_13 = NULL;
    j_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_70 = ATgetFirst((ATermList) t);
        f_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_70);
    d_70 = t;
    t = e_70;
    t = w_118(t);
    g_70 = t;
    t = (ATerm) ATinsert(CheckATermList(f_70), g_70);
    k_13 = t;
    t = SSLsetAnnotations(k_13, d_70);
    i_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_70 = ATgetFirst((ATermList) t);
        b_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_70);
    z_69 = t;
    t = b_70;
    if(((x_69 != NULL) && (x_69 != t)))
      _fail(t);
    else
      x_69 = t;
    t = (ATerm) ATinsert(CheckATermList(b_70), a_70);
    o_13 = t;
    t = SSLsetAnnotations(o_13, z_69);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_27, t);
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_69, not_null(x_69));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm h_128 (ATerm), ATerm t)
{
  ATerm z_70 = NULL,e_71 = NULL;
  ATerm u_71 = t;
  int v_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(h_128, t);
      LocalPopChoice(v_71);
    }
  else
    {
      t = u_71;
      {
        ATerm v_70 = NULL;
        v_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_70, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      z_70 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_70;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_71 = ATgetFirst((ATermList) t);
              ATerm x_71 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_71;
          t = list_tokenize_1_0(h_128, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm y_71 = ATgetFirst((ATermList) t);
          ATerm z_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, z_70);
        }
      else
        {
          ATerm n_71 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_72 = ATgetFirst((ATermList) t);
              ATerm b_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_71;
          t = list_tokenize_1_0(h_128, t);
          n_71 = t;
          t = (ATerm) ATinsert(CheckATermList(n_71), z_70);
        }
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm t_71 = NULL;
  t_71 = t;
  t = SSL_implode_string(t_71);
  return(t);
}
static ATerm k_15 (ATerm k_50, ATerm j_455, ATerm t)
{
  t = SSL_explode_string(j_455);
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm q_71 = NULL;
      static ATerm u_27 (ATerm t);
      static ATerm u_27 (ATerm t)
      {
        if(((q_71 != NULL) && (q_71 != t)))
          _fail(t);
        else
          q_71 = t;
        return(t);
      }
      if(((q_71 != NULL) && (q_71 != t)))
        _fail(t);
      else
        q_71 = t;
      t = k_50;
      t = fetch_1_0(u_27, t);
      return(t);
    }
    t = list_tokenize_1_0(t_27, t);
  }
  t = map_1_0(v_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm h_72 = NULL;
  h_72 = t;
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        t = SSL_filemode(h_72);
        if(match_cons(t, sym__2))
          {
            b_39 = ATgetArgument(t, 0);
            {
              ATerm e_72 = ATgetArgument(t, 1);
              if(((ATgetType(e_72) != AT_INT) || (ATgetInt((ATermInt) e_72) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_39;
        LocalPopChoice(d_72);
      }
    else
      {
        t = c_72;
        {
          ATerm g_39 = NULL,h_39 = NULL;
          t = term_f_72;
          h_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_72, h_72);
          t = j_16(h_39, h_72, t);
          g_39 = t;
          t = SSL_perror(g_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_15 (ATerm r_68, ATerm q_68, ATerm t)
{
  ATerm m_72 = NULL,x_72 = NULL;
  x_72 = t;
  {
    ATerm g_72 = t;
    int i_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_72 = NULL,a_73 = NULL;
        t = (ATerm) ATinsert(ATempty, term_l_61);
        a_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_68, (ATerm) ATinsert(ATempty, term_l_61));
        t = z_15(q_68, a_73, t);
        t = filemode_0_0(t);
        y_72 = t;
        t = SSL_S_ISDIR(y_72);
        t = x_72;
        LocalPopChoice(i_72);
        {
          ATerm b_73 = NULL,d_73 = NULL,e_73 = NULL;
          t = (ATerm) ATinsert(ATempty, term_j_72);
          e_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_72), r_68);
          t = k_15(e_73, r_68, t);
          t = last_0_0(t);
          b_73 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_73), term_k_72), q_68);
          d_73 = t;
          t = SSL_concat_strings(d_73);
        }
      }
    else
      {
        t = g_72;
        t = q_68;
      }
  }
  m_72 = t;
  t = SSL_copy(r_68, m_72);
  return(t);
}
static ATerm m_15 (ATerm w_63, ATerm t)
{
  t = SSL_hashtable_keys(w_63);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  static ATerm w_27 (ATerm t);
  static ATerm w_27 (ATerm t)
  {
    ATerm j_73 = NULL,k_73 = NULL;
    j_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_73), j_73);
    t = d_16(not_null(f_73), j_73, t);
    k_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_73, k_73);
    return(t);
  }
  if(((f_73 != NULL) && (f_73 != t)))
    _fail(t);
  else
    f_73 = t;
  t = lookup_table_0_1(f_73, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(g_73, t);
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
  t = term_l_72;
  return(t);
}
static ATerm f_75 (ATerm y_73, ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  t = term_n_72;
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_73);
  d_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_72, (ATerm) ATmakeAppl(sym_Tool_1, y_73));
  t = d_16(c_74, d_74, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_72 = ATgetFirst((ATermList) t);
      if(match_cons(q_72, sym__2))
        {
          ATerm c_73 = ATgetArgument(q_72, 0);
          b_74 = ATgetArgument(q_72, 1);
        }
      else
        _fail(t);
      {
        ATerm z_72 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_74;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_l_72;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_n_72;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_h_73;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_73 = t;
  int n_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_74 = NULL,f_74 = NULL,i_74 = NULL;
      t = if_verbose5_1_0(x_27, t);
      t = xtc_load_0_0(t);
      i_74 = t;
      if(match_cons(t, sym__2))
        {
          e_74 = ATgetArgument(t, 0);
          f_74 = ATgetArgument(t, 1);
          {
            ATerm o_73 = t;
            int p_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL;
                t = term_n_72;
                u_74 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_74);
                v_74 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_72, (ATerm) ATmakeAppl(sym_Tool_1, e_74));
                t = d_16(u_74, v_74, t);
                {
                  static ATerm z_27 (ATerm t);
                  static ATerm z_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_74 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_74 != NULL) && (t_74 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_74 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_27, t);
                }
                t = not_null(t_74);
                LocalPopChoice(p_73);
              }
            else
              {
                t = o_73;
                t = f_75(i_74, t);
              }
          }
        }
      else
        {
          t = f_75(i_74, t);
        }
      t = if_verbose5_1_0(a_28, t);
      LocalPopChoice(n_73);
    }
  else
    {
      t = i_73;
      {
        ATerm e_75 = NULL,l_39 = NULL,m_39 = NULL;
        e_75 = t;
        t = term_o_38;
        l_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_73), e_75), term_q_73);
        m_39 = t;
        t = SSL_printnl(l_39, m_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_73), e_75), term_q_73);
        t = if_verbose5_1_0(c_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_k_38;
  j_75 = t;
  t = term_s_73;
  k_75 = t;
  t = term_t_73;
  t = d_16(j_75, k_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_74), term_k_71), term_m_74), term_l_74), term_k_74), term_k_71), term_j_74), term_h_74), term_g_74), term_a_74), term_z_73), term_x_73), term_w_73), term_v_73), term_u_73);
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_75 = NULL;
  t = term_a_40;
  t = k_0(t);
  l_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_74), l_75), term_s_74), term_k_71), term_r_74), term_k_71), term_q_74), term_p_74), term_k_71), term_o_74);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_75 = NULL,r_75 = NULL,s_75 = NULL;
  p_75 = t;
  {
    ATerm x_74 = t;
    int y_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_74 = ATgetFirst((ATermList) t);
                ATerm a_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_75;
          }
        LocalPopChoice(y_74);
      }
    else
      {
        t = x_74;
        t = (ATerm) ATinsert(ATempty, p_75);
      }
  }
  r_75 = t;
  t = term_d_40;
  s_75 = t;
  t = SSL_printnl(s_75, r_75);
  t = p_75;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_75 = NULL,a_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_75 = ATgetFirst((ATermList) t);
      a_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_76 = NULL,g_76 = NULL;
        static ATerm e_28 (ATerm t);
        static ATerm e_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_76)), not_null(g_76));
          return(t);
        }
        t = a_76;
        t = i_0(t);
        if(((f_76 != NULL) && (f_76 != t)))
          _fail(t);
        else
          f_76 = t;
        t = y_75;
        t = h_0(t);
        if(((g_76 != NULL) && (g_76 != t)))
          _fail(t);
        else
          g_76 = t;
        t = a_76;
        t = reverse_acc_2_0(h_0, e_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_40;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm q_76 = NULL,s_76 = NULL,t_76 = NULL,u_18 = NULL;
  t_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_76);
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_76);
  u_18 = t;
  t = SSLsetAnnotations(u_18, q_76);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_76), term_b_75);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm a_140 (ATerm), ATerm b_140 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  ATerm c_75 = t;
  int d_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_76 = NULL,p_76 = NULL;
      t = term_k_38;
      o_76 = t;
      t = term_s_73;
      p_76 = t;
      t = term_t_73;
      t = d_16(o_76, p_76, t);
      LocalPopChoice(d_75);
    }
  else
    {
      t = c_75;
      t = fetch_1_0(f_28, t);
    }
  {
    ATerm g_75 = t;
    int h_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_140(t);
        t = echo_0_0(t);
        LocalPopChoice(h_75);
      }
    else
      {
        t = g_75;
      }
  }
  t = term_i_75;
  t = echo_0_0(t);
  t = term_m_75;
  m_76 = t;
  t = term_n_75;
  n_76 = t;
  t = term_o_75;
  t = d_16(m_76, n_76, t);
  t = reverse_acc_2_0(_id, g_28, t);
  t = map_1_0(h_28, t);
  {
    ATerm q_75 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_76 = NULL;
        t = b_140(t);
        z_76 = t;
        t = (ATerm) ATinsert(CheckATermList(z_76), term_k_71);
        t = echo_0_0(t);
        LocalPopChoice(t_75);
      }
    else
      {
        t = q_75;
      }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_77 = NULL,f_77 = NULL;
  static ATerm j_28 (ATerm t);
  static ATerm k_28 (ATerm t);
  static ATerm j_28 (ATerm t)
  {
    static ATerm l_28 (ATerm t);
    static ATerm l_28 (ATerm t)
    {
      t = not_null(d_77);
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
      t = not_null(d_77);
      return(t);
    }
    t = long_description_1_0(m_28, t);
    return(t);
  }
  f_77 = t;
  {
    ATerm u_75 = t;
    int v_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_77 = NULL,h_77 = NULL;
        t = term_k_38;
        g_77 = t;
        t = term_s_73;
        h_77 = t;
        t = term_t_73;
        t = d_16(g_77, h_77, t);
        if(((d_77 != NULL) && (d_77 != t)))
          _fail(t);
        else
          d_77 = t;
        LocalPopChoice(v_75);
      }
    else
      {
        t = u_75;
        {
          static ATerm i_28 (ATerm t);
          static ATerm i_28 (ATerm t)
          {
            ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,w_18 = NULL;
            k_77 = t;
            if(match_cons(t, sym_Program_1))
              {
                j_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_77);
            i_77 = t;
            t = j_77;
            if(((d_77 != NULL) && (d_77 != t)))
              _fail(t);
            else
              d_77 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, j_77);
            w_18 = t;
            t = SSLsetAnnotations(w_18, i_77);
            return(t);
          }
          t = fetch_1_0(i_28, t);
        }
      }
  }
  t = f_77;
  t = default_system_usage_2_0(j_28, k_28, t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm m_77 = NULL,o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_71), o_77), term_x_75), m_77), term_w_75);
  p_77 = t;
  t = SSL_concat_strings(p_77);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(q_28, t);
  return(t);
}
static ATerm n_15 (ATerm v_38, ATerm s_317, ATerm t)
{
  static ATerm t_28 (ATerm t);
  static ATerm t_28 (ATerm t)
  {
    if((v_38 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = s_317;
  t = fetch_1_0(t_28, t);
  return(t);
}
static ATerm v_28 (ATerm t)
{
  ATerm v_77 = NULL;
  v_77 = t;
  if(match_string(t, "--warning"))
    {
      t = v_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = v_77;
    }
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm x_78 = NULL,z_78 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), term_z_56), term_w_56), term_t_56);
  t = Display_possible_warnings_0_0(t);
  x_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_78), term_c_76), term_b_76), term_z_75);
  z_78 = t;
  t = SSL_concat_strings(z_78);
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm z_77 = NULL,b_78 = NULL;
  b_78 = t;
  t = SSL_explode_term(b_78);
  if(match_cons(t, sym__2))
    {
      ATerm d_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_76 = ATgetArgument(t, 1);
        if(((ATgetType(e_76) == AT_LIST) && !(ATisEmpty(e_76))))
          {
            z_77 = ATgetFirst((ATermList) e_76);
            {
              ATerm h_76 = (ATerm) ATgetNext((ATermList) e_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_77;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL;
  j_78 = t;
  t = SSL_explode_term(j_78);
  if(match_cons(t, sym__2))
    {
      ATerm i_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_76 = ATgetArgument(t, 1);
        if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
          {
            i_78 = ATgetFirst((ATermList) j_76);
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
  t = i_78;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
  static ATerm w_28 (ATerm t);
  static ATerm w_28 (ATerm t)
  {
    if(((u_77 != NULL) && (u_77 != t)))
      _fail(t);
    else
      u_77 = t;
    {
      ATerm l_76 = t;
      int r_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = u_77;
          LocalPopChoice(r_76);
          {
            ATerm w_77 = NULL,x_77 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), term_z_56), term_w_56), term_t_56);
            t = map_1_0(y_28, t);
            w_77 = t;
            t = term_p_56;
            x_77 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_p_56, w_77);
            t = i_16(x_77, w_77, t);
          }
        }
      else
        {
          t = l_76;
          t = u_77;
          {
            ATerm u_76 = t;
            int v_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(u_77);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm w_76 = ATgetFirst((ATermList) t);
                    if(((ATgetType(w_76) != AT_INT) || (ATgetInt((ATermInt) w_76) != 110)))
                      _fail(t);
                    {
                      ATerm y_76 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(y_76) == AT_LIST) && !(ATisEmpty(y_76))))
                        {
                          ATerm a_77 = ATgetFirst((ATermList) y_76);
                          if(((ATgetType(a_77) != AT_INT) || (ATgetInt((ATermInt) a_77) != 111)))
                            _fail(t);
                          {
                            ATerm b_77 = (ATerm) ATgetNext((ATermList) y_76);
                            if(((ATgetType(b_77) == AT_LIST) && !(ATisEmpty(b_77))))
                              {
                                ATerm c_77 = ATgetFirst((ATermList) b_77);
                                if(((ATgetType(c_77) != AT_INT) || (ATgetInt((ATermInt) c_77) != 45)))
                                  _fail(t);
                                if(((s_77 != NULL) && (s_77 != (ATerm) ATgetNext((ATermList) b_77))))
                                  _fail((ATerm) ATgetNext((ATermList) b_77));
                                else
                                  s_77 = (ATerm) ATgetNext((ATermList) b_77);
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
                t = u_77;
                LocalPopChoice(v_76);
                {
                  ATerm c_78 = NULL,d_78 = NULL,f_78 = NULL,g_78 = NULL;
                  t = SSL_implode_string(s_77);
                  if(((t_77 != NULL) && (t_77 != t)))
                    _fail(t);
                  else
                    t_77 = t;
                  t = term_k_38;
                  f_78 = t;
                  t = term_p_56;
                  g_78 = t;
                  t = term_q_56;
                  t = d_16(f_78, g_78, t);
                  {
                    static ATerm d_29 (ATerm t);
                    static ATerm d_29 (ATerm t)
                    {
                      if((t_77 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(d_29, t);
                  }
                  c_78 = t;
                  t = term_p_56;
                  d_78 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_p_56, c_78);
                  t = i_16(d_78, c_78, t);
                }
              }
            else
              {
                t = u_76;
                t = u_77;
                {
                  ATerm e_77 = t;
                  int l_77 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_78 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_57), term_z_56), term_w_56), term_t_56);
                      t = map_1_0(e_29, t);
                      h_78 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_77, h_78);
                      t = n_15(u_77, h_78, t);
                      t = u_77;
                      LocalPopChoice(l_77);
                      {
                        ATerm k_78 = NULL,m_78 = NULL;
                        t = term_p_56;
                        k_78 = t;
                        t = (ATerm) ATinsert(ATempty, u_77);
                        m_78 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_p_56, (ATerm) ATinsert(ATempty, u_77));
                        t = y_15(k_78, m_78, t);
                      }
                    }
                  else
                    {
                      t = e_77;
                      {
                        ATerm o_78 = NULL,p_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
                        t = term_k_38;
                        t_78 = t;
                        t = term_s_73;
                        u_78 = t;
                        t = term_t_73;
                        t = d_16(t_78, u_78, t);
                        o_78 = t;
                        t = term_o_38;
                        r_78 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_77), u_77), term_n_77), o_78);
                        s_78 = t;
                        t = SSL_printnl(r_78, s_78);
                        t = term_f_39;
                        p_78 = t;
                        t = SSL_exit(p_78);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_77), u_77), term_n_77), o_78);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(v_28, w_28, x_28, t);
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm b_79 = NULL;
  b_79 = t;
  if(match_string(t, "-S"))
    {
      t = b_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_79;
    }
  return(t);
}
static ATerm i_29 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL;
  t = term_l_38;
  c_79 = t;
  t = term_a_38;
  d_79 = t;
  t = term_r_77;
  t = i_16(c_79, d_79, t);
  t = term_y_77;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_a_78;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm e_79 = NULL,g_79 = NULL,i_79 = NULL;
  e_79 = t;
  t = SSL_string_to_int(e_79);
  g_79 = t;
  t = term_l_38;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, g_79);
  t = i_16(i_79, g_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_79);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_e_78;
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
  ATerm j_79 = NULL,l_79 = NULL;
  t = term_l_78;
  j_79 = t;
  t = term_a_40;
  l_79 = t;
  t = term_n_78;
  t = i_16(j_79, l_79, t);
  t = term_q_78;
  return(t);
}
static ATerm x_29 (ATerm t)
{
  t = term_v_78;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_78 = t;
  int y_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_29, i_29, j_29, t);
      LocalPopChoice(y_78);
    }
  else
    {
      t = w_78;
      {
        ATerm a_79 = t;
        int f_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_29, o_29, p_29, t);
            LocalPopChoice(f_79);
          }
        else
          {
            t = a_79;
            t = Option_3_0(s_29, t_29, x_29, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,s_79 = NULL,u_79 = NULL;
  o_79 = t;
  t = term_k_38;
  s_79 = t;
  t = term_a_39;
  u_79 = t;
  t = term_c_39;
  t = d_16(s_79, u_79, t);
  {
    static ATerm b_30 (ATerm t);
    static ATerm b_30 (ATerm t)
    {
      ATerm v_79 = NULL;
      v_79 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = o_79;
        }
      else
        {
          t = v_79;
        }
      return(t);
    }
    t = map_1_0(b_30, t);
  }
  p_79 = t;
  t = term_a_39;
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, p_79);
  t = i_16(q_79, p_79, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_135 (ATerm), ATerm t)
{
  ATerm a_80 = NULL;
  a_80 = t;
  {
    ATerm h_79 = t;
    int k_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_80 = NULL,d_80 = NULL,f_80 = NULL;
        t = term_k_38;
        d_80 = t;
        t = term_l_38;
        f_80 = t;
        t = term_m_38;
        t = d_16(d_80, f_80, t);
        c_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_80, term_o_47);
        t = geq_0_0(t);
        t = a_80;
        t = b_135(t);
        LocalPopChoice(k_79);
      }
    else
      {
        t = h_79;
        t = a_80;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_135 (ATerm), ATerm t)
{
  ATerm k_80 = NULL;
  k_80 = t;
  {
    ATerm m_79 = t;
    int n_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
        t = term_k_38;
        n_80 = t;
        t = term_l_38;
        o_80 = t;
        t = term_m_38;
        t = d_16(n_80, o_80, t);
        m_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_80, term_e_45);
        t = geq_0_0(t);
        t = k_80;
        t = a_135(t);
        LocalPopChoice(n_79);
      }
    else
      {
        t = m_79;
        t = k_80;
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
    ATerm r_79 = t;
    int t_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_81;
        if((b_81 != t))
          {
            _fail(t);
          }
        t = a_81;
        LocalPopChoice(t_79);
      }
    else
      {
        t = r_79;
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
ATerm if_verbose6_1_0 (ATerm c_135 (ATerm), ATerm t)
{
  ATerm i_81 = NULL;
  i_81 = t;
  {
    ATerm y_79 = t;
    int z_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_81 = NULL,o_81 = NULL,q_81 = NULL;
        t = term_k_38;
        o_81 = t;
        t = term_l_38;
        q_81 = t;
        t = term_m_38;
        t = d_16(o_81, q_81, t);
        m_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_81, term_y_50);
        t = geq_0_0(t);
        t = i_81;
        t = c_135(t);
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
static ATerm q_15 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm g_44, ATerm f_44, ATerm t)
{
  t = y_122(t);
  {
    static ATerm h_30 (ATerm t);
    static ATerm h_30 (ATerm t)
    {
      ATerm s_81 = NULL;
      s_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_44, s_81);
      t = x_122(t);
      return(t);
    }
    t = fetch_1_0(h_30, t);
  }
  t = f_44;
  return(t);
}
static ATerm r_15 (ATerm u_122 (ATerm), ATerm c_44, ATerm b_44, ATerm t)
{
  static ATerm d_83 (ATerm t);
  static ATerm d_83 (ATerm t)
  {
    ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
    u_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_82 = ATgetFirst((ATermList) t);
            w_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_80 = t;
          int e_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_82;
              {
                static ATerm i_30 (ATerm t);
                static ATerm i_30 (ATerm t)
                {
                  t = b_44;
                  return(t);
                }
                t = q_15(u_122, i_30, v_82, w_82, t);
              }
              t = d_83(t);
              LocalPopChoice(e_80);
            }
          else
            {
              t = b_80;
              {
                ATerm z_40 = NULL,g_41 = NULL,y_18 = NULL;
                t = SSLgetAnnotations(u_82);
                z_40 = t;
                t = w_82;
                t = d_83(t);
                g_41 = t;
                t = (ATerm) ATinsert(CheckATermList(g_41), v_82);
                y_18 = t;
                t = SSLsetAnnotations(y_18, z_40);
              }
            }
        }
      }
    return(t);
  }
  t = c_44;
  t = d_83(t);
  return(t);
}
static ATerm l_30 (ATerm t)
{
  ATerm c_84 = NULL;
  if(match_cons(t, sym__2))
    {
      c_84 = ATgetArgument(t, 0);
      if((c_84 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm b_60, ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_80 = ATgetArgument(t, 0);
            ATerm j_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_60, c_60);
        t = d_16(b_60, c_60, t);
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        t = (ATerm) ATempty;
      }
  }
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_83, d_60);
  t = r_15(l_30, l_83, d_60, t);
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_60, c_60, k_83);
  t = lookup_table_0_1(b_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(c_60, k_83, m_83, t);
  t = j_83;
  return(t);
}
ATerm map_1_0 (ATerm j_118 (ATerm), ATerm t)
{
  static ATerm v_84 (ATerm t);
  static ATerm v_84 (ATerm t)
  {
    ATerm q_84 = NULL,r_84 = NULL,u_84 = NULL;
    q_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_84;
      }
    else
      {
        ATerm e_42 = NULL,r_42 = NULL,s_42 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_84 = ATgetFirst((ATermList) t);
            u_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_84);
        e_42 = t;
        t = r_84;
        t = j_118(t);
        r_42 = t;
        t = u_84;
        t = v_84(t);
        s_42 = t;
        t = (ATerm) ATinsert(CheckATermList(s_42), r_42);
        e_19 = t;
        t = SSLsetAnnotations(e_19, e_42);
      }
    return(t);
  }
  t = v_84(t);
  return(t);
}
static ATerm t_15 (ATerm z_131 (ATerm), ATerm l_60, ATerm k_60, ATerm t)
{
  static ATerm p_30 (ATerm t);
  static ATerm p_30 (ATerm t)
  {
    ATerm x_84 = NULL,y_84 = NULL;
    if(match_cons(t, sym__2))
      {
        x_84 = ATgetArgument(t, 0);
        y_84 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, l_60, x_84, y_84);
    t = z_131(t);
    return(t);
  }
  t = k_60;
  t = map_1_0(p_30, t);
  return(t);
}
static ATerm m_85 (ATerm g_85, ATerm t)
{
  t = SSL_fclose(g_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  k_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_85 = ATgetArgument(t, 0);
      {
        ATerm l_80 = t;
        int p_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_85);
            LocalPopChoice(p_80);
          }
        else
          {
            t = l_80;
            t = m_85(k_85, t);
          }
      }
    }
  else
    {
      t = m_85(k_85, t);
    }
  return(t);
}
static ATerm u_15 (ATerm b_38, ATerm t)
{
  t = SSL_read_term_from_stream(b_38);
  return(t);
}
static ATerm v_15 (ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm n_85 = NULL;
  t = SSL_fopen(u_53, v_53);
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_85 = NULL;
  t = SSL_stdin_stream();
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_85 = NULL;
  t = SSL_stdout_stream();
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_85);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_85 = NULL;
  t = SSL_stderr_stream();
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_85);
  return(t);
}
static ATerm h_87 (ATerm w_85, ATerm t)
{
  ATerm x_85 = NULL;
  t = SSL_explode_term(w_85);
  if(match_cons(t, sym__2))
    {
      ATerm q_80 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_80) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_80 = ATgetArgument(t, 1);
        if(((ATgetType(r_80) == AT_LIST) && !(ATisEmpty(r_80))))
          {
            x_85 = ATgetFirst((ATermList) r_80);
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
  t = x_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_87 (ATerm a_86, ATerm b_86, ATerm c_86, ATerm t)
{
  ATerm d_86 = NULL,i_86 = NULL,j_86 = NULL,n_86 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(c_86);
  j_86 = t;
  t = a_86;
  if(match_cons(t, sym_Path_1))
    {
      n_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_86, b_86);
  g_19 = t;
  t = SSLsetAnnotations(g_19, j_86);
  if(match_cons(t, sym__2))
    {
      d_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(d_86, i_86, t);
  return(t);
}
static ATerm j_87 (ATerm p_86, ATerm q_86, ATerm r_86, ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,b_87 = NULL,k_19 = NULL;
  t = SSLgetAnnotations(r_86);
  u_86 = t;
  t = SSL_is_string(p_86);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_87, q_86);
  k_19 = t;
  t = SSLsetAnnotations(k_19, u_86);
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      t_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(s_86, t_86, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  if(match_cons(t, sym__2))
    {
      f_87 = ATgetArgument(t, 0);
      g_87 = ATgetArgument(t, 1);
      {
        ATerm t_80 = t;
        int u_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_87(e_87, t);
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
                  t = i_87(f_87, g_87, e_87, t);
                  LocalPopChoice(w_80);
                }
              else
                {
                  t = v_80;
                  t = j_87(f_87, g_87, e_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_87(e_87, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,u_87 = NULL;
  u_87 = t;
  {
    ATerm x_80 = t;
    int y_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_87, term_z_80);
        t = w_15(t);
        LocalPopChoice(y_80);
      }
    else
      {
        t = x_80;
        {
          ATerm w_43 = NULL,y_43 = NULL;
          t = term_d_81;
          y_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_81, u_87);
          t = j_16(y_43, u_87, t);
          w_43 = t;
          t = SSL_perror(w_43);
          _fail(t);
        }
      }
  }
  m_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_15(n_87, t);
  l_87 = t;
  t = m_87;
  t = fclose_0_0(t);
  t = l_87;
  return(t);
}
static ATerm r_30 (ATerm t)
{
  t = term_e_81;
  return(t);
}
static ATerm u_30 (ATerm t)
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
      ATerm x_87 = NULL,y_87 = NULL;
      x_87 = t;
      t = (ATerm) ATinsert(ATempty, term_j_81);
      y_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_87, (ATerm) ATinsert(ATempty, term_j_81));
      t = z_15(x_87, y_87, t);
      LocalPopChoice(h_81);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_81;
      {
        ATerm k_81 = t;
        int l_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_81 = t;
            if((PushChoice() == 0))
              {
                ATerm z_87 = NULL,a_88 = NULL;
                z_87 = t;
                t = (ATerm) ATinsert(ATempty, term_l_61);
                a_88 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_87, (ATerm) ATinsert(ATempty, term_l_61));
                t = z_15(z_87, a_88, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_81;
              }
            t = debug_1_0(r_30, t);
            LocalPopChoice(l_81);
          }
        else
          {
            t = k_81;
            t = debug_1_0(u_30, t);
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
  t = term_p_81;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = debug_1_0(z_30, t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = term_r_81;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,a_89 = NULL;
  x_88 = t;
  t = term_o_38;
  y_88 = t;
  t = (ATerm) ATinsert(ATempty, term_t_81);
  a_89 = t;
  t = SSL_printnl(y_88, a_89);
  t = x_88;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm b_89 = NULL,d_89 = NULL,e_89 = NULL;
  if(match_cons(t, sym__3))
    {
      b_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
      e_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_15(b_89, d_89, e_89, t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  t = term_o_38;
  g_89 = t;
  t = (ATerm) ATinsert(ATempty, term_u_81);
  h_89 = t;
  t = SSL_printnl(g_89, h_89);
  t = f_89;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  t = term_o_38;
  j_89 = t;
  t = (ATerm) ATinsert(ATempty, term_t_81);
  k_89 = t;
  t = SSL_printnl(j_89, k_89);
  t = i_89;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,k_88 = NULL,l_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
  b_88 = t;
  t = if_verbose5_1_0(w_30, t);
  {
    ATerm v_81 = t;
    if((PushChoice() == 0))
      {
        ATerm v_88 = NULL,w_88 = NULL;
        t = term_n_72;
        v_88 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_88);
        w_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_72, (ATerm) ATmakeAppl(sym_Imported_1, b_88));
        t = d_16(v_88, w_88, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_81;
      }
  }
  d_88 = t;
  t = term_n_72;
  q_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_72, term_w_81, (ATerm) ATinsert(ATempty, b_88));
  t = lookup_table_0_1(q_88, t);
  u_88 = t;
  t = term_w_81;
  r_88 = t;
  t = (ATerm) ATinsert(ATempty, b_88);
  s_88 = t;
  t = u_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(r_88, s_88, t_88, t);
  t = d_88;
  t = if_verbose4_1_0(y_30, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_31, t);
  c_88 = t;
  t = term_n_72;
  l_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_72, c_88);
  t = t_15(b_31, l_88, c_88, t);
  t = if_verbose6_1_0(d_31, t);
  t = term_n_72;
  e_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_72, (ATerm)ATmakeAppl(sym_Imported_1, b_88), (ATerm) ATempty);
  t = lookup_table_0_1(e_88, t);
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_88);
  f_88 = t;
  t = (ATerm) ATempty;
  g_88 = t;
  t = k_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(f_88, g_88, h_88, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_72, (ATerm)ATmakeAppl(sym_Imported_1, b_88), (ATerm) ATempty);
  t = if_verbose4_1_0(e_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,b_90 = NULL;
  y_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_89;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_89 = ATgetFirst((ATermList) t);
          b_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_81 = t;
        int y_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_44 = NULL,o_44 = NULL,q_44 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(y_89);
            k_44 = t;
            t = z_89;
            t = m_126(t);
            o_44 = t;
            t = b_90;
            t = filter_1_0(m_126, t);
            q_44 = t;
            t = (ATerm) ATinsert(CheckATermList(q_44), o_44);
            n_19 = t;
            t = SSLsetAnnotations(n_19, k_44);
            LocalPopChoice(y_81);
          }
        else
          {
            t = x_81;
            t = b_90;
            t = filter_1_0(m_126, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  static ATerm f_90 (ATerm t);
  static ATerm f_90 (ATerm t)
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_110(t);
        t = f_90(t);
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        t = z_110(t);
      }
    return(t);
  }
  t = f_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_82 = t;
  int c_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_90 = NULL,j_90 = NULL;
      t = term_k_38;
      i_90 = t;
      t = term_d_82;
      j_90 = t;
      t = term_e_82;
      t = d_16(i_90, j_90, t);
      LocalPopChoice(c_82);
    }
  else
    {
      t = b_82;
      {
        ATerm f_82 = t;
        int g_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_90 = NULL;
            t = term_h_82;
            l_90 = t;
            t = SSL_getenv(l_90);
            LocalPopChoice(g_82);
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
  t = term_i_82;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL;
  t = term_n_72;
  t_90 = t;
  t = term_j_82;
  u_90 = t;
  t = term_k_82;
  t = d_16(t_90, u_90, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_82 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_82;
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
  t = term_m_82;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_90 = NULL;
  t = if_verbose5_1_0(f_31, t);
  o_90 = t;
  {
    ATerm n_82 = t;
    int o_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_90 = NULL,r_90 = NULL;
        t = term_n_72;
        q_90 = t;
        t = term_w_81;
        r_90 = t;
        t = term_p_82;
        t = d_16(q_90, r_90, t);
        LocalPopChoice(o_82);
      }
    else
      {
        t = n_82;
        {
          ATerm s_90 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_90 = t;
          t = repeat_2_0(h_31, _id, t);
          t = s_90;
        }
      }
  }
  t = o_90;
  t = if_verbose5_1_0(i_31, t);
  return(t);
}
static ATerm w_91 (ATerm y_90, ATerm t)
{
  ATerm c_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = term_n_72;
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_90);
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_72, (ATerm) ATmakeAppl(sym_Tool_1, y_90));
  t = d_16(e_91, f_91, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_82 = ATgetFirst((ATermList) t);
      if(match_cons(q_82, sym__2))
        {
          ATerm s_82 = ATgetArgument(q_82, 0);
          c_91 = ATgetArgument(q_82, 1);
        }
      else
        _fail(t);
      {
        ATerm r_82 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_91;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(n_31, t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_l_72;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm g_91 = NULL,k_91 = NULL,m_91 = NULL;
  t = xtc_load_0_0(t);
  m_91 = t;
  if(match_cons(t, sym__2))
    {
      g_91 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
      {
        ATerm t_82 = t;
        int x_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
            t = term_n_72;
            s_91 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, g_91);
            t_91 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_72, (ATerm) ATmakeAppl(sym_Tool_1, g_91));
            t = d_16(s_91, t_91, t);
            {
              static ATerm k_31 (ATerm t);
              static ATerm k_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((k_91 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((r_91 != NULL) && (r_91 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      r_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_31, t);
            }
            t = not_null(r_91);
            LocalPopChoice(x_82);
          }
        else
          {
            t = t_82;
            t = w_91(m_91, t);
          }
      }
    }
  else
    {
      t = w_91(m_91, t);
    }
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,g_92 = NULL,h_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
      t = term_a_40;
      t = q_0(t);
      i_92 = t;
      t = term_m_75;
      j_92 = t;
      t = term_n_75;
      k_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, i_92);
      t = e_16(j_92, k_92, i_92, t);
      _fail(t);
    }
  else
    {
      ATerm t_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_92 = ATgetFirst((ATermList) t);
          e_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_92 = ATgetFirst((ATermList) t);
          h_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_92;
      t = n_0(t);
      t = g_92;
      t = p_0(t);
      t_92 = t;
      t = (ATerm) ATinsert(CheckATermList(h_92), t_92);
    }
  return(t);
}
static ATerm x_15 (ATerm r_72, ATerm s_72, ATerm t)
{
  ATerm y_82 = t;
  int z_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_92 = NULL,v_92 = NULL,z_92 = NULL;
      t = term_k_38;
      z_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_38, r_72);
      t = d_16(z_92, r_72, t);
      t = term_k_38;
      u_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_38, r_72);
      t = lookup_table_0_1(u_92, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          v_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16(r_72, v_92, t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_38, r_72);
      LocalPopChoice(z_82);
    }
  else
    {
      t = y_82;
      t = (ATerm) ATmakeAppl(sym__2, r_72, s_72);
      t = i_16(r_72, s_72, t);
    }
  return(t);
}
static ATerm y_15 (ATerm u_72, ATerm t_72, ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  t = u_72;
  {
    ATerm a_83 = t;
    int b_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_93 = NULL;
        t = term_k_38;
        h_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_38, u_72);
        t = d_16(h_93, u_72, t);
        LocalPopChoice(b_83);
      }
    else
      {
        t = a_83;
        t = (ATerm) ATempty;
      }
  }
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_72, d_93);
  t = conc_0_0(t);
  c_93 = t;
  t = term_k_38;
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, u_72, c_93);
  t = lookup_table_0_1(e_93, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(u_72, c_93, f_93, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, u_72, c_93);
  return(t);
}
static ATerm z_15 (ATerm i_53, ATerm j_53, ATerm t)
{
  t = SSL_access(i_53, j_53);
  return(t);
}
ATerm at_end_1_0 (ATerm a_119 (ATerm), ATerm t)
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
        t = a_119(t);
      }
    return(t);
  }
  t = s_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,r_93 = NULL;
  l_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_93;
    }
  else
    {
      static ATerm o_31 (ATerm t);
      static ATerm o_31 (ATerm t)
      {
        t = not_null(r_93);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_93 = ATgetFirst((ATermList) t);
          if(((r_93 != NULL) && (r_93 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_93;
      t = at_end_1_0(o_31, t);
    }
  return(t);
}
static ATerm e_95 (ATerm w_94, ATerm t)
{
  ATerm x_94 = NULL;
  t = SSL_explode_term(w_94);
  if(match_cons(t, sym__2))
    {
      ATerm c_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_83) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm e_83 = t;
        int f_83 = stack_ptr;
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
            LocalPopChoice(f_83);
          }
        else
          {
            t = e_83;
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
static ATerm a_16 (ATerm v_72, ATerm w_72, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  t = v_72;
  {
    ATerm g_83 = t;
    int h_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL;
        t = term_k_38;
        k_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_38, v_72);
        t = d_16(k_95, v_72, t);
        LocalPopChoice(h_83);
      }
    else
      {
        t = g_83;
        t = (ATerm) ATempty;
      }
  }
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_95, w_72);
  t = conc_0_0(t);
  f_95 = t;
  t = term_k_38;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, v_72, f_95);
  t = lookup_table_0_1(h_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(v_72, f_95, i_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, v_72, f_95);
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
  t = term_x_38;
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_38, n_95);
  t = i_16(o_95, n_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_95);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_i_83;
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
  t = term_h_56;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_56, r_95);
  t = i_16(s_95, r_95, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_95);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_n_83;
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
  ATerm f_96 = NULL,i_96 = NULL,j_96 = NULL;
  f_96 = t;
  t = term_c_63;
  i_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_96), term_c_63);
  j_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_63, (ATerm) ATinsert(ATinsert(ATempty, f_96), term_c_63));
  t = a_16(i_96, j_96, t);
  t = term_a_40;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_o_83;
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
  t = term_u_61;
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_61, l_96);
  t = i_16(m_96, l_96, t);
  t = term_a_40;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_p_83;
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
  ATerm q_96 = NULL,r_96 = NULL;
  t = term_o_40;
  q_96 = t;
  t = term_a_40;
  r_96 = t;
  t = term_q_83;
  t = i_16(q_96, r_96, t);
  t = term_a_40;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_r_83;
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
  t = term_k_40;
  t_96 = t;
  t = (ATerm) ATinsert(ATempty, s_96);
  u_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, (ATerm) ATinsert(ATempty, s_96));
  t = a_16(t_96, u_96, t);
  t = term_a_40;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_s_83;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm v_96 = NULL,y_96 = NULL,z_96 = NULL;
  v_96 = t;
  t = term_k_39;
  y_96 = t;
  t = (ATerm) ATinsert(ATempty, v_96);
  z_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATinsert(ATempty, v_96));
  t = y_15(y_96, z_96, t);
  t = term_a_40;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_t_83;
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
  t = term_u_83;
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_83, a_97);
  t = j_16(e_97, a_97, t);
  b_97 = t;
  t = term_o_39;
  c_97 = t;
  t = (ATerm) ATinsert(ATempty, b_97);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATinsert(ATempty, b_97));
  t = y_15(c_97, d_97, t);
  t = term_a_40;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_v_83;
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
  ATerm f_97 = NULL,g_97 = NULL,j_97 = NULL,k_97 = NULL,l_97 = NULL;
  f_97 = t;
  t = term_w_83;
  l_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_83, f_97);
  t = j_16(l_97, f_97, t);
  g_97 = t;
  t = term_a_39;
  j_97 = t;
  t = (ATerm) ATinsert(ATempty, g_97);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, g_97));
  t = y_15(j_97, k_97, t);
  t = term_a_40;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  t = term_x_83;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_33 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  m_97 = t;
  t = term_y_83;
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_83, m_97);
  t = j_16(q_97, m_97, t);
  n_97 = t;
  t = term_a_39;
  o_97 = t;
  t = (ATerm) ATinsert(ATempty, n_97);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, n_97));
  t = y_15(o_97, p_97, t);
  t = term_a_40;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_z_83;
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
    ATerm a_84 = t;
    int b_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_97 = NULL;
        t = (ATerm) ATinsert(ATempty, term_l_61);
        v_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATinsert(ATempty, term_l_61));
        t = z_15(r_97, v_97, t);
        LocalPopChoice(b_84);
      }
    else
      {
        t = a_84;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), r_97), term_d_84);
        {
          ATerm f_84 = t;
          int g_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_45 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), r_97), term_d_84);
              r_45 = t;
              t = SSL_concat_strings(r_45);
              t = xtc_find_0_0(t);
              LocalPopChoice(g_84);
            }
          else
            {
              t = f_84;
              {
                ATerm a_98 = NULL;
                t = term_f_39;
                a_98 = t;
                t = SSL_exit(a_98);
              }
            }
        }
      }
  }
  s_97 = t;
  t = term_a_39;
  t_97 = t;
  t = (ATerm) ATinsert(ATempty, s_97);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, s_97));
  t = y_15(t_97, u_97, t);
  t = term_a_40;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  t = term_h_84;
  return(t);
}
static ATerm m_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_33 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  b_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_84), b_98), term_i_84);
  f_98 = t;
  t = SSL_concat_strings(f_98);
  c_98 = t;
  t = term_o_39;
  d_98 = t;
  t = (ATerm) ATinsert(ATempty, c_98);
  e_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATinsert(ATempty, c_98));
  t = y_15(d_98, e_98, t);
  t = term_a_40;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  t = term_k_84;
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
  ATerm i_98 = NULL,j_98 = NULL;
  t = term_t_39;
  i_98 = t;
  t = term_a_40;
  j_98 = t;
  t = term_l_84;
  t = i_16(i_98, j_98, t);
  t = term_a_40;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_m_84;
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
  ATerm m_98 = NULL,n_98 = NULL;
  t = term_x_62;
  m_98 = t;
  t = term_a_40;
  n_98 = t;
  t = term_n_84;
  t = i_16(m_98, n_98, t);
  t = term_a_40;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  t = term_o_84;
  return(t);
}
static ATerm h_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_34 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL;
  t = term_a_58;
  o_98 = t;
  t = term_a_40;
  p_98 = t;
  t = term_p_84;
  t = i_16(o_98, p_98, t);
  t = term_a_40;
  return(t);
}
static ATerm j_34 (ATerm t)
{
  t = term_s_84;
  return(t);
}
static ATerm m_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_34 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
  t_98 = t;
  t = SSL_string_to_int(t_98);
  u_98 = t;
  t = term_v_43;
  v_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, u_98);
  t = i_16(v_98, u_98, t);
  t = term_a_40;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = term_t_84;
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
  ATerm z_98 = NULL,c_99 = NULL,d_99 = NULL;
  z_98 = t;
  t = SSL_string_to_int(z_98);
  c_99 = t;
  t = term_e_44;
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_44, c_99);
  t = i_16(d_99, c_99, t);
  t = term_a_40;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  t = term_w_84;
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
  ATerm e_99 = NULL,g_99 = NULL;
  t = term_t_45;
  e_99 = t;
  t = term_a_40;
  g_99 = t;
  t = term_z_84;
  t = x_15(e_99, g_99, t);
  t = term_a_40;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_a_85;
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
  ATerm i_99 = NULL,k_99 = NULL;
  i_99 = t;
  if(match_string(t, "old"))
    {
      t = i_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = i_99;
    }
  t = term_b_59;
  k_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_59, i_99);
  t = i_16(k_99, i_99, t);
  t = term_a_40;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_b_85;
  return(t);
}
static ATerm i_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_a_40;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  t = term_c_85;
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
  t = term_d_85;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_a_40;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  t = term_e_85;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  ATerm w_99 = NULL;
  w_99 = t;
  if(match_string(t, "-h"))
    {
      t = w_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = w_99;
    }
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  t = term_f_85;
  y_99 = t;
  t = term_a_40;
  z_99 = t;
  t = term_h_85;
  t = i_16(y_99, z_99, t);
  t = term_a_40;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_i_85;
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
  ATerm a_100 = NULL,b_100 = NULL;
  t = term_l_85;
  a_100 = t;
  t = term_a_40;
  b_100 = t;
  t = term_r_85;
  t = i_16(a_100, b_100, t);
  t = term_a_40;
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = term_s_85;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  if(match_string(t, "-v"))
    {
      t = c_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = c_100;
    }
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm d_100 = NULL,g_100 = NULL;
  t = term_t_85;
  d_100 = t;
  t = term_a_40;
  g_100 = t;
  t = term_u_85;
  t = i_16(d_100, g_100, t);
  t = term_a_40;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  t = term_v_85;
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
  ATerm h_100 = NULL,i_100 = NULL,k_100 = NULL;
  h_100 = t;
  t = term_u_58;
  i_100 = t;
  t = term_f_39;
  k_100 = t;
  t = term_y_85;
  t = i_16(i_100, k_100, t);
  t = h_100;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  t = term_u_58;
  return(t);
}
static ATerm a_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_36 (ATerm t)
{
  ATerm l_100 = NULL,q_100 = NULL,r_100 = NULL;
  l_100 = t;
  t = term_w_58;
  q_100 = t;
  t = term_a_38;
  r_100 = t;
  t = term_z_85;
  t = i_16(q_100, r_100, t);
  t = l_100;
  return(t);
}
static ATerm d_36 (ATerm t)
{
  t = term_w_58;
  return(t);
}
static ATerm e_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL;
  t = term_a_64;
  s_100 = t;
  t = term_a_40;
  t_100 = t;
  t = term_e_86;
  t = i_16(s_100, t_100, t);
  t = term_a_40;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_f_86;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm g_86 = t;
  int h_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_86);
    }
  else
    {
      t = g_86;
      {
        ATerm k_86 = t;
        int l_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_86);
          }
        else
          {
            t = k_86;
            {
              ATerm m_86 = t;
              int o_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_32, c_32, e_32, t);
                  LocalPopChoice(o_86);
                }
              else
                {
                  t = m_86;
                  {
                    ATerm v_86 = t;
                    int w_86 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_32, g_32, h_32, t);
                        LocalPopChoice(w_86);
                      }
                    else
                      {
                        t = v_86;
                        {
                          ATerm x_86 = t;
                          int y_86 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(i_32, j_32, k_32, t);
                              LocalPopChoice(y_86);
                            }
                          else
                            {
                              t = x_86;
                              {
                                ATerm z_86 = t;
                                int a_87 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_32, m_32, o_32, t);
                                    LocalPopChoice(a_87);
                                  }
                                else
                                  {
                                    t = z_86;
                                    {
                                      ATerm c_87 = t;
                                      int d_87 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_32, r_32, s_32, t);
                                          LocalPopChoice(d_87);
                                        }
                                      else
                                        {
                                          t = c_87;
                                          {
                                            ATerm k_87 = t;
                                            int o_87 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(t_32, u_32, v_32, t);
                                                LocalPopChoice(o_87);
                                              }
                                            else
                                              {
                                                t = k_87;
                                                {
                                                  ATerm p_87 = t;
                                                  int q_87 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(y_32, z_32, a_33, t);
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
                                                            t = ArgOption_3_0(b_33, d_33, f_33, t);
                                                            LocalPopChoice(s_87);
                                                          }
                                                        else
                                                          {
                                                            t = r_87;
                                                            {
                                                              ATerm t_87 = t;
                                                              int v_87 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(h_33, i_33, l_33, t);
                                                                  LocalPopChoice(v_87);
                                                                }
                                                              else
                                                                {
                                                                  t = t_87;
                                                                  {
                                                                    ATerm w_87 = t;
                                                                    int i_88 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(m_33, q_33, r_33, t);
                                                                        LocalPopChoice(i_88);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = w_87;
                                                                        {
                                                                          ATerm j_88 = t;
                                                                          int o_88 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(t_33, w_33, a_34, t);
                                                                              LocalPopChoice(o_88);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_88;
                                                                              {
                                                                                ATerm p_88 = t;
                                                                                int z_88 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(b_34, c_34, e_34, t);
                                                                                    LocalPopChoice(z_88);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_88;
                                                                                    {
                                                                                      ATerm c_89 = t;
                                                                                      int l_89 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(h_34, i_34, j_34, t);
                                                                                          LocalPopChoice(l_89);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_89;
                                                                                          {
                                                                                            ATerm m_89 = t;
                                                                                            int n_89 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(m_34, r_34, s_34, t);
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
                                                                                                      t = ArgOption_3_0(u_34, v_34, y_34, t);
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
                                                                                                            t = Option_3_0(a_35, b_35, c_35, t);
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
                                                                                                                  t = ArgOption_3_0(e_35, f_35, g_35, t);
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
                                                                                                                        t = ArgOption_3_0(i_35, j_35, k_35, t);
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
                                                                                                                              ATerm q_99 = NULL;
                                                                                                                              q_99 = t;
                                                                                                                              t = term_d_85;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = q_99;
                                                                                                                              t = Option_3_0(l_35, m_35, n_35, t);
                                                                                                                              LocalPopChoice(x_89);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_89;
                                                                                                                              {
                                                                                                                                ATerm a_90 = t;
                                                                                                                                int c_90 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(c_90);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = a_90;
                                                                                                                                    {
                                                                                                                                      ATerm d_90 = t;
                                                                                                                                      int e_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(o_35, p_35, q_35, t);
                                                                                                                                          LocalPopChoice(e_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = d_90;
                                                                                                                                          {
                                                                                                                                            ATerm g_90 = t;
                                                                                                                                            int h_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(r_35, s_35, t_35, t);
                                                                                                                                                LocalPopChoice(h_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = g_90;
                                                                                                                                                {
                                                                                                                                                  ATerm k_90 = t;
                                                                                                                                                  int m_90 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(u_35, v_35, w_35, t);
                                                                                                                                                      LocalPopChoice(m_90);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_90 = t;
                                                                                                                                                        int p_90 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
                                                                                                                                                            LocalPopChoice(p_90);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = n_90;
                                                                                                                                                            {
                                                                                                                                                              ATerm v_90 = t;
                                                                                                                                                              int w_90 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(x_35, y_35, z_35, t);
                                                                                                                                                                  LocalPopChoice(w_90);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = v_90;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm x_90 = t;
                                                                                                                                                                    int z_90 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(a_36, c_36, d_36, t);
                                                                                                                                                                        LocalPopChoice(z_90);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = x_90;
                                                                                                                                                                        t = Option_3_0(e_36, g_36, h_36, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm b_16 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm v_100 = NULL;
  t = SSL_hashtable_remove(v_63, u_63);
  v_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_100);
  return(t);
}
static ATerm c_16 (ATerm z_63, ATerm t)
{
  ATerm y_100 = NULL;
  t = SSL_hashtable_destroy(z_63);
  y_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_100);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,c_101 = NULL,d_101 = NULL;
  z_100 = t;
  t = table_hashtable_0_0(t);
  a_101 = t;
  t = lookup_table_0_1(z_100, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(d_101, t);
  t = a_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_16(z_100, c_101, t);
  t = z_100;
  return(t);
}
ATerm fetch_1_0 (ATerm t_118 (ATerm), ATerm t)
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
      ATerm a_91 = t;
      int b_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_46 = NULL,n_46 = NULL,v_19 = NULL;
          t = SSLgetAnnotations(s_102);
          e_46 = t;
          t = u_102;
          t = t_118(t);
          n_46 = t;
          t = (ATerm) ATinsert(CheckATermList(y_102), n_46);
          v_19 = t;
          t = SSLsetAnnotations(v_19, e_46);
          LocalPopChoice(b_91);
        }
      else
        {
          t = a_91;
          {
            ATerm a_47 = NULL,l_47 = NULL,w_19 = NULL;
            t = SSLgetAnnotations(s_102);
            a_47 = t;
            t = y_102;
            t = z_102(t);
            l_47 = t;
            t = (ATerm) ATinsert(CheckATermList(l_47), u_102);
            w_19 = t;
            t = SSLsetAnnotations(w_19, a_47);
          }
        }
    }
    return(t);
  }
  t = z_102(t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_36 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL;
  t = term_d_91;
  e_103 = t;
  t = term_a_40;
  f_103 = t;
  t = term_h_91;
  t = i_16(e_103, f_103, t);
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = term_i_91;
  return(t);
}
static ATerm n_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_36 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,j_103 = NULL,l_103 = NULL;
  t = term_d_91;
  j_103 = t;
  t = term_a_40;
  l_103 = t;
  t = term_h_91;
  t = i_16(j_103, l_103, t);
  t = term_t_85;
  g_103 = t;
  t = term_a_40;
  h_103 = t;
  t = term_u_85;
  t = i_16(g_103, h_103, t);
  t = term_j_91;
  return(t);
}
static ATerm p_36 (ATerm t)
{
  t = term_l_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_91 = t;
  int o_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_36, k_36, l_36, t);
      LocalPopChoice(o_91);
    }
  else
    {
      t = n_91;
      t = Option_3_0(n_36, o_36, p_36, t);
    }
  return(t);
}
static ATerm e_16 (ATerm e_59, ATerm f_59, ATerm d_59, ATerm t)
{
  ATerm n_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_59, f_59);
  {
    ATerm p_91 = t;
    int q_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_91 = ATgetArgument(t, 0);
            ATerm v_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_59, f_59);
        t = d_16(e_59, f_59, t);
        LocalPopChoice(q_91);
      }
    else
      {
        t = p_91;
        t = (ATerm) ATempty;
      }
  }
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_59, f_59, (ATerm) ATinsert(CheckATermList(q_103), d_59));
  t = lookup_table_0_1(e_59, t);
  t_103 = t;
  t = (ATerm) ATinsert(CheckATermList(q_103), d_59);
  r_103 = t;
  t = t_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(f_59, r_103, s_103, t);
  t = n_103;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_104 = NULL,e_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
      t = term_a_40;
      t = f_0(t);
      f_104 = t;
      t = term_m_75;
      g_104 = t;
      t = term_n_75;
      h_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, f_104);
      t = e_16(g_104, h_104, f_104, t);
      _fail(t);
    }
  else
    {
      ATerm k_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_104 = ATgetFirst((ATermList) t);
          e_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_104;
      t = b_0(t);
      t = term_a_40;
      t = c_0(t);
      k_104 = t;
      t = (ATerm) ATinsert(CheckATermList(e_104), k_104);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t)
{
  ATerm m_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL,e_20 = NULL;
  s_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_104 = ATgetFirst((ATermList) t);
      p_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_104);
  m_104 = t;
  t = o_104;
  t = m_88(t);
  q_104 = t;
  t = p_104;
  t = n_88(t);
  r_104 = t;
  t = (ATerm) ATinsert(CheckATermList(r_104), q_104);
  e_20 = t;
  t = SSLsetAnnotations(e_20, m_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm l_105 = NULL,p_105 = NULL,t_105 = NULL,w_105 = NULL,y_105 = NULL,n_106 = NULL,h_20 = NULL;
  l_105 = t;
  {
    ATerm x_91 = t;
    int y_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_91;
        t = v_139(t);
        LocalPopChoice(y_91);
      }
    else
      {
        t = x_91;
      }
  }
  t = l_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_105 = ATgetFirst((ATermList) t);
      w_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_105);
  p_105 = t;
  t = term_s_73;
  n_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_73, t_105);
  t = i_16(n_106, t_105, t);
  t = w_105;
  {
    static ATerm f_107 (ATerm t);
    static ATerm f_107 (ATerm t)
    {
      ATerm a_92 = t;
      int b_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_92 = t;
          int f_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_106 = NULL;
              s_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_106;
              LocalPopChoice(f_92);
            }
          else
            {
              t = c_92;
              t = v_139(t);
              t = Cons_2_0(_id, f_107, t);
            }
          LocalPopChoice(b_92);
        }
      else
        {
          t = a_92;
          {
            ATerm b_107 = NULL,c_107 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_107 = ATgetFirst((ATermList) t);
                c_107 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_107), (ATerm) ATmakeAppl(sym_Undefined_1, b_107));
          }
        }
      return(t);
    }
    t = f_107(t);
  }
  y_105 = t;
  t = (ATerm) ATinsert(CheckATermList(y_105), (ATerm) ATmakeAppl(sym_Program_1, t_105));
  h_20 = t;
  t = SSLsetAnnotations(h_20, p_105);
  return(t);
}
static ATerm s_36 (ATerm t)
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
  t = term_f_85;
  k_108 = t;
  t = term_a_40;
  l_108 = t;
  t = term_h_85;
  t = i_16(k_108, l_108, t);
  t = term_l_92;
  return(t);
}
static ATerm a_37 (ATerm t)
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
ATerm parse_options_3_0 (ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  ATerm y_107 = NULL,z_107 = NULL,c_108 = NULL,d_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL;
  c_108 = t;
  t = term_m_75;
  d_108 = t;
  t = term_n_92;
  t = lookup_table_0_1(d_108, t);
  i_108 = t;
  t = term_n_75;
  f_108 = t;
  t = (ATerm) ATempty;
  g_108 = t;
  t = i_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(f_108, g_108, h_108, t);
  t = c_108;
  {
    static ATerm r_36 (ATerm t);
    static ATerm r_36 (ATerm t)
    {
      ATerm o_92 = t;
      int p_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_139(t);
          LocalPopChoice(p_92);
        }
      else
        {
          t = o_92;
          {
            ATerm q_92 = t;
            int r_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_36, x_36, a_37, t);
                LocalPopChoice(r_92);
              }
            else
              {
                t = q_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_36, t);
  }
  {
    ATerm s_92 = t;
    int w_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_109 = NULL;
        e_109 = t;
        {
          ATerm x_92 = t;
          int y_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_47 = NULL;
              t = e_109;
              {
                ATerm a_93 = t;
                int b_93 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_47 = NULL,e_48 = NULL;
                    t = term_k_38;
                    z_47 = t;
                    t = term_f_85;
                    e_48 = t;
                    t = term_g_93;
                    t = d_16(z_47, e_48, t);
                    LocalPopChoice(b_93);
                  }
                else
                  {
                    t = a_93;
                    t = fetch_1_0(c_37, t);
                  }
              }
              t = e_109;
              t = t_139(t);
              t = term_a_38;
              w_47 = t;
              t = SSL_exit(w_47);
              LocalPopChoice(y_92);
            }
          else
            {
              t = x_92;
              {
                ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
                t = term_k_38;
                l_48 = t;
                t = term_d_91;
                m_48 = t;
                t = term_i_93;
                t = d_16(l_48, m_48, t);
                t = e_109;
                t = u_139(t);
                t = term_a_38;
                k_48 = t;
                t = SSL_exit(k_48);
              }
            }
        }
        LocalPopChoice(w_92);
      }
    else
      {
        t = s_92;
        {
          ATerm j_93 = t;
          int k_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_109 = NULL,h_109 = NULL,i_109 = NULL;
              static ATerm g_37 (ATerm t);
              static ATerm g_37 (ATerm t)
              {
                ATerm j_109 = NULL,k_109 = NULL,r_109 = NULL,o_20 = NULL;
                r_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_109);
                j_109 = t;
                t = k_109;
                if(((y_107 != NULL) && (y_107 != t)))
                  _fail(t);
                else
                  y_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_109);
                o_20 = t;
                t = SSLsetAnnotations(o_20, j_109);
                return(t);
              }
              t = fetch_1_0(g_37, t);
              t = term_o_38;
              h_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_107)), term_n_93);
              i_109 = t;
              t = SSL_printnl(h_109, i_109);
              t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_107)), term_n_93));
              t = t_139(t);
              t = term_f_39;
              g_109 = t;
              t = SSL_exit(g_109);
              LocalPopChoice(k_93);
            }
          else
            {
              t = j_93;
            }
        }
      }
  }
  z_107 = t;
  t = term_m_75;
  t = table_destroy_0_0(t);
  t = z_107;
  return(t);
}
static ATerm g_16 (ATerm p_63, ATerm q_63, ATerm r_63, ATerm t)
{
  ATerm y_109 = NULL;
  t = SSL_hashtable_put(r_63, p_63, q_63);
  y_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_109);
  return(t);
}
static ATerm h_16 (ATerm s_63, ATerm t_63, ATerm t)
{
  t = SSL_hashtable_get(t_63, s_63);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm z_109 = NULL;
  t = SSL_hashtable_create(x_63, y_63);
  z_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_109);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_110 = NULL,f_110 = NULL,g_110 = NULL,i_110 = NULL,k_110 = NULL;
  a_110 = t;
  t = term_o_93;
  i_110 = t;
  t = term_p_93;
  k_110 = t;
  t = a_110;
  t = new_hashtable_0_2(i_110, k_110, t);
  f_110 = t;
  t = a_110;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(a_110, f_110, g_110, t);
  t = a_110;
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
ATerm lookup_table_0_1 (ATerm q_60, ATerm t)
{
  ATerm b_111 = NULL;
  t = table_hashtable_0_0(t);
  b_111 = t;
  {
    ATerm q_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL;
        t = b_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_16(q_60, q_48, t);
        LocalPopChoice(s_93);
      }
    else
      {
        t = q_93;
        {
          ATerm b_49 = NULL;
          t = q_60;
          t = table_create_0_0(t);
          t = b_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_16(q_60, b_49, t);
        }
      }
  }
  return(t);
}
static ATerm i_16 (ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL;
  t = term_k_38;
  e_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, o_72, p_72);
  t = lookup_table_0_1(e_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(o_72, p_72, f_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_38, o_72, p_72);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL;
  p_111 = t;
  t = SSL_explode_string(p_111);
  {
    ATerm t_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_112 (ATerm t);
        static ATerm y_112 (ATerm t)
        {
          ATerm t_112 = NULL,u_112 = NULL,x_112 = NULL;
          t_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_112 = ATgetFirst((ATermList) t);
              x_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_93 = t;
            int w_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_49 = NULL,t_49 = NULL,q_20 = NULL;
                t = SSLgetAnnotations(t_112);
                k_49 = t;
                t = x_112;
                t = y_112(t);
                t_49 = t;
                t = (ATerm) ATinsert(CheckATermList(t_49), u_112);
                q_20 = t;
                t = SSLsetAnnotations(q_20, k_49);
                LocalPopChoice(w_93);
              }
            else
              {
                t = v_93;
                {
                  ATerm g_50 = NULL,x_20 = NULL;
                  t = SSLgetAnnotations(t_112);
                  g_50 = t;
                  t = u_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, u_112);
                  x_20 = t;
                  t = SSLsetAnnotations(x_20, g_50);
                }
              }
          }
          return(t);
        }
        t = y_112(t);
        LocalPopChoice(u_93);
      }
    else
      {
        t = t_93;
        t = (ATerm) ATempty;
      }
  }
  o_111 = t;
  t = SSL_implode_string(o_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm j_16 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_strcat(y_51, z_51);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,j_113 = NULL,n_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL,d_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,k_114 = NULL,l_114 = NULL,y_114 = NULL,a_115 = NULL,c_115 = NULL,o_115 = NULL,p_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,w_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,f_116 = NULL,g_116 = NULL;
  e_113 = t;
  t = term_f_71;
  f_116 = t;
  t = term_x_93;
  g_116 = t;
  t = term_y_93;
  t = i_16(f_116, g_116, t);
  t = term_l_38;
  a_116 = t;
  t = term_f_39;
  b_116 = t;
  t = term_z_93;
  t = i_16(a_116, b_116, t);
  t = term_v_43;
  w_115 = t;
  t = term_a_38;
  z_115 = t;
  t = term_a_94;
  t = i_16(w_115, z_115, t);
  t = term_e_44;
  s_115 = t;
  t = term_y_50;
  t_115 = t;
  t = term_b_94;
  t = i_16(s_115, t_115, t);
  t = term_c_63;
  p_115 = t;
  t = (ATerm) ATempty;
  r_115 = t;
  t = term_c_94;
  t = i_16(p_115, r_115, t);
  t = term_k_40;
  c_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94);
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94));
  t = i_16(c_115, o_115, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  w_113 = t;
  t = term_g_94;
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_113, term_g_94);
  t = j_16(w_113, a_115, t);
  p_113 = t;
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  t_113 = t;
  t = term_g_94;
  y_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_113, term_g_94);
  t = j_16(t_113, y_114, t);
  q_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  s_113 = t;
  t = term_g_94;
  l_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_113, term_g_94);
  t = j_16(s_113, l_114, t);
  r_113 = t;
  t = term_k_39;
  i_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_113), term_c_63), q_113), term_c_63), p_113), term_c_63);
  k_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_113), term_c_63), q_113), term_c_63), p_113), term_c_63));
  t = i_16(i_114, k_114, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  n_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_94), n_113), term_w_83);
  h_114 = t;
  t = SSL_concat_strings(h_114);
  f_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  j_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_94), j_113), term_w_83);
  g_114 = t;
  t = SSL_concat_strings(g_114);
  g_113 = t;
  t = term_a_39;
  d_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), g_113), term_m_94), term_l_94), term_k_94), f_113);
  f_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_94), term_n_94), g_113), term_m_94), term_l_94), term_k_94), f_113));
  t = i_16(d_114, f_114, t);
  t = term_o_39;
  z_113 = t;
  t = (ATerm) ATempty;
  a_114 = t;
  t = term_t_94;
  t = i_16(z_113, a_114, t);
  t = term_b_59;
  x_113 = t;
  t = term_u_94;
  y_113 = t;
  t = term_v_94;
  t = i_16(x_113, y_113, t);
  t = e_113;
  return(t);
}
static ATerm i_37 (ATerm t)
{
  ATerm o_117 = NULL,p_117 = NULL,s_117 = NULL;
  o_117 = t;
  t = term_k_38;
  p_117 = t;
  t = term_h_56;
  s_117 = t;
  t = term_y_94;
  t = d_16(p_117, s_117, t);
  t = debug_1_0(l_37, t);
  t = o_117;
  return(t);
}
static ATerm l_37 (ATerm t)
{
  t = term_c_95;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm d_95 = t;
    int j_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_116 = NULL,m_116 = NULL,n_116 = NULL,o_116 = NULL,r_116 = NULL;
        t = term_k_38;
        o_116 = t;
        t = term_l_85;
        r_116 = t;
        t = term_l_95;
        t = d_16(o_116, r_116, t);
        t = term_p_95;
        t = xtc_find_0_0(t);
        l_116 = t;
        t = term_d_40;
        n_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_116, term_d_40);
        t = l_15(l_116, n_116, t);
        t = term_a_38;
        m_116 = t;
        t = SSL_exit(m_116);
        LocalPopChoice(j_95);
      }
    else
      {
        t = d_95;
      }
  }
  {
    ATerm t_95 = t;
    int u_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_116 = NULL,w_116 = NULL,z_116 = NULL;
        t = term_k_38;
        w_116 = t;
        t = term_t_85;
        z_116 = t;
        t = term_v_95;
        t = d_16(w_116, z_116, t);
        t = strc_version_0_0(t);
        t = term_a_38;
        v_116 = t;
        t = SSL_exit(v_116);
        LocalPopChoice(u_95);
      }
    else
      {
        t = t_95;
      }
  }
  {
    ATerm w_95 = t;
    int x_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_117 = NULL,h_117 = NULL,i_117 = NULL;
        e_117 = t;
        t = term_k_38;
        h_117 = t;
        t = term_h_56;
        i_117 = t;
        t = term_y_94;
        t = d_16(h_117, i_117, t);
        t = e_117;
        LocalPopChoice(x_95);
      }
    else
      {
        t = w_95;
        {
          ATerm j_117 = NULL,k_117 = NULL,n_117 = NULL;
          t = term_o_38;
          k_117 = t;
          t = (ATerm) ATinsert(ATempty, term_y_95);
          n_117 = t;
          t = SSL_printnl(k_117, n_117);
          t = term_f_39;
          j_117 = t;
          t = SSL_exit(j_117);
          t = (ATerm) ATinsert(ATempty, term_y_95);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(i_37, t);
  return(t);
}
static ATerm m_37 (ATerm t)
{
  t = if_verbose1_1_0(p_37, t);
  return(t);
}
static ATerm n_37 (ATerm t)
{
  t = xtc_temp_files_1_0(q_37, t);
  return(t);
}
static ATerm p_37 (ATerm t)
{
  ATerm u_117 = NULL,w_117 = NULL,x_117 = NULL;
  u_117 = t;
  t = term_o_38;
  w_117 = t;
  t = (ATerm) ATinsert(CheckATermList(u_117), term_z_95);
  x_117 = t;
  t = SSL_printnl(w_117, x_117);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(CheckATermList(u_117), term_z_95));
  return(t);
}
static ATerm q_37 (ATerm t)
{
  ATerm a_96 = t;
  int b_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
      t = term_k_38;
      d_118 = t;
      t = term_h_56;
      e_118 = t;
      t = term_y_94;
      t = d_16(d_118, e_118, t);
      c_118 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_118);
      LocalPopChoice(b_96);
    }
  else
    {
      t = a_96;
      t = term_k_61;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm z_37 (ATerm t)
{
  ATerm g_118 = NULL,i_118 = NULL,l_118 = NULL;
  t = run_time_0_0(t);
  g_118 = t;
  t = term_o_38;
  i_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_96), g_118), term_c_96);
  l_118 = t;
  t = SSL_printnl(i_118, l_118);
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_96), g_118), term_c_96));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm g_96 = t;
  int h_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_37, n_37, t);
      t = if_verbose2_1_0(z_37, t);
      t = term_a_38;
      t_117 = t;
      t = SSL_exit(t_117);
      LocalPopChoice(h_96);
    }
  else
    {
      t = g_96;
      {
        ATerm m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL;
        t = run_time_0_0(t);
        m_118 = t;
        t = term_o_38;
        o_118 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_96), m_118), term_o_96);
        p_118 = t;
        t = SSL_printnl(o_118, p_118);
        t = term_f_39;
        n_118 = t;
        t = SSL_exit(n_118);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
