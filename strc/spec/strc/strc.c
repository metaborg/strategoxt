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
Symbol sym_SVar_1;
Symbol sym_SDef_3;
Symbol sym_Path_2;
Symbol sym_Call_2;
Symbol sym_RDef_3;
Symbol sym_Strategies_1;
Symbol sym_Rules_1;
Symbol sym_Specification_1;
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
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
}
ATerm term_q_89;
ATerm term_l_89;
ATerm term_h_89;
ATerm term_b_89;
ATerm term_y_88;
ATerm term_u_88;
ATerm term_p_88;
ATerm term_o_88;
ATerm term_j_88;
ATerm term_i_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_b_88;
ATerm term_a_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_x_87;
ATerm term_w_87;
ATerm term_v_87;
ATerm term_u_87;
ATerm term_t_87;
ATerm term_s_87;
ATerm term_r_87;
ATerm term_p_86;
ATerm term_o_86;
ATerm term_i_86;
ATerm term_h_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_x_85;
ATerm term_w_85;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_n_83;
ATerm term_h_83;
ATerm term_g_83;
ATerm term_s_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_d_82;
ATerm term_h_81;
ATerm term_g_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_x_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_k_80;
ATerm term_j_80;
ATerm term_i_80;
ATerm term_h_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_o_75;
ATerm term_k_75;
ATerm term_i_75;
ATerm term_g_75;
ATerm term_b_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_u_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_d_74;
ATerm term_z_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_l_73;
ATerm term_j_73;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_z_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_o_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_g_71;
ATerm term_d_71;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_g_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_w_67;
ATerm term_u_67;
ATerm term_e_67;
ATerm term_c_67;
ATerm term_a_67;
ATerm term_z_66;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_s_66;
ATerm term_h_64;
ATerm term_g_64;
ATerm term_c_64;
ATerm term_b_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_k_63;
ATerm term_i_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_w_62;
ATerm term_q_62;
ATerm term_r_61;
ATerm term_k_61;
ATerm term_h_61;
ATerm term_e_61;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_f_60;
ATerm term_b_60;
ATerm term_z_59;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_n_59;
ATerm term_h_59;
ATerm term_e_58;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_j_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_c_57;
ATerm term_a_57;
ATerm term_t_56;
ATerm term_q_56;
ATerm term_m_56;
ATerm term_b_56;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_v_53;
ATerm term_p_53;
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
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_g_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_y_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_q_49;
ATerm term_p_49;
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
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
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
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_s_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_b_46;
ATerm term_z_45;
ATerm term_o_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_g_45;
ATerm term_e_45;
ATerm term_c_45;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_u_43;
ATerm term_s_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_h_43;
ATerm term_w_42;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_i_42;
ATerm term_a_42;
ATerm term_q_41;
ATerm term_f_41;
ATerm term_b_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_i_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_k_37;
ATerm term_f_37;
ATerm term_w_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_m_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
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
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_36);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_h_38);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_37);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_40);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_w_40);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_b_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_n_43);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_47, term_z_38, term_u_47);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_47, term_t_35, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_l_39, term_c_48);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_48, term_f_48, term_g_48);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_48, term_j_48, term_k_48);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_48, term_n_48, term_o_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_48, term_r_48, term_s_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_48, term_w_48, term_x_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_48, term_a_49, term_b_49);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_49, term_e_49, term_f_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_i_49, term_j_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_49, term_n_42, term_m_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_p_49, term_q_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_x_49, term_y_49);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_f_50);
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_50, term_k_50, term_l_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_50, term_r_50, term_s_50);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_50, term_v_50, term_y_50);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_51, term_g_51, term_k_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_o_51, term_p_51);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_51, term_u_51, term_x_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_d_52, term_e_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_j_52, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_52, term_o_52, term_p_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_i_45, term_t_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_f_53, term_g_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_y_53);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_g_55);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_55);
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_u_57);
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(sym__2, term_f_57, term_t_56);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_n_59);
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_u_59);
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_60);
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_v_66);
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_71);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(sym__2, term_p_70, term_l_71);
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(sym__2, term_p_70, term_q_70);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_m_35);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_35);
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(sym__2, term_o_72, term_f_37);
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_f_37);
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_f_37);
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym__2, term_n_59, term_f_37);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(sym__2, term_i_54, term_f_37);
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(sym__2, term_n_43, term_f_37);
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(sym__2, term_w_74, term_f_37);
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(sym__2, term_z_74, term_f_37);
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(sym__2, term_i_75, term_f_37);
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(sym__2, term_g_55, term_z_38);
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym__2, term_i_55, term_m_35);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(sym__2, term_f_60, term_f_37);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_x_80));
  term_x_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_81);
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(sym__2, term_i_72, term_j_72);
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(sym__2, term_d_82, term_f_37);
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(sym__3, term_i_72, term_j_72, (ATerm) ATempty);
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_w_74);
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_82);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(sym__2, term_v_66, term_w_85);
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_z_38);
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_m_35);
  ATprotect(&(term_h_86));
  term_h_86 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_f_48);
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(sym__2, term_u_59, (ATerm) ATempty);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_t_87));
  term_t_87 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_x_87));
  term_x_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_b_88);
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_v_53);
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_z_74);
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_75);
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_89));
  term_q_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm f_122 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm h_13 (ATerm f_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm i_13 (ATerm d_23, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm j_13 (ATerm r_54, ATerm q_54, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm g_123 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm j_123 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
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
static ATerm i_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
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
static ATerm m_12 (ATerm t);
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
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm save_as_1_0 (ATerm l_96 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm h_123 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t);
static ATerm n_13 (ATerm i_59, ATerm j_59, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm h_132 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm r_22, ATerm s_22, ATerm t);
ATerm foldr_3_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm q_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm k_123 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm l_123 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm i_123 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm t_105 (ATerm), ATerm t);
static ATerm s_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm a_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm k_13 (ATerm x_22, ATerm y_22, ATerm t);
static ATerm l_13 (ATerm s_24, ATerm t_24, ATerm t);
static ATerm m_13 (ATerm y_104 (ATerm), ATerm k_209, ATerm c_25, ATerm t);
static ATerm p_13 (ATerm t_118 (ATerm), ATerm l_44, ATerm j_44, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm i_131 (ATerm), ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm k_96 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm v_21 (ATerm t);
static ATerm w_21 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm g_122 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm i_116 (ATerm), ATerm t);
static ATerm z_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm q_13 (ATerm t_22, ATerm t);
static ATerm e_22 (ATerm t);
static ATerm h_22 (ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm x_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm o_14 (ATerm z_64, ATerm a_65, ATerm t);
static ATerm r_13 (ATerm l_63, ATerm m_63, ATerm t);
ATerm end_scope_1_0 (ATerm q_118 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm z_26 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_131 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm e_122 (ATerm), ATerm t);
static ATerm t_13 (ATerm x_42, ATerm y_42, ATerm t);
static ATerm v_13 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm w_13 (ATerm i_60, ATerm k_60, ATerm m_60, ATerm o_60, ATerm j_60, ATerm l_60, ATerm n_60, ATerm p_60, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm x_13 (ATerm s_54, ATerm t_54, ATerm t);
static ATerm y_13 (ATerm f_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_122 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm h_122 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm j_122 (ATerm), ATerm t);
static ATerm b_14 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm c_14 (ATerm s_109 (ATerm), ATerm a_31, ATerm z_30, ATerm t);
static ATerm j_27 (ATerm t);
static ATerm d_14 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm t);
static ATerm e_14 (ATerm a_127 (ATerm), ATerm n_64, ATerm m_64, ATerm t);
static ATerm i_14 (ATerm u_39, ATerm v_39, ATerm t);
static ATerm f_73 (ATerm u_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_14 (ATerm y_24, ATerm t);
static ATerm g_14 (ATerm d_40, ATerm e_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_75 (ATerm s_73, ATerm t);
static ATerm h_75 (ATerm y_73, ATerm c_74, ATerm e_74, ATerm t);
static ATerm j_75 (ATerm p_74, ATerm q_74, ATerm r_74, ATerm t);
static ATerm h_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm m_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm o_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_113 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm z_79 (ATerm e_79, ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm r_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm j_14 (ATerm r_58, ATerm q_58, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm s_28 (ATerm t);
static ATerm v_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_14 (ATerm o_58, ATerm p_58, ATerm t);
ATerm at_end_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_83 (ATerm a_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_14 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm j_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm c_30 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm n_30 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm r_30 (ATerm t);
static ATerm s_30 (ATerm t);
static ATerm t_30 (ATerm t);
static ATerm u_30 (ATerm t);
static ATerm v_30 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
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
static ATerm t_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm p_33 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm m_14 (ATerm d_68, ATerm e_68, ATerm t);
static ATerm n_14 (ATerm i_68, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t);
static ATerm v_33 (ATerm t);
static ATerm y_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm q_34 (ATerm t);
static ATerm v_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm p_14 (ATerm g_63, ATerm h_63, ATerm f_63, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_126 (ATerm), ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
ATerm parse_options_1_0 (ATerm w_126 (ATerm), ATerm t);
static ATerm r_14 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t);
static ATerm s_14 (ATerm b_68, ATerm c_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_68, ATerm h_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm s_64, ATerm t);
static ATerm t_14 (ATerm l_58, ATerm m_58, ATerm t);
static ATerm u_14 (ATerm u_38, ATerm v_38, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm e_35 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
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
ATerm foldr_2_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = g_112(t);
    }
  else
    {
      ATerm k_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = foldr_2_0(g_112, h_112, t);
      k_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, k_0);
      t = h_112(t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_13(d_1, g_1, t);
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
      ATerm n_35 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(f_0, i_0, t);
  v_0 = t;
  t = SSL_TicksToSeconds(v_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL,j_1 = NULL,l_1 = NULL;
        t = term_q_35;
        j_1 = t;
        t = term_r_35;
        l_1 = t;
        t = term_s_35;
        t = o_14(j_1, l_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_t_35);
        t = geq_0_0(t);
        t = e_1;
        t = f_122(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = e_1;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  t = term_u_35;
  w_1 = t;
  t = (ATerm) ATinsert(ATempty, term_v_35);
  x_1 = t;
  t = SSL_printnl(w_1, x_1);
  t = v_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  c_2 = t;
  t = term_u_35;
  d_2 = t;
  t = (ATerm) ATinsert(ATempty, c_2);
  e_2 = t;
  t = SSL_printnl(d_2, e_2);
  t = c_2;
  return(t);
}
static ATerm h_13 (ATerm f_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = term_q_35;
        a_2 = t;
        t = term_a_36;
        b_2 = t;
        t = term_b_36;
        t = o_14(a_2, b_2, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_q_35;
  r_1 = t;
  t = term_c_36;
  s_1 = t;
  t = term_d_36;
  t = o_14(r_1, s_1, t);
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(o_1), n_1), term_a_36), f_23));
  t = if_verbose3_1_0(h_1, t);
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_1, q_1);
  {
    static ATerm k_1 (ATerm t);
    static ATerm k_1 (ATerm t)
    {
      ATerm f_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_1, q_1);
      t = n_13(p_1, q_1, t);
      t = term_f_36;
      f_2 = t;
      t = SSL_exit(f_2);
      return(t);
    }
    t = fork_and_wait_1_0(k_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm s_2 = NULL,v_2 = NULL,w_2 = NULL;
  s_2 = t;
  t = term_u_35;
  v_2 = t;
  t = (ATerm) ATinsert(ATempty, term_g_36);
  w_2 = t;
  t = SSL_printnl(v_2, w_2);
  t = s_2;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
  x_2 = t;
  t = term_u_35;
  y_2 = t;
  t = (ATerm) ATinsert(ATempty, x_2);
  z_2 = t;
  t = SSL_printnl(y_2, z_2);
  t = x_2;
  return(t);
}
static ATerm i_13 (ATerm d_23, ATerm t)
{
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(t_1, t);
  k_2 = t;
  t = term_q_35;
  q_2 = t;
  t = term_j_36;
  r_2 = t;
  t = term_k_36;
  t = o_14(q_2, r_2, t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_2), term_a_36), d_23), term_l_36));
  t = conc_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, m_2);
  t = if_verbose3_1_0(y_1, t);
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
  {
    static ATerm z_1 (ATerm t);
    static ATerm z_1 (ATerm t)
    {
      ATerm c_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_2, p_2);
      t = n_13(o_2, p_2, t);
      t = term_f_36;
      c_3 = t;
      t = SSL_exit(c_3);
      return(t);
    }
    t = fork_and_wait_1_0(z_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = if_verbose1_1_0(i_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_13(o_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_13(n_3, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
  k_3 = t;
  t = term_u_35;
  l_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_n_36);
  m_3 = t;
  t = SSL_printnl(l_3, m_3);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(k_3), term_n_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
      f_3 = t;
      t = term_q_35;
      h_3 = t;
      t = term_l_36;
      i_3 = t;
      t = term_w_36;
      t = o_14(h_3, i_3, t);
      t = f_3;
      LocalPopChoice(q_36);
    }
  else
    {
      t = o_36;
      t = profile_p__2_0(g_2, h_2, t);
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
static ATerm j_13 (ATerm r_54, ATerm q_54, ATerm t)
{
  ATerm z_36 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(r_54, q_54);
      LocalPopChoice(c_37);
    }
  else
    {
      t = z_36;
      t = get_errno_0_0(t);
      t = term_f_37;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, r_54, q_54);
      t = x_13(r_54, q_54, t);
      t = SSL_remove(r_54);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = d_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_37;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_4, term_k_37);
        t = x_13(f_4, u_1, t);
        t = SSL_remove(f_4);
        t = term_k_37;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        {
          ATerm l_37 = t;
          int m_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL;
              t = d_4;
              t = x_0(t);
              j_2 = t;
              {
                ATerm n_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_2 = NULL;
                    l_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_2;
                      }
                    else
                      {
                        t = l_2;
                        if((f_4 != t))
                          {
                            _fail(t);
                          }
                        t = l_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_37;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, f_4, j_2);
              t = j_13(f_4, j_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
              LocalPopChoice(m_37);
            }
          else
            {
              t = l_37;
              t = d_4;
              t = x_0(t);
              if((f_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  q_4 = t;
  t = term_t_37;
  n_4 = t;
  t = term_w_37;
  t = xtc_find_0_0(t);
  p_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_y_37);
  o_4 = t;
  t = q_4;
  t = comp_0_2(n_4, o_4, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_5), term_z_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_a_38;
  r_4 = t;
  t = w_4;
  {
    ATerm e_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL,a_5 = NULL;
        t = term_q_35;
        z_4 = t;
        t = term_h_38;
        a_5 = t;
        t = term_i_38;
        t = o_14(z_4, a_5, t);
        t = w_4;
        LocalPopChoice(g_38);
        t = (ATerm) ATinsert(ATempty, term_h_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_q_35;
  x_4 = t;
  t = term_z_37;
  y_4 = t;
  t = term_j_38;
  t = o_14(x_4, y_4, t);
  t = foldr_3_0(t_2, conc_0_0, u_2, t);
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_4), v_4);
  t = concat_0_0(t);
  s_4 = t;
  t = w_4;
  t = comp_0_2(r_4, s_4, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t = term_u_35;
  v_5 = t;
  t = (ATerm) ATinsert(ATempty, term_k_38);
  w_5 = t;
  t = SSL_printnl(v_5, w_5);
  t = u_5;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL;
  d_6 = t;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_6 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,n_0 = NULL;
              t = SSLgetAnnotations(d_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_6);
              n_0 = t;
              t = SSLsetAnnotations(n_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(m_38);
        t = xtc_transform_file_2_0(j_3, q_3, t);
      }
    else
      {
        t = l_38;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(t_3, t);
  t = olevel_2_0(v_3, w_3, t);
  t = olevel_2_0(j_5, k_5, t);
  c_6 = t;
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_7 = ATgetArgument(t, 0);
            {
              ATerm l_4 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(c_6);
              l_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, l_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_6;
          }
        LocalPopChoice(o_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = n_38;
        t = xtc_transform_term_2_0(j_6, t_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  a_6 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_7 = ATgetArgument(t, 0);
            {
              ATerm d_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(a_6);
              d_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_7);
              b_1 = t;
              t = SSLsetAnnotations(b_1, d_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_6;
          }
        LocalPopChoice(q_38);
        t = xtc_transform_file_2_0(v_6, pass_verbose_0_0, t);
      }
    else
      {
        t = p_38;
        t = xtc_transform_term_2_0(x_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(a_7, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  t = term_u_35;
  y_5 = t;
  t = (ATerm) ATinsert(CheckATermList(x_5), term_r_38);
  z_5 = t;
  t = SSL_printnl(y_5, z_5);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(x_5), term_r_38));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_6 = NULL;
  t = pass_verbose_0_0(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(k_6), term_w_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_w_38);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = save_as_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  n_6 = t;
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_6 = ATgetArgument(t, 0);
            {
              ATerm p_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(n_6);
              p_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_6);
              s_0 = t;
              t = SSLsetAnnotations(s_0, p_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_6;
          }
        LocalPopChoice(b_39);
        t = xtc_transform_file_2_0(y_3, c_4, t);
      }
    else
      {
        t = a_39;
        t = xtc_transform_term_2_0(e_4, g_4, t);
      }
  }
  t = if_keep1_1_0(h_4, t);
  m_6 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_7 = ATgetArgument(t, 0);
            {
              ATerm a_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(m_6);
              a_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_7);
              y_0 = t;
              t = SSLsetAnnotations(y_0, a_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_6;
          }
        LocalPopChoice(g_39);
        t = xtc_transform_file_2_0(j_4, m_4, t);
      }
    else
      {
        t = f_39;
        t = xtc_transform_term_2_0(t_4, c_5, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_6 = NULL;
  t = pass_verbose_0_0(t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(y_6), term_w_38);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_w_38);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm l_7 = NULL;
  t = pass_verbose_0_0(t);
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(l_7), term_w_38);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_w_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_l_39;
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
  t = term_m_39;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_7 = NULL;
  t = pass_verbose_0_0(t);
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(u_7), term_w_38);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_w_38);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = get_outfile_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(a_3, t);
  t = profile_p__2_0(d_3, e_3, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  t = term_u_35;
  k_9 = t;
  t = (ATerm) ATinsert(ATempty, term_q_39);
  l_9 = t;
  t = SSL_printnl(k_9, l_9);
  t = j_9;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  t = term_u_35;
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_r_39);
  o_9 = t;
  t = SSL_printnl(n_9, o_9);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(m_9), term_r_39));
  return(t);
}
static ATerm n_7 (ATerm t)
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
  t = term_w_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_10 = NULL;
  t = pass_verbose_0_0(t);
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(t_10), term_x_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm u_10 = NULL;
  t = pass_verbose_0_0(t);
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_10), term_x_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
      e_9 = t;
      t = term_q_35;
      f_9 = t;
      t = term_h_38;
      g_9 = t;
      t = term_i_38;
      t = o_14(f_9, g_9, t);
      t = e_9;
      LocalPopChoice(a_40);
      {
        ATerm h_9 = NULL;
        h_9 = t;
        t = if_verbose2_1_0(e_7, t);
        {
          static ATerm g_7 (ATerm t);
          static ATerm g_7 (ATerm t)
          {
            ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_b_40;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_c_40);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            p_9 = t;
            {
              ATerm f_40 = t;
              int h_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,c_10 = NULL;
                  t = term_q_35;
                  a_10 = t;
                  t = term_i_40;
                  c_10 = t;
                  t = term_k_40;
                  t = o_14(a_10, c_10, t);
                  u_9 = t;
                  t = term_q_35;
                  x_9 = t;
                  t = term_l_40;
                  y_9 = t;
                  t = term_m_40;
                  t = o_14(x_9, y_9, t);
                  v_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                  {
                    ATerm n_40 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm d_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            d_10 = ATgetArgument(t, 0);
                            if((d_10 != ATgetArgument(t, 1)))
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
                        t = n_40;
                      }
                  }
                  LocalPopChoice(h_40);
                }
              else
                {
                  t = f_40;
                  {
                    ATerm f_10 = NULL,h_10 = NULL;
                    t = term_q_35;
                    f_10 = t;
                    t = term_i_40;
                    h_10 = t;
                    t = term_k_40;
                    t = o_14(f_10, h_10, t);
                    t = debug_1_0(n_7, t);
                    _fail(t);
                  }
                }
            }
            t = p_9;
            {
              static ATerm o_7 (ATerm t);
              static ATerm o_7 (ATerm t)
              {
                t = get_outfile_1_0(p_7, t);
                if(((c_9 != NULL) && (c_9 != t)))
                  _fail(t);
                else
                  c_9 = t;
                return(t);
              }
              t = copy_to_1_0(o_7, t);
            }
            {
              ATerm o_40 = t;
              int r_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_10 = NULL,r_10 = NULL;
                  r_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      q_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,x_3 = NULL;
                        t = SSLgetAnnotations(r_10);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, q_10);
                        x_3 = t;
                        t = SSLsetAnnotations(x_3, l_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = r_10;
                    }
                  LocalPopChoice(r_40);
                  t = xtc_transform_file_2_0(q_7, r_7, t);
                }
              else
                {
                  t = o_40;
                  t = xtc_transform_term_2_0(t_7, w_7, t);
                }
            }
            {
              static ATerm x_7 (ATerm t);
              static ATerm x_7 (ATerm t)
              {
                t = get_outfile_1_0(y_7, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = copy_to_1_0(x_7, t);
            }
            q_9 = t;
            t = term_u_35;
            r_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_t_40), not_null(c_9)), term_s_40));
            s_9 = t;
            t = SSL_printnl(r_9, s_9);
            t = q_9;
            return(t);
          }
          t = profile_p__2_0(f_7, g_7, t);
        }
        t = h_9;
      }
    }
  else
    {
      t = z_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
        t = term_q_35;
        h_11 = t;
        t = term_w_40;
        i_11 = t;
        t = term_x_40;
        t = o_14(h_11, i_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_z_38);
        t = geq_0_0(t);
        t = y_10;
        t = g_123(t);
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = y_10;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,s_11 = NULL;
        t = l_11;
        t = l_132(t);
        o_11 = t;
        t = term_q_35;
        q_11 = t;
        t = term_b_41;
        s_11 = t;
        t = term_f_41;
        t = o_14(q_11, s_11, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, o_11);
        t = geq_0_0(t);
        t = l_11;
        t = m_132(t);
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = l_11;
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm i_7 = NULL;
  t = pass_verbose_0_0(t);
  i_7 = t;
  t = (ATerm) ATinsert(CheckATermList(i_7), term_w_38);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_w_38);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_w_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_w_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_13;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_7 = ATgetArgument(t, 0);
                  {
                    ATerm b_8 = NULL,z_3 = NULL;
                    t = SSLgetAnnotations(z_13);
                    b_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_7);
                    z_3 = t;
                    t = SSLsetAnnotations(z_3, b_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_13;
                }
              LocalPopChoice(v_41);
              t = xtc_transform_file_2_0(a_8, c_8, t);
            }
          else
            {
              t = u_41;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = z_13;
        {
          ATerm w_41 = t;
          int z_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  s_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(z_13);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, s_8);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, z_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_13;
                }
              LocalPopChoice(z_41);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = w_41;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm z_14 = NULL,d_15 = NULL,g_15 = NULL;
  g_15 = t;
  t = term_a_42;
  z_14 = t;
  t = g_15;
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_q_35;
        h_15 = t;
        t = term_h_38;
        i_15 = t;
        t = term_i_38;
        t = o_14(h_15, i_15, t);
        t = g_15;
        LocalPopChoice(c_42);
        t = (ATerm) ATinsert(ATempty, term_i_42);
      }
    else
      {
        t = b_42;
        t = (ATerm) ATempty;
      }
  }
  d_15 = t;
  t = g_15;
  t = comp_0_2(z_14, d_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
        t = term_q_35;
        q_15 = t;
        t = term_w_40;
        r_15 = t;
        t = term_x_40;
        t = o_14(q_15, r_15, t);
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_15, term_n_42);
        t = geq_0_0(t);
        t = n_15;
        t = j_123(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = n_15;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  t = term_u_35;
  y_17 = t;
  t = (ATerm) ATinsert(ATempty, term_p_42);
  z_17 = t;
  t = SSL_printnl(y_17, z_17);
  t = x_17;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = if_verbose1_1_0(n_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm h_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(t_8, w_8, t);
  t = olevel_2_0(z_9, g_10, t);
  t = olevel_2_0(w_10, c_11, t);
  h_18 = t;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_21 = ATgetArgument(t, 0);
            {
              ATerm w_12 = NULL,b_6 = NULL;
              t = SSLgetAnnotations(h_18);
              w_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_21);
              b_6 = t;
              t = SSLsetAnnotations(b_6, w_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_18;
          }
        LocalPopChoice(s_42);
        t = xtc_transform_file_2_0(n_12, q_12, t);
      }
    else
      {
        t = r_42;
        t = xtc_transform_term_2_0(r_12, s_12, t);
      }
  }
  t = olevel_2_0(t_12, u_12, t);
  t = olevel_2_0(x_14, a_15, t);
  t = olevel_2_0(w_15, x_15, t);
  t = olevel_2_0(j_16, k_16, t);
  t = olevel_2_0(l_17, m_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,g_18 = NULL;
  d_18 = t;
  t = term_u_35;
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(d_18), term_u_42);
  g_18 = t;
  t = SSL_printnl(e_18, g_18);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(d_18), term_u_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,l_18 = NULL;
  i_18 = t;
  t = term_q_35;
  j_18 = t;
  t = term_b_41;
  l_18 = t;
  t = term_f_41;
  t = o_14(j_18, l_18, t);
  t = debug_1_0(q_8, t);
  t = i_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_w_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  {
    ATerm a_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_18 = ATgetArgument(t, 0);
            {
              ATerm t_9 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(m_18);
              t_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_18);
              k_4 = t;
              t = SSLsetAnnotations(k_4, t_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_18;
          }
        LocalPopChoice(g_43);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = a_43;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(i_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm w_18 = NULL;
  t = pass_verbose_0_0(t);
  w_18 = t;
  t = (ATerm) ATinsert(CheckATermList(w_18), term_w_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_w_38);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = save_as_1_0(w_9, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_h_43;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_19;
        {
          ATerm k_43 = t;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL,x_10 = NULL;
              t = term_q_35;
              s_10 = t;
              t = term_n_43;
              x_10 = t;
              t = term_o_43;
              t = o_14(s_10, x_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_43;
            }
        }
        t = m_19;
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  d_11 = ATgetArgument(t, 0);
                  {
                    ATerm v_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(m_19);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, d_11);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, v_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_19;
                }
              LocalPopChoice(q_43);
              t = xtc_transform_file_2_0(i_10, m_10, t);
            }
          else
            {
              t = p_43;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = m_19;
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_s_43;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm f_11 = NULL;
  t = pass_verbose_0_0(t);
  f_11 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), term_w_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_s_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_w_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  s_19 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_19 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(s_19);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_19);
              r_5 = t;
              t = SSLsetAnnotations(r_5, z_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_19;
          }
        LocalPopChoice(w_43);
        t = xtc_transform_file_2_0(e_11, j_11, t);
      }
    else
      {
        t = v_43;
        t = xtc_transform_term_2_0(m_11, r_11, t);
      }
  }
  t = if_keep6_1_0(t_11, t);
  r_19 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(r_19);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_19;
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
  q_19 = t;
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_20 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(q_19);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_20);
              t_5 = t;
              t = SSLsetAnnotations(t_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(a_44);
        t = xtc_transform_file_2_0(e_12, f_12, t);
      }
    else
      {
        t = z_43;
        t = xtc_transform_term_2_0(g_12, m_12, t);
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm b_20 = NULL;
  t = pass_verbose_0_0(t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), term_w_38);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm c_20 = NULL;
  t = pass_verbose_0_0(t);
  c_20 = t;
  t = (ATerm) ATinsert(CheckATermList(c_20), term_w_38);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = save_as_1_0(u_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_c_44;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm o_20 = NULL;
  t = pass_verbose_0_0(t);
  o_20 = t;
  t = (ATerm) ATinsert(CheckATermList(o_20), term_w_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_w_38);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = save_as_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_w_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_w_38);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm i_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(i_21), term_w_38);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm j_21 = NULL;
  t = pass_verbose_0_0(t);
  j_21 = t;
  t = (ATerm) ATinsert(CheckATermList(j_21), term_w_38);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm k_21 = NULL,o_21 = NULL,p_21 = NULL;
  p_21 = t;
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_21 = ATgetArgument(t, 0);
            {
              ATerm d_13 = NULL,e_6 = NULL;
              t = SSLgetAnnotations(p_21);
              d_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
              e_6 = t;
              t = SSLsetAnnotations(e_6, d_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_21;
          }
        LocalPopChoice(i_44);
        t = xtc_transform_file_2_0(v_12, x_12, t);
      }
    else
      {
        t = h_44;
        t = xtc_transform_term_2_0(y_12, z_12, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  o_21 = t;
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_22 = ATgetArgument(t, 0);
            {
              ATerm y_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(o_21);
              y_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_22);
              f_6 = t;
              t = SSLsetAnnotations(f_6, y_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_21;
          }
        LocalPopChoice(n_44);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = m_44;
        t = xtc_transform_term_2_0(c_13, e_13, t);
      }
  }
  k_21 = t;
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_22 = ATgetArgument(t, 0);
            {
              ATerm e_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(k_21);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, e_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_21;
          }
        LocalPopChoice(p_44);
        t = xtc_transform_file_2_0(f_13, o_13, t);
      }
    else
      {
        t = o_44;
        t = xtc_transform_term_2_0(s_13, u_13, t);
      }
  }
  t = if_keep4_1_0(v_14, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm x_21 = NULL;
  t = pass_verbose_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(CheckATermList(x_21), term_w_38);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_w_38);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_w_38);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_w_38);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm q_22 = NULL;
  t = pass_verbose_0_0(t);
  q_22 = t;
  t = (ATerm) ATinsert(CheckATermList(q_22), term_w_38);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm b_23 = NULL;
  t = pass_verbose_0_0(t);
  b_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), term_w_38);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm c_23 = NULL,j_23 = NULL;
  j_23 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_23 = ATgetArgument(t, 0);
            {
              ATerm l_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(j_23);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, l_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_23;
          }
        LocalPopChoice(w_44);
        t = xtc_transform_file_2_0(b_15, c_15, t);
      }
    else
      {
        t = v_44;
        t = xtc_transform_term_2_0(f_15, j_15, t);
      }
  }
  c_23 = t;
  {
    ATerm y_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_23 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,o_6 = NULL;
              t = SSLgetAnnotations(c_23);
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_23);
              o_6 = t;
              t = SSLsetAnnotations(o_6, v_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_23;
          }
        LocalPopChoice(a_45);
        t = xtc_transform_file_2_0(k_15, m_15, t);
      }
    else
      {
        t = y_44;
        t = xtc_transform_term_2_0(o_15, s_15, t);
      }
  }
  t = if_keep2_1_0(t_15, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_w_38);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm t_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), term_w_38);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_w_38);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm c_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), term_w_38);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = save_as_1_0(u_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_24 = ATgetArgument(t, 0);
            {
              ATerm z_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(e_24);
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_24);
              p_6 = t;
              t = SSLsetAnnotations(p_6, z_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_24;
          }
        LocalPopChoice(l_45);
        t = xtc_transform_file_2_0(y_15, a_16, t);
      }
    else
      {
        t = k_45;
        t = xtc_transform_term_2_0(b_16, c_16, t);
      }
  }
  t = if_keep5_1_0(e_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(g_16, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm o_24 = NULL;
  t = pass_verbose_0_0(t);
  o_24 = t;
  t = (ATerm) ATinsert(CheckATermList(o_24), term_w_38);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm p_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), term_w_38);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = save_as_1_0(f_16, t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(i_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,u_24 = NULL;
  u_24 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_25 = ATgetArgument(t, 0);
            {
              ATerm d_16 = NULL,q_6 = NULL;
              t = SSLgetAnnotations(u_24);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
              q_6 = t;
              t = SSLsetAnnotations(q_6, d_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_24;
          }
        LocalPopChoice(q_45);
        t = xtc_transform_file_2_0(m_16, n_16, t);
      }
    else
      {
        t = p_45;
        t = xtc_transform_term_2_0(o_16, q_16, t);
      }
  }
  t = if_keep3_1_0(r_16, t);
  r_24 = t;
  {
    ATerm s_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_25 = ATgetArgument(t, 0);
            {
              ATerm h_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(r_24);
              h_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, h_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_24;
          }
        LocalPopChoice(v_45);
        t = xtc_transform_file_2_0(u_16, v_16, t);
      }
    else
      {
        t = s_45;
        t = xtc_transform_term_2_0(w_16, x_16, t);
      }
  }
  t = if_keep3_1_0(z_16, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(b_17, t);
  q_24 = t;
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_26 = ATgetArgument(t, 0);
            {
              ATerm l_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(q_24);
              l_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_26);
              s_6 = t;
              t = SSLsetAnnotations(s_6, l_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_24;
          }
        LocalPopChoice(x_45);
        t = xtc_transform_file_2_0(d_17, e_17, t);
      }
    else
      {
        t = w_45;
        t = xtc_transform_term_2_0(f_17, i_17, t);
      }
  }
  t = if_keep3_1_0(j_17, t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_w_38);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm j_25 = NULL;
  t = pass_verbose_0_0(t);
  j_25 = t;
  t = (ATerm) ATinsert(CheckATermList(j_25), term_w_38);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = save_as_1_0(s_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm y_25 = NULL;
  t = pass_verbose_0_0(t);
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), term_w_38);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm z_25 = NULL;
  t = pass_verbose_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), term_w_38);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = save_as_1_0(a_17, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_d_46;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = save_as_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm j_26 = NULL;
  t = pass_verbose_0_0(t);
  j_26 = t;
  t = (ATerm) ATinsert(CheckATermList(j_26), term_w_38);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm l_26 = NULL;
  t = pass_verbose_0_0(t);
  l_26 = t;
  t = (ATerm) ATinsert(CheckATermList(l_26), term_w_38);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = save_as_1_0(k_17, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_f_46;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  n_26 = t;
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_26 = ATgetArgument(t, 0);
            {
              ATerm p_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(n_26);
              p_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, p_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_26;
          }
        LocalPopChoice(h_46);
        t = xtc_transform_file_2_0(n_17, o_17, t);
      }
    else
      {
        t = g_46;
        t = xtc_transform_term_2_0(p_17, q_17, t);
      }
  }
  t = if_keep1_1_0(t_17, t);
  m_26 = t;
  {
    ATerm j_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm t_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(m_26);
              t_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, t_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_26;
          }
        LocalPopChoice(m_46);
        t = xtc_transform_file_2_0(v_17, w_17, t);
      }
    else
      {
        t = j_46;
        t = xtc_transform_term_2_0(a_18, c_18, t);
      }
  }
  t = if_keep1_1_0(o_18, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm v_26 = NULL;
  t = pass_verbose_0_0(t);
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(v_26), term_w_38);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm w_26 = NULL;
  t = pass_verbose_0_0(t);
  w_26 = t;
  t = (ATerm) ATinsert(CheckATermList(w_26), term_w_38);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = save_as_1_0(u_17, t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_w_38);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_w_38);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = save_as_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  t = profile_p__2_0(l_8, m_8, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm l_29 = NULL;
  t = pass_verbose_0_0(t);
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(l_29), term_x_39);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_x_39);
  return(t);
}
ATerm save_as_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL;
  n_28 = t;
  {
    static ATerm r_18 (ATerm t);
    static ATerm r_18 (ATerm t)
    {
      static ATerm t_18 (ATerm t);
      static ATerm t_18 (ATerm t)
      {
        ATerm u_28 = NULL,y_28 = NULL;
        t = l_96(t);
        u_28 = t;
        t = term_t_46;
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_46, u_28);
        t = u_14(y_28, u_28, t);
        return(t);
      }
      t = get_outfile_1_0(t_18, t);
      if(((j_28 != NULL) && (j_28 != t)))
        _fail(t);
      else
        j_28 = t;
      return(t);
    }
    t = copy_to_1_0(r_18, t);
  }
  {
    ATerm u_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_29 = NULL,k_29 = NULL;
        k_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_29 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,j_8 = NULL;
              t = SSLgetAnnotations(k_29);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_29);
              j_8 = t;
              t = SSLsetAnnotations(j_8, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_29;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(v_18, y_18, t);
      }
    else
      {
        t = u_46;
        t = xtc_transform_term_2_0(a_19, c_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t);
    static ATerm f_19 (ATerm t)
    {
      ATerm n_29 = NULL;
      t = term_z_46;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), term_z_46);
      t = u_14(not_null(j_28), n_29, t);
      if(((m_28 != NULL) && (m_28 != t)))
        _fail(t);
      else
        m_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(m_28)), term_b_47), not_null(j_28)), term_a_47);
  t_28 = t;
  t = SSL_concat_strings(t_28);
  o_28 = t;
  t = term_u_35;
  p_28 = t;
  t = (ATerm) ATinsert(ATempty, o_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = n_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL,y_29 = NULL;
        t = term_q_35;
        v_29 = t;
        t = term_w_40;
        y_29 = t;
        t = term_x_40;
        t = o_14(v_29, y_29, t);
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, term_t_35);
        t = geq_0_0(t);
        t = s_29;
        t = h_123(t);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = s_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = term_r_35;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL,h_30 = NULL;
        t = term_q_35;
        g_30 = t;
        t = term_r_35;
        h_30 = t;
        t = term_s_35;
        t = o_14(g_30, h_30, t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = term_z_38;
      }
  }
  d_30 = t;
  t = term_z_38;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, term_z_38);
  t = v_13(d_30, f_30, t);
  e_30 = t;
  t = SSL_int_to_string(e_30);
  a_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_30), term_r_35);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_47 = ATgetArgument(t, 0);
      if(match_cons(j_47, sym_Stream_1))
        {
          k_30 = ATgetArgument(j_47, 0);
        }
      else
        _fail(t);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(k_30, l_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  j_30 = t;
  t = xtc_new_file_0_0(t);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
  t = m_13(g_19, i_30, j_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_30);
  t = xtc_transform_file_2_0(g_131, h_131, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_13 (ATerm i_59, ATerm j_59, ATerm t)
{
  t = SSL_execvp(i_59, j_59);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm g_17 = NULL,h_17 = NULL;
        t = SSL_int_to_string(o_31);
        g_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_47), g_17), term_k_47);
        h_17 = t;
        t = SSL_concat_strings(h_17);
      }
    }
  else
    {
      ATerm r_17 = NULL,s_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_31 = ATgetArgument(t, 0);
          p_31 = ATgetArgument(t, 1);
          q_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_31);
      r_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_31), term_n_47), r_17), term_m_47), o_31);
      s_17 = t;
      t = SSL_concat_strings(s_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_19 (ATerm t);
        static ATerm h_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm q_47 = ATgetArgument(t, 0);
              if((y_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_53), term_d_53), term_z_52), term_v_52), term_q_52), term_m_52), term_f_52), term_y_51), term_r_51), term_l_51), term_d_51), term_t_50), term_m_50), term_g_50), term_z_49), term_v_49), term_n_49), term_k_49), term_g_49), term_c_49), term_y_48), term_t_48), term_p_48), term_l_48), term_h_48), term_d_48), term_y_47), term_v_47);
        t = fetch_elem_1_0(h_19, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_31);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_32 = NULL,u_32 = NULL;
  l_32 = t;
  {
    ATerm i_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_53 = ATgetArgument(t, 0);
            u_32 = ATgetArgument(t, 1);
            {
              ATerm l_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_53);
        {
          ATerm m_53 = t;
          int n_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_18 = NULL,f_18 = NULL,k_18 = NULL;
              t = u_32;
              {
                ATerm o_53 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_53;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_18 = t;
              t = term_u_35;
              f_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_18), term_p_53);
              k_18 = t;
              t = SSL_printnl(f_18, k_18);
              t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATempty, b_18), term_p_53));
              LocalPopChoice(n_53);
            }
          else
            {
              t = m_53;
              t = l_32;
            }
        }
      }
    else
      {
        t = i_53;
        t = l_32;
      }
  }
  t = l_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,k_33 = NULL;
  k_33 = t;
  t = fork_0_0(t);
  h_33 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_33;
        t = r_123(t);
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = SSL_waitpid(h_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_53 = ATgetArgument(t, 0);
            if(((ATgetType(s_53) != AT_INT) || (ATgetInt((ATermInt) s_53) != 0)))
              _fail(t);
            {
              ATerm t_53 = ATgetArgument(t, 1);
            }
            {
              ATerm u_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_132 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = h_132(t);
  t = xtc_find_0_0(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
  {
    static ATerm j_19 (ATerm t);
    static ATerm j_19 (ATerm t)
    {
      ATerm o_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
      t = n_13(m_33, n_33, t);
      t = term_f_36;
      o_33 = t;
      t = SSL_exit(o_33);
      return(t);
    }
    t = fork_and_wait_1_0(j_19, t);
  }
  t = n_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,w_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_33 = NULL,z_33 = NULL;
      t = r_33;
      t = xtc_new_file_0_0(t);
      x_33 = t;
      t = u_0(t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_33, (ATerm) ATinsert(ATinsert(ATempty, x_33), term_a_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_33);
    }
  else
    {
      ATerm g_34 = NULL,h_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_33;
      t = xtc_new_file_0_0(t);
      g_34 = t;
      t = u_0(t);
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_34), term_a_36), w_33), term_v_53));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm w_53 = t;
  int x_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_49 = NULL,s_49 = NULL;
      s_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_49 = ATgetArgument(t, 0);
          {
            ATerm o_30 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(s_49);
            o_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_49);
            p_8 = t;
            t = SSLsetAnnotations(p_8, o_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_49;
        }
      LocalPopChoice(x_53);
      {
        static ATerm l_19 (ATerm t);
        static ATerm n_19 (ATerm t);
        static ATerm l_19 (ATerm t)
        {
          t = r_22;
          return(t);
        }
        static ATerm n_19 (ATerm t)
        {
          ATerm t_49 = NULL;
          t = pass_verbose_0_0(t);
          t_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_22), t_49), (ATerm) ATinsert(ATempty, term_w_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(l_19, n_19, t);
      }
    }
  else
    {
      t = w_53;
      {
        static ATerm u_19 (ATerm t);
        static ATerm z_19 (ATerm t);
        static ATerm u_19 (ATerm t)
        {
          t = r_22;
          return(t);
        }
        static ATerm z_19 (ATerm t)
        {
          ATerm u_49 = NULL;
          t = pass_verbose_0_0(t);
          u_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_22), u_49), (ATerm) ATinsert(ATempty, term_w_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(u_19, z_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm i_112 (ATerm), ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_34;
      t = i_112(t);
    }
  else
    {
      ATerm o_34 = NULL,p_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_34 = ATgetFirst((ATermList) t);
          l_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_34;
      t = k_112(t);
      o_34 = t;
      t = l_34;
      t = foldr_3_0(i_112, j_112, k_112, t);
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
      t = j_112(t);
    }
  return(t);
}
static ATerm e_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_34), term_y_53);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  t = term_q_35;
  s_34 = t;
  t = term_y_53;
  t_34 = t;
  t = term_z_53;
  t = o_14(s_34, t_34, t);
  t = foldr_3_0(e_20, conc_0_0, f_20, t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_w_38);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm t_20 = NULL;
  t = pass_verbose_0_0(t);
  t_20 = t;
  t = (ATerm) ATinsert(CheckATermList(t_20), term_w_38);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = get_outfile_1_0(q_20, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = term_e_54;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm g_54 = t;
    int h_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL,p_19 = NULL,w_19 = NULL,y_19 = NULL,a_20 = NULL;
        t = term_q_35;
        y_19 = t;
        t = term_i_54;
        a_20 = t;
        t = term_j_54;
        t = o_14(y_19, a_20, t);
        t = i_36;
        {
          ATerm k_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_36;
              {
                ATerm w_54 = t;
                int x_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        j_20 = ATgetArgument(t, 0);
                        {
                          ATerm m_21 = NULL,r_8 = NULL;
                          t = SSLgetAnnotations(i_36);
                          m_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, j_20);
                          r_8 = t;
                          t = SSLsetAnnotations(r_8, m_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = i_36;
                      }
                    LocalPopChoice(x_54);
                    t = xtc_transform_file_2_0(g_20, h_20, t);
                  }
                else
                  {
                    t = w_54;
                    t = xtc_transform_term_2_0(i_20, l_20, t);
                  }
              }
              LocalPopChoice(p_54);
            }
          else
            {
              t = k_54;
              {
                ATerm u_20 = NULL,w_20 = NULL,c_21 = NULL;
                t = term_u_35;
                w_20 = t;
                t = (ATerm) ATinsert(ATempty, term_y_54);
                c_21 = t;
                t = SSL_printnl(w_20, c_21);
                t = term_z_38;
                u_20 = t;
                t = SSL_exit(u_20);
                t = (ATerm) ATinsert(ATempty, term_y_54);
              }
            }
        }
        t = copy_to_1_0(m_20, t);
        o_19 = t;
        t = term_u_35;
        p_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_54));
        w_19 = t;
        t = SSL_printnl(p_19, w_19);
        t = o_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(h_54);
      }
    else
      {
        t = g_54;
        t = i_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        t = term_q_35;
        s_36 = t;
        t = term_w_40;
        t_36 = t;
        t = term_x_40;
        t = o_14(s_36, t_36, t);
        r_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_i_45);
        t = geq_0_0(t);
        t = p_36;
        t = k_123(t);
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
        t = p_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL,e_37 = NULL;
        t = term_q_35;
        b_37 = t;
        t = term_w_40;
        e_37 = t;
        t = term_x_40;
        t = o_14(b_37, e_37, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_37, term_f_48);
        t = geq_0_0(t);
        t = y_36;
        t = l_123(t);
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = y_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm e_55 = t;
  int f_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_37 = NULL,h_37 = NULL;
      t = term_q_35;
      g_37 = t;
      t = term_g_55;
      h_37 = t;
      t = term_h_55;
      t = o_14(g_37, h_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_55);
      LocalPopChoice(f_55);
    }
  else
    {
      t = e_55;
      t = (ATerm) ATinsert(ATempty, term_i_55);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,u_37 = NULL,v_37 = NULL;
  q_37 = t;
  t = term_j_55;
  o_37 = t;
  t = term_q_35;
  u_37 = t;
  t = term_k_55;
  v_37 = t;
  t = term_l_55;
  t = o_14(u_37, v_37, t);
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_k_55);
  p_37 = t;
  t = q_37;
  t = comp_0_2(o_37, p_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL;
        t = term_q_35;
        c_38 = t;
        t = term_w_40;
        d_38 = t;
        t = term_x_40;
        t = o_14(c_38, d_38, t);
        b_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_38, term_l_39);
        t = geq_0_0(t);
        t = x_37;
        t = i_123(t);
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
        t = x_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm f_38 = NULL;
  static ATerm r_20 (ATerm t);
  static ATerm r_20 (ATerm t)
  {
    t = t_105(t);
    if(((f_38 != NULL) && (f_38 != t)))
      _fail(t);
    else
      f_38 = t;
    return(t);
  }
  t = fetch_1_0(r_20, t);
  t = not_null(f_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_40 = ATgetArgument(t, 0);
      {
        ATerm g_22 = NULL,n_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(p_40);
        g_22 = t;
        t = q_40;
        t = fetch_elem_1_0(x_20, t);
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, n_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, g_22);
      }
    }
  else
    {
      ATerm i_23 = NULL,o_23 = NULL,e_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          q_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_40);
      i_23 = t;
      t = q_40;
      t = fetch_elem_1_0(a_21, t);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, o_23);
      e_10 = t;
      t = SSLsetAnnotations(e_10, i_23);
    }
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            v_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
            {
              ATerm q_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_55);
        t = v_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_22;
      }
    else
      {
        t = o_55;
        if(match_cons(t, sym_RDef_3))
          {
            v_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
            {
              ATerm r_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_22;
      }
  }
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm v_23 = NULL,x_23 = NULL,d_24 = NULL;
  v_23 = t;
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            x_23 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
            {
              ATerm u_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_55);
        t = x_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = d_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_23;
      }
    else
      {
        t = s_55;
        if(match_cons(t, sym_RDef_3))
          {
            x_23 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
            {
              ATerm v_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = d_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  t = fetch_elem_1_0(s_20, t);
  c_39 = t;
  t = term_u_35;
  d_39 = t;
  t = (ATerm) ATinsert(ATempty, term_b_56);
  e_39 = t;
  t = SSL_printnl(d_39, e_39);
  t = c_39;
  return(t);
}
static ATerm k_13 (ATerm x_22, ATerm y_22, ATerm t)
{
  t = x_22;
  {
    ATerm c_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_56;
      }
  }
  t = y_22;
  {
    ATerm h_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(l_56);
      }
    else
      {
        t = h_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_m_56, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_22), (ATerm) ATempty))))));
  return(t);
}
static ATerm l_13 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm c_41 = NULL;
  t = SSL_write_term_to_stream_baf(s_24, t_24);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_41);
  return(t);
}
static ATerm m_13 (ATerm y_104 (ATerm), ATerm k_209, ATerm c_25, ATerm t)
{
  ATerm d_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_209, term_q_56);
  t = h_14(t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, c_25);
  t = y_104(t);
  t = fclose_0_0(t);
  t = c_25;
  return(t);
}
static ATerm p_13 (ATerm t_118 (ATerm), ATerm l_44, ATerm j_44, ATerm t)
{
  ATerm e_41 = NULL,g_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL;
  j_41 = t;
  t = t_118(t);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_41, l_44, j_44);
  t = p_14(e_41, l_44, j_44, t);
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_41 = NULL;
        t = term_t_56;
        p_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_41, term_t_56);
        t = o_14(e_41, p_41, t);
        {
          ATerm v_56 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_56;
            }
        }
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_41 = ATgetFirst((ATermList) t);
      i_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_41, term_t_56, (ATerm) ATinsert(CheckATermList(i_41), (ATerm) ATinsert(CheckATermList(g_41), l_44)));
  t = lookup_table_0_1(e_41, t);
  o_41 = t;
  t = term_t_56;
  k_41 = t;
  t = (ATerm) ATinsert(CheckATermList(i_41), (ATerm) ATinsert(CheckATermList(g_41), l_44));
  l_41 = t;
  t = o_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(k_41, l_41, n_41, t);
  t = j_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = NULL,x_24 = NULL;
      x_41 = t;
      t = term_a_57;
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_41, term_a_57);
      t = u_14(x_41, x_24, t);
      r_41 = t;
      t = SSL_mkstemp(r_41);
      LocalPopChoice(z_56);
    }
  else
    {
      t = y_56;
      {
        ATerm y_41 = NULL;
        t = term_c_57;
        y_41 = t;
        t = SSL_perror(y_41);
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
static ATerm b_21 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_42 = NULL,f_42 = NULL,h_42 = NULL,j_42 = NULL,m_42 = NULL;
  t = P__tmpdir_0_0(t);
  j_42 = t;
  t = term_g_57;
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, term_g_57);
  t = u_14(j_42, m_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_37;
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_42, term_f_37);
  t = p_13(b_21, f_42, h_42, t);
  t = SSL_close(d_42);
  t = f_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_57);
      t_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_42, (ATerm) ATinsert(ATempty, term_j_57));
      t = i_14(q_42, t_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm c_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_57 = ATgetArgument(t, 0);
      if(match_cons(m_57, sym_Stream_1))
        {
          c_43 = ATgetArgument(m_57, 0);
        }
      else
        _fail(t);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(c_43, f_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm i_131 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,b_43 = NULL;
  t = read_from_0_0(t);
  t = i_131(t);
  b_43 = t;
  t = xtc_new_file_0_0(t);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_42, b_43);
  t = m_13(d_21, z_42, b_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_42);
  return(t);
}
static ATerm e_21 (ATerm t)
{
  t = debug_1_0(f_21, t);
  return(t);
}
static ATerm f_21 (ATerm t)
{
  t = term_n_57;
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = save_as_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_o_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm l_43 = NULL,q_44 = NULL;
  q_44 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,t_25 = NULL;
        t = term_q_35;
        o_25 = t;
        t = term_u_57;
        t_25 = t;
        t = term_v_57;
        t = o_14(o_25, t_25, t);
        l_43 = t;
        t = if_verbose2_1_0(e_21, t);
        t = q_44;
        {
          ATerm w_57 = t;
          int x_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_25 = NULL,w_25 = NULL;
              t = term_q_35;
              v_25 = t;
              t = term_h_38;
              w_25 = t;
              t = term_i_38;
              t = o_14(v_25, w_25, t);
              t = q_44;
              LocalPopChoice(x_57);
            }
          else
            {
              t = w_57;
              {
                static ATerm h_21 (ATerm t);
                static ATerm h_21 (ATerm t)
                {
                  ATerm y_57 = t;
                  int a_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          r_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = k_13(l_43, r_26, t);
                      LocalPopChoice(a_58);
                    }
                  else
                    {
                      t = y_57;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(h_21, t);
              }
            }
        }
        LocalPopChoice(r_57);
      }
    else
      {
        t = q_57;
        t = q_44;
      }
  }
  t = if_keep3_1_0(l_21, t);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm n_45 = NULL;
  n_45 = t;
  {
    ATerm b_58 = t;
    int d_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_45);
        LocalPopChoice(d_58);
      }
    else
      {
        t = b_58;
        t = n_45;
      }
  }
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm z_44 = NULL,d_45 = NULL;
  static ATerm q_21 (ATerm t);
  static ATerm q_21 (ATerm t)
  {
    ATerm f_45 = NULL,h_45 = NULL,j_45 = NULL;
    f_45 = t;
    t = term_f_57;
    h_45 = t;
    t = term_t_56;
    j_45 = t;
    t = term_e_58;
    t = o_14(h_45, j_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_44 != NULL) && (z_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_44 = ATgetFirst((ATermList) t);
        {
          ATerm g_58 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_44;
    t = map_1_0(r_21, t);
    t = f_45;
    t = end_scope_1_0(s_21, t);
    return(t);
  }
  t = repeat_2_0(q_21, _id, t);
  d_45 = t;
  t = SSL_exit(d_45);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm h_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_46 = NULL,l_46 = NULL;
      t = term_q_35;
      k_46 = t;
      t = term_a_36;
      l_46 = t;
      t = term_b_36;
      t = o_14(k_46, l_46, t);
      LocalPopChoice(i_58);
    }
  else
    {
      t = h_58;
      t = term_k_37;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm i_46 = NULL;
  i_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_27 = NULL,u_27 = NULL;
      t = term_a_36;
      {
        ATerm j_58 = t;
        int k_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_27 = NULL,w_27 = NULL;
            t = term_q_35;
            v_27 = t;
            t = term_a_36;
            w_27 = t;
            t = term_b_36;
            t = o_14(v_27, w_27, t);
            LocalPopChoice(k_58);
          }
        else
          {
            t = j_58;
            t = term_k_37;
          }
      }
      n_27 = t;
      t = term_h_57;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_57, n_27);
      t = x_13(u_27, n_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm u_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_46;
      t = copy_to_1_0(u_21, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_m_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,v_46 = NULL,x_46 = NULL;
  t = k_96(t);
  o_46 = t;
  t = term_q_35;
  v_46 = t;
  t = term_i_40;
  x_46 = t;
  t = term_k_40;
  t = o_14(v_46, x_46, t);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, o_46);
  t = u_14(p_46, o_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  a_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_28 = NULL;
        t = a_48;
        t = w_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, b_48, k_28);
        t = x_13(b_48, k_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        {
          ATerm d_59 = t;
          int e_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_29 = NULL;
              t = a_48;
              t = w_0(t);
              a_29 = t;
              {
                ATerm f_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_29 = NULL;
                    b_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_29;
                          }
                        else
                          {
                            t = b_29;
                            if((b_48 != t))
                              {
                                _fail(t);
                              }
                            t = b_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_48, a_29);
              t = x_13(b_48, a_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
              LocalPopChoice(e_59);
            }
          else
            {
              t = d_59;
              t = a_48;
              t = w_0(t);
              if((b_48 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
            }
        }
      }
  }
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = get_outfile_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_h_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  {
    ATerm l_59 = t;
    int m_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL,r_29 = NULL,w_29 = NULL,x_29 = NULL,b_30 = NULL;
        t = term_q_35;
        x_29 = t;
        t = term_n_59;
        b_30 = t;
        t = term_p_59;
        t = o_14(x_29, b_30, t);
        t = v_48;
        t = copy_to_1_0(v_21, t);
        q_29 = t;
        t = term_u_35;
        r_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_59));
        w_29 = t;
        t = SSL_printnl(r_29, w_29);
        t = q_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(m_59);
      }
    else
      {
        t = l_59;
        t = v_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,h_50 = NULL;
  t = term_w_40;
  {
    ATerm r_59 = t;
    int s_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL,n_50 = NULL;
        t = term_q_35;
        i_50 = t;
        t = term_w_40;
        n_50 = t;
        t = term_x_40;
        t = o_14(i_50, n_50, t);
        LocalPopChoice(s_59);
      }
    else
      {
        t = r_59;
        t = term_z_38;
      }
  }
  d_50 = t;
  t = term_z_38;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, term_z_38);
  t = v_13(d_50, h_50, t);
  e_50 = t;
  t = SSL_int_to_string(e_50);
  c_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_50), term_w_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,w_50 = NULL,x_50 = NULL,z_50 = NULL,a_51 = NULL;
  t = term_q_35;
  z_50 = t;
  t = term_u_59;
  a_51 = t;
  t = term_v_59;
  t = o_14(z_50, a_51, t);
  o_50 = t;
  t = term_w_59;
  t = xtc_find_path_0_0(t);
  p_50 = t;
  t = term_x_59;
  t = xtc_find_path_0_0(t);
  w_50 = t;
  t = term_z_59;
  t = xtc_find_path_0_0(t);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_50), term_u_59), w_50), term_u_59), p_50), term_u_59));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,f_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,n_51 = NULL;
  j_51 = t;
  t = term_b_60;
  b_51 = t;
  t = j_51;
  {
    ATerm c_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL,s_51 = NULL;
        t = term_q_35;
        q_51 = t;
        t = term_a_36;
        s_51 = t;
        t = term_b_36;
        t = o_14(q_51, s_51, t);
        LocalPopChoice(e_60);
      }
    else
      {
        t = c_60;
        {
          ATerm v_51 = NULL,w_51 = NULL;
          t = term_q_35;
          v_51 = t;
          t = term_i_40;
          w_51 = t;
          t = term_k_40;
          t = o_14(v_51, w_51, t);
        }
      }
  }
  n_51 = t;
  t = j_51;
  t = get_include_dirs_0_0(t);
  f_51 = t;
  t = j_51;
  t = pass_keep_0_0(t);
  h_51 = t;
  t = term_f_60;
  {
    ATerm g_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL,a_52 = NULL;
        t = term_q_35;
        z_51 = t;
        t = term_f_60;
        a_52 = t;
        t = term_r_60;
        t = o_14(z_51, a_52, t);
        LocalPopChoice(q_60);
        t = (ATerm) ATinsert(ATempty, term_f_60);
      }
    else
      {
        t = g_60;
        t = (ATerm) ATempty;
      }
  }
  i_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_51), h_51), f_51), (ATerm) ATinsert(ATinsert(ATempty, n_51), term_s_60));
  t = concat_0_0(t);
  c_51 = t;
  t = j_51;
  t = comp_0_2(b_51, c_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  {
    ATerm v_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL,i_52 = NULL,k_52 = NULL;
        t = term_q_35;
        i_52 = t;
        t = term_r_35;
        k_52 = t;
        t = term_s_35;
        t = o_14(i_52, k_52, t);
        g_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_52, term_l_39);
        t = geq_0_0(t);
        t = c_52;
        t = g_122(t);
        LocalPopChoice(w_60);
      }
    else
      {
        t = v_60;
        t = c_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm i_116 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,u_52 = NULL;
  u_52 = t;
  t = SSL_explode_string(u_52);
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_54 (ATerm t);
        static ATerm f_54 (ATerm t)
        {
          ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
          a_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_54 = ATgetFirst((ATermList) t);
              c_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm z_60 = t;
            int a_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_31 = NULL,x_31 = NULL,j_10 = NULL;
                t = SSLgetAnnotations(a_54);
                t_31 = t;
                t = c_54;
                t = f_54(t);
                x_31 = t;
                t = (ATerm) ATinsert(CheckATermList(x_31), b_54);
                j_10 = t;
                t = SSLsetAnnotations(j_10, t_31);
                LocalPopChoice(a_61);
              }
            else
              {
                t = z_60;
                {
                  ATerm c_61 = t;
                  int d_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_32 = NULL,k_10 = NULL;
                      t = SSLgetAnnotations(a_54);
                      g_32 = t;
                      t = b_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(c_54), b_54);
                      k_10 = t;
                      t = SSLsetAnnotations(k_10, g_32);
                      LocalPopChoice(d_61);
                    }
                  else
                    {
                      t = c_61;
                      {
                        ATerm d_33 = NULL,g_33 = NULL,l_10 = NULL;
                        t = SSLgetAnnotations(a_54);
                        d_33 = t;
                        t = b_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = c_54;
                        t = i_116(t);
                        g_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_33), b_54);
                        l_10 = t;
                        t = SSLsetAnnotations(l_10, d_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_54(t);
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
      }
  }
  r_52 = t;
  t = SSL_implode_string(r_52);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = debug_1_0(a_22, t);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_e_61;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = debug_1_0(c_22, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_h_61;
  return(t);
}
static ATerm q_13 (ATerm t_22, ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  t = t_22;
  t = basename_1_0(_id, t);
  l_54 = t;
  t = if_verbose3_1_0(z_21, t);
  t = term_l_40;
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, l_54);
  t = t_14(o_54, l_54, t);
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_54 = NULL,v_54 = NULL;
        t = term_q_35;
        u_54 = t;
        t = term_a_36;
        v_54 = t;
        t = term_b_36;
        t = o_14(u_54, v_54, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(j_61);
      }
    else
      {
        t = i_61;
        t = l_54;
      }
  }
  m_54 = t;
  t = if_verbose3_1_0(b_22, t);
  t = term_i_40;
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_40, m_54);
  t = t_14(n_54, m_54, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_54);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = debug_1_0(h_22, t);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = term_k_61;
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = if_verbose1_1_0(l_22, t);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,u_36 = NULL,v_36 = NULL,x_36 = NULL,e_34 = NULL,f_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_13(k_56, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
        n_56 = t;
        t = term_q_35;
        o_56 = t;
        t = term_h_38;
        p_56 = t;
        t = term_i_38;
        t = o_14(o_56, p_56, t);
        t = n_56;
        LocalPopChoice(m_61);
      }
    else
      {
        t = l_61;
        t = add_main_0_0(t);
      }
  }
  j_56 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_56 = ATgetArgument(t, 0);
            {
              ATerm t_33 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(j_56);
              t_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_56);
              z_10 = t;
              t = SSLsetAnnotations(z_10, t_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_56;
          }
        LocalPopChoice(o_61);
        t = xtc_transform_file_2_0(o_22, p_22, t);
      }
    else
      {
        t = n_61;
        t = xtc_transform_term_2_0(z_22, a_23, t);
      }
  }
  i_56 = t;
  {
    ATerm p_61 = t;
    int q_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_57 = ATgetArgument(t, 0);
            {
              ATerm a_34 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(i_56);
              a_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_57);
              a_11 = t;
              t = SSLsetAnnotations(a_11, a_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_56;
          }
        LocalPopChoice(q_61);
        t = xtc_transform_file_2_0(e_23, g_23, t);
      }
    else
      {
        t = p_61;
        t = xtc_transform_term_2_0(h_23, k_23, t);
      }
  }
  t = if_keep5_1_0(l_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(n_23, t);
  i_34 = t;
  t = term_r_61;
  e_34 = t;
  t = i_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  f_34 = t;
  t = i_34;
  t = comp_0_2(e_34, f_34, t);
  t = if_keep6_1_0(r_23, t);
  g_56 = t;
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_57 = ATgetArgument(t, 0);
            {
              ATerm r_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(g_56);
              r_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_57);
              b_11 = t;
              t = SSLsetAnnotations(b_11, r_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_56;
          }
        LocalPopChoice(t_61);
        t = xtc_transform_file_2_0(w_23, y_23, t);
      }
    else
      {
        t = s_61;
        t = xtc_transform_term_2_0(a_24, f_24, t);
      }
  }
  t = if_keep6_1_0(g_24, t);
  f_56 = t;
  {
    ATerm u_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_57 = ATgetArgument(t, 0);
            {
              ATerm b_35 = NULL,n_11 = NULL;
              t = SSLgetAnnotations(f_56);
              b_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_57);
              n_11 = t;
              t = SSLsetAnnotations(n_11, b_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_56;
          }
        LocalPopChoice(w_61);
        t = xtc_transform_file_2_0(i_24, j_24, t);
      }
    else
      {
        t = u_61;
        t = xtc_transform_term_2_0(k_24, m_24, t);
      }
  }
  t = if_keep5_1_0(n_24, t);
  e_56 = t;
  {
    ATerm a_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_57 = ATgetArgument(t, 0);
            {
              ATerm f_35 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(e_56);
              f_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_57);
              i_12 = t;
              t = SSLsetAnnotations(i_12, f_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_56;
          }
        LocalPopChoice(c_62);
        t = xtc_transform_file_2_0(w_24, z_24, t);
      }
    else
      {
        t = a_62;
        t = xtc_transform_term_2_0(a_25, b_25, t);
      }
  }
  t = if_keep5_1_0(d_25, t);
  d_56 = t;
  {
    ATerm d_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_58 = ATgetArgument(t, 0);
            {
              ATerm l_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(d_56);
              l_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_58);
              j_12 = t;
              t = SSLsetAnnotations(j_12, l_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_56;
          }
        LocalPopChoice(h_62);
        t = xtc_transform_file_2_0(g_25, h_25, t);
      }
    else
      {
        t = d_62;
        t = xtc_transform_term_2_0(k_25, l_25, t);
      }
  }
  t = if_keep5_1_0(m_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm i_62 = t;
    int j_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL,y_58 = NULL,b_59 = NULL;
        x_58 = t;
        t = term_q_35;
        y_58 = t;
        t = term_h_38;
        b_59 = t;
        t = term_i_38;
        t = o_14(y_58, b_59, t);
        t = x_58;
        LocalPopChoice(j_62);
        {
          ATerm c_59 = NULL;
          c_59 = t;
          {
            ATerm l_62 = t;
            int m_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_59 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_59 = ATgetArgument(t, 0);
                    {
                      ATerm w_35 = NULL,k_12 = NULL;
                      t = SSLgetAnnotations(c_59);
                      w_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_59);
                      k_12 = t;
                      t = SSLsetAnnotations(k_12, w_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = c_59;
                  }
                LocalPopChoice(m_62);
                t = xtc_transform_file_2_0(p_25, q_25, t);
              }
            else
              {
                t = l_62;
                t = xtc_transform_term_2_0(r_25, u_25, t);
              }
          }
        }
      }
    else
      {
        t = i_62;
        {
          ATerm t_59 = NULL;
          t_59 = t;
          {
            ATerm o_62 = t;
            int p_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_59 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_59 = ATgetArgument(t, 0);
                    {
                      ATerm m_36 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(t_59);
                      m_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_59);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, m_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_59;
                  }
                LocalPopChoice(p_62);
                t = xtc_transform_file_2_0(x_25, a_26, t);
              }
            else
              {
                t = o_62;
                t = xtc_transform_term_2_0(b_26, c_26, t);
              }
          }
          t = if_keep2_1_0(d_26, t);
        }
      }
  }
  x_36 = t;
  t = term_q_62;
  u_36 = t;
  t = x_36;
  t = pass_warnings_0_0(t);
  v_36 = t;
  t = x_36;
  t = comp_0_2(u_36, v_36, t);
  a_56 = t;
  {
    ATerm r_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_60 = ATgetArgument(t, 0);
            {
              ATerm d_37 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(a_56);
              d_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_60);
              o_12 = t;
              t = SSLsetAnnotations(o_12, d_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_56;
          }
        LocalPopChoice(s_62);
        t = xtc_transform_file_2_0(f_26, g_26, t);
      }
    else
      {
        t = r_62;
        t = xtc_transform_term_2_0(i_26, k_26, t);
      }
  }
  z_55 = t;
  {
    ATerm u_62 = t;
    int v_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_61 = ATgetArgument(t, 0);
            {
              ATerm s_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(z_55);
              s_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_61);
              p_12 = t;
              t = SSLsetAnnotations(p_12, s_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_55;
          }
        LocalPopChoice(v_62);
        t = xtc_transform_file_2_0(o_26, p_26, t);
      }
    else
      {
        t = u_62;
        t = xtc_transform_term_2_0(q_26, s_26, t);
      }
  }
  t = if_keep2_1_0(u_26, t);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  t = term_u_35;
  x_55 = t;
  t = (ATerm) ATinsert(CheckATermList(w_55), term_w_62);
  y_55 = t;
  t = SSL_printnl(x_55, y_55);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(w_55), term_w_62));
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_a_63;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm w_56 = NULL;
  t = pass_verbose_0_0(t);
  w_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), term_w_38);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  t = term_a_63;
  return(t);
}
static ATerm a_23 (ATerm t)
{
  ATerm x_56 = NULL;
  t = pass_verbose_0_0(t);
  x_56 = t;
  t = (ATerm) ATinsert(CheckATermList(x_56), term_w_38);
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_b_63;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm d_57 = NULL;
  t = pass_verbose_0_0(t);
  d_57 = t;
  t = (ATerm) ATinsert(CheckATermList(d_57), term_w_38);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  t = term_b_63;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm e_57 = NULL;
  t = pass_verbose_0_0(t);
  e_57 = t;
  t = (ATerm) ATinsert(CheckATermList(e_57), term_w_38);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = save_as_1_0(m_23, t);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = save_as_1_0(q_23, t);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = save_as_1_0(u_23, t);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_i_63;
  return(t);
}
static ATerm w_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm k_57 = NULL;
  t = pass_verbose_0_0(t);
  k_57 = t;
  t = (ATerm) ATinsert(CheckATermList(k_57), term_w_38);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm l_57 = NULL;
  t = pass_verbose_0_0(t);
  l_57 = t;
  t = (ATerm) ATinsert(CheckATermList(l_57), term_w_38);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = save_as_1_0(h_24, t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm s_57 = NULL;
  t = pass_verbose_0_0(t);
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(s_57), term_w_38);
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm t_57 = NULL;
  t = pass_verbose_0_0(t);
  t_57 = t;
  t = (ATerm) ATinsert(CheckATermList(t_57), term_w_38);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = save_as_1_0(v_24, t);
  return(t);
}
static ATerm v_24 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm c_58 = NULL;
  t = pass_verbose_0_0(t);
  c_58 = t;
  t = (ATerm) ATinsert(CheckATermList(c_58), term_w_38);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm f_58 = NULL;
  t = pass_verbose_0_0(t);
  f_58 = t;
  t = (ATerm) ATinsert(CheckATermList(f_58), term_w_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(f_25, t);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_x_63;
  return(t);
}
static ATerm h_25 (ATerm t)
{
  ATerm v_58 = NULL;
  t = pass_verbose_0_0(t);
  v_58 = t;
  t = (ATerm) ATinsert(CheckATermList(v_58), term_w_38);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = term_x_63;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm w_58 = NULL;
  t = pass_verbose_0_0(t);
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(w_58), term_w_38);
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = save_as_1_0(n_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm k_59 = NULL;
  t = pass_verbose_0_0(t);
  k_59 = t;
  t = (ATerm) ATinsert(CheckATermList(k_59), term_w_38);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_w_38);
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm a_60 = NULL;
  t = pass_verbose_0_0(t);
  a_60 = t;
  t = (ATerm) ATinsert(CheckATermList(a_60), term_w_38);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm d_60 = NULL;
  t = pass_verbose_0_0(t);
  d_60 = t;
  t = (ATerm) ATinsert(CheckATermList(d_60), term_w_38);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = save_as_1_0(e_26, t);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_b_64;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm t_60 = NULL;
  t = pass_verbose_0_0(t);
  t_60 = t;
  t = (ATerm) ATinsert(CheckATermList(t_60), term_w_38);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm u_60 = NULL;
  t = pass_verbose_0_0(t);
  u_60 = t;
  t = (ATerm) ATinsert(CheckATermList(u_60), term_w_38);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_w_38);
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm s_26 (ATerm t)
{
  ATerm g_61 = NULL;
  t = pass_verbose_0_0(t);
  g_61 = t;
  t = (ATerm) ATinsert(CheckATermList(g_61), term_w_38);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  t = save_as_1_0(x_26, t);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_h_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(e_22, t);
  t = profile_p__2_0(j_22, k_22, t);
  return(t);
}
static ATerm o_14 (ATerm z_64, ATerm a_65, ATerm t)
{
  ATerm v_61 = NULL;
  t = lookup_table_0_1(z_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(a_65, v_61, t);
  return(t);
}
static ATerm r_13 (ATerm l_63, ATerm m_63, ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  y_61 = t;
  {
    ATerm i_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
        t = o_14(l_63, m_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_64 = ATgetFirst((ATermList) t);
            x_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_64);
        {
          ATerm z_61 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, l_63, m_63, x_61);
          t = lookup_table_0_1(l_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_14(m_63, x_61, z_61, t);
          t = (ATerm) ATmakeAppl(sym__3, l_63, m_63, x_61);
        }
      }
    else
      {
        t = i_64;
        {
          ATerm b_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
          t = lookup_table_0_1(l_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_14(m_63, b_62, t);
          t = (ATerm) ATmakeAppl(sym__2, l_63, m_63);
        }
      }
  }
  t = y_61;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,k_62 = NULL,n_62 = NULL,t_62 = NULL,x_62 = NULL;
  k_62 = t;
  t = q_118(t);
  g_62 = t;
  {
    ATerm r_64 = t;
    int t_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_62 = NULL;
        t = term_t_56;
        y_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_62, term_t_56);
        t = o_14(g_62, y_62, t);
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
        t = r_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_62 = ATgetFirst((ATermList) t);
      e_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_62, term_t_56, e_62);
  t = lookup_table_0_1(g_62, t);
  x_62 = t;
  t = term_t_56;
  n_62 = t;
  t = x_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(n_62, e_62, t_62, t);
  t = f_62;
  {
    static ATerm y_26 (ATerm t);
    static ATerm y_26 (ATerm t)
    {
      ATerm z_62 = NULL;
      z_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_62, z_62);
      t = r_13(g_62, z_62, t);
      return(t);
    }
    t = map_1_0(y_26, t);
  }
  t = k_62;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm v_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_97(t);
      t = s_97(t);
      LocalPopChoice(w_64);
    }
  else
    {
      t = v_64;
      t = s_97(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm c_63 = NULL,j_63 = NULL,n_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
  j_63 = t;
  t = p_118(t);
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_63, term_t_56);
  {
    ATerm y_64 = t;
    int b_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_63 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_65 = ATgetArgument(t, 0);
            ATerm e_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_56;
        y_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_63, term_t_56);
        t = o_14(c_63, y_63, t);
        LocalPopChoice(b_65);
      }
    else
      {
        t = y_64;
        t = (ATerm) ATempty;
      }
  }
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_63, term_t_56, (ATerm) ATinsert(CheckATermList(n_63), (ATerm) ATempty));
  t = lookup_table_0_1(c_63, t);
  t_63 = t;
  t = term_t_56;
  q_63 = t;
  t = (ATerm) ATinsert(CheckATermList(n_63), (ATerm) ATempty);
  r_63 = t;
  t = t_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(q_63, r_63, s_63, t);
  t = j_63;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_f_57;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm x_64 = NULL;
  x_64 = t;
  {
    ATerm f_65 = t;
    int g_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_64);
        LocalPopChoice(g_65);
      }
    else
      {
        t = f_65;
        t = x_64;
      }
  }
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm j_64 = NULL;
  static ATerm b_27 (ATerm t);
  static ATerm b_27 (ATerm t)
  {
    ATerm k_64 = NULL;
    k_64 = t;
    {
      ATerm k_65 = t;
      int l_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_64 = NULL,q_64 = NULL;
          t = term_f_57;
          l_64 = t;
          t = term_t_56;
          q_64 = t;
          t = term_e_58;
          t = o_14(l_64, q_64, t);
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
        if(((j_64 != NULL) && (j_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_64 = ATgetFirst((ATermList) t);
        {
          ATerm m_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_64;
    t = map_1_0(e_27, t);
    t = k_64;
    t = end_scope_1_0(f_27, t);
    return(t);
  }
  t = begin_scope_1_0(z_26, t);
  t = restore_always_2_0(t_131, b_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm d_65 = NULL;
  d_65 = t;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
        t = term_q_35;
        i_65 = t;
        t = term_r_35;
        j_65 = t;
        t = term_s_35;
        t = o_14(i_65, j_65, t);
        h_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_65, term_z_38);
        t = geq_0_0(t);
        t = d_65;
        t = e_122(t);
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        t = d_65;
      }
  }
  return(t);
}
static ATerm t_13 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm t_65 = t;
  int u_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      LocalPopChoice(u_65);
    }
  else
    {
      t = t_65;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
static ATerm v_13 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm d_66 = t;
  int e_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_43, e_43);
      LocalPopChoice(e_66);
    }
  else
    {
      t = d_66;
      t = SSL_subtr(d_43, e_43);
    }
  return(t);
}
static ATerm w_13 (ATerm i_60, ATerm k_60, ATerm m_60, ATerm o_60, ATerm j_60, ATerm l_60, ATerm n_60, ATerm p_60, ATerm t)
{
  ATerm n_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_60, j_60);
  t = v_13(i_60, j_60, t);
  n_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
  t = v_13(k_60, l_60, t);
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_60, n_60);
  t = v_13(m_60, n_60, t);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
  t = v_13(o_60, p_60, t);
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym__4, n_65, q_65, r_65, s_65);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_66 = ATgetArgument(t, 0);
      if(match_cons(i_66, sym__4))
        {
          v_65 = ATgetArgument(i_66, 0);
          w_65 = ATgetArgument(i_66, 1);
          x_65 = ATgetArgument(i_66, 2);
          y_65 = ATgetArgument(i_66, 3);
        }
      else
        _fail(t);
      {
        ATerm j_66 = ATgetArgument(t, 1);
        if(match_cons(j_66, sym__4))
          {
            z_65 = ATgetArgument(j_66, 0);
            a_66 = ATgetArgument(j_66, 1);
            b_66 = ATgetArgument(j_66, 2);
            c_66 = ATgetArgument(j_66, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_13(v_65, w_65, x_65, y_65, z_65, a_66, b_66, c_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,k_66 = NULL,m_66 = NULL,o_66 = NULL,p_66 = NULL,t_66 = NULL,x_66 = NULL,y_66 = NULL,b_67 = NULL,d_67 = NULL,f_67 = NULL;
  p_66 = t;
  t = times_0_0(t);
  f_66 = t;
  t = p_66;
  t = s_125(t);
  g_66 = t;
  t = times_0_0(t);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_66, f_66);
  t = diff_times_0_0(t);
  m_66 = t;
  if(match_cons(t, sym__4))
    {
      b_67 = ATgetArgument(t, 0);
      {
        ATerm l_66 = ATgetArgument(t, 1);
      }
      d_67 = ATgetArgument(t, 2);
      {
        ATerm n_66 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_67, d_67);
  t = t_13(b_67, d_67, t);
  f_67 = t;
  t = SSL_TicksToSeconds(f_67);
  h_66 = t;
  t = m_66;
  if(match_cons(t, sym__4))
    {
      ATerm q_66 = ATgetArgument(t, 0);
      t_66 = ATgetArgument(t, 1);
      {
        ATerm r_66 = ATgetArgument(t, 2);
      }
      x_66 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_66, x_66);
  t = t_13(t_66, x_66, t);
  y_66 = t;
  t = SSL_TicksToSeconds(y_66);
  k_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_66), term_u_66), h_66), term_s_66);
  t = r_125(t);
  t = g_66;
  return(t);
}
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
  g_67 = t;
  t = w_104(t);
  h_67 = t;
  t = term_u_35;
  i_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_67), h_67);
  j_67 = t;
  t = SSL_printnl(i_67, j_67);
  t = g_67;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL;
  k_67 = t;
  t = term_q_35;
  o_67 = t;
  t = term_v_66;
  p_67 = t;
  t = term_w_66;
  t = o_14(o_67, p_67, t);
  l_67 = t;
  t = term_k_37;
  m_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_68), term_l_68), term_w_67), term_u_67), term_e_67), term_c_67), term_a_67), l_67), term_z_66);
  n_67 = t;
  t = SSL_printnl(m_67, n_67);
  t = k_67;
  return(t);
}
static ATerm x_13 (ATerm s_54, ATerm t_54, ATerm t)
{
  t = SSL_copy(s_54, t_54);
  return(t);
}
static ATerm y_13 (ATerm f_68, ATerm t)
{
  t = SSL_hashtable_keys(f_68);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  static ATerm g_27 (ATerm t);
  static ATerm g_27 (ATerm t)
  {
    ATerm s_67 = NULL,t_67 = NULL;
    s_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_67), s_67);
    t = o_14(not_null(q_67), s_67, t);
    t_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_67, t_67);
    return(t);
  }
  if(((q_67 != NULL) && (q_67 != t)))
    _fail(t);
  else
    q_67 = t;
  t = lookup_table_0_1(q_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_13(r_67, t);
  t = map_1_0(g_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm v_67 = NULL;
  v_67 = t;
  {
    ATerm o_68 = t;
    int s_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_67 = NULL,j_68 = NULL,k_68 = NULL;
        t = term_q_35;
        j_68 = t;
        t = term_r_35;
        k_68 = t;
        t = term_s_35;
        t = o_14(j_68, k_68, t);
        x_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_67, term_i_45);
        t = geq_0_0(t);
        t = v_67;
        t = i_122(t);
        LocalPopChoice(s_68);
      }
    else
      {
        t = o_68;
        t = v_67;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm n_68 = NULL;
  n_68 = t;
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
        t = term_q_35;
        q_68 = t;
        t = term_r_35;
        r_68 = t;
        t = term_s_35;
        t = o_14(q_68, r_68, t);
        p_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_68, term_n_42);
        t = geq_0_0(t);
        t = n_68;
        t = h_122(t);
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
        t = n_68;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
  d_69 = t;
  if(match_cons(t, sym__2))
    {
      e_69 = ATgetArgument(t, 0);
      f_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_68 = t;
    int w_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_69;
        if((e_69 != t))
          {
            _fail(t);
          }
        t = d_69;
        LocalPopChoice(w_68);
      }
    else
      {
        t = v_68;
        t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
        {
          ATerm x_68 = t;
          int y_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_69, f_69);
              LocalPopChoice(y_68);
            }
          else
            {
              t = x_68;
              t = SSL_gtr(e_69, f_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,u_69 = NULL,w_69 = NULL;
        t = term_q_35;
        u_69 = t;
        t = term_r_35;
        w_69 = t;
        t = term_s_35;
        t = o_14(u_69, w_69, t);
        s_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_69, term_f_48);
        t = geq_0_0(t);
        t = p_69;
        t = j_122(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = z_68;
        t = p_69;
      }
  }
  return(t);
}
static ATerm b_14 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  t = w_109(t);
  {
    static ATerm h_27 (ATerm t);
    static ATerm h_27 (ATerm t)
    {
      ATerm y_69 = NULL;
      y_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, y_69);
      t = v_109(t);
      return(t);
    }
    t = fetch_1_0(h_27, t);
  }
  t = d_31;
  return(t);
}
static ATerm c_14 (ATerm s_109 (ATerm), ATerm a_31, ATerm z_30, ATerm t)
{
  static ATerm w_70 (ATerm t);
  static ATerm w_70 (ATerm t)
  {
    ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
    r_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_70 = ATgetFirst((ATermList) t);
            t_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_69 = t;
          int c_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_70;
              {
                static ATerm i_27 (ATerm t);
                static ATerm i_27 (ATerm t)
                {
                  t = z_30;
                  return(t);
                }
                t = b_14(s_109, i_27, s_70, t_70, t);
              }
              t = w_70(t);
              LocalPopChoice(c_69);
            }
          else
            {
              t = b_69;
              {
                ATerm t_38 = NULL,y_38 = NULL,g_13 = NULL;
                t = SSLgetAnnotations(r_70);
                t_38 = t;
                t = t_70;
                t = w_70(t);
                y_38 = t;
                t = (ATerm) ATinsert(CheckATermList(y_38), s_70);
                g_13 = t;
                t = SSLsetAnnotations(g_13, t_38);
              }
            }
        }
      }
    return(t);
  }
  t = a_31;
  t = w_70(t);
  return(t);
}
static ATerm j_27 (ATerm t)
{
  ATerm q_71 = NULL;
  if(match_cons(t, sym__2))
    {
      q_71 = ATgetArgument(t, 0);
      if((q_71 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,e_71 = NULL,f_71 = NULL;
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
  {
    ATerm g_69 = t;
    int h_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_69 = ATgetArgument(t, 0);
            ATerm j_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
        t = o_14(d_64, e_64, t);
        LocalPopChoice(h_69);
      }
    else
      {
        t = g_69;
        t = (ATerm) ATempty;
      }
  }
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_71, f_64);
  t = c_14(j_27, e_71, f_64, t);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_64, e_64, b_71);
  t = lookup_table_0_1(d_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(e_64, b_71, f_71, t);
  t = a_71;
  return(t);
}
static ATerm e_14 (ATerm a_127 (ATerm), ATerm n_64, ATerm m_64, ATerm t)
{
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm r_71 = NULL,v_71 = NULL;
    if(match_cons(t, sym__2))
      {
        r_71 = ATgetArgument(t, 0);
        v_71 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_64, r_71, v_71);
    t = a_127(t);
    return(t);
  }
  t = m_64;
  t = map_1_0(k_27, t);
  return(t);
}
static ATerm i_14 (ATerm u_39, ATerm v_39, ATerm t)
{
  t = SSL_access(u_39, v_39);
  return(t);
}
static ATerm f_73 (ATerm u_72, ATerm t)
{
  t = SSL_fclose(u_72);
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
        ATerm k_69 = t;
        int l_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_72);
            LocalPopChoice(l_69);
          }
        else
          {
            t = k_69;
            t = f_73(y_72, t);
          }
      }
    }
  else
    {
      t = f_73(y_72, t);
    }
  return(t);
}
static ATerm f_14 (ATerm y_24, ATerm t)
{
  t = SSL_read_term_from_stream(y_24);
  return(t);
}
static ATerm g_14 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_fopen(d_40, e_40);
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
  ATerm k_73 = NULL;
  t = SSL_stdout_stream();
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_73 = NULL;
  t = SSL_stderr_stream();
  m_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_73);
  return(t);
}
static ATerm f_75 (ATerm s_73, ATerm t)
{
  ATerm t_73 = NULL;
  t = SSL_explode_term(s_73);
  if(match_cons(t, sym__2))
    {
      ATerm m_69 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_69) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_69 = ATgetArgument(t, 1);
        if(((ATgetType(n_69) == AT_LIST) && !(ATisEmpty(n_69))))
          {
            t_73 = ATgetFirst((ATermList) n_69);
            {
              ATerm o_69 = (ATerm) ATgetNext((ATermList) n_69);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_75 (ATerm y_73, ATerm c_74, ATerm e_74, ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,m_74 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(e_74);
  h_74 = t;
  t = y_73;
  if(match_cons(t, sym_Path_1))
    {
      m_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_74, c_74);
  a_14 = t;
  t = SSLsetAnnotations(a_14, h_74);
  if(match_cons(t, sym__2))
    {
      f_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14(f_74, g_74, t);
  return(t);
}
static ATerm j_75 (ATerm p_74, ATerm q_74, ATerm r_74, ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,v_74 = NULL,a_75 = NULL,q_14 = NULL;
  t = SSLgetAnnotations(r_74);
  v_74 = t;
  t = SSL_is_string(p_74);
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_75, q_74);
  q_14 = t;
  t = SSLsetAnnotations(q_14, v_74);
  if(match_cons(t, sym__2))
    {
      s_74 = ATgetArgument(t, 0);
      t_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14(s_74, t_74, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  if(match_cons(t, sym__2))
    {
      d_75 = ATgetArgument(t, 0);
      e_75 = ATgetArgument(t, 1);
      {
        ATerm q_69 = t;
        int r_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_75(c_75, t);
            LocalPopChoice(r_69);
          }
        else
          {
            t = q_69;
            {
              ATerm t_69 = t;
              int v_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_75(d_75, e_75, c_75, t);
                  LocalPopChoice(v_69);
                }
              else
                {
                  t = t_69;
                  t = j_75(d_75, e_75, c_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_75(c_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,t_75 = NULL;
  t_75 = t;
  {
    ATerm x_69 = t;
    int z_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_75, term_a_70);
        t = h_14(t);
        LocalPopChoice(z_69);
      }
    else
      {
        t = x_69;
        {
          ATerm g_40 = NULL,j_40 = NULL;
          t = term_b_70;
          j_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_70, t_75);
          t = u_14(j_40, t_75, t);
          g_40 = t;
          t = SSL_perror(g_40);
          _fail(t);
        }
      }
  }
  m_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(n_75, t);
  l_75 = t;
  t = m_75;
  t = fclose_0_0(t);
  t = l_75;
  return(t);
}
static ATerm l_27 (ATerm t)
{
  t = term_c_70;
  return(t);
}
static ATerm m_27 (ATerm t)
{
  t = term_d_70;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_70 = t;
  int f_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_75 = NULL,z_75 = NULL;
      y_75 = t;
      t = (ATerm) ATinsert(ATempty, term_g_70);
      z_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_75, (ATerm) ATinsert(ATempty, term_g_70));
      t = i_14(y_75, z_75, t);
      LocalPopChoice(f_70);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_70;
      {
        ATerm h_70 = t;
        int i_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_70 = t;
            if((PushChoice() == 0))
              {
                ATerm a_76 = NULL,c_76 = NULL;
                a_76 = t;
                t = (ATerm) ATinsert(ATempty, term_j_57);
                c_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_76, (ATerm) ATinsert(ATempty, term_j_57));
                t = i_14(a_76, c_76, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_70;
              }
            t = debug_1_0(l_27, t);
            LocalPopChoice(i_70);
          }
        else
          {
            t = h_70;
            t = debug_1_0(m_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_27 (ATerm t)
{
  t = debug_1_0(p_27, t);
  return(t);
}
static ATerm p_27 (ATerm t)
{
  t = term_k_70;
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = debug_1_0(r_27, t);
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_l_70;
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  t = term_u_35;
  z_76 = t;
  t = (ATerm) ATinsert(ATempty, term_m_70);
  a_77 = t;
  t = SSL_printnl(z_76, a_77);
  t = y_76;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  if(match_cons(t, sym__3))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
      e_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_14(c_77, d_77, e_77, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  t = term_u_35;
  g_77 = t;
  t = (ATerm) ATinsert(ATempty, term_n_70);
  h_77 = t;
  t = SSL_printnl(g_77, h_77);
  t = f_77;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm j_77 = NULL,l_77 = NULL,m_77 = NULL;
  j_77 = t;
  t = term_u_35;
  l_77 = t;
  t = (ATerm) ATinsert(ATempty, term_m_70);
  m_77 = t;
  t = SSL_printnl(l_77, m_77);
  t = j_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,j_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  d_76 = t;
  t = if_verbose5_1_0(o_27, t);
  {
    ATerm o_70 = t;
    if((PushChoice() == 0))
      {
        ATerm u_76 = NULL,w_76 = NULL;
        t = term_p_70;
        u_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_76);
        w_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_70, (ATerm) ATmakeAppl(sym_Imported_1, d_76));
        t = o_14(u_76, w_76, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_70;
      }
  }
  f_76 = t;
  t = term_p_70;
  p_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, term_q_70, (ATerm) ATinsert(ATempty, d_76));
  t = lookup_table_0_1(p_76, t);
  t_76 = t;
  t = term_q_70;
  q_76 = t;
  t = (ATerm) ATinsert(ATempty, d_76);
  r_76 = t;
  t = t_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(q_76, r_76, s_76, t);
  t = f_76;
  t = if_verbose4_1_0(q_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_27, t);
  e_76 = t;
  t = term_p_70;
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_70, e_76);
  t = e_14(t_27, n_76, e_76, t);
  t = if_verbose6_1_0(x_27, t);
  t = term_p_70;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, (ATerm)ATmakeAppl(sym_Imported_1, d_76), (ATerm) ATempty);
  t = lookup_table_0_1(g_76, t);
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_76);
  h_76 = t;
  t = (ATerm) ATempty;
  j_76 = t;
  t = m_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(h_76, j_76, l_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, (ATerm)ATmakeAppl(sym_Imported_1, d_76), (ATerm) ATempty);
  t = if_verbose4_1_0(y_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm d_78 = NULL,f_78 = NULL,g_78 = NULL;
  d_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_78;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_78 = ATgetFirst((ATermList) t);
          g_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_70 = t;
        int v_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL,h_41 = NULL,m_41 = NULL,n_18 = NULL;
            t = SSLgetAnnotations(d_78);
            y_40 = t;
            t = f_78;
            t = k_113(t);
            h_41 = t;
            t = g_78;
            t = filter_1_0(k_113, t);
            m_41 = t;
            t = (ATerm) ATinsert(CheckATermList(m_41), h_41);
            n_18 = t;
            t = SSLsetAnnotations(n_18, y_40);
            LocalPopChoice(v_70);
          }
        else
          {
            t = u_70;
            t = g_78;
            t = filter_1_0(k_113, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  static ATerm k_78 (ATerm t);
  static ATerm k_78 (ATerm t)
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_97(t);
        t = k_78(t);
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
        t = w_97(t);
      }
    return(t);
  }
  t = k_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_70 = t;
  int c_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_78 = NULL,m_78 = NULL;
      t = term_q_35;
      l_78 = t;
      t = term_d_71;
      m_78 = t;
      t = term_g_71;
      t = o_14(l_78, m_78, t);
      LocalPopChoice(c_71);
    }
  else
    {
      t = z_70;
      {
        ATerm h_71 = t;
        int i_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_78 = NULL;
            t = term_j_71;
            n_78 = t;
            t = SSL_getenv(n_78);
            LocalPopChoice(i_71);
          }
        else
          {
            t = h_71;
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
  t = term_k_71;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL;
  t = term_p_70;
  w_78 = t;
  t = term_l_71;
  x_78 = t;
  t = term_m_71;
  t = o_14(w_78, x_78, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_71 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_71;
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
  t = term_o_71;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_78 = NULL;
  t = if_verbose5_1_0(z_27, t);
  r_78 = t;
  {
    ATerm p_71 = t;
    int s_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,t_78 = NULL;
        t = term_p_70;
        s_78 = t;
        t = term_q_70;
        t_78 = t;
        t = term_t_71;
        t = o_14(s_78, t_78, t);
        LocalPopChoice(s_71);
      }
    else
      {
        t = p_71;
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
  t = r_78;
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
  t = term_u_71;
  return(t);
}
static ATerm z_79 (ATerm e_79, ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL;
  t = term_p_70;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_79);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_70, (ATerm) ATmakeAppl(sym_Tool_1, e_79));
  t = o_14(i_79, j_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_71 = ATgetFirst((ATermList) t);
      if(match_cons(w_71, sym__2))
        {
          ATerm y_71 = ATgetArgument(w_71, 0);
          h_79 = ATgetArgument(w_71, 1);
        }
      else
        _fail(t);
      {
        ATerm x_71 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_u_71;
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = term_p_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_28, t);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  t = term_z_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_72 = t;
  int b_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
      t = if_verbose5_1_0(e_28, t);
      t = xtc_load_0_0(t);
      m_79 = t;
      if(match_cons(t, sym__2))
        {
          k_79 = ATgetArgument(t, 0);
          l_79 = ATgetArgument(t, 1);
          {
            ATerm c_72 = t;
            int d_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
                t = term_p_70;
                s_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_79);
                t_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_70, (ATerm) ATmakeAppl(sym_Tool_1, k_79));
                t = o_14(s_79, t_79, t);
                {
                  static ATerm g_28 (ATerm t);
                  static ATerm g_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_79 != ATgetArgument(t, 0)))
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
                LocalPopChoice(d_72);
              }
            else
              {
                t = c_72;
                t = z_79(m_79, t);
              }
          }
        }
      else
        {
          t = z_79(m_79, t);
        }
      t = if_verbose5_1_0(h_28, t);
      LocalPopChoice(b_72);
    }
  else
    {
      t = a_72;
      {
        ATerm y_79 = NULL,e_42 = NULL,g_42 = NULL;
        y_79 = t;
        t = term_u_35;
        e_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_72), y_79), term_e_72);
        g_42 = t;
        t = SSL_printnl(e_42, g_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_72), y_79), term_e_72);
        t = if_verbose5_1_0(l_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_14 (ATerm r_58, ATerm q_58, ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = r_58;
  {
    ATerm g_72 = t;
    int h_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_80 = NULL;
        t = term_q_35;
        l_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, r_58);
        t = o_14(l_80, r_58, t);
        LocalPopChoice(h_72);
      }
    else
      {
        t = g_72;
        t = (ATerm) ATempty;
      }
  }
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_58, e_80);
  t = conc_0_0(t);
  d_80 = t;
  t = term_q_35;
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, r_58, d_80);
  t = lookup_table_0_1(f_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(r_58, d_80, g_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, r_58, d_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_80 = NULL,y_80 = NULL,z_80 = NULL;
      t = term_f_37;
      t = r_0(t);
      w_80 = t;
      t = term_i_72;
      y_80 = t;
      t = term_j_72;
      z_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_72, term_j_72, w_80);
      t = p_14(y_80, z_80, w_80, t);
      _fail(t);
    }
  else
    {
      ATerm j_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_80 = ATgetFirst((ATermList) t);
          t_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_80 = ATgetFirst((ATermList) t);
          v_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_80;
      t = p_0(t);
      t = u_80;
      t = q_0(t);
      j_81 = t;
      t = (ATerm) ATinsert(CheckATermList(v_80), j_81);
    }
  return(t);
}
static ATerm s_28 (ATerm t)
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
static ATerm v_28 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  t = term_r_35;
  n_81 = t;
  t = term_m_35;
  o_81 = t;
  t = term_k_72;
  t = t_14(n_81, o_81, t);
  t = term_l_72;
  return(t);
}
static ATerm w_28 (ATerm t)
{
  t = term_m_72;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_28 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  p_81 = t;
  t = SSL_string_to_int(p_81);
  q_81 = t;
  t = term_r_35;
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, q_81);
  t = t_14(r_81, q_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_81);
  return(t);
}
static ATerm c_29 (ATerm t)
{
  t = term_n_72;
  return(t);
}
static ATerm d_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL;
  t = term_o_72;
  s_81 = t;
  t = term_f_37;
  t_81 = t;
  t = term_p_72;
  t = t_14(s_81, t_81, t);
  t = term_q_72;
  return(t);
}
static ATerm f_29 (ATerm t)
{
  t = term_r_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_72 = t;
  int t_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_28, v_28, w_28, t);
      LocalPopChoice(t_72);
    }
  else
    {
      t = s_72;
      {
        ATerm v_72 = t;
        int w_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_28, z_28, c_29, t);
            LocalPopChoice(w_72);
          }
        else
          {
            t = v_72;
            t = Option_3_0(d_29, e_29, f_29, t);
          }
      }
    }
  return(t);
}
static ATerm k_14 (ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm z_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_81 = NULL,v_81 = NULL,z_81 = NULL;
      t = term_q_35;
      z_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, o_58);
      t = o_14(z_81, o_58, t);
      t = term_q_35;
      u_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, o_58);
      t = lookup_table_0_1(u_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          v_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_14(o_58, v_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, o_58);
      LocalPopChoice(a_73);
    }
  else
    {
      t = z_72;
      t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
      t = t_14(o_58, p_58, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  static ATerm w_82 (ATerm t);
  static ATerm w_82 (ATerm t)
  {
    ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL;
    v_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_82 = ATgetFirst((ATermList) t);
        u_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_42 = NULL,v_42 = NULL,q_18 = NULL;
          t = SSLgetAnnotations(v_82);
          o_42 = t;
          t = u_82;
          t = w_82(t);
          v_42 = t;
          t = (ATerm) ATinsert(CheckATermList(v_42), t_82);
          q_18 = t;
          t = SSLsetAnnotations(q_18, o_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_82;
        t = y_105(t);
      }
    return(t);
  }
  t = w_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_82 = NULL,e_82 = NULL,f_82 = NULL;
  b_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_82;
    }
  else
    {
      static ATerm g_29 (ATerm t);
      static ATerm g_29 (ATerm t)
      {
        t = not_null(f_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_82 = ATgetFirst((ATermList) t);
          if(((f_82 != NULL) && (f_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_82;
      t = at_end_1_0(g_29, t);
    }
  return(t);
}
static ATerm i_83 (ATerm a_83, ATerm t)
{
  ATerm b_83 = NULL;
  t = SSL_explode_term(a_83);
  if(match_cons(t, sym__2))
    {
      ATerm b_73 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_73) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_83;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL;
  f_83 = t;
  if(match_cons(t, sym__2))
    {
      d_83 = ATgetArgument(t, 0);
      e_83 = ATgetArgument(t, 1);
      {
        ATerm c_73 = t;
        int d_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_29 (ATerm t);
            static ATerm h_29 (ATerm t)
            {
              t = e_83;
              return(t);
            }
            t = d_83;
            t = at_end_1_0(h_29, t);
            LocalPopChoice(d_73);
          }
        else
          {
            t = c_73;
            t = i_83(f_83, t);
          }
      }
    }
  else
    {
      t = i_83(f_83, t);
    }
  return(t);
}
static ATerm l_14 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  t = s_58;
  {
    ATerm e_73 = t;
    int g_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_83 = NULL;
        t = term_q_35;
        s_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, s_58);
        t = o_14(s_83, s_58, t);
        LocalPopChoice(g_73);
      }
    else
      {
        t = e_73;
        t = (ATerm) ATempty;
      }
  }
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_83, t_58);
  t = conc_0_0(t);
  j_83 = t;
  t = term_q_35;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, s_58, j_83);
  t = lookup_table_0_1(l_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(s_58, j_83, m_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, s_58, j_83);
  return(t);
}
static ATerm j_29 (ATerm t)
{
  ATerm u_83 = NULL;
  u_83 = t;
  if(match_string(t, "-o"))
    {
      t = u_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_83;
    }
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm v_83 = NULL,x_83 = NULL;
  v_83 = t;
  t = term_a_36;
  x_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, v_83);
  t = t_14(x_83, v_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_83);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_j_73;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_29, o_29, p_29, t);
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm z_83 = NULL;
  z_83 = t;
  if(match_string(t, "-i"))
    {
      t = z_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_83;
    }
  return(t);
}
static ATerm z_29 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL;
  a_84 = t;
  t = term_v_53;
  b_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_53, a_84);
  t = t_14(b_84, a_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_84);
  return(t);
}
static ATerm c_30 (ATerm t)
{
  t = term_l_73;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_29, z_29, c_30, t);
  return(t);
}
static ATerm m_30 (ATerm t)
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
static ATerm n_30 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
  p_84 = t;
  t = term_u_59;
  q_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_84), term_u_59);
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_59, (ATerm) ATinsert(ATinsert(ATempty, p_84), term_u_59));
  t = l_14(q_84, r_84, t);
  t = term_f_37;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_n_73;
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  if(match_string(t, "--main"))
    {
      t = s_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = s_84;
    }
  return(t);
}
static ATerm r_30 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL;
  t_84 = t;
  t = term_u_57;
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_57, t_84);
  t = t_14(u_84, t_84, t);
  t = term_f_37;
  return(t);
}
static ATerm s_30 (ATerm t)
{
  t = term_o_73;
  return(t);
}
static ATerm t_30 (ATerm t)
{
  ATerm v_84 = NULL;
  v_84 = t;
  if(match_string(t, "--library"))
    {
      t = v_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = v_84;
    }
  return(t);
}
static ATerm u_30 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  t = term_h_38;
  w_84 = t;
  t = term_f_37;
  x_84 = t;
  t = term_p_73;
  t = t_14(w_84, x_84, t);
  t = term_f_37;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  t = term_q_73;
  return(t);
}
static ATerm w_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  t = term_z_37;
  b_85 = t;
  t = (ATerm) ATinsert(ATempty, a_85);
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, (ATerm) ATinsert(ATempty, a_85));
  t = l_14(b_85, c_85, t);
  t = term_f_37;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_r_73;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  t = term_j_36;
  e_85 = t;
  t = (ATerm) ATinsert(ATempty, d_85);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, (ATerm) ATinsert(ATempty, d_85));
  t = j_14(e_85, f_85, t);
  t = term_f_37;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_u_73;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
  g_85 = t;
  t = term_c_36;
  h_85 = t;
  t = (ATerm) ATinsert(ATempty, g_85);
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATempty, g_85));
  t = j_14(h_85, i_85, t);
  t = term_f_37;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = term_v_73;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  t = term_l_36;
  j_85 = t;
  t = term_f_37;
  k_85 = t;
  t = term_w_73;
  t = t_14(j_85, k_85, t);
  t = term_f_37;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = term_x_73;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_n_59;
  l_85 = t;
  t = term_f_37;
  m_85 = t;
  t = term_z_73;
  t = t_14(l_85, m_85, t);
  t = term_f_37;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_d_74;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL;
  t = term_i_54;
  n_85 = t;
  t = term_f_37;
  o_85 = t;
  t = term_i_74;
  t = t_14(n_85, o_85, t);
  t = term_f_37;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_j_74;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  t = SSL_string_to_int(p_85);
  q_85 = t;
  t = term_w_40;
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, q_85);
  t = t_14(r_85, q_85, t);
  t = term_f_37;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  t = term_k_74;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_32 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,y_85 = NULL;
  u_85 = t;
  t = SSL_string_to_int(u_85);
  v_85 = t;
  t = term_b_41;
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, v_85);
  t = t_14(y_85, v_85, t);
  t = term_f_37;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_l_74;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_32 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL;
  t = term_n_43;
  z_85 = t;
  t = term_f_37;
  a_86 = t;
  t = term_n_74;
  t = k_14(z_85, a_86, t);
  t = term_f_37;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  t = term_o_74;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL;
  b_86 = t;
  if(match_string(t, "old"))
    {
      t = b_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = b_86;
    }
  t = term_k_55;
  c_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_55, b_86);
  t = t_14(c_86, b_86, t);
  t = term_f_37;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  t = term_u_74;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm f_86 = NULL;
  f_86 = t;
  if(match_string(t, "-h"))
    {
      t = f_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = f_86;
    }
  return(t);
}
static ATerm o_32 (ATerm t)
{
  ATerm g_86 = NULL,j_86 = NULL;
  t = term_w_74;
  g_86 = t;
  t = term_f_37;
  j_86 = t;
  t = term_x_74;
  t = t_14(g_86, j_86, t);
  t = term_f_37;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_y_74;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_z_74;
  k_86 = t;
  t = term_f_37;
  l_86 = t;
  t = term_b_75;
  t = t_14(k_86, l_86, t);
  t = term_f_37;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_g_75;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm m_86 = NULL;
  m_86 = t;
  if(match_string(t, "-v"))
    {
      t = m_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = m_86;
    }
  return(t);
}
static ATerm v_32 (ATerm t)
{
  ATerm n_86 = NULL,q_86 = NULL;
  t = term_i_75;
  n_86 = t;
  t = term_f_37;
  q_86 = t;
  t = term_k_75;
  t = t_14(n_86, q_86, t);
  t = term_f_37;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  t = term_o_75;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm r_86 = NULL;
  r_86 = t;
  if(match_string(t, "--warning"))
    {
      t = r_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = r_86;
    }
  return(t);
}
static ATerm y_32 (ATerm t)
{
  ATerm s_86 = NULL;
  s_86 = t;
  {
    ATerm p_75 = t;
    int q_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,s_18 = NULL;
        t = term_q_35;
        v_86 = t;
        t = term_y_53;
        w_86 = t;
        t = term_z_53;
        t = o_14(v_86, w_86, t);
        a_87 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_86 = ATgetFirst((ATermList) t);
            z_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_87);
        x_86 = t;
        t = y_86;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = z_86;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_86), y_86);
        s_18 = t;
        t = SSLsetAnnotations(s_18, x_86);
        t = term_y_53;
        t_86 = t;
        t = (ATerm) ATinsert(ATempty, s_86);
        u_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, s_86));
        t = t_14(t_86, u_86, t);
        LocalPopChoice(q_75);
      }
    else
      {
        t = p_75;
        {
          ATerm b_87 = NULL,c_87 = NULL;
          t = term_y_53;
          b_87 = t;
          t = (ATerm) ATinsert(ATempty, s_86);
          c_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, s_86));
          t = j_14(b_87, c_87, t);
        }
      }
  }
  t = term_f_37;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_r_75;
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
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL;
  d_87 = t;
  t = term_g_55;
  e_87 = t;
  t = term_z_38;
  f_87 = t;
  t = term_s_75;
  t = t_14(e_87, f_87, t);
  t = d_87;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm e_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_33 (ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL,i_87 = NULL;
  g_87 = t;
  t = term_i_55;
  h_87 = t;
  t = term_m_35;
  i_87 = t;
  t = term_u_75;
  t = t_14(h_87, i_87, t);
  t = g_87;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  t = term_i_55;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_33 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  t = term_f_60;
  j_87 = t;
  t = term_f_37;
  k_87 = t;
  t = term_v_75;
  t = t_14(j_87, k_87, t);
  t = term_f_37;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  t = term_w_75;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm x_75 = t;
  int b_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_76);
    }
  else
    {
      t = x_75;
      {
        ATerm i_76 = t;
        int k_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(k_76);
          }
        else
          {
            t = i_76;
            {
              ATerm o_76 = t;
              int v_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(m_30, n_30, p_30, t);
                  LocalPopChoice(v_76);
                }
              else
                {
                  t = o_76;
                  {
                    ATerm x_76 = t;
                    int b_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(q_30, r_30, s_30, t);
                        LocalPopChoice(b_77);
                      }
                    else
                      {
                        t = x_76;
                        {
                          ATerm i_77 = t;
                          int k_77 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_30, u_30, v_30, t);
                              LocalPopChoice(k_77);
                            }
                          else
                            {
                              t = i_77;
                              {
                                ATerm n_77 = t;
                                int o_77 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(w_30, x_30, y_30, t);
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
                                          t = ArgOption_3_0(b_31, c_31, f_31, t);
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
                                                t = ArgOption_3_0(g_31, h_31, i_31, t);
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
                                                      t = Option_3_0(j_31, k_31, l_31, t);
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
                                                            t = Option_3_0(m_31, r_31, s_31, t);
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
                                                                  t = Option_3_0(u_31, v_31, w_31, t);
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
                                                                        t = ArgOption_3_0(z_31, a_32, b_32, t);
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
                                                                              t = ArgOption_3_0(c_32, d_32, e_32, t);
                                                                              LocalPopChoice(c_78);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_78;
                                                                              {
                                                                                ATerm e_78 = t;
                                                                                int h_78 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(f_32, h_32, i_32, t);
                                                                                    LocalPopChoice(h_78);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_78;
                                                                                    {
                                                                                      ATerm i_78 = t;
                                                                                      int j_78 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(j_32, k_32, m_32, t);
                                                                                          LocalPopChoice(j_78);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_78;
                                                                                          {
                                                                                            ATerm o_78 = t;
                                                                                            int p_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = verbose_option_0_0(t);
                                                                                                LocalPopChoice(p_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_78;
                                                                                                {
                                                                                                  ATerm q_78 = t;
                                                                                                  int u_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(n_32, o_32, p_32, t);
                                                                                                      LocalPopChoice(u_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_78;
                                                                                                      {
                                                                                                        ATerm y_78 = t;
                                                                                                        int z_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(q_32, r_32, s_32, t);
                                                                                                            LocalPopChoice(z_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = y_78;
                                                                                                            {
                                                                                                              ATerm a_79 = t;
                                                                                                              int b_79 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(t_32, v_32, w_32, t);
                                                                                                                  LocalPopChoice(b_79);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_79;
                                                                                                                  {
                                                                                                                    ATerm c_79 = t;
                                                                                                                    int d_79 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(x_32, y_32, z_32, t);
                                                                                                                        LocalPopChoice(d_79);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_79;
                                                                                                                        {
                                                                                                                          ATerm f_79 = t;
                                                                                                                          int g_79 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(a_33, b_33, c_33, t);
                                                                                                                              LocalPopChoice(g_79);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = f_79;
                                                                                                                              {
                                                                                                                                ATerm n_79 = t;
                                                                                                                                int o_79 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(e_33, f_33, i_33, t);
                                                                                                                                    LocalPopChoice(o_79);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = n_79;
                                                                                                                                    t = Option_3_0(j_33, l_33, p_33, t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm m_14 (ATerm d_68, ATerm e_68, ATerm t)
{
  ATerm l_87 = NULL;
  t = SSL_hashtable_remove(e_68, d_68);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_87);
  return(t);
}
static ATerm n_14 (ATerm i_68, ATerm t)
{
  ATerm m_87 = NULL;
  t = SSL_hashtable_destroy(i_68);
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  n_87 = t;
  t = table_hashtable_0_0(t);
  o_87 = t;
  t = lookup_table_0_1(n_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(q_87, t);
  t = o_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(n_87, p_87, t);
  t = n_87;
  return(t);
}
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_80), term_e_67), term_j_80), term_i_80), term_h_80), term_e_67), term_c_80), term_b_80), term_a_80), term_x_79), term_w_79), term_v_79), term_u_79), term_q_79), term_p_79);
  return(t);
}
ATerm map_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  static ATerm f_88 (ATerm t);
  static ATerm f_88 (ATerm t)
  {
    ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
    c_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_88;
      }
    else
      {
        ATerm m_43 = NULL,r_43 = NULL,t_43 = NULL,x_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_88 = ATgetFirst((ATermList) t);
            e_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_88);
        m_43 = t;
        t = d_88;
        t = h_105(t);
        r_43 = t;
        t = e_88;
        t = f_88(t);
        t_43 = t;
        t = (ATerm) ATinsert(CheckATermList(t_43), r_43);
        x_18 = t;
        t = SSLsetAnnotations(x_18, m_43);
      }
    return(t);
  }
  t = f_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_88 = ATgetFirst((ATermList) t);
      l_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_88 = NULL,s_88 = NULL;
        static ATerm q_33 (ATerm t);
        static ATerm q_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_88)), not_null(s_88));
          return(t);
        }
        t = l_88;
        t = m_0(t);
        if(((r_88 != NULL) && (r_88 != t)))
          _fail(t);
        else
          r_88 = t;
        t = k_88;
        t = l_0(t);
        if(((s_88 != NULL) && (s_88 != t)))
          _fail(t);
        else
          s_88 = t;
        t = l_88;
        t = reverse_acc_2_0(l_0, q_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_37;
      t = m_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_88 = NULL;
  t = term_f_37;
  t = j_0(t);
  v_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_80), v_88), term_r_80), term_e_67), term_p_80), term_e_67), term_o_80), term_n_80), term_e_67), term_m_80);
  return(t);
}
static ATerm v_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm o_89 = NULL;
  o_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_89), term_x_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL,d_89 = NULL;
  ATerm a_81 = t;
  int b_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_89 = NULL,f_89 = NULL;
      t = term_q_35;
      e_89 = t;
      t = term_c_81;
      f_89 = t;
      t = term_d_81;
      t = o_14(e_89, f_89, t);
      z_88 = t;
      LocalPopChoice(b_81);
    }
  else
    {
      t = a_81;
      {
        static ATerm s_33 (ATerm t);
        static ATerm s_33 (ATerm t)
        {
          ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,b_19 = NULL;
          k_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              j_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_89);
          i_89 = t;
          t = j_89;
          if(((z_88 != NULL) && (z_88 != t)))
            _fail(t);
          else
            z_88 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, j_89);
          b_19 = t;
          t = SSLsetAnnotations(b_19, i_89);
          return(t);
        }
        t = fetch_1_0(s_33, t);
      }
    }
  {
    ATerm e_81 = t;
    int f_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_33 (ATerm t);
        static ATerm u_33 (ATerm t)
        {
          t = not_null(z_88);
          return(t);
        }
        t = short_description_1_0(u_33, t);
        t = echo_0_0(t);
        LocalPopChoice(f_81);
      }
    else
      {
        t = e_81;
      }
  }
  t = term_g_81;
  t = echo_0_0(t);
  t = term_i_72;
  a_89 = t;
  t = term_j_72;
  d_89 = t;
  t = term_h_81;
  t = o_14(a_89, d_89, t);
  t = reverse_acc_2_0(_id, v_33, t);
  t = map_1_0(y_33, t);
  {
    ATerm i_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_89 = NULL;
        static ATerm b_34 (ATerm t);
        static ATerm b_34 (ATerm t)
        {
          t = not_null(z_88);
          return(t);
        }
        t = long_description_1_0(b_34, t);
        p_89 = t;
        t = (ATerm) ATinsert(CheckATermList(p_89), term_e_67);
        t = echo_0_0(t);
        LocalPopChoice(k_81);
      }
    else
      {
        t = i_81;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm t_90 (ATerm t);
  static ATerm t_90 (ATerm t)
  {
    ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL;
    q_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_90 = ATgetFirst((ATermList) t);
        s_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_81 = t;
      int w_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_44 = NULL,k_44 = NULL,d_19 = NULL;
          t = SSLgetAnnotations(q_90);
          g_44 = t;
          t = r_90;
          t = r_105(t);
          k_44 = t;
          t = (ATerm) ATinsert(CheckATermList(s_90), k_44);
          d_19 = t;
          t = SSLsetAnnotations(d_19, g_44);
          LocalPopChoice(w_81);
        }
      else
        {
          t = l_81;
          {
            ATerm x_44 = NULL,b_45 = NULL,e_19 = NULL;
            t = SSLgetAnnotations(q_90);
            x_44 = t;
            t = s_90;
            t = t_90(t);
            b_45 = t;
            t = (ATerm) ATinsert(CheckATermList(b_45), r_90);
            e_19 = t;
            t = SSLsetAnnotations(e_19, x_44);
          }
        }
    }
    return(t);
  }
  t = t_90(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_90 = NULL,d_91 = NULL,e_91 = NULL;
  z_90 = t;
  {
    ATerm x_81 = t;
    int y_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_90;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_82 = ATgetFirst((ATermList) t);
                ATerm c_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_90;
          }
        LocalPopChoice(y_81);
      }
    else
      {
        t = x_81;
        t = (ATerm) ATinsert(ATempty, z_90);
      }
  }
  d_91 = t;
  t = term_k_37;
  e_91 = t;
  t = SSL_printnl(e_91, d_91);
  t = z_90;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL;
  t = term_q_35;
  n_91 = t;
  t = term_c_81;
  o_91 = t;
  t = term_d_81;
  t = o_14(n_91, o_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_34 (ATerm t)
{
  ATerm q_91 = NULL,s_91 = NULL;
  t = term_d_82;
  q_91 = t;
  t = term_f_37;
  s_91 = t;
  t = term_g_82;
  t = t_14(q_91, s_91, t);
  return(t);
}
static ATerm m_34 (ATerm t)
{
  t = term_h_82;
  return(t);
}
static ATerm n_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_34 (ATerm t)
{
  ATerm u_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
  t = term_d_82;
  a_92 = t;
  t = term_f_37;
  b_92 = t;
  t = term_g_82;
  t = t_14(a_92, b_92, t);
  t = term_i_75;
  u_91 = t;
  t = term_f_37;
  z_91 = t;
  t = term_k_75;
  t = t_14(u_91, z_91, t);
  t = term_i_82;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  t = term_j_82;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_82 = t;
  int l_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_34, d_34, m_34, t);
      LocalPopChoice(l_82);
    }
  else
    {
      t = k_82;
      t = Option_3_0(n_34, q_34, v_34, t);
    }
  return(t);
}
static ATerm p_14 (ATerm g_63, ATerm h_63, ATerm f_63, ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
  {
    ATerm m_82 = t;
    int n_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_82 = ATgetArgument(t, 0);
            ATerm p_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
        t = o_14(g_63, h_63, t);
        LocalPopChoice(n_82);
      }
    else
      {
        t = m_82;
        t = (ATerm) ATempty;
      }
  }
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_63, h_63, (ATerm) ATinsert(CheckATermList(j_92), f_63));
  t = lookup_table_0_1(g_63, t);
  m_92 = t;
  t = (ATerm) ATinsert(CheckATermList(j_92), f_63);
  k_92 = t;
  t = m_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(h_63, k_92, l_92, t);
  t = i_92;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_92 = NULL,a_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL;
      t = term_f_37;
      t = h_0(t);
      b_93 = t;
      t = term_i_72;
      c_93 = t;
      t = term_j_72;
      d_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_72, term_j_72, b_93);
      t = p_14(c_93, d_93, b_93, t);
      _fail(t);
    }
  else
    {
      ATerm i_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_92 = ATgetFirst((ATermList) t);
          a_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_92;
      t = d_0(t);
      t = term_f_37;
      t = g_0(t);
      i_93 = t;
      t = (ATerm) ATinsert(CheckATermList(a_93), i_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,t_93 = NULL,i_19 = NULL;
  t_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_93 = ATgetFirst((ATermList) t);
      m_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_93);
  j_93 = t;
  t = k_93;
  t = a_74(t);
  n_93 = t;
  t = m_93;
  t = b_74(t);
  o_93 = t;
  t = (ATerm) ATinsert(CheckATermList(o_93), n_93);
  i_19 = t;
  t = SSLsetAnnotations(i_19, j_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,d_94 = NULL,e_94 = NULL,g_94 = NULL,h_94 = NULL,k_19 = NULL;
  z_93 = t;
  {
    ATerm q_82 = t;
    int r_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_82;
        t = x_126(t);
        LocalPopChoice(r_82);
      }
    else
      {
        t = q_82;
      }
  }
  t = z_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_94 = ATgetFirst((ATermList) t);
      e_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_93);
  a_94 = t;
  t = term_c_81;
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_81, d_94);
  t = t_14(h_94, d_94, t);
  t = e_94;
  {
    static ATerm i_95 (ATerm t);
    static ATerm i_95 (ATerm t)
    {
      ATerm x_82 = t;
      int y_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_82 = t;
          int c_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_94 = NULL;
              u_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_94;
              LocalPopChoice(c_83);
            }
          else
            {
              t = z_82;
              t = x_126(t);
              t = Cons_2_0(_id, i_95, t);
            }
          LocalPopChoice(y_82);
        }
      else
        {
          t = x_82;
          {
            ATerm y_94 = NULL,c_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_94 = ATgetFirst((ATermList) t);
                c_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_95), (ATerm) ATmakeAppl(sym_Undefined_1, y_94));
          }
        }
      return(t);
    }
    t = i_95(t);
  }
  g_94 = t;
  t = (ATerm) ATinsert(CheckATermList(g_94), (ATerm) ATmakeAppl(sym_Program_1, d_94));
  k_19 = t;
  t = SSLsetAnnotations(k_19, a_94);
  return(t);
}
static ATerm x_34 (ATerm t)
{
  ATerm z_95 = NULL;
  z_95 = t;
  if(match_string(t, "--help"))
    {
      t = z_95;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_95;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_95;
        }
    }
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL;
  t = term_w_74;
  a_96 = t;
  t = term_f_37;
  b_96 = t;
  t = term_x_74;
  t = t_14(a_96, b_96, t);
  t = term_g_83;
  return(t);
}
static ATerm z_34 (ATerm t)
{
  t = term_h_83;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,u_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
  r_95 = t;
  t = term_i_72;
  s_95 = t;
  t = term_n_83;
  t = lookup_table_0_1(s_95, t);
  y_95 = t;
  t = term_j_72;
  u_95 = t;
  t = (ATerm) ATempty;
  w_95 = t;
  t = y_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(u_95, w_95, x_95, t);
  t = r_95;
  {
    static ATerm w_34 (ATerm t);
    static ATerm w_34 (ATerm t)
    {
      ATerm o_83 = t;
      int p_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_126(t);
          LocalPopChoice(p_83);
        }
      else
        {
          t = o_83;
          {
            ATerm q_83 = t;
            int r_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_34, y_34, z_34, t);
                LocalPopChoice(r_83);
              }
            else
              {
                t = q_83;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_34, t);
  }
  {
    ATerm t_83 = t;
    int w_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_96 = NULL;
        t_96 = t;
        {
          ATerm y_83 = t;
          int c_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_45 = NULL;
              t = t_96;
              {
                ATerm d_84 = t;
                int e_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_45 = NULL,u_45 = NULL;
                    t = term_q_35;
                    t_45 = t;
                    t = term_w_74;
                    u_45 = t;
                    t = term_f_84;
                    t = o_14(t_45, u_45, t);
                    LocalPopChoice(e_84);
                  }
                else
                  {
                    t = d_84;
                    t = fetch_1_0(a_35, t);
                  }
              }
              t = t_96;
              t = default_system_usage_0_0(t);
              t = term_m_35;
              r_45 = t;
              t = SSL_exit(r_45);
              LocalPopChoice(c_84);
            }
          else
            {
              t = y_83;
              {
                ATerm y_45 = NULL,a_46 = NULL,c_46 = NULL;
                t = term_q_35;
                a_46 = t;
                t = term_d_82;
                c_46 = t;
                t = term_g_84;
                t = o_14(a_46, c_46, t);
                t = t_96;
                t = default_system_about_0_0(t);
                t = term_m_35;
                y_45 = t;
                t = SSL_exit(y_45);
              }
            }
        }
        LocalPopChoice(w_83);
      }
    else
      {
        t = t_83;
        {
          ATerm h_84 = t;
          int i_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
              static ATerm c_35 (ATerm t);
              static ATerm c_35 (ATerm t)
              {
                ATerm x_96 = NULL,b_97 = NULL,d_97 = NULL,t_19 = NULL;
                d_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_97);
                x_96 = t;
                t = b_97;
                if(((p_95 != NULL) && (p_95 != t)))
                  _fail(t);
                else
                  p_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_97);
                t_19 = t;
                t = SSLsetAnnotations(t_19, x_96);
                return(t);
              }
              t = fetch_1_0(c_35, t);
              t = term_u_35;
              v_96 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_95)), term_j_84);
              w_96 = t;
              t = SSL_printnl(v_96, w_96);
              t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_95)), term_j_84));
              t = default_system_usage_0_0(t);
              t = term_z_38;
              u_96 = t;
              t = SSL_exit(u_96);
              LocalPopChoice(i_84);
            }
          else
            {
              t = h_84;
            }
        }
      }
  }
  q_95 = t;
  t = term_i_72;
  t = table_destroy_0_0(t);
  t = q_95;
  return(t);
}
static ATerm r_14 (ATerm y_67, ATerm z_67, ATerm a_68, ATerm t)
{
  ATerm k_97 = NULL;
  t = SSL_hashtable_put(a_68, y_67, z_67);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_97);
  return(t);
}
static ATerm s_14 (ATerm b_68, ATerm c_68, ATerm t)
{
  t = SSL_hashtable_get(c_68, b_68);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm m_97 = NULL;
  t = SSL_hashtable_create(g_68, h_68);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_97);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,q_97 = NULL,z_97 = NULL,a_98 = NULL;
  o_97 = t;
  t = term_k_84;
  z_97 = t;
  t = term_l_84;
  a_98 = t;
  t = o_97;
  t = new_hashtable_0_2(z_97, a_98, t);
  p_97 = t;
  t = o_97;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(o_97, p_97, q_97, t);
  t = o_97;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_98 = NULL;
  t = SSL_table_hashtable();
  b_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm s_64, ATerm t)
{
  ATerm m_98 = NULL;
  t = table_hashtable_0_0(t);
  m_98 = t;
  {
    ATerm m_84 = t;
    int n_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_46 = NULL;
        t = m_98;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_14(s_64, n_46, t);
        LocalPopChoice(n_84);
      }
    else
      {
        t = m_84;
        {
          ATerm w_46 = NULL;
          t = s_64;
          t = table_create_0_0(t);
          t = m_98;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_14(s_64, w_46, t);
        }
      }
  }
  return(t);
}
static ATerm t_14 (ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm t_98 = NULL,x_98 = NULL;
  t = term_q_35;
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, l_58, m_58);
  t = lookup_table_0_1(t_98, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_14(l_58, m_58, x_98, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, l_58, m_58);
  return(t);
}
static ATerm u_14 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_strcat(u_38, v_38);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_99 = NULL,c_100 = NULL;
  c_100 = t;
  t = SSL_explode_string(c_100);
  {
    ATerm y_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_101 (ATerm t);
        static ATerm n_101 (ATerm t)
        {
          ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL;
          k_101 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_101 = ATgetFirst((ATermList) t);
              m_101 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_85 = t;
            int t_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_47 = NULL,i_47 = NULL,v_19 = NULL;
                t = SSLgetAnnotations(k_101);
                c_47 = t;
                t = m_101;
                t = n_101(t);
                i_47 = t;
                t = (ATerm) ATinsert(CheckATermList(i_47), l_101);
                v_19 = t;
                t = SSLsetAnnotations(v_19, c_47);
                LocalPopChoice(t_85);
              }
            else
              {
                t = s_85;
                {
                  ATerm t_47 = NULL,d_20 = NULL;
                  t = SSLgetAnnotations(k_101);
                  t_47 = t;
                  t = l_101;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, l_101);
                  d_20 = t;
                  t = SSLsetAnnotations(d_20, t_47);
                }
              }
          }
          return(t);
        }
        t = n_101(t);
        LocalPopChoice(z_84);
      }
    else
      {
        t = y_84;
        t = (ATerm) ATempty;
      }
  }
  v_99 = t;
  t = SSL_implode_string(v_99);
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
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,w_101 = NULL,f_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL,n_102 = NULL,o_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,x_102 = NULL,y_102 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,s_103 = NULL,v_103 = NULL,w_103 = NULL;
  r_101 = t;
  t = term_v_66;
  v_103 = t;
  t = term_w_85;
  w_103 = t;
  t = term_x_85;
  t = t_14(v_103, w_103, t);
  t = term_r_35;
  p_103 = t;
  t = term_z_38;
  s_103 = t;
  t = term_d_86;
  t = t_14(p_103, s_103, t);
  t = term_w_40;
  n_103 = t;
  t = term_m_35;
  o_103 = t;
  t = term_e_86;
  t = t_14(n_103, o_103, t);
  t = term_b_41;
  l_103 = t;
  t = term_f_48;
  m_103 = t;
  t = term_h_86;
  t = t_14(l_103, m_103, t);
  t = term_u_59;
  j_103 = t;
  t = (ATerm) ATempty;
  k_103 = t;
  t = term_i_86;
  t = t_14(j_103, k_103, t);
  t = term_z_37;
  h_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_86), term_o_86);
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, (ATerm) ATinsert(ATinsert(ATempty, term_p_86), term_o_86));
  t = t_14(h_103, i_103, t);
  t = term_r_87;
  t = xtc_find_path_0_0(t);
  n_102 = t;
  t = term_s_87;
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_102, term_s_87);
  t = u_14(n_102, g_103, t);
  f_102 = t;
  t = term_r_87;
  t = xtc_find_path_0_0(t);
  l_102 = t;
  t = term_s_87;
  f_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_102, term_s_87);
  t = u_14(l_102, f_103, t);
  i_102 = t;
  t = term_t_87;
  t = xtc_find_path_0_0(t);
  k_102 = t;
  t = term_s_87;
  e_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_102, term_s_87);
  t = u_14(k_102, e_103, t);
  j_102 = t;
  t = term_j_36;
  c_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_102), term_u_59), i_102), term_u_59), f_102), term_u_59);
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_102), term_u_59), i_102), term_u_59), f_102), term_u_59));
  t = t_14(c_103, d_103, t);
  t = term_r_87;
  t = xtc_find_path_0_0(t);
  w_101 = t;
  t = term_u_87;
  b_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_101, term_u_87);
  t = u_14(w_101, b_103, t);
  s_101 = t;
  t = term_t_87;
  t = xtc_find_path_0_0(t);
  u_101 = t;
  t = term_v_87;
  y_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_101, term_v_87);
  t = u_14(u_101, y_102, t);
  t_101 = t;
  t = term_c_36;
  v_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_88), term_z_87), t_101), term_w_87), term_y_87), term_x_87), s_101), term_w_87);
  x_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_88), term_z_87), t_101), term_w_87), term_y_87), term_x_87), s_101), term_w_87));
  t = t_14(v_102, x_102, t);
  t = term_k_55;
  t_102 = t;
  t = term_b_88;
  u_102 = t;
  t = term_g_88;
  t = t_14(t_102, u_102, t);
  t = term_y_53;
  o_102 = t;
  t = (ATerm) ATinsert(ATempty, term_h_88);
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, term_h_88));
  t = t_14(o_102, s_102, t);
  t = r_101;
  return(t);
}
static ATerm d_35 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
  u_105 = t;
  t = term_q_35;
  v_105 = t;
  t = term_v_53;
  w_105 = t;
  t = term_i_88;
  t = o_14(v_105, w_105, t);
  t = debug_1_0(e_35, t);
  t = u_105;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  t = term_j_88;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm m_88 = t;
    int n_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,h_104 = NULL,k_104 = NULL;
        t = term_q_35;
        h_104 = t;
        t = term_z_74;
        k_104 = t;
        t = term_o_88;
        t = o_14(h_104, k_104, t);
        t = term_p_88;
        t = xtc_find_0_0(t);
        a_104 = t;
        t = term_k_37;
        c_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_104, term_k_37);
        t = x_13(a_104, c_104, t);
        t = term_m_35;
        b_104 = t;
        t = SSL_exit(b_104);
        LocalPopChoice(n_88);
      }
    else
      {
        t = m_88;
      }
  }
  {
    ATerm q_88 = t;
    int t_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL,s_104 = NULL,u_104 = NULL;
        t = term_q_35;
        s_104 = t;
        t = term_i_75;
        u_104 = t;
        t = term_u_88;
        t = o_14(s_104, u_104, t);
        t = strc_version_0_0(t);
        t = term_m_35;
        p_104 = t;
        t = SSL_exit(p_104);
        LocalPopChoice(t_88);
      }
    else
      {
        t = q_88;
      }
  }
  {
    ATerm w_88 = t;
    int x_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_105 = NULL,e_105 = NULL,k_105 = NULL;
        c_105 = t;
        t = term_q_35;
        e_105 = t;
        t = term_v_53;
        k_105 = t;
        t = term_i_88;
        t = o_14(e_105, k_105, t);
        t = c_105;
        LocalPopChoice(x_88);
      }
    else
      {
        t = w_88;
        {
          ATerm l_105 = NULL,m_105 = NULL,q_105 = NULL;
          t = term_u_35;
          m_105 = t;
          t = (ATerm) ATinsert(ATempty, term_y_88);
          q_105 = t;
          t = SSL_printnl(m_105, q_105);
          t = term_z_38;
          l_105 = t;
          t = SSL_exit(l_105);
          t = (ATerm) ATinsert(ATempty, term_y_88);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(d_35, t);
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = if_verbose1_1_0(i_35, t);
  return(t);
}
static ATerm h_35 (ATerm t)
{
  t = xtc_temp_files_1_0(j_35, t);
  return(t);
}
static ATerm i_35 (ATerm t)
{
  ATerm c_106 = NULL,f_106 = NULL,h_106 = NULL;
  c_106 = t;
  t = term_u_35;
  f_106 = t;
  t = (ATerm) ATinsert(CheckATermList(c_106), term_b_89);
  h_106 = t;
  t = SSL_printnl(f_106, h_106);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(c_106), term_b_89));
  return(t);
}
static ATerm j_35 (ATerm t)
{
  ATerm c_89 = t;
  int g_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
      t = term_q_35;
      j_106 = t;
      t = term_v_53;
      k_106 = t;
      t = term_i_88;
      t = o_14(j_106, k_106, t);
      i_106 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_106);
      LocalPopChoice(g_89);
    }
  else
    {
      t = c_89;
      t = term_h_57;
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
  ATerm l_106 = NULL,m_106 = NULL,o_106 = NULL;
  t = run_time_0_0(t);
  l_106 = t;
  t = term_u_35;
  m_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_89), l_106), term_h_89);
  o_106 = t;
  t = SSL_printnl(m_106, o_106);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_89), l_106), term_h_89));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm m_89 = t;
  int n_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(g_35, h_35, t);
      t = if_verbose2_1_0(k_35, t);
      t = term_m_35;
      b_106 = t;
      t = SSL_exit(b_106);
      LocalPopChoice(n_89);
    }
  else
    {
      t = m_89;
      {
        ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL,s_106 = NULL;
        t = run_time_0_0(t);
        p_106 = t;
        t = term_u_35;
        r_106 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_89), p_106), term_q_89);
        s_106 = t;
        t = SSL_printnl(r_106, s_106);
        t = term_z_38;
        q_106 = t;
        t = SSL_exit(q_106);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
