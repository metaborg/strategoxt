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
ATerm term_s_89;
ATerm term_n_89;
ATerm term_k_89;
ATerm term_e_89;
ATerm term_a_89;
ATerm term_x_88;
ATerm term_r_88;
ATerm term_q_88;
ATerm term_l_88;
ATerm term_k_88;
ATerm term_j_88;
ATerm term_i_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_b_88;
ATerm term_a_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_x_87;
ATerm term_w_87;
ATerm term_v_87;
ATerm term_u_87;
ATerm term_t_87;
ATerm term_o_86;
ATerm term_n_86;
ATerm term_j_86;
ATerm term_i_86;
ATerm term_g_86;
ATerm term_e_86;
ATerm term_y_85;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_h_84;
ATerm term_g_84;
ATerm term_p_83;
ATerm term_n_83;
ATerm term_h_83;
ATerm term_x_82;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_a_81;
ATerm term_y_80;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_q_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_l_80;
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
ATerm term_y_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_s_75;
ATerm term_p_75;
ATerm term_o_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_h_75;
ATerm term_b_75;
ATerm term_a_75;
ATerm term_y_74;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_t_74;
ATerm term_m_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_a_74;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_z_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_o_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_j_71;
ATerm term_g_71;
ATerm term_e_71;
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
ATerm term_b_68;
ATerm term_a_68;
ATerm term_w_67;
ATerm term_u_67;
ATerm term_e_67;
ATerm term_c_67;
ATerm term_b_67;
ATerm term_a_67;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_s_66;
ATerm term_i_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_b_63;
ATerm term_s_62;
ATerm term_r_61;
ATerm term_k_61;
ATerm term_h_61;
ATerm term_w_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_g_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_u_59;
ATerm term_t_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_k_59;
ATerm term_y_58;
ATerm term_f_58;
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
ATerm term_n_56;
ATerm term_c_56;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_v_54;
ATerm term_u_54;
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
ATerm term_u_52;
ATerm term_t_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_i_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_h_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_y_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_h_50;
ATerm term_g_50;
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
ATerm term_a_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_c_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_o_45;
ATerm term_m_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_d_45;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_i_43;
ATerm term_d_43;
ATerm term_z_42;
ATerm term_v_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_j_42;
ATerm term_a_42;
ATerm term_q_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
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
ATerm term_b_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_u_37;
ATerm term_k_37;
ATerm term_f_37;
ATerm term_u_36;
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
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
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
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
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
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_l_36);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_h_38);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_a_38);
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
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_f_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_w_40);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_b_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_i_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
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
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_47, term_z_38, term_t_47);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_47, term_t_35, term_x_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_48, term_l_39, term_c_48);
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
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_50, term_b_50, term_g_50);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_50, term_l_50, term_m_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_50, term_s_50, term_t_50);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_50, term_w_50, term_y_50);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_51, term_h_51, term_l_51);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_51, term_p_51, term_q_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_51, term_v_51, term_y_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_d_52, term_e_52);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_52, term_k_52, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_52, term_o_52, term_p_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_j_45, term_u_52);
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
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_c_55);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_55);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
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
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym__2, term_f_57, term_t_56);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_59);
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_t_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_g_60);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_v_66);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
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
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_e_71);
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
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(sym__2, term_p_70, term_q_70);
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_l_35);
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_35);
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym__2, term_r_72, term_f_37);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
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
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_f_37);
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(sym__2, term_k_59, term_f_37);
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(sym__2, term_i_54, term_f_37);
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(sym__2, term_i_43, term_f_37);
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(sym__2, term_x_74, term_f_37);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(sym__2, term_b_75, term_f_37);
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(sym__2, term_k_75, term_f_37);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym__2, term_c_55, term_z_38);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(sym__2, term_e_55, term_l_35);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym__2, term_g_60, term_f_37);
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_80));
  term_y_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_d_81);
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym__2, term_j_72, term_k_72);
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(sym__2, term_g_82, term_f_37);
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_82));
  term_x_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(sym__3, term_j_72, term_k_72, (ATerm) ATempty);
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_x_74);
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_g_82);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_v_66, term_y_85);
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_z_38);
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_l_35);
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_f_48);
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(sym__2, term_t_59, (ATerm) ATempty);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_t_87));
  term_t_87 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_x_87));
  term_x_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(sym__2, term_k_55, term_d_88);
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_v_53);
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_b_75);
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_75);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_89));
  term_s_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm u_122 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_13 (ATerm f_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm j_13 (ATerm d_23, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm k_13 (ATerm g_55, ATerm f_55, ATerm t);
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t);
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
ATerm if_keep1_1_0 (ATerm v_123 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm y_123 (ATerm), ATerm t);
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
static ATerm q_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
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
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm g_15 (ATerm t);
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
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm save_as_1_0 (ATerm a_97 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm w_123 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t);
static ATerm o_13 (ATerm x_59, ATerm y_59, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm w_132 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm r_22, ATerm s_22, ATerm t);
ATerm foldr_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm q_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm z_123 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm a_124 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm x_123 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm i_106 (ATerm), ATerm t);
static ATerm s_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm a_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm l_13 (ATerm x_22, ATerm y_22, ATerm t);
static ATerm m_13 (ATerm s_24, ATerm t_24, ATerm t);
static ATerm n_13 (ATerm n_105 (ATerm), ATerm z_209, ATerm c_25, ATerm t);
static ATerm q_13 (ATerm i_119 (ATerm), ATerm a_45, ATerm y_44, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm x_131 (ATerm), ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm o_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm z_96 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm v_21 (ATerm t);
static ATerm w_21 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm v_122 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm x_116 (ATerm), ATerm t);
static ATerm z_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm r_13 (ATerm t_22, ATerm t);
static ATerm e_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm x_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm p_14 (ATerm o_65, ATerm p_65, ATerm t);
static ATerm s_13 (ATerm a_64, ATerm b_64, ATerm t);
ATerm end_scope_1_0 (ATerm f_119 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_119 (ATerm), ATerm t);
static ATerm z_26 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_132 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm t_122 (ATerm), ATerm t);
static ATerm u_13 (ATerm m_43, ATerm n_43, ATerm t);
static ATerm w_13 (ATerm s_43, ATerm t_43, ATerm t);
static ATerm x_13 (ATerm x_60, ATerm z_60, ATerm b_61, ATerm d_61, ATerm y_60, ATerm a_61, ATerm c_61, ATerm e_61, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_105 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm y_13 (ATerm h_55, ATerm i_55, ATerm t);
static ATerm z_13 (ATerm u_68, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_122 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_122 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm y_122 (ATerm), ATerm t);
static ATerm c_14 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm d_14 (ATerm h_110 (ATerm), ATerm a_31, ATerm z_30, ATerm t);
static ATerm j_27 (ATerm t);
static ATerm e_14 (ATerm s_64, ATerm t_64, ATerm u_64, ATerm t);
static ATerm f_14 (ATerm p_127 (ATerm), ATerm c_65, ATerm b_65, ATerm t);
static ATerm j_14 (ATerm g_40, ATerm h_40, ATerm t);
static ATerm s_72 (ATerm g_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_14 (ATerm y_24, ATerm t);
static ATerm h_14 (ATerm s_40, ATerm t_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_75 (ATerm t_73, ATerm t);
static ATerm g_75 (ATerm z_73, ATerm b_74, ATerm c_74, ATerm t);
static ATerm i_75 (ATerm n_74, ATerm o_74, ATerm r_74, ATerm t);
static ATerm i_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm m_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm z_79 (ATerm d_79, ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm s_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm k_14 (ATerm g_59, ATerm f_59, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm t_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm y_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_14 (ATerm d_59, ATerm e_59, ATerm t);
ATerm at_end_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_83 (ATerm a_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_14 (ATerm h_59, ATerm i_59, ATerm t);
static ATerm k_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm d_30 (ATerm t);
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
static ATerm t_31 (ATerm t);
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
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
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
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm p_33 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm n_14 (ATerm s_68, ATerm t_68, ATerm t);
static ATerm o_14 (ATerm x_68, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm w_33 (ATerm t);
static ATerm z_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm v_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm q_14 (ATerm v_63, ATerm w_63, ATerm u_63, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t);
static ATerm s_14 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t);
static ATerm t_14 (ATerm q_68, ATerm r_68, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm h_65, ATerm t);
static ATerm u_14 (ATerm a_59, ATerm b_59, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm v_14 (ATerm u_38, ATerm v_38, ATerm t);
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
ATerm foldr_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,e_0 = NULL,i_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = v_112(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = foldr_2_0(v_112, w_112, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_0, s_0);
      t = w_112(t);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_13(d_1, g_1, t);
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
      ATerm n_35 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm u_122 (ATerm), ATerm t)
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
        t = p_14(j_1, l_1, t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_t_35);
        t = geq_0_0(t);
        t = e_1;
        t = u_122(t);
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
  t = term_w_35;
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
static ATerm i_13 (ATerm f_23, ATerm t)
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
        t = p_14(a_2, b_2, t);
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
  t = p_14(r_1, s_1, t);
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
      t = o_13(p_1, q_1, t);
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
static ATerm j_13 (ATerm d_23, ATerm t)
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
  t = p_14(q_2, r_2, t);
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
      t = o_13(o_2, p_2, t);
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
  t = j_13(o_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_13(n_3, t);
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
      t = term_u_36;
      t = p_14(h_3, i_3, t);
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
static ATerm k_13 (ATerm g_55, ATerm f_55, ATerm t)
{
  ATerm z_36 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(g_55, f_55);
      LocalPopChoice(d_37);
    }
  else
    {
      t = z_36;
      t = get_errno_0_0(t);
      t = term_f_37;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, g_55, f_55);
      t = y_13(g_55, f_55, t);
      t = SSL_remove(g_55);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
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
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_37;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_4, term_k_37);
        t = y_13(f_4, u_1, t);
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
              t = u_0(t);
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
              t = k_13(f_4, j_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
              LocalPopChoice(m_37);
            }
          else
            {
              t = l_37;
              t = d_4;
              t = u_0(t);
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
  t = term_u_37;
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
  t = (ATerm) ATinsert(ATinsert(ATempty, b_5), term_a_38);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_b_38;
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
        t = p_14(z_4, a_5, t);
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
  t = term_a_38;
  y_4 = t;
  t = term_j_38;
  t = p_14(x_4, y_4, t);
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
              ATerm b_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(d_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_6);
              v_0 = t;
              t = SSLsetAnnotations(v_0, b_3);
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
              ATerm p_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(n_6);
              p_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, p_3);
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
  t = term_u_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_10 = NULL;
  t = pass_verbose_0_0(t);
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_10), term_v_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm u_10 = NULL;
  t = pass_verbose_0_0(t);
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_10), term_v_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
      e_9 = t;
      t = term_q_35;
      f_9 = t;
      t = term_h_38;
      g_9 = t;
      t = term_i_38;
      t = p_14(f_9, g_9, t);
      t = e_9;
      LocalPopChoice(y_39);
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
            t = term_z_39;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_a_40);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            p_9 = t;
            {
              ATerm b_40 = t;
              int c_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,c_10 = NULL;
                  t = term_q_35;
                  a_10 = t;
                  t = term_d_40;
                  c_10 = t;
                  t = term_e_40;
                  t = p_14(a_10, c_10, t);
                  u_9 = t;
                  t = term_q_35;
                  x_9 = t;
                  t = term_f_40;
                  y_9 = t;
                  t = term_i_40;
                  t = p_14(x_9, y_9, t);
                  v_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
                  {
                    ATerm j_40 = t;
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
                        t = j_40;
                      }
                  }
                  LocalPopChoice(c_40);
                }
              else
                {
                  t = b_40;
                  {
                    ATerm f_10 = NULL,h_10 = NULL;
                    t = term_q_35;
                    f_10 = t;
                    t = term_d_40;
                    h_10 = t;
                    t = term_e_40;
                    t = p_14(f_10, h_10, t);
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
              ATerm m_40 = t;
              int o_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_10 = NULL,r_10 = NULL;
                  r_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      p_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,x_3 = NULL;
                        t = SSLgetAnnotations(r_10);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, p_10);
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
                  LocalPopChoice(o_40);
                  t = xtc_transform_file_2_0(q_7, r_7, t);
                }
              else
                {
                  t = m_40;
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
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_r_40), not_null(c_9)), term_q_40));
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
      t = x_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm v_123 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,h_11 = NULL,i_11 = NULL;
        t = term_q_35;
        h_11 = t;
        t = term_w_40;
        i_11 = t;
        t = term_x_40;
        t = p_14(h_11, i_11, t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, term_z_38);
        t = geq_0_0(t);
        t = y_10;
        t = v_123(t);
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
ATerm olevel_2_0 (ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
        t = l_11;
        t = a_133(t);
        n_11 = t;
        t = term_q_35;
        q_11 = t;
        t = term_b_41;
        r_11 = t;
        t = term_g_41;
        t = p_14(q_11, r_11, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, n_11);
        t = geq_0_0(t);
        t = l_11;
        t = b_133(t);
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
  ATerm v_13 = NULL;
  v_13 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_13;
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
                    t = SSLgetAnnotations(v_13);
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
                  t = v_13;
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
        t = v_13;
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
                    t = SSLgetAnnotations(v_13);
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
                  t = v_13;
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
  ATerm x_14 = NULL,a_15 = NULL,e_15 = NULL;
  e_15 = t;
  t = term_a_42;
  x_14 = t;
  t = e_15;
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_q_35;
        h_15 = t;
        t = term_h_38;
        i_15 = t;
        t = term_i_38;
        t = p_14(h_15, i_15, t);
        t = e_15;
        LocalPopChoice(d_42);
        t = (ATerm) ATinsert(ATempty, term_j_42);
      }
    else
      {
        t = c_42;
        t = (ATerm) ATempty;
      }
  }
  a_15 = t;
  t = e_15;
  t = comp_0_2(x_14, a_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  ATerm n_15 = NULL;
  n_15 = t;
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
        t = term_q_35;
        q_15 = t;
        t = term_w_40;
        r_15 = t;
        t = term_x_40;
        t = p_14(q_15, r_15, t);
        p_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_15, term_n_42);
        t = geq_0_0(t);
        t = n_15;
        t = y_123(t);
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
        t = n_15;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm v_17 = NULL,y_17 = NULL,z_17 = NULL;
  v_17 = t;
  t = term_u_35;
  y_17 = t;
  t = (ATerm) ATinsert(ATempty, term_p_42);
  z_17 = t;
  t = SSL_printnl(y_17, z_17);
  t = v_17;
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
  t = olevel_2_0(w_10, z_10, t);
  h_18 = t;
  {
    ATerm r_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_21 = ATgetArgument(t, 0);
            {
              ATerm x_12 = NULL,b_6 = NULL;
              t = SSLgetAnnotations(h_18);
              x_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_21);
              b_6 = t;
              t = SSLsetAnnotations(b_6, x_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_18;
          }
        LocalPopChoice(u_42);
        t = xtc_transform_file_2_0(o_12, q_12, t);
      }
    else
      {
        t = r_42;
        t = xtc_transform_term_2_0(r_12, s_12, t);
      }
  }
  t = olevel_2_0(t_12, u_12, t);
  t = olevel_2_0(y_14, b_15, t);
  t = olevel_2_0(w_15, x_15, t);
  t = olevel_2_0(j_16, k_16, t);
  t = olevel_2_0(l_17, m_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm a_18 = NULL,e_18 = NULL,f_18 = NULL;
  a_18 = t;
  t = term_u_35;
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(a_18), term_v_42);
  f_18 = t;
  t = SSL_printnl(e_18, f_18);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(a_18), term_v_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_q_35;
  j_18 = t;
  t = term_b_41;
  k_18 = t;
  t = term_g_41;
  t = p_14(j_18, k_18, t);
  t = debug_1_0(q_8, t);
  t = i_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_18 = ATgetArgument(t, 0);
            {
              ATerm t_9 = NULL,k_4 = NULL;
              t = SSLgetAnnotations(l_18);
              t_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_18);
              k_4 = t;
              t = SSLsetAnnotations(k_4, t_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_18;
          }
        LocalPopChoice(c_43);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = b_43;
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
  ATerm x_18 = NULL;
  t = pass_verbose_0_0(t);
  x_18 = t;
  t = (ATerm) ATinsert(CheckATermList(x_18), term_w_38);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = save_as_1_0(w_9, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_d_43;
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
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_19;
        {
          ATerm h_43 = t;
          if((PushChoice() == 0))
            {
              ATerm t_10 = NULL,x_10 = NULL;
              t = term_q_35;
              t_10 = t;
              t = term_i_43;
              x_10 = t;
              t = term_k_43;
              t = p_14(t_10, x_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_43;
            }
        }
        t = m_19;
        {
          ATerm l_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_11 = ATgetArgument(t, 0);
                  {
                    ATerm v_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(m_19);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, e_11);
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
              LocalPopChoice(o_43);
              t = xtc_transform_file_2_0(i_10, m_10, t);
            }
          else
            {
              t = l_43;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(q_10, t);
        LocalPopChoice(f_43);
      }
    else
      {
        t = e_43;
        t = m_19;
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm g_11 = NULL;
  t = pass_verbose_0_0(t);
  g_11 = t;
  t = (ATerm) ATinsert(CheckATermList(g_11), term_w_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_p_43;
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
static ATerm q_10 (ATerm t)
{
  t = save_as_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm o_19 = NULL,r_19 = NULL,s_19 = NULL;
  s_19 = t;
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_19 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(s_19);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_19);
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
        t = xtc_transform_file_2_0(f_11, j_11, t);
      }
    else
      {
        t = v_43;
        t = xtc_transform_term_2_0(m_11, s_11, t);
      }
  }
  t = if_keep6_1_0(t_11, t);
  r_19 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(r_19);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_20);
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
  o_19 = t;
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_20 = ATgetArgument(t, 0);
            {
              ATerm i_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(o_19);
              i_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
              t_5 = t;
              t = SSLsetAnnotations(t_5, i_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_19;
          }
        LocalPopChoice(a_44);
        t = xtc_transform_file_2_0(e_12, g_12, t);
      }
    else
      {
        t = z_43;
        t = xtc_transform_term_2_0(h_12, n_12, t);
      }
  }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm a_20 = NULL;
  t = pass_verbose_0_0(t);
  a_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), term_w_38);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm s_11 (ATerm t)
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
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_w_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm o_20 = NULL;
  t = pass_verbose_0_0(t);
  o_20 = t;
  t = (ATerm) ATinsert(CheckATermList(o_20), term_w_38);
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
static ATerm g_12 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_w_38);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_w_38);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_g_44;
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
  t = term_g_44;
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
  ATerm l_21 = NULL,m_21 = NULL,p_21 = NULL;
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
              ATerm e_13 = NULL,e_6 = NULL;
              t = SSLgetAnnotations(p_21);
              e_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
              e_6 = t;
              t = SSLsetAnnotations(e_6, e_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_21;
          }
        LocalPopChoice(i_44);
        t = xtc_transform_file_2_0(v_12, w_12, t);
      }
    else
      {
        t = h_44;
        t = xtc_transform_term_2_0(y_12, z_12, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  m_21 = t;
  {
    ATerm j_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_22 = ATgetArgument(t, 0);
            {
              ATerm z_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(m_21);
              z_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_22);
              f_6 = t;
              t = SSLsetAnnotations(f_6, z_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_21;
          }
        LocalPopChoice(l_44);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = j_44;
        t = xtc_transform_term_2_0(c_13, d_13, t);
      }
  }
  l_21 = t;
  {
    ATerm n_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_22 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(l_21);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_21;
          }
        LocalPopChoice(q_44);
        t = xtc_transform_file_2_0(f_13, h_13, t);
      }
    else
      {
        t = n_44;
        t = xtc_transform_term_2_0(p_13, t_13, t);
      }
  }
  t = if_keep4_1_0(r_14, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm w_12 (ATerm t)
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
static ATerm d_13 (ATerm t)
{
  ATerm g_22 = NULL;
  t = pass_verbose_0_0(t);
  g_22 = t;
  t = (ATerm) ATinsert(CheckATermList(g_22), term_w_38);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm p_22 = NULL;
  t = pass_verbose_0_0(t);
  p_22 = t;
  t = (ATerm) ATinsert(CheckATermList(p_22), term_w_38);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm q_22 = NULL;
  t = pass_verbose_0_0(t);
  q_22 = t;
  t = (ATerm) ATinsert(CheckATermList(q_22), term_w_38);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  c_23 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_23 = ATgetArgument(t, 0);
            {
              ATerm l_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(c_23);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, l_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_23;
          }
        LocalPopChoice(w_44);
        t = xtc_transform_file_2_0(c_15, d_15, t);
      }
    else
      {
        t = v_44;
        t = xtc_transform_term_2_0(g_15, j_15, t);
      }
  }
  b_23 = t;
  {
    ATerm z_44 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_23 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,o_6 = NULL;
              t = SSLgetAnnotations(b_23);
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
            t = b_23;
          }
        LocalPopChoice(b_45);
        t = xtc_transform_file_2_0(k_15, m_15, t);
      }
    else
      {
        t = z_44;
        t = xtc_transform_term_2_0(o_15, s_15, t);
      }
  }
  t = if_keep2_1_0(t_15, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_w_38);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_d_45;
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
  t = term_f_45;
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
  t = term_f_45;
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
  t = term_h_45;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm d_24 = NULL;
  d_24 = t;
  {
    ATerm k_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm z_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(d_24);
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              p_6 = t;
              t = SSLsetAnnotations(p_6, z_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_24;
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
    ATerm r_45 = t;
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
        t = r_45;
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
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_w_38);
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
  t = term_a_46;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm w_25 = NULL;
  t = pass_verbose_0_0(t);
  w_25 = t;
  t = (ATerm) ATinsert(CheckATermList(w_25), term_w_38);
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
  t = term_c_46;
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
  ATerm k_26 = NULL;
  t = pass_verbose_0_0(t);
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), term_w_38);
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
        t = xtc_transform_file_2_0(w_17, x_17, t);
      }
    else
      {
        t = j_46;
        t = xtc_transform_term_2_0(b_18, d_18, t);
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
static ATerm w_17 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_w_38);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm d_18 (ATerm t)
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
  t = term_t_46;
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
  t = term_u_39;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm l_29 = NULL;
  t = pass_verbose_0_0(t);
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(l_29), term_v_39);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm m_29 = NULL;
  t = pass_verbose_0_0(t);
  m_29 = t;
  t = (ATerm) ATinsert(CheckATermList(m_29), term_v_39);
  return(t);
}
ATerm save_as_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  n_28 = t;
  {
    static ATerm r_18 (ATerm t);
    static ATerm r_18 (ATerm t)
    {
      static ATerm u_18 (ATerm t);
      static ATerm u_18 (ATerm t)
      {
        ATerm u_28 = NULL,v_28 = NULL;
        t = a_97(t);
        u_28 = t;
        t = term_u_46;
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_46, u_28);
        t = v_14(v_28, u_28, t);
        return(t);
      }
      t = get_outfile_1_0(u_18, t);
      if(((j_28 != NULL) && (j_28 != t)))
        _fail(t);
      else
        j_28 = t;
      return(t);
    }
    t = copy_to_1_0(r_18, t);
  }
  {
    ATerm v_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_29 = NULL,j_29 = NULL;
        j_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_29 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,j_8 = NULL;
              t = SSLgetAnnotations(j_29);
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
            t = j_29;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(v_18, z_18, t);
      }
    else
      {
        t = v_46;
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
      t = v_14(not_null(j_28), n_29, t);
      if(((k_28 != NULL) && (k_28 != t)))
        _fail(t);
      else
        k_28 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(k_28)), term_b_47), not_null(j_28)), term_a_47);
  r_28 = t;
  t = SSL_concat_strings(r_28);
  o_28 = t;
  t = term_u_35;
  p_28 = t;
  t = (ATerm) ATinsert(ATempty, o_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = n_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
        t = term_q_35;
        v_29 = t;
        t = term_w_40;
        w_29 = t;
        t = term_x_40;
        t = p_14(v_29, w_29, t);
        u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_29, term_t_35);
        t = geq_0_0(t);
        t = q_29;
        t = w_123(t);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = q_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,e_30 = NULL,f_30 = NULL;
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
        t = p_14(g_30, h_30, t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = term_z_38;
      }
  }
  b_30 = t;
  t = term_z_38;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_30, term_z_38);
  t = w_13(b_30, f_30, t);
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
      ATerm i_47 = ATgetArgument(t, 0);
      if(match_cons(i_47, sym_Stream_1))
        {
          k_30 = ATgetArgument(i_47, 0);
        }
      else
        _fail(t);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(k_30, l_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  j_30 = t;
  t = xtc_new_file_0_0(t);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
  t = n_13(g_19, i_30, j_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_30);
  t = xtc_transform_file_2_0(v_131, w_131, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_13 (ATerm x_59, ATerm y_59, ATerm t)
{
  t = SSL_execvp(x_59, y_59);
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
  ATerm x_31 = NULL;
  x_31 = t;
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
              if((x_31 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_53), term_d_53), term_z_52), term_v_52), term_q_52), term_m_52), term_g_52), term_z_51), term_s_51), term_m_51), term_e_51), term_u_50), term_n_50), term_h_50), term_z_49), term_v_49), term_n_49), term_k_49), term_g_49), term_c_49), term_y_48), term_t_48), term_p_48), term_l_48), term_h_48), term_d_48), term_y_47), term_v_47);
        t = fetch_elem_1_0(h_19, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_31);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_32 = NULL,u_32 = NULL;
  i_32 = t;
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
              ATerm c_18 = NULL,g_18 = NULL,m_18 = NULL;
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
              c_18 = t;
              t = term_u_35;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_18), term_p_53);
              m_18 = t;
              t = SSL_printnl(g_18, m_18);
              t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATempty, c_18), term_p_53));
              LocalPopChoice(n_53);
            }
          else
            {
              t = m_53;
              t = i_32;
            }
        }
      }
    else
      {
        t = i_53;
        t = i_32;
      }
  }
  t = i_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_124 (ATerm), ATerm t)
{
  ATerm e_33 = NULL,i_33 = NULL;
  i_33 = t;
  t = fork_0_0(t);
  e_33 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_33;
        t = g_124(t);
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = SSL_waitpid(e_33);
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
        t = i_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  n_33 = t;
  t = w_132(t);
  t = xtc_find_0_0(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
  {
    static ATerm j_19 (ATerm t);
    static ATerm j_19 (ATerm t)
    {
      ATerm o_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
      t = o_13(m_33, n_33, t);
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
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_33 = NULL,y_33 = NULL;
      t = q_33;
      t = xtc_new_file_0_0(t);
      x_33 = t;
      t = r_0(t);
      y_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(ATinsert(ATempty, x_33), term_a_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_33);
    }
  else
    {
      ATerm e_34 = NULL,h_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_33;
      t = xtc_new_file_0_0(t);
      e_34 = t;
      t = r_0(t);
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_34), term_a_36), r_33), term_v_53));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_34);
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
        static ATerm y_19 (ATerm t);
        static ATerm u_19 (ATerm t)
        {
          t = r_22;
          return(t);
        }
        static ATerm y_19 (ATerm t)
        {
          ATerm u_49 = NULL;
          t = pass_verbose_0_0(t);
          u_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_22), u_49), (ATerm) ATinsert(ATempty, term_w_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(u_19, y_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_34;
      t = x_112(t);
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
      t = z_112(t);
      o_34 = t;
      t = l_34;
      t = foldr_3_0(x_112, y_112, z_112, t);
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_34, p_34);
      t = y_112(t);
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
  ATerm q_34 = NULL,t_34 = NULL;
  t = term_q_35;
  q_34 = t;
  t = term_y_53;
  t_34 = t;
  t = term_z_53;
  t = p_14(q_34, t_34, t);
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
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_w_38);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm u_20 = NULL;
  t = pass_verbose_0_0(t);
  u_20 = t;
  t = (ATerm) ATinsert(CheckATermList(u_20), term_w_38);
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
        ATerm p_19 = NULL,q_19 = NULL,x_19 = NULL,z_19 = NULL,b_20 = NULL;
        t = term_q_35;
        z_19 = t;
        t = term_i_54;
        b_20 = t;
        t = term_j_54;
        t = p_14(z_19, b_20, t);
        t = i_36;
        {
          ATerm k_54 = t;
          int p_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_36;
              {
                ATerm s_54 = t;
                int t_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        k_20 = ATgetArgument(t, 0);
                        {
                          ATerm n_21 = NULL,r_8 = NULL;
                          t = SSLgetAnnotations(i_36);
                          n_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
                          r_8 = t;
                          t = SSLsetAnnotations(r_8, n_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = i_36;
                      }
                    LocalPopChoice(t_54);
                    t = xtc_transform_file_2_0(g_20, h_20, t);
                  }
                else
                  {
                    t = s_54;
                    t = xtc_transform_term_2_0(j_20, l_20, t);
                  }
              }
              LocalPopChoice(p_54);
            }
          else
            {
              t = k_54;
              {
                ATerm v_20 = NULL,w_20 = NULL,c_21 = NULL;
                t = term_u_35;
                w_20 = t;
                t = (ATerm) ATinsert(ATempty, term_u_54);
                c_21 = t;
                t = SSL_printnl(w_20, c_21);
                t = term_z_38;
                v_20 = t;
                t = SSL_exit(v_20);
                t = (ATerm) ATinsert(ATempty, term_u_54);
              }
            }
        }
        t = copy_to_1_0(m_20, t);
        p_19 = t;
        t = term_u_35;
        q_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_54));
        x_19 = t;
        t = SSL_printnl(q_19, x_19);
        t = p_19;
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
ATerm if_keep5_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        t = term_q_35;
        s_36 = t;
        t = term_w_40;
        t_36 = t;
        t = term_x_40;
        t = p_14(s_36, t_36, t);
        r_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_j_45);
        t = geq_0_0(t);
        t = p_36;
        t = z_123(t);
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        t = p_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
        t = term_q_35;
        b_37 = t;
        t = term_w_40;
        c_37 = t;
        t = term_x_40;
        t = p_14(b_37, c_37, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_37, term_f_48);
        t = geq_0_0(t);
        t = y_36;
        t = a_124(t);
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
        t = y_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_37 = NULL,h_37 = NULL;
      t = term_q_35;
      g_37 = t;
      t = term_c_55;
      h_37 = t;
      t = term_d_55;
      t = p_14(g_37, h_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_c_55);
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      t = (ATerm) ATinsert(ATempty, term_e_55);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,v_37 = NULL;
  q_37 = t;
  t = term_j_55;
  o_37 = t;
  t = term_q_35;
  s_37 = t;
  t = term_k_55;
  v_37 = t;
  t = term_l_55;
  t = p_14(s_37, v_37, t);
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_k_55);
  p_37 = t;
  t = q_37;
  t = comp_0_2(o_37, p_37, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL;
        t = term_q_35;
        c_38 = t;
        t = term_w_40;
        d_38 = t;
        t = term_x_40;
        t = p_14(c_38, d_38, t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_37, term_l_39);
        t = geq_0_0(t);
        t = x_37;
        t = x_123(t);
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
ATerm fetch_elem_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm f_38 = NULL;
  static ATerm r_20 (ATerm t);
  static ATerm r_20 (ATerm t)
  {
    t = i_106(t);
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
  ATerm k_40 = NULL,l_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_40 = ATgetArgument(t, 0);
      {
        ATerm h_22 = NULL,o_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(k_40);
        h_22 = t;
        t = l_40;
        t = fetch_elem_1_0(x_20, t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, o_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, h_22);
      }
    }
  else
    {
      ATerm j_23 = NULL,p_23 = NULL,e_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          l_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_40);
      j_23 = t;
      t = l_40;
      t = fetch_elem_1_0(a_21, t);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, p_23);
      e_10 = t;
      t = SSLsetAnnotations(e_10, j_23);
    }
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,z_22 = NULL;
  v_22 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            w_22 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
            {
              ATerm q_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_55);
        t = w_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = z_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_22;
      }
    else
      {
        t = o_55;
        if(match_cons(t, sym_RDef_3))
          {
            w_22 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
            {
              ATerm r_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = z_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_22;
      }
  }
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm w_23 = NULL,y_23 = NULL,e_24 = NULL;
  w_23 = t;
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            y_23 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
            {
              ATerm u_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_55);
        t = y_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = e_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_23;
      }
    else
      {
        t = s_55;
        if(match_cons(t, sym_RDef_3))
          {
            y_23 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
            {
              ATerm v_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = e_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_23;
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
  t = (ATerm) ATinsert(ATempty, term_c_56);
  e_39 = t;
  t = SSL_printnl(d_39, e_39);
  t = c_39;
  return(t);
}
static ATerm l_13 (ATerm x_22, ATerm y_22, ATerm t)
{
  t = x_22;
  {
    ATerm d_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_56;
      }
  }
  t = y_22;
  {
    ATerm i_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(m_56);
      }
    else
      {
        t = i_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_n_56, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_22), (ATerm) ATempty))))));
  return(t);
}
static ATerm m_13 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm c_41 = NULL;
  t = SSL_write_term_to_stream_baf(s_24, t_24);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_41);
  return(t);
}
static ATerm n_13 (ATerm n_105 (ATerm), ATerm z_209, ATerm c_25, ATerm t)
{
  ATerm d_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_209, term_q_56);
  t = i_14(t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, c_25);
  t = n_105(t);
  t = fclose_0_0(t);
  t = c_25;
  return(t);
}
static ATerm q_13 (ATerm i_119 (ATerm), ATerm a_45, ATerm y_44, ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,o_41 = NULL;
  j_41 = t;
  t = i_119(t);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_41, a_45, y_44);
  t = q_14(e_41, a_45, y_44, t);
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_41 = NULL;
        t = term_t_56;
        p_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_41, term_t_56);
        t = p_14(e_41, p_41, t);
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
      f_41 = ATgetFirst((ATermList) t);
      h_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_41, term_t_56, (ATerm) ATinsert(CheckATermList(h_41), (ATerm) ATinsert(CheckATermList(f_41), a_45)));
  t = lookup_table_0_1(e_41, t);
  o_41 = t;
  t = term_t_56;
  k_41 = t;
  t = (ATerm) ATinsert(CheckATermList(h_41), (ATerm) ATinsert(CheckATermList(f_41), a_45));
  l_41 = t;
  t = o_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(k_41, l_41, m_41, t);
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
      ATerm x_41 = NULL,z_24 = NULL;
      x_41 = t;
      t = term_a_57;
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_41, term_a_57);
      t = v_14(x_41, z_24, t);
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
  ATerm b_42 = NULL,e_42 = NULL,g_42 = NULL,i_42 = NULL,k_42 = NULL;
  t = P__tmpdir_0_0(t);
  i_42 = t;
  t = term_g_57;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_42, term_g_57);
  t = v_14(i_42, k_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_37;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_42, term_f_37);
  t = q_13(b_21, e_42, g_42, t);
  t = SSL_close(b_42);
  t = e_42;
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
      ATerm s_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_57);
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_42, (ATerm) ATinsert(ATempty, term_j_57));
      t = j_14(q_42, s_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm y_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_57 = ATgetArgument(t, 0);
      if(match_cons(m_57, sym_Stream_1))
        {
          y_42 = ATgetArgument(m_57, 0);
        }
      else
        _fail(t);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(y_42, a_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm x_131 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,w_42 = NULL;
  t = read_from_0_0(t);
  t = x_131(t);
  w_42 = t;
  t = xtc_new_file_0_0(t);
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_42, w_42);
  t = n_13(d_21, t_42, w_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_42);
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
static ATerm k_21 (ATerm t)
{
  t = save_as_1_0(o_21, t);
  return(t);
}
static ATerm o_21 (ATerm t)
{
  t = term_o_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm g_43 = NULL,f_44 = NULL;
  f_44 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,u_25 = NULL;
        t = term_q_35;
        o_25 = t;
        t = term_u_57;
        u_25 = t;
        t = term_v_57;
        t = p_14(o_25, u_25, t);
        g_43 = t;
        t = if_verbose2_1_0(e_21, t);
        t = f_44;
        {
          ATerm w_57 = t;
          int x_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_25 = NULL,x_25 = NULL;
              t = term_q_35;
              v_25 = t;
              t = term_h_38;
              x_25 = t;
              t = term_i_38;
              t = p_14(v_25, x_25, t);
              t = f_44;
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
                      ATerm s_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          s_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = l_13(g_43, s_26, t);
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
        t = f_44;
      }
  }
  t = if_keep3_1_0(k_21, t);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm n_45 = NULL;
  n_45 = t;
  {
    ATerm b_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_45);
        LocalPopChoice(e_58);
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
  ATerm m_44 = NULL,p_44 = NULL;
  static ATerm q_21 (ATerm t);
  static ATerm q_21 (ATerm t)
  {
    ATerm e_45 = NULL,g_45 = NULL,i_45 = NULL;
    e_45 = t;
    t = term_f_57;
    g_45 = t;
    t = term_t_56;
    i_45 = t;
    t = term_f_58;
    t = p_14(g_45, i_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_44 != NULL) && (m_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_44 = ATgetFirst((ATermList) t);
        {
          ATerm g_58 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = m_44;
    t = map_1_0(r_21, t);
    t = e_45;
    t = end_scope_1_0(s_21, t);
    return(t);
  }
  t = repeat_2_0(q_21, _id, t);
  p_44 = t;
  t = SSL_exit(p_44);
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
      t = p_14(k_46, l_46, t);
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
      ATerm o_27 = NULL,v_27 = NULL;
      t = term_a_36;
      {
        ATerm k_58 = t;
        int l_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = NULL,x_27 = NULL;
            t = term_q_35;
            w_27 = t;
            t = term_a_36;
            x_27 = t;
            t = term_b_36;
            t = p_14(w_27, x_27, t);
            LocalPopChoice(l_58);
          }
        else
          {
            t = k_58;
            t = term_k_37;
          }
      }
      o_27 = t;
      t = term_h_57;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_57, o_27);
      t = y_13(v_27, o_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_58 = ATgetArgument(t, 0);
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
  t = term_l_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,p_46 = NULL,s_46 = NULL,w_46 = NULL;
  t = z_96(t);
  n_46 = t;
  t = term_q_35;
  s_46 = t;
  t = term_d_40;
  w_46 = t;
  t = term_e_40;
  t = p_14(s_46, w_46, t);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, n_46);
  t = v_14(p_46, n_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,b_48 = NULL;
  z_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_58 = t;
    int r_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL;
        t = z_47;
        t = t_0(t);
        l_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_48, l_28);
        t = y_13(b_48, l_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
        LocalPopChoice(r_58);
      }
    else
      {
        t = q_58;
        {
          ATerm v_58 = t;
          int w_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL;
              t = z_47;
              t = t_0(t);
              b_29 = t;
              {
                ATerm x_58 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_29 = NULL;
                    c_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = c_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = c_29;
                          }
                        else
                          {
                            t = c_29;
                            if((b_48 != t))
                              {
                                _fail(t);
                              }
                            t = c_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_58;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_48, b_29);
              t = y_13(b_48, b_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
              LocalPopChoice(w_58);
            }
          else
            {
              t = v_58;
              t = z_47;
              t = t_0(t);
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
  t = term_y_58;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  {
    ATerm z_58 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,s_29 = NULL,x_29 = NULL,y_29 = NULL,c_30 = NULL;
        t = term_q_35;
        y_29 = t;
        t = term_k_59;
        c_30 = t;
        t = term_o_59;
        t = p_14(y_29, c_30, t);
        t = v_48;
        t = copy_to_1_0(v_21, t);
        r_29 = t;
        t = term_u_35;
        s_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_59));
        x_29 = t;
        t = SSL_printnl(s_29, x_29);
        t = r_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(c_59);
      }
    else
      {
        t = z_58;
        t = v_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  t = term_w_40;
  {
    ATerm q_59 = t;
    int s_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL,j_50 = NULL;
        t = term_q_35;
        i_50 = t;
        t = term_w_40;
        j_50 = t;
        t = term_x_40;
        t = p_14(i_50, j_50, t);
        LocalPopChoice(s_59);
      }
    else
      {
        t = q_59;
        t = term_z_38;
      }
  }
  d_50 = t;
  t = term_z_38;
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, term_z_38);
  t = w_13(d_50, f_50, t);
  e_50 = t;
  t = SSL_int_to_string(e_50);
  c_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_50), term_w_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,x_50 = NULL,z_50 = NULL,a_51 = NULL;
  t = term_q_35;
  z_50 = t;
  t = term_t_59;
  a_51 = t;
  t = term_u_59;
  t = p_14(z_50, a_51, t);
  o_50 = t;
  t = term_z_59;
  t = xtc_find_path_0_0(t);
  p_50 = t;
  t = term_a_60;
  t = xtc_find_path_0_0(t);
  q_50 = t;
  t = term_b_60;
  t = xtc_find_path_0_0(t);
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_50), term_t_59), q_50), term_t_59), p_50), term_t_59));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,g_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  j_51 = t;
  t = term_c_60;
  b_51 = t;
  t = j_51;
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL,r_51 = NULL;
        t = term_q_35;
        o_51 = t;
        t = term_a_36;
        r_51 = t;
        t = term_b_36;
        t = p_14(o_51, r_51, t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
        {
          ATerm t_51 = NULL,w_51 = NULL;
          t = term_q_35;
          t_51 = t;
          t = term_d_40;
          w_51 = t;
          t = term_e_40;
          t = p_14(t_51, w_51, t);
        }
      }
  }
  k_51 = t;
  t = j_51;
  t = get_include_dirs_0_0(t);
  d_51 = t;
  t = j_51;
  t = pass_keep_0_0(t);
  g_51 = t;
  t = term_g_60;
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_51 = NULL,a_52 = NULL;
        t = term_q_35;
        x_51 = t;
        t = term_g_60;
        a_52 = t;
        t = term_j_60;
        t = p_14(x_51, a_52, t);
        LocalPopChoice(i_60);
        t = (ATerm) ATinsert(ATempty, term_g_60);
      }
    else
      {
        t = h_60;
        t = (ATerm) ATempty;
      }
  }
  i_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_51), g_51), d_51), (ATerm) ATinsert(ATinsert(ATempty, k_51), term_k_60));
  t = concat_0_0(t);
  c_51 = t;
  t = j_51;
  t = comp_0_2(b_51, c_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  {
    ATerm n_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL,h_52 = NULL,j_52 = NULL;
        t = term_q_35;
        h_52 = t;
        t = term_r_35;
        j_52 = t;
        t = term_s_35;
        t = p_14(h_52, j_52, t);
        f_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_52, term_l_39);
        t = geq_0_0(t);
        t = c_52;
        t = v_122(t);
        LocalPopChoice(o_60);
      }
    else
      {
        t = n_60;
        t = c_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm x_116 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  s_52 = t;
  t = SSL_explode_string(s_52);
  {
    ATerm p_60 = t;
    int q_60 = stack_ptr;
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
            ATerm r_60 = t;
            int s_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_31 = NULL,y_31 = NULL,j_10 = NULL;
                t = SSLgetAnnotations(a_54);
                u_31 = t;
                t = c_54;
                t = f_54(t);
                y_31 = t;
                t = (ATerm) ATinsert(CheckATermList(y_31), b_54);
                j_10 = t;
                t = SSLsetAnnotations(j_10, u_31);
                LocalPopChoice(s_60);
              }
            else
              {
                t = r_60;
                {
                  ATerm u_60 = t;
                  int v_60 = stack_ptr;
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
                      LocalPopChoice(v_60);
                    }
                  else
                    {
                      t = u_60;
                      {
                        ATerm d_33 = NULL,h_33 = NULL,l_10 = NULL;
                        t = SSLgetAnnotations(a_54);
                        d_33 = t;
                        t = b_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = c_54;
                        t = x_116(t);
                        h_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_33), b_54);
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
        LocalPopChoice(q_60);
      }
    else
      {
        t = p_60;
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
  t = term_w_60;
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
static ATerm r_13 (ATerm t_22, ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL;
  t = t_22;
  t = basename_1_0(_id, t);
  l_54 = t;
  t = if_verbose3_1_0(z_21, t);
  t = term_f_40;
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, l_54);
  t = u_14(o_54, l_54, t);
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_54 = NULL,r_54 = NULL;
        t = term_q_35;
        q_54 = t;
        t = term_a_36;
        r_54 = t;
        t = term_b_36;
        t = p_14(q_54, r_54, t);
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
  t = term_d_40;
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, m_54);
  t = u_14(n_54, m_54, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_54);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = debug_1_0(i_22, t);
  return(t);
}
static ATerm i_22 (ATerm t)
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
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      k_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(k_56, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm l_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_56 = NULL,o_56 = NULL,p_56 = NULL;
        l_56 = t;
        t = term_q_35;
        o_56 = t;
        t = term_h_38;
        p_56 = t;
        t = term_i_38;
        t = p_14(o_56, p_56, t);
        t = l_56;
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
              ATerm u_33 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(j_56);
              u_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_56);
              a_11 = t;
              t = SSLsetAnnotations(a_11, u_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_56;
          }
        LocalPopChoice(o_61);
        t = xtc_transform_file_2_0(n_22, u_22, t);
      }
    else
      {
        t = n_61;
        t = xtc_transform_term_2_0(a_23, e_23, t);
      }
  }
  h_56 = t;
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
              ATerm b_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(h_56);
              b_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_57);
              b_11 = t;
              t = SSLsetAnnotations(b_11, b_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_56;
          }
        LocalPopChoice(q_61);
        t = xtc_transform_file_2_0(g_23, h_23, t);
      }
    else
      {
        t = p_61;
        t = xtc_transform_term_2_0(i_23, k_23, t);
      }
  }
  t = if_keep5_1_0(l_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(n_23, t);
  i_34 = t;
  t = term_r_61;
  f_34 = t;
  t = i_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  g_34 = t;
  t = i_34;
  t = comp_0_2(f_34, g_34, t);
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
              ATerm s_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(g_56);
              s_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_57);
              c_11 = t;
              t = SSLsetAnnotations(c_11, s_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_56;
          }
        LocalPopChoice(t_61);
        t = xtc_transform_file_2_0(v_23, x_23, t);
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
              ATerm b_35 = NULL,o_11 = NULL;
              t = SSLgetAnnotations(f_56);
              b_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_57);
              o_11 = t;
              t = SSLsetAnnotations(o_11, b_35);
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
        t = xtc_transform_term_2_0(l_24, m_24, t);
      }
  }
  t = if_keep5_1_0(n_24, t);
  e_56 = t;
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_57 = ATgetArgument(t, 0);
            {
              ATerm f_35 = NULL,f_12 = NULL;
              t = SSLgetAnnotations(e_56);
              f_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_57);
              f_12 = t;
              t = SSLsetAnnotations(f_12, f_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_56;
          }
        LocalPopChoice(a_62);
        t = xtc_transform_file_2_0(w_24, x_24, t);
      }
    else
      {
        t = z_61;
        t = xtc_transform_term_2_0(a_25, b_25, t);
      }
  }
  t = if_keep5_1_0(d_25, t);
  b_56 = t;
  {
    ATerm b_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_58 = ATgetArgument(t, 0);
            {
              ATerm m_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(b_56);
              m_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_58);
              j_12 = t;
              t = SSLsetAnnotations(j_12, m_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_56;
          }
        LocalPopChoice(d_62);
        t = xtc_transform_file_2_0(g_25, i_25, t);
      }
    else
      {
        t = b_62;
        t = xtc_transform_term_2_0(k_25, l_25, t);
      }
  }
  t = if_keep5_1_0(m_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm e_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL,s_58 = NULL,t_58 = NULL;
        p_58 = t;
        t = term_q_35;
        s_58 = t;
        t = term_h_38;
        t_58 = t;
        t = term_i_38;
        t = p_14(s_58, t_58, t);
        t = p_58;
        LocalPopChoice(f_62);
        {
          ATerm u_58 = NULL;
          u_58 = t;
          {
            ATerm h_62 = t;
            int p_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_59 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    j_59 = ATgetArgument(t, 0);
                    {
                      ATerm x_35 = NULL,k_12 = NULL;
                      t = SSLgetAnnotations(u_58);
                      x_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, j_59);
                      k_12 = t;
                      t = SSLsetAnnotations(k_12, x_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = u_58;
                  }
                LocalPopChoice(p_62);
                t = xtc_transform_file_2_0(p_25, q_25, t);
              }
            else
              {
                t = h_62;
                t = xtc_transform_term_2_0(r_25, t_25, t);
              }
          }
        }
      }
    else
      {
        t = e_62;
        {
          ATerm n_59 = NULL;
          n_59 = t;
          {
            ATerm q_62 = t;
            int r_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_59 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_59 = ATgetArgument(t, 0);
                    {
                      ATerm m_36 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(n_59);
                      m_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_59);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, m_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = n_59;
                  }
                LocalPopChoice(r_62);
                t = xtc_transform_file_2_0(y_25, a_26, t);
              }
            else
              {
                t = q_62;
                t = xtc_transform_term_2_0(b_26, c_26, t);
              }
          }
          t = if_keep2_1_0(d_26, t);
        }
      }
  }
  x_36 = t;
  t = term_s_62;
  v_36 = t;
  t = x_36;
  t = pass_warnings_0_0(t);
  w_36 = t;
  t = x_36;
  t = comp_0_2(v_36, w_36, t);
  a_56 = t;
  {
    ATerm v_62 = t;
    int w_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_60 = ATgetArgument(t, 0);
            {
              ATerm e_37 = NULL,m_12 = NULL;
              t = SSLgetAnnotations(a_56);
              e_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_60);
              m_12 = t;
              t = SSLsetAnnotations(m_12, e_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_56;
          }
        LocalPopChoice(w_62);
        t = xtc_transform_file_2_0(f_26, g_26, t);
      }
    else
      {
        t = v_62;
        t = xtc_transform_term_2_0(i_26, l_26, t);
      }
  }
  z_55 = t;
  {
    ATerm x_62 = t;
    int a_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_60 = ATgetArgument(t, 0);
            {
              ATerm t_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(z_55);
              t_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_60);
              p_12 = t;
              t = SSLsetAnnotations(p_12, t_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_55;
          }
        LocalPopChoice(a_63);
        t = xtc_transform_file_2_0(o_26, p_26, t);
      }
    else
      {
        t = x_62;
        t = xtc_transform_term_2_0(q_26, r_26, t);
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
  t = (ATerm) ATinsert(CheckATermList(w_55), term_b_63);
  y_55 = t;
  t = SSL_printnl(x_55, y_55);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(w_55), term_b_63));
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm w_56 = NULL;
  t = pass_verbose_0_0(t);
  w_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), term_w_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm x_56 = NULL;
  t = pass_verbose_0_0(t);
  x_56 = t;
  t = (ATerm) ATinsert(CheckATermList(x_56), term_w_38);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm d_57 = NULL;
  t = pass_verbose_0_0(t);
  d_57 = t;
  t = (ATerm) ATinsert(CheckATermList(d_57), term_w_38);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_e_63;
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
  t = term_f_63;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = save_as_1_0(q_23, t);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_g_63;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = save_as_1_0(u_23, t);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_h_63;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm k_57 = NULL;
  t = pass_verbose_0_0(t);
  k_57 = t;
  t = (ATerm) ATinsert(CheckATermList(k_57), term_w_38);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_m_63;
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
  t = term_n_63;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_o_63;
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
static ATerm l_24 (ATerm t)
{
  t = term_o_63;
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
  t = term_p_63;
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm c_58 = NULL;
  t = pass_verbose_0_0(t);
  c_58 = t;
  t = (ATerm) ATinsert(CheckATermList(c_58), term_w_38);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm d_58 = NULL;
  t = pass_verbose_0_0(t);
  d_58 = t;
  t = (ATerm) ATinsert(CheckATermList(d_58), term_w_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(f_25, t);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm i_25 (ATerm t)
{
  ATerm n_58 = NULL;
  t = pass_verbose_0_0(t);
  n_58 = t;
  t = (ATerm) ATinsert(CheckATermList(n_58), term_w_38);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm o_58 = NULL;
  t = pass_verbose_0_0(t);
  o_58 = t;
  t = (ATerm) ATinsert(CheckATermList(o_58), term_w_38);
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = save_as_1_0(n_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_x_63;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm l_59 = NULL;
  t = pass_verbose_0_0(t);
  l_59 = t;
  t = (ATerm) ATinsert(CheckATermList(l_59), term_w_38);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_w_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_w_38);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm w_59 = NULL;
  t = pass_verbose_0_0(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), term_w_38);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = save_as_1_0(e_26, t);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm l_60 = NULL;
  t = pass_verbose_0_0(t);
  l_60 = t;
  t = (ATerm) ATinsert(CheckATermList(l_60), term_w_38);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
static ATerm l_26 (ATerm t)
{
  ATerm m_60 = NULL;
  t = pass_verbose_0_0(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), term_w_38);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_d_64;
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
  t = term_d_64;
  return(t);
}
static ATerm r_26 (ATerm t)
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
  t = term_i_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(e_22, t);
  t = profile_p__2_0(j_22, k_22, t);
  return(t);
}
static ATerm p_14 (ATerm o_65, ATerm p_65, ATerm t)
{
  ATerm v_61 = NULL;
  t = lookup_table_0_1(o_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(p_65, v_61, t);
  return(t);
}
static ATerm s_13 (ATerm a_64, ATerm b_64, ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  y_61 = t;
  {
    ATerm j_64 = t;
    int k_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
        t = p_14(a_64, b_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_64 = ATgetFirst((ATermList) t);
            x_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_64);
        {
          ATerm c_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, a_64, b_64, x_61);
          t = lookup_table_0_1(a_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_14(b_64, x_61, c_62, t);
          t = (ATerm) ATmakeAppl(sym__3, a_64, b_64, x_61);
        }
      }
    else
      {
        t = j_64;
        {
          ATerm g_62 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
          t = lookup_table_0_1(a_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_14(b_64, g_62, t);
          t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
        }
      }
  }
  t = y_61;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
  l_62 = t;
  t = f_119(t);
  k_62 = t;
  {
    ATerm n_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_62 = NULL;
        t = term_t_56;
        t_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_62, term_t_56);
        t = p_14(k_62, t_62, t);
        {
          ATerm p_64 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_64;
            }
        }
        LocalPopChoice(o_64);
      }
    else
      {
        t = n_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_62 = ATgetFirst((ATermList) t);
      i_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_62, term_t_56, i_62);
  t = lookup_table_0_1(k_62, t);
  o_62 = t;
  t = term_t_56;
  m_62 = t;
  t = o_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(m_62, i_62, n_62, t);
  t = j_62;
  {
    static ATerm y_26 (ATerm t);
    static ATerm y_26 (ATerm t)
    {
      ATerm u_62 = NULL;
      u_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_62, u_62);
      t = s_13(k_62, u_62, t);
      return(t);
    }
    t = map_1_0(y_26, t);
  }
  t = l_62;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm t)
{
  ATerm r_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_98(t);
      t = h_98(t);
      LocalPopChoice(v_64);
    }
  else
    {
      t = r_64;
      t = h_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,c_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  z_62 = t;
  t = e_119(t);
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_62, term_t_56);
  {
    ATerm w_64 = t;
    int x_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_63 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_64 = ATgetArgument(t, 0);
            ATerm z_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_56;
        q_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_62, term_t_56);
        t = p_14(y_62, q_63, t);
        LocalPopChoice(x_64);
      }
    else
      {
        t = w_64;
        t = (ATerm) ATempty;
      }
  }
  c_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_62, term_t_56, (ATerm) ATinsert(CheckATermList(c_63), (ATerm) ATempty));
  t = lookup_table_0_1(y_62, t);
  l_63 = t;
  t = term_t_56;
  i_63 = t;
  t = (ATerm) ATinsert(CheckATermList(c_63), (ATerm) ATempty);
  j_63 = t;
  t = l_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(i_63, j_63, k_63, t);
  t = z_62;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_f_57;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm m_64 = NULL;
  m_64 = t;
  {
    ATerm a_65 = t;
    int d_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_64);
        LocalPopChoice(d_65);
      }
    else
      {
        t = a_65;
        t = m_64;
      }
  }
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_f_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm e_64 = NULL;
  static ATerm b_27 (ATerm t);
  static ATerm b_27 (ATerm t)
  {
    ATerm f_64 = NULL;
    f_64 = t;
    {
      ATerm e_65 = t;
      int i_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_64 = NULL,h_64 = NULL;
          t = term_f_57;
          g_64 = t;
          t = term_t_56;
          h_64 = t;
          t = term_f_58;
          t = p_14(g_64, h_64, t);
          LocalPopChoice(i_65);
        }
      else
        {
          t = e_65;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_64 != NULL) && (e_64 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_64 = ATgetFirst((ATermList) t);
        {
          ATerm j_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_64;
    t = map_1_0(e_27, t);
    t = f_64;
    t = end_scope_1_0(f_27, t);
    return(t);
  }
  t = begin_scope_1_0(z_26, t);
  t = restore_always_2_0(i_132, b_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_122 (ATerm), ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  {
    ATerm k_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_65 = NULL,g_65 = NULL,l_65 = NULL;
        t = term_q_35;
        g_65 = t;
        t = term_r_35;
        l_65 = t;
        t = term_s_35;
        t = p_14(g_65, l_65, t);
        f_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_65, term_z_38);
        t = geq_0_0(t);
        t = q_64;
        t = t_122(t);
        LocalPopChoice(m_65);
      }
    else
      {
        t = k_65;
        t = q_64;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm t_65 = t;
  int u_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_43, n_43);
      LocalPopChoice(u_65);
    }
  else
    {
      t = t_65;
      t = SSL_addr(m_43, n_43);
    }
  return(t);
}
static ATerm w_13 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm e_66 = t;
  int f_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(s_43, t_43);
      LocalPopChoice(f_66);
    }
  else
    {
      t = e_66;
      t = SSL_subtr(s_43, t_43);
    }
  return(t);
}
static ATerm x_13 (ATerm x_60, ATerm z_60, ATerm b_61, ATerm d_61, ATerm y_60, ATerm a_61, ATerm c_61, ATerm e_61, ATerm t)
{
  ATerm n_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
  t = w_13(x_60, y_60, t);
  n_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
  t = w_13(z_60, a_61, t);
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_61, c_61);
  t = w_13(b_61, c_61, t);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_61, e_61);
  t = w_13(d_61, e_61, t);
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym__4, n_65, q_65, r_65, s_65);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_66 = ATgetArgument(t, 0);
      if(match_cons(j_66, sym__4))
        {
          v_65 = ATgetArgument(j_66, 0);
          w_65 = ATgetArgument(j_66, 1);
          x_65 = ATgetArgument(j_66, 2);
          y_65 = ATgetArgument(j_66, 3);
        }
      else
        _fail(t);
      {
        ATerm k_66 = ATgetArgument(t, 1);
        if(match_cons(k_66, sym__4))
          {
            z_65 = ATgetArgument(k_66, 0);
            a_66 = ATgetArgument(k_66, 1);
            b_66 = ATgetArgument(k_66, 2);
            c_66 = ATgetArgument(k_66, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_13(v_65, w_65, x_65, y_65, z_65, a_66, b_66, c_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm d_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL,n_66 = NULL,p_66 = NULL,t_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,d_67 = NULL,f_67 = NULL;
  p_66 = t;
  t = times_0_0(t);
  d_66 = t;
  t = p_66;
  t = h_126(t);
  g_66 = t;
  t = times_0_0(t);
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_66, d_66);
  t = diff_times_0_0(t);
  l_66 = t;
  if(match_cons(t, sym__4))
    {
      z_66 = ATgetArgument(t, 0);
      {
        ATerm m_66 = ATgetArgument(t, 1);
      }
      d_67 = ATgetArgument(t, 2);
      {
        ATerm o_66 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_66, d_67);
  t = u_13(z_66, d_67, t);
  f_67 = t;
  t = SSL_TicksToSeconds(f_67);
  h_66 = t;
  t = l_66;
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
  t = u_13(t_66, x_66, t);
  y_66 = t;
  t = SSL_TicksToSeconds(y_66);
  i_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_66), term_u_66), h_66), term_s_66);
  t = g_126(t);
  t = g_66;
  return(t);
}
ATerm debug_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL;
  g_67 = t;
  t = l_105(t);
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
  t = p_14(o_67, p_67, t);
  l_67 = t;
  t = term_k_37;
  m_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_68), term_a_68), term_w_67), term_u_67), term_e_67), term_c_67), term_b_67), l_67), term_a_67);
  n_67 = t;
  t = SSL_printnl(m_67, n_67);
  t = k_67;
  return(t);
}
static ATerm y_13 (ATerm h_55, ATerm i_55, ATerm t)
{
  t = SSL_copy(h_55, i_55);
  return(t);
}
static ATerm z_13 (ATerm u_68, ATerm t)
{
  t = SSL_hashtable_keys(u_68);
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
    t = p_14(not_null(q_67), s_67, t);
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
  t = z_13(r_67, t);
  t = map_1_0(g_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm v_67 = NULL;
  v_67 = t;
  {
    ATerm d_68 = t;
    int h_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
        t = term_q_35;
        y_67 = t;
        t = term_r_35;
        z_67 = t;
        t = term_s_35;
        t = p_14(y_67, z_67, t);
        x_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_67, term_j_45);
        t = geq_0_0(t);
        t = v_67;
        t = x_122(t);
        LocalPopChoice(h_68);
      }
    else
      {
        t = d_68;
        t = v_67;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm c_68 = NULL;
  c_68 = t;
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
        t = term_q_35;
        f_68 = t;
        t = term_r_35;
        g_68 = t;
        t = term_s_35;
        t = p_14(f_68, g_68, t);
        e_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_68, term_n_42);
        t = geq_0_0(t);
        t = c_68;
        t = w_122(t);
        LocalPopChoice(j_68);
      }
    else
      {
        t = i_68;
        t = c_68;
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
    ATerm k_68 = t;
    int l_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_69;
        if((e_69 != t))
          {
            _fail(t);
          }
        t = d_69;
        LocalPopChoice(l_68);
      }
    else
      {
        t = k_68;
        t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
        {
          ATerm m_68 = t;
          int y_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_69, f_69);
              LocalPopChoice(y_68);
            }
          else
            {
              t = m_68;
              t = SSL_gtr(e_69, f_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_69, f_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_122 (ATerm), ATerm t)
{
  ATerm p_69 = NULL;
  p_69 = t;
  {
    ATerm z_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,t_69 = NULL,v_69 = NULL;
        t = term_q_35;
        t_69 = t;
        t = term_r_35;
        v_69 = t;
        t = term_s_35;
        t = p_14(t_69, v_69, t);
        s_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_69, term_f_48);
        t = geq_0_0(t);
        t = p_69;
        t = y_122(t);
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
static ATerm c_14 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  t = l_110(t);
  {
    static ATerm h_27 (ATerm t);
    static ATerm h_27 (ATerm t)
    {
      ATerm y_69 = NULL;
      y_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, y_69);
      t = k_110(t);
      return(t);
    }
    t = fetch_1_0(h_27, t);
  }
  t = d_31;
  return(t);
}
static ATerm d_14 (ATerm h_110 (ATerm), ATerm a_31, ATerm z_30, ATerm t)
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
                t = c_14(h_110, i_27, s_70, t_70, t);
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
static ATerm e_14 (ATerm s_64, ATerm t_64, ATerm u_64, ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,f_71 = NULL;
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
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
        t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
        t = p_14(s_64, t_64, t);
        LocalPopChoice(h_69);
      }
    else
      {
        t = g_69;
        t = (ATerm) ATempty;
      }
  }
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_71, u_64);
  t = d_14(j_27, c_71, u_64, t);
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_64, t_64, b_71);
  t = lookup_table_0_1(s_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(t_64, b_71, f_71, t);
  t = a_71;
  return(t);
}
static ATerm f_14 (ATerm p_127 (ATerm), ATerm c_65, ATerm b_65, ATerm t)
{
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm r_71 = NULL,s_71 = NULL;
    if(match_cons(t, sym__2))
      {
        r_71 = ATgetArgument(t, 0);
        s_71 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, c_65, r_71, s_71);
    t = p_127(t);
    return(t);
  }
  t = b_65;
  t = map_1_0(k_27, t);
  return(t);
}
static ATerm j_14 (ATerm g_40, ATerm h_40, ATerm t)
{
  t = SSL_access(g_40, h_40);
  return(t);
}
static ATerm s_72 (ATerm g_72, ATerm t)
{
  t = SSL_fclose(g_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  o_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_72 = ATgetArgument(t, 0);
      {
        ATerm k_69 = t;
        int l_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_72);
            LocalPopChoice(l_69);
          }
        else
          {
            t = k_69;
            t = s_72(o_72, t);
          }
      }
    }
  else
    {
      t = s_72(o_72, t);
    }
  return(t);
}
static ATerm g_14 (ATerm y_24, ATerm t)
{
  t = SSL_read_term_from_stream(y_24);
  return(t);
}
static ATerm h_14 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm t_72 = NULL;
  t = SSL_fopen(s_40, t_40);
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_72 = NULL;
  t = SSL_stdin_stream();
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_72);
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
static ATerm f_75 (ATerm t_73, ATerm t)
{
  ATerm u_73 = NULL;
  t = SSL_explode_term(t_73);
  if(match_cons(t, sym__2))
    {
      ATerm m_69 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_69) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_69 = ATgetArgument(t, 1);
        if(((ATgetType(n_69) == AT_LIST) && !(ATisEmpty(n_69))))
          {
            u_73 = ATgetFirst((ATermList) n_69);
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
  t = u_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_75 (ATerm z_73, ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,l_74 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(c_74);
  f_74 = t;
  t = z_73;
  if(match_cons(t, sym_Path_1))
    {
      l_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_74, b_74);
  a_14 = t;
  t = SSLsetAnnotations(a_14, f_74);
  if(match_cons(t, sym__2))
    {
      d_74 = ATgetArgument(t, 0);
      e_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(d_74, e_74, t);
  return(t);
}
static ATerm i_75 (ATerm n_74, ATerm o_74, ATerm r_74, ATerm t)
{
  ATerm s_74 = NULL,u_74 = NULL,v_74 = NULL,z_74 = NULL,b_14 = NULL;
  t = SSLgetAnnotations(r_74);
  v_74 = t;
  t = SSL_is_string(n_74);
  z_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_74, o_74);
  b_14 = t;
  t = SSLsetAnnotations(b_14, v_74);
  if(match_cons(t, sym__2))
    {
      s_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14(s_74, u_74, t);
  return(t);
}
static ATerm i_14 (ATerm t)
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
              ATerm u_69 = t;
              int w_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(d_75, e_75, c_75, t);
                  LocalPopChoice(w_69);
                }
              else
                {
                  t = u_69;
                  t = i_75(d_75, e_75, c_75, t);
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
        t = i_14(t);
        LocalPopChoice(z_69);
      }
    else
      {
        t = x_69;
        {
          ATerm n_40 = NULL,p_40 = NULL;
          t = term_b_70;
          p_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_70, t_75);
          t = v_14(p_40, t_75, t);
          n_40 = t;
          t = SSL_perror(n_40);
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
  t = g_14(n_75, t);
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
      ATerm x_75 = NULL,z_75 = NULL;
      x_75 = t;
      t = (ATerm) ATinsert(ATempty, term_g_70);
      z_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_75, (ATerm) ATinsert(ATempty, term_g_70));
      t = j_14(x_75, z_75, t);
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
                ATerm a_76 = NULL,b_76 = NULL;
                a_76 = t;
                t = (ATerm) ATinsert(ATempty, term_j_57);
                b_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_76, (ATerm) ATinsert(ATempty, term_j_57));
                t = j_14(a_76, b_76, t);
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
static ATerm n_27 (ATerm t)
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
  ATerm x_76 = NULL,z_76 = NULL,a_77 = NULL;
  x_76 = t;
  t = term_u_35;
  z_76 = t;
  t = (ATerm) ATinsert(ATempty, term_m_70);
  a_77 = t;
  t = SSL_printnl(z_76, a_77);
  t = x_76;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm b_77 = NULL,d_77 = NULL,e_77 = NULL;
  if(match_cons(t, sym__3))
    {
      b_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
      e_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_14(b_77, d_77, e_77, t);
  return(t);
}
static ATerm u_27 (ATerm t)
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
  ATerm i_77 = NULL,k_77 = NULL,m_77 = NULL;
  i_77 = t;
  t = term_u_35;
  k_77 = t;
  t = (ATerm) ATinsert(ATempty, term_m_70);
  m_77 = t;
  t = SSL_printnl(k_77, m_77);
  t = i_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,k_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  d_76 = t;
  t = if_verbose5_1_0(n_27, t);
  {
    ATerm o_70 = t;
    if((PushChoice() == 0))
      {
        ATerm u_76 = NULL,v_76 = NULL;
        t = term_p_70;
        u_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_76);
        v_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_70, (ATerm) ATmakeAppl(sym_Imported_1, d_76));
        t = p_14(u_76, v_76, t);
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
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, term_q_70, (ATerm) ATinsert(ATempty, d_76));
  t = lookup_table_0_1(o_76, t);
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
  t = s_14(q_76, r_76, s_76, t);
  t = f_76;
  t = if_verbose4_1_0(q_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_27, t);
  e_76 = t;
  t = term_p_70;
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_70, e_76);
  t = f_14(t_27, n_76, e_76, t);
  t = if_verbose6_1_0(u_27, t);
  t = term_p_70;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, (ATerm)ATmakeAppl(sym_Imported_1, d_76), (ATerm) ATempty);
  t = lookup_table_0_1(g_76, t);
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_76);
  h_76 = t;
  t = (ATerm) ATempty;
  i_76 = t;
  t = m_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(h_76, i_76, k_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_70, (ATerm)ATmakeAppl(sym_Imported_1, d_76), (ATerm) ATempty);
  t = if_verbose4_1_0(y_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm c_78 = NULL,e_78 = NULL,g_78 = NULL;
  c_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_78;
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
        ATerm u_70 = t;
        int v_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL,i_41 = NULL,n_41 = NULL,n_18 = NULL;
            t = SSLgetAnnotations(c_78);
            y_40 = t;
            t = e_78;
            t = z_113(t);
            i_41 = t;
            t = g_78;
            t = filter_1_0(z_113, t);
            n_41 = t;
            t = (ATerm) ATinsert(CheckATermList(n_41), i_41);
            n_18 = t;
            t = SSLsetAnnotations(n_18, y_40);
            LocalPopChoice(v_70);
          }
        else
          {
            t = u_70;
            t = g_78;
            t = filter_1_0(z_113, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  static ATerm k_78 (ATerm t);
  static ATerm k_78 (ATerm t)
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_98(t);
        t = k_78(t);
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
        t = l_98(t);
      }
    return(t);
  }
  t = k_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_70 = t;
  int d_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_78 = NULL,m_78 = NULL;
      t = term_q_35;
      l_78 = t;
      t = term_e_71;
      m_78 = t;
      t = term_g_71;
      t = p_14(l_78, m_78, t);
      LocalPopChoice(d_71);
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
  t = p_14(w_78, x_78, t);
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
  ATerm q_78 = NULL;
  t = if_verbose5_1_0(z_27, t);
  q_78 = t;
  {
    ATerm p_71 = t;
    int t_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_78 = NULL,t_78 = NULL;
        t = term_p_70;
        s_78 = t;
        t = term_q_70;
        t_78 = t;
        t = term_u_71;
        t = p_14(s_78, t_78, t);
        LocalPopChoice(t_71);
      }
    else
      {
        t = p_71;
        {
          ATerm u_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_78 = t;
          t = repeat_2_0(b_28, _id, t);
          t = u_78;
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
  t = term_v_71;
  return(t);
}
static ATerm z_79 (ATerm d_79, ATerm t)
{
  ATerm g_79 = NULL,i_79 = NULL,j_79 = NULL;
  t = term_p_70;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_79);
  j_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_70, (ATerm) ATmakeAppl(sym_Tool_1, d_79));
  t = p_14(i_79, j_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_71 = ATgetFirst((ATermList) t);
      if(match_cons(w_71, sym__2))
        {
          ATerm y_71 = ATgetArgument(w_71, 0);
          g_79 = ATgetArgument(w_71, 1);
        }
      else
        _fail(t);
      {
        ATerm x_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_79;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = debug_1_0(i_28, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_v_71;
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_p_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(s_28, t);
  return(t);
}
static ATerm s_28 (ATerm t)
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
                t = p_14(s_79, t_79, t);
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
        ATerm y_79 = NULL,f_42 = NULL,h_42 = NULL;
        y_79 = t;
        t = term_u_35;
        f_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_72), y_79), term_e_72);
        h_42 = t;
        t = SSL_printnl(f_42, h_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_72), y_79), term_e_72);
        t = if_verbose5_1_0(m_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm k_14 (ATerm g_59, ATerm f_59, ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  t = g_59;
  {
    ATerm h_72 = t;
    int i_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_80 = NULL;
        t = term_q_35;
        k_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, g_59);
        t = p_14(k_80, g_59, t);
        LocalPopChoice(i_72);
      }
    else
      {
        t = h_72;
        t = (ATerm) ATempty;
      }
  }
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_59, e_80);
  t = conc_0_0(t);
  d_80 = t;
  t = term_q_35;
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, g_59, d_80);
  t = lookup_table_0_1(f_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(g_59, d_80, g_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, g_59, d_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_80 = NULL,r_80 = NULL,u_80 = NULL,v_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_80 = NULL,x_80 = NULL,z_80 = NULL;
      t = term_f_37;
      t = p_0(t);
      w_80 = t;
      t = term_j_72;
      x_80 = t;
      t = term_k_72;
      z_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_72, term_k_72, w_80);
      t = q_14(x_80, z_80, w_80, t);
      _fail(t);
    }
  else
    {
      ATerm h_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_80 = ATgetFirst((ATermList) t);
          r_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_80 = ATgetFirst((ATermList) t);
          v_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_80;
      t = m_0(t);
      t = u_80;
      t = o_0(t);
      h_81 = t;
      t = (ATerm) ATinsert(CheckATermList(v_80), h_81);
    }
  return(t);
}
static ATerm t_28 (ATerm t)
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
static ATerm w_28 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL;
  t = term_r_35;
  n_81 = t;
  t = term_l_35;
  o_81 = t;
  t = term_l_72;
  t = u_14(n_81, o_81, t);
  t = term_m_72;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  t = term_p_72;
  return(t);
}
static ATerm y_28 (ATerm t)
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
  t = u_14(r_81, q_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_81);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  t = term_q_72;
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
  t = term_r_72;
  s_81 = t;
  t = term_f_37;
  t_81 = t;
  t = term_v_72;
  t = u_14(s_81, t_81, t);
  t = term_w_72;
  return(t);
}
static ATerm f_29 (ATerm t)
{
  t = term_x_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_72 = t;
  int z_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_28, w_28, x_28, t);
      LocalPopChoice(z_72);
    }
  else
    {
      t = y_72;
      {
        ATerm a_73 = t;
        int b_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_28, z_28, a_29, t);
            LocalPopChoice(b_73);
          }
        else
          {
            t = a_73;
            t = Option_3_0(d_29, e_29, f_29, t);
          }
      }
    }
  return(t);
}
static ATerm l_14 (ATerm d_59, ATerm e_59, ATerm t)
{
  ATerm c_73 = t;
  int d_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_81 = NULL,v_81 = NULL,x_81 = NULL;
      t = term_q_35;
      x_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, d_59);
      t = p_14(x_81, d_59, t);
      t = term_q_35;
      u_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, d_59);
      t = lookup_table_0_1(u_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          v_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_14(d_59, v_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_q_35, d_59);
      LocalPopChoice(d_73);
    }
  else
    {
      t = c_73;
      t = (ATerm) ATmakeAppl(sym__2, d_59, e_59);
      t = u_14(d_59, e_59, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_106 (ATerm), ATerm t)
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
          ATerm o_42 = NULL,x_42 = NULL,q_18 = NULL;
          t = SSLgetAnnotations(v_82);
          o_42 = t;
          t = u_82;
          t = w_82(t);
          x_42 = t;
          t = (ATerm) ATinsert(CheckATermList(x_42), t_82);
          q_18 = t;
          t = SSLsetAnnotations(q_18, o_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_82;
        t = n_106(t);
      }
    return(t);
  }
  t = w_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,f_82 = NULL;
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
          c_82 = ATgetFirst((ATermList) t);
          if(((f_82 != NULL) && (f_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_82;
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
      ATerm e_73 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_73) != ATmakeSymbol("", 0, ATtrue)))
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
        ATerm f_73 = t;
        int g_73 = stack_ptr;
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
            LocalPopChoice(g_73);
          }
        else
          {
            t = f_73;
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
static ATerm m_14 (ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  t = h_59;
  {
    ATerm h_73 = t;
    int i_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_83 = NULL;
        t = term_q_35;
        o_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_35, h_59);
        t = p_14(o_83, h_59, t);
        LocalPopChoice(i_73);
      }
    else
      {
        t = h_73;
        t = (ATerm) ATempty;
      }
  }
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_83, i_59);
  t = conc_0_0(t);
  j_83 = t;
  t = term_q_35;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, h_59, j_83);
  t = lookup_table_0_1(l_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(h_59, j_83, m_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, h_59, j_83);
  return(t);
}
static ATerm k_29 (ATerm t)
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
  ATerm v_83 = NULL,w_83 = NULL;
  v_83 = t;
  t = term_a_36;
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, v_83);
  t = u_14(w_83, v_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_83);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_l_73;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_29, o_29, p_29, t);
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
  t = u_14(b_84, a_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_84);
  return(t);
}
static ATerm d_30 (ATerm t)
{
  t = term_m_73;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_29, z_29, d_30, t);
  return(t);
}
static ATerm m_30 (ATerm t)
{
  ATerm n_84 = NULL;
  n_84 = t;
  if(match_string(t, "-I"))
    {
      t = n_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = n_84;
    }
  return(t);
}
static ATerm n_30 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL;
  p_84 = t;
  t = term_t_59;
  q_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_84), term_t_59);
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_59, (ATerm) ATinsert(ATinsert(ATempty, p_84), term_t_59));
  t = m_14(q_84, r_84, t);
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
  t = u_14(u_84, t_84, t);
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
  t = u_14(w_84, x_84, t);
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
  ATerm y_84 = NULL,b_85 = NULL,c_85 = NULL;
  y_84 = t;
  t = term_a_38;
  b_85 = t;
  t = (ATerm) ATinsert(ATempty, y_84);
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, (ATerm) ATinsert(ATempty, y_84));
  t = m_14(b_85, c_85, t);
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
  t = k_14(e_85, f_85, t);
  t = term_f_37;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_s_73;
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
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  g_85 = t;
  t = term_v_73;
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_73, g_85);
  t = v_14(k_85, g_85, t);
  h_85 = t;
  t = term_c_36;
  i_85 = t;
  t = (ATerm) ATinsert(ATempty, h_85);
  j_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATempty, h_85));
  t = k_14(i_85, j_85, t);
  t = term_f_37;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = term_w_73;
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
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_l_36;
  l_85 = t;
  t = term_f_37;
  m_85 = t;
  t = term_x_73;
  t = u_14(l_85, m_85, t);
  t = term_f_37;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = term_y_73;
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
  ATerm n_85 = NULL,o_85 = NULL;
  t = term_k_59;
  n_85 = t;
  t = term_f_37;
  o_85 = t;
  t = term_a_74;
  t = u_14(n_85, o_85, t);
  t = term_f_37;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_g_74;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL;
  t = term_i_54;
  p_85 = t;
  t = term_f_37;
  q_85 = t;
  t = term_h_74;
  t = u_14(p_85, q_85, t);
  t = term_f_37;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_i_74;
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
  ATerm r_85 = NULL,s_85 = NULL,v_85 = NULL;
  r_85 = t;
  t = SSL_string_to_int(r_85);
  s_85 = t;
  t = term_w_40;
  v_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_40, s_85);
  t = u_14(v_85, s_85, t);
  t = term_f_37;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  t = term_j_74;
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
  ATerm w_85 = NULL,z_85 = NULL,a_86 = NULL;
  w_85 = t;
  t = SSL_string_to_int(w_85);
  z_85 = t;
  t = term_b_41;
  a_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, z_85);
  t = u_14(a_86, z_85, t);
  t = term_f_37;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_k_74;
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
  ATerm b_86 = NULL,c_86 = NULL;
  t = term_i_43;
  b_86 = t;
  t = term_f_37;
  c_86 = t;
  t = term_m_74;
  t = l_14(b_86, c_86, t);
  t = term_f_37;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  t = term_t_74;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_32 (ATerm t)
{
  ATerm d_86 = NULL,f_86 = NULL;
  d_86 = t;
  if(match_string(t, "old"))
    {
      t = d_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = d_86;
    }
  t = term_k_55;
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_55, d_86);
  t = u_14(f_86, d_86, t);
  t = term_f_37;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  t = term_w_74;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm h_86 = NULL;
  h_86 = t;
  if(match_string(t, "-h"))
    {
      t = h_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = h_86;
    }
  return(t);
}
static ATerm o_32 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_x_74;
  k_86 = t;
  t = term_f_37;
  l_86 = t;
  t = term_y_74;
  t = u_14(k_86, l_86, t);
  t = term_f_37;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_a_75;
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
  ATerm m_86 = NULL,p_86 = NULL;
  t = term_b_75;
  m_86 = t;
  t = term_f_37;
  p_86 = t;
  t = term_h_75;
  t = u_14(m_86, p_86, t);
  t = term_f_37;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_j_75;
  return(t);
}
static ATerm t_32 (ATerm t)
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
static ATerm v_32 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL;
  t = term_k_75;
  r_86 = t;
  t = term_f_37;
  s_86 = t;
  t = term_o_75;
  t = u_14(r_86, s_86, t);
  t = term_f_37;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  t = term_p_75;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm t_86 = NULL;
  t_86 = t;
  if(match_string(t, "--warning"))
    {
      t = t_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = t_86;
    }
  return(t);
}
static ATerm y_32 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  {
    ATerm q_75 = t;
    int r_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,t_18 = NULL;
        t = term_q_35;
        x_86 = t;
        t = term_y_53;
        y_86 = t;
        t = term_z_53;
        t = p_14(x_86, y_86, t);
        c_87 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_87 = ATgetFirst((ATermList) t);
            b_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_87);
        z_86 = t;
        t = a_87;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = b_87;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_87), a_87);
        t_18 = t;
        t = SSLsetAnnotations(t_18, z_86);
        t = term_y_53;
        v_86 = t;
        t = (ATerm) ATinsert(ATempty, u_86);
        w_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, u_86));
        t = u_14(v_86, w_86, t);
        LocalPopChoice(r_75);
      }
    else
      {
        t = q_75;
        {
          ATerm d_87 = NULL,e_87 = NULL;
          t = term_y_53;
          d_87 = t;
          t = (ATerm) ATinsert(ATempty, u_86);
          e_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, u_86));
          t = k_14(d_87, e_87, t);
        }
      }
  }
  t = term_f_37;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_s_75;
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
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  f_87 = t;
  t = term_c_55;
  g_87 = t;
  t = term_z_38;
  h_87 = t;
  t = term_u_75;
  t = u_14(g_87, h_87, t);
  t = f_87;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_c_55;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_33 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  t = term_e_55;
  j_87 = t;
  t = term_l_35;
  k_87 = t;
  t = term_v_75;
  t = u_14(j_87, k_87, t);
  t = i_87;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_e_55;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_33 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL;
  t = term_g_60;
  l_87 = t;
  t = term_f_37;
  m_87 = t;
  t = term_w_75;
  t = u_14(l_87, m_87, t);
  t = term_f_37;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  t = term_y_75;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm c_76 = t;
  int j_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_76);
    }
  else
    {
      t = c_76;
      {
        ATerm l_76 = t;
        int p_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_76);
          }
        else
          {
            t = l_76;
            {
              ATerm w_76 = t;
              int y_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(m_30, n_30, p_30, t);
                  LocalPopChoice(y_76);
                }
              else
                {
                  t = w_76;
                  {
                    ATerm c_77 = t;
                    int j_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(q_30, r_30, s_30, t);
                        LocalPopChoice(j_77);
                      }
                    else
                      {
                        t = c_77;
                        {
                          ATerm l_77 = t;
                          int n_77 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(t_30, u_30, v_30, t);
                              LocalPopChoice(n_77);
                            }
                          else
                            {
                              t = l_77;
                              {
                                ATerm o_77 = t;
                                int p_77 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(w_30, x_30, y_30, t);
                                    LocalPopChoice(p_77);
                                  }
                                else
                                  {
                                    t = o_77;
                                    {
                                      ATerm q_77 = t;
                                      int r_77 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(b_31, c_31, f_31, t);
                                          LocalPopChoice(r_77);
                                        }
                                      else
                                        {
                                          t = q_77;
                                          {
                                            ATerm s_77 = t;
                                            int t_77 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(g_31, h_31, i_31, t);
                                                LocalPopChoice(t_77);
                                              }
                                            else
                                              {
                                                t = s_77;
                                                {
                                                  ATerm u_77 = t;
                                                  int v_77 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(j_31, k_31, l_31, t);
                                                      LocalPopChoice(v_77);
                                                    }
                                                  else
                                                    {
                                                      t = u_77;
                                                      {
                                                        ATerm w_77 = t;
                                                        int x_77 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(m_31, r_31, s_31, t);
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
                                                                  t = Option_3_0(t_31, v_31, w_31, t);
                                                                  LocalPopChoice(z_77);
                                                                }
                                                              else
                                                                {
                                                                  t = y_77;
                                                                  {
                                                                    ATerm a_78 = t;
                                                                    int b_78 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(z_31, a_32, b_32, t);
                                                                        LocalPopChoice(b_78);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_78;
                                                                        {
                                                                          ATerm d_78 = t;
                                                                          int f_78 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(c_32, d_32, e_32, t);
                                                                              LocalPopChoice(f_78);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_78;
                                                                              {
                                                                                ATerm h_78 = t;
                                                                                int i_78 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(f_32, h_32, j_32, t);
                                                                                    LocalPopChoice(i_78);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_78;
                                                                                    {
                                                                                      ATerm j_78 = t;
                                                                                      int o_78 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(k_32, l_32, m_32, t);
                                                                                          LocalPopChoice(o_78);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = j_78;
                                                                                          {
                                                                                            ATerm p_78 = t;
                                                                                            int r_78 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = verbose_option_0_0(t);
                                                                                                LocalPopChoice(r_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_78;
                                                                                                {
                                                                                                  ATerm v_78 = t;
                                                                                                  int y_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(n_32, o_32, p_32, t);
                                                                                                      LocalPopChoice(y_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_78;
                                                                                                      {
                                                                                                        ATerm z_78 = t;
                                                                                                        int a_79 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(q_32, r_32, s_32, t);
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
                                                                                                                  t = Option_3_0(t_32, v_32, w_32, t);
                                                                                                                  LocalPopChoice(c_79);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_79;
                                                                                                                  {
                                                                                                                    ATerm e_79 = t;
                                                                                                                    int f_79 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(x_32, y_32, z_32, t);
                                                                                                                        LocalPopChoice(f_79);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = e_79;
                                                                                                                        {
                                                                                                                          ATerm h_79 = t;
                                                                                                                          int n_79 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(a_33, b_33, c_33, t);
                                                                                                                              LocalPopChoice(n_79);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_79;
                                                                                                                              {
                                                                                                                                ATerm o_79 = t;
                                                                                                                                int p_79 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Option_3_0(f_33, g_33, j_33, t);
                                                                                                                                    LocalPopChoice(p_79);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = o_79;
                                                                                                                                    t = Option_3_0(k_33, l_33, p_33, t);
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm n_14 (ATerm s_68, ATerm t_68, ATerm t)
{
  ATerm n_87 = NULL;
  t = SSL_hashtable_remove(t_68, s_68);
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_87);
  return(t);
}
static ATerm o_14 (ATerm x_68, ATerm t)
{
  ATerm o_87 = NULL;
  t = SSL_hashtable_destroy(x_68);
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
  p_87 = t;
  t = table_hashtable_0_0(t);
  q_87 = t;
  t = lookup_table_0_1(p_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_14(s_87, t);
  t = q_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(p_87, r_87, t);
  t = p_87;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_80), term_e_67), term_l_80), term_j_80), term_i_80), term_e_67), term_h_80), term_c_80), term_b_80), term_a_80), term_x_79), term_w_79), term_v_79), term_u_79), term_q_79);
  return(t);
}
ATerm map_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  static ATerm h_88 (ATerm t);
  static ATerm h_88 (ATerm t)
  {
    ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL;
    e_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_88;
      }
    else
      {
        ATerm j_43 = NULL,q_43 = NULL,u_43 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_88 = ATgetFirst((ATermList) t);
            g_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_88);
        j_43 = t;
        t = f_88;
        t = w_105(t);
        q_43 = t;
        t = g_88;
        t = h_88(t);
        u_43 = t;
        t = (ATerm) ATinsert(CheckATermList(u_43), q_43);
        y_18 = t;
        t = SSLsetAnnotations(y_18, j_43);
      }
    return(t);
  }
  t = h_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_88 = NULL,p_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_88 = ATgetFirst((ATermList) t);
      p_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_88 = NULL,u_88 = NULL;
        static ATerm s_33 (ATerm t);
        static ATerm s_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_88)), not_null(u_88));
          return(t);
        }
        t = p_88;
        t = j_0(t);
        if(((t_88 != NULL) && (t_88 != t)))
          _fail(t);
        else
          t_88 = t;
        t = m_88;
        t = h_0(t);
        if(((u_88 != NULL) && (u_88 != t)))
          _fail(t);
        else
          u_88 = t;
        t = p_88;
        t = reverse_acc_2_0(h_0, s_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_37;
      t = j_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_88 = NULL;
  t = term_f_37;
  t = g_0(t);
  v_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_80), v_88), term_t_80), term_e_67), term_s_80), term_e_67), term_q_80), term_o_80), term_e_67), term_n_80);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_33 (ATerm t)
{
  ATerm q_89 = NULL;
  q_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_89), term_a_81);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
  ATerm b_81 = t;
  int c_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_89 = NULL,h_89 = NULL;
      t = term_q_35;
      g_89 = t;
      t = term_d_81;
      h_89 = t;
      t = term_e_81;
      t = p_14(g_89, h_89, t);
      b_89 = t;
      LocalPopChoice(c_81);
    }
  else
    {
      t = b_81;
      {
        static ATerm t_33 (ATerm t);
        static ATerm t_33 (ATerm t)
        {
          ATerm i_89 = NULL,l_89 = NULL,m_89 = NULL,b_19 = NULL;
          m_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              l_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_89);
          i_89 = t;
          t = l_89;
          if(((b_89 != NULL) && (b_89 != t)))
            _fail(t);
          else
            b_89 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, l_89);
          b_19 = t;
          t = SSLsetAnnotations(b_19, i_89);
          return(t);
        }
        t = fetch_1_0(t_33, t);
      }
    }
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_33 (ATerm t);
        static ATerm v_33 (ATerm t)
        {
          t = not_null(b_89);
          return(t);
        }
        t = short_description_1_0(v_33, t);
        t = echo_0_0(t);
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
      }
  }
  t = term_i_81;
  t = echo_0_0(t);
  t = term_j_72;
  c_89 = t;
  t = term_k_72;
  d_89 = t;
  t = term_j_81;
  t = p_14(c_89, d_89, t);
  t = reverse_acc_2_0(_id, w_33, t);
  t = map_1_0(z_33, t);
  {
    ATerm k_81 = t;
    int l_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_89 = NULL;
        static ATerm a_34 (ATerm t);
        static ATerm a_34 (ATerm t)
        {
          t = not_null(b_89);
          return(t);
        }
        t = long_description_1_0(a_34, t);
        r_89 = t;
        t = (ATerm) ATinsert(CheckATermList(r_89), term_e_67);
        t = echo_0_0(t);
        LocalPopChoice(l_81);
      }
    else
      {
        t = k_81;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  static ATerm v_90 (ATerm t);
  static ATerm v_90 (ATerm t)
  {
    ATerm q_90 = NULL,t_90 = NULL,u_90 = NULL;
    q_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_90 = ATgetFirst((ATermList) t);
        u_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_81 = t;
      int y_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_44 = NULL,o_44 = NULL,d_19 = NULL;
          t = SSLgetAnnotations(q_90);
          k_44 = t;
          t = t_90;
          t = g_106(t);
          o_44 = t;
          t = (ATerm) ATinsert(CheckATermList(u_90), o_44);
          d_19 = t;
          t = SSLsetAnnotations(d_19, k_44);
          LocalPopChoice(y_81);
        }
      else
        {
          t = w_81;
          {
            ATerm x_44 = NULL,c_45 = NULL,e_19 = NULL;
            t = SSLgetAnnotations(q_90);
            x_44 = t;
            t = u_90;
            t = v_90(t);
            c_45 = t;
            t = (ATerm) ATinsert(CheckATermList(c_45), t_90);
            e_19 = t;
            t = SSLsetAnnotations(e_19, x_44);
          }
        }
    }
    return(t);
  }
  t = v_90(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,g_91 = NULL;
  b_91 = t;
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_91;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_82 = ATgetFirst((ATermList) t);
                ATerm e_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_91;
          }
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        t = (ATerm) ATinsert(ATempty, b_91);
      }
  }
  c_91 = t;
  t = term_k_37;
  g_91 = t;
  t = SSL_printnl(g_91, c_91);
  t = b_91;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL;
  t = term_q_35;
  p_91 = t;
  t = term_d_81;
  q_91 = t;
  t = term_e_81;
  t = p_14(p_91, q_91, t);
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
  ATerm r_91 = NULL,t_91 = NULL;
  t = term_g_82;
  r_91 = t;
  t = term_f_37;
  t_91 = t;
  t = term_h_82;
  t = u_14(r_91, t_91, t);
  return(t);
}
static ATerm m_34 (ATerm t)
{
  t = term_i_82;
  return(t);
}
static ATerm n_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_34 (ATerm t)
{
  ATerm v_91 = NULL,x_91 = NULL,c_92 = NULL,d_92 = NULL;
  t = term_g_82;
  c_92 = t;
  t = term_f_37;
  d_92 = t;
  t = term_h_82;
  t = u_14(c_92, d_92, t);
  t = term_k_75;
  v_91 = t;
  t = term_f_37;
  x_91 = t;
  t = term_o_75;
  t = u_14(v_91, x_91, t);
  t = term_j_82;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  t = term_k_82;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_82 = t;
  int m_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_34, d_34, m_34, t);
      LocalPopChoice(m_82);
    }
  else
    {
      t = l_82;
      t = Option_3_0(n_34, r_34, v_34, t);
    }
  return(t);
}
static ATerm q_14 (ATerm v_63, ATerm w_63, ATerm u_63, ATerm t)
{
  ATerm j_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL;
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_63, w_63);
  {
    ATerm n_82 = t;
    int o_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_82 = ATgetArgument(t, 0);
            ATerm q_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_63, w_63);
        t = p_14(v_63, w_63, t);
        LocalPopChoice(o_82);
      }
    else
      {
        t = n_82;
        t = (ATerm) ATempty;
      }
  }
  l_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_63, w_63, (ATerm) ATinsert(CheckATermList(l_92), u_63));
  t = lookup_table_0_1(v_63, t);
  o_92 = t;
  t = (ATerm) ATinsert(CheckATermList(l_92), u_63);
  m_92 = t;
  t = o_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(w_63, m_92, n_92, t);
  t = j_92;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
      t = term_f_37;
      t = f_0(t);
      d_93 = t;
      t = term_j_72;
      e_93 = t;
      t = term_k_72;
      f_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_72, term_k_72, d_93);
      t = q_14(e_93, f_93, d_93, t);
      _fail(t);
    }
  else
    {
      ATerm i_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_92 = ATgetFirst((ATermList) t);
          y_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_92;
      t = c_0(t);
      t = term_f_37;
      t = d_0(t);
      i_93 = t;
      t = (ATerm) ATinsert(CheckATermList(y_92), i_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL,i_19 = NULL;
  r_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_93 = ATgetFirst((ATermList) t);
      n_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_93);
  l_93 = t;
  t = m_93;
  t = p_74(t);
  p_93 = t;
  t = n_93;
  t = q_74(t);
  q_93 = t;
  t = (ATerm) ATinsert(CheckATermList(q_93), p_93);
  i_19 = t;
  t = SSLsetAnnotations(i_19, l_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_127 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,g_94 = NULL,i_94 = NULL,j_94 = NULL,k_19 = NULL;
  b_94 = t;
  {
    ATerm r_82 = t;
    int s_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_82;
        t = m_127(t);
        LocalPopChoice(s_82);
      }
    else
      {
        t = r_82;
      }
  }
  t = b_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_94 = ATgetFirst((ATermList) t);
      g_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_94);
  c_94 = t;
  t = term_d_81;
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_81, d_94);
  t = u_14(j_94, d_94, t);
  t = g_94;
  {
    static ATerm k_95 (ATerm t);
    static ATerm k_95 (ATerm t)
    {
      ATerm y_82 = t;
      int z_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_83 = t;
          int g_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_94 = NULL;
              w_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_94;
              LocalPopChoice(g_83);
            }
          else
            {
              t = c_83;
              t = m_127(t);
              t = Cons_2_0(_id, k_95, t);
            }
          LocalPopChoice(z_82);
        }
      else
        {
          t = y_82;
          {
            ATerm a_95 = NULL,b_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_95 = ATgetFirst((ATermList) t);
                b_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_95), (ATerm) ATmakeAppl(sym_Undefined_1, a_95));
          }
        }
      return(t);
    }
    t = k_95(t);
  }
  i_94 = t;
  t = (ATerm) ATinsert(CheckATermList(i_94), (ATerm) ATmakeAppl(sym_Program_1, d_94));
  k_19 = t;
  t = SSLsetAnnotations(k_19, c_94);
  return(t);
}
static ATerm x_34 (ATerm t)
{
  ATerm b_96 = NULL;
  b_96 = t;
  if(match_string(t, "--help"))
    {
      t = b_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_96;
        }
    }
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL;
  t = term_x_74;
  c_96 = t;
  t = term_f_37;
  d_96 = t;
  t = term_y_74;
  t = u_14(c_96, d_96, t);
  t = term_h_83;
  return(t);
}
static ATerm z_34 (ATerm t)
{
  t = term_n_83;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_127 (ATerm), ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,x_95 = NULL,z_95 = NULL,a_96 = NULL;
  t_95 = t;
  t = term_j_72;
  u_95 = t;
  t = term_p_83;
  t = lookup_table_0_1(u_95, t);
  a_96 = t;
  t = term_k_72;
  v_95 = t;
  t = (ATerm) ATempty;
  x_95 = t;
  t = a_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(v_95, x_95, z_95, t);
  t = t_95;
  {
    static ATerm w_34 (ATerm t);
    static ATerm w_34 (ATerm t)
    {
      ATerm q_83 = t;
      int r_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_127(t);
          LocalPopChoice(r_83);
        }
      else
        {
          t = q_83;
          {
            ATerm s_83 = t;
            int t_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_34, y_34, z_34, t);
                LocalPopChoice(t_83);
              }
            else
              {
                t = s_83;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_34, t);
  }
  {
    ATerm x_83 = t;
    int y_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_96 = NULL;
        y_96 = t;
        {
          ATerm c_84 = t;
          int d_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_45 = NULL;
              t = y_96;
              {
                ATerm e_84 = t;
                int f_84 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_45 = NULL,u_45 = NULL;
                    t = term_q_35;
                    t_45 = t;
                    t = term_x_74;
                    u_45 = t;
                    t = term_g_84;
                    t = p_14(t_45, u_45, t);
                    LocalPopChoice(f_84);
                  }
                else
                  {
                    t = e_84;
                    t = fetch_1_0(a_35, t);
                  }
              }
              t = y_96;
              t = default_system_usage_0_0(t);
              t = term_l_35;
              s_45 = t;
              t = SSL_exit(s_45);
              LocalPopChoice(d_84);
            }
          else
            {
              t = c_84;
              {
                ATerm y_45 = NULL,b_46 = NULL,d_46 = NULL;
                t = term_q_35;
                b_46 = t;
                t = term_g_82;
                d_46 = t;
                t = term_h_84;
                t = p_14(b_46, d_46, t);
                t = y_96;
                t = default_system_about_0_0(t);
                t = term_l_35;
                y_45 = t;
                t = SSL_exit(y_45);
              }
            }
        }
        LocalPopChoice(y_83);
      }
    else
      {
        t = x_83;
        {
          ATerm i_84 = t;
          int j_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL;
              static ATerm c_35 (ATerm t);
              static ATerm c_35 (ATerm t)
              {
                ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,t_19 = NULL;
                g_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_97);
                e_97 = t;
                t = f_97;
                if(((r_95 != NULL) && (r_95 != t)))
                  _fail(t);
                else
                  r_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_97);
                t_19 = t;
                t = SSLsetAnnotations(t_19, e_97);
                return(t);
              }
              t = fetch_1_0(c_35, t);
              t = term_u_35;
              c_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_95)), term_k_84);
              d_97 = t;
              t = SSL_printnl(c_97, d_97);
              t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_95)), term_k_84));
              t = default_system_usage_0_0(t);
              t = term_z_38;
              b_97 = t;
              t = SSL_exit(b_97);
              LocalPopChoice(j_84);
            }
          else
            {
              t = i_84;
            }
        }
      }
  }
  s_95 = t;
  t = term_j_72;
  t = table_destroy_0_0(t);
  t = s_95;
  return(t);
}
static ATerm s_14 (ATerm n_68, ATerm o_68, ATerm p_68, ATerm t)
{
  ATerm m_97 = NULL;
  t = SSL_hashtable_put(p_68, n_68, o_68);
  m_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_97);
  return(t);
}
static ATerm t_14 (ATerm q_68, ATerm r_68, ATerm t)
{
  t = SSL_hashtable_get(r_68, q_68);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_68, ATerm w_68, ATerm t)
{
  ATerm p_97 = NULL;
  t = SSL_hashtable_create(v_68, w_68);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_97);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,u_97 = NULL,w_97 = NULL,x_97 = NULL;
  q_97 = t;
  t = term_l_84;
  w_97 = t;
  t = term_m_84;
  x_97 = t;
  t = q_97;
  t = new_hashtable_0_2(w_97, x_97, t);
  r_97 = t;
  t = q_97;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(q_97, r_97, u_97, t);
  t = q_97;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_97 = NULL;
  t = SSL_table_hashtable();
  y_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_97);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_65, ATerm t)
{
  ATerm q_98 = NULL;
  t = table_hashtable_0_0(t);
  q_98 = t;
  {
    ATerm o_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL;
        t = q_98;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_14(h_65, o_46, t);
        LocalPopChoice(z_84);
      }
    else
      {
        t = o_84;
        {
          ATerm x_46 = NULL;
          t = h_65;
          t = table_create_0_0(t);
          t = q_98;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_14(h_65, x_46, t);
        }
      }
  }
  return(t);
}
static ATerm u_14 (ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm y_98 = NULL,g_99 = NULL;
  t = term_q_35;
  y_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, a_59, b_59);
  t = lookup_table_0_1(y_98, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(a_59, b_59, g_99, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_35, a_59, b_59);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm y_99 = NULL,f_100 = NULL;
  f_100 = t;
  t = SSL_explode_string(f_100);
  {
    ATerm a_85 = t;
    int t_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_101 (ATerm t);
        static ATerm q_101 (ATerm t)
        {
          ATerm n_101 = NULL,o_101 = NULL,p_101 = NULL;
          n_101 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_101 = ATgetFirst((ATermList) t);
              p_101 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_85 = t;
            int x_85 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_47 = NULL,j_47 = NULL,v_19 = NULL;
                t = SSLgetAnnotations(n_101);
                c_47 = t;
                t = p_101;
                t = q_101(t);
                j_47 = t;
                t = (ATerm) ATinsert(CheckATermList(j_47), o_101);
                v_19 = t;
                t = SSLsetAnnotations(v_19, c_47);
                LocalPopChoice(x_85);
              }
            else
              {
                t = u_85;
                {
                  ATerm u_47 = NULL,d_20 = NULL;
                  t = SSLgetAnnotations(n_101);
                  u_47 = t;
                  t = o_101;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, o_101);
                  d_20 = t;
                  t = SSLsetAnnotations(d_20, u_47);
                }
              }
          }
          return(t);
        }
        t = q_101(t);
        LocalPopChoice(t_85);
      }
    else
      {
        t = a_85;
        t = (ATerm) ATempty;
      }
  }
  y_99 = t;
  t = SSL_implode_string(y_99);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm v_14 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_strcat(u_38, v_38);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,z_101 = NULL,i_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,q_102 = NULL,r_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL,a_103 = NULL,b_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,v_103 = NULL,y_103 = NULL,z_103 = NULL;
  u_101 = t;
  t = term_v_66;
  y_103 = t;
  t = term_y_85;
  z_103 = t;
  t = term_e_86;
  t = u_14(y_103, z_103, t);
  t = term_r_35;
  s_103 = t;
  t = term_z_38;
  v_103 = t;
  t = term_g_86;
  t = u_14(s_103, v_103, t);
  t = term_w_40;
  q_103 = t;
  t = term_l_35;
  r_103 = t;
  t = term_i_86;
  t = u_14(q_103, r_103, t);
  t = term_b_41;
  o_103 = t;
  t = term_f_48;
  p_103 = t;
  t = term_j_86;
  t = u_14(o_103, p_103, t);
  t = term_t_59;
  m_103 = t;
  t = (ATerm) ATempty;
  n_103 = t;
  t = term_n_86;
  t = u_14(m_103, n_103, t);
  t = term_a_38;
  k_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_87), term_o_86);
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, (ATerm) ATinsert(ATinsert(ATempty, term_t_87), term_o_86));
  t = u_14(k_103, l_103, t);
  t = term_u_87;
  t = xtc_find_path_0_0(t);
  q_102 = t;
  t = term_v_87;
  j_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_102, term_v_87);
  t = v_14(q_102, j_103, t);
  i_102 = t;
  t = term_u_87;
  t = xtc_find_path_0_0(t);
  o_102 = t;
  t = term_v_87;
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_102, term_v_87);
  t = v_14(o_102, i_103, t);
  l_102 = t;
  t = term_w_87;
  t = xtc_find_path_0_0(t);
  n_102 = t;
  t = term_v_87;
  h_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_102, term_v_87);
  t = v_14(n_102, h_103, t);
  m_102 = t;
  t = term_j_36;
  f_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_102), term_t_59), l_102), term_t_59), i_102), term_t_59);
  g_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_102), term_t_59), l_102), term_t_59), i_102), term_t_59));
  t = u_14(f_103, g_103, t);
  t = term_u_87;
  t = xtc_find_path_0_0(t);
  z_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_87), z_101), term_v_73);
  e_103 = t;
  t = SSL_concat_strings(e_103);
  v_101 = t;
  t = term_w_87;
  t = xtc_find_path_0_0(t);
  x_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_87), x_101), term_v_73);
  b_103 = t;
  t = SSL_concat_strings(b_103);
  w_101 = t;
  t = term_c_36;
  y_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_88), term_b_88), w_101), term_a_88), term_z_87), v_101);
  a_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_88), term_b_88), w_101), term_a_88), term_z_87), v_101));
  t = u_14(y_102, a_103, t);
  t = term_k_55;
  w_102 = t;
  t = term_d_88;
  x_102 = t;
  t = term_i_88;
  t = u_14(w_102, x_102, t);
  t = term_y_53;
  r_102 = t;
  t = (ATerm) ATinsert(ATempty, term_j_88);
  v_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_53, (ATerm) ATinsert(ATempty, term_j_88));
  t = u_14(r_102, v_102, t);
  t = u_101;
  return(t);
}
static ATerm d_35 (ATerm t)
{
  ATerm r_105 = NULL,s_105 = NULL,t_105 = NULL;
  r_105 = t;
  t = term_q_35;
  s_105 = t;
  t = term_v_53;
  t_105 = t;
  t = term_k_88;
  t = p_14(s_105, t_105, t);
  t = debug_1_0(e_35, t);
  t = r_105;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  t = term_l_88;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm n_88 = t;
    int o_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL,k_104 = NULL,n_104 = NULL;
        t = term_q_35;
        k_104 = t;
        t = term_b_75;
        n_104 = t;
        t = term_q_88;
        t = p_14(k_104, n_104, t);
        t = term_r_88;
        t = xtc_find_0_0(t);
        d_104 = t;
        t = term_k_37;
        f_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_104, term_k_37);
        t = y_13(d_104, f_104, t);
        t = term_l_35;
        e_104 = t;
        t = SSL_exit(e_104);
        LocalPopChoice(o_88);
      }
    else
      {
        t = n_88;
      }
  }
  {
    ATerm s_88 = t;
    int w_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_104 = NULL,w_104 = NULL,x_104 = NULL;
        t = term_q_35;
        w_104 = t;
        t = term_k_75;
        x_104 = t;
        t = term_x_88;
        t = p_14(w_104, x_104, t);
        t = strc_version_0_0(t);
        t = term_l_35;
        u_104 = t;
        t = SSL_exit(u_104);
        LocalPopChoice(w_88);
      }
    else
      {
        t = s_88;
      }
  }
  {
    ATerm y_88 = t;
    int z_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_105 = NULL,f_105 = NULL,i_105 = NULL;
        d_105 = t;
        t = term_q_35;
        f_105 = t;
        t = term_v_53;
        i_105 = t;
        t = term_k_88;
        t = p_14(f_105, i_105, t);
        t = d_105;
        LocalPopChoice(z_88);
      }
    else
      {
        t = y_88;
        {
          ATerm j_105 = NULL,k_105 = NULL,q_105 = NULL;
          t = term_u_35;
          k_105 = t;
          t = (ATerm) ATinsert(ATempty, term_a_89);
          q_105 = t;
          t = SSL_printnl(k_105, q_105);
          t = term_z_38;
          j_105 = t;
          t = SSL_exit(j_105);
          t = (ATerm) ATinsert(ATempty, term_a_89);
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
  ATerm a_106 = NULL,d_106 = NULL,f_106 = NULL;
  a_106 = t;
  t = term_u_35;
  d_106 = t;
  t = (ATerm) ATinsert(CheckATermList(a_106), term_e_89);
  f_106 = t;
  t = SSL_printnl(d_106, f_106);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(CheckATermList(a_106), term_e_89));
  return(t);
}
static ATerm j_35 (ATerm t)
{
  ATerm f_89 = t;
  int j_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL;
      t = term_q_35;
      k_106 = t;
      t = term_v_53;
      l_106 = t;
      t = term_k_88;
      t = p_14(k_106, l_106, t);
      j_106 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_106);
      LocalPopChoice(j_89);
    }
  else
    {
      t = f_89;
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
  ATerm m_106 = NULL,p_106 = NULL,r_106 = NULL;
  t = run_time_0_0(t);
  m_106 = t;
  t = term_u_35;
  p_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_89), m_106), term_k_89);
  r_106 = t;
  t = SSL_printnl(p_106, r_106);
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_89), m_106), term_k_89));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm o_89 = t;
  int p_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_105 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(g_35, h_35, t);
      t = if_verbose2_1_0(k_35, t);
      t = term_l_35;
      z_105 = t;
      t = SSL_exit(z_105);
      LocalPopChoice(p_89);
    }
  else
    {
      t = o_89;
      {
        ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL,v_106 = NULL;
        t = run_time_0_0(t);
        s_106 = t;
        t = term_u_35;
        u_106 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_89), s_106), term_s_89);
        v_106 = t;
        t = SSL_printnl(u_106, v_106);
        t = term_z_38;
        t_106 = t;
        t = SSL_exit(t_106);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
