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
ATerm term_l_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_a_88;
ATerm term_y_87;
ATerm term_v_87;
ATerm term_s_87;
ATerm term_r_87;
ATerm term_o_87;
ATerm term_n_87;
ATerm term_m_87;
ATerm term_l_87;
ATerm term_k_87;
ATerm term_j_87;
ATerm term_g_87;
ATerm term_e_87;
ATerm term_c_87;
ATerm term_y_86;
ATerm term_x_86;
ATerm term_u_86;
ATerm term_t_86;
ATerm term_n_86;
ATerm term_l_86;
ATerm term_k_86;
ATerm term_j_86;
ATerm term_b_86;
ATerm term_a_86;
ATerm term_z_85;
ATerm term_y_85;
ATerm term_x_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_c_84;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_o_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_l_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_i_81;
ATerm term_g_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_x_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_h_80;
ATerm term_e_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_z_79;
ATerm term_y_79;
ATerm term_v_79;
ATerm term_r_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_k_76;
ATerm term_i_76;
ATerm term_g_76;
ATerm term_f_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_p_75;
ATerm term_n_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_h_75;
ATerm term_g_75;
ATerm term_f_75;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_j_74;
ATerm term_e_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_w_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_i_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_a_73;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_p_72;
ATerm term_l_72;
ATerm term_i_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_x_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_s_71;
ATerm term_n_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_m_69;
ATerm term_c_68;
ATerm term_a_68;
ATerm term_v_67;
ATerm term_t_67;
ATerm term_v_66;
ATerm term_q_66;
ATerm term_p_66;
ATerm term_o_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_i_66;
ATerm term_g_66;
ATerm term_g_64;
ATerm term_e_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_e_63;
ATerm term_d_62;
ATerm term_v_61;
ATerm term_f_61;
ATerm term_d_61;
ATerm term_n_60;
ATerm term_l_60;
ATerm term_i_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_s_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_m_59;
ATerm term_r_58;
ATerm term_x_57;
ATerm term_q_57;
ATerm term_k_57;
ATerm term_i_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_k_56;
ATerm term_x_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_r_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_n_54;
ATerm term_h_54;
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
ATerm term_h_53;
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
ATerm term_n_52;
ATerm term_l_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_c_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_b_51;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_c_50;
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
ATerm term_k_49;
ATerm term_j_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_k_48;
ATerm term_i_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_t_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_p_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_q_45;
ATerm term_n_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_v_43;
ATerm term_s_43;
ATerm term_l_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_a_43;
ATerm term_p_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_y_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_w_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_k_38;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_o_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_36);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_n_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_r_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_g_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_k_37);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_w_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_s_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_z_40);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_m_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_y_41);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_44);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_48, term_s_39, term_k_48);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_48, term_g_36, term_o_48);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_48, term_b_40, term_t_48);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_48, term_w_48, term_x_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_48, term_a_49, term_b_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_g_49);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_49, term_k_49, term_l_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_49, term_o_49, term_p_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_s_49, term_t_49);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_49, term_w_49, term_x_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_49, term_a_50, term_c_50);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_50, term_f_43, term_j_50);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_50, term_r_50, term_s_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_50, term_v_50, term_w_50);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_51, term_g_51, term_h_51);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_51, term_l_51, term_m_51);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_51, term_t_51, term_x_51);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_51, term_a_52, term_c_52);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_52, term_g_52, term_i_52);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_52, term_n_52, term_p_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_52, term_s_52, term_t_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_52, term_y_52, term_z_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_c_53, term_d_53);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_53, term_h_53, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_53, term_a_46, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_p_53, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_53, term_t_53, term_u_53);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_53, term_x_53, term_y_53);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_q_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_z_54);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_o_55);
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_u_55);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_q_57);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym__2, term_d_57, term_x_56);
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_p_59);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_x_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_i_60);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_j_66);
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_i_72);
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_u_72);
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(sym__2, term_z_71, term_a_72);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_x_35);
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_35);
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(sym__2, term_e_74, term_v_37);
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_w_38, term_v_37);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_v_37);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym__2, term_p_59, term_v_37);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym__2, term_z_54, term_v_37);
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym__2, term_d_44, term_v_37);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(sym__2, term_d_76, term_v_37);
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(sym__2, term_g_76, term_v_37);
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(sym__2, term_n_76, term_v_37);
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(sym__2, term_o_55, term_s_39);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym__2, term_r_55, term_x_35);
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_v_37);
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_x_80));
  term_x_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_g_81);
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(sym__2, term_s_73, term_t_73);
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(sym__2, term_i_82, term_v_37);
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(sym__3, term_s_73, term_t_73, (ATerm) ATempty);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_76);
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_i_82);
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(sym__2, term_j_66, term_x_85);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_s_39);
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(sym__2, term_m_41, term_x_35);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(sym__2, term_y_41, term_w_48);
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(sym__2, term_x_59, (ATerm) ATempty);
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(sym__2, term_u_55, term_k_87);
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_n_54);
  ATprotect(&(term_o_87));
  term_o_87 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_g_76);
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_n_76);
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm a_126 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm t_13 (ATerm i_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm u_13 (ATerm g_23, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm v_13 (ATerm a_63, ATerm z_62, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
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
ATerm if_keep1_1_0 (ATerm b_127 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm e_127 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
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
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
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
static ATerm d_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm save_as_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm t);
static ATerm z_13 (ATerm w_67, ATerm x_67, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_127 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_136 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm f_127 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm g_127 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm i_109 (ATerm), ATerm t);
static ATerm f_21 (ATerm t);
static ATerm g_21 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm w_13 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm x_13 (ATerm v_24, ATerm w_24, ATerm t);
static ATerm y_13 (ATerm n_108 (ATerm), ATerm r_213, ATerm f_25, ATerm t);
static ATerm b_14 (ATerm j_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm d_135 (ATerm), ATerm t);
static ATerm l_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm v_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm z_99 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm e_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm b_126 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm x_119 (ATerm), ATerm t);
static ATerm h_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm c_14 (ATerm w_22, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm d_15 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm d_14 (ATerm u_56, ATerm v_56, ATerm t);
ATerm end_scope_1_0 (ATerm g_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_122 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm n_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm o_135 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm z_125 (ATerm), ATerm t);
static ATerm f_14 (ATerm q_43, ATerm r_43, ATerm t);
static ATerm h_14 (ATerm w_43, ATerm x_43, ATerm t);
static ATerm i_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_108 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm l_14 (ATerm x_25, ATerm p_226, ATerm t);
ATerm at_suffix_1_0 (ATerm r_109 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm j_109 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm t_118 (ATerm), ATerm t);
static ATerm r_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm m_14 (ATerm c_63, ATerm b_63, ATerm t);
static ATerm n_14 (ATerm o_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_126 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm e_126 (ATerm), ATerm t);
static ATerm q_14 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t);
static ATerm r_14 (ATerm h_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm v_27 (ATerm t);
static ATerm s_14 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t);
static ATerm t_14 (ATerm v_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t);
static ATerm x_14 (ATerm k_40, ATerm l_40, ATerm t);
static ATerm y_78 (ATerm p_78, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_14 (ATerm b_25, ATerm t);
static ATerm v_14 (ATerm w_40, ATerm x_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_80 (ATerm l_79, ATerm t);
static ATerm v_80 (ATerm q_79, ATerm s_79, ATerm t_79, ATerm t);
static ATerm w_80 (ATerm d_80, ATerm f_80, ATerm g_80, ATerm t);
static ATerm w_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm z_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_116 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm p_85 (ATerm n_84, ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm y_14 (ATerm f_67, ATerm e_67, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm h_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm y_29 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm e_30 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_14 (ATerm c_67, ATerm d_67, ATerm t);
ATerm at_end_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_88 (ATerm k_88, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_15 (ATerm g_67, ATerm h_67, ATerm t);
static ATerm q_30 (ATerm t);
static ATerm t_30 (ATerm t);
static ATerm u_30 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_30 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
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
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm s_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm x_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm e_34 (ATerm t);
static ATerm g_34 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm b_15 (ATerm m_61, ATerm n_61, ATerm t);
static ATerm c_15 (ATerm r_61, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm s_34 (ATerm t);
static ATerm v_34 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_109 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_130 (ATerm), ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm o_35 (ATerm t);
ATerm parse_options_1_0 (ATerm r_130 (ATerm), ATerm t);
static ATerm g_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t);
static ATerm h_15 (ATerm k_61, ATerm l_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
static ATerm i_15 (ATerm z_66, ATerm a_67, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm j_15 (ATerm y_38, ATerm z_38, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm s_35 (ATerm t);
static ATerm t_35 (ATerm t);
static ATerm u_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = v_115(t);
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
      t = foldr_2_0(v_115, w_115, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, n_0);
      t = w_115(t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_x_35;
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
  t = f_14(d_1, h_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_0 = NULL,a_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(i_0, k_0, t);
  w_0 = t;
  t = SSL_TicksToSeconds(w_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm z_35 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,j_1 = NULL,k_1 = NULL;
        t = term_c_36;
        j_1 = t;
        t = term_d_36;
        k_1 = t;
        t = term_f_36;
        t = d_15(j_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_g_36);
        t = geq_0_0(t);
        t = e_1;
        t = a_126(t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = z_35;
        t = e_1;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = term_h_36;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_i_36);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = w_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_h_36;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm t_13 (ATerm i_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm k_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_c_36;
        b_2 = t;
        t = term_n_36;
        c_2 = t;
        t = term_o_36;
        t = d_15(b_2, c_2, t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = k_36;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_q_36;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_c_36;
  s_1 = t;
  t = term_r_36;
  t_1 = t;
  t = term_u_36;
  t = d_15(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_n_36), i_23), term_x_36), term_v_36));
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
      t = z_13(q_1, r_1, t);
      t = term_b_37;
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
  t = term_h_36;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_d_37);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = t_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_e_37;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_h_36;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm u_13 (ATerm g_23, ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(u_1, t);
  l_2 = t;
  t = term_c_36;
  r_2 = t;
  t = term_g_37;
  s_2 = t;
  t = term_i_37;
  t = d_15(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_n_36), g_23), term_k_37));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_36, n_2);
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
      t = z_13(p_2, q_2, t);
      t = term_b_37;
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
  t = u_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_13(o_3, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  t = term_h_36;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(l_3), term_l_37);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(l_3), term_l_37));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_c_36;
      i_3 = t;
      t = term_k_37;
      j_3 = t;
      t = term_o_37;
      t = d_15(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
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
static ATerm v_13 (ATerm a_63, ATerm z_62, ATerm t)
{
  ATerm r_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(a_63, z_62);
      LocalPopChoice(u_37);
    }
  else
    {
      t = r_37;
      t = get_errno_0_0(t);
      t = term_v_37;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, a_63, z_62);
      t = m_14(a_63, z_62, t);
      t = SSL_remove(a_63);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
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
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        t = e_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_y_37;
        v_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_y_37);
        t = m_14(g_4, v_1, t);
        t = SSL_remove(g_4);
        t = term_y_37;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        {
          ATerm d_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              t = e_4;
              t = x_0(t);
              k_2 = t;
              {
                ATerm j_38 = t;
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
                    t = j_38;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_4, k_2);
              t = v_13(g_4, k_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
              LocalPopChoice(h_38);
            }
          else
            {
              t = d_38;
              t = e_4;
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
  t = term_k_38;
  o_4 = t;
  t = term_o_38;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_r_38);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_s_38);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_t_38;
  s_4 = t;
  t = x_4;
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,b_5 = NULL;
        t = term_c_36;
        a_5 = t;
        t = term_w_38;
        b_5 = t;
        t = term_a_39;
        t = d_15(a_5, b_5, t);
        t = x_4;
        LocalPopChoice(v_38);
        t = (ATerm) ATinsert(ATempty, term_w_38);
      }
    else
      {
        t = u_38;
        t = (ATerm) ATempty;
      }
  }
  v_4 = t;
  t = term_c_36;
  y_4 = t;
  t = term_s_38;
  z_4 = t;
  t = term_b_39;
  t = d_15(y_4, z_4, t);
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
  t = term_h_36;
  w_5 = t;
  t = (ATerm) ATinsert(ATempty, term_c_39);
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
    ATerm d_39 = t;
    int g_39 = stack_ptr;
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
        LocalPopChoice(g_39);
        t = xtc_transform_file_2_0(k_3, r_3, t);
      }
    else
      {
        t = d_39;
        t = xtc_transform_term_2_0(s_3, t_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(k_5, l_5, t);
  d_6 = t;
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
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
        LocalPopChoice(i_39);
        t = xtc_transform_file_2_0(p_5, q_5, t);
      }
    else
      {
        t = h_39;
        t = xtc_transform_term_2_0(k_6, u_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
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
        LocalPopChoice(k_39);
        t = xtc_transform_file_2_0(w_6, pass_verbose_0_0, t);
      }
    else
      {
        t = j_39;
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
  t = term_h_36;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_l_39);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(y_5), term_l_39));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_o_39);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_o_39);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
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
        LocalPopChoice(u_39);
        t = xtc_transform_file_2_0(z_3, d_4, t);
      }
    else
      {
        t = t_39;
        t = xtc_transform_term_2_0(f_4, h_4, t);
      }
  }
  t = if_keep1_1_0(i_4, t);
  n_6 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
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
        LocalPopChoice(w_39);
        t = xtc_transform_file_2_0(k_4, n_4, t);
      }
    else
      {
        t = v_39;
        t = xtc_transform_term_2_0(u_4, d_5, t);
      }
  }
  t = if_keep1_1_0(f_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_o_39);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_o_39);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_y_39;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_o_39);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_o_39);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = save_as_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_b_40;
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
  t = term_c_40;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_d_40;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_o_39);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_d_40;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_o_39);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = get_outfile_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_g_40;
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
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  t = term_h_36;
  p_9 = t;
  t = (ATerm) ATinsert(ATempty, term_h_40);
  q_9 = t;
  t = SSL_printnl(p_9, q_9);
  t = o_9;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,u_9 = NULL;
  r_9 = t;
  t = term_h_36;
  s_9 = t;
  t = (ATerm) ATinsert(CheckATermList(r_9), term_i_40);
  u_9 = t;
  t = SSL_printnl(s_9, u_9);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(r_9), term_i_40));
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_p_40);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_p_40);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_8 = NULL,e_9 = NULL,i_9 = NULL;
      x_8 = t;
      t = term_c_36;
      e_9 = t;
      t = term_w_38;
      i_9 = t;
      t = term_a_39;
      t = d_15(e_9, i_9, t);
      t = x_8;
      LocalPopChoice(s_40);
      {
        ATerm n_9 = NULL;
        n_9 = t;
        t = if_verbose2_1_0(f_7, t);
        {
          static ATerm h_7 (ATerm t);
          static ATerm h_7 (ATerm t)
          {
            ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
            j_5 = t;
            t = term_t_40;
            h_5 = t;
            t = (ATerm) ATinsert(ATempty, term_u_40);
            i_5 = t;
            t = j_5;
            t = comp_0_2(h_5, i_5, t);
            v_9 = t;
            {
              ATerm v_40 = t;
              int y_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,f_10 = NULL;
                  t = term_c_36;
                  d_10 = t;
                  t = term_z_40;
                  f_10 = t;
                  t = term_b_41;
                  t = d_15(d_10, f_10, t);
                  z_9 = t;
                  t = term_c_36;
                  b_10 = t;
                  t = term_d_41;
                  c_10 = t;
                  t = term_e_41;
                  t = d_15(b_10, c_10, t);
                  a_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_9, a_10);
                  {
                    ATerm f_41 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm g_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            g_10 = ATgetArgument(t, 0);
                            if((g_10 != ATgetArgument(t, 1)))
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
                        t = f_41;
                      }
                  }
                  LocalPopChoice(y_40);
                }
              else
                {
                  t = v_40;
                  {
                    ATerm i_10 = NULL,j_10 = NULL;
                    t = term_c_36;
                    i_10 = t;
                    t = term_z_40;
                    j_10 = t;
                    t = term_b_41;
                    t = d_15(i_10, j_10, t);
                    t = debug_1_0(o_7, t);
                    _fail(t);
                  }
                }
            }
            t = v_9;
            {
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                t = get_outfile_1_0(q_7, t);
                if(((v_8 != NULL) && (v_8 != t)))
                  _fail(t);
                else
                  v_8 = t;
                return(t);
              }
              t = copy_to_1_0(p_7, t);
            }
            {
              ATerm g_41 = t;
              int h_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_10 = NULL,v_10 = NULL;
                  v_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      t_10 = ATgetArgument(t, 0);
                      {
                        ATerm m_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(v_10);
                        m_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, t_10);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, m_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = v_10;
                    }
                  LocalPopChoice(h_41);
                  t = xtc_transform_file_2_0(r_7, s_7, t);
                }
              else
                {
                  t = g_41;
                  t = xtc_transform_term_2_0(t_7, w_7, t);
                }
            }
            {
              static ATerm x_7 (ATerm t);
              static ATerm x_7 (ATerm t)
              {
                t = get_outfile_1_0(z_7, t);
                if(((w_8 != NULL) && (w_8 != t)))
                  _fail(t);
                else
                  w_8 = t;
                return(t);
              }
              t = copy_to_1_0(x_7, t);
            }
            w_9 = t;
            t = term_h_36;
            x_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_8)), term_j_41), not_null(v_8)), term_i_41));
            y_9 = t;
            t = SSL_printnl(x_9, y_9);
            t = w_9;
            return(t);
          }
          t = profile_p__2_0(g_7, h_7, t);
        }
        t = n_9;
      }
    }
  else
    {
      t = r_40;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm b_127 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
        t = term_c_36;
        h_11 = t;
        t = term_m_41;
        i_11 = t;
        t = term_n_41;
        t = d_15(h_11, i_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_s_39);
        t = geq_0_0(t);
        t = d_11;
        t = b_127(t);
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm r_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
        t = o_11;
        t = j_136(t);
        t_11 = t;
        t = term_c_36;
        v_11 = t;
        t = term_y_41;
        w_11 = t;
        t = term_c_42;
        t = d_15(v_11, w_11, t);
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, t_11);
        t = geq_0_0(t);
        t = o_11;
        t = k_136(t);
        LocalPopChoice(t_41);
      }
    else
      {
        t = r_41;
        t = o_11;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_o_39);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_7 = NULL;
  t = pass_verbose_0_0(t);
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(l_7), term_o_39);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm y_8 = NULL;
  t = pass_verbose_0_0(t);
  y_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_8), term_o_39);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm z_8 = NULL;
  t = pass_verbose_0_0(t);
  z_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_8), term_o_39);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  {
    ATerm g_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_13;
        {
          ATerm k_42 = t;
          int m_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  d_7 = ATgetArgument(t, 0);
                  {
                    ATerm u_7 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(k_13);
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
                  t = k_13;
                }
              LocalPopChoice(m_42);
              t = xtc_transform_file_2_0(b_8, c_8, t);
            }
          else
            {
              t = k_42;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(i_42);
      }
    else
      {
        t = g_42;
        t = k_13;
        {
          ATerm n_42 = t;
          int o_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  t_8 = ATgetArgument(t, 0);
                  {
                    ATerm d_9 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(k_13);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, d_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = k_13;
                }
              LocalPopChoice(o_42);
              t = xtc_transform_file_2_0(g_8, h_8, t);
            }
          else
            {
              t = n_42;
              t = xtc_transform_term_2_0(i_8, j_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL;
  k_14 = t;
  t = term_p_42;
  g_14 = t;
  t = k_14;
  {
    ATerm t_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL,p_14 = NULL;
        t = term_c_36;
        o_14 = t;
        t = term_w_38;
        p_14 = t;
        t = term_a_39;
        t = d_15(o_14, p_14, t);
        t = k_14;
        LocalPopChoice(v_42);
        t = (ATerm) ATinsert(ATempty, term_a_43);
      }
    else
      {
        t = t_42;
        t = (ATerm) ATempty;
      }
  }
  j_14 = t;
  t = k_14;
  t = comp_0_2(g_14, j_14, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  {
    ATerm b_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_15 = NULL,s_15 = NULL,v_15 = NULL;
        t = term_c_36;
        s_15 = t;
        t = term_m_41;
        v_15 = t;
        t = term_n_41;
        t = d_15(s_15, v_15, t);
        o_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_15, term_f_43);
        t = geq_0_0(t);
        t = m_15;
        t = e_127(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = b_43;
        t = m_15;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,g_18 = NULL;
  b_18 = t;
  t = term_h_36;
  c_18 = t;
  t = (ATerm) ATinsert(ATempty, term_g_43);
  g_18 = t;
  t = SSL_printnl(c_18, g_18);
  t = b_18;
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
  t = olevel_2_0(u_8, a_9, t);
  t = olevel_2_0(l_9, e_10, t);
  t = olevel_2_0(y_10, e_11, t);
  m_18 = t;
  {
    ATerm i_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_21 = ATgetArgument(t, 0);
            {
              ATerm s_12 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(m_18);
              s_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
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
        LocalPopChoice(k_43);
        t = xtc_transform_file_2_0(o_12, r_12, t);
      }
    else
      {
        t = i_43;
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  t = term_h_36;
  i_18 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), term_l_43);
  j_18 = t;
  t = SSL_printnl(i_18, j_18);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(h_18), term_l_43));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  t = term_c_36;
  o_18 = t;
  t = term_y_41;
  p_18 = t;
  t = term_c_42;
  t = d_15(o_18, p_18, t);
  t = debug_1_0(r_8, t);
  t = n_18;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_s_43;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_18 = ATgetArgument(t, 0);
            {
              ATerm j_9 = NULL,l_4 = NULL;
              t = SSLgetAnnotations(s_18);
              j_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
              l_4 = t;
              t = SSLsetAnnotations(l_4, j_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_18;
          }
        LocalPopChoice(u_43);
        t = xtc_transform_file_2_0(b_9, c_9, t);
      }
    else
      {
        t = t_43;
        t = xtc_transform_term_2_0(f_9, g_9, t);
      }
  }
  t = if_keep1_1_0(h_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm y_18 = NULL;
  t = pass_verbose_0_0(t);
  y_18 = t;
  t = (ATerm) ATinsert(CheckATermList(y_18), term_o_39);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_o_39);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = save_as_1_0(k_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_19;
        {
          ATerm c_44 = t;
          if((PushChoice() == 0))
            {
              ATerm p_10 = NULL,r_10 = NULL;
              t = term_c_36;
              p_10 = t;
              t = term_d_44;
              r_10 = t;
              t = term_e_44;
              t = d_15(p_10, r_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_44;
            }
        }
        t = s_19;
        {
          ATerm f_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm q_11 = NULL,r_5 = NULL;
                    t = SSLgetAnnotations(s_19);
                    q_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
                    r_5 = t;
                    t = SSLsetAnnotations(r_5, q_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_19;
                }
              LocalPopChoice(h_44);
              t = xtc_transform_file_2_0(h_10, k_10, t);
            }
          else
            {
              t = f_44;
              t = xtc_transform_term_2_0(m_10, q_10, t);
            }
        }
        t = if_keep2_1_0(s_10, t);
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = s_19;
      }
  }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_o_39);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_i_44;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm l_11 = NULL;
  t = pass_verbose_0_0(t);
  l_11 = t;
  t = (ATerm) ATinsert(CheckATermList(l_11), term_o_39);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = save_as_1_0(u_10, t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_f_43;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,x_19 = NULL;
  x_19 = t;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_20 = ATgetArgument(t, 0);
            {
              ATerm a_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(x_19);
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
            t = x_19;
          }
        LocalPopChoice(l_44);
        t = xtc_transform_file_2_0(f_11, j_11, t);
      }
    else
      {
        t = k_44;
        t = xtc_transform_term_2_0(n_11, p_11, t);
      }
  }
  t = if_keep6_1_0(r_11, t);
  v_19 = t;
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_20 = ATgetArgument(t, 0);
            {
              ATerm e_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(v_19);
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
            t = v_19;
          }
        LocalPopChoice(n_44);
        t = xtc_transform_file_2_0(x_11, y_11, t);
      }
    else
      {
        t = m_44;
        t = xtc_transform_term_2_0(z_11, b_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_12, t);
  u_19 = t;
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_20 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,u_5 = NULL;
              t = SSLgetAnnotations(u_19);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_20);
              u_5 = t;
              t = SSLsetAnnotations(u_5, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_19;
          }
        LocalPopChoice(p_44);
        t = xtc_transform_file_2_0(f_12, g_12, t);
      }
    else
      {
        t = o_44;
        t = xtc_transform_term_2_0(k_12, n_12, t);
      }
  }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm g_20 = NULL;
  t = pass_verbose_0_0(t);
  g_20 = t;
  t = (ATerm) ATinsert(CheckATermList(g_20), term_o_39);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_o_39);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = save_as_1_0(s_11, t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_o_39);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_o_39);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = save_as_1_0(d_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_o_39);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_o_39);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_o_39);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_o_39);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_f_43;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  u_21 = t;
  {
    ATerm x_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_22 = ATgetArgument(t, 0);
            {
              ATerm c_13 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(u_21);
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
            t = u_21;
          }
        LocalPopChoice(y_44);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = x_44;
        t = xtc_transform_term_2_0(z_12, a_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  t_21 = t;
  {
    ATerm b_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_22 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(t_21);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_21;
          }
        LocalPopChoice(d_45);
        t = xtc_transform_file_2_0(b_13, d_13, t);
      }
    else
      {
        t = b_45;
        t = xtc_transform_term_2_0(e_13, f_13, t);
      }
  }
  s_21 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_22 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(s_21);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
              h_6 = t;
              t = SSLsetAnnotations(h_6, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(g_45);
        t = xtc_transform_file_2_0(g_13, i_13, t);
      }
    else
      {
        t = f_45;
        t = xtc_transform_term_2_0(j_13, l_13, t);
      }
  }
  t = if_keep4_1_0(n_13, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_o_39);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_o_39);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm l_22 = NULL;
  t = pass_verbose_0_0(t);
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), term_o_39);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_o_39);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm f_23 = NULL;
  t = pass_verbose_0_0(t);
  f_23 = t;
  t = (ATerm) ATinsert(CheckATermList(f_23), term_o_39);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_o_39);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = save_as_1_0(p_13, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_23 = ATgetArgument(t, 0);
            {
              ATerm q_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(o_23);
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, q_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_23;
          }
        LocalPopChoice(s_45);
        t = xtc_transform_file_2_0(a_14, e_14, t);
      }
    else
      {
        t = r_45;
        t = xtc_transform_term_2_0(k_15, l_15, t);
      }
  }
  n_23 = t;
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_24 = ATgetArgument(t, 0);
            {
              ATerm x_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(n_23);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
              p_6 = t;
              t = SSLsetAnnotations(p_6, x_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_23;
          }
        LocalPopChoice(v_45);
        t = xtc_transform_file_2_0(n_15, p_15, t);
      }
    else
      {
        t = u_45;
        t = xtc_transform_term_2_0(r_15, t_15, t);
      }
  }
  t = if_keep2_1_0(u_15, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm w_23 = NULL;
  t = pass_verbose_0_0(t);
  w_23 = t;
  t = (ATerm) ATinsert(CheckATermList(w_23), term_o_39);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm z_23 = NULL;
  t = pass_verbose_0_0(t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), term_o_39);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm g_24 = NULL;
  t = pass_verbose_0_0(t);
  g_24 = t;
  t = (ATerm) ATinsert(CheckATermList(g_24), term_o_39);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm h_24 = NULL;
  t = pass_verbose_0_0(t);
  h_24 = t;
  t = (ATerm) ATinsert(CheckATermList(h_24), term_o_39);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_a_46;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_24 = ATgetArgument(t, 0);
            {
              ATerm b_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(i_24);
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
            t = i_24;
          }
        LocalPopChoice(c_46);
        t = xtc_transform_file_2_0(a_16, c_16, t);
      }
    else
      {
        t = b_46;
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
  t = term_t_44;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm t_24 = NULL;
  t = pass_verbose_0_0(t);
  t_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), term_o_39);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm u_24 = NULL;
  t = pass_verbose_0_0(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), term_o_39);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_d_46;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_b_40;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(z_24);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(g_46);
        t = xtc_transform_file_2_0(o_16, p_16, t);
      }
    else
      {
        t = f_46;
        t = xtc_transform_term_2_0(q_16, s_16, t);
      }
  }
  t = if_keep3_1_0(t_16, t);
  y_24 = t;
  {
    ATerm h_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_25 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(y_24);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_25);
              s_6 = t;
              t = SSLsetAnnotations(s_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_24;
          }
        LocalPopChoice(j_46);
        t = xtc_transform_file_2_0(w_16, x_16, t);
      }
    else
      {
        t = h_46;
        t = xtc_transform_term_2_0(y_16, z_16, t);
      }
  }
  t = if_keep3_1_0(b_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(d_17, t);
  x_24 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(x_24);
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
            t = x_24;
          }
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(f_17, g_17, t);
      }
    else
      {
        t = k_46;
        t = xtc_transform_term_2_0(h_17, k_17, t);
      }
  }
  t = if_keep3_1_0(l_17, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_25 = NULL;
  t = pass_verbose_0_0(t);
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), term_o_39);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm t_25 = NULL;
  t = pass_verbose_0_0(t);
  t_25 = t;
  t = (ATerm) ATinsert(CheckATermList(t_25), term_o_39);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = save_as_1_0(u_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm d_26 = NULL;
  t = pass_verbose_0_0(t);
  d_26 = t;
  t = (ATerm) ATinsert(CheckATermList(d_26), term_o_39);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_o_39);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = save_as_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = save_as_1_0(e_17, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_o_39);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm r_26 = NULL;
  t = pass_verbose_0_0(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), term_o_39);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = save_as_1_0(m_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,x_6 = NULL;
              t = SSLgetAnnotations(t_26);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              x_6 = t;
              t = SSLsetAnnotations(x_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(v_46);
        t = xtc_transform_file_2_0(p_17, q_17, t);
      }
    else
      {
        t = u_46;
        t = xtc_transform_term_2_0(r_17, s_17, t);
      }
  }
  t = if_keep1_1_0(v_17, t);
  s_26 = t;
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,a_7 = NULL;
              t = SSLgetAnnotations(s_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
              a_7 = t;
              t = SSLsetAnnotations(a_7, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_26;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(x_17, y_17, t);
      }
    else
      {
        t = x_46;
        t = xtc_transform_term_2_0(z_17, d_18, t);
      }
  }
  t = if_keep1_1_0(k_18, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_o_39);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm f_27 = NULL;
  t = pass_verbose_0_0(t);
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(f_27), term_o_39);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm l_27 = NULL;
  t = pass_verbose_0_0(t);
  l_27 = t;
  t = (ATerm) ATinsert(CheckATermList(l_27), term_o_39);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_o_39);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  t = save_as_1_0(q_18, t);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_i_47;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  t = profile_p__2_0(l_8, m_8, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_p_40);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm n_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(n_29), term_p_40);
  return(t);
}
ATerm save_as_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,y_28 = NULL;
  s_28 = t;
  {
    static ATerm t_18 (ATerm t);
    static ATerm t_18 (ATerm t)
    {
      static ATerm x_18 (ATerm t);
      static ATerm x_18 (ATerm t)
      {
        ATerm z_28 = NULL,a_29 = NULL;
        t = a_100(t);
        z_28 = t;
        t = term_j_47;
        a_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_47, z_28);
        t = j_15(a_29, z_28, t);
        return(t);
      }
      t = get_outfile_1_0(x_18, t);
      if(((q_28 != NULL) && (q_28 != t)))
        _fail(t);
      else
        q_28 = t;
      return(t);
    }
    t = copy_to_1_0(t_18, t);
  }
  {
    ATerm k_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_29 = NULL,j_29 = NULL;
        j_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_29 = ATgetArgument(t, 0);
            {
              ATerm a_17 = NULL,o_8 = NULL;
              t = SSLgetAnnotations(j_29);
              a_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_29);
              o_8 = t;
              t = SSLsetAnnotations(o_8, a_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_29;
          }
        LocalPopChoice(o_47);
        t = xtc_transform_file_2_0(a_19, b_19, t);
      }
    else
      {
        t = k_47;
        t = xtc_transform_term_2_0(d_19, e_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t);
    static ATerm f_19 (ATerm t)
    {
      ATerm r_29 = NULL;
      t = term_p_47;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_28), term_p_47);
      t = j_15(not_null(q_28), r_29, t);
      if(((r_28 != NULL) && (r_28 != t)))
        _fail(t);
      else
        r_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_47), not_null(r_28)), term_r_47), not_null(q_28)), term_q_47);
  y_28 = t;
  t = SSL_concat_strings(y_28);
  t_28 = t;
  t = term_h_36;
  u_28 = t;
  t = (ATerm) ATinsert(ATempty, t_28);
  v_28 = t;
  t = SSL_printnl(u_28, v_28);
  t = s_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL;
        t = term_c_36;
        b_30 = t;
        t = term_m_41;
        d_30 = t;
        t = term_n_41;
        t = d_15(b_30, d_30, t);
        a_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_30, term_g_36);
        t = geq_0_0(t);
        t = w_29;
        t = c_127(t);
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        t = w_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  t = term_d_36;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL;
        t = term_c_36;
        l_30 = t;
        t = term_d_36;
        m_30 = t;
        t = term_f_36;
        t = d_15(l_30, m_30, t);
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        t = term_s_39;
      }
  }
  g_30 = t;
  t = term_s_39;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_s_39);
  t = h_14(g_30, i_30, t);
  h_30 = t;
  t = SSL_int_to_string(h_30);
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_30), term_d_36);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_47 = ATgetArgument(t, 0);
      if(match_cons(y_47, sym_Stream_1))
        {
          r_30 = ATgetArgument(y_47, 0);
        }
      else
        _fail(t);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(r_30, s_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  o_30 = t;
  t = xtc_new_file_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, o_30);
  t = y_13(h_19, n_30, o_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_30);
  t = xtc_transform_file_2_0(b_135, c_135, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm z_13 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_execvp(w_67, x_67);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,z_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm i_17 = NULL,j_17 = NULL;
        t = SSL_int_to_string(v_31);
        i_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_48), i_17), term_a_48);
        j_17 = t;
        t = SSL_concat_strings(j_17);
      }
    }
  else
    {
      ATerm t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_31 = ATgetArgument(t, 0);
          w_31 = ATgetArgument(t, 1);
          z_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_31);
      t_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_31), term_d_48), t_17), term_c_48), v_31);
      u_17 = t;
      t = SSL_concat_strings(u_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_19 (ATerm t);
        static ATerm l_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_48 = ATgetArgument(t, 0);
              if((c_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_48 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_53), term_v_53), term_r_53), term_n_53), term_k_53), term_e_53), term_a_53), term_u_52), term_q_52), term_j_52), term_e_52), term_y_51), term_q_51), term_j_51), term_b_51), term_t_50), term_k_50), term_g_50), term_y_49), term_u_49), term_q_49), term_m_49), term_h_49), term_d_49), term_y_48), term_u_48), term_q_48), term_m_48);
        t = fetch_elem_1_0(l_19, t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_32 = NULL,b_33 = NULL;
  p_32 = t;
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_54 = ATgetArgument(t, 0);
            b_33 = ATgetArgument(t, 1);
            {
              ATerm d_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_54);
        {
          ATerm e_54 = t;
          int f_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL,e_18 = NULL,f_18 = NULL;
              t = b_33;
              {
                ATerm g_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_54;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_18 = t;
              t = term_h_36;
              e_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_18), term_h_54);
              f_18 = t;
              t = SSL_printnl(e_18, f_18);
              t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATinsert(ATempty, a_18), term_h_54));
              LocalPopChoice(f_54);
            }
          else
            {
              t = e_54;
              t = p_32;
            }
        }
      }
    else
      {
        t = a_54;
        t = p_32;
      }
  }
  t = p_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_127 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = fork_0_0(t);
  k_33 = t;
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_33;
        t = m_127(t);
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        t = SSL_waitpid(k_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_54 = ATgetArgument(t, 0);
            if(((ATgetType(k_54) != AT_INT) || (ATgetInt((ATermInt) k_54) != 0)))
              _fail(t);
            {
              ATerm l_54 = ATgetArgument(t, 1);
            }
            {
              ATerm m_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  r_33 = t;
  t = f_136(t);
  t = xtc_find_0_0(t);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
  {
    static ATerm p_19 (ATerm t);
    static ATerm p_19 (ATerm t)
    {
      ATerm v_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_33, r_33);
      t = z_13(q_33, r_33, t);
      t = term_b_37;
      v_33 = t;
      t = SSL_exit(v_33);
      return(t);
    }
    t = fork_and_wait_1_0(p_19, t);
  }
  t = r_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_34 = NULL,f_34 = NULL;
      t = z_33;
      t = xtc_new_file_0_0(t);
      b_34 = t;
      t = t_0(t);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, (ATerm) ATinsert(ATinsert(ATempty, b_34), term_n_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_34);
    }
  else
    {
      ATerm h_34 = NULL,j_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_34;
      t = xtc_new_file_0_0(t);
      h_34 = t;
      t = t_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_34), term_n_36), a_34), term_n_54));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm o_54 = t;
  int p_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_50 = NULL,d_50 = NULL;
      d_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(d_50);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_50);
            q_8 = t;
            t = SSLsetAnnotations(q_8, p_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_50;
        }
      LocalPopChoice(p_54);
      {
        static ATerm r_19 (ATerm t);
        static ATerm t_19 (ATerm t);
        static ATerm r_19 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm t_19 (ATerm t)
        {
          ATerm e_50 = NULL;
          t = pass_verbose_0_0(t);
          e_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), e_50), (ATerm) ATinsert(ATempty, term_o_39));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, t_19, t);
      }
    }
  else
    {
      t = o_54;
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
          ATerm f_50 = NULL;
          t = pass_verbose_0_0(t);
          f_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), f_50), (ATerm) ATinsert(ATempty, term_o_39));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(a_20, b_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,r_34 = NULL,u_34 = NULL;
  n_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_34;
      t = x_115(t);
    }
  else
    {
      ATerm x_34 = NULL,y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      t = z_115(t);
      x_34 = t;
      t = u_34;
      t = foldr_3_0(x_115, y_115, z_115, t);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
      t = y_115(t);
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
  ATerm b_35 = NULL;
  b_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_35), term_q_54);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = term_c_36;
  z_34 = t;
  t = term_q_54;
  a_35 = t;
  t = term_r_54;
  t = d_15(z_34, a_35, t);
  t = foldr_3_0(d_20, conc_0_0, f_20, t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_o_39);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_o_39);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = get_outfile_1_0(b_21, t);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_t_54;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL,n_19 = NULL,o_19 = NULL,w_19 = NULL;
        t = term_c_36;
        o_19 = t;
        t = term_z_54;
        w_19 = t;
        t = term_a_55;
        t = d_15(o_19, w_19, t);
        t = p_36;
        {
          ATerm b_55 = t;
          int c_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_36;
              {
                ATerm e_55 = t;
                int f_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        k_20 = ATgetArgument(t, 0);
                        {
                          ATerm h_21 = NULL,s_8 = NULL;
                          t = SSLgetAnnotations(p_36);
                          h_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
                          s_8 = t;
                          t = SSLsetAnnotations(s_8, h_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = p_36;
                      }
                    LocalPopChoice(f_55);
                    t = xtc_transform_file_2_0(j_20, l_20, t);
                  }
                else
                  {
                    t = e_55;
                    t = xtc_transform_term_2_0(p_20, s_20, t);
                  }
              }
              LocalPopChoice(c_55);
            }
          else
            {
              t = b_55;
              {
                ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL;
                t = term_h_36;
                x_20 = t;
                t = (ATerm) ATinsert(ATempty, term_g_55);
                a_21 = t;
                t = SSL_printnl(x_20, a_21);
                t = term_s_39;
                w_20 = t;
                t = SSL_exit(w_20);
                t = (ATerm) ATinsert(ATempty, term_g_55);
              }
            }
        }
        t = copy_to_1_0(z_20, t);
        i_19 = t;
        t = term_h_36;
        j_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_55));
        n_19 = t;
        t = SSL_printnl(j_19, n_19);
        t = i_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        t = p_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL,z_36 = NULL,c_37 = NULL;
        t = term_c_36;
        z_36 = t;
        t = term_m_41;
        c_37 = t;
        t = term_n_41;
        t = d_15(z_36, c_37, t);
        y_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_36, term_a_46);
        t = geq_0_0(t);
        t = w_36;
        t = f_127(t);
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
        t = w_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  {
    ATerm k_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL,p_37 = NULL,q_37 = NULL;
        t = term_c_36;
        p_37 = t;
        t = term_m_41;
        q_37 = t;
        t = term_n_41;
        t = d_15(p_37, q_37, t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_37, term_w_48);
        t = geq_0_0(t);
        t = f_37;
        t = g_127(t);
        LocalPopChoice(l_55);
      }
    else
      {
        t = k_55;
        t = f_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm m_55 = t;
  int n_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_37 = NULL,t_37 = NULL;
      t = term_c_36;
      s_37 = t;
      t = term_o_55;
      t_37 = t;
      t = term_p_55;
      t = d_15(s_37, t_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_55);
      LocalPopChoice(n_55);
    }
  else
    {
      t = m_55;
      t = (ATerm) ATinsert(ATempty, term_r_55);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,f_38 = NULL,g_38 = NULL;
  b_38 = t;
  t = term_t_55;
  z_37 = t;
  t = term_c_36;
  f_38 = t;
  t = term_u_55;
  g_38 = t;
  t = term_x_55;
  t = d_15(f_38, g_38, t);
  c_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_38), term_u_55);
  a_38 = t;
  t = b_38;
  t = comp_0_2(z_37, a_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
        t = term_c_36;
        m_38 = t;
        t = term_m_41;
        n_38 = t;
        t = term_n_41;
        t = d_15(m_38, n_38, t);
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_38, term_b_40);
        t = geq_0_0(t);
        t = i_38;
        t = d_127(t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = i_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm p_38 = NULL;
  static ATerm d_21 (ATerm t);
  static ATerm d_21 (ATerm t)
  {
    t = i_109(t);
    if(((p_38 != NULL) && (p_38 != t)))
      _fail(t);
    else
      p_38 = t;
    return(t);
  }
  t = fetch_1_0(d_21, t);
  t = not_null(p_38);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm a_41 = NULL,c_41 = NULL;
  a_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_41 = ATgetArgument(t, 0);
      {
        ATerm y_21 = NULL,g_22 = NULL,m_9 = NULL;
        t = SSLgetAnnotations(a_41);
        y_21 = t;
        t = c_41;
        t = fetch_elem_1_0(g_21, t);
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, g_22);
        m_9 = t;
        t = SSLsetAnnotations(m_9, y_21);
      }
    }
  else
    {
      ATerm h_23 = NULL,k_23 = NULL,t_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          c_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_41);
      h_23 = t;
      t = c_41;
      t = fetch_elem_1_0(i_21, t);
      k_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, k_23);
      t_9 = t;
      t = SSLsetAnnotations(t_9, h_23);
    }
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,s_22 = NULL;
  o_22 = t;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            p_22 = ATgetArgument(t, 0);
            s_22 = ATgetArgument(t, 1);
            {
              ATerm e_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_56);
        t = p_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_22;
      }
    else
      {
        t = c_56;
        if(match_cons(t, sym_RDef_3))
          {
            p_22 = ATgetArgument(t, 0);
            s_22 = ATgetArgument(t, 1);
            {
              ATerm f_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = p_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = s_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_22;
      }
  }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,x_23 = NULL;
  q_23 = t;
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            r_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm i_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_56);
        t = r_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_23;
      }
    else
      {
        t = g_56;
        if(match_cons(t, sym_RDef_3))
          {
            r_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm j_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = fetch_elem_1_0(f_21, t);
  n_39 = t;
  t = term_h_36;
  p_39 = t;
  t = (ATerm) ATinsert(ATempty, term_k_56);
  q_39 = t;
  t = SSL_printnl(p_39, q_39);
  t = n_39;
  return(t);
}
static ATerm w_13 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm l_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_56;
      }
  }
  t = b_23;
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(n_56);
      }
    else
      {
        t = m_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_r_56, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm x_13 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm o_41 = NULL;
  t = SSL_write_term_to_stream_baf(v_24, w_24);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_41);
  return(t);
}
static ATerm y_13 (ATerm n_108 (ATerm), ATerm r_213, ATerm f_25, ATerm t)
{
  ATerm p_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_213, term_s_56);
  t = w_14(t);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_41, f_25);
  t = n_108(t);
  t = fclose_0_0(t);
  t = f_25;
  return(t);
}
static ATerm b_14 (ATerm j_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t)
{
  ATerm q_41 = NULL,s_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL;
  v_41 = t;
  t = j_122(t);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_41, e_45, c_45);
  t = e_15(q_41, e_45, c_45, t);
  {
    ATerm t_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_42 = NULL;
        t = term_x_56;
        b_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_41, term_x_56);
        t = d_15(q_41, b_42, t);
        {
          ATerm y_56 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_56;
            }
        }
        LocalPopChoice(w_56);
      }
    else
      {
        t = t_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_41, term_x_56, (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATinsert(CheckATermList(s_41), e_45)));
  t = lookup_table_0_1(q_41, t);
  a_42 = t;
  t = term_x_56;
  w_41 = t;
  t = (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATinsert(CheckATermList(s_41), e_45));
  x_41 = t;
  t = a_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(w_41, x_41, z_41, t);
  t = v_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_42 = NULL;
  ATerm z_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_42 = NULL,p_24 = NULL;
      j_42 = t;
      t = term_b_57;
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_42, term_b_57);
      t = j_15(j_42, p_24, t);
      d_42 = t;
      t = SSL_mkstemp(d_42);
      LocalPopChoice(a_57);
    }
  else
    {
      t = z_56;
      {
        ATerm l_42 = NULL;
        t = term_c_57;
        l_42 = t;
        t = SSL_perror(l_42);
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
  t = term_d_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,u_42 = NULL,w_42 = NULL,y_42 = NULL;
  t = P__tmpdir_0_0(t);
  w_42 = t;
  t = term_e_57;
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, term_e_57);
  t = j_15(w_42, y_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_37;
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, term_v_37);
  t = b_14(j_21, r_42, u_42, t);
  t = SSL_close(q_42);
  t = r_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_43 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_57);
      e_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_43, (ATerm) ATinsert(ATempty, term_g_57));
      t = x_14(c_43, e_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_57 = ATgetArgument(t, 0);
      if(match_cons(h_57, sym_Stream_1))
        {
          n_43 = ATgetArgument(h_57, 0);
        }
      else
        _fail(t);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(n_43, o_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm d_135 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,j_43 = NULL;
  t = read_from_0_0(t);
  t = d_135(t);
  j_43 = t;
  t = xtc_new_file_0_0(t);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, j_43);
  t = y_13(k_21, h_43, j_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_43);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = debug_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_i_57;
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = save_as_1_0(v_21, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm z_43 = NULL,r_44 = NULL;
  r_44 = t;
  {
    ATerm l_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_25 = NULL,q_25 = NULL;
        t = term_c_36;
        p_25 = t;
        t = term_q_57;
        q_25 = t;
        t = term_x_57;
        t = d_15(p_25, q_25, t);
        z_43 = t;
        t = if_verbose2_1_0(l_21, t);
        t = r_44;
        {
          ATerm y_57 = t;
          int c_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_25 = NULL,s_25 = NULL;
              t = term_c_36;
              r_25 = t;
              t = term_w_38;
              s_25 = t;
              t = term_a_39;
              t = d_15(r_25, s_25, t);
              t = r_44;
              LocalPopChoice(c_58);
            }
          else
            {
              t = y_57;
              {
                static ATerm q_21 (ATerm t);
                static ATerm q_21 (ATerm t)
                {
                  ATerm d_58 = t;
                  int e_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = w_13(z_43, k_26, t);
                      LocalPopChoice(e_58);
                    }
                  else
                    {
                      t = d_58;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(q_21, t);
              }
            }
        }
        LocalPopChoice(p_57);
      }
    else
      {
        t = l_57;
        t = r_44;
      }
  }
  t = if_keep3_1_0(r_21, t);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_45);
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = w_45;
      }
  }
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  static ATerm w_21 (ATerm t);
  static ATerm w_21 (ATerm t)
  {
    ATerm l_45 = NULL,m_45 = NULL,o_45 = NULL;
    l_45 = t;
    t = term_d_57;
    m_45 = t;
    t = term_x_56;
    o_45 = t;
    t = term_r_58;
    t = d_15(m_45, o_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_45 != NULL) && (j_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_45 = ATgetFirst((ATermList) t);
        {
          ATerm s_58 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_45;
    t = map_1_0(x_21, t);
    t = l_45;
    t = end_scope_1_0(z_21, t);
    return(t);
  }
  t = repeat_2_0(w_21, _id, t);
  k_45 = t;
  t = SSL_exit(k_45);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm u_58 = t;
  int x_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_46 = NULL,w_46 = NULL;
      t = term_c_36;
      t_46 = t;
      t = term_n_36;
      w_46 = t;
      t = term_o_36;
      t = d_15(t_46, w_46, t);
      LocalPopChoice(x_58);
    }
  else
    {
      t = u_58;
      t = term_y_37;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm q_46 = NULL;
  q_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_27 = NULL,y_27 = NULL;
      t = term_n_36;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = NULL,d_28 = NULL;
            t = term_c_36;
            b_28 = t;
            t = term_n_36;
            d_28 = t;
            t = term_o_36;
            t = d_15(b_28, d_28, t);
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
            t = term_y_37;
          }
      }
      d_27 = t;
      t = term_f_57;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_57, d_27);
      t = m_14(y_27, d_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_46;
      t = copy_to_1_0(b_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_x_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,c_47 = NULL,f_47 = NULL;
  t = z_99(t);
  z_46 = t;
  t = term_c_36;
  c_47 = t;
  t = term_z_40;
  f_47 = t;
  t = term_b_41;
  t = d_15(c_47, f_47, t);
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, z_46);
  t = j_15(a_47, z_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,l_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        t = j_48;
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
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_28);
        t = m_14(l_48, m_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
        {
          ATerm g_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_29 = NULL;
              t = j_48;
              t = u_0(t);
              e_29 = t;
              {
                ATerm k_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_29 = NULL;
                    k_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = k_29;
                          }
                        else
                          {
                            t = k_29;
                            if((l_48 != t))
                              {
                                _fail(t);
                              }
                            t = k_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_48, e_29);
              t = m_14(l_48, e_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
              LocalPopChoice(i_59);
            }
          else
            {
              t = g_59;
              t = j_48;
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
static ATerm e_22 (ATerm t)
{
  t = get_outfile_1_0(f_22, t);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,z_29 = NULL;
        t = term_c_36;
        x_29 = t;
        t = term_p_59;
        z_29 = t;
        t = term_q_59;
        t = d_15(x_29, z_29, t);
        t = i_49;
        t = copy_to_1_0(e_22, t);
        t_29 = t;
        t = term_h_36;
        u_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_59));
        v_29 = t;
        t = SSL_printnl(u_29, v_29);
        t = t_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(o_59);
      }
    else
      {
        t = n_59;
        t = i_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm h_50 = NULL,l_50 = NULL,m_50 = NULL,o_50 = NULL;
  t = term_m_41;
  {
    ATerm u_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL,q_50 = NULL;
        t = term_c_36;
        p_50 = t;
        t = term_m_41;
        q_50 = t;
        t = term_n_41;
        t = d_15(p_50, q_50, t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = u_59;
        t = term_s_39;
      }
  }
  l_50 = t;
  t = term_s_39;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_50, term_s_39);
  t = h_14(l_50, o_50, t);
  m_50 = t;
  t = SSL_int_to_string(m_50);
  h_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_50), term_m_41);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,c_51 = NULL,d_51 = NULL;
  t = term_c_36;
  c_51 = t;
  t = term_x_59;
  d_51 = t;
  t = term_y_59;
  t = d_15(c_51, d_51, t);
  x_50 = t;
  t = term_z_59;
  t = xtc_find_path_0_0(t);
  y_50 = t;
  t = term_a_60;
  t = xtc_find_path_0_0(t);
  z_50 = t;
  t = term_c_60;
  t = xtc_find_path_0_0(t);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_51), term_x_59), z_50), term_x_59), y_50), term_x_59));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm e_51 = NULL,i_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,s_51 = NULL,u_51 = NULL;
  s_51 = t;
  t = term_d_60;
  e_51 = t;
  t = s_51;
  {
    ATerm e_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL,w_51 = NULL;
        t = term_c_36;
        v_51 = t;
        t = term_n_36;
        w_51 = t;
        t = term_o_36;
        t = d_15(v_51, w_51, t);
        LocalPopChoice(h_60);
      }
    else
      {
        t = e_60;
        {
          ATerm b_52 = NULL,d_52 = NULL;
          t = term_c_36;
          b_52 = t;
          t = term_z_40;
          d_52 = t;
          t = term_b_41;
          t = d_15(b_52, d_52, t);
        }
      }
  }
  u_51 = t;
  t = s_51;
  t = get_include_dirs_0_0(t);
  n_51 = t;
  t = s_51;
  t = pass_keep_0_0(t);
  o_51 = t;
  t = term_i_60;
  {
    ATerm j_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL,k_52 = NULL;
        t = term_c_36;
        h_52 = t;
        t = term_i_60;
        k_52 = t;
        t = term_l_60;
        t = d_15(h_52, k_52, t);
        LocalPopChoice(k_60);
        t = (ATerm) ATinsert(ATempty, term_i_60);
      }
    else
      {
        t = j_60;
        t = (ATerm) ATempty;
      }
  }
  p_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_51), o_51), n_51), (ATerm) ATinsert(ATinsert(ATempty, u_51), term_n_60));
  t = concat_0_0(t);
  i_51 = t;
  t = s_51;
  t = comp_0_2(e_51, i_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm m_52 = NULL;
  m_52 = t;
  {
    ATerm o_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_52 = NULL,v_52 = NULL,w_52 = NULL;
        t = term_c_36;
        v_52 = t;
        t = term_d_36;
        w_52 = t;
        t = term_f_36;
        t = d_15(v_52, w_52, t);
        o_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_52, term_b_40);
        t = geq_0_0(t);
        t = m_52;
        t = b_126(t);
        LocalPopChoice(p_60);
      }
    else
      {
        t = o_60;
        t = m_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,i_53 = NULL;
  i_53 = t;
  t = SSL_explode_string(i_53);
  {
    ATerm s_60 = t;
    int x_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_55 (ATerm t);
        static ATerm d_55 (ATerm t)
        {
          ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
          w_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_54 = ATgetFirst((ATermList) t);
              y_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm y_60 = t;
            int z_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_31 = NULL,x_31 = NULL,l_10 = NULL;
                t = SSLgetAnnotations(w_54);
                n_31 = t;
                t = y_54;
                t = d_55(t);
                x_31 = t;
                t = (ATerm) ATinsert(CheckATermList(x_31), x_54);
                l_10 = t;
                t = SSLsetAnnotations(l_10, n_31);
                LocalPopChoice(z_60);
              }
            else
              {
                t = y_60;
                {
                  ATerm a_61 = t;
                  int b_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_32 = NULL,n_10 = NULL;
                      t = SSLgetAnnotations(w_54);
                      j_32 = t;
                      t = x_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_54), x_54);
                      n_10 = t;
                      t = SSLsetAnnotations(n_10, j_32);
                      LocalPopChoice(b_61);
                    }
                  else
                    {
                      t = a_61;
                      {
                        ATerm w_32 = NULL,j_33 = NULL,o_10 = NULL;
                        t = SSLgetAnnotations(w_54);
                        w_32 = t;
                        t = x_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = y_54;
                        t = x_119(t);
                        j_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_33), x_54);
                        o_10 = t;
                        t = SSLsetAnnotations(o_10, w_32);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = d_55(t);
        LocalPopChoice(x_60);
      }
    else
      {
        t = s_60;
      }
  }
  g_53 = t;
  t = SSL_implode_string(g_53);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = debug_1_0(i_22, t);
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_d_61;
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = debug_1_0(n_22, t);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_f_61;
  return(t);
}
static ATerm c_14 (ATerm w_22, ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL,v_55 = NULL,w_55 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  q_55 = t;
  t = if_verbose3_1_0(h_22, t);
  t = term_d_41;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_41, q_55);
  t = i_15(w_55, q_55, t);
  {
    ATerm g_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_55 = NULL,z_55 = NULL;
        t = term_c_36;
        y_55 = t;
        t = term_n_36;
        z_55 = t;
        t = term_o_36;
        t = d_15(y_55, z_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = g_61;
        t = q_55;
      }
  }
  s_55 = t;
  t = if_verbose3_1_0(k_22, t);
  t = term_z_40;
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_40, s_55);
  t = i_15(v_55, s_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_55);
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
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(z_22, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,z_57 = NULL,a_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,k_58 = NULL,l_58 = NULL,l_36 = NULL,s_36 = NULL,t_36 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      l_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(l_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
        m_58 = t;
        t = term_c_36;
        n_58 = t;
        t = term_w_38;
        o_58 = t;
        t = term_a_39;
        t = d_15(n_58, o_58, t);
        t = m_58;
        LocalPopChoice(x_61);
      }
    else
      {
        t = w_61;
        t = add_main_0_0(t);
      }
  }
  k_58 = t;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_58 = ATgetArgument(t, 0);
            {
              ATerm u_33 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(k_58);
              u_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_58);
              z_10 = t;
              t = SSLsetAnnotations(z_10, u_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(z_61);
        t = xtc_transform_file_2_0(c_23, d_23, t);
      }
    else
      {
        t = y_61;
        t = xtc_transform_term_2_0(e_23, j_23, t);
      }
  }
  h_58 = t;
  {
    ATerm b_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_59 = ATgetArgument(t, 0);
            {
              ATerm c_34 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(h_58);
              c_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_59);
              a_11 = t;
              t = SSLsetAnnotations(a_11, c_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_58;
          }
        LocalPopChoice(c_62);
        t = xtc_transform_file_2_0(l_23, p_23, t);
      }
    else
      {
        t = b_62;
        t = xtc_transform_term_2_0(s_23, t_23, t);
      }
  }
  t = if_keep5_1_0(v_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(a_24, t);
  l_34 = t;
  t = term_d_62;
  i_34 = t;
  t = l_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  k_34 = t;
  t = l_34;
  t = comp_0_2(i_34, k_34, t);
  t = if_keep6_1_0(c_24, t);
  g_58 = t;
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_59 = ATgetArgument(t, 0);
            {
              ATerm o_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(g_58);
              o_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_59);
              b_11 = t;
              t = SSLsetAnnotations(b_11, o_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_58;
          }
        LocalPopChoice(h_62);
        t = xtc_transform_file_2_0(f_24, j_24, t);
      }
    else
      {
        t = g_62;
        t = xtc_transform_term_2_0(k_24, l_24, t);
      }
  }
  t = if_keep6_1_0(m_24, t);
  f_58 = t;
  {
    ATerm i_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_59 = ATgetArgument(t, 0);
            {
              ATerm t_34 = NULL,m_11 = NULL;
              t = SSLgetAnnotations(f_58);
              t_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_59);
              m_11 = t;
              t = SSLsetAnnotations(m_11, t_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(k_62);
        t = xtc_transform_file_2_0(o_24, r_24, t);
      }
    else
      {
        t = i_62;
        t = xtc_transform_term_2_0(s_24, a_25, t);
      }
  }
  t = if_keep5_1_0(c_25, t);
  a_58 = t;
  {
    ATerm l_62 = t;
    int m_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_60 = ATgetArgument(t, 0);
            {
              ATerm i_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(a_58);
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_60);
              h_12 = t;
              t = SSLsetAnnotations(h_12, i_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(m_62);
        t = xtc_transform_file_2_0(e_25, g_25, t);
      }
    else
      {
        t = l_62;
        t = xtc_transform_term_2_0(h_25, i_25, t);
      }
  }
  t = if_keep5_1_0(k_25, t);
  z_57 = t;
  {
    ATerm n_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_60 = ATgetArgument(t, 0);
            {
              ATerm n_35 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(z_57);
              n_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_60);
              i_12 = t;
              t = SSLsetAnnotations(i_12, n_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_57;
          }
        LocalPopChoice(o_62);
        t = xtc_transform_file_2_0(n_25, o_25, t);
      }
    else
      {
        t = n_62;
        t = xtc_transform_term_2_0(u_25, v_25, t);
      }
  }
  t = if_keep5_1_0(w_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm r_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
        t_60 = t;
        t = term_c_36;
        u_60 = t;
        t = term_w_38;
        v_60 = t;
        t = term_a_39;
        t = d_15(u_60, v_60, t);
        t = t_60;
        LocalPopChoice(s_62);
        {
          ATerm w_60 = NULL;
          w_60 = t;
          {
            ATerm t_62 = t;
            int v_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    c_61 = ATgetArgument(t, 0);
                    {
                      ATerm a_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(w_60);
                      a_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, c_61);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, a_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = w_60;
                  }
                LocalPopChoice(v_62);
                t = xtc_transform_file_2_0(a_26, b_26, t);
              }
            else
              {
                t = t_62;
                t = xtc_transform_term_2_0(c_26, e_26, t);
              }
          }
        }
      }
    else
      {
        t = r_62;
        {
          ATerm t_61 = NULL;
          t_61 = t;
          {
            ATerm y_62 = t;
            int d_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_62 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    a_62 = ATgetArgument(t, 0);
                    {
                      ATerm e_36 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(t_61);
                      e_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, a_62);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, e_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_61;
                  }
                LocalPopChoice(d_63);
                t = xtc_transform_file_2_0(g_26, h_26, t);
              }
            else
              {
                t = y_62;
                t = xtc_transform_term_2_0(i_26, j_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  t_36 = t;
  t = term_e_63;
  l_36 = t;
  t = t_36;
  t = pass_warnings_0_0(t);
  s_36 = t;
  t = t_36;
  t = comp_0_2(l_36, s_36, t);
  u_57 = t;
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_62 = ATgetArgument(t, 0);
            {
              ATerm a_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(u_57);
              a_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, a_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_57;
          }
        LocalPopChoice(g_63);
        t = xtc_transform_file_2_0(o_26, q_26, t);
      }
    else
      {
        t = f_63;
        t = xtc_transform_term_2_0(u_26, v_26, t);
      }
  }
  t_57 = t;
  {
    ATerm h_63 = t;
    int i_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_62 = ATgetArgument(t, 0);
            {
              ATerm j_37 = NULL,q_12 = NULL;
              t = SSLgetAnnotations(t_57);
              j_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_62);
              q_12 = t;
              t = SSLsetAnnotations(q_12, j_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_57;
          }
        LocalPopChoice(i_63);
        t = xtc_transform_file_2_0(w_26, x_26, t);
      }
    else
      {
        t = h_63;
        t = xtc_transform_term_2_0(y_26, z_26, t);
      }
  }
  t = if_keep2_1_0(b_27, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm j_57 = NULL,r_57 = NULL,s_57 = NULL;
  j_57 = t;
  t = term_h_36;
  r_57 = t;
  t = (ATerm) ATinsert(CheckATermList(j_57), term_j_63);
  s_57 = t;
  t = SSL_printnl(r_57, s_57);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(j_57), term_j_63));
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm v_58 = NULL;
  t = pass_verbose_0_0(t);
  v_58 = t;
  t = (ATerm) ATinsert(CheckATermList(v_58), term_o_39);
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm w_58 = NULL;
  t = pass_verbose_0_0(t);
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(w_58), term_o_39);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm c_59 = NULL;
  t = pass_verbose_0_0(t);
  c_59 = t;
  t = (ATerm) ATinsert(CheckATermList(c_59), term_o_39);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm d_59 = NULL;
  t = pass_verbose_0_0(t);
  d_59 = t;
  t = (ATerm) ATinsert(CheckATermList(d_59), term_o_39);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = save_as_1_0(y_23, t);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = save_as_1_0(b_24, t);
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = save_as_1_0(d_24, t);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm j_59 = NULL;
  t = pass_verbose_0_0(t);
  j_59 = t;
  t = (ATerm) ATinsert(CheckATermList(j_59), term_o_39);
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm l_24 (ATerm t)
{
  ATerm l_59 = NULL;
  t = pass_verbose_0_0(t);
  l_59 = t;
  t = (ATerm) ATinsert(CheckATermList(l_59), term_o_39);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = save_as_1_0(n_24, t);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm t_59 = NULL;
  t = pass_verbose_0_0(t);
  t_59 = t;
  t = (ATerm) ATinsert(CheckATermList(t_59), term_o_39);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_o_39);
  return(t);
}
static ATerm c_25 (ATerm t)
{
  t = save_as_1_0(d_25, t);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm f_60 = NULL;
  t = pass_verbose_0_0(t);
  f_60 = t;
  t = (ATerm) ATinsert(CheckATermList(f_60), term_o_39);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm i_25 (ATerm t)
{
  ATerm g_60 = NULL;
  t = pass_verbose_0_0(t);
  g_60 = t;
  t = (ATerm) ATinsert(CheckATermList(g_60), term_o_39);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = save_as_1_0(l_25, t);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_o_39);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_o_39);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = save_as_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  ATerm e_61 = NULL;
  t = pass_verbose_0_0(t);
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(e_61), term_o_39);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_s_54;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm s_61 = NULL;
  t = pass_verbose_0_0(t);
  s_61 = t;
  t = (ATerm) ATinsert(CheckATermList(s_61), term_o_39);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm e_62 = NULL;
  t = pass_verbose_0_0(t);
  e_62 = t;
  t = (ATerm) ATinsert(CheckATermList(e_62), term_o_39);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm f_62 = NULL;
  t = pass_verbose_0_0(t);
  f_62 = t;
  t = (ATerm) ATinsert(CheckATermList(f_62), term_o_39);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(m_26, t);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm q_26 (ATerm t)
{
  ATerm p_62 = NULL;
  t = pass_verbose_0_0(t);
  p_62 = t;
  t = (ATerm) ATinsert(CheckATermList(p_62), term_o_39);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm q_62 = NULL;
  t = pass_verbose_0_0(t);
  q_62 = t;
  t = (ATerm) ATinsert(CheckATermList(q_62), term_o_39);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = term_e_64;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm w_62 = NULL;
  t = pass_verbose_0_0(t);
  w_62 = t;
  t = (ATerm) ATinsert(CheckATermList(w_62), term_o_39);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_e_64;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm x_62 = NULL;
  t = pass_verbose_0_0(t);
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), term_o_39);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = save_as_1_0(c_27, t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_g_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(x_22, y_22, t);
  return(t);
}
static ATerm d_15 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm x_63 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_15(j_58, x_63, t);
  return(t);
}
static ATerm d_14 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  c_64 = t;
  {
    ATerm h_64 = t;
    int k_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        t = d_15(u_56, v_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_64 = ATgetFirst((ATermList) t);
            b_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_64);
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
          t = g_15(v_56, b_64, d_64, t);
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, b_64);
        }
      }
    else
      {
        t = h_64;
        {
          ATerm f_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_15(v_56, f_64, t);
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        }
      }
  }
  t = c_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL;
  o_64 = t;
  t = g_122(t);
  n_64 = t;
  {
    ATerm m_64 = t;
    int t_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_64 = NULL;
        t = term_x_56;
        s_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_64, term_x_56);
        t = d_15(n_64, s_64, t);
        {
          ATerm u_64 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_64;
            }
        }
        LocalPopChoice(t_64);
      }
    else
      {
        t = m_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_64 = ATgetFirst((ATermList) t);
      i_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_64, term_x_56, i_64);
  t = lookup_table_0_1(n_64, t);
  r_64 = t;
  t = term_x_56;
  p_64 = t;
  t = r_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(p_64, i_64, q_64, t);
  t = j_64;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm v_64 = NULL;
      v_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_64, v_64);
      t = d_14(n_64, v_64, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = o_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t)
{
  ATerm w_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_101(t);
      t = h_101(t);
      LocalPopChoice(a_65);
    }
  else
    {
      t = w_64;
      t = h_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,c_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  y_64 = t;
  t = f_122(t);
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_64, term_x_56);
  {
    ATerm b_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_65 = ATgetArgument(t, 0);
            ATerm i_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_56;
        m_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_64, term_x_56);
        t = d_15(x_64, m_65, t);
        LocalPopChoice(d_65);
      }
    else
      {
        t = b_65;
        t = (ATerm) ATempty;
      }
  }
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_64, term_x_56, (ATerm) ATinsert(CheckATermList(z_64), (ATerm) ATempty));
  t = lookup_table_0_1(x_64, t);
  h_65 = t;
  t = term_x_56;
  c_65 = t;
  t = (ATerm) ATinsert(CheckATermList(z_64), (ATerm) ATempty);
  f_65 = t;
  t = h_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(c_65, f_65, g_65, t);
  t = y_64;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_65);
        LocalPopChoice(k_65);
      }
    else
      {
        t = j_65;
        t = z_65;
      }
  }
  return(t);
}
static ATerm n_27 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_135 (ATerm), ATerm t)
{
  ATerm p_65 = NULL;
  static ATerm i_27 (ATerm t);
  static ATerm i_27 (ATerm t)
  {
    ATerm q_65 = NULL;
    q_65 = t;
    {
      ATerm l_65 = t;
      int n_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_65 = NULL,u_65 = NULL;
          t = term_d_57;
          r_65 = t;
          t = term_x_56;
          u_65 = t;
          t = term_r_58;
          t = d_15(r_65, u_65, t);
          LocalPopChoice(n_65);
        }
      else
        {
          t = l_65;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_65 != NULL) && (p_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_65 = ATgetFirst((ATermList) t);
        {
          ATerm o_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_65;
    t = map_1_0(k_27, t);
    t = q_65;
    t = end_scope_1_0(n_27, t);
    return(t);
  }
  t = begin_scope_1_0(h_27, t);
  t = restore_always_2_0(o_135, i_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_125 (ATerm), ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
        t = term_c_36;
        m_66 = t;
        t = term_d_36;
        n_66 = t;
        t = term_f_36;
        t = d_15(m_66, n_66, t);
        l_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_66, term_s_39);
        t = geq_0_0(t);
        t = h_66;
        t = z_125(t);
        LocalPopChoice(t_65);
      }
    else
      {
        t = s_65;
        t = h_66;
      }
  }
  return(t);
}
static ATerm f_14 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm v_65 = t;
  int w_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_43, r_43);
      LocalPopChoice(w_65);
    }
  else
    {
      t = v_65;
      t = SSL_addr(q_43, r_43);
    }
  return(t);
}
static ATerm h_14 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_43, x_43);
      LocalPopChoice(y_65);
    }
  else
    {
      t = x_65;
      t = SSL_subtr(w_43, x_43);
    }
  return(t);
}
static ATerm i_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
  t = h_14(w_68, x_68, t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_68, z_68);
  t = h_14(y_68, z_68, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  t = h_14(a_69, b_69, t);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, d_69);
  t = h_14(c_69, d_69, t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_66, s_66, t_66, u_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,b_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_66 = ATgetArgument(t, 0);
      if(match_cons(a_66, sym__4))
        {
          w_66 = ATgetArgument(a_66, 0);
          x_66 = ATgetArgument(a_66, 1);
          y_66 = ATgetArgument(a_66, 2);
          b_67 = ATgetArgument(a_66, 3);
        }
      else
        _fail(t);
      {
        ATerm b_66 = ATgetArgument(t, 1);
        if(match_cons(b_66, sym__4))
          {
            i_67 = ATgetArgument(b_66, 0);
            j_67 = ATgetArgument(b_66, 1);
            k_67 = ATgetArgument(b_66, 2);
            l_67 = ATgetArgument(b_66, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_14(w_66, x_66, y_66, b_67, i_67, j_67, k_67, l_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,u_67 = NULL,y_67 = NULL,z_67 = NULL,b_68 = NULL,h_68 = NULL,j_68 = NULL;
  s_67 = t;
  t = times_0_0(t);
  m_67 = t;
  t = s_67;
  t = n_129(t);
  n_67 = t;
  t = times_0_0(t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_67, m_67);
  t = diff_times_0_0(t);
  q_67 = t;
  if(match_cons(t, sym__4))
    {
      b_68 = ATgetArgument(t, 0);
      {
        ATerm c_66 = ATgetArgument(t, 1);
      }
      h_68 = ATgetArgument(t, 2);
      {
        ATerm d_66 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_68, h_68);
  t = f_14(b_68, h_68, t);
  j_68 = t;
  t = SSL_TicksToSeconds(j_68);
  o_67 = t;
  t = q_67;
  if(match_cons(t, sym__4))
    {
      ATerm e_66 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
      {
        ATerm f_66 = ATgetArgument(t, 2);
      }
      y_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_67, y_67);
  t = f_14(u_67, y_67, t);
  z_67 = t;
  t = SSL_TicksToSeconds(z_67);
  p_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_67), term_i_66), o_67), term_g_66);
  t = m_129(t);
  t = n_67;
  return(t);
}
ATerm debug_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  k_68 = t;
  t = l_108(t);
  l_68 = t;
  t = term_h_36;
  m_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_68), l_68);
  n_68 = t;
  t = SSL_printnl(m_68, n_68);
  t = k_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  o_68 = t;
  t = term_c_36;
  s_68 = t;
  t = term_j_66;
  t_68 = t;
  t = term_k_66;
  t = d_15(s_68, t_68, t);
  p_68 = t;
  t = term_y_37;
  q_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_68), term_a_68), term_v_67), term_t_67), term_v_66), term_q_66), term_p_66), p_68), term_o_66);
  r_68 = t;
  t = SSL_printnl(q_68, r_68);
  t = o_68;
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
static ATerm l_14 (ATerm x_25, ATerm p_226, ATerm t)
{
  static ATerm o_27 (ATerm t);
  static ATerm o_27 (ATerm t)
  {
    if((x_25 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = p_226;
  t = fetch_1_0(o_27, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  static ATerm j_70 (ATerm t);
  static ATerm j_70 (ATerm t)
  {
    ATerm d_68 = t;
    int e_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_109(t);
        LocalPopChoice(e_68);
      }
    else
      {
        t = d_68;
        {
          ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,e_38 = NULL,q_38 = NULL,h_13 = NULL;
          g_70 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_70 = ATgetFirst((ATermList) t);
              i_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_70);
          e_38 = t;
          t = i_70;
          t = j_70(t);
          q_38 = t;
          t = (ATerm) ATinsert(CheckATermList(q_38), h_70);
          h_13 = t;
          t = SSLsetAnnotations(h_13, e_38);
        }
      }
    return(t);
  }
  t = j_70(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  static ATerm p_27 (ATerm t);
  static ATerm p_27 (ATerm t)
  {
    ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,r_70 = NULL,s_70 = NULL,u_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,q_13 = NULL,m_13 = NULL;
    y_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_70 = ATgetFirst((ATermList) t);
        u_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_70);
    r_70 = t;
    t = s_70;
    t = j_109(t);
    w_70 = t;
    t = (ATerm) ATinsert(CheckATermList(u_70), w_70);
    m_13 = t;
    t = SSLsetAnnotations(m_13, r_70);
    x_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_70 = ATgetFirst((ATermList) t);
        p_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_70);
    n_70 = t;
    t = p_70;
    if(((l_70 != NULL) && (l_70 != t)))
      _fail(t);
    else
      l_70 = t;
    t = (ATerm) ATinsert(CheckATermList(p_70), o_70);
    q_13 = t;
    t = SSLsetAnnotations(q_13, n_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(p_27, t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, not_null(l_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm t_71 = NULL,w_71 = NULL;
  ATerm f_68 = t;
  int g_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(t_118, t);
      LocalPopChoice(g_68);
    }
  else
    {
      t = f_68;
      {
        ATerm o_71 = NULL;
        o_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      w_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_68 = ATgetFirst((ATermList) t);
              ATerm u_68 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_71;
          t = list_tokenize_1_0(t_118, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm v_68 = ATgetFirst((ATermList) t);
          ATerm e_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, t_71);
        }
      else
        {
          ATerm g_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_69 = ATgetFirst((ATermList) t);
              ATerm i_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_71;
          t = list_tokenize_1_0(t_118, t);
          g_72 = t;
          t = (ATerm) ATinsert(CheckATermList(g_72), t_71);
        }
    }
  return(t);
}
static ATerm r_27 (ATerm t)
{
  ATerm z_72 = NULL;
  z_72 = t;
  t = SSL_implode_string(z_72);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,n_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,w_72 = NULL,l_18 = NULL;
  w_72 = t;
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_72);
  n_72 = t;
  t = SSL_explode_string(r_72);
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, s_72);
  l_18 = t;
  t = SSLsetAnnotations(l_18, n_72);
  if(match_cons(t, sym__2))
    {
      j_72 = ATgetArgument(t, 0);
      k_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_72;
  {
    static ATerm q_27 (ATerm t);
    static ATerm q_27 (ATerm t)
    {
      ATerm y_72 = NULL;
      y_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_72, j_72);
      t = l_14(y_72, j_72, t);
      return(t);
    }
    t = list_tokenize_1_0(q_27, t);
  }
  t = map_1_0(r_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL;
        t = SSL_filemode(r_73);
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            {
              ATerm l_69 = ATgetArgument(t, 1);
              if(((ATgetType(l_69) != AT_INT) || (ATgetInt((ATermInt) l_69) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_38;
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
        {
          ATerm e_39 = NULL,f_39 = NULL;
          t = term_m_69;
          f_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_69, r_73);
          t = j_15(f_39, r_73, t);
          e_39 = t;
          t = SSL_perror(e_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm m_14 (ATerm c_63, ATerm b_63, ATerm t)
{
  ATerm v_73 = NULL,x_73 = NULL;
  x_73 = t;
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_73 = NULL,z_73 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_57);
        z_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_63, (ATerm) ATinsert(ATempty, term_g_57));
        t = x_14(b_63, z_73, t);
        t = filemode_0_0(t);
        y_73 = t;
        t = SSL_S_ISDIR(y_73);
        t = x_73;
        LocalPopChoice(o_69);
        {
          ATerm a_74 = NULL,d_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_p_69), c_63);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          a_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_74), term_q_69), b_63);
          d_74 = t;
          t = SSL_concat_strings(d_74);
        }
      }
    else
      {
        t = n_69;
        t = b_63;
      }
  }
  v_73 = t;
  t = SSL_copy(c_63, v_73);
  return(t);
}
static ATerm n_14 (ATerm o_61, ATerm t)
{
  t = SSL_hashtable_keys(o_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm h_74 = NULL,i_74 = NULL;
    h_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), h_74);
    t = d_15(not_null(f_74), h_74, t);
    i_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_74, i_74);
    return(t);
  }
  if(((f_74 != NULL) && (f_74 != t)))
    _fail(t);
  else
    f_74 = t;
  t = lookup_table_0_1(f_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(g_74, t);
  t = map_1_0(s_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm k_74 = NULL;
  k_74 = t;
  {
    ATerm r_69 = t;
    int s_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_74 = NULL,p_74 = NULL,r_74 = NULL;
        t = term_c_36;
        p_74 = t;
        t = term_d_36;
        r_74 = t;
        t = term_f_36;
        t = d_15(p_74, r_74, t);
        o_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_74, term_a_46);
        t = geq_0_0(t);
        t = k_74;
        t = d_126(t);
        LocalPopChoice(s_69);
      }
    else
      {
        t = r_69;
        t = k_74;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm u_74 = NULL;
  u_74 = t;
  {
    ATerm t_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_74 = NULL,y_74 = NULL,a_75 = NULL;
        t = term_c_36;
        y_74 = t;
        t = term_d_36;
        a_75 = t;
        t = term_f_36;
        t = d_15(y_74, a_75, t);
        w_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_74, term_f_43);
        t = geq_0_0(t);
        t = u_74;
        t = c_126(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = t_69;
        t = u_74;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_75 = NULL,o_75 = NULL,q_75 = NULL;
  m_75 = t;
  if(match_cons(t, sym__2))
    {
      o_75 = ATgetArgument(t, 0);
      q_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_69 = t;
    int w_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_75;
        if((o_75 != t))
          {
            _fail(t);
          }
        t = m_75;
        LocalPopChoice(w_69);
      }
    else
      {
        t = v_69;
        t = (ATerm) ATmakeAppl(sym__2, o_75, q_75);
        {
          ATerm x_69 = t;
          int y_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_75, q_75);
              LocalPopChoice(y_69);
            }
          else
            {
              t = x_69;
              t = SSL_gtr(o_75, q_75);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_75, q_75);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm h_76 = NULL;
  h_76 = t;
  {
    ATerm z_69 = t;
    int a_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_76 = NULL,l_76 = NULL,m_76 = NULL;
        t = term_c_36;
        l_76 = t;
        t = term_d_36;
        m_76 = t;
        t = term_f_36;
        t = d_15(l_76, m_76, t);
        j_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_76, term_w_48);
        t = geq_0_0(t);
        t = h_76;
        t = e_126(t);
        LocalPopChoice(a_70);
      }
    else
      {
        t = z_69;
        t = h_76;
      }
  }
  return(t);
}
static ATerm q_14 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
{
  t = l_113(t);
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm q_76 = NULL;
      q_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_31, q_76);
      t = k_113(t);
      return(t);
    }
    t = fetch_1_0(t_27, t);
  }
  t = h_31;
  return(t);
}
static ATerm r_14 (ATerm h_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm o_77 (ATerm t);
  static ATerm o_77 (ATerm t)
  {
    ATerm e_77 = NULL,g_77 = NULL,i_77 = NULL;
    e_77 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_77 = ATgetFirst((ATermList) t);
            i_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_70 = t;
          int c_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_77;
              {
                static ATerm u_27 (ATerm t);
                static ATerm u_27 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = q_14(h_113, u_27, g_77, i_77, t);
              }
              t = o_77(t);
              LocalPopChoice(c_70);
            }
          else
            {
              t = b_70;
              {
                ATerm e_40 = NULL,o_40 = NULL,r_18 = NULL;
                t = SSLgetAnnotations(e_77);
                e_40 = t;
                t = i_77;
                t = o_77(t);
                o_40 = t;
                t = (ATerm) ATinsert(CheckATermList(o_40), g_77);
                r_18 = t;
                t = SSLsetAnnotations(r_18, e_40);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = o_77(t);
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm b_78 = NULL;
  if(match_cons(t, sym__2))
    {
      b_78 = ATgetArgument(t, 0);
      if((b_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_14 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  {
    ATerm d_70 = t;
    int e_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_70 = ATgetArgument(t, 0);
            ATerm k_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
        t = d_15(m_57, n_57, t);
        LocalPopChoice(e_70);
      }
    else
      {
        t = d_70;
        t = (ATerm) ATempty;
      }
  }
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_77, o_57);
  t = r_14(v_27, t_77, o_57, t);
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_57, n_57, s_77);
  t = lookup_table_0_1(m_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(n_57, s_77, u_77, t);
  t = r_77;
  return(t);
}
static ATerm t_14 (ATerm v_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t)
{
  static ATerm w_27 (ATerm t);
  static ATerm w_27 (ATerm t)
  {
    ATerm d_78 = NULL,e_78 = NULL;
    if(match_cons(t, sym__2))
      {
        d_78 = ATgetArgument(t, 0);
        e_78 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_57, d_78, e_78);
    t = v_123(t);
    return(t);
  }
  t = v_57;
  t = map_1_0(w_27, t);
  return(t);
}
static ATerm x_14 (ATerm k_40, ATerm l_40, ATerm t)
{
  t = SSL_access(k_40, l_40);
  return(t);
}
static ATerm y_78 (ATerm p_78, ATerm t)
{
  t = SSL_fclose(p_78);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_78 = NULL,v_78 = NULL;
  v_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_78 = ATgetArgument(t, 0);
      {
        ATerm q_70 = t;
        int t_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_78);
            LocalPopChoice(t_70);
          }
        else
          {
            t = q_70;
            t = y_78(v_78, t);
          }
      }
    }
  else
    {
      t = y_78(v_78, t);
    }
  return(t);
}
static ATerm u_14 (ATerm b_25, ATerm t)
{
  t = SSL_read_term_from_stream(b_25);
  return(t);
}
static ATerm v_14 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm z_78 = NULL;
  t = SSL_fopen(w_40, x_40);
  z_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_78);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_79 = NULL;
  t = SSL_stdin_stream();
  a_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_79);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_79 = NULL;
  t = SSL_stdout_stream();
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_79);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_79 = NULL;
  t = SSL_stderr_stream();
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_79);
  return(t);
}
static ATerm u_80 (ATerm l_79, ATerm t)
{
  ATerm m_79 = NULL;
  t = SSL_explode_term(l_79);
  if(match_cons(t, sym__2))
    {
      ATerm v_70 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_70) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_70 = ATgetArgument(t, 1);
        if(((ATgetType(z_70) == AT_LIST) && !(ATisEmpty(z_70))))
          {
            m_79 = ATgetFirst((ATermList) z_70);
            {
              ATerm a_71 = (ATerm) ATgetNext((ATermList) z_70);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_79;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_79;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_79;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_79;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_80 (ATerm q_79, ATerm s_79, ATerm t_79, ATerm t)
{
  ATerm u_79 = NULL,w_79 = NULL,x_79 = NULL,a_80 = NULL,u_18 = NULL;
  t = SSLgetAnnotations(t_79);
  x_79 = t;
  t = q_79;
  if(match_cons(t, sym_Path_1))
    {
      a_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_80, s_79);
  u_18 = t;
  t = SSLsetAnnotations(u_18, x_79);
  if(match_cons(t, sym__2))
    {
      u_79 = ATgetArgument(t, 0);
      w_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_14(u_79, w_79, t);
  return(t);
}
static ATerm w_80 (ATerm d_80, ATerm f_80, ATerm g_80, ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL,k_80 = NULL,n_80 = NULL,v_18 = NULL;
  t = SSLgetAnnotations(g_80);
  k_80 = t;
  t = SSL_is_string(d_80);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_80, f_80);
  v_18 = t;
  t = SSLsetAnnotations(v_18, k_80);
  if(match_cons(t, sym__2))
    {
      i_80 = ATgetArgument(t, 0);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_14(i_80, j_80, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  r_80 = t;
  if(match_cons(t, sym__2))
    {
      s_80 = ATgetArgument(t, 0);
      t_80 = ATgetArgument(t, 1);
      {
        ATerm b_71 = t;
        int c_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_80(r_80, t);
            LocalPopChoice(c_71);
          }
        else
          {
            t = b_71;
            {
              ATerm d_71 = t;
              int e_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_80(s_80, t_80, r_80, t);
                  LocalPopChoice(e_71);
                }
              else
                {
                  t = d_71;
                  t = w_80(s_80, t_80, r_80, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_80(r_80, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,h_81 = NULL;
  h_81 = t;
  {
    ATerm f_71 = t;
    int g_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_81, term_h_71);
        t = w_14(t);
        LocalPopChoice(g_71);
      }
    else
      {
        t = f_71;
        {
          ATerm f_42 = NULL,h_42 = NULL;
          t = term_i_71;
          h_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_71, h_81);
          t = j_15(h_42, h_81, t);
          f_42 = t;
          t = SSL_perror(f_42);
          _fail(t);
        }
      }
  }
  z_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_14(a_81, t);
  y_80 = t;
  t = z_80;
  t = fclose_0_0(t);
  t = y_80;
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = term_j_71;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = term_k_71;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_71 = t;
  int m_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_81 = NULL,o_81 = NULL;
      n_81 = t;
      t = (ATerm) ATinsert(ATempty, term_n_71);
      o_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_81, (ATerm) ATinsert(ATempty, term_n_71));
      t = x_14(n_81, o_81, t);
      LocalPopChoice(m_71);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_71;
      {
        ATerm p_71 = t;
        int q_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_71 = t;
            if((PushChoice() == 0))
              {
                ATerm p_81 = NULL,r_81 = NULL;
                p_81 = t;
                t = (ATerm) ATinsert(ATempty, term_g_57);
                r_81 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_81, (ATerm) ATinsert(ATempty, term_g_57));
                t = x_14(p_81, r_81, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_71;
              }
            t = debug_1_0(x_27, t);
            LocalPopChoice(q_71);
          }
        else
          {
            t = p_71;
            t = debug_1_0(z_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(c_28, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_s_71;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = debug_1_0(f_28, t);
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_u_71;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  ATerm s_82 = NULL,t_82 = NULL,u_82 = NULL;
  s_82 = t;
  t = term_h_36;
  t_82 = t;
  t = (ATerm) ATinsert(ATempty, term_v_71);
  u_82 = t;
  t = SSL_printnl(t_82, u_82);
  t = s_82;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
  if(match_cons(t, sym__3))
    {
      v_82 = ATgetArgument(t, 0);
      w_82 = ATgetArgument(t, 1);
      x_82 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_14(v_82, w_82, x_82, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
  a_83 = t;
  t = term_h_36;
  b_83 = t;
  t = (ATerm) ATinsert(ATempty, term_x_71);
  c_83 = t;
  t = SSL_printnl(b_83, c_83);
  t = a_83;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL;
  f_83 = t;
  t = term_h_36;
  g_83 = t;
  t = (ATerm) ATinsert(ATempty, term_v_71);
  h_83 = t;
  t = SSL_printnl(g_83, h_83);
  t = f_83;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,h_82 = NULL,k_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  u_81 = t;
  t = if_verbose5_1_0(a_28, t);
  {
    ATerm y_71 = t;
    if((PushChoice() == 0))
      {
        ATerm q_82 = NULL,r_82 = NULL;
        t = term_z_71;
        q_82 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_81);
        r_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Imported_1, u_81));
        t = d_15(q_82, r_82, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_71;
      }
  }
  w_81 = t;
  t = term_z_71;
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, term_a_72, (ATerm) ATinsert(ATempty, u_81));
  t = lookup_table_0_1(k_82, t);
  p_82 = t;
  t = term_a_72;
  m_82 = t;
  t = (ATerm) ATinsert(ATempty, u_81);
  n_82 = t;
  t = p_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(m_82, n_82, o_82, t);
  t = w_81;
  t = if_verbose4_1_0(e_28, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(g_28, t);
  v_81 = t;
  t = term_z_71;
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, v_81);
  t = t_14(h_28, h_82, v_81, t);
  t = if_verbose6_1_0(i_28, t);
  t = term_z_71;
  x_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, (ATerm)ATmakeAppl(sym_Imported_1, u_81), (ATerm) ATempty);
  t = lookup_table_0_1(x_81, t);
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_81);
  z_81 = t;
  t = (ATerm) ATempty;
  a_82 = t;
  t = c_82;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(z_81, a_82, b_82, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_71, (ATerm)ATmakeAppl(sym_Imported_1, u_81), (ATerm) ATempty);
  t = if_verbose4_1_0(j_28, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
  t_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_83;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_83 = ATgetFirst((ATermList) t);
          v_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_72 = t;
        int c_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_42 = NULL,x_42 = NULL,z_42 = NULL,c_19 = NULL;
            t = SSLgetAnnotations(t_83);
            s_42 = t;
            t = u_83;
            t = z_116(t);
            x_42 = t;
            t = v_83;
            t = filter_1_0(z_116, t);
            z_42 = t;
            t = (ATerm) ATinsert(CheckATermList(z_42), x_42);
            c_19 = t;
            t = SSLsetAnnotations(c_19, s_42);
            LocalPopChoice(c_72);
          }
        else
          {
            t = b_72;
            t = v_83;
            t = filter_1_0(z_116, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  static ATerm y_83 (ATerm t);
  static ATerm y_83 (ATerm t)
  {
    ATerm d_72 = t;
    int e_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_101(t);
        t = y_83(t);
        LocalPopChoice(e_72);
      }
    else
      {
        t = d_72;
        t = l_101(t);
      }
    return(t);
  }
  t = y_83(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_72 = t;
  int h_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_83 = NULL,a_84 = NULL;
      t = term_c_36;
      z_83 = t;
      t = term_i_72;
      a_84 = t;
      t = term_l_72;
      t = d_15(z_83, a_84, t);
      LocalPopChoice(h_72);
    }
  else
    {
      t = f_72;
      {
        ATerm m_72 = t;
        int o_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_84 = NULL;
            t = term_p_72;
            b_84 = t;
            t = SSL_getenv(b_84);
            LocalPopChoice(o_72);
          }
        else
          {
            t = m_72;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = debug_1_0(l_28, t);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = term_t_72;
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL;
  t = term_z_71;
  h_84 = t;
  t = term_u_72;
  i_84 = t;
  t = term_v_72;
  t = d_15(h_84, i_84, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_72 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_72;
      }
  }
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = debug_1_0(p_28, t);
  return(t);
}
static ATerm p_28 (ATerm t)
{
  t = term_a_73;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_84 = NULL;
  t = if_verbose5_1_0(k_28, t);
  d_84 = t;
  {
    ATerm b_73 = t;
    int c_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_84 = NULL,f_84 = NULL;
        t = term_z_71;
        e_84 = t;
        t = term_a_72;
        f_84 = t;
        t = term_d_73;
        t = d_15(e_84, f_84, t);
        LocalPopChoice(c_73);
      }
    else
      {
        t = b_73;
        {
          ATerm g_84 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_84 = t;
          t = repeat_2_0(n_28, _id, t);
          t = g_84;
        }
      }
  }
  t = d_84;
  t = if_verbose5_1_0(o_28, t);
  return(t);
}
static ATerm w_28 (ATerm t)
{
  t = debug_1_0(x_28, t);
  return(t);
}
static ATerm x_28 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm p_85 (ATerm n_84, ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t = term_z_71;
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_84);
  v_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, n_84));
  t = d_15(u_84, v_84, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_73 = ATgetFirst((ATermList) t);
      if(match_cons(f_73, sym__2))
        {
          ATerm h_73 = ATgetArgument(f_73, 0);
          t_84 = ATgetArgument(f_73, 1);
        }
      else
        _fail(t);
      {
        ATerm g_73 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_84;
  return(t);
}
static ATerm c_29 (ATerm t)
{
  t = debug_1_0(d_29, t);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm f_29 (ATerm t)
{
  t = term_z_71;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_29, t);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_i_73;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_73 = t;
  int k_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_84 = NULL,y_84 = NULL,z_84 = NULL;
      t = if_verbose5_1_0(w_28, t);
      t = xtc_load_0_0(t);
      z_84 = t;
      if(match_cons(t, sym__2))
        {
          w_84 = ATgetArgument(t, 0);
          y_84 = ATgetArgument(t, 1);
          {
            ATerm l_73 = t;
            int m_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
                t = term_z_71;
                d_85 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_84);
                e_85 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATmakeAppl(sym_Tool_1, w_84));
                t = d_15(d_85, e_85, t);
                {
                  static ATerm b_29 (ATerm t);
                  static ATerm b_29 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_84 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_85 != NULL) && (c_85 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_85 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(b_29, t);
                }
                t = not_null(c_85);
                LocalPopChoice(m_73);
              }
            else
              {
                t = l_73;
                t = p_85(z_84, t);
              }
          }
        }
      else
        {
          t = p_85(z_84, t);
        }
      t = if_verbose5_1_0(c_29, t);
      LocalPopChoice(k_73);
    }
  else
    {
      t = j_73;
      {
        ATerm n_85 = NULL,m_43 = NULL,p_43 = NULL;
        n_85 = t;
        t = term_h_36;
        m_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_73), n_85), term_n_73);
        p_43 = t;
        t = SSL_printnl(m_43, p_43);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_73), n_85), term_n_73);
        t = if_verbose5_1_0(f_29, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_14 (ATerm f_67, ATerm e_67, ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL,u_85 = NULL;
  t = f_67;
  {
    ATerm p_73 = t;
    int q_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_85 = NULL;
        t = term_c_36;
        w_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_36, f_67);
        t = d_15(w_85, f_67, t);
        LocalPopChoice(q_73);
      }
    else
      {
        t = p_73;
        t = (ATerm) ATempty;
      }
  }
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, s_85);
  t = conc_0_0(t);
  r_85 = t;
  t = term_c_36;
  t_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, f_67, r_85);
  t = lookup_table_0_1(t_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(f_67, r_85, u_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, f_67, r_85);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
      t = term_v_37;
      t = q_0(t);
      g_86 = t;
      t = term_s_73;
      h_86 = t;
      t = term_t_73;
      i_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_73, term_t_73, g_86);
      t = e_15(h_86, i_86, g_86, t);
      _fail(t);
    }
  else
    {
      ATerm m_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_86 = ATgetFirst((ATermList) t);
          d_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_86;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_86 = ATgetFirst((ATermList) t);
          f_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_86;
      t = o_0(t);
      t = e_86;
      t = p_0(t);
      m_86 = t;
      t = (ATerm) ATinsert(CheckATermList(f_86), m_86);
    }
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm o_86 = NULL;
  o_86 = t;
  if(match_string(t, "-S"))
    {
      t = o_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_86;
    }
  return(t);
}
static ATerm l_29 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL;
  t = term_d_36;
  p_86 = t;
  t = term_x_35;
  q_86 = t;
  t = term_u_73;
  t = i_15(p_86, q_86, t);
  t = term_w_73;
  return(t);
}
static ATerm o_29 (ATerm t)
{
  t = term_b_74;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,v_86 = NULL;
  r_86 = t;
  t = SSL_string_to_int(r_86);
  s_86 = t;
  t = term_d_36;
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, s_86);
  t = i_15(v_86, s_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_86);
  return(t);
}
static ATerm s_29 (ATerm t)
{
  t = term_c_74;
  return(t);
}
static ATerm y_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_30 (ATerm t)
{
  ATerm w_86 = NULL,z_86 = NULL;
  t = term_e_74;
  w_86 = t;
  t = term_v_37;
  z_86 = t;
  t = term_j_74;
  t = i_15(w_86, z_86, t);
  t = term_l_74;
  return(t);
}
static ATerm e_30 (ATerm t)
{
  t = term_m_74;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_74 = t;
  int q_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_29, l_29, o_29, t);
      LocalPopChoice(q_74);
    }
  else
    {
      t = n_74;
      {
        ATerm s_74 = t;
        int t_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_29, q_29, s_29, t);
            LocalPopChoice(t_74);
          }
        else
          {
            t = s_74;
            t = Option_3_0(y_29, c_30, e_30, t);
          }
      }
    }
  return(t);
}
static ATerm z_14 (ATerm c_67, ATerm d_67, ATerm t)
{
  ATerm v_74 = t;
  int x_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_87 = NULL,b_87 = NULL,d_87 = NULL;
      t = term_c_36;
      d_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_36, c_67);
      t = d_15(d_87, c_67, t);
      t = term_c_36;
      a_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_36, c_67);
      t = lookup_table_0_1(a_87, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          b_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_15(c_67, b_87, t);
      t = (ATerm) ATmakeAppl(sym__2, term_c_36, c_67);
      LocalPopChoice(x_74);
    }
  else
    {
      t = v_74;
      t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
      t = i_15(c_67, d_67, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  static ATerm d_88 (ATerm t);
  static ATerm d_88 (ATerm t)
  {
    ATerm z_87 = NULL,b_88 = NULL,c_88 = NULL;
    c_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_87 = ATgetFirst((ATermList) t);
        b_88 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_43 = NULL,g_44 = NULL,g_19 = NULL;
          t = SSLgetAnnotations(c_88);
          y_43 = t;
          t = b_88;
          t = d_88(t);
          g_44 = t;
          t = (ATerm) ATinsert(CheckATermList(g_44), z_87);
          g_19 = t;
          t = SSLsetAnnotations(g_19, y_43);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_88;
        t = n_109(t);
      }
    return(t);
  }
  t = d_88(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_87 = NULL,h_87 = NULL,i_87 = NULL;
  f_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_87;
    }
  else
    {
      static ATerm j_30 (ATerm t);
      static ATerm j_30 (ATerm t)
      {
        t = not_null(i_87);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_87 = ATgetFirst((ATermList) t);
          if(((i_87 != NULL) && (i_87 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_87;
      t = at_end_1_0(j_30, t);
    }
  return(t);
}
static ATerm x_88 (ATerm k_88, ATerm t)
{
  ATerm m_88 = NULL;
  t = SSL_explode_term(k_88);
  if(match_cons(t, sym__2))
    {
      ATerm z_74 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_74) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_88;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_88 = NULL,r_88 = NULL,s_88 = NULL;
  s_88 = t;
  if(match_cons(t, sym__2))
    {
      o_88 = ATgetArgument(t, 0);
      r_88 = ATgetArgument(t, 1);
      {
        ATerm b_75 = t;
        int c_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_30 (ATerm t);
            static ATerm k_30 (ATerm t)
            {
              t = r_88;
              return(t);
            }
            t = o_88;
            t = at_end_1_0(k_30, t);
            LocalPopChoice(c_75);
          }
        else
          {
            t = b_75;
            t = x_88(s_88, t);
          }
      }
    }
  else
    {
      t = x_88(s_88, t);
    }
  return(t);
}
static ATerm a_15 (ATerm g_67, ATerm h_67, ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL;
  t = g_67;
  {
    ATerm d_75 = t;
    int e_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_89 = NULL;
        t = term_c_36;
        d_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_36, g_67);
        t = d_15(d_89, g_67, t);
        LocalPopChoice(e_75);
      }
    else
      {
        t = d_75;
        t = (ATerm) ATempty;
      }
  }
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_88, h_67);
  t = conc_0_0(t);
  y_88 = t;
  t = term_c_36;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, g_67, y_88);
  t = lookup_table_0_1(a_89, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(g_67, y_88, b_89, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, g_67, y_88);
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm f_89 = NULL;
  f_89 = t;
  if(match_string(t, "-o"))
    {
      t = f_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_89;
    }
  return(t);
}
static ATerm t_30 (ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL;
  g_89 = t;
  t = term_n_36;
  h_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_36, g_89);
  t = i_15(h_89, g_89, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_89);
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = term_f_75;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_30, t_30, u_30, t);
  return(t);
}
static ATerm v_30 (ATerm t)
{
  ATerm j_89 = NULL;
  j_89 = t;
  if(match_string(t, "-i"))
    {
      t = j_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_89;
    }
  return(t);
}
static ATerm w_30 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL;
  k_89 = t;
  t = term_n_54;
  l_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_54, k_89);
  t = i_15(l_89, k_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_89);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  t = term_g_75;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_30, w_30, x_30, t);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  ATerm t_89 = NULL;
  t_89 = t;
  if(match_string(t, "-I"))
    {
      t = t_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = t_89;
    }
  return(t);
}
static ATerm z_30 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  t = term_x_59;
  v_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_89), term_x_59);
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_59, (ATerm) ATinsert(ATinsert(ATempty, u_89), term_x_59));
  t = a_15(v_89, w_89, t);
  t = term_v_37;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_h_75;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm x_89 = NULL;
  x_89 = t;
  if(match_string(t, "--main"))
    {
      t = x_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = x_89;
    }
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL;
  y_89 = t;
  t = term_q_57;
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_57, y_89);
  t = i_15(z_89, y_89, t);
  t = term_v_37;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_i_75;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  if(match_string(t, "--library"))
    {
      t = a_90;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = a_90;
    }
  return(t);
}
static ATerm j_31 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL;
  t = term_w_38;
  b_90 = t;
  t = term_v_37;
  c_90 = t;
  t = term_j_75;
  t = i_15(b_90, c_90, t);
  t = term_v_37;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  t = term_k_75;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  t = term_s_38;
  e_90 = t;
  t = (ATerm) ATinsert(ATempty, d_90);
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_38, (ATerm) ATinsert(ATempty, d_90));
  t = a_15(e_90, f_90, t);
  t = term_v_37;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  t = term_l_75;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  t = term_g_37;
  h_90 = t;
  t = (ATerm) ATinsert(ATempty, g_90);
  i_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_37, (ATerm) ATinsert(ATempty, g_90));
  t = y_14(h_90, i_90, t);
  t = term_v_37;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  t = term_n_75;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_31 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL;
  j_90 = t;
  t = term_p_75;
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_75, j_90);
  t = j_15(n_90, j_90, t);
  k_90 = t;
  t = term_r_36;
  l_90 = t;
  t = (ATerm) ATinsert(ATempty, k_90);
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, (ATerm) ATinsert(ATempty, k_90));
  t = y_14(l_90, m_90, t);
  t = term_v_37;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  t = term_r_75;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm o_90 = NULL,r_90 = NULL;
  t = term_k_37;
  o_90 = t;
  t = term_v_37;
  r_90 = t;
  t = term_s_75;
  t = i_15(o_90, r_90, t);
  t = term_v_37;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  t = term_t_75;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL;
  t = term_p_59;
  s_90 = t;
  t = term_v_37;
  t_90 = t;
  t = term_u_75;
  t = i_15(s_90, t_90, t);
  t = term_v_37;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_v_75;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL;
  t = term_z_54;
  w_90 = t;
  t = term_v_37;
  x_90 = t;
  t = term_w_75;
  t = i_15(w_90, x_90, t);
  t = term_v_37;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_x_75;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm y_90 = NULL,z_90 = NULL,a_91 = NULL;
  y_90 = t;
  t = SSL_string_to_int(y_90);
  z_90 = t;
  t = term_m_41;
  a_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_41, z_90);
  t = i_15(a_91, z_90, t);
  t = term_v_37;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_y_75;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  d_91 = t;
  t = SSL_string_to_int(d_91);
  e_91 = t;
  t = term_y_41;
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_41, e_91);
  t = i_15(f_91, e_91, t);
  t = term_v_37;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_z_75;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL;
  t = term_d_44;
  g_91 = t;
  t = term_v_37;
  h_91 = t;
  t = term_a_76;
  t = z_14(g_91, h_91, t);
  t = term_v_37;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_b_76;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm i_91 = NULL,l_91 = NULL;
  i_91 = t;
  if(match_string(t, "old"))
    {
      t = i_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = i_91;
    }
  t = term_u_55;
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_55, i_91);
  t = i_15(l_91, i_91, t);
  t = term_v_37;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_c_76;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm n_91 = NULL;
  n_91 = t;
  if(match_string(t, "-h"))
    {
      t = n_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = n_91;
    }
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm q_91 = NULL,r_91 = NULL;
  t = term_d_76;
  q_91 = t;
  t = term_v_37;
  r_91 = t;
  t = term_e_76;
  t = i_15(q_91, r_91, t);
  t = term_v_37;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_f_76;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_33 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL;
  t = term_g_76;
  s_91 = t;
  t = term_v_37;
  t_91 = t;
  t = term_i_76;
  t = i_15(s_91, t_91, t);
  t = term_v_37;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_k_76;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  ATerm u_91 = NULL;
  u_91 = t;
  if(match_string(t, "-v"))
    {
      t = u_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = u_91;
    }
  return(t);
}
static ATerm h_33 (ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL;
  t = term_n_76;
  v_91 = t;
  t = term_v_37;
  w_91 = t;
  t = term_o_76;
  t = i_15(v_91, w_91, t);
  t = term_v_37;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  t = term_p_76;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  ATerm x_91 = NULL;
  x_91 = t;
  if(match_string(t, "--warning"))
    {
      t = x_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = x_91;
    }
  return(t);
}
static ATerm m_33 (ATerm t)
{
  ATerm y_91 = NULL;
  y_91 = t;
  {
    ATerm r_76 = t;
    int s_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_91 = NULL,a_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,k_19 = NULL;
        t = term_c_36;
        d_92 = t;
        t = term_q_54;
        e_92 = t;
        t = term_r_54;
        t = d_15(d_92, e_92, t);
        i_92 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_92 = ATgetFirst((ATermList) t);
            h_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_92);
        f_92 = t;
        t = g_92;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = h_92;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_92), g_92);
        k_19 = t;
        t = SSLsetAnnotations(k_19, f_92);
        t = term_q_54;
        z_91 = t;
        t = (ATerm) ATinsert(ATempty, y_91);
        a_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATempty, y_91));
        t = i_15(z_91, a_92, t);
        LocalPopChoice(s_76);
      }
    else
      {
        t = r_76;
        {
          ATerm j_92 = NULL,k_92 = NULL;
          t = term_q_54;
          j_92 = t;
          t = (ATerm) ATinsert(ATempty, y_91);
          k_92 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATempty, y_91));
          t = y_14(j_92, k_92, t);
        }
      }
  }
  t = term_v_37;
  return(t);
}
static ATerm o_33 (ATerm t)
{
  t = term_t_76;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_33 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  t = term_o_55;
  m_92 = t;
  t = term_s_39;
  n_92 = t;
  t = term_u_76;
  t = i_15(m_92, n_92, t);
  t = l_92;
  return(t);
}
static ATerm t_33 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm w_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_33 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL;
  o_92 = t;
  t = term_r_55;
  p_92 = t;
  t = term_x_35;
  q_92 = t;
  t = term_v_76;
  t = i_15(p_92, q_92, t);
  t = o_92;
  return(t);
}
static ATerm y_33 (ATerm t)
{
  t = term_r_55;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_34 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL;
  t = term_i_60;
  s_92 = t;
  t = term_v_37;
  t_92 = t;
  t = term_w_76;
  t = i_15(s_92, t_92, t);
  t = term_v_37;
  return(t);
}
static ATerm g_34 (ATerm t)
{
  t = term_x_76;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm y_76 = t;
  int z_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_76);
    }
  else
    {
      t = y_76;
      {
        ATerm a_77 = t;
        int b_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_77);
          }
        else
          {
            t = a_77;
            {
              ATerm c_77 = t;
              int d_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(y_30, z_30, a_31, t);
                  LocalPopChoice(d_77);
                }
              else
                {
                  t = c_77;
                  {
                    ATerm f_77 = t;
                    int h_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(b_31, c_31, f_31, t);
                        LocalPopChoice(h_77);
                      }
                    else
                      {
                        t = f_77;
                        {
                          ATerm j_77 = t;
                          int k_77 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(g_31, j_31, k_31, t);
                              LocalPopChoice(k_77);
                            }
                          else
                            {
                              t = j_77;
                              {
                                ATerm l_77 = t;
                                int p_77 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_31, m_31, o_31, t);
                                    LocalPopChoice(p_77);
                                  }
                                else
                                  {
                                    t = l_77;
                                    {
                                      ATerm q_77 = t;
                                      int v_77 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_31, q_31, r_31, t);
                                          LocalPopChoice(v_77);
                                        }
                                      else
                                        {
                                          t = q_77;
                                          {
                                            ATerm w_77 = t;
                                            int x_77 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(s_31, t_31, y_31, t);
                                                LocalPopChoice(x_77);
                                              }
                                            else
                                              {
                                                t = w_77;
                                                {
                                                  ATerm y_77 = t;
                                                  int z_77 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(a_32, b_32, d_32, t);
                                                      LocalPopChoice(z_77);
                                                    }
                                                  else
                                                    {
                                                      t = y_77;
                                                      {
                                                        ATerm a_78 = t;
                                                        int c_78 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(e_32, f_32, g_32, t);
                                                            LocalPopChoice(c_78);
                                                          }
                                                        else
                                                          {
                                                            t = a_78;
                                                            {
                                                              ATerm f_78 = t;
                                                              int g_78 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(h_32, i_32, k_32, t);
                                                                  LocalPopChoice(g_78);
                                                                }
                                                              else
                                                                {
                                                                  t = f_78;
                                                                  {
                                                                    ATerm h_78 = t;
                                                                    int i_78 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(l_32, m_32, n_32, t);
                                                                        LocalPopChoice(i_78);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_78;
                                                                        {
                                                                          ATerm j_78 = t;
                                                                          int k_78 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(o_32, q_32, r_32, t);
                                                                              LocalPopChoice(k_78);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_78;
                                                                              {
                                                                                ATerm l_78 = t;
                                                                                int m_78 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(s_32, t_32, u_32, t);
                                                                                    LocalPopChoice(m_78);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_78;
                                                                                    {
                                                                                      ATerm n_78 = t;
                                                                                      int o_78 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(v_32, x_32, y_32, t);
                                                                                          LocalPopChoice(o_78);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = n_78;
                                                                                          {
                                                                                            ATerm q_78 = t;
                                                                                            int r_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = verbose_option_0_0(t);
                                                                                                LocalPopChoice(r_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_78;
                                                                                                {
                                                                                                  ATerm t_78 = t;
                                                                                                  int u_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(z_32, a_33, c_33, t);
                                                                                                      LocalPopChoice(u_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_78;
                                                                                                      {
                                                                                                        ATerm w_78 = t;
                                                                                                        int x_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(d_33, e_33, f_33, t);
                                                                                                            LocalPopChoice(x_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = w_78;
                                                                                                            {
                                                                                                              ATerm d_79 = t;
                                                                                                              int e_79 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(g_33, h_33, i_33, t);
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
                                                                                                                        t = ArgOption_3_0(l_33, m_33, o_33, t);
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
                                                                                                                              t = Option_3_0(p_33, s_33, t_33, t);
                                                                                                                              LocalPopChoice(i_79);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_79;
                                                                                                                              {
                                                                                                                                ATerm j_79 = t;
                                                                                                                                int k_79 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(w_33, x_33, y_33, t);
                                                                                                                                    LocalPopChoice(k_79);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = j_79;
                                                                                                                                    t = Option_3_0(d_34, e_34, g_34, t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm b_15 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm u_92 = NULL;
  t = SSL_hashtable_remove(n_61, m_61);
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_92);
  return(t);
}
static ATerm c_15 (ATerm r_61, ATerm t)
{
  ATerm v_92 = NULL;
  t = SSL_hashtable_destroy(r_61);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_92);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,a_93 = NULL,b_93 = NULL;
  w_92 = t;
  t = table_hashtable_0_0(t);
  x_92 = t;
  t = lookup_table_0_1(w_92, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_15(b_93, t);
  t = x_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15(w_92, a_93, t);
  t = w_92;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_80), term_v_66), term_l_80), term_h_80), term_e_80), term_v_66), term_c_80), term_b_80), term_z_79), term_y_79), term_v_79), term_r_79), term_p_79), term_o_79), term_n_79);
  return(t);
}
ATerm map_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  static ATerm c_94 (ATerm t);
  static ATerm c_94 (ATerm t)
  {
    ATerm x_93 = NULL,y_93 = NULL,a_94 = NULL;
    x_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_93;
      }
    else
      {
        ATerm w_44 = NULL,z_44 = NULL,a_45 = NULL,m_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_93 = ATgetFirst((ATermList) t);
            a_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_93);
        w_44 = t;
        t = y_93;
        t = w_108(t);
        z_44 = t;
        t = a_94;
        t = c_94(t);
        a_45 = t;
        t = (ATerm) ATinsert(CheckATermList(a_45), z_44);
        m_19 = t;
        t = SSLsetAnnotations(m_19, w_44);
      }
    return(t);
  }
  t = c_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_94 = ATgetFirst((ATermList) t);
      l_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_94 = NULL,v_94 = NULL;
        static ATerm m_34 (ATerm t);
        static ATerm m_34 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_94)), not_null(v_94));
          return(t);
        }
        t = l_94;
        t = l_0(t);
        if(((u_94 != NULL) && (u_94 != t)))
          _fail(t);
        else
          u_94 = t;
        t = k_94;
        t = j_0(t);
        if(((v_94 != NULL) && (v_94 != t)))
          _fail(t);
        else
          v_94 = t;
        t = l_94;
        t = reverse_acc_2_0(j_0, m_34, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_37;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_94 = NULL;
  t = term_v_37;
  t = h_0(t);
  w_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_81), w_94), term_b_81), term_v_66), term_x_80), term_v_66), term_q_80), term_p_80), term_v_66), term_o_80);
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm u_95 = NULL;
  u_95 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_95), term_d_81);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_95 = NULL,e_95 = NULL,f_95 = NULL;
  ATerm e_81 = t;
  int f_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_95 = NULL,l_95 = NULL;
      t = term_c_36;
      k_95 = t;
      t = term_g_81;
      l_95 = t;
      t = term_i_81;
      t = d_15(k_95, l_95, t);
      c_95 = t;
      LocalPopChoice(f_81);
    }
  else
    {
      t = e_81;
      {
        static ATerm p_34 (ATerm t);
        static ATerm p_34 (ATerm t)
        {
          ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,q_19 = NULL;
          o_95 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_95 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_95);
          m_95 = t;
          t = n_95;
          if(((c_95 != NULL) && (c_95 != t)))
            _fail(t);
          else
            c_95 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_95);
          q_19 = t;
          t = SSLsetAnnotations(q_19, m_95);
          return(t);
        }
        t = fetch_1_0(p_34, t);
      }
    }
  {
    ATerm j_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_34 (ATerm t);
        static ATerm q_34 (ATerm t)
        {
          t = not_null(c_95);
          return(t);
        }
        t = short_description_1_0(q_34, t);
        t = echo_0_0(t);
        LocalPopChoice(k_81);
      }
    else
      {
        t = j_81;
      }
  }
  t = term_l_81;
  t = echo_0_0(t);
  t = term_s_73;
  e_95 = t;
  t = term_t_73;
  f_95 = t;
  t = term_m_81;
  t = d_15(e_95, f_95, t);
  t = reverse_acc_2_0(_id, s_34, t);
  t = map_1_0(v_34, t);
  {
    ATerm q_81 = t;
    int s_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_95 = NULL;
        static ATerm w_34 (ATerm t);
        static ATerm w_34 (ATerm t)
        {
          t = not_null(c_95);
          return(t);
        }
        t = long_description_1_0(w_34, t);
        w_95 = t;
        t = (ATerm) ATinsert(CheckATermList(w_95), term_v_66);
        t = echo_0_0(t);
        LocalPopChoice(s_81);
      }
    else
      {
        t = q_81;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  static ATerm t_97 (ATerm t);
  static ATerm t_97 (ATerm t)
  {
    ATerm o_97 = NULL,r_97 = NULL,s_97 = NULL;
    o_97 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_97 = ATgetFirst((ATermList) t);
        s_97 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_81 = t;
      int y_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_45 = NULL,t_45 = NULL,y_19 = NULL;
          t = SSLgetAnnotations(o_97);
          p_45 = t;
          t = r_97;
          t = g_109(t);
          t_45 = t;
          t = (ATerm) ATinsert(CheckATermList(s_97), t_45);
          y_19 = t;
          t = SSLsetAnnotations(y_19, p_45);
          LocalPopChoice(y_81);
        }
      else
        {
          t = t_81;
          {
            ATerm i_46 = NULL,o_46 = NULL,z_19 = NULL;
            t = SSLgetAnnotations(o_97);
            i_46 = t;
            t = s_97;
            t = t_97(t);
            o_46 = t;
            t = (ATerm) ATinsert(CheckATermList(o_46), r_97);
            z_19 = t;
            t = SSLsetAnnotations(z_19, i_46);
          }
        }
    }
    return(t);
  }
  t = t_97(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,b_98 = NULL;
  z_97 = t;
  {
    ATerm d_82 = t;
    int e_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_97;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_82 = ATgetFirst((ATermList) t);
                ATerm g_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_97;
          }
        LocalPopChoice(e_82);
      }
    else
      {
        t = d_82;
        t = (ATerm) ATinsert(ATempty, z_97);
      }
  }
  a_98 = t;
  t = term_y_37;
  b_98 = t;
  t = SSL_printnl(b_98, a_98);
  t = z_97;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL;
  t = term_c_36;
  h_98 = t;
  t = term_g_81;
  i_98 = t;
  t = term_i_81;
  t = d_15(h_98, i_98, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_35 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL;
  t = term_i_82;
  j_98 = t;
  t = term_v_37;
  k_98 = t;
  t = term_j_82;
  t = i_15(j_98, k_98, t);
  return(t);
}
static ATerm e_35 (ATerm t)
{
  t = term_l_82;
  return(t);
}
static ATerm f_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_35 (ATerm t)
{
  ATerm n_98 = NULL,p_98 = NULL,q_98 = NULL,t_98 = NULL;
  t = term_i_82;
  q_98 = t;
  t = term_v_37;
  t_98 = t;
  t = term_j_82;
  t = i_15(q_98, t_98, t);
  t = term_n_76;
  n_98 = t;
  t = term_v_37;
  p_98 = t;
  t = term_o_76;
  t = i_15(n_98, p_98, t);
  t = term_y_82;
  return(t);
}
static ATerm h_35 (ATerm t)
{
  t = term_z_82;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_83 = t;
  int e_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_35, d_35, e_35, t);
      LocalPopChoice(e_83);
    }
  else
    {
      t = d_83;
      t = Option_3_0(f_35, g_35, h_35, t);
    }
  return(t);
}
static ATerm e_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm y_98 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm i_83 = t;
    int j_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_83 = ATgetArgument(t, 0);
            ATerm l_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = d_15(p_56, q_56, t);
        LocalPopChoice(j_83);
      }
    else
      {
        t = i_83;
        t = (ATerm) ATempty;
      }
  }
  b_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(b_99), o_56));
  t = lookup_table_0_1(p_56, t);
  e_99 = t;
  t = (ATerm) ATinsert(CheckATermList(b_99), o_56);
  c_99 = t;
  t = e_99;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(q_56, c_99, d_99, t);
  t = y_98;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_99 = NULL,p_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL;
      t = term_v_37;
      t = g_0(t);
      q_99 = t;
      t = term_s_73;
      r_99 = t;
      t = term_t_73;
      s_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_73, term_t_73, q_99);
      t = e_15(r_99, s_99, q_99, t);
      _fail(t);
    }
  else
    {
      ATerm x_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_99 = ATgetFirst((ATermList) t);
          p_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_99;
      t = d_0(t);
      t = term_v_37;
      t = f_0(t);
      x_99 = t;
      t = (ATerm) ATinsert(CheckATermList(p_99), x_99);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm t)
{
  ATerm y_99 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL,f_100 = NULL,c_20 = NULL;
  f_100 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_100 = ATgetFirst((ATermList) t);
      c_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_100);
  y_99 = t;
  t = b_100;
  t = m_77(t);
  d_100 = t;
  t = c_100;
  t = n_77(t);
  e_100 = t;
  t = (ATerm) ATinsert(CheckATermList(e_100), d_100);
  c_20 = t;
  t = SSLsetAnnotations(c_20, y_99);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,m_100 = NULL,o_100 = NULL,t_100 = NULL,v_100 = NULL,i_20 = NULL;
  k_100 = t;
  {
    ATerm m_83 = t;
    int n_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_83;
        t = s_130(t);
        LocalPopChoice(n_83);
      }
    else
      {
        t = m_83;
      }
  }
  t = k_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_100 = ATgetFirst((ATermList) t);
      o_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_100);
  l_100 = t;
  t = term_g_81;
  v_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_81, m_100);
  t = i_15(v_100, m_100, t);
  t = o_100;
  {
    static ATerm n_102 (ATerm t);
    static ATerm n_102 (ATerm t)
    {
      ATerm p_83 = t;
      int q_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_83 = t;
          int s_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_101 = NULL;
              n_101 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_101;
              LocalPopChoice(s_83);
            }
          else
            {
              t = r_83;
              t = s_130(t);
              t = Cons_2_0(_id, n_102, t);
            }
          LocalPopChoice(q_83);
        }
      else
        {
          t = p_83;
          {
            ATerm z_101 = NULL,b_102 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_101 = ATgetFirst((ATermList) t);
                b_102 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_102), (ATerm) ATmakeAppl(sym_Undefined_1, z_101));
          }
        }
      return(t);
    }
    t = n_102(t);
  }
  t_100 = t;
  t = (ATerm) ATinsert(CheckATermList(t_100), (ATerm) ATmakeAppl(sym_Program_1, m_100));
  i_20 = t;
  t = SSLsetAnnotations(i_20, l_100);
  return(t);
}
static ATerm k_35 (ATerm t)
{
  ATerm t_103 = NULL;
  t_103 = t;
  if(match_string(t, "--help"))
    {
      t = t_103;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_103;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_103;
        }
    }
  return(t);
}
static ATerm l_35 (ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL;
  t = term_d_76;
  u_103 = t;
  t = term_v_37;
  v_103 = t;
  t = term_e_76;
  t = i_15(u_103, v_103, t);
  t = term_w_83;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_x_83;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,r_103 = NULL;
  i_103 = t;
  t = term_s_73;
  j_103 = t;
  t = term_c_84;
  t = lookup_table_0_1(j_103, t);
  r_103 = t;
  t = term_t_73;
  m_103 = t;
  t = (ATerm) ATempty;
  n_103 = t;
  t = r_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(m_103, n_103, o_103, t);
  t = i_103;
  {
    static ATerm j_35 (ATerm t);
    static ATerm j_35 (ATerm t)
    {
      ATerm j_84 = t;
      int k_84 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_130(t);
          LocalPopChoice(k_84);
        }
      else
        {
          t = j_84;
          {
            ATerm l_84 = t;
            int m_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_35, l_35, m_35, t);
                LocalPopChoice(m_84);
              }
            else
              {
                t = l_84;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_35, t);
  }
  {
    ATerm o_84 = t;
    int p_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL;
        p_104 = t;
        {
          ATerm q_84 = t;
          int r_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_47 = NULL;
              t = p_104;
              {
                ATerm s_84 = t;
                int x_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_47 = NULL,h_47 = NULL;
                    t = term_c_36;
                    g_47 = t;
                    t = term_d_76;
                    h_47 = t;
                    t = term_a_85;
                    t = d_15(g_47, h_47, t);
                    LocalPopChoice(x_84);
                  }
                else
                  {
                    t = s_84;
                    t = fetch_1_0(o_35, t);
                  }
              }
              t = p_104;
              t = default_system_usage_0_0(t);
              t = term_x_35;
              e_47 = t;
              t = SSL_exit(e_47);
              LocalPopChoice(r_84);
            }
          else
            {
              t = q_84;
              {
                ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
                t = term_c_36;
                m_47 = t;
                t = term_i_82;
                n_47 = t;
                t = term_b_85;
                t = d_15(m_47, n_47, t);
                t = p_104;
                t = default_system_about_0_0(t);
                t = term_x_35;
                l_47 = t;
                t = SSL_exit(l_47);
              }
            }
        }
        LocalPopChoice(p_84);
      }
    else
      {
        t = o_84;
        {
          ATerm f_85 = t;
          int g_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL;
              static ATerm p_35 (ATerm t);
              static ATerm p_35 (ATerm t)
              {
                ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL,m_20 = NULL;
                x_104 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_104 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_104);
                v_104 = t;
                t = w_104;
                if(((g_103 != NULL) && (g_103 != t)))
                  _fail(t);
                else
                  g_103 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_104);
                m_20 = t;
                t = SSLsetAnnotations(m_20, v_104);
                return(t);
              }
              t = fetch_1_0(p_35, t);
              t = term_h_36;
              t_104 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_103)), term_h_85);
              u_104 = t;
              t = SSL_printnl(t_104, u_104);
              t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_103)), term_h_85));
              t = default_system_usage_0_0(t);
              t = term_s_39;
              s_104 = t;
              t = SSL_exit(s_104);
              LocalPopChoice(g_85);
            }
          else
            {
              t = f_85;
            }
        }
      }
  }
  h_103 = t;
  t = term_s_73;
  t = table_destroy_0_0(t);
  t = h_103;
  return(t);
}
static ATerm g_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm f_105 = NULL;
  t = SSL_hashtable_put(j_61, h_61, i_61);
  f_105 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_105);
  return(t);
}
static ATerm h_15 (ATerm k_61, ATerm l_61, ATerm t)
{
  t = SSL_hashtable_get(l_61, k_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm h_105 = NULL;
  t = SSL_hashtable_create(p_61, q_61);
  h_105 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_105);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_105 = NULL,l_105 = NULL,m_105 = NULL,o_105 = NULL,p_105 = NULL;
  i_105 = t;
  t = term_i_85;
  o_105 = t;
  t = term_j_85;
  p_105 = t;
  t = i_105;
  t = new_hashtable_0_2(o_105, p_105, t);
  l_105 = t;
  t = i_105;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(i_105, l_105, m_105, t);
  t = i_105;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_105 = NULL;
  t = SSL_table_hashtable();
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_105);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm z_105 = NULL;
  t = table_hashtable_0_0(t);
  z_105 = t;
  {
    ATerm k_85 = t;
    int l_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL;
        t = z_105;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_15(b_58, s_47, t);
        LocalPopChoice(l_85);
      }
    else
      {
        t = k_85;
        {
          ATerm z_47 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = z_105;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_15(b_58, z_47, t);
        }
      }
  }
  return(t);
}
static ATerm i_15 (ATerm z_66, ATerm a_67, ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL;
  t = term_c_36;
  g_106 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, z_66, a_67);
  t = lookup_table_0_1(g_106, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(z_66, a_67, h_106, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, z_66, a_67);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm r_106 = NULL,u_106 = NULL;
  u_106 = t;
  t = SSL_explode_string(u_106);
  {
    ATerm m_85 = t;
    int o_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_108 (ATerm t);
        static ATerm b_108 (ATerm t)
        {
          ATerm w_107 = NULL,x_107 = NULL,z_107 = NULL;
          w_107 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_107 = ATgetFirst((ATermList) t);
              z_107 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_85 = t;
            int v_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_48 = NULL,s_48 = NULL,t_20 = NULL;
                t = SSLgetAnnotations(w_107);
                p_48 = t;
                t = z_107;
                t = b_108(t);
                s_48 = t;
                t = (ATerm) ATinsert(CheckATermList(s_48), x_107);
                t_20 = t;
                t = SSLsetAnnotations(t_20, p_48);
                LocalPopChoice(v_85);
              }
            else
              {
                t = q_85;
                {
                  ATerm c_49 = NULL,u_20 = NULL;
                  t = SSLgetAnnotations(w_107);
                  c_49 = t;
                  t = x_107;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, x_107);
                  u_20 = t;
                  t = SSLsetAnnotations(u_20, c_49);
                }
              }
          }
          return(t);
        }
        t = b_108(t);
        LocalPopChoice(o_85);
      }
    else
      {
        t = m_85;
        t = (ATerm) ATempty;
      }
  }
  r_106 = t;
  t = SSL_implode_string(r_106);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm j_15 (ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSL_strcat(y_38, z_38);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,o_108 = NULL,q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,v_108 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL,f_109 = NULL,l_109 = NULL,m_109 = NULL,d_110 = NULL,f_110 = NULL,h_110 = NULL,t_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,a_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,j_111 = NULL,k_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,v_111 = NULL;
  h_108 = t;
  t = term_j_66;
  s_111 = t;
  t = term_x_85;
  v_111 = t;
  t = term_y_85;
  t = i_15(s_111, v_111, t);
  t = term_d_36;
  q_111 = t;
  t = term_s_39;
  r_111 = t;
  t = term_z_85;
  t = i_15(q_111, r_111, t);
  t = term_m_41;
  o_111 = t;
  t = term_x_35;
  p_111 = t;
  t = term_a_86;
  t = i_15(o_111, p_111, t);
  t = term_y_41;
  k_111 = t;
  t = term_w_48;
  n_111 = t;
  t = term_b_86;
  t = i_15(k_111, n_111, t);
  t = term_x_59;
  f_111 = t;
  t = (ATerm) ATempty;
  j_111 = t;
  t = term_j_86;
  t = i_15(f_111, j_111, t);
  t = term_s_38;
  d_111 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_86), term_k_86);
  e_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_38, (ATerm) ATinsert(ATinsert(ATempty, term_l_86), term_k_86));
  t = i_15(d_111, e_111, t);
  t = term_n_86;
  t = xtc_find_path_0_0(t);
  c_109 = t;
  t = term_t_86;
  a_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_109, term_t_86);
  t = j_15(c_109, a_111, t);
  q_108 = t;
  t = term_n_86;
  t = xtc_find_path_0_0(t);
  v_108 = t;
  t = term_t_86;
  x_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_108, term_t_86);
  t = j_15(v_108, x_110, t);
  r_108 = t;
  t = term_u_86;
  t = xtc_find_path_0_0(t);
  t_108 = t;
  t = term_t_86;
  w_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_108, term_t_86);
  t = j_15(t_108, w_110, t);
  s_108 = t;
  t = term_g_37;
  t_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_108), term_x_59), r_108), term_x_59), q_108), term_x_59);
  v_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_37, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_108), term_x_59), r_108), term_x_59), q_108), term_x_59));
  t = i_15(t_110, v_110, t);
  t = term_n_86;
  t = xtc_find_path_0_0(t);
  o_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_86), o_108), term_p_75);
  h_110 = t;
  t = SSL_concat_strings(h_110);
  i_108 = t;
  t = term_u_86;
  t = xtc_find_path_0_0(t);
  k_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_86), k_108), term_p_75);
  f_110 = t;
  t = SSL_concat_strings(f_110);
  j_108 = t;
  t = term_r_36;
  m_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_87), term_g_87), j_108), term_e_87), term_c_87), i_108);
  d_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_87), term_g_87), j_108), term_e_87), term_c_87), i_108));
  t = i_15(m_109, d_110, t);
  t = term_u_55;
  f_109 = t;
  t = term_k_87;
  l_109 = t;
  t = term_l_87;
  t = i_15(f_109, l_109, t);
  t = term_q_54;
  d_109 = t;
  t = (ATerm) ATinsert(ATempty, term_m_87);
  e_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_54, (ATerm) ATinsert(ATempty, term_m_87));
  t = i_15(d_109, e_109, t);
  t = h_108;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,j_113 = NULL;
  e_113 = t;
  t = term_c_36;
  f_113 = t;
  t = term_n_54;
  j_113 = t;
  t = term_n_87;
  t = d_15(f_113, j_113, t);
  t = debug_1_0(r_35, t);
  t = e_113;
  return(t);
}
static ATerm r_35 (ATerm t)
{
  t = term_o_87;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm p_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_111 = NULL,a_112 = NULL,d_112 = NULL,e_112 = NULL,h_112 = NULL;
        t = term_c_36;
        e_112 = t;
        t = term_g_76;
        h_112 = t;
        t = term_r_87;
        t = d_15(e_112, h_112, t);
        t = term_s_87;
        t = xtc_find_0_0(t);
        z_111 = t;
        t = term_y_37;
        d_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_111, term_y_37);
        t = m_14(z_111, d_112, t);
        t = term_x_35;
        a_112 = t;
        t = SSL_exit(a_112);
        LocalPopChoice(q_87);
      }
    else
      {
        t = p_87;
      }
  }
  {
    ATerm t_87 = t;
    int u_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
        t = term_c_36;
        m_112 = t;
        t = term_n_76;
        n_112 = t;
        t = term_v_87;
        t = d_15(m_112, n_112, t);
        t = strc_version_0_0(t);
        t = term_x_35;
        l_112 = t;
        t = SSL_exit(l_112);
        LocalPopChoice(u_87);
      }
    else
      {
        t = t_87;
      }
  }
  {
    ATerm w_87 = t;
    int x_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_112 = NULL,w_112 = NULL,x_112 = NULL;
        s_112 = t;
        t = term_c_36;
        w_112 = t;
        t = term_n_54;
        x_112 = t;
        t = term_n_87;
        t = d_15(w_112, x_112, t);
        t = s_112;
        LocalPopChoice(x_87);
      }
    else
      {
        t = w_87;
        {
          ATerm z_112 = NULL,a_113 = NULL,d_113 = NULL;
          t = term_h_36;
          a_113 = t;
          t = (ATerm) ATinsert(ATempty, term_y_87);
          d_113 = t;
          t = SSL_printnl(a_113, d_113);
          t = term_s_39;
          z_112 = t;
          t = SSL_exit(z_112);
          t = (ATerm) ATinsert(ATempty, term_y_87);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(q_35, t);
  return(t);
}
static ATerm s_35 (ATerm t)
{
  t = if_verbose1_1_0(u_35, t);
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = xtc_temp_files_1_0(v_35, t);
  return(t);
}
static ATerm u_35 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL;
  n_113 = t;
  t = term_h_36;
  o_113 = t;
  t = (ATerm) ATinsert(CheckATermList(n_113), term_a_88);
  p_113 = t;
  t = SSL_printnl(o_113, p_113);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(CheckATermList(n_113), term_a_88));
  return(t);
}
static ATerm v_35 (ATerm t)
{
  ATerm e_88 = t;
  int f_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
      t = term_c_36;
      r_113 = t;
      t = term_n_54;
      s_113 = t;
      t = term_n_87;
      t = d_15(r_113, s_113, t);
      q_113 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_113);
      LocalPopChoice(f_88);
    }
  else
    {
      t = e_88;
      t = term_f_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm w_35 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL;
  t = run_time_0_0(t);
  t_113 = t;
  t = term_h_36;
  u_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_88), t_113), term_g_88);
  v_113 = t;
  t = SSL_printnl(u_113, v_113);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_88), t_113), term_g_88));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm i_88 = t;
  int j_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_113 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(s_35, t_35, t);
      t = if_verbose2_1_0(w_35, t);
      t = term_x_35;
      m_113 = t;
      t = SSL_exit(m_113);
      LocalPopChoice(j_88);
    }
  else
    {
      t = i_88;
      {
        ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL;
        t = run_time_0_0(t);
        w_113 = t;
        t = term_h_36;
        y_113 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_88), w_113), term_l_88);
        z_113 = t;
        t = SSL_printnl(y_113, z_113);
        t = term_s_39;
        x_113 = t;
        t = SSL_exit(x_113);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
