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
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_RDef_3;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_SDef_3;
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
}
ATerm term_q_88;
ATerm term_l_88;
ATerm term_g_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_z_87;
ATerm term_w_87;
ATerm term_m_87;
ATerm term_g_87;
ATerm term_c_87;
ATerm term_w_86;
ATerm term_v_86;
ATerm term_s_86;
ATerm term_r_86;
ATerm term_y_85;
ATerm term_x_85;
ATerm term_m_85;
ATerm term_h_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_v_84;
ATerm term_q_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_r_83;
ATerm term_m_83;
ATerm term_k_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_k_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_d_82;
ATerm term_i_81;
ATerm term_f_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_g_80;
ATerm term_b_80;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_m_79;
ATerm term_j_79;
ATerm term_h_79;
ATerm term_e_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_w_78;
ATerm term_u_78;
ATerm term_p_78;
ATerm term_n_78;
ATerm term_k_78;
ATerm term_z_74;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_t_74;
ATerm term_q_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_e_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_w_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_c_73;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_r_71;
ATerm term_o_71;
ATerm term_m_71;
ATerm term_h_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_w_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_c_70;
ATerm term_a_70;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_o_69;
ATerm term_l_69;
ATerm term_h_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_j_66;
ATerm term_i_66;
ATerm term_h_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_c_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_v_63;
ATerm term_s_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_t_62;
ATerm term_w_61;
ATerm term_j_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_l_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_z_59;
ATerm term_x_59;
ATerm term_s_59;
ATerm term_q_59;
ATerm term_p_59;
ATerm term_j_59;
ATerm term_r_58;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_f_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_w_56;
ATerm term_v_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_u_54;
ATerm term_m_54;
ATerm term_z_53;
ATerm term_y_53;
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
ATerm term_f_53;
ATerm term_c_53;
ATerm term_a_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_c_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_t_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_o_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_r_49;
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
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_n_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_q_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_y_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_c_43;
ATerm term_v_42;
ATerm term_t_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_f_42;
ATerm term_z_41;
ATerm term_r_41;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
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
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_b_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_k_37;
ATerm term_w_36;
ATerm term_s_36;
ATerm term_o_36;
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
ATerm term_z_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_k_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_q_35);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_b_36);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_h_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_k_36);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_y_37);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_q_37);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_x_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_z_39);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_l_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_q_40);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_h_43);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in ", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol(", concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_47, term_r_38, term_p_47);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_47, term_s_35, term_s_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_47, term_f_39, term_w_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_47, term_m_42, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_48, term_c_48, term_f_48);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_48, term_o_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_48, term_y_48, term_z_48);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_49, term_e_49, term_f_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_i_49, term_j_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_49, term_m_49, term_n_49);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_49, term_f_42, term_r_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_x_49, term_k_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_50, term_o_50, term_q_50);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_50, term_v_50, term_w_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_50, term_a_51, term_c_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_51, term_p_51, term_q_51);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_51, term_t_51, term_u_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_e_52, term_g_52);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_52, term_j_52, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_o_52, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_u_52, term_v_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_c_53, term_f_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_53, term_f_45, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_53, term_m_53, term_n_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_53, term_q_53, term_r_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_53, term_u_53, term_y_53);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_x_54);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_d_55);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_s_55);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_t_57);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym__2, term_k_57, term_f_57);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_p_59);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_x_59);
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_l_60);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_x_65);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_n_70);
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(sym__2, term_a_70, term_t_70);
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(sym__2, term_a_70, term_c_70);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_k_35);
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_35);
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_d_72, term_s_36);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_s_36);
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_s_36);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(sym__2, term_p_59, term_s_36);
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym__2, term_d_55, term_s_36);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(sym__2, term_h_43, term_s_36);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(sym__2, term_u_73, term_s_36);
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym__2, term_z_73, term_s_36);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(sym__2, term_e_74, term_s_36);
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(sym__2, term_s_55, term_r_38);
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(sym__2, term_v_55, term_k_35);
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(sym__2, term_l_60, term_s_36);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_b_80);
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(sym__2, term_r_71, term_w_71);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(sym__2, term_b_81, term_s_36);
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(sym__3, term_r_71, term_w_71, (ATerm) ATempty);
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_u_73);
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_b_81);
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym__2, term_x_65, term_j_84);
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_r_38);
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_k_35);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(sym__2, term_q_40, term_m_42);
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym__2, term_x_59, (ATerm) ATempty);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_u_54);
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_z_73);
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_e_74);
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm a_107 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm b_13 (ATerm o_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm c_13 (ATerm m_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm d_13 (ATerm j_44, ATerm i_44, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm g_108 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm s_11 (ATerm t);
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
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
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
static ATerm f_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm save_as_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm c_108 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t);
static ATerm h_13 (ATerm a_49, ATerm b_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm b_117 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t);
ATerm foldr_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
static ATerm y_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm f_108 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm d_92 (ATerm), ATerm t);
static ATerm y_20 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm e_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm e_13 (ATerm g_21, ATerm h_21, ATerm t);
static ATerm f_13 (ATerm b_23, ATerm c_23, ATerm t);
static ATerm g_13 (ATerm i_91 (ATerm), ATerm k_194, ATerm l_23, ATerm t);
static ATerm j_13 (ATerm s_104 (ATerm), ATerm u_42, ATerm s_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm l_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm x_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm a_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm y_82 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm b_107 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm h_102 (ATerm), ATerm t);
static ATerm g_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm k_13 (ATerm c_21, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm i_14 (ATerm r_54, ATerm s_54, ATerm t);
static ATerm l_13 (ATerm d_53, ATerm e_53, ATerm t);
ATerm end_scope_1_0 (ATerm p_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_104 (ATerm), ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_116 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm z_106 (ATerm), ATerm t);
static ATerm n_13 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm p_13 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm q_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_91 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm r_13 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm s_13 (ATerm m_56, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_107 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm e_107 (ATerm), ATerm t);
static ATerm v_13 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm n_29, ATerm m_29, ATerm t);
static ATerm w_13 (ATerm c_96 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm l_27 (ATerm t);
static ATerm x_13 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t);
static ATerm y_13 (ATerm v_111 (ATerm), ATerm f_54, ATerm e_54, ATerm t);
static ATerm c_14 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm d_73 (ATerm w_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_13 (ATerm h_23, ATerm t);
static ATerm a_14 (ATerm m_38, ATerm n_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_75 (ATerm v_73, ATerm t);
static ATerm g_75 (ATerm a_74, ATerm d_74, ATerm f_74, ATerm t);
static ATerm h_75 (ATerm o_74, ATerm p_74, ATerm r_74, ATerm t);
static ATerm b_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm a_80 (ATerm d_79, ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm d_14 (ATerm j_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
static ATerm v_28 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_14 (ATerm g_48, ATerm h_48, ATerm t);
ATerm at_end_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_83 (ATerm d_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_14 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm e_30 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm i_30 (ATerm t);
static ATerm j_30 (ATerm t);
static ATerm k_30 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm v_30 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm t_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
static ATerm g_14 (ATerm k_56, ATerm l_56, ATerm t);
static ATerm h_14 (ATerm p_56, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm n_33 (ATerm t);
static ATerm o_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm x_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm c_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm j_14 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_111 (ATerm), ATerm t);
static ATerm i_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm q_34 (ATerm t);
static ATerm s_34 (ATerm t);
ATerm parse_options_1_0 (ATerm r_111 (ATerm), ATerm t);
static ATerm l_14 (ATerm f_56, ATerm g_56, ATerm h_56, ATerm t);
static ATerm m_14 (ATerm i_56, ATerm j_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_56, ATerm o_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm k_54, ATerm t);
static ATerm n_14 (ATerm d_48, ATerm e_48, ATerm t);
static ATerm o_14 (ATerm d_37, ATerm e_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm c_35 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = i_98(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          j_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_0;
      t = foldr_2_0(i_98, j_98, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = j_98(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(c_1, e_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_0 = NULL,a_0 = NULL,h_0 = NULL;
  t = times_0_0(t);
  h_0 = t;
  t = SSL_explode_term(h_0);
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(m_0, q_0, t);
  y_0 = t;
  t = SSL_TicksToSeconds(y_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm m_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = term_p_35;
        l_1 = t;
        t = term_q_35;
        m_1 = t;
        t = term_r_35;
        t = i_14(l_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_s_35);
        t = geq_0_0(t);
        t = f_1;
        t = a_107(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = m_35;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = term_t_35;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_u_35);
  a_2 = t;
  t = SSL_printnl(x_1, a_2);
  t = w_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_t_35;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm b_13 (ATerm o_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_p_35;
        b_2 = t;
        t = term_z_35;
        c_2 = t;
        t = term_a_36;
        t = i_14(b_2, c_2, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = get_outfile_1_0(g_1, t);
      }
  }
  o_1 = t;
  t = term_p_35;
  s_1 = t;
  t = term_b_36;
  v_1 = t;
  t = term_c_36;
  t = i_14(s_1, v_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_z_35), o_21));
  t = if_verbose3_1_0(h_1, t);
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm k_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
      t = h_13(q_1, r_1, t);
      t = term_e_36;
      k_2 = t;
      t = SSL_exit(k_2);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_t_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_f_36);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_g_36;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_t_35;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm c_13 (ATerm m_21, ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(n_1, t);
  m_2 = t;
  t = term_p_35;
  r_2 = t;
  t = term_h_36;
  s_2 = t;
  t = term_j_36;
  t = i_14(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_2), term_z_35), m_21), term_k_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, n_2);
  t = if_verbose3_1_0(u_1, t);
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
  {
    static ATerm y_1 (ATerm t)
    {
      ATerm f_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
      t = h_13(p_2, q_2, t);
      t = term_e_36;
      f_3 = t;
      t = SSL_exit(f_3);
      return(t);
    }
    t = fork_and_wait_1_0(y_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(o_3, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL;
  k_3 = t;
  t = term_t_35;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_l_36);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(k_3), term_l_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_p_35;
      i_3 = t;
      t = term_k_36;
      j_3 = t;
      t = term_o_36;
      t = i_14(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      t = profile_p__2_0(z_1, g_2, t);
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
static ATerm d_13 (ATerm j_44, ATerm i_44, ATerm t)
{
  ATerm p_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(j_44, i_44);
      LocalPopChoice(r_36);
    }
  else
    {
      t = p_36;
      t = get_errno_0_0(t);
      t = term_s_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, j_44, i_44);
      t = r_13(j_44, i_44, t);
      t = SSL_remove(j_44);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,j_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = g_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_w_36;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, term_w_36);
        t = r_13(j_4, t_1, t);
        t = SSL_remove(j_4);
        t = term_w_36;
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        {
          ATerm y_36 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = g_4;
              t = x_0(t);
              i_2 = t;
              {
                ATerm j_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_2 = NULL;
                    j_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_2;
                      }
                    else
                      {
                        t = j_2;
                        if((j_4 != t))
                          {
                            _fail(t);
                          }
                        t = j_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_37;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_4, i_2);
              t = d_13(j_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(g_37);
            }
          else
            {
              t = y_36;
              t = g_4;
              t = x_0(t);
              if((j_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL;
  r_4 = t;
  t = term_k_37;
  n_4 = t;
  t = term_m_37;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_n_37);
  o_4 = t;
  t = r_4;
  t = comp_0_2(n_4, o_4, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_q_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_r_37;
  s_4 = t;
  t = w_4;
  {
    ATerm v_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,c_5 = NULL;
        t = term_p_35;
        a_5 = t;
        t = term_y_37;
        c_5 = t;
        t = term_a_38;
        t = i_14(a_5, c_5, t);
        t = w_4;
        LocalPopChoice(x_37);
        t = (ATerm) ATinsert(ATempty, term_y_37);
      }
    else
      {
        t = v_37;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_p_35;
  x_4 = t;
  t = term_q_37;
  y_4 = t;
  t = term_b_38;
  t = i_14(x_4, y_4, t);
  t = foldr_3_0(l_2, conc_0_0, t_2, t);
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_4), v_4);
  t = concat_0_0(t);
  t_4 = t;
  t = w_4;
  t = comp_0_2(s_4, t_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  u_5 = t;
  t = term_t_35;
  v_5 = t;
  t = (ATerm) ATinsert(ATempty, term_c_38);
  w_5 = t;
  t = SSL_printnl(v_5, w_5);
  t = u_5;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL;
  e_6 = t;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_6 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(e_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_6);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_6;
          }
        LocalPopChoice(g_38);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = f_38;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  d_6 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_7 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(d_6);
              h_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_7);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(i_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = h_38;
        t = xtc_transform_term_2_0(j_6, p_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_8 = ATgetArgument(t, 0);
            {
              ATerm b_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(b_6);
              b_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_8);
              b_1 = t;
              t = SSLsetAnnotations(b_1, b_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_6;
          }
        LocalPopChoice(k_38);
        t = xtc_transform_file_2_0(r_6, pass_verbose_0_0, t);
      }
    else
      {
        t = j_38;
        t = xtc_transform_term_2_0(x_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(a_7, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = term_t_35;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_l_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(y_5), term_l_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_6 = NULL;
  t = pass_verbose_0_0(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(k_6), term_p_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_p_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_q_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm o_6 = NULL,q_6 = NULL;
  q_6 = t;
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_6 = ATgetArgument(t, 0);
            {
              ATerm l_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(q_6);
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, l_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_6;
          }
        LocalPopChoice(t_38);
        t = xtc_transform_file_2_0(z_3, a_4, t);
      }
    else
      {
        t = s_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(f_4, t);
  o_6 = t;
  {
    ATerm u_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(o_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_6;
          }
        LocalPopChoice(w_38);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = u_38;
        t = xtc_transform_term_2_0(p_4, z_4, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_p_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_p_38);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_p_38);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm o_7 = NULL;
  t = pass_verbose_0_0(t);
  o_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), term_p_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_f_39;
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
  t = term_g_39;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_7 = NULL;
  t = pass_verbose_0_0(t);
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(u_7), term_p_38);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_p_38);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = get_outfile_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_j_39;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(c_3, d_3, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  t = term_t_35;
  k_9 = t;
  t = (ATerm) ATinsert(ATempty, term_k_39);
  l_9 = t;
  t = SSL_printnl(k_9, l_9);
  t = j_9;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  t = term_t_35;
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_l_39);
  o_9 = t;
  t = SSL_printnl(n_9, o_9);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(m_9), term_l_39));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_10 = NULL;
  t = pass_verbose_0_0(t);
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_10), term_p_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_p_39);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
      f_9 = t;
      t = term_p_35;
      g_9 = t;
      t = term_y_37;
      h_9 = t;
      t = term_a_38;
      t = i_14(g_9, h_9, t);
      t = f_9;
      LocalPopChoice(s_39);
      {
        ATerm i_9 = NULL;
        i_9 = t;
        t = if_verbose2_1_0(f_7, t);
        {
          static ATerm i_7 (ATerm t)
          {
            ATerm q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_t_39;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_u_39);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            q_9 = t;
            {
              ATerm v_39 = t;
              int w_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,d_10 = NULL,f_10 = NULL;
                  t = term_p_35;
                  d_10 = t;
                  t = term_x_39;
                  f_10 = t;
                  t = term_y_39;
                  t = i_14(d_10, f_10, t);
                  w_9 = t;
                  t = term_p_35;
                  z_9 = t;
                  t = term_z_39;
                  b_10 = t;
                  t = term_a_40;
                  t = i_14(z_9, b_10, t);
                  y_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_9, y_9);
                  {
                    ATerm b_40 = t;
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
                        t = b_40;
                      }
                  }
                  LocalPopChoice(w_39);
                }
              else
                {
                  t = v_39;
                  {
                    ATerm h_10 = NULL,i_10 = NULL;
                    t = term_p_35;
                    h_10 = t;
                    t = term_x_39;
                    i_10 = t;
                    t = term_y_39;
                    t = i_14(h_10, i_10, t);
                    t = debug_1_0(l_7, t);
                    _fail(t);
                  }
                }
            }
            t = q_9;
            {
              static ATerm n_7 (ATerm t)
              {
                t = get_outfile_1_0(p_7, t);
                if(((c_9 != NULL) && (c_9 != t)))
                  _fail(t);
                else
                  c_9 = t;
                return(t);
              }
              t = copy_to_1_0(n_7, t);
            }
            {
              ATerm c_40 = t;
              int d_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_10 = NULL,r_10 = NULL;
                  r_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      q_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(r_10);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, q_10);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, l_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = r_10;
                    }
                  LocalPopChoice(d_40);
                  t = xtc_transform_file_2_0(q_7, r_7, t);
                }
              else
                {
                  t = c_40;
                  t = xtc_transform_term_2_0(t_7, w_7, t);
                }
            }
            {
              static ATerm y_7 (ATerm t)
              {
                t = get_outfile_1_0(z_7, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = copy_to_1_0(y_7, t);
            }
            r_9 = t;
            t = term_t_35;
            t_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_f_40), not_null(c_9)), term_e_40));
            u_9 = t;
            t = SSL_printnl(t_9, u_9);
            t = r_9;
            return(t);
          }
          t = profile_p__2_0(h_7, i_7, t);
        }
        t = i_9;
      }
    }
  else
    {
      t = r_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm g_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL;
        t = term_p_35;
        g_11 = t;
        t = term_l_40;
        i_11 = t;
        t = term_n_40;
        t = i_14(g_11, i_11, t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_r_38);
        t = geq_0_0(t);
        t = d_11;
        t = b_108(t);
        LocalPopChoice(i_40);
      }
    else
      {
        t = g_40;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL;
        t = m_11;
        t = f_117(t);
        p_11 = t;
        t = term_p_35;
        r_11 = t;
        t = term_q_40;
        t_11 = t;
        t = term_r_40;
        t = i_14(r_11, t_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
        t = geq_0_0(t);
        t = m_11;
        t = g_117(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = m_11;
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_p_38);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_p_38);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm s_8 = NULL;
  t = pass_verbose_0_0(t);
  s_8 = t;
  t = (ATerm) ATinsert(CheckATermList(s_8), term_p_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_p_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_14;
        {
          ATerm v_40 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  y_6 = ATgetArgument(t, 0);
                  {
                    ATerm x_7 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(t_14);
                    x_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, x_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = t_14;
                }
              LocalPopChoice(j_41);
              t = xtc_transform_file_2_0(a_8, c_8, t);
            }
          else
            {
              t = v_40;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = t_14;
        {
          ATerm l_41 = t;
          int q_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  q_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(t_14);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, z_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = t_14;
                }
              LocalPopChoice(q_41);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = l_41;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  i_15 = t;
  t = term_r_41;
  g_15 = t;
  t = i_15;
  {
    ATerm t_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL,k_15 = NULL;
        t = term_p_35;
        j_15 = t;
        t = term_y_37;
        k_15 = t;
        t = term_a_38;
        t = i_14(j_15, k_15, t);
        t = i_15;
        LocalPopChoice(w_41);
        t = (ATerm) ATinsert(ATempty, term_z_41);
      }
    else
      {
        t = t_41;
        t = (ATerm) ATempty;
      }
  }
  h_15 = t;
  t = i_15;
  t = comp_0_2(g_15, h_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm b_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
        t = term_p_35;
        r_15 = t;
        t = term_l_40;
        s_15 = t;
        t = term_n_40;
        t = i_14(r_15, s_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_f_42);
        t = geq_0_0(t);
        t = o_15;
        t = e_108(t);
        LocalPopChoice(e_42);
      }
    else
      {
        t = b_42;
        t = o_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  {
    ATerm g_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL,d_16 = NULL,g_16 = NULL;
        t = term_p_35;
        d_16 = t;
        t = term_l_40;
        g_16 = t;
        t = term_n_40;
        t = i_14(d_16, g_16, t);
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_16, term_m_42);
        t = geq_0_0(t);
        t = a_16;
        t = g_108(t);
        LocalPopChoice(i_42);
      }
    else
      {
        t = g_42;
        t = a_16;
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,o_18 = NULL;
  k_18 = t;
  t = term_t_35;
  l_18 = t;
  t = (ATerm) ATinsert(ATempty, term_n_42);
  o_18 = t;
  t = SSL_printnl(l_18, o_18);
  t = k_18;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = if_verbose1_1_0(m_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm u_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(t_8, w_8, t);
  t = olevel_2_0(v_9, c_10, t);
  t = olevel_2_0(a_11, c_11, t);
  u_18 = t;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_22 = ATgetArgument(t, 0);
            {
              ATerm t_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(u_18);
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_22);
              x_5 = t;
              t = SSLsetAnnotations(x_5, t_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_18;
          }
        LocalPopChoice(r_42);
        t = xtc_transform_file_2_0(k_12, q_12, t);
      }
    else
      {
        t = q_42;
        t = xtc_transform_term_2_0(s_12, u_12, t);
      }
  }
  t = olevel_2_0(v_12, w_12, t);
  t = olevel_2_0(w_14, y_14, t);
  t = olevel_2_0(x_15, y_15, t);
  t = olevel_2_0(o_16, p_16, t);
  t = olevel_2_0(q_17, r_17, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,t_18 = NULL;
  p_18 = t;
  t = term_t_35;
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(p_18), term_t_42);
  t_18 = t;
  t = SSL_printnl(q_18, t_18);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(p_18), term_t_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  t = term_p_35;
  w_18 = t;
  t = term_q_40;
  x_18 = t;
  t = term_r_40;
  t = i_14(w_18, x_18, t);
  t = debug_1_0(r_8, t);
  t = v_18;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_19 = ATgetArgument(t, 0);
            {
              ATerm p_9 = NULL,m_4 = NULL;
              t = SSLgetAnnotations(y_18);
              p_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_19);
              m_4 = t;
              t = SSLsetAnnotations(m_4, p_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_18;
          }
        LocalPopChoice(a_43);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = z_42;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(e_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm f_19 = NULL;
  t = pass_verbose_0_0(t);
  f_19 = t;
  t = (ATerm) ATinsert(CheckATermList(f_19), term_p_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_p_38);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = save_as_1_0(s_9, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_c_43;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_19;
        {
          ATerm g_43 = t;
          if((PushChoice() == 0))
            {
              ATerm t_10 = NULL,u_10 = NULL;
              t = term_p_35;
              t_10 = t;
              t = term_h_43;
              u_10 = t;
              t = term_i_43;
              t = i_14(t_10, u_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_43;
            }
        }
        t = z_19;
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  z_10 = ATgetArgument(t, 0);
                  {
                    ATerm v_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(z_19);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, z_10);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, v_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_19;
                }
              LocalPopChoice(k_43);
              t = xtc_transform_file_2_0(e_10, j_10, t);
            }
          else
            {
              t = j_43;
              t = xtc_transform_term_2_0(l_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = z_19;
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_p_38);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_p_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_m_43;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL,f_20 = NULL;
  f_20 = t;
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_20 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(f_20);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
              r_5 = t;
              t = SSLsetAnnotations(r_5, z_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_20;
          }
        LocalPopChoice(p_43);
        t = xtc_transform_file_2_0(e_11, j_11, t);
      }
    else
      {
        t = o_43;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(s_11, t);
  e_20 = t;
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(e_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_20;
          }
        LocalPopChoice(r_43);
        t = xtc_transform_file_2_0(w_11, x_11, t);
      }
    else
      {
        t = q_43;
        t = xtc_transform_term_2_0(y_11, a_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(b_12, t);
  b_20 = t;
  {
    ATerm s_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_21 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(b_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_21);
              t_5 = t;
              t = SSLsetAnnotations(t_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(u_43);
        t = xtc_transform_file_2_0(e_12, f_12, t);
      }
    else
      {
        t = s_43;
        t = xtc_transform_term_2_0(g_12, i_12, t);
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_p_38);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_p_38);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = save_as_1_0(u_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_w_43;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_p_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_p_38);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = save_as_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_p_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm z_21 = NULL;
  t = pass_verbose_0_0(t);
  z_21 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), term_p_38);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_p_38);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_b_44;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_p_38);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  l_22 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_22 = ATgetArgument(t, 0);
            {
              ATerm i_13 = NULL,c_6 = NULL;
              t = SSLgetAnnotations(l_22);
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
              c_6 = t;
              t = SSLsetAnnotations(c_6, i_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_22;
          }
        LocalPopChoice(d_44);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = c_44;
        t = xtc_transform_term_2_0(z_12, a_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  k_22 = t;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_23 = ATgetArgument(t, 0);
            {
              ATerm u_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(k_22);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              f_6 = t;
              t = SSLsetAnnotations(f_6, u_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_22;
          }
        LocalPopChoice(f_44);
        t = xtc_transform_file_2_0(m_13, o_13, t);
      }
    else
      {
        t = e_44;
        t = xtc_transform_term_2_0(t_13, u_13, t);
      }
  }
  j_22 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_23 = ATgetArgument(t, 0);
            {
              ATerm z_14 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(j_22);
              z_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, z_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(h_44);
        t = xtc_transform_file_2_0(k_14, p_14, t);
      }
    else
      {
        t = g_44;
        t = xtc_transform_term_2_0(q_14, r_14, t);
      }
  }
  t = if_keep4_1_0(s_14, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm v_22 = NULL;
  t = pass_verbose_0_0(t);
  v_22 = t;
  t = (ATerm) ATinsert(CheckATermList(v_22), term_p_38);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_p_38);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm i_23 = NULL;
  t = pass_verbose_0_0(t);
  i_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), term_p_38);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm j_23 = NULL;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), term_p_38);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_p_38);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm y_23 = NULL;
  t = pass_verbose_0_0(t);
  y_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_23), term_p_38);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = save_as_1_0(v_14, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_w_44;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm a_24 = NULL,c_24 = NULL;
  c_24 = t;
  {
    ATerm x_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm l_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(c_24);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              h_6 = t;
              t = SSLsetAnnotations(h_6, l_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_24;
          }
        LocalPopChoice(y_44);
        t = xtc_transform_file_2_0(a_15, d_15, t);
      }
    else
      {
        t = x_44;
        t = xtc_transform_term_2_0(e_15, f_15, t);
      }
  }
  a_24 = t;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_24 = ATgetArgument(t, 0);
            {
              ATerm u_15 = NULL,m_6 = NULL;
              t = SSLgetAnnotations(a_24);
              u_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
              m_6 = t;
              t = SSLsetAnnotations(m_6, u_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_24;
          }
        LocalPopChoice(a_45);
        t = xtc_transform_file_2_0(m_15, n_15, t);
      }
    else
      {
        t = z_44;
        t = xtc_transform_term_2_0(p_15, t_15, t);
      }
  }
  t = if_keep2_1_0(v_15, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm m_24 = NULL;
  t = pass_verbose_0_0(t);
  m_24 = t;
  t = (ATerm) ATinsert(CheckATermList(m_24), term_p_38);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_p_38);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_p_38);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_p_38);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_25 = ATgetArgument(t, 0);
            {
              ATerm z_15 = NULL,n_6 = NULL;
              t = SSLgetAnnotations(a_25);
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_25);
              n_6 = t;
              t = SSLsetAnnotations(n_6, z_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_25;
          }
        LocalPopChoice(h_45);
        t = xtc_transform_file_2_0(b_16, e_16, t);
      }
    else
      {
        t = g_45;
        t = xtc_transform_term_2_0(f_16, h_16, t);
      }
  }
  t = if_keep5_1_0(i_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(l_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_p_38);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_y_43;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm l_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), term_p_38);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = save_as_1_0(m_16, t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  o_25 = t;
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(o_25);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
              s_6 = t;
              t = SSLsetAnnotations(s_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_25;
          }
        LocalPopChoice(m_45);
        t = xtc_transform_file_2_0(q_16, s_16, t);
      }
    else
      {
        t = l_45;
        t = xtc_transform_term_2_0(t_16, u_16, t);
      }
  }
  t = if_keep3_1_0(w_16, t);
  n_25 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(n_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
              t_6 = t;
              t = SSLsetAnnotations(t_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(o_45);
        t = xtc_transform_file_2_0(y_16, a_17, t);
      }
    else
      {
        t = n_45;
        t = xtc_transform_term_2_0(b_17, c_17, t);
      }
  }
  t = if_keep3_1_0(d_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(g_17, t);
  m_25 = t;
  {
    ATerm q_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(m_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
              u_6 = t;
              t = SSLsetAnnotations(u_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_25;
          }
        LocalPopChoice(s_45);
        t = xtc_transform_file_2_0(i_17, j_17, t);
      }
    else
      {
        t = q_45;
        t = xtc_transform_term_2_0(k_17, l_17, t);
      }
  }
  t = if_keep3_1_0(o_17, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm z_25 = NULL;
  t = pass_verbose_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), term_p_38);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm a_26 = NULL;
  t = pass_verbose_0_0(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), term_p_38);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_u_45;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_p_38);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm k_26 = NULL;
  t = pass_verbose_0_0(t);
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), term_p_38);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = save_as_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_p_38);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm r_26 = NULL;
  t = pass_verbose_0_0(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), term_p_38);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = save_as_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm a_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_26 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,v_6 = NULL;
              t = SSLgetAnnotations(t_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_26);
              v_6 = t;
              t = SSLsetAnnotations(v_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(d_46);
        t = xtc_transform_file_2_0(s_17, t_17, t);
      }
    else
      {
        t = a_46;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  t = if_keep1_1_0(w_17, t);
  s_26 = t;
  {
    ATerm h_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(s_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_27);
              w_6 = t;
              t = SSLsetAnnotations(w_6, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_26;
          }
        LocalPopChoice(k_46);
        t = xtc_transform_file_2_0(a_18, b_18, t);
      }
    else
      {
        t = h_46;
        t = xtc_transform_term_2_0(c_18, d_18, t);
      }
  }
  t = if_keep1_1_0(f_18, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm b_27 = NULL;
  t = pass_verbose_0_0(t);
  b_27 = t;
  t = (ATerm) ATinsert(CheckATermList(b_27), term_p_38);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm g_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), term_p_38);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = save_as_1_0(z_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_l_46;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm p_27 = NULL;
  t = pass_verbose_0_0(t);
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), term_p_38);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_m_46;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_p_38);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = save_as_1_0(i_18, t);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_q_46;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  t = profile_p__2_0(k_8, l_8, t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm w_29 = NULL;
  t = pass_verbose_0_0(t);
  w_29 = t;
  t = (ATerm) ATinsert(CheckATermList(w_29), term_p_39);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm x_29 = NULL;
  t = pass_verbose_0_0(t);
  x_29 = t;
  t = (ATerm) ATinsert(CheckATermList(x_29), term_p_39);
  return(t);
}
ATerm save_as_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,z_28 = NULL,a_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  a_29 = t;
  {
    static ATerm j_18 (ATerm t)
    {
      t = get_outfile_1_0(z_82, t);
      if(((x_28 != NULL) && (x_28 != t)))
        _fail(t);
      else
        x_28 = t;
      return(t);
    }
    t = copy_to_1_0(j_18, t);
  }
  {
    ATerm r_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL,v_29 = NULL;
        v_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            s_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,n_8 = NULL;
              t = SSLgetAnnotations(v_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_29);
              n_8 = t;
              t = SSLsetAnnotations(n_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_29;
          }
        LocalPopChoice(t_46);
        t = xtc_transform_file_2_0(m_18, r_18, t);
      }
    else
      {
        t = r_46;
        t = xtc_transform_term_2_0(s_18, a_19, t);
      }
  }
  {
    static ATerm b_19 (ATerm t)
    {
      ATerm a_30 = NULL;
      t = term_u_46;
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), term_u_46);
      t = o_14(not_null(x_28), a_30, t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      return(t);
    }
    t = copy_to_1_0(b_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_28)), term_w_46), not_null(x_28)), term_v_46);
  f_29 = t;
  t = SSL_concat_strings(f_29);
  c_29 = t;
  t = term_t_35;
  d_29 = t;
  t = (ATerm) ATinsert(ATempty, c_29);
  e_29 = t;
  t = SSL_printnl(d_29, e_29);
  t = a_29;
  return(t);
}
ATerm if_keep2_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
        t = term_p_35;
        g_30 = t;
        t = term_l_40;
        h_30 = t;
        t = term_n_40;
        t = i_14(g_30, h_30, t);
        f_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_30, term_s_35);
        t = geq_0_0(t);
        t = d_30;
        t = c_108(t);
        LocalPopChoice(y_46);
      }
    else
      {
        t = x_46;
        t = d_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  t = term_q_35;
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL;
        t = term_p_35;
        r_30 = t;
        t = term_q_35;
        s_30 = t;
        t = term_r_35;
        t = i_14(r_30, s_30, t);
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
        t = term_r_38;
      }
  }
  o_30 = t;
  t = term_r_38;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_30, term_r_38);
  t = p_13(o_30, q_30, t);
  p_30 = t;
  t = SSL_int_to_string(p_30);
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_30), term_q_35);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm x_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_47 = ATgetArgument(t, 0);
      if(match_cons(c_47, sym_Stream_1))
        {
          x_30 = ATgetArgument(c_47, 0);
        }
      else
        _fail(t);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(x_30, z_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  u_30 = t;
  t = xtc_new_file_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_30, u_30);
  t = g_13(e_19, t_30, u_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_30);
  t = xtc_transform_file_2_0(a_116, b_116, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_13 (ATerm a_49, ATerm b_49, ATerm t)
{
  t = SSL_execvp(a_49, b_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_32 = NULL,f_32 = NULL,h_32 = NULL,i_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_32 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(f_32);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_47), m_17), term_d_47);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_32 = ATgetArgument(t, 0);
          h_32 = ATgetArgument(t, 1);
          i_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_32);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_32), term_g_47), x_17), term_f_47), f_32);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm j_47 = ATgetArgument(t, 0);
              if((l_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm l_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_53), term_s_53), term_o_53), term_k_53), term_h_53), term_w_52), term_r_52), term_l_52), term_h_52), term_a_52), term_r_51), term_k_51), term_g_51), term_x_50), term_r_50), term_l_50), term_u_49), term_o_49), term_k_49), term_g_49), term_c_49), term_w_48), term_r_48), term_m_48), term_a_48), term_x_47), term_t_47), term_q_47);
        t = fetch_elem_1_0(h_19, t);
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_32 = NULL,e_33 = NULL;
  r_32 = t;
  {
    ATerm a_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_54 = ATgetArgument(t, 0);
            e_33 = ATgetArgument(t, 1);
            {
              ATerm h_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_54);
        {
          ATerm i_54 = t;
          int j_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL;
              t = e_33;
              {
                ATerm l_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_54;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_18 = t;
              t = term_t_35;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_m_54);
              h_18 = t;
              t = SSL_printnl(g_18, h_18);
              t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_m_54));
              LocalPopChoice(j_54);
            }
          else
            {
              t = i_54;
              t = r_32;
            }
        }
      }
    else
      {
        t = a_54;
        t = r_32;
      }
  }
  t = r_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,v_33 = NULL;
  v_33 = t;
  t = fork_0_0(t);
  r_33 = t;
  {
    ATerm n_54 = t;
    int o_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_33;
        t = m_108(t);
        LocalPopChoice(o_54);
      }
    else
      {
        t = n_54;
        t = SSL_waitpid(r_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_54 = ATgetArgument(t, 0);
            if(((ATgetType(p_54) != AT_INT) || (ATgetInt((ATermInt) p_54) != 0)))
              _fail(t);
            {
              ATerm q_54 = ATgetArgument(t, 1);
            }
            {
              ATerm t_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_117 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  a_34 = t;
  t = b_117(t);
  t = xtc_find_0_0(t);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
  {
    static ATerm l_19 (ATerm t)
    {
      ATerm b_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
      t = h_13(z_33, a_34, t);
      t = term_e_36;
      b_34 = t;
      t = SSL_exit(b_34);
      return(t);
    }
    t = fork_and_wait_1_0(l_19, t);
  }
  t = a_34;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  d_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_34 = NULL,g_34 = NULL;
      t = d_34;
      t = xtc_new_file_0_0(t);
      f_34 = t;
      t = t_0(t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATinsert(ATempty, f_34), term_z_35));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_34);
    }
  else
    {
      ATerm k_34 = NULL,l_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_34;
      t = xtc_new_file_0_0(t);
      k_34 = t;
      t = t_0(t);
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_34), term_z_35), e_34), term_u_54));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_49 = NULL,s_49 = NULL;
      s_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(s_49);
            m_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_49);
            p_8 = t;
            t = SSLsetAnnotations(p_8, m_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_49;
        }
      LocalPopChoice(w_54);
      {
        static ATerm n_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm r_19 (ATerm t)
        {
          ATerm t_49 = NULL;
          t = pass_verbose_0_0(t);
          t_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), t_49), (ATerm) ATinsert(ATempty, term_p_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(n_19, r_19, t);
      }
    }
  else
    {
      t = v_54;
      {
        static ATerm t_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm v_19 (ATerm t)
        {
          ATerm v_49 = NULL;
          t = pass_verbose_0_0(t);
          v_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), v_49), (ATerm) ATinsert(ATempty, term_p_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_19, v_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_34;
      t = k_98(t);
    }
  else
    {
      ATerm w_34 = NULL,x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = m_98(t);
      w_34 = t;
      t = p_34;
      t = foldr_3_0(k_98, l_98, m_98, t);
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
      t = l_98(t);
    }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_35), term_x_54);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm y_34 = NULL,b_35 = NULL;
  t = term_p_35;
  y_34 = t;
  t = term_x_54;
  b_35 = t;
  t = term_y_54;
  t = i_14(y_34, b_35, t);
  t = foldr_3_0(y_19, conc_0_0, a_20, t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_z_54;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_p_38);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = term_z_54;
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm m_20 = NULL;
  t = pass_verbose_0_0(t);
  m_20 = t;
  t = (ATerm) ATinsert(CheckATermList(m_20), term_p_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = get_outfile_1_0(t_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  t = term_a_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL,q_19 = NULL,s_19 = NULL,w_19 = NULL;
        t = term_p_35;
        s_19 = t;
        t = term_d_55;
        w_19 = t;
        t = term_e_55;
        t = i_14(s_19, w_19, t);
        t = q_36;
        {
          ATerm f_55 = t;
          int g_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_36;
              {
                ATerm h_55 = t;
                int i_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        d_20 = ATgetArgument(t, 0);
                        {
                          ATerm f_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(q_36);
                          f_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, d_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, f_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = q_36;
                      }
                    LocalPopChoice(i_55);
                    t = xtc_transform_file_2_0(g_20, h_20, t);
                  }
                else
                  {
                    t = h_55;
                    t = xtc_transform_term_2_0(n_20, r_20, t);
                  }
              }
              LocalPopChoice(g_55);
            }
          else
            {
              t = f_55;
              {
                ATerm o_20 = NULL,u_20 = NULL,w_20 = NULL;
                t = term_t_35;
                u_20 = t;
                t = (ATerm) ATinsert(ATempty, term_j_55);
                w_20 = t;
                t = SSL_printnl(u_20, w_20);
                t = term_r_38;
                o_20 = t;
                t = SSL_exit(o_20);
                t = (ATerm) ATinsert(ATempty, term_j_55);
              }
            }
        }
        t = copy_to_1_0(s_20, t);
        i_19 = t;
        t = term_t_35;
        j_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_55));
        q_19 = t;
        t = SSL_printnl(j_19, q_19);
        t = i_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = q_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_36 = NULL,a_37 = NULL,f_37 = NULL;
        t = term_p_35;
        a_37 = t;
        t = term_l_40;
        f_37 = t;
        t = term_n_40;
        t = i_14(a_37, f_37, t);
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_36, term_f_45);
        t = geq_0_0(t);
        t = x_36;
        t = f_108(t);
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
        t = x_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,i_37 = NULL;
      t = term_p_35;
      h_37 = t;
      t = term_s_55;
      i_37 = t;
      t = term_t_55;
      t = i_14(h_37, i_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_55);
      LocalPopChoice(o_55);
    }
  else
    {
      t = n_55;
      t = (ATerm) ATinsert(ATempty, term_v_55);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  {
    ATerm w_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
        t = term_p_35;
        t_37 = t;
        t = term_l_40;
        u_37 = t;
        t = term_n_40;
        t = i_14(t_37, u_37, t);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_37, term_f_39);
        t = geq_0_0(t);
        t = p_37;
        t = d_108(t);
        LocalPopChoice(x_55);
      }
    else
      {
        t = w_55;
        t = p_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm w_37 = NULL;
  static ATerm x_20 (ATerm t)
  {
    t = d_92(t);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    return(t);
  }
  t = fetch_1_0(x_20, t);
  t = not_null(w_37);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm h_40 = NULL,j_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_40 = ATgetArgument(t, 0);
      {
        ATerm q_21 = NULL,w_21 = NULL,x_9 = NULL;
        t = SSLgetAnnotations(h_40);
        q_21 = t;
        t = j_40;
        t = fetch_elem_1_0(d_21, t);
        w_21 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, w_21);
        x_9 = t;
        t = SSLsetAnnotations(x_9, q_21);
      }
    }
  else
    {
      ATerm f_23 = NULL,n_23 = NULL,a_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          j_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_40);
      f_23 = t;
      t = j_40;
      t = fetch_elem_1_0(e_21, t);
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, n_23);
      a_10 = t;
      t = SSLsetAnnotations(a_10, f_23);
    }
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,m_22 = NULL;
  e_22 = t;
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            f_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
            {
              ATerm a_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_55);
        t = f_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = m_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_22;
      }
    else
      {
        t = y_55;
        if(match_cons(t, sym_RDef_3))
          {
            f_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
            {
              ATerm b_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = m_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_22;
      }
  }
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
            {
              ATerm t_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_56);
        t = v_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_23;
      }
    else
      {
        t = c_56;
        if(match_cons(t, sym_RDef_3))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
            {
              ATerm v_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm a_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = fetch_elem_1_0(y_20, t);
  a_39 = t;
  t = term_t_35;
  c_39 = t;
  t = (ATerm) ATinsert(ATempty, term_w_56);
  d_39 = t;
  t = SSL_printnl(c_39, d_39);
  t = a_39;
  return(t);
}
static ATerm e_13 (ATerm g_21, ATerm h_21, ATerm t)
{
  t = g_21;
  {
    ATerm y_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_56;
      }
  }
  t = h_21;
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(h_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm f_13 (ATerm b_23, ATerm c_23, ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_write_term_to_stream_baf(b_23, c_23);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
static ATerm g_13 (ATerm i_91 (ATerm), ATerm k_194, ATerm l_23, ATerm t)
{
  ATerm x_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_194, term_c_57);
  t = b_14(t);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_40, l_23);
  t = i_91(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
static ATerm j_13 (ATerm s_104 (ATerm), ATerm u_42, ATerm s_42, ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL;
  c_41 = t;
  t = s_104(t);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_40, u_42, s_42);
  t = j_14(z_40, u_42, s_42, t);
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL;
        t = term_f_57;
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_40, term_f_57);
        t = i_14(z_40, k_41, t);
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_40, term_f_57, (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATinsert(CheckATermList(a_41), u_42)));
  t = lookup_table_0_1(z_40, t);
  i_41 = t;
  t = term_f_57;
  d_41 = t;
  t = (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATinsert(CheckATermList(a_41), u_42));
  e_41 = t;
  t = i_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(d_41, e_41, f_41, t);
  t = c_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm p_41 = NULL;
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL,g_24 = NULL;
      u_41 = t;
      t = term_i_57;
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_41, term_i_57);
      t = o_14(u_41, g_24, t);
      p_41 = t;
      t = SSL_mkstemp(p_41);
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      {
        ATerm v_41 = NULL;
        t = term_j_57;
        v_41 = t;
        t = SSL_perror(v_41);
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
static ATerm i_21 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,a_42 = NULL,c_42 = NULL,d_42 = NULL;
  t = P__tmpdir_0_0(t);
  c_42 = t;
  t = term_l_57;
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, term_l_57);
  t = o_14(c_42, d_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      y_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_36;
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, term_s_36);
  t = j_13(i_21, y_41, a_42, t);
  t = SSL_close(x_41);
  t = y_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm j_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_n_57);
      j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_42, (ATerm) ATinsert(ATempty, term_n_57));
      t = c_14(h_42, j_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_57 = ATgetArgument(t, 0);
      if(match_cons(o_57, sym_Stream_1))
        {
          x_42 = ATgetArgument(o_57, 0);
        }
      else
        _fail(t);
      y_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(x_42, y_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = read_from_0_0(t);
  t = c_116(t);
  l_42 = t;
  t = xtc_new_file_0_0(t);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  t = g_13(j_21, k_42, l_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_42);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = debug_1_0(n_21, t);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_p_57;
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = save_as_1_0(s_21, t);
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_q_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm f_43 = NULL,x_43 = NULL;
  x_43 = t;
  {
    ATerm r_57 = t;
    int s_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL,i_25 = NULL;
        t = term_p_35;
        g_25 = t;
        t = term_t_57;
        i_25 = t;
        t = term_u_57;
        t = i_14(g_25, i_25, t);
        f_43 = t;
        t = if_verbose2_1_0(l_21, t);
        t = x_43;
        {
          ATerm v_57 = t;
          int w_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_25 = NULL,r_25 = NULL;
              t = term_p_35;
              p_25 = t;
              t = term_y_37;
              r_25 = t;
              t = term_a_38;
              t = i_14(p_25, r_25, t);
              t = x_43;
              LocalPopChoice(w_57);
            }
          else
            {
              t = v_57;
              {
                static ATerm p_21 (ATerm t)
                {
                  ATerm x_57 = t;
                  int y_57 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_27 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          a_27 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = e_13(f_43, a_27, t);
                      LocalPopChoice(y_57);
                    }
                  else
                    {
                      t = x_57;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(p_21, t);
              }
            }
        }
        LocalPopChoice(s_57);
      }
    else
      {
        t = r_57;
        t = x_43;
      }
  }
  t = if_keep3_1_0(r_21, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  {
    ATerm z_57 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_45);
        LocalPopChoice(q_58);
      }
    else
      {
        t = z_57;
        t = b_45;
      }
  }
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  static ATerm t_21 (ATerm t)
  {
    ATerm p_44 = NULL,r_44 = NULL,u_44 = NULL;
    p_44 = t;
    t = term_k_57;
    r_44 = t;
    t = term_f_57;
    u_44 = t;
    t = term_r_58;
    t = i_14(r_44, u_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_44 != NULL) && (n_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_44 = ATgetFirst((ATermList) t);
        {
          ATerm s_58 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_44;
    t = map_1_0(v_21, t);
    t = p_44;
    t = end_scope_1_0(x_21, t);
    return(t);
  }
  t = repeat_2_0(t_21, _id, t);
  o_44 = t;
  t = SSL_exit(o_44);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm t_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_45 = NULL,z_45 = NULL;
      t = term_p_35;
      x_45 = t;
      t = term_z_35;
      z_45 = t;
      t = term_a_36;
      t = i_14(x_45, z_45, t);
      LocalPopChoice(v_58);
    }
  else
    {
      t = t_58;
      t = term_w_36;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm r_45 = NULL;
  r_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_27 = NULL,o_27 = NULL;
      t = term_z_35;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_27 = NULL,w_27 = NULL;
            t = term_p_35;
            v_27 = t;
            t = term_z_35;
            w_27 = t;
            t = term_a_36;
            t = i_14(v_27, w_27, t);
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
            t = term_w_36;
          }
      }
      n_27 = t;
      t = term_m_57;
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_57, n_27);
      t = r_13(o_27, n_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_45;
      t = copy_to_1_0(a_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_k_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,i_46 = NULL,j_46 = NULL;
  t = y_82(t);
  f_46 = t;
  t = term_p_35;
  i_46 = t;
  t = term_x_39;
  j_46 = t;
  t = term_y_39;
  t = i_14(i_46, j_46, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, f_46);
  t = o_14(g_46, f_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,m_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        t = k_47;
        t = v_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, m_47, n_28);
        t = r_13(m_47, n_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        {
          ATerm e_59 = t;
          int h_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_28 = NULL;
              t = k_47;
              t = v_0(t);
              w_28 = t;
              {
                ATerm i_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_28 = NULL;
                    y_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = y_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = y_28;
                          }
                        else
                          {
                            t = y_28;
                            if((m_47 != t))
                              {
                                _fail(t);
                              }
                            t = y_28;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_47, w_28);
              t = r_13(m_47, w_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
              LocalPopChoice(h_59);
            }
          else
            {
              t = e_59;
              t = k_47;
              t = v_0(t);
              if((m_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
            }
        }
      }
  }
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = get_outfile_1_0(c_22, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_j_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  {
    ATerm l_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL,y_29 = NULL,z_29 = NULL,c_30 = NULL;
        t = term_p_35;
        z_29 = t;
        t = term_p_59;
        c_30 = t;
        t = term_q_59;
        t = i_14(z_29, c_30, t);
        t = v_48;
        t = copy_to_1_0(b_22, t);
        t_29 = t;
        t = term_t_35;
        u_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_59));
        y_29 = t;
        t = SSL_printnl(u_29, y_29);
        t = t_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(o_59);
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
  ATerm y_49 = NULL,z_49 = NULL,i_50 = NULL,j_50 = NULL;
  t = term_l_40;
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_50 = NULL,p_50 = NULL;
        t = term_p_35;
        n_50 = t;
        t = term_l_40;
        p_50 = t;
        t = term_n_40;
        t = i_14(n_50, p_50, t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        t = term_r_38;
      }
  }
  z_49 = t;
  t = term_r_38;
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, term_r_38);
  t = p_13(z_49, j_50, t);
  i_50 = t;
  t = SSL_int_to_string(i_50);
  y_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_49), term_l_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm s_50 = NULL,u_50 = NULL,y_50 = NULL,b_51 = NULL,d_51 = NULL,e_51 = NULL;
  t = term_p_35;
  d_51 = t;
  t = term_x_59;
  e_51 = t;
  t = term_z_59;
  t = i_14(d_51, e_51, t);
  s_50 = t;
  t = term_c_60;
  t = xtc_find_path_0_0(t);
  u_50 = t;
  t = term_d_60;
  t = xtc_find_path_0_0(t);
  y_50 = t;
  t = term_e_60;
  t = xtc_find_path_0_0(t);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_51), term_x_59), y_50), term_x_59), u_50), term_x_59));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm f_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
  w_51 = t;
  t = term_f_60;
  f_51 = t;
  t = w_51;
  {
    ATerm h_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL,z_51 = NULL;
        t = term_p_35;
        y_51 = t;
        t = term_z_35;
        z_51 = t;
        t = term_a_36;
        t = i_14(y_51, z_51, t);
        LocalPopChoice(k_60);
      }
    else
      {
        t = h_60;
        {
          ATerm c_52 = NULL,d_52 = NULL;
          t = term_p_35;
          c_52 = t;
          t = term_x_39;
          d_52 = t;
          t = term_y_39;
          t = i_14(c_52, d_52, t);
        }
      }
  }
  x_51 = t;
  t = w_51;
  t = get_include_dirs_0_0(t);
  n_51 = t;
  t = w_51;
  t = pass_keep_0_0(t);
  o_51 = t;
  t = term_l_60;
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL,n_52 = NULL;
        t = term_p_35;
        f_52 = t;
        t = term_l_60;
        n_52 = t;
        t = term_o_60;
        t = i_14(f_52, n_52, t);
        LocalPopChoice(n_60);
        t = (ATerm) ATinsert(ATempty, term_l_60);
      }
    else
      {
        t = m_60;
        t = (ATerm) ATempty;
      }
  }
  v_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_51), o_51), n_51), (ATerm) ATinsert(ATinsert(ATempty, x_51), term_p_60));
  t = concat_0_0(t);
  m_51 = t;
  t = w_51;
  t = comp_0_2(f_51, m_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm p_52 = NULL;
  p_52 = t;
  {
    ATerm r_60 = t;
    int s_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_52 = NULL,b_53 = NULL,g_53 = NULL;
        t = term_p_35;
        b_53 = t;
        t = term_q_35;
        g_53 = t;
        t = term_r_35;
        t = i_14(b_53, g_53, t);
        t_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_52, term_f_39);
        t = geq_0_0(t);
        t = p_52;
        t = b_107(t);
        LocalPopChoice(s_60);
      }
    else
      {
        t = r_60;
        t = p_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  c_54 = t;
  t = SSL_explode_string(c_54);
  {
    ATerm t_60 = t;
    int u_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_55 (ATerm t)
        {
          ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
          p_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_55 = ATgetFirst((ATermList) t);
              r_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_60 = t;
            int w_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_31 = NULL,q_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(p_55);
                g_31 = t;
                t = r_55;
                t = u_55(t);
                q_31 = t;
                t = (ATerm) ATinsert(CheckATermList(q_31), q_55);
                k_10 = t;
                t = SSLsetAnnotations(k_10, g_31);
                LocalPopChoice(w_60);
              }
            else
              {
                t = v_60;
                {
                  ATerm x_60 = t;
                  int y_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_32 = NULL,m_10 = NULL;
                      t = SSLgetAnnotations(p_55);
                      e_32 = t;
                      t = q_55;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(r_55), q_55);
                      m_10 = t;
                      t = SSLsetAnnotations(m_10, e_32);
                      LocalPopChoice(y_60);
                    }
                  else
                    {
                      t = x_60;
                      {
                        ATerm y_32 = NULL,h_33 = NULL,n_10 = NULL;
                        t = SSLgetAnnotations(p_55);
                        y_32 = t;
                        t = q_55;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = r_55;
                        t = h_102(t);
                        h_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_33), q_55);
                        n_10 = t;
                        t = SSLsetAnnotations(n_10, y_32);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = u_55(t);
        LocalPopChoice(u_60);
      }
    else
      {
        t = t_60;
      }
  }
  b_54 = t;
  t = SSL_implode_string(b_54);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = debug_1_0(n_22, t);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_z_60;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_a_61;
  return(t);
}
static ATerm k_13 (ATerm c_21, ATerm t)
{
  ATerm e_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  t = c_21;
  t = basename_1_0(_id, t);
  e_56 = t;
  t = if_verbose3_1_0(g_22, t);
  t = term_z_39;
  s_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, e_56);
  t = n_14(s_56, e_56, t);
  {
    ATerm b_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL,x_56 = NULL;
        t = term_p_35;
        u_56 = t;
        t = term_z_35;
        x_56 = t;
        t = term_a_36;
        t = i_14(u_56, x_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = b_61;
        t = e_56;
      }
  }
  q_56 = t;
  t = if_verbose3_1_0(o_22, t);
  t = term_x_39;
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_39, q_56);
  t = n_14(r_56, q_56, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_56);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(s_22, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_j_61;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = if_verbose1_1_0(x_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,b_37 = NULL,c_37 = NULL,l_37 = NULL,r_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      m_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_13(m_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
        n_58 = t;
        t = term_p_35;
        o_58 = t;
        t = term_y_37;
        p_58 = t;
        t = term_a_38;
        t = i_14(o_58, p_58, t);
        t = n_58;
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        t = add_main_0_0(t);
      }
  }
  l_58 = t;
  {
    ATerm m_61 = t;
    int n_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_58 = ATgetArgument(t, 0);
            {
              ATerm q_33 = NULL,x_10 = NULL;
              t = SSLgetAnnotations(l_58);
              q_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_58);
              x_10 = t;
              t = SSLsetAnnotations(x_10, q_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(n_61);
        t = xtc_transform_file_2_0(y_22, z_22, t);
      }
    else
      {
        t = m_61;
        t = xtc_transform_term_2_0(a_23, e_23, t);
      }
  }
  k_58 = t;
  {
    ATerm p_61 = t;
    int q_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_59 = ATgetArgument(t, 0);
            {
              ATerm w_33 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(k_58);
              w_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_59);
              y_10 = t;
              t = SSLsetAnnotations(y_10, w_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(q_61);
        t = xtc_transform_file_2_0(g_23, k_23, t);
      }
    else
      {
        t = p_61;
        t = xtc_transform_term_2_0(m_23, o_23, t);
      }
  }
  t = if_keep5_1_0(p_23, t);
  j_58 = t;
  {
    ATerm s_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_59 = ATgetArgument(t, 0);
            {
              ATerm j_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(j_58);
              j_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_59);
              b_11 = t;
              t = SSLsetAnnotations(b_11, j_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_58;
          }
        LocalPopChoice(v_61);
        t = xtc_transform_file_2_0(t_23, x_23, t);
      }
    else
      {
        t = s_61;
        t = xtc_transform_term_2_0(z_23, b_24, t);
      }
  }
  t = if_keep5_1_0(d_24, t);
  v_34 = t;
  t = term_w_61;
  r_34 = t;
  t = v_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  u_34 = t;
  t = v_34;
  t = comp_0_2(r_34, u_34, t);
  i_58 = t;
  {
    ATerm x_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_59 = ATgetArgument(t, 0);
            {
              ATerm a_35 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(i_58);
              a_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_59);
              l_11 = t;
              t = SSLsetAnnotations(l_11, a_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_58;
          }
        LocalPopChoice(z_61);
        t = xtc_transform_file_2_0(f_24, h_24, t);
      }
    else
      {
        t = x_61;
        t = xtc_transform_term_2_0(i_24, j_24, t);
      }
  }
  h_58 = t;
  {
    ATerm a_62 = t;
    int c_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_59 = ATgetArgument(t, 0);
            {
              ATerm j_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(h_58);
              j_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_59);
              j_12 = t;
              t = SSLsetAnnotations(j_12, j_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_58;
          }
        LocalPopChoice(c_62);
        t = xtc_transform_file_2_0(l_24, o_24, t);
      }
    else
      {
        t = a_62;
        t = xtc_transform_term_2_0(p_24, q_24, t);
      }
  }
  t = if_keep5_1_0(r_24, t);
  g_58 = t;
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_60 = ATgetArgument(t, 0);
            {
              ATerm n_35 = NULL,l_12 = NULL;
              t = SSLgetAnnotations(g_58);
              n_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_60);
              l_12 = t;
              t = SSLsetAnnotations(l_12, n_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_58;
          }
        LocalPopChoice(h_62);
        t = xtc_transform_file_2_0(t_24, u_24, t);
      }
    else
      {
        t = g_62;
        t = xtc_transform_term_2_0(w_24, z_24, t);
      }
  }
  t = if_keep5_1_0(b_25, t);
  f_58 = t;
  {
    ATerm i_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_60 = ATgetArgument(t, 0);
            {
              ATerm w_35 = NULL,m_12 = NULL;
              t = SSLgetAnnotations(f_58);
              w_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_60);
              m_12 = t;
              t = SSLsetAnnotations(m_12, w_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(k_62);
        t = xtc_transform_file_2_0(d_25, e_25, t);
      }
    else
      {
        t = i_62;
        t = xtc_transform_term_2_0(f_25, j_25, t);
      }
  }
  t = if_keep5_1_0(q_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm l_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
        e_61 = t;
        t = term_p_35;
        f_61 = t;
        t = term_y_37;
        g_61 = t;
        t = term_a_38;
        t = i_14(f_61, g_61, t);
        t = e_61;
        LocalPopChoice(n_62);
        {
          ATerm h_61 = NULL;
          h_61 = t;
          {
            ATerm o_62 = t;
            int q_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    o_61 = ATgetArgument(t, 0);
                    {
                      ATerm i_36 = NULL,n_12 = NULL;
                      t = SSLgetAnnotations(h_61);
                      i_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, o_61);
                      n_12 = t;
                      t = SSLsetAnnotations(n_12, i_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = h_61;
                  }
                LocalPopChoice(q_62);
                t = xtc_transform_file_2_0(t_25, u_25, t);
              }
            else
              {
                t = o_62;
                t = xtc_transform_term_2_0(w_25, x_25, t);
              }
          }
        }
      }
    else
      {
        t = l_62;
        {
          ATerm u_61 = NULL;
          u_61 = t;
          {
            ATerm r_62 = t;
            int s_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_61 = ATgetArgument(t, 0);
                    {
                      ATerm t_36 = NULL,o_12 = NULL;
                      t = SSLgetAnnotations(u_61);
                      t_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_61);
                      o_12 = t;
                      t = SSLsetAnnotations(o_12, t_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = u_61;
                  }
                LocalPopChoice(s_62);
                t = xtc_transform_file_2_0(y_25, b_26, t);
              }
            else
              {
                t = r_62;
                t = xtc_transform_term_2_0(c_26, d_26, t);
              }
          }
          t = if_keep2_1_0(e_26, t);
        }
      }
  }
  l_37 = t;
  t = term_t_62;
  b_37 = t;
  t = l_37;
  t = pass_warnings_0_0(t);
  c_37 = t;
  t = l_37;
  t = comp_0_2(b_37, c_37, t);
  e_58 = t;
  {
    ATerm u_62 = t;
    int w_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_62 = ATgetArgument(t, 0);
            {
              ATerm o_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(e_58);
              o_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, o_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_58;
          }
        LocalPopChoice(w_62);
        t = xtc_transform_file_2_0(i_26, j_26, t);
      }
    else
      {
        t = u_62;
        t = xtc_transform_term_2_0(l_26, m_26, t);
      }
  }
  d_58 = t;
  {
    ATerm z_62 = t;
    int a_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_62 = ATgetArgument(t, 0);
            {
              ATerm z_37 = NULL,r_12 = NULL;
              t = SSLgetAnnotations(d_58);
              z_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_62);
              r_12 = t;
              t = SSLsetAnnotations(r_12, z_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_58;
          }
        LocalPopChoice(a_63);
        t = xtc_transform_file_2_0(n_26, p_26, t);
      }
    else
      {
        t = z_62;
        t = xtc_transform_term_2_0(u_26, v_26, t);
      }
  }
  t = if_keep2_1_0(w_26, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  t = term_t_35;
  b_58 = t;
  t = (ATerm) ATinsert(CheckATermList(a_58), term_b_63);
  c_58 = t;
  t = SSL_printnl(b_58, c_58);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(a_58), term_b_63));
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_c_63;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm w_58 = NULL;
  t = pass_verbose_0_0(t);
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(w_58), term_p_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_c_63;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm x_58 = NULL;
  t = pass_verbose_0_0(t);
  x_58 = t;
  t = (ATerm) ATinsert(CheckATermList(x_58), term_p_38);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm f_59 = NULL;
  t = pass_verbose_0_0(t);
  f_59 = t;
  t = (ATerm) ATinsert(CheckATermList(f_59), term_p_38);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm g_59 = NULL;
  t = pass_verbose_0_0(t);
  g_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), term_p_38);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = save_as_1_0(r_23, t);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_p_38);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm b_24 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_p_38);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = save_as_1_0(e_24, t);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_g_63;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_h_63;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm t_59 = NULL;
  t = pass_verbose_0_0(t);
  t_59 = t;
  t = (ATerm) ATinsert(CheckATermList(t_59), term_p_38);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_h_63;
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_p_38);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  t = term_i_63;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm a_60 = NULL;
  t = pass_verbose_0_0(t);
  a_60 = t;
  t = (ATerm) ATinsert(CheckATermList(a_60), term_p_38);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_i_63;
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm b_60 = NULL;
  t = pass_verbose_0_0(t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), term_p_38);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = save_as_1_0(s_24, t);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_j_63;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm i_60 = NULL;
  t = pass_verbose_0_0(t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), term_p_38);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm j_60 = NULL;
  t = pass_verbose_0_0(t);
  j_60 = t;
  t = (ATerm) ATinsert(CheckATermList(j_60), term_p_38);
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = save_as_1_0(c_25, t);
  return(t);
}
static ATerm c_25 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm c_61 = NULL;
  t = pass_verbose_0_0(t);
  c_61 = t;
  t = (ATerm) ATinsert(CheckATermList(c_61), term_p_38);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm d_61 = NULL;
  t = pass_verbose_0_0(t);
  d_61 = t;
  t = (ATerm) ATinsert(CheckATermList(d_61), term_p_38);
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = save_as_1_0(s_25, t);
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_z_54;
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm r_61 = NULL;
  t = pass_verbose_0_0(t);
  r_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), term_p_38);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_z_54;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm t_61 = NULL;
  t = pass_verbose_0_0(t);
  t_61 = t;
  t = (ATerm) ATinsert(CheckATermList(t_61), term_p_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  ATerm b_62 = NULL;
  t = pass_verbose_0_0(t);
  b_62 = t;
  t = (ATerm) ATinsert(CheckATermList(b_62), term_p_38);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm d_62 = NULL;
  t = pass_verbose_0_0(t);
  d_62 = t;
  t = (ATerm) ATinsert(CheckATermList(d_62), term_p_38);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = save_as_1_0(g_26, t);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm m_62 = NULL;
  t = pass_verbose_0_0(t);
  m_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), term_p_38);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm p_62 = NULL;
  t = pass_verbose_0_0(t);
  p_62 = t;
  t = (ATerm) ATinsert(CheckATermList(p_62), term_p_38);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm x_62 = NULL;
  t = pass_verbose_0_0(t);
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), term_p_38);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm y_62 = NULL;
  t = pass_verbose_0_0(t);
  y_62 = t;
  t = (ATerm) ATinsert(CheckATermList(y_62), term_p_38);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = save_as_1_0(x_26, t);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(t_22, u_22, t);
  return(t);
}
static ATerm i_14 (ATerm r_54, ATerm s_54, ATerm t)
{
  ATerm r_63 = NULL;
  t = lookup_table_0_1(r_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(s_54, r_63, t);
  return(t);
}
static ATerm l_13 (ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL;
  u_63 = t;
  {
    ATerm w_63 = t;
    int y_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
        t = i_14(d_53, e_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_64 = ATgetFirst((ATermList) t);
            t_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_63);
        {
          ATerm x_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_53, e_53, t_63);
          t = lookup_table_0_1(d_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_14(e_53, t_63, x_63, t);
          t = (ATerm) ATmakeAppl(sym__3, d_53, e_53, t_63);
        }
      }
    else
      {
        t = w_63;
        {
          ATerm z_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
          t = lookup_table_0_1(d_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_14(e_53, z_63, t);
          t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
        }
      }
  }
  t = u_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm d_64 = NULL,f_64 = NULL,g_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
  j_64 = t;
  t = p_104(t);
  g_64 = t;
  {
    ATerm b_64 = t;
    int c_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_64 = NULL;
        t = term_f_57;
        n_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_64, term_f_57);
        t = i_14(g_64, n_64, t);
        LocalPopChoice(c_64);
      }
    else
      {
        t = b_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_64 = ATgetFirst((ATermList) t);
      d_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_64, term_f_57, d_64);
  t = lookup_table_0_1(g_64, t);
  m_64 = t;
  t = term_f_57;
  k_64 = t;
  t = m_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(k_64, d_64, l_64, t);
  t = f_64;
  {
    static ATerm z_26 (ATerm t)
    {
      ATerm o_64 = NULL;
      o_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_64, o_64);
      t = l_13(g_64, o_64, t);
      return(t);
    }
    t = map_1_0(z_26, t);
  }
  t = j_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm e_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_84(t);
      t = c_84(t);
      LocalPopChoice(h_64);
    }
  else
    {
      t = e_64;
      t = c_84(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  v_64 = t;
  t = o_104(t);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_64, term_f_57);
  {
    ATerm i_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_64 = ATgetArgument(t, 0);
            ATerm r_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_57;
        j_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_64, term_f_57);
        t = i_14(u_64, j_65, t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = i_64;
        t = (ATerm) ATempty;
      }
  }
  w_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_64, term_f_57, (ATerm) ATinsert(CheckATermList(w_64), (ATerm) ATempty));
  t = lookup_table_0_1(u_64, t);
  a_65 = t;
  t = term_f_57;
  x_64 = t;
  t = (ATerm) ATinsert(CheckATermList(w_64), (ATerm) ATempty);
  y_64 = t;
  t = a_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(x_64, y_64, z_64, t);
  t = v_64;
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_k_57;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  {
    ATerm s_64 = t;
    int t_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_65);
        LocalPopChoice(t_64);
      }
    else
      {
        t = s_64;
        t = z_65;
      }
  }
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_k_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm p_65 = NULL;
  static ATerm d_27 (ATerm t)
  {
    ATerm q_65 = NULL;
    q_65 = t;
    {
      ATerm b_65 = t;
      int c_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_65 = NULL,u_65 = NULL;
          t = term_k_57;
          t_65 = t;
          t = term_f_57;
          u_65 = t;
          t = term_r_58;
          t = i_14(t_65, u_65, t);
          LocalPopChoice(c_65);
        }
      else
        {
          t = b_65;
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
          ATerm d_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_65;
    t = map_1_0(e_27, t);
    t = q_65;
    t = end_scope_1_0(f_27, t);
    return(t);
  }
  t = begin_scope_1_0(c_27, t);
  t = restore_always_2_0(n_116, d_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm d_66 = NULL;
  d_66 = t;
  {
    ATerm e_65 = t;
    int f_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_66 = NULL,k_66 = NULL,l_66 = NULL;
        t = term_p_35;
        k_66 = t;
        t = term_q_35;
        l_66 = t;
        t = term_r_35;
        t = i_14(k_66, l_66, t);
        g_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_66, term_r_38);
        t = geq_0_0(t);
        t = d_66;
        t = z_106(t);
        LocalPopChoice(f_65);
      }
    else
      {
        t = e_65;
        t = d_66;
      }
  }
  return(t);
}
static ATerm n_13 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm g_65 = t;
  int h_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_41, h_41);
      LocalPopChoice(h_65);
    }
  else
    {
      t = g_65;
      t = SSL_addr(g_41, h_41);
    }
  return(t);
}
static ATerm p_13 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm i_65 = t;
  int k_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_41, n_41);
      LocalPopChoice(k_65);
    }
  else
    {
      t = i_65;
      t = SSL_subtr(m_41, n_41);
    }
  return(t);
}
static ATerm q_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,s_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  t = p_13(a_50, b_50, t);
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, d_50);
  t = p_13(c_50, d_50, t);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
  t = p_13(e_50, f_50, t);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, h_50);
  t = p_13(g_50, h_50, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, n_66, o_66, p_66, s_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,z_66 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_65 = ATgetArgument(t, 0);
      if(match_cons(l_65, sym__4))
        {
          u_66 = ATgetArgument(l_65, 0);
          v_66 = ATgetArgument(l_65, 1);
          w_66 = ATgetArgument(l_65, 2);
          z_66 = ATgetArgument(l_65, 3);
        }
      else
        _fail(t);
      {
        ATerm m_65 = ATgetArgument(t, 1);
        if(match_cons(m_65, sym__4))
          {
            c_67 = ATgetArgument(m_65, 0);
            d_67 = ATgetArgument(m_65, 1);
            e_67 = ATgetArgument(m_65, 2);
            g_67 = ATgetArgument(m_65, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_13(u_66, v_66, w_66, z_66, c_67, d_67, e_67, g_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,r_67 = NULL,t_67 = NULL,w_67 = NULL,y_67 = NULL,b_68 = NULL,f_68 = NULL;
  n_67 = t;
  t = times_0_0(t);
  h_67 = t;
  t = n_67;
  t = n_110(t);
  i_67 = t;
  t = times_0_0(t);
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_67, h_67);
  t = diff_times_0_0(t);
  l_67 = t;
  if(match_cons(t, sym__4))
    {
      y_67 = ATgetArgument(t, 0);
      {
        ATerm n_65 = ATgetArgument(t, 1);
      }
      b_68 = ATgetArgument(t, 2);
      {
        ATerm o_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_67, b_68);
  t = n_13(y_67, b_68, t);
  f_68 = t;
  t = SSL_TicksToSeconds(f_68);
  j_67 = t;
  t = l_67;
  if(match_cons(t, sym__4))
    {
      ATerm r_65 = ATgetArgument(t, 0);
      r_67 = ATgetArgument(t, 1);
      {
        ATerm s_65 = ATgetArgument(t, 2);
      }
      t_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_67, t_67);
  t = n_13(r_67, t_67, t);
  w_67 = t;
  t = SSL_TicksToSeconds(w_67);
  k_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_67), term_w_65), j_67), term_v_65);
  t = m_110(t);
  t = i_67;
  return(t);
}
ATerm debug_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,n_68 = NULL;
  i_68 = t;
  t = g_91(t);
  j_68 = t;
  t = term_t_35;
  k_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_68), j_68);
  n_68 = t;
  t = SSL_printnl(k_68, n_68);
  t = i_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  o_68 = t;
  t = term_p_35;
  s_68 = t;
  t = term_x_65;
  t_68 = t;
  t = term_y_65;
  t = i_14(s_68, t_68, t);
  p_68 = t;
  t = term_w_36;
  q_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_66), term_i_66), term_h_66), term_f_66), term_e_66), term_c_66), term_b_66), p_68), term_a_66);
  r_68 = t;
  t = SSL_printnl(q_68, r_68);
  t = o_68;
  return(t);
}
static ATerm r_13 (ATerm k_44, ATerm l_44, ATerm t)
{
  t = SSL_copy(k_44, l_44);
  return(t);
}
static ATerm s_13 (ATerm m_56, ATerm t)
{
  t = SSL_hashtable_keys(m_56);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL;
  static ATerm h_27 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL;
    w_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_68), w_68);
    t = i_14(not_null(u_68), w_68, t);
    x_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
    return(t);
  }
  if(((u_68 != NULL) && (u_68 != t)))
    _fail(t);
  else
    u_68 = t;
  t = lookup_table_0_1(u_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_13(v_68, t);
  t = map_1_0(h_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm z_68 = NULL;
  z_68 = t;
  {
    ATerm m_66 = t;
    int q_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
        t = term_p_35;
        c_69 = t;
        t = term_q_35;
        d_69 = t;
        t = term_r_35;
        t = i_14(c_69, d_69, t);
        b_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_69, term_f_45);
        t = geq_0_0(t);
        t = z_68;
        t = d_107(t);
        LocalPopChoice(q_66);
      }
    else
      {
        t = m_66;
        t = z_68;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm g_69 = NULL;
  g_69 = t;
  {
    ATerm r_66 = t;
    int t_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
        t = term_p_35;
        j_69 = t;
        t = term_q_35;
        k_69 = t;
        t = term_r_35;
        t = i_14(j_69, k_69, t);
        i_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_69, term_f_42);
        t = geq_0_0(t);
        t = g_69;
        t = c_107(t);
        LocalPopChoice(t_66);
      }
    else
      {
        t = r_66;
        t = g_69;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  if(match_cons(t, sym__2))
    {
      v_69 = ATgetArgument(t, 0);
      w_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_69;
        if((v_69 != t))
          {
            _fail(t);
          }
        t = u_69;
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
        t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
        {
          ATerm a_67 = t;
          int b_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_69, w_69);
              LocalPopChoice(b_67);
            }
          else
            {
              t = a_67;
              t = SSL_gtr(v_69, w_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_69, w_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm b_70 = NULL;
  b_70 = t;
  {
    ATerm f_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
        t = term_p_35;
        f_70 = t;
        t = term_q_35;
        g_70 = t;
        t = term_r_35;
        t = i_14(f_70, g_70, t);
        e_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_70, term_m_42);
        t = geq_0_0(t);
        t = b_70;
        t = e_107(t);
        LocalPopChoice(o_67);
      }
    else
      {
        t = f_67;
        t = b_70;
      }
  }
  return(t);
}
static ATerm v_13 (ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  t = g_96(t);
  {
    static ATerm i_27 (ATerm t)
    {
      ATerm m_70 = NULL;
      m_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_29, m_70);
      t = f_96(t);
      return(t);
    }
    t = fetch_1_0(i_27, t);
  }
  t = m_29;
  return(t);
}
static ATerm w_13 (ATerm c_96 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm n_71 (ATerm t)
  {
    ATerm d_71 = NULL,f_71 = NULL,g_71 = NULL;
    d_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_71 = ATgetFirst((ATermList) t);
            g_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_67 = t;
          int q_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_71;
              {
                static ATerm j_27 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = v_13(c_96, j_27, f_71, g_71, t);
              }
              t = n_71(t);
              LocalPopChoice(q_67);
            }
          else
            {
              t = p_67;
              {
                ATerm v_38 = NULL,y_38 = NULL,x_14 = NULL;
                t = SSLgetAnnotations(d_71);
                v_38 = t;
                t = g_71;
                t = n_71(t);
                y_38 = t;
                t = (ATerm) ATinsert(CheckATermList(y_38), f_71);
                x_14 = t;
                t = SSLsetAnnotations(x_14, v_38);
              }
            }
        }
      }
    return(t);
  }
  t = j_29;
  t = n_71(t);
  return(t);
}
static ATerm l_27 (ATerm t)
{
  ATerm b_72 = NULL;
  if(match_cons(t, sym__2))
    {
      b_72 = ATgetArgument(t, 0);
      if((b_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_13 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  {
    ATerm s_67 = t;
    int u_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_67 = ATgetArgument(t, 0);
            ATerm x_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = i_14(v_53, w_53, t);
        LocalPopChoice(u_67);
      }
    else
      {
        t = s_67;
        t = (ATerm) ATempty;
      }
  }
  u_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_71, x_53);
  t = w_13(l_27, u_71, x_53, t);
  t_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, t_71);
  t = lookup_table_0_1(v_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(w_53, t_71, v_71, t);
  t = s_71;
  return(t);
}
static ATerm y_13 (ATerm v_111 (ATerm), ATerm f_54, ATerm e_54, ATerm t)
{
  static ATerm m_27 (ATerm t)
  {
    ATerm c_72 = NULL,f_72 = NULL;
    if(match_cons(t, sym__2))
      {
        c_72 = ATgetArgument(t, 0);
        f_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_54, c_72, f_72);
    t = v_111(t);
    return(t);
  }
  t = e_54;
  t = map_1_0(m_27, t);
  return(t);
}
static ATerm c_14 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_access(d_38, e_38);
  return(t);
}
static ATerm d_73 (ATerm w_72, ATerm t)
{
  t = SSL_fclose(w_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_73 = ATgetArgument(t, 0);
      {
        ATerm z_67 = t;
        int a_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_73);
            LocalPopChoice(a_68);
          }
        else
          {
            t = z_67;
            t = d_73(b_73, t);
          }
      }
    }
  else
    {
      t = d_73(b_73, t);
    }
  return(t);
}
static ATerm z_13 (ATerm h_23, ATerm t)
{
  t = SSL_read_term_from_stream(h_23);
  return(t);
}
static ATerm a_14 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm g_73 = NULL;
  t = SSL_fopen(m_38, n_38);
  g_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_73 = NULL;
  t = SSL_stdin_stream();
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_73 = NULL;
  t = SSL_stdout_stream();
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_73);
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
static ATerm f_75 (ATerm v_73, ATerm t)
{
  ATerm x_73 = NULL;
  t = SSL_explode_term(v_73);
  if(match_cons(t, sym__2))
    {
      ATerm c_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_68 = ATgetArgument(t, 1);
        if(((ATgetType(d_68) == AT_LIST) && !(ATisEmpty(d_68))))
          {
            x_73 = ATgetFirst((ATermList) d_68);
            {
              ATerm e_68 = (ATerm) ATgetNext((ATermList) d_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_75 (ATerm a_74, ATerm d_74, ATerm f_74, ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,l_74 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(f_74);
  i_74 = t;
  t = a_74;
  if(match_cons(t, sym_Path_1))
    {
      l_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_74, d_74);
  b_15 = t;
  t = SSLsetAnnotations(b_15, i_74);
  if(match_cons(t, sym__2))
    {
      g_74 = ATgetArgument(t, 0);
      h_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(g_74, h_74, t);
  return(t);
}
static ATerm h_75 (ATerm o_74, ATerm p_74, ATerm r_74, ATerm t)
{
  ATerm s_74 = NULL,u_74 = NULL,v_74 = NULL,y_74 = NULL,c_15 = NULL;
  t = SSLgetAnnotations(r_74);
  v_74 = t;
  t = SSL_is_string(o_74);
  y_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_74, p_74);
  c_15 = t;
  t = SSLsetAnnotations(c_15, v_74);
  if(match_cons(t, sym__2))
    {
      s_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(s_74, u_74, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm b_75 = NULL,d_75 = NULL,e_75 = NULL;
  b_75 = t;
  if(match_cons(t, sym__2))
    {
      d_75 = ATgetArgument(t, 0);
      e_75 = ATgetArgument(t, 1);
      {
        ATerm g_68 = t;
        int h_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_75(b_75, t);
            LocalPopChoice(h_68);
          }
        else
          {
            t = g_68;
            {
              ATerm l_68 = t;
              int m_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_75(d_75, e_75, b_75, t);
                  LocalPopChoice(m_68);
                }
              else
                {
                  t = l_68;
                  t = h_75(d_75, e_75, b_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_75(b_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,t_75 = NULL;
  t_75 = t;
  {
    ATerm y_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_75, term_e_69);
        t = b_14(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = y_68;
        {
          ATerm k_40 = NULL,m_40 = NULL;
          t = term_f_69;
          m_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_69, t_75);
          t = o_14(m_40, t_75, t);
          k_40 = t;
          t = SSL_perror(k_40);
          _fail(t);
        }
      }
  }
  l_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_13(m_75, t);
  k_75 = t;
  t = l_75;
  t = fclose_0_0(t);
  t = k_75;
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_h_69;
  return(t);
}
static ATerm s_27 (ATerm t)
{
  t = term_l_69;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_69 = t;
  int n_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_75 = NULL,y_75 = NULL;
      x_75 = t;
      t = (ATerm) ATinsert(ATempty, term_o_69);
      y_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_75, (ATerm) ATinsert(ATempty, term_o_69));
      t = c_14(x_75, y_75, t);
      LocalPopChoice(n_69);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_69;
      {
        ATerm p_69 = t;
        int q_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_69 = t;
            if((PushChoice() == 0))
              {
                ATerm z_75 = NULL,a_76 = NULL;
                z_75 = t;
                t = (ATerm) ATinsert(ATempty, term_n_57);
                a_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_75, (ATerm) ATinsert(ATempty, term_n_57));
                t = c_14(z_75, a_76, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_69;
              }
            t = debug_1_0(r_27, t);
            LocalPopChoice(q_69);
          }
        else
          {
            t = p_69;
            t = debug_1_0(s_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm t_27 (ATerm t)
{
  t = debug_1_0(u_27, t);
  return(t);
}
static ATerm u_27 (ATerm t)
{
  t = term_s_69;
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = debug_1_0(y_27, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_t_69;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  t = term_t_35;
  y_76 = t;
  t = (ATerm) ATinsert(ATempty, term_x_69);
  z_76 = t;
  t = SSL_printnl(y_76, z_76);
  t = x_76;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm a_77 = NULL,c_77 = NULL,e_77 = NULL;
  if(match_cons(t, sym__3))
    {
      a_77 = ATgetArgument(t, 0);
      c_77 = ATgetArgument(t, 1);
      e_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_13(a_77, c_77, e_77, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,i_77 = NULL;
  f_77 = t;
  t = term_t_35;
  g_77 = t;
  t = (ATerm) ATinsert(ATempty, term_y_69);
  i_77 = t;
  t = SSL_printnl(g_77, i_77);
  t = f_77;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  j_77 = t;
  t = term_t_35;
  k_77 = t;
  t = (ATerm) ATinsert(ATempty, term_x_69);
  l_77 = t;
  t = SSL_printnl(k_77, l_77);
  t = j_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_76 = NULL,d_76 = NULL,f_76 = NULL,g_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,p_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL;
  b_76 = t;
  t = if_verbose5_1_0(t_27, t);
  {
    ATerm z_69 = t;
    if((PushChoice() == 0))
      {
        ATerm v_76 = NULL,w_76 = NULL;
        t = term_a_70;
        v_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_76);
        w_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_70, (ATerm) ATmakeAppl(sym_Imported_1, b_76));
        t = i_14(v_76, w_76, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_69;
      }
  }
  f_76 = t;
  t = term_a_70;
  n_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_70, term_c_70, (ATerm) ATinsert(ATempty, b_76));
  t = lookup_table_0_1(n_76, t);
  t_76 = t;
  t = term_c_70;
  p_76 = t;
  t = (ATerm) ATinsert(ATempty, b_76);
  r_76 = t;
  t = t_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(p_76, r_76, s_76, t);
  t = f_76;
  t = if_verbose4_1_0(x_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(z_27, t);
  d_76 = t;
  t = term_a_70;
  m_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_70, d_76);
  t = y_13(a_28, m_76, d_76, t);
  t = if_verbose6_1_0(b_28, t);
  t = term_a_70;
  g_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_70, (ATerm)ATmakeAppl(sym_Imported_1, b_76), (ATerm) ATempty);
  t = lookup_table_0_1(g_76, t);
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_76);
  i_76 = t;
  t = (ATerm) ATempty;
  j_76 = t;
  t = l_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(i_76, j_76, k_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_70, (ATerm)ATmakeAppl(sym_Imported_1, b_76), (ATerm) ATempty);
  t = if_verbose4_1_0(c_28, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_78;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_78 = ATgetFirst((ATermList) t);
          f_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_70 = t;
        int h_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL,o_41 = NULL,s_41 = NULL,n_18 = NULL;
            t = SSLgetAnnotations(d_78);
            y_40 = t;
            t = e_78;
            t = m_99(t);
            o_41 = t;
            t = f_78;
            t = filter_1_0(m_99, t);
            s_41 = t;
            t = (ATerm) ATinsert(CheckATermList(s_41), o_41);
            n_18 = t;
            t = SSLsetAnnotations(n_18, y_40);
            LocalPopChoice(h_70);
          }
        else
          {
            t = d_70;
            t = f_78;
            t = filter_1_0(m_99, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  static ATerm j_78 (ATerm t)
  {
    ATerm i_70 = t;
    int j_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        t = j_78(t);
        LocalPopChoice(j_70);
      }
    else
      {
        t = i_70;
        t = g_84(t);
      }
    return(t);
  }
  t = j_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_70 = t;
  int l_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_78 = NULL,m_78 = NULL;
      t = term_p_35;
      l_78 = t;
      t = term_n_70;
      m_78 = t;
      t = term_o_70;
      t = i_14(l_78, m_78, t);
      LocalPopChoice(l_70);
    }
  else
    {
      t = k_70;
      {
        ATerm p_70 = t;
        int q_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_78 = NULL;
            t = term_r_70;
            o_78 = t;
            t = SSL_getenv(o_78);
            LocalPopChoice(q_70);
          }
        else
          {
            t = p_70;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = debug_1_0(e_28, t);
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_s_70;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm v_78 = NULL,x_78 = NULL;
  t = term_a_70;
  v_78 = t;
  t = term_t_70;
  x_78 = t;
  t = term_u_70;
  t = i_14(v_78, x_78, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_70 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_70;
      }
  }
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = debug_1_0(h_28, t);
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = term_w_70;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_78 = NULL;
  t = if_verbose5_1_0(d_28, t);
  q_78 = t;
  {
    ATerm x_70 = t;
    int y_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_78 = NULL,s_78 = NULL;
        t = term_a_70;
        r_78 = t;
        t = term_c_70;
        s_78 = t;
        t = term_z_70;
        t = i_14(r_78, s_78, t);
        LocalPopChoice(y_70);
      }
    else
      {
        t = x_70;
        {
          ATerm t_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_78 = t;
          t = repeat_2_0(f_28, _id, t);
          t = t_78;
        }
      }
  }
  t = q_78;
  t = if_verbose5_1_0(g_28, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = debug_1_0(j_28, t);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_a_71;
  return(t);
}
static ATerm a_80 (ATerm d_79, ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,i_79 = NULL;
  t = term_a_70;
  g_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_79);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_70, (ATerm) ATmakeAppl(sym_Tool_1, d_79));
  t = i_14(g_79, i_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_71 = ATgetFirst((ATermList) t);
      if(match_cons(b_71, sym__2))
        {
          ATerm e_71 = ATgetArgument(b_71, 0);
          f_79 = ATgetArgument(b_71, 1);
        }
      else
        _fail(t);
      {
        ATerm c_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_79;
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = debug_1_0(m_28, t);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_a_71;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_a_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_28, t);
  return(t);
}
static ATerm p_28 (ATerm t)
{
  t = term_h_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_71 = t;
  int j_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_79 = NULL,l_79 = NULL,n_79 = NULL;
      t = if_verbose5_1_0(i_28, t);
      t = xtc_load_0_0(t);
      n_79 = t;
      if(match_cons(t, sym__2))
        {
          k_79 = ATgetArgument(t, 0);
          l_79 = ATgetArgument(t, 1);
          {
            ATerm k_71 = t;
            int l_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
                t = term_a_70;
                r_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_79);
                s_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_70, (ATerm) ATmakeAppl(sym_Tool_1, k_79));
                t = i_14(r_79, s_79, t);
                {
                  static ATerm k_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_79 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_79 != NULL) && (q_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_28, t);
                }
                t = not_null(q_79);
                LocalPopChoice(l_71);
              }
            else
              {
                t = k_71;
                t = a_80(n_79, t);
              }
          }
        }
      else
        {
          t = a_80(n_79, t);
        }
      t = if_verbose5_1_0(l_28, t);
      LocalPopChoice(j_71);
    }
  else
    {
      t = i_71;
      {
        ATerm z_79 = NULL,o_42 = NULL,p_42 = NULL;
        z_79 = t;
        t = term_t_35;
        o_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_71), z_79), term_m_71);
        p_42 = t;
        t = SSL_printnl(o_42, p_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_71), z_79), term_m_71);
        t = if_verbose5_1_0(o_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm d_14 (ATerm j_48, ATerm i_48, ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  t = j_48;
  {
    ATerm p_71 = t;
    int q_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_80 = NULL;
        t = term_p_35;
        j_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_35, j_48);
        t = i_14(j_80, j_48, t);
        LocalPopChoice(q_71);
      }
    else
      {
        t = p_71;
        t = (ATerm) ATempty;
      }
  }
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, d_80);
  t = conc_0_0(t);
  c_80 = t;
  t = term_p_35;
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, j_48, c_80);
  t = lookup_table_0_1(e_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(j_48, c_80, f_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, j_48, c_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_80 = NULL,w_80 = NULL,z_80 = NULL;
      t = term_s_36;
      t = p_0(t);
      u_80 = t;
      t = term_r_71;
      w_80 = t;
      t = term_w_71;
      z_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_71, term_w_71, u_80);
      t = j_14(w_80, z_80, u_80, t);
      _fail(t);
    }
  else
    {
      ATerm e_81 = NULL;
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
          s_80 = ATgetFirst((ATermList) t);
          t_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_80;
      t = n_0(t);
      t = s_80;
      t = o_0(t);
      e_81 = t;
      t = (ATerm) ATinsert(CheckATermList(t_80), e_81);
    }
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  if(match_string(t, "-S"))
    {
      t = g_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_81;
    }
  return(t);
}
static ATerm r_28 (ATerm t)
{
  ATerm h_81 = NULL,m_81 = NULL;
  t = term_q_35;
  h_81 = t;
  t = term_k_35;
  m_81 = t;
  t = term_x_71;
  t = n_14(h_81, m_81, t);
  t = term_y_71;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  t = term_z_71;
  return(t);
}
static ATerm t_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_28 (ATerm t)
{
  ATerm p_81 = NULL,r_81 = NULL,s_81 = NULL;
  p_81 = t;
  t = SSL_string_to_int(p_81);
  r_81 = t;
  t = term_q_35;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_35, r_81);
  t = n_14(s_81, r_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_81);
  return(t);
}
static ATerm v_28 (ATerm t)
{
  t = term_a_72;
  return(t);
}
static ATerm b_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL;
  t = term_d_72;
  t_81 = t;
  t = term_s_36;
  u_81 = t;
  t = term_e_72;
  t = n_14(t_81, u_81, t);
  t = term_g_72;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = term_h_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_72 = t;
  int j_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_28, r_28, s_28, t);
      LocalPopChoice(j_72);
    }
  else
    {
      t = i_72;
      {
        ATerm k_72 = t;
        int l_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_28, u_28, v_28, t);
            LocalPopChoice(l_72);
          }
        else
          {
            t = k_72;
            t = Option_3_0(b_29, g_29, h_29, t);
          }
      }
    }
  return(t);
}
static ATerm e_14 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm m_72 = t;
  int n_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_81 = NULL,w_81 = NULL,y_81 = NULL;
      t = term_p_35;
      y_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_35, g_48);
      t = i_14(y_81, g_48, t);
      t = term_p_35;
      v_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_35, g_48);
      t = lookup_table_0_1(v_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          w_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_14(g_48, w_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_p_35, g_48);
      LocalPopChoice(n_72);
    }
  else
    {
      t = m_72;
      t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
      t = n_14(g_48, h_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  static ATerm x_82 (ATerm t)
  {
    ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL;
    w_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_82 = ATgetFirst((ATermList) t);
        v_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_42 = NULL,b_43 = NULL,z_18 = NULL;
          t = SSLgetAnnotations(w_82);
          w_42 = t;
          t = v_82;
          t = x_82(t);
          b_43 = t;
          t = (ATerm) ATinsert(CheckATermList(b_43), u_82);
          z_18 = t;
          t = SSLsetAnnotations(z_18, w_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_82;
        t = i_92(t);
      }
    return(t);
  }
  t = x_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_82;
    }
  else
    {
      static ATerm k_29 (ATerm t)
      {
        t = not_null(c_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_82 = ATgetFirst((ATermList) t);
          if(((c_82 != NULL) && (c_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_82;
      t = at_end_1_0(k_29, t);
    }
  return(t);
}
static ATerm l_83 (ATerm d_83, ATerm t)
{
  ATerm e_83 = NULL;
  t = SSL_explode_term(d_83);
  if(match_cons(t, sym__2))
    {
      ATerm o_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_83;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
  i_83 = t;
  if(match_cons(t, sym__2))
    {
      g_83 = ATgetArgument(t, 0);
      h_83 = ATgetArgument(t, 1);
      {
        ATerm p_72 = t;
        int q_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_29 (ATerm t)
            {
              t = h_83;
              return(t);
            }
            t = g_83;
            t = at_end_1_0(l_29, t);
            LocalPopChoice(q_72);
          }
        else
          {
            t = p_72;
            t = l_83(i_83, t);
          }
      }
    }
  else
    {
      t = l_83(i_83, t);
    }
  return(t);
}
static ATerm f_14 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  t = k_48;
  {
    ATerm r_72 = t;
    int s_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_83 = NULL;
        t = term_p_35;
        s_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_35, k_48);
        t = i_14(s_83, k_48, t);
        LocalPopChoice(s_72);
      }
    else
      {
        t = r_72;
        t = (ATerm) ATempty;
      }
  }
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_83, l_48);
  t = conc_0_0(t);
  n_83 = t;
  t = term_p_35;
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, k_48, n_83);
  t = lookup_table_0_1(p_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(k_48, n_83, q_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, k_48, n_83);
  return(t);
}
static ATerm o_29 (ATerm t)
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
static ATerm p_29 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  v_83 = t;
  t = term_z_35;
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, v_83);
  t = n_14(w_83, v_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_83);
  return(t);
}
static ATerm q_29 (ATerm t)
{
  t = term_t_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_29, p_29, q_29, t);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm y_83 = NULL;
  y_83 = t;
  if(match_string(t, "-i"))
    {
      t = y_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_83;
    }
  return(t);
}
static ATerm b_30 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  z_83 = t;
  t = term_u_54;
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_54, z_83);
  t = n_14(a_84, z_83, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_83);
  return(t);
}
static ATerm e_30 (ATerm t)
{
  t = term_u_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_29, b_30, e_30, t);
  return(t);
}
static ATerm i_30 (ATerm t)
{
  ATerm m_84 = NULL;
  m_84 = t;
  if(match_string(t, "-I"))
    {
      t = m_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = m_84;
    }
  return(t);
}
static ATerm j_30 (ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
  r_84 = t;
  t = term_x_59;
  s_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_84), term_x_59);
  t_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_59, (ATerm) ATinsert(ATinsert(ATempty, r_84), term_x_59));
  t = f_14(s_84, t_84, t);
  t = term_s_36;
  return(t);
}
static ATerm k_30 (ATerm t)
{
  t = term_v_72;
  return(t);
}
static ATerm l_30 (ATerm t)
{
  ATerm u_84 = NULL;
  u_84 = t;
  if(match_string(t, "--main"))
    {
      t = u_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = u_84;
    }
  return(t);
}
static ATerm v_30 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  w_84 = t;
  t = term_t_57;
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_57, w_84);
  t = n_14(x_84, w_84, t);
  t = term_s_36;
  return(t);
}
static ATerm w_30 (ATerm t)
{
  t = term_x_72;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  ATerm y_84 = NULL;
  y_84 = t;
  if(match_string(t, "--library"))
    {
      t = y_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = y_84;
    }
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL;
  t = term_y_37;
  z_84 = t;
  t = term_s_36;
  a_85 = t;
  t = term_y_72;
  t = n_14(z_84, a_85, t);
  t = term_s_36;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  t = term_z_72;
  return(t);
}
static ATerm c_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
  b_85 = t;
  t = term_q_37;
  c_85 = t;
  t = (ATerm) ATinsert(ATempty, b_85);
  d_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(ATempty, b_85));
  t = f_14(c_85, d_85, t);
  t = term_s_36;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  t = term_c_73;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  t = term_h_36;
  j_85 = t;
  t = (ATerm) ATinsert(ATempty, i_85);
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATempty, i_85));
  t = d_14(j_85, k_85, t);
  t = term_s_36;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm l_85 = NULL,n_85 = NULL,o_85 = NULL;
  l_85 = t;
  t = term_b_36;
  n_85 = t;
  t = (ATerm) ATinsert(ATempty, l_85);
  o_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATempty, l_85));
  t = d_14(n_85, o_85, t);
  t = term_s_36;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = term_f_73;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL;
  t = term_k_36;
  p_85 = t;
  t = term_s_36;
  q_85 = t;
  t = term_j_73;
  t = n_14(p_85, q_85, t);
  t = term_s_36;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  t = term_k_73;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  t = term_p_59;
  r_85 = t;
  t = term_s_36;
  s_85 = t;
  t = term_l_73;
  t = n_14(r_85, s_85, t);
  t = term_s_36;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_n_73;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_31 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL;
  t = term_d_55;
  t_85 = t;
  t = term_s_36;
  u_85 = t;
  t = term_o_73;
  t = n_14(t_85, u_85, t);
  t = term_s_36;
  return(t);
}
static ATerm v_31 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,z_85 = NULL;
  v_85 = t;
  t = SSL_string_to_int(v_85);
  w_85 = t;
  t = term_l_40;
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_40, w_85);
  t = n_14(z_85, w_85, t);
  t = term_s_36;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  t = term_q_73;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
  a_86 = t;
  t = SSL_string_to_int(a_86);
  b_86 = t;
  t = term_q_40;
  c_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_40, b_86);
  t = n_14(c_86, b_86, t);
  t = term_s_36;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  t = term_r_73;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  t = term_h_43;
  d_86 = t;
  t = term_s_36;
  e_86 = t;
  t = term_s_73;
  t = e_14(d_86, e_86, t);
  t = term_s_36;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  t = term_t_73;
  return(t);
}
static ATerm k_32 (ATerm t)
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
static ATerm m_32 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  t = term_u_73;
  g_86 = t;
  t = term_s_36;
  h_86 = t;
  t = term_w_73;
  t = n_14(g_86, h_86, t);
  t = term_s_36;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_y_73;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_32 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  t = term_z_73;
  i_86 = t;
  t = term_s_36;
  j_86 = t;
  t = term_b_74;
  t = n_14(i_86, j_86, t);
  t = term_s_36;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  t = term_c_74;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  ATerm k_86 = NULL;
  k_86 = t;
  if(match_string(t, "-v"))
    {
      t = k_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = k_86;
    }
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL;
  t = term_e_74;
  l_86 = t;
  t = term_s_36;
  m_86 = t;
  t = term_j_74;
  t = n_14(l_86, m_86, t);
  t = term_s_36;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_k_74;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  if(match_string(t, "--warning"))
    {
      t = n_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = n_86;
    }
  return(t);
}
static ATerm w_32 (ATerm t)
{
  ATerm o_86 = NULL;
  o_86 = t;
  {
    ATerm m_74 = t;
    int n_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_86 = NULL,q_86 = NULL,t_86 = NULL,u_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,c_19 = NULL;
        t = term_p_35;
        t_86 = t;
        t = term_x_54;
        u_86 = t;
        t = term_y_54;
        t = i_14(t_86, u_86, t);
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
        c_19 = t;
        t = SSLsetAnnotations(c_19, x_86);
        t = term_x_54;
        p_86 = t;
        t = (ATerm) ATinsert(ATempty, o_86);
        q_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_54, (ATerm) ATinsert(ATempty, o_86));
        t = n_14(p_86, q_86, t);
        LocalPopChoice(n_74);
      }
    else
      {
        t = m_74;
        {
          ATerm b_87 = NULL,d_87 = NULL;
          t = term_x_54;
          b_87 = t;
          t = (ATerm) ATinsert(ATempty, o_86);
          d_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_54, (ATerm) ATinsert(ATempty, o_86));
          t = d_14(b_87, d_87, t);
        }
      }
  }
  t = term_s_36;
  return(t);
}
static ATerm x_32 (ATerm t)
{
  t = term_q_74;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,i_87 = NULL;
  e_87 = t;
  t = term_s_55;
  f_87 = t;
  t = term_r_38;
  i_87 = t;
  t = term_t_74;
  t = n_14(f_87, i_87, t);
  t = e_87;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_s_55;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_33 (ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL,n_87 = NULL;
  j_87 = t;
  t = term_v_55;
  k_87 = t;
  t = term_k_35;
  n_87 = t;
  t = term_w_74;
  t = n_14(k_87, n_87, t);
  t = j_87;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_v_55;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL;
  t = term_l_60;
  o_87 = t;
  t = term_s_36;
  p_87 = t;
  t = term_x_74;
  t = n_14(o_87, p_87, t);
  t = term_s_36;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_z_74;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm a_75 = t;
  int c_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_75);
    }
  else
    {
      t = a_75;
      {
        ATerm i_75 = t;
        int j_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(j_75);
          }
        else
          {
            t = i_75;
            {
              ATerm n_75 = t;
              int o_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(i_30, j_30, k_30, t);
                  LocalPopChoice(o_75);
                }
              else
                {
                  t = n_75;
                  {
                    ATerm p_75 = t;
                    int q_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(l_30, v_30, w_30, t);
                        LocalPopChoice(q_75);
                      }
                    else
                      {
                        t = p_75;
                        {
                          ATerm r_75 = t;
                          int s_75 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(y_30, a_31, b_31, t);
                              LocalPopChoice(s_75);
                            }
                          else
                            {
                              t = r_75;
                              {
                                ATerm u_75 = t;
                                int v_75 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(c_31, d_31, e_31, t);
                                    LocalPopChoice(v_75);
                                  }
                                else
                                  {
                                    t = u_75;
                                    {
                                      ATerm w_75 = t;
                                      int c_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(f_31, h_31, i_31, t);
                                          LocalPopChoice(c_76);
                                        }
                                      else
                                        {
                                          t = w_75;
                                          {
                                            ATerm e_76 = t;
                                            int h_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(j_31, k_31, l_31, t);
                                                LocalPopChoice(h_76);
                                              }
                                            else
                                              {
                                                t = e_76;
                                                {
                                                  ATerm o_76 = t;
                                                  int q_76 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(m_31, n_31, o_31, t);
                                                      LocalPopChoice(q_76);
                                                    }
                                                  else
                                                    {
                                                      t = o_76;
                                                      {
                                                        ATerm u_76 = t;
                                                        int b_77 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(p_31, r_31, s_31, t);
                                                            LocalPopChoice(b_77);
                                                          }
                                                        else
                                                          {
                                                            t = u_76;
                                                            {
                                                              ATerm d_77 = t;
                                                              int h_77 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(t_31, u_31, v_31, t);
                                                                  LocalPopChoice(h_77);
                                                                }
                                                              else
                                                                {
                                                                  t = d_77;
                                                                  {
                                                                    ATerm m_77 = t;
                                                                    int n_77 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(w_31, x_31, y_31, t);
                                                                        LocalPopChoice(n_77);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_77;
                                                                        {
                                                                          ATerm o_77 = t;
                                                                          int p_77 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(z_31, a_32, b_32, t);
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
                                                                                    t = Option_3_0(c_32, g_32, j_32, t);
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
                                                                                          t = verbose_option_0_0(t);
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
                                                                                                t = Option_3_0(k_32, m_32, n_32, t);
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
                                                                                                      t = Option_3_0(o_32, p_32, q_32, t);
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
                                                                                                            t = Option_3_0(s_32, t_32, u_32, t);
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
                                                                                                                  t = ArgOption_3_0(v_32, w_32, x_32, t);
                                                                                                                  LocalPopChoice(b_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_78;
                                                                                                                  {
                                                                                                                    ATerm c_78 = t;
                                                                                                                    int g_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(z_32, a_33, b_33, t);
                                                                                                                        LocalPopChoice(g_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_78;
                                                                                                                        {
                                                                                                                          ATerm h_78 = t;
                                                                                                                          int i_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(c_33, d_33, f_33, t);
                                                                                                                              LocalPopChoice(i_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_78;
                                                                                                                              t = Option_3_0(g_33, i_33, j_33, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm g_14 (ATerm k_56, ATerm l_56, ATerm t)
{
  ATerm q_87 = NULL;
  t = SSL_hashtable_remove(l_56, k_56);
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_87);
  return(t);
}
static ATerm h_14 (ATerm p_56, ATerm t)
{
  ATerm r_87 = NULL;
  t = SSL_hashtable_destroy(p_56);
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL;
  s_87 = t;
  t = table_hashtable_0_0(t);
  t_87 = t;
  t = lookup_table_0_1(s_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_14(v_87, t);
  t = t_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_14(s_87, u_87, t);
  t = s_87;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_79), term_e_66), term_h_79), term_e_79), term_c_79), term_e_66), term_b_79), term_a_79), term_z_78), term_y_78), term_w_78), term_u_78), term_p_78), term_n_78), term_k_78);
  return(t);
}
ATerm map_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  static ATerm k_88 (ATerm t)
  {
    ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
    h_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_88;
      }
    else
      {
        ATerm n_43 = NULL,t_43 = NULL,z_43 = NULL,k_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_88 = ATgetFirst((ATermList) t);
            j_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_88);
        n_43 = t;
        t = i_88;
        t = r_91(t);
        t_43 = t;
        t = j_88;
        t = k_88(t);
        z_43 = t;
        t = (ATerm) ATinsert(CheckATermList(z_43), t_43);
        k_19 = t;
        t = SSLsetAnnotations(k_19, n_43);
      }
    return(t);
  }
  t = k_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_88 = ATgetFirst((ATermList) t);
      o_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_88 = NULL,t_88 = NULL;
        static ATerm k_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_88)), not_null(t_88));
          return(t);
        }
        t = o_88;
        t = k_0(t);
        if(((s_88 != NULL) && (s_88 != t)))
          _fail(t);
        else
          s_88 = t;
        t = n_88;
        t = i_0(t);
        if(((t_88 != NULL) && (t_88 != t)))
          _fail(t);
        else
          t_88 = t;
        t = o_88;
        t = reverse_acc_2_0(i_0, k_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_36;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_88 = NULL;
  t = term_s_36;
  t = g_0(t);
  u_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_79), u_88), term_u_79), term_e_66), term_t_79), term_e_66), term_p_79), term_o_79), term_e_66), term_m_79);
  return(t);
}
static ATerm n_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_33 (ATerm t)
{
  ATerm n_89 = NULL;
  n_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_89), term_w_79);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  ATerm x_79 = t;
  int y_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_89 = NULL,c_89 = NULL;
      t = term_p_35;
      b_89 = t;
      t = term_b_80;
      c_89 = t;
      t = term_g_80;
      t = i_14(b_89, c_89, t);
      y_88 = t;
      LocalPopChoice(y_79);
    }
  else
    {
      t = x_79;
      {
        static ATerm l_33 (ATerm t)
        {
          ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,m_19 = NULL;
          h_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              g_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_89);
          f_89 = t;
          t = g_89;
          if(((y_88 != NULL) && (y_88 != t)))
            _fail(t);
          else
            y_88 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_89);
          m_19 = t;
          t = SSLsetAnnotations(m_19, f_89);
          return(t);
        }
        t = fetch_1_0(l_33, t);
      }
    }
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_33 (ATerm t)
        {
          t = not_null(y_88);
          return(t);
        }
        t = short_description_1_0(m_33, t);
        t = echo_0_0(t);
        LocalPopChoice(i_80);
      }
    else
      {
        t = h_80;
      }
  }
  t = term_k_80;
  t = echo_0_0(t);
  t = term_r_71;
  z_88 = t;
  t = term_w_71;
  a_89 = t;
  t = term_l_80;
  t = i_14(z_88, a_89, t);
  t = reverse_acc_2_0(_id, n_33, t);
  t = map_1_0(o_33, t);
  {
    ATerm m_80 = t;
    int n_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_89 = NULL;
        static ATerm p_33 (ATerm t)
        {
          t = not_null(y_88);
          return(t);
        }
        t = long_description_1_0(p_33, t);
        o_89 = t;
        t = (ATerm) ATinsert(CheckATermList(o_89), term_e_66);
        t = echo_0_0(t);
        LocalPopChoice(n_80);
      }
    else
      {
        t = m_80;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  static ATerm v_90 (ATerm t)
  {
    ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
    s_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_90 = ATgetFirst((ATermList) t);
        u_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_80 = t;
      int q_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_44 = NULL,t_44 = NULL,o_19 = NULL;
          t = SSLgetAnnotations(s_90);
          m_44 = t;
          t = t_90;
          t = b_92(t);
          t_44 = t;
          t = (ATerm) ATinsert(CheckATermList(u_90), t_44);
          o_19 = t;
          t = SSLsetAnnotations(o_19, m_44);
          LocalPopChoice(q_80);
        }
      else
        {
          t = o_80;
          {
            ATerm i_45 = NULL,p_45 = NULL,p_19 = NULL;
            t = SSLgetAnnotations(s_90);
            i_45 = t;
            t = u_90;
            t = v_90(t);
            p_45 = t;
            t = (ATerm) ATinsert(CheckATermList(p_45), t_90);
            p_19 = t;
            t = SSLsetAnnotations(p_19, i_45);
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
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  {
    ATerm v_80 = t;
    int x_80 = stack_ptr;
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
                ATerm y_80 = ATgetFirst((ATermList) t);
                ATerm a_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_90;
          }
        LocalPopChoice(x_80);
      }
    else
      {
        t = v_80;
        t = (ATerm) ATinsert(ATempty, z_90);
      }
  }
  a_91 = t;
  t = term_w_36;
  b_91 = t;
  t = SSL_printnl(b_91, a_91);
  t = z_90;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_91 = NULL,j_91 = NULL;
  t = term_p_35;
  h_91 = t;
  t = term_b_80;
  j_91 = t;
  t = term_g_80;
  t = i_14(h_91, j_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_33 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  t = term_b_81;
  k_91 = t;
  t = term_s_36;
  l_91 = t;
  t = term_c_81;
  t = n_14(k_91, l_91, t);
  return(t);
}
static ATerm u_33 (ATerm t)
{
  t = term_d_81;
  return(t);
}
static ATerm x_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm m_91 = NULL,q_91 = NULL,t_91 = NULL,u_91 = NULL;
  t = term_b_81;
  t_91 = t;
  t = term_s_36;
  u_91 = t;
  t = term_c_81;
  t = n_14(t_91, u_91, t);
  t = term_e_74;
  m_91 = t;
  t = term_s_36;
  q_91 = t;
  t = term_j_74;
  t = n_14(m_91, q_91, t);
  t = term_f_81;
  return(t);
}
static ATerm c_34 (ATerm t)
{
  t = term_i_81;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_81 = t;
  int k_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_33, t_33, u_33, t);
      LocalPopChoice(k_81);
    }
  else
    {
      t = j_81;
      t = Option_3_0(x_33, y_33, c_34, t);
    }
  return(t);
}
static ATerm j_14 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL,e_92 = NULL,k_92 = NULL;
  y_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
  {
    ATerm l_81 = t;
    int n_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_81 = ATgetArgument(t, 0);
            ATerm q_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
        t = i_14(y_52, z_52, t);
        LocalPopChoice(n_81);
      }
    else
      {
        t = l_81;
        t = (ATerm) ATempty;
      }
  }
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_52, z_52, (ATerm) ATinsert(CheckATermList(z_91), x_52));
  t = lookup_table_0_1(y_52, t);
  k_92 = t;
  t = (ATerm) ATinsert(CheckATermList(z_91), x_52);
  a_92 = t;
  t = k_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(z_52, a_92, e_92, t);
  t = y_91;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_92 = NULL,x_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_92 = NULL,b_93 = NULL,g_93 = NULL;
      t = term_s_36;
      t = e_0(t);
      z_92 = t;
      t = term_r_71;
      b_93 = t;
      t = term_w_71;
      g_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_71, term_w_71, z_92);
      t = j_14(b_93, g_93, z_92, t);
      _fail(t);
    }
  else
    {
      ATerm n_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_92 = ATgetFirst((ATermList) t);
          x_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_92;
      t = c_0(t);
      t = term_s_36;
      t = d_0(t);
      n_93 = t;
      t = (ATerm) ATinsert(CheckATermList(x_92), n_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,u_93 = NULL,u_19 = NULL;
  u_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_93 = ATgetFirst((ATermList) t);
      r_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_93);
  p_93 = t;
  t = q_93;
  t = e_62(t);
  s_93 = t;
  t = r_93;
  t = f_62(t);
  t_93 = t;
  t = (ATerm) ATinsert(CheckATermList(t_93), s_93);
  u_19 = t;
  t = SSLsetAnnotations(u_19, p_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_111 (ATerm), ATerm t)
{
  ATerm c_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,l_94 = NULL,m_94 = NULL,x_19 = NULL;
  c_94 = t;
  {
    ATerm x_81 = t;
    int z_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_82;
        t = s_111(t);
        LocalPopChoice(z_81);
      }
    else
      {
        t = x_81;
      }
  }
  t = c_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_94 = ATgetFirst((ATermList) t);
      j_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_94);
  h_94 = t;
  t = term_b_80;
  m_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_80, i_94);
  t = n_14(m_94, i_94, t);
  t = j_94;
  {
    static ATerm e_95 (ATerm t)
    {
      ATerm e_82 = t;
      int f_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_82 = t;
          int h_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_94 = NULL;
              r_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_94;
              LocalPopChoice(h_82);
            }
          else
            {
              t = g_82;
              t = s_111(t);
              t = Cons_2_0(_id, e_95, t);
            }
          LocalPopChoice(f_82);
        }
      else
        {
          t = e_82;
          {
            ATerm v_94 = NULL,a_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_94 = ATgetFirst((ATermList) t);
                a_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_95), (ATerm) ATmakeAppl(sym_Undefined_1, v_94));
          }
        }
      return(t);
    }
    t = e_95(t);
  }
  l_94 = t;
  t = (ATerm) ATinsert(CheckATermList(l_94), (ATerm) ATmakeAppl(sym_Program_1, i_94));
  x_19 = t;
  t = SSLsetAnnotations(x_19, h_94);
  return(t);
}
static ATerm i_34 (ATerm t)
{
  ATerm i_96 = NULL;
  i_96 = t;
  if(match_string(t, "--help"))
    {
      t = i_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_96;
        }
    }
  return(t);
}
static ATerm m_34 (ATerm t)
{
  ATerm j_96 = NULL,n_96 = NULL;
  t = term_u_73;
  j_96 = t;
  t = term_s_36;
  n_96 = t;
  t = term_w_73;
  t = n_14(j_96, n_96, t);
  t = term_i_82;
  return(t);
}
static ATerm q_34 (ATerm t)
{
  t = term_j_82;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,v_95 = NULL,a_96 = NULL,b_96 = NULL,h_96 = NULL;
  n_95 = t;
  t = term_r_71;
  o_95 = t;
  t = term_k_82;
  t = lookup_table_0_1(o_95, t);
  h_96 = t;
  t = term_w_71;
  v_95 = t;
  t = (ATerm) ATempty;
  a_96 = t;
  t = h_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(v_95, a_96, b_96, t);
  t = n_95;
  {
    static ATerm h_34 (ATerm t)
    {
      ATerm l_82 = t;
      int m_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_111(t);
          LocalPopChoice(m_82);
        }
      else
        {
          t = l_82;
          {
            ATerm n_82 = t;
            int o_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_34, m_34, q_34, t);
                LocalPopChoice(o_82);
              }
            else
              {
                t = n_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_34, t);
  }
  {
    ATerm p_82 = t;
    int q_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_97 = NULL;
        d_97 = t;
        {
          ATerm r_82 = t;
          int s_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_46 = NULL;
              t = d_97;
              {
                ATerm t_82 = t;
                int a_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_46 = NULL,e_46 = NULL;
                    t = term_p_35;
                    c_46 = t;
                    t = term_u_73;
                    e_46 = t;
                    t = term_b_83;
                    t = i_14(c_46, e_46, t);
                    LocalPopChoice(a_83);
                  }
                else
                  {
                    t = t_82;
                    t = fetch_1_0(s_34, t);
                  }
              }
              t = d_97;
              t = default_system_usage_0_0(t);
              t = term_k_35;
              b_46 = t;
              t = SSL_exit(b_46);
              LocalPopChoice(s_82);
            }
          else
            {
              t = r_82;
              {
                ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
                t = term_p_35;
                o_46 = t;
                t = term_b_81;
                p_46 = t;
                t = term_c_83;
                t = i_14(o_46, p_46, t);
                t = d_97;
                t = default_system_about_0_0(t);
                t = term_k_35;
                n_46 = t;
                t = SSL_exit(n_46);
              }
            }
        }
        LocalPopChoice(q_82);
      }
    else
      {
        t = p_82;
        {
          ATerm f_83 = t;
          int j_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_97 = NULL,h_97 = NULL,i_97 = NULL;
              static ATerm t_34 (ATerm t)
              {
                ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,c_20 = NULL;
                l_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_97);
                j_97 = t;
                t = k_97;
                if(((l_95 != NULL) && (l_95 != t)))
                  _fail(t);
                else
                  l_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_97);
                c_20 = t;
                t = SSLsetAnnotations(c_20, j_97);
                return(t);
              }
              t = fetch_1_0(t_34, t);
              t = term_t_35;
              h_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_95)), term_k_83);
              i_97 = t;
              t = SSL_printnl(h_97, i_97);
              t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_95)), term_k_83));
              t = default_system_usage_0_0(t);
              t = term_r_38;
              f_97 = t;
              t = SSL_exit(f_97);
              LocalPopChoice(j_83);
            }
          else
            {
              t = f_83;
            }
        }
      }
  }
  m_95 = t;
  t = term_r_71;
  t = table_destroy_0_0(t);
  t = m_95;
  return(t);
}
static ATerm l_14 (ATerm f_56, ATerm g_56, ATerm h_56, ATerm t)
{
  ATerm x_97 = NULL;
  t = SSL_hashtable_put(h_56, f_56, g_56);
  x_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_97);
  return(t);
}
static ATerm m_14 (ATerm i_56, ATerm j_56, ATerm t)
{
  t = SSL_hashtable_get(j_56, i_56);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm z_97 = NULL;
  t = SSL_hashtable_create(n_56, o_56);
  z_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_97);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL,g_98 = NULL,n_98 = NULL;
  c_98 = t;
  t = term_m_83;
  g_98 = t;
  t = term_r_83;
  n_98 = t;
  t = c_98;
  t = new_hashtable_0_2(g_98, n_98, t);
  d_98 = t;
  t = c_98;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(c_98, d_98, e_98, t);
  t = c_98;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_98 = NULL;
  t = SSL_table_hashtable();
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_54, ATerm t)
{
  ATerm a_99 = NULL;
  t = table_hashtable_0_0(t);
  a_99 = t;
  {
    ATerm t_83 = t;
    int x_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_46 = NULL;
        t = a_99;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_14(k_54, s_46, t);
        LocalPopChoice(x_83);
      }
    else
      {
        t = t_83;
        {
          ATerm b_47 = NULL;
          t = k_54;
          t = table_create_0_0(t);
          t = a_99;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_14(k_54, b_47, t);
        }
      }
  }
  return(t);
}
static ATerm n_14 (ATerm d_48, ATerm e_48, ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL;
  t = term_p_35;
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, d_48, e_48);
  t = lookup_table_0_1(f_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(d_48, e_48, g_99, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, d_48, e_48);
  return(t);
}
static ATerm o_14 (ATerm d_37, ATerm e_37, ATerm t)
{
  t = SSL_strcat(d_37, e_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm q_99 = NULL,u_99 = NULL;
  u_99 = t;
  t = SSL_explode_string(u_99);
  {
    ATerm d_84 = t;
    int e_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_102 (ATerm t)
        {
          ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL;
          x_101 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_101 = ATgetFirst((ATermList) t);
              z_101 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm h_84 = t;
            int i_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_47 = NULL,u_47 = NULL,i_20 = NULL;
                t = SSLgetAnnotations(x_101);
                o_47 = t;
                t = z_101;
                t = c_102(t);
                u_47 = t;
                t = (ATerm) ATinsert(CheckATermList(u_47), y_101);
                i_20 = t;
                t = SSLsetAnnotations(i_20, o_47);
                LocalPopChoice(i_84);
              }
            else
              {
                t = h_84;
                {
                  ATerm p_48 = NULL,j_20 = NULL;
                  t = SSLgetAnnotations(x_101);
                  p_48 = t;
                  t = y_101;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, y_101);
                  j_20 = t;
                  t = SSLsetAnnotations(j_20, p_48);
                }
              }
          }
          return(t);
        }
        t = c_102(t);
        LocalPopChoice(e_84);
      }
    else
      {
        t = d_84;
        t = (ATerm) ATempty;
      }
  }
  q_99 = t;
  t = SSL_implode_string(q_99);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm init_sc_config_0_0 (ATerm t)
{
  ATerm g_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,n_102 = NULL,p_102 = NULL,q_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,f_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL,v_103 = NULL,x_103 = NULL,y_103 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
  g_102 = t;
  t = term_x_65;
  j_104 = t;
  t = term_j_84;
  k_104 = t;
  t = term_k_84;
  t = n_14(j_104, k_104, t);
  t = term_q_35;
  h_104 = t;
  t = term_r_38;
  i_104 = t;
  t = term_l_84;
  t = n_14(h_104, i_104, t);
  t = term_l_40;
  f_104 = t;
  t = term_k_35;
  g_104 = t;
  t = term_n_84;
  t = n_14(f_104, g_104, t);
  t = term_q_40;
  d_104 = t;
  t = term_m_42;
  e_104 = t;
  t = term_o_84;
  t = n_14(d_104, e_104, t);
  t = term_x_59;
  b_104 = t;
  t = (ATerm) ATempty;
  c_104 = t;
  t = term_p_84;
  t = n_14(b_104, c_104, t);
  t = term_q_37;
  x_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_84), term_q_84);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(ATinsert(ATempty, term_v_84), term_q_84));
  t = n_14(x_103, y_103, t);
  t = term_e_85;
  t = xtc_find_path_0_0(t);
  f_103 = t;
  t = term_f_85;
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_103, term_f_85);
  t = o_14(f_103, v_103, t);
  p_102 = t;
  t = term_e_85;
  t = xtc_find_path_0_0(t);
  v_102 = t;
  t = term_f_85;
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_102, term_f_85);
  t = o_14(v_102, u_103, t);
  q_102 = t;
  t = term_g_85;
  t = xtc_find_path_0_0(t);
  u_102 = t;
  t = term_f_85;
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_102, term_f_85);
  t = o_14(u_102, t_103, t);
  t_102 = t;
  t = term_h_36;
  o_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_102), term_x_59), q_102), term_x_59), p_102), term_x_59);
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_102), term_x_59), q_102), term_x_59), p_102), term_x_59));
  t = n_14(o_103, s_103, t);
  t = term_e_85;
  t = xtc_find_path_0_0(t);
  n_102 = t;
  t = term_h_85;
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_102, term_h_85);
  t = o_14(n_102, n_103, t);
  i_102 = t;
  t = term_g_85;
  t = xtc_find_path_0_0(t);
  k_102 = t;
  t = term_m_85;
  m_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_102, term_m_85);
  t = o_14(k_102, m_103, t);
  j_102 = t;
  t = term_b_36;
  k_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_86), term_s_86), j_102), term_x_85), term_r_86), term_y_85), i_102), term_x_85);
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_86), term_s_86), j_102), term_x_85), term_r_86), term_y_85), i_102), term_x_85));
  t = n_14(k_103, l_103, t);
  t = term_x_54;
  i_103 = t;
  t = (ATerm) ATinsert(ATempty, term_w_86);
  j_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_54, (ATerm) ATinsert(ATempty, term_w_86));
  t = n_14(i_103, j_103, t);
  t = g_102;
  return(t);
}
static ATerm z_34 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL;
  c_106 = t;
  t = term_p_35;
  d_106 = t;
  t = term_u_54;
  e_106 = t;
  t = term_c_87;
  t = i_14(d_106, e_106, t);
  t = debug_1_0(c_35, t);
  t = c_106;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_g_87;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm h_87 = t;
    int l_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_104 = NULL,q_104 = NULL,r_104 = NULL,v_104 = NULL,y_104 = NULL;
        t = term_p_35;
        v_104 = t;
        t = term_z_73;
        y_104 = t;
        t = term_m_87;
        t = i_14(v_104, y_104, t);
        t = term_w_87;
        t = xtc_find_0_0(t);
        n_104 = t;
        t = term_w_36;
        r_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_104, term_w_36);
        t = r_13(n_104, r_104, t);
        t = term_k_35;
        q_104 = t;
        t = SSL_exit(q_104);
        LocalPopChoice(l_87);
      }
    else
      {
        t = h_87;
      }
  }
  {
    ATerm x_87 = t;
    int y_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_105 = NULL,d_105 = NULL,e_105 = NULL;
        t = term_p_35;
        d_105 = t;
        t = term_e_74;
        e_105 = t;
        t = term_z_87;
        t = i_14(d_105, e_105, t);
        t = strc_version_0_0(t);
        t = term_k_35;
        b_105 = t;
        t = SSL_exit(b_105);
        LocalPopChoice(y_87);
      }
    else
      {
        t = x_87;
      }
  }
  {
    ATerm a_88 = t;
    int b_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_105 = NULL,r_105 = NULL,u_105 = NULL;
        n_105 = t;
        t = term_p_35;
        r_105 = t;
        t = term_u_54;
        u_105 = t;
        t = term_c_87;
        t = i_14(r_105, u_105, t);
        t = n_105;
        LocalPopChoice(b_88);
      }
    else
      {
        t = a_88;
        {
          ATerm w_105 = NULL,x_105 = NULL,b_106 = NULL;
          t = term_t_35;
          x_105 = t;
          t = (ATerm) ATinsert(ATempty, term_c_88);
          b_106 = t;
          t = SSL_printnl(x_105, b_106);
          t = term_r_38;
          w_105 = t;
          t = SSL_exit(w_105);
          t = (ATerm) ATinsert(ATempty, term_c_88);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(z_34, t);
  return(t);
}
static ATerm d_35 (ATerm t)
{
  t = if_verbose1_1_0(g_35, t);
  return(t);
}
static ATerm e_35 (ATerm t)
{
  t = xtc_temp_files_1_0(h_35, t);
  return(t);
}
static ATerm g_35 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,n_106 = NULL;
  i_106 = t;
  t = term_t_35;
  j_106 = t;
  t = (ATerm) ATinsert(CheckATermList(i_106), term_d_88);
  n_106 = t;
  t = SSL_printnl(j_106, n_106);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(CheckATermList(i_106), term_d_88));
  return(t);
}
static ATerm h_35 (ATerm t)
{
  ATerm e_88 = t;
  int f_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL;
      t = term_p_35;
      p_106 = t;
      t = term_u_54;
      q_106 = t;
      t = term_c_87;
      t = i_14(p_106, q_106, t);
      o_106 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_106);
      LocalPopChoice(f_88);
    }
  else
    {
      t = e_88;
      t = term_m_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm i_35 (ATerm t)
{
  ATerm t_106 = NULL,u_106 = NULL,x_106 = NULL;
  t = run_time_0_0(t);
  t_106 = t;
  t = term_t_35;
  u_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_88), t_106), term_g_88);
  x_106 = t;
  t = SSL_printnl(u_106, x_106);
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_88), t_106), term_g_88));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm m_88 = t;
  int p_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(d_35, e_35, t);
      t = if_verbose2_1_0(i_35, t);
      t = term_k_35;
      h_106 = t;
      t = SSL_exit(h_106);
      LocalPopChoice(p_88);
    }
  else
    {
      t = m_88;
      {
        ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL;
        t = run_time_0_0(t);
        f_107 = t;
        t = term_t_35;
        h_107 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_88), f_107), term_q_88);
        i_107 = t;
        t = SSL_printnl(h_107, i_107);
        t = term_r_38;
        g_107 = t;
        t = SSL_exit(g_107);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
