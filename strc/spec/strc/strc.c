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
ATerm term_c_89;
ATerm term_x_88;
ATerm term_t_88;
ATerm term_o_88;
ATerm term_n_88;
ATerm term_g_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_l_87;
ATerm term_k_87;
ATerm term_g_87;
ATerm term_f_87;
ATerm term_b_87;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_r_86;
ATerm term_q_86;
ATerm term_x_85;
ATerm term_w_85;
ATerm term_l_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_u_84;
ATerm term_r_84;
ATerm term_q_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_e_84;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_t_82;
ATerm term_s_82;
ATerm term_r_82;
ATerm term_m_82;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_u_80;
ATerm term_r_80;
ATerm term_o_80;
ATerm term_m_80;
ATerm term_f_80;
ATerm term_c_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_z_79;
ATerm term_y_79;
ATerm term_w_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_p_79;
ATerm term_m_79;
ATerm term_k_79;
ATerm term_i_79;
ATerm term_g_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_z_78;
ATerm term_x_78;
ATerm term_l_75;
ATerm term_h_75;
ATerm term_f_75;
ATerm term_d_75;
ATerm term_b_75;
ATerm term_v_74;
ATerm term_t_74;
ATerm term_q_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_k_74;
ATerm term_i_74;
ATerm term_h_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_a_73;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_o_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_d_71;
ATerm term_b_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_v_69;
ATerm term_s_69;
ATerm term_r_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_u_66;
ATerm term_t_66;
ATerm term_q_66;
ATerm term_m_66;
ATerm term_l_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_h_66;
ATerm term_g_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_c_66;
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
ATerm term_c_63;
ATerm term_h_62;
ATerm term_n_61;
ATerm term_h_61;
ATerm term_e_61;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_l_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_d_60;
ATerm term_c_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_u_59;
ATerm term_a_59;
ATerm term_c_58;
ATerm term_b_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_f_57;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_l_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_x_55;
ATerm term_l_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_c_55;
ATerm term_w_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
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
ATerm term_h_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_f_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_v_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_i_50;
ATerm term_z_49;
ATerm term_x_49;
ATerm term_u_49;
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
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_z_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_p_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_z_43;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_g_43;
ATerm term_a_43;
ATerm term_v_42;
ATerm term_q_42;
ATerm term_n_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_w_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_x_39;
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
ATerm term_d_39;
ATerm term_c_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_o_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_d_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_f_36);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_m_36);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_o_36);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_f_38);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_37);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_b_40);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_d_40);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_q_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_l_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_47, term_v_38, term_v_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_47, term_w_35, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_48, term_j_39, term_c_48);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_48, term_n_42, term_n_48);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_48, term_q_48, term_s_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_48, term_v_48, term_w_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_48, term_c_49, term_d_49);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_49, term_g_49, term_h_49);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_49, term_k_49, term_l_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_49, term_o_49, term_p_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_s_49, term_u_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_49, term_j_42, term_i_50);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_50, term_p_50, term_r_50);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_50, term_v_50, term_x_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_50, term_b_51, term_c_51);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_51, term_j_51, term_k_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_n_51, term_r_51);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_51, term_u_51, term_v_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_c_52, term_f_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_i_52, term_j_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_n_52, term_r_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_v_52, term_w_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_c_53, term_f_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_53, term_l_53, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_j_45, term_p_53);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_53, term_s_53, term_t_53);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_53, term_z_53, term_a_54);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_54, term_d_54, term_g_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_f_55);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_l_55);
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_l_56);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_b_58);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym__2, term_s_57, term_n_57);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_x_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_c_60);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_l_60);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_f_66);
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_u_70);
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(sym__2, term_k_70, term_a_71);
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_k_70, term_l_70);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_o_35);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_35);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(sym__2, term_l_72, term_x_36);
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(sym__2, term_f_38, term_x_36);
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(sym__2, term_o_36, term_x_36);
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(sym__2, term_x_59, term_x_36);
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(sym__2, term_l_55, term_x_36);
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym__2, term_l_43, term_x_36);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(sym__2, term_d_74, term_x_36);
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(sym__2, term_k_74, term_x_36);
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(sym__2, term_q_74, term_x_36);
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(sym__2, term_l_56, term_v_38);
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(sym__2, term_o_56, term_o_35);
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(sym__2, term_l_60, term_x_36);
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_m_80);
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(sym__2, term_c_72, term_d_72);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(sym__2, term_j_81, term_x_36);
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_82));
  term_t_82 = (ATerm) ATmakeAppl(sym__3, term_c_72, term_d_72, (ATerm) ATempty);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_d_74);
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_j_81);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(sym__2, term_f_66, term_q_84);
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(sym__2, term_u_35, term_v_38);
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(sym__2, term_q_40, term_o_35);
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(sym__2, term_u_40, term_n_42);
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__2, term_c_60, (ATerm) ATempty);
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_f_87));
  term_f_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_c_55);
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_k_74);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_q_74);
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm h_106 (ATerm), ATerm t);
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
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm i_107 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm l_107 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm n_107 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
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
static ATerm i_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm save_as_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t);
static ATerm h_13 (ATerm a_49, ATerm b_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_107 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm i_116 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t);
ATerm foldr_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t);
static ATerm b_20 (ATerm t);
static ATerm h_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm x_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm m_107 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm k_91 (ATerm), ATerm t);
static ATerm d_21 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm i_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm e_13 (ATerm g_21, ATerm h_21, ATerm t);
static ATerm f_13 (ATerm b_23, ATerm c_23, ATerm t);
static ATerm g_13 (ATerm p_90 (ATerm), ATerm c_194, ATerm l_23, ATerm t);
static ATerm j_13 (ATerm z_103 (ATerm), ATerm u_42, ATerm s_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm j_115 (ATerm), ATerm t);
static ATerm p_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm z_21 (ATerm t);
static ATerm b_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm c_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm f_82 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm d_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm i_106 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm k_13 (ATerm c_21, ATerm t);
static ATerm u_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm a_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm j_14 (ATerm r_54, ATerm s_54, ATerm t);
static ATerm l_13 (ATerm d_53, ATerm e_53, ATerm t);
ATerm end_scope_1_0 (ATerm w_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_103 (ATerm), ATerm t);
static ATerm e_27 (ATerm t);
static ATerm g_27 (ATerm t);
static ATerm i_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm u_115 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm g_106 (ATerm), ATerm t);
static ATerm n_13 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm p_13 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm q_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm n_90 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm r_13 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm s_13 (ATerm t_55, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm k_106 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm j_106 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm l_106 (ATerm), ATerm t);
static ATerm v_13 (ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm n_29, ATerm m_29, ATerm t);
static ATerm w_13 (ATerm j_95 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm n_27 (ATerm t);
static ATerm x_13 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t);
static ATerm y_13 (ATerm c_111 (ATerm), ATerm f_54, ATerm e_54, ATerm t);
static ATerm c_14 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm j_73 (ATerm b_73, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_13 (ATerm h_23, ATerm t);
static ATerm a_14 (ATerm m_38, ATerm n_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_75 (ATerm y_73, ATerm t);
static ATerm k_75 (ATerm e_74, ATerm f_74, ATerm g_74, ATerm t);
static ATerm m_75 (ATerm r_74, ATerm s_74, ATerm u_74, ATerm t);
static ATerm b_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_98 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm e_80 (ATerm h_79, ATerm t);
static ATerm n_28 (ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm d_14 (ATerm j_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
static ATerm v_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_14 (ATerm t_54, ATerm u_54, ATerm t);
static ATerm f_14 (ATerm g_48, ATerm h_48, ATerm t);
ATerm at_end_1_0 (ATerm p_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_83 (ATerm g_83, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_14 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm w_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_30 (ATerm t);
static ATerm h_30 (ATerm t);
static ATerm j_30 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm k_30 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
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
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm n_33 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
static ATerm h_14 (ATerm r_55, ATerm s_55, ATerm t);
static ATerm i_14 (ATerm w_55, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm r_33 (ATerm t);
static ATerm s_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm z_33 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm f_34 (ATerm t);
static ATerm k_34 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm k_14 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_110 (ATerm), ATerm t);
static ATerm p_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
ATerm parse_options_1_0 (ATerm y_110 (ATerm), ATerm t);
static ATerm m_14 (ATerm m_55, ATerm n_55, ATerm o_55, ATerm t);
static ATerm n_14 (ATerm p_55, ATerm q_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_55, ATerm v_55, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm k_54, ATerm t);
static ATerm o_14 (ATerm d_48, ATerm e_48, ATerm t);
static ATerm p_14 (ATerm d_37, ATerm e_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm e_35 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = p_97(t);
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
      t = foldr_2_0(p_97, q_97, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = q_97(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_o_35;
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
      ATerm p_35 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = term_t_35;
        l_1 = t;
        t = term_u_35;
        m_1 = t;
        t = term_v_35;
        t = j_14(l_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_w_35);
        t = geq_0_0(t);
        t = f_1;
        t = h_106(t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = term_x_35;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_z_35);
  a_2 = t;
  t = SSL_printnl(x_1, a_2);
  t = w_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_a_36;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_x_35;
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
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_t_35;
        b_2 = t;
        t = term_d_36;
        c_2 = t;
        t = term_e_36;
        t = j_14(b_2, c_2, t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = get_outfile_1_0(g_1, t);
      }
  }
  o_1 = t;
  t = term_t_35;
  s_1 = t;
  t = term_f_36;
  v_1 = t;
  t = term_g_36;
  t = j_14(s_1, v_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_d_36), o_21));
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
      t = term_i_36;
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
  t = term_x_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_k_36);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_x_35;
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
  t = term_t_35;
  r_2 = t;
  t = term_m_36;
  s_2 = t;
  t = term_n_36;
  t = j_14(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_2), term_d_36), m_21), term_o_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, n_2);
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
      t = term_i_36;
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
  t = term_x_35;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_p_36);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(k_3), term_p_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_t_35;
      i_3 = t;
      t = term_o_36;
      j_3 = t;
      t = term_s_36;
      t = j_14(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
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
  ATerm u_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(j_44, i_44);
      LocalPopChoice(w_36);
    }
  else
    {
      t = u_36;
      t = get_errno_0_0(t);
      t = term_x_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, j_44, i_44);
      t = r_13(j_44, i_44, t);
      t = SSL_remove(j_44);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  g_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = g_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_b_37;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_4, term_b_37);
        t = r_13(h_4, t_1, t);
        t = SSL_remove(h_4);
        t = term_b_37;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        {
          ATerm j_37 = t;
          int m_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = g_4;
              t = x_0(t);
              i_2 = t;
              {
                ATerm o_37 = t;
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
                        if((h_4 != t))
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
                    t = o_37;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_4, i_2);
              t = d_13(h_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(m_37);
            }
          else
            {
              t = j_37;
              t = g_4;
              t = x_0(t);
              if((h_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL;
  r_4 = t;
  t = term_p_37;
  n_4 = t;
  t = term_q_37;
  t = xtc_find_0_0(t);
  p_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_s_37);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_u_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_y_37;
  s_4 = t;
  t = w_4;
  {
    ATerm z_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL,b_5 = NULL;
        t = term_t_35;
        z_4 = t;
        t = term_f_38;
        b_5 = t;
        t = term_g_38;
        t = j_14(z_4, b_5, t);
        t = w_4;
        LocalPopChoice(b_38);
        t = (ATerm) ATinsert(ATempty, term_f_38);
      }
    else
      {
        t = z_37;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_t_35;
  x_4 = t;
  t = term_u_37;
  y_4 = t;
  t = term_h_38;
  t = j_14(x_4, y_4, t);
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
  t = term_x_35;
  v_5 = t;
  t = (ATerm) ATinsert(ATempty, term_i_38);
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
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
  e_6 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
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
        LocalPopChoice(k_38);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = j_38;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  c_6 = t;
  {
    ATerm l_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_7 = ATgetArgument(t, 0);
            {
              ATerm i_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(c_6);
              i_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_7);
              a_1 = t;
              t = SSLsetAnnotations(a_1, i_4);
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
        t = l_38;
        t = xtc_transform_term_2_0(j_6, q_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_8 = ATgetArgument(t, 0);
            {
              ATerm c_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(b_6);
              c_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_8);
              b_1 = t;
              t = SSLsetAnnotations(b_1, c_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_6;
          }
        LocalPopChoice(q_38);
        t = xtc_transform_file_2_0(s_6, pass_verbose_0_0, t);
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
static ATerm e_3 (ATerm t)
{
  ATerm x_5 = NULL,z_5 = NULL,a_6 = NULL;
  x_5 = t;
  t = term_x_35;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(x_5), term_r_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(x_5), term_r_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_6 = NULL;
  t = pass_verbose_0_0(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(k_6), term_t_38);
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
  t = (ATerm) ATinsert(CheckATermList(l_6), term_t_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_6 = NULL,p_6 = NULL;
  p_6 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_6 = ATgetArgument(t, 0);
            {
              ATerm l_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(p_6);
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, l_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_6;
          }
        LocalPopChoice(x_38);
        t = xtc_transform_file_2_0(z_3, a_4, t);
      }
    else
      {
        t = w_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(f_4, t);
  m_6 = t;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(m_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_6;
          }
        LocalPopChoice(a_39);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = z_38;
        t = xtc_transform_term_2_0(q_4, a_5, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_t_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_t_38);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = save_as_1_0(j_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_t_38);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_t_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_j_39;
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
  t = term_k_39;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_7 = NULL;
  t = pass_verbose_0_0(t);
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(u_7), term_t_38);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_t_38);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = get_outfile_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(c_3, d_3, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  t = term_x_35;
  k_9 = t;
  t = (ATerm) ATinsert(ATempty, term_o_39);
  l_9 = t;
  t = SSL_printnl(k_9, l_9);
  t = j_9;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  t = term_x_35;
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_p_39);
  o_9 = t;
  t = SSL_printnl(n_9, o_9);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(m_9), term_p_39));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_10 = NULL;
  t = pass_verbose_0_0(t);
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_10), term_t_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_t_39);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,g_9 = NULL,h_9 = NULL;
      e_9 = t;
      t = term_t_35;
      g_9 = t;
      t = term_f_38;
      h_9 = t;
      t = term_g_38;
      t = j_14(g_9, h_9, t);
      t = e_9;
      LocalPopChoice(w_39);
      {
        ATerm i_9 = NULL;
        i_9 = t;
        t = if_verbose2_1_0(e_7, t);
        {
          static ATerm i_7 (ATerm t)
          {
            ATerm q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_x_39;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_y_39);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            q_9 = t;
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,d_10 = NULL,f_10 = NULL;
                  t = term_t_35;
                  d_10 = t;
                  t = term_b_40;
                  f_10 = t;
                  t = term_c_40;
                  t = j_14(d_10, f_10, t);
                  w_9 = t;
                  t = term_t_35;
                  z_9 = t;
                  t = term_d_40;
                  b_10 = t;
                  t = term_e_40;
                  t = j_14(z_9, b_10, t);
                  y_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_9, y_9);
                  {
                    ATerm f_40 = t;
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
                        t = f_40;
                      }
                  }
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  {
                    ATerm h_10 = NULL,i_10 = NULL;
                    t = term_t_35;
                    h_10 = t;
                    t = term_b_40;
                    i_10 = t;
                    t = term_c_40;
                    t = j_14(h_10, i_10, t);
                    t = debug_1_0(l_7, t);
                    _fail(t);
                  }
                }
            }
            t = q_9;
            {
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
              ATerm g_40 = t;
              int h_40 = stack_ptr;
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
                  LocalPopChoice(h_40);
                  t = xtc_transform_file_2_0(q_7, r_7, t);
                }
              else
                {
                  t = g_40;
                  t = xtc_transform_term_2_0(t_7, w_7, t);
                }
            }
            {
              static ATerm x_7 (ATerm t)
              {
                t = get_outfile_1_0(z_7, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = copy_to_1_0(x_7, t);
            }
            r_9 = t;
            t = term_x_35;
            t_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_j_40), not_null(c_9)), term_i_40));
            u_9 = t;
            t = SSL_printnl(t_9, u_9);
            t = r_9;
            return(t);
          }
          t = profile_p__2_0(g_7, i_7, t);
        }
        t = i_9;
      }
    }
  else
    {
      t = v_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm l_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL;
        t = term_t_35;
        g_11 = t;
        t = term_q_40;
        i_11 = t;
        t = term_r_40;
        t = j_14(g_11, i_11, t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_v_38);
        t = geq_0_0(t);
        t = d_11;
        t = i_107(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = l_40;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL;
        t = m_11;
        t = m_116(t);
        p_11 = t;
        t = term_t_35;
        r_11 = t;
        t = term_u_40;
        t_11 = t;
        t = term_v_40;
        t = j_14(r_11, t_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
        t = geq_0_0(t);
        t = m_11;
        t = n_116(t);
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = m_11;
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_t_38);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm h_7 = NULL;
  t = pass_verbose_0_0(t);
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), term_t_38);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm t_8 = NULL;
  t = pass_verbose_0_0(t);
  t_8 = t;
  t = (ATerm) ATinsert(CheckATermList(t_8), term_t_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_t_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  {
    ATerm x_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_14;
        {
          ATerm k_41 = t;
          int o_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  z_6 = ATgetArgument(t, 0);
                  {
                    ATerm y_7 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(s_14);
                    y_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, z_6);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, y_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_14;
                }
              LocalPopChoice(o_41);
              t = xtc_transform_file_2_0(a_8, c_8, t);
            }
          else
            {
              t = k_41;
              t = xtc_transform_term_2_0(d_8, e_8, t);
            }
        }
        LocalPopChoice(y_40);
      }
    else
      {
        t = x_40;
        t = s_14;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  r_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(s_14);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, z_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_14;
                }
              LocalPopChoice(v_41);
              t = xtc_transform_file_2_0(f_8, g_8, t);
            }
          else
            {
              t = u_41;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  j_15 = t;
  t = term_w_41;
  h_15 = t;
  t = j_15;
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,l_15 = NULL;
        t = term_t_35;
        k_15 = t;
        t = term_f_38;
        l_15 = t;
        t = term_g_38;
        t = j_14(k_15, l_15, t);
        t = j_15;
        LocalPopChoice(a_42);
        t = (ATerm) ATinsert(ATempty, term_c_42);
      }
    else
      {
        t = z_41;
        t = (ATerm) ATempty;
      }
  }
  i_15 = t;
  t = j_15;
  t = comp_0_2(h_15, i_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
        t = term_t_35;
        s_15 = t;
        t = term_q_40;
        t_15 = t;
        t = term_r_40;
        t = j_14(s_15, t_15, t);
        r_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_15, term_j_42);
        t = geq_0_0(t);
        t = p_15;
        t = l_107(t);
        LocalPopChoice(i_42);
      }
    else
      {
        t = h_42;
        t = p_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_16 = NULL,e_16 = NULL,h_16 = NULL;
        t = term_t_35;
        e_16 = t;
        t = term_q_40;
        h_16 = t;
        t = term_r_40;
        t = j_14(e_16, h_16, t);
        d_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_16, term_n_42);
        t = geq_0_0(t);
        t = b_16;
        t = n_107(t);
        LocalPopChoice(m_42);
      }
    else
      {
        t = l_42;
        t = b_16;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,p_18 = NULL;
  l_18 = t;
  t = term_x_35;
  m_18 = t;
  t = (ATerm) ATinsert(ATempty, term_q_42);
  p_18 = t;
  t = SSL_printnl(m_18, p_18);
  t = l_18;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = if_verbose1_1_0(n_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm v_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(s_8, w_8, t);
  t = olevel_2_0(v_9, c_10, t);
  t = olevel_2_0(a_11, c_11, t);
  v_18 = t;
  {
    ATerm r_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_22 = ATgetArgument(t, 0);
            {
              ATerm t_12 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(v_18);
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_22);
              y_5 = t;
              t = SSLsetAnnotations(y_5, t_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_18;
          }
        LocalPopChoice(t_42);
        t = xtc_transform_file_2_0(k_12, q_12, t);
      }
    else
      {
        t = r_42;
        t = xtc_transform_term_2_0(s_12, u_12, t);
      }
  }
  t = olevel_2_0(v_12, w_12, t);
  t = olevel_2_0(x_14, z_14, t);
  t = olevel_2_0(y_15, z_15, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL;
  q_18 = t;
  t = term_x_35;
  r_18 = t;
  t = (ATerm) ATinsert(CheckATermList(q_18), term_v_42);
  u_18 = t;
  t = SSL_printnl(r_18, u_18);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(q_18), term_v_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  t = term_t_35;
  x_18 = t;
  t = term_u_40;
  y_18 = t;
  t = term_v_40;
  t = j_14(x_18, y_18, t);
  t = debug_1_0(q_8, t);
  t = w_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  {
    ATerm c_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_19 = ATgetArgument(t, 0);
            {
              ATerm p_9 = NULL,m_4 = NULL;
              t = SSLgetAnnotations(z_18);
              p_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_19);
              m_4 = t;
              t = SSLsetAnnotations(m_4, p_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_18;
          }
        LocalPopChoice(f_43);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = c_43;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(f_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_t_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm h_19 = NULL;
  t = pass_verbose_0_0(t);
  h_19 = t;
  t = (ATerm) ATinsert(CheckATermList(h_19), term_t_38);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = save_as_1_0(s_9, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_g_43;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm h_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_19;
        {
          ATerm k_43 = t;
          if((PushChoice() == 0))
            {
              ATerm t_10 = NULL,u_10 = NULL;
              t = term_t_35;
              t_10 = t;
              t = term_l_43;
              u_10 = t;
              t = term_m_43;
              t = j_14(t_10, u_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_43;
            }
        }
        t = z_19;
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
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
              LocalPopChoice(o_43);
              t = xtc_transform_file_2_0(e_10, j_10, t);
            }
          else
            {
              t = n_43;
              t = xtc_transform_term_2_0(l_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = h_43;
        t = z_19;
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_t_38);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_p_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_t_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL,g_20 = NULL;
  g_20 = t;
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_20 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(g_20);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
              r_5 = t;
              t = SSLsetAnnotations(r_5, z_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_20;
          }
        LocalPopChoice(t_43);
        t = xtc_transform_file_2_0(e_11, j_11, t);
      }
    else
      {
        t = s_43;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(s_11, t);
  f_20 = t;
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(f_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_20;
          }
        LocalPopChoice(v_43);
        t = xtc_transform_file_2_0(w_11, x_11, t);
      }
    else
      {
        t = u_43;
        t = xtc_transform_term_2_0(y_11, a_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(b_12, t);
  c_20 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_21 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(c_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_21);
              t_5 = t;
              t = SSLsetAnnotations(t_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_20;
          }
        LocalPopChoice(y_43);
        t = xtc_transform_file_2_0(e_12, f_12, t);
      }
    else
      {
        t = x_43;
        t = xtc_transform_term_2_0(g_12, i_12, t);
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_z_43;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm o_20 = NULL;
  t = pass_verbose_0_0(t);
  o_20 = t;
  t = (ATerm) ATinsert(CheckATermList(o_20), term_t_38);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_z_43;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_t_38);
  return(t);
}
static ATerm s_11 (ATerm t)
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
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_t_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm l_21 = NULL;
  t = pass_verbose_0_0(t);
  l_21 = t;
  t = (ATerm) ATinsert(CheckATermList(l_21), term_t_38);
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
  t = term_h_39;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm x_21 = NULL;
  t = pass_verbose_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(CheckATermList(x_21), term_t_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm a_22 = NULL;
  t = pass_verbose_0_0(t);
  a_22 = t;
  t = (ATerm) ATinsert(CheckATermList(a_22), term_t_38);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_t_38);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm j_22 = NULL;
  t = pass_verbose_0_0(t);
  j_22 = t;
  t = (ATerm) ATinsert(CheckATermList(j_22), term_t_38);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  m_22 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_22 = ATgetArgument(t, 0);
            {
              ATerm m_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(m_22);
              m_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
              d_6 = t;
              t = SSLsetAnnotations(d_6, m_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_22;
          }
        LocalPopChoice(h_44);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = g_44;
        t = xtc_transform_term_2_0(z_12, a_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  l_22 = t;
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_23 = ATgetArgument(t, 0);
            {
              ATerm v_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(l_22);
              v_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
              f_6 = t;
              t = SSLsetAnnotations(f_6, v_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_22;
          }
        LocalPopChoice(n_44);
        t = xtc_transform_file_2_0(i_13, o_13, t);
      }
    else
      {
        t = m_44;
        t = xtc_transform_term_2_0(t_13, u_13, t);
      }
  }
  k_22 = t;
  {
    ATerm o_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_23 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(k_22);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, a_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_22;
          }
        LocalPopChoice(s_44);
        t = xtc_transform_file_2_0(l_14, q_14, t);
      }
    else
      {
        t = o_44;
        t = xtc_transform_term_2_0(r_14, t_14, t);
      }
  }
  t = if_keep4_1_0(u_14, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm t_22 = NULL;
  t = pass_verbose_0_0(t);
  t_22 = t;
  t = (ATerm) ATinsert(CheckATermList(t_22), term_t_38);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_t_38);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm j_23 = NULL;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), term_t_38);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_t_38);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm y_23 = NULL;
  t = pass_verbose_0_0(t);
  y_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_23), term_t_38);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm z_23 = NULL;
  t = pass_verbose_0_0(t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), term_t_38);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm m_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(d_24);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              h_6 = t;
              t = SSLsetAnnotations(h_6, m_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_24;
          }
        LocalPopChoice(c_45);
        t = xtc_transform_file_2_0(b_15, e_15, t);
      }
    else
      {
        t = b_45;
        t = xtc_transform_term_2_0(f_15, g_15, t);
      }
  }
  b_24 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_24 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,n_6 = NULL;
              t = SSLgetAnnotations(b_24);
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_24);
              n_6 = t;
              t = SSLsetAnnotations(n_6, v_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_24;
          }
        LocalPopChoice(e_45);
        t = xtc_transform_file_2_0(n_15, o_15, t);
      }
    else
      {
        t = d_45;
        t = xtc_transform_term_2_0(q_15, u_15, t);
      }
  }
  t = if_keep2_1_0(w_15, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_t_38);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm q_24 = NULL;
  t = pass_verbose_0_0(t);
  q_24 = t;
  t = (ATerm) ATinsert(CheckATermList(q_24), term_t_38);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_t_38);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_t_38);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = save_as_1_0(x_15, t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  {
    ATerm k_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_25 = ATgetArgument(t, 0);
            {
              ATerm a_16 = NULL,o_6 = NULL;
              t = SSLgetAnnotations(b_25);
              a_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
              o_6 = t;
              t = SSLsetAnnotations(o_6, a_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_25;
          }
        LocalPopChoice(m_45);
        t = xtc_transform_file_2_0(c_16, f_16, t);
      }
    else
      {
        t = k_45;
        t = xtc_transform_term_2_0(g_16, i_16, t);
      }
  }
  t = if_keep5_1_0(j_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(m_16, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm l_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), term_t_38);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm m_25 = NULL;
  t = pass_verbose_0_0(t);
  m_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), term_t_38);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = save_as_1_0(n_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm p_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_25 = ATgetArgument(t, 0);
            {
              ATerm k_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(p_25);
              k_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, k_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_25;
          }
        LocalPopChoice(r_45);
        t = xtc_transform_file_2_0(r_16, t_16, t);
      }
    else
      {
        t = p_45;
        t = xtc_transform_term_2_0(u_16, v_16, t);
      }
  }
  t = if_keep3_1_0(x_16, t);
  o_25 = t;
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_26 = ATgetArgument(t, 0);
            {
              ATerm o_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(o_25);
              o_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_26);
              t_6 = t;
              t = SSLsetAnnotations(t_6, o_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_25;
          }
        LocalPopChoice(t_45);
        t = xtc_transform_file_2_0(z_16, b_17, t);
      }
    else
      {
        t = s_45;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep3_1_0(e_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(h_17, t);
  n_25 = t;
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_26 = ATgetArgument(t, 0);
            {
              ATerm s_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
              s_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
              u_6 = t;
              t = SSLsetAnnotations(u_6, s_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(w_45);
        t = xtc_transform_file_2_0(j_17, k_17, t);
      }
    else
      {
        t = v_45;
        t = xtc_transform_term_2_0(l_17, m_17, t);
      }
  }
  t = if_keep3_1_0(p_17, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm a_26 = NULL;
  t = pass_verbose_0_0(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), term_t_38);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm b_26 = NULL;
  t = pass_verbose_0_0(t);
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(b_26), term_t_38);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm i_26 = NULL;
  t = pass_verbose_0_0(t);
  i_26 = t;
  t = (ATerm) ATinsert(CheckATermList(i_26), term_t_38);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm j_26 = NULL;
  t = pass_verbose_0_0(t);
  j_26 = t;
  t = (ATerm) ATinsert(CheckATermList(j_26), term_t_38);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm r_26 = NULL;
  t = pass_verbose_0_0(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), term_t_38);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm s_26 = NULL;
  t = pass_verbose_0_0(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), term_t_38);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = save_as_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_c_46;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL;
  u_26 = t;
  {
    ATerm g_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm w_16 = NULL,v_6 = NULL;
              t = SSLgetAnnotations(u_26);
              w_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
              v_6 = t;
              t = SSLsetAnnotations(v_6, w_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_26;
          }
        LocalPopChoice(k_46);
        t = xtc_transform_file_2_0(t_17, u_17, t);
      }
    else
      {
        t = g_46;
        t = xtc_transform_term_2_0(v_17, w_17, t);
      }
  }
  t = if_keep1_1_0(x_17, t);
  t_26 = t;
  {
    ATerm m_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_27 = ATgetArgument(t, 0);
            {
              ATerm a_17 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(t_26);
              a_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_27);
              w_6 = t;
              t = SSLsetAnnotations(w_6, a_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(o_46);
        t = xtc_transform_file_2_0(b_18, c_18, t);
      }
    else
      {
        t = m_46;
        t = xtc_transform_term_2_0(d_18, e_18, t);
      }
  }
  t = if_keep1_1_0(g_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm c_27 = NULL;
  t = pass_verbose_0_0(t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), term_t_38);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm h_27 = NULL;
  t = pass_verbose_0_0(t);
  h_27 = t;
  t = (ATerm) ATinsert(CheckATermList(h_27), term_t_38);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = save_as_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_t_38);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm r_27 = NULL;
  t = pass_verbose_0_0(t);
  r_27 = t;
  t = (ATerm) ATinsert(CheckATermList(r_27), term_t_38);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = save_as_1_0(j_18, t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = term_u_46;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_8, t);
  t = profile_p__2_0(l_8, m_8, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm b_30 = NULL;
  t = pass_verbose_0_0(t);
  b_30 = t;
  t = (ATerm) ATinsert(CheckATermList(b_30), term_t_39);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm c_30 = NULL;
  t = pass_verbose_0_0(t);
  c_30 = t;
  t = (ATerm) ATinsert(CheckATermList(c_30), term_t_39);
  return(t);
}
ATerm save_as_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,a_29 = NULL,b_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  b_29 = t;
  {
    static ATerm k_18 (ATerm t)
    {
      static ATerm n_18 (ATerm t)
      {
        ATerm h_29 = NULL,k_29 = NULL;
        t = g_82(t);
        h_29 = t;
        t = term_w_46;
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_46, h_29);
        t = p_14(k_29, h_29, t);
        return(t);
      }
      t = get_outfile_1_0(n_18, t);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      return(t);
    }
    t = copy_to_1_0(k_18, t);
  }
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL,y_29 = NULL;
        y_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_29 = ATgetArgument(t, 0);
            {
              ATerm f_17 = NULL,j_8 = NULL;
              t = SSLgetAnnotations(y_29);
              f_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_29);
              j_8 = t;
              t = SSLsetAnnotations(j_8, f_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_29;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(s_18, t_18, t);
      }
    else
      {
        t = x_46;
        t = xtc_transform_term_2_0(b_19, c_19, t);
      }
  }
  {
    static ATerm f_19 (ATerm t)
    {
      ATerm d_30 = NULL;
      t = term_z_46;
      d_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), term_z_46);
      t = p_14(not_null(y_28), d_30, t);
      if(((a_29 != NULL) && (a_29 != t)))
        _fail(t);
      else
        a_29 = t;
      return(t);
    }
    t = copy_to_1_0(f_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_47), not_null(a_29)), term_b_47), not_null(y_28)), term_a_47);
  g_29 = t;
  t = SSL_concat_strings(g_29);
  d_29 = t;
  t = term_x_35;
  e_29 = t;
  t = (ATerm) ATinsert(ATempty, d_29);
  f_29 = t;
  t = SSL_printnl(e_29, f_29);
  t = b_29;
  return(t);
}
ATerm if_keep2_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,n_30 = NULL,o_30 = NULL;
        t = term_t_35;
        n_30 = t;
        t = term_q_40;
        o_30 = t;
        t = term_r_40;
        t = j_14(n_30, o_30, t);
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_30, term_w_35);
        t = geq_0_0(t);
        t = g_30;
        t = j_107(t);
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = g_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  t = term_u_35;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL;
        t = term_t_35;
        u_30 = t;
        t = term_u_35;
        v_30 = t;
        t = term_v_35;
        t = j_14(u_30, v_30, t);
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = term_v_38;
      }
  }
  r_30 = t;
  t = term_v_38;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, term_v_38);
  t = p_13(r_30, t_30, t);
  s_30 = t;
  t = SSL_int_to_string(s_30);
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_30), term_u_35);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_47 = ATgetArgument(t, 0);
      if(match_cons(i_47, sym_Stream_1))
        {
          b_31 = ATgetArgument(i_47, 0);
        }
      else
        _fail(t);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(b_31, c_31, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,z_30 = NULL;
  z_30 = t;
  t = xtc_new_file_0_0(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, z_30);
  t = g_13(i_19, w_30, z_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, w_30);
  t = xtc_transform_file_2_0(h_115, i_115, t);
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
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  i_32 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_32 = ATgetArgument(t, 0);
      {
        ATerm n_17 = NULL,o_17 = NULL;
        t = SSL_int_to_string(j_32);
        n_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_47), n_17), term_j_47);
        o_17 = t;
        t = SSL_concat_strings(o_17);
      }
    }
  else
    {
      ATerm y_17 = NULL,z_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_32 = ATgetArgument(t, 0);
          k_32 = ATgetArgument(t, 1);
          l_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_32);
      y_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_32), term_m_47), y_17), term_l_47), j_32);
      z_17 = t;
      t = SSL_concat_strings(z_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm s_47 = ATgetArgument(t, 0);
              if((o_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_54), term_b_54), term_u_53), term_q_53), term_n_53), term_h_53), term_a_53), term_s_52), term_k_52), term_g_52), term_w_51), term_s_51), term_l_51), term_f_51), term_y_50), term_s_50), term_m_50), term_x_49), term_q_49), term_m_49), term_i_49), term_e_49), term_x_48), term_t_48), term_o_48), term_f_48), term_a_48), term_w_47);
        t = fetch_elem_1_0(m_19, t);
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_32 = NULL,h_33 = NULL;
  v_32 = t;
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_54 = ATgetArgument(t, 0);
            h_33 = ATgetArgument(t, 1);
            {
              ATerm o_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_54);
        {
          ATerm p_54 = t;
          int q_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,h_18 = NULL,i_18 = NULL;
              t = h_33;
              {
                ATerm v_54 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_54;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_18 = t;
              t = term_x_35;
              h_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_w_54);
              i_18 = t;
              t = SSL_printnl(h_18, i_18);
              t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(ATinsert(ATempty, f_18), term_w_54));
              LocalPopChoice(q_54);
            }
          else
            {
              t = p_54;
              t = v_32;
            }
        }
      }
    else
      {
        t = l_54;
        t = v_32;
      }
  }
  t = v_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,a_34 = NULL;
  a_34 = t;
  t = fork_0_0(t);
  x_33 = t;
  {
    ATerm x_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_34;
        t = t_107(t);
        LocalPopChoice(y_54);
      }
    else
      {
        t = x_54;
        t = SSL_waitpid(x_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_54 = ATgetArgument(t, 0);
            if(((ATgetType(z_54) != AT_INT) || (ATgetInt((ATermInt) z_54) != 0)))
              _fail(t);
            {
              ATerm a_55 = ATgetArgument(t, 1);
            }
            {
              ATerm b_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_34;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_116 (ATerm), ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  d_34 = t;
  t = i_116(t);
  t = xtc_find_0_0(t);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    static ATerm o_19 (ATerm t)
    {
      ATerm e_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
      t = h_13(c_34, d_34, t);
      t = term_i_36;
      e_34 = t;
      t = SSL_exit(e_34);
      return(t);
    }
    t = fork_and_wait_1_0(o_19, t);
  }
  t = d_34;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_34 = NULL,j_34 = NULL;
      t = g_34;
      t = xtc_new_file_0_0(t);
      i_34 = t;
      t = t_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, (ATerm) ATinsert(ATinsert(ATempty, i_34), term_d_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_34);
    }
  else
    {
      ATerm n_34 = NULL,o_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_34;
      t = xtc_new_file_0_0(t);
      n_34 = t;
      t = t_0(t);
      o_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_34), term_d_36), h_34), term_c_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_49 = NULL,v_49 = NULL;
      v_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_49 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(v_49);
            m_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_49);
            p_8 = t;
            t = SSLsetAnnotations(p_8, m_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_49;
        }
      LocalPopChoice(e_55);
      {
        static ATerm r_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm s_19 (ATerm t)
        {
          ATerm w_49 = NULL;
          t = pass_verbose_0_0(t);
          w_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), w_49), (ATerm) ATinsert(ATempty, term_t_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(r_19, s_19, t);
      }
    }
  else
    {
      t = d_55;
      {
        static ATerm w_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm a_20 (ATerm t)
        {
          ATerm y_49 = NULL;
          t = pass_verbose_0_0(t);
          y_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), y_49), (ATerm) ATinsert(ATempty, term_t_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(w_19, a_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,u_34 = NULL;
  q_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_34;
      t = r_97(t);
    }
  else
    {
      ATerm z_34 = NULL,c_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      t = t_97(t);
      z_34 = t;
      t = u_34;
      t = foldr_3_0(r_97, s_97, t_97, t);
      c_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_34, c_35);
      t = s_97(t);
    }
  return(t);
}
static ATerm b_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_35), term_f_55);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  t = term_t_35;
  g_35 = t;
  t = term_f_55;
  h_35 = t;
  t = term_g_55;
  t = j_14(g_35, h_35, t);
  t = foldr_3_0(b_20, conc_0_0, h_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_t_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_t_38);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  t = get_outfile_1_0(x_20, t);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_19 = NULL,l_19 = NULL,t_19 = NULL,u_19 = NULL,x_19 = NULL;
        t = term_t_35;
        u_19 = t;
        t = term_l_55;
        x_19 = t;
        t = term_x_55;
        t = j_14(u_19, x_19, t);
        t = t_36;
        {
          ATerm y_55 = t;
          int z_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_36;
              {
                ATerm a_56 = t;
                int b_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        e_20 = ATgetArgument(t, 0);
                        {
                          ATerm f_21 = NULL,u_8 = NULL;
                          t = SSLgetAnnotations(t_36);
                          f_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, e_20);
                          u_8 = t;
                          t = SSLsetAnnotations(u_8, f_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = t_36;
                      }
                    LocalPopChoice(b_56);
                    t = xtc_transform_file_2_0(i_20, n_20, t);
                  }
                else
                  {
                    t = a_56;
                    t = xtc_transform_term_2_0(s_20, t_20, t);
                  }
              }
              LocalPopChoice(z_55);
            }
          else
            {
              t = y_55;
              {
                ATerm q_20 = NULL,u_20 = NULL,y_20 = NULL;
                t = term_x_35;
                u_20 = t;
                t = (ATerm) ATinsert(ATempty, term_c_56);
                y_20 = t;
                t = SSL_printnl(u_20, y_20);
                t = term_v_38;
                q_20 = t;
                t = SSL_exit(q_20);
                t = (ATerm) ATinsert(ATempty, term_c_56);
              }
            }
        }
        t = copy_to_1_0(v_20, t);
        k_19 = t;
        t = term_x_35;
        l_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_56));
        t_19 = t;
        t = SSL_printnl(l_19, t_19);
        t = k_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = t_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  {
    ATerm e_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL,h_37 = NULL,i_37 = NULL;
        t = term_t_35;
        h_37 = t;
        t = term_q_40;
        i_37 = t;
        t = term_r_40;
        t = j_14(h_37, i_37, t);
        c_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_37, term_j_45);
        t = geq_0_0(t);
        t = a_37;
        t = m_107(t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = e_56;
        t = a_37;
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
      ATerm k_37 = NULL,l_37 = NULL;
      t = term_t_35;
      k_37 = t;
      t = term_l_56;
      l_37 = t;
      t = term_n_56;
      t = j_14(k_37, l_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_56);
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      t = (ATerm) ATinsert(ATempty, term_o_56);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
        t = term_t_35;
        w_37 = t;
        t = term_q_40;
        x_37 = t;
        t = term_r_40;
        t = j_14(w_37, x_37, t);
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_37, term_j_39);
        t = geq_0_0(t);
        t = t_37;
        t = k_107(t);
        LocalPopChoice(q_56);
      }
    else
      {
        t = p_56;
        t = t_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm a_38 = NULL;
  static ATerm z_20 (ATerm t)
  {
    t = k_91(t);
    if(((a_38 != NULL) && (a_38 != t)))
      _fail(t);
    else
      a_38 = t;
    return(t);
  }
  t = fetch_1_0(z_20, t);
  t = not_null(a_38);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm k_40 = NULL,m_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_40 = ATgetArgument(t, 0);
      {
        ATerm q_21 = NULL,y_21 = NULL,x_9 = NULL;
        t = SSLgetAnnotations(k_40);
        q_21 = t;
        t = m_40;
        t = fetch_elem_1_0(e_21, t);
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, y_21);
        x_9 = t;
        t = SSLsetAnnotations(x_9, q_21);
      }
    }
  else
    {
      ATerm g_23 = NULL,o_23 = NULL,a_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          m_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_40);
      g_23 = t;
      t = m_40;
      t = fetch_elem_1_0(i_21, t);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, o_23);
      a_10 = t;
      t = SSLsetAnnotations(a_10, g_23);
    }
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,n_22 = NULL;
  g_22 = t;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            h_22 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
            {
              ATerm t_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_56);
        t = h_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = n_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_22;
      }
    else
      {
        t = r_56;
        if(match_cons(t, sym_RDef_3))
          {
            h_22 = ATgetArgument(t, 0);
            n_22 = ATgetArgument(t, 1);
            {
              ATerm w_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = n_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_22;
      }
  }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL;
  u_23 = t;
  {
    ATerm x_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
            {
              ATerm c_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_57);
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
        t = x_56;
        if(match_cons(t, sym_RDef_3))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
            {
              ATerm d_57 = ATgetArgument(t, 2);
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
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = fetch_elem_1_0(d_21, t);
  e_39 = t;
  t = term_x_35;
  f_39 = t;
  t = (ATerm) ATinsert(ATempty, term_f_57);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = e_39;
  return(t);
}
static ATerm e_13 (ATerm g_21, ATerm h_21, ATerm t)
{
  t = g_21;
  {
    ATerm g_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_57;
      }
  }
  t = h_21;
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(h_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_j_57, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm f_13 (ATerm b_23, ATerm c_23, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_write_term_to_stream_baf(b_23, c_23);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_41);
  return(t);
}
static ATerm g_13 (ATerm p_90 (ATerm), ATerm c_194, ATerm l_23, ATerm t)
{
  ATerm b_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_194, term_k_57);
  t = b_14(t);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, l_23);
  t = p_90(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
static ATerm j_13 (ATerm z_103 (ATerm), ATerm u_42, ATerm s_42, ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL,p_41 = NULL;
  f_41 = t;
  t = z_103(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_41, u_42, s_42);
  t = k_14(c_41, u_42, s_42, t);
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL;
        t = term_n_57;
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_41, term_n_57);
        t = j_14(c_41, q_41, t);
        LocalPopChoice(m_57);
      }
    else
      {
        t = l_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_41 = ATgetFirst((ATermList) t);
      e_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_41, term_n_57, (ATerm) ATinsert(CheckATermList(e_41), (ATerm) ATinsert(CheckATermList(d_41), u_42)));
  t = lookup_table_0_1(c_41, t);
  p_41 = t;
  t = term_n_57;
  i_41 = t;
  t = (ATerm) ATinsert(CheckATermList(e_41), (ATerm) ATinsert(CheckATermList(d_41), u_42));
  j_41 = t;
  t = p_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(i_41, j_41, l_41, t);
  t = f_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm s_41 = NULL;
  ATerm o_57 = t;
  int p_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_41 = NULL,j_24 = NULL;
      x_41 = t;
      t = term_q_57;
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_41, term_q_57);
      t = p_14(x_41, j_24, t);
      s_41 = t;
      t = SSL_mkstemp(s_41);
      LocalPopChoice(p_57);
    }
  else
    {
      t = o_57;
      {
        ATerm y_41 = NULL;
        t = term_r_57;
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
static ATerm j_21 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = P__tmpdir_0_0(t);
  f_42 = t;
  t = term_t_57;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_42, term_t_57);
  t = p_14(f_42, g_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_42 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_36;
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_42, term_x_36);
  t = j_13(j_21, d_42, e_42, t);
  t = SSL_close(b_42);
  t = d_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_57;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_57);
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_42, (ATerm) ATinsert(ATempty, term_v_57));
      t = c_14(k_42, x_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm b_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_57 = ATgetArgument(t, 0);
      if(match_cons(w_57, sym_Stream_1))
        {
          b_43 = ATgetArgument(w_57, 0);
        }
      else
        _fail(t);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(b_43, d_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  t = read_from_0_0(t);
  t = j_115(t);
  z_42 = t;
  t = xtc_new_file_0_0(t);
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, z_42);
  t = g_13(n_21, y_42, z_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = debug_1_0(r_21, t);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = term_x_57;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = save_as_1_0(u_21, t);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  t = term_y_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm i_43 = NULL,a_44 = NULL;
  a_44 = t;
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL,j_25 = NULL;
        t = term_t_35;
        h_25 = t;
        t = term_b_58;
        j_25 = t;
        t = term_c_58;
        t = j_14(h_25, j_25, t);
        i_43 = t;
        t = if_verbose2_1_0(p_21, t);
        t = a_44;
        {
          ATerm d_58 = t;
          int e_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_25 = NULL,t_25 = NULL;
              t = term_t_35;
              q_25 = t;
              t = term_f_38;
              t_25 = t;
              t = term_g_38;
              t = j_14(q_25, t_25, t);
              t = a_44;
              LocalPopChoice(e_58);
            }
          else
            {
              t = d_58;
              {
                static ATerm s_21 (ATerm t)
                {
                  ATerm v_58 = t;
                  int w_58 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_27 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          b_27 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = e_13(i_43, b_27, t);
                      LocalPopChoice(w_58);
                    }
                  else
                    {
                      t = v_58;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(s_21, t);
              }
            }
        }
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = a_44;
      }
  }
  t = if_keep3_1_0(t_21, t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  {
    ATerm x_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_45);
        LocalPopChoice(y_58);
      }
    else
      {
        t = x_58;
        t = f_45;
      }
  }
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  static ATerm w_21 (ATerm t)
  {
    ATerm t_44 = NULL,w_44 = NULL,y_44 = NULL;
    t_44 = t;
    t = term_s_57;
    w_44 = t;
    t = term_n_57;
    y_44 = t;
    t = term_a_59;
    t = j_14(w_44, y_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_44 != NULL) && (q_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_44 = ATgetFirst((ATermList) t);
        {
          ATerm d_59 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_44;
    t = map_1_0(z_21, t);
    t = t_44;
    t = end_scope_1_0(b_22, t);
    return(t);
  }
  t = repeat_2_0(w_21, _id, t);
  r_44 = t;
  t = SSL_exit(r_44);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm e_59 = t;
  int f_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_46 = NULL,e_46 = NULL;
      t = term_t_35;
      a_46 = t;
      t = term_d_36;
      e_46 = t;
      t = term_e_36;
      t = j_14(a_46, e_46, t);
      LocalPopChoice(f_59);
    }
  else
    {
      t = e_59;
      t = term_b_37;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_27 = NULL,p_27 = NULL;
      t = term_d_36;
      {
        ATerm g_59 = t;
        int h_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = NULL,x_27 = NULL;
            t = term_t_35;
            w_27 = t;
            t = term_d_36;
            x_27 = t;
            t = term_e_36;
            t = j_14(w_27, x_27, t);
            LocalPopChoice(h_59);
          }
        else
          {
            t = g_59;
            t = term_b_37;
          }
      }
      o_27 = t;
      t = term_u_57;
      p_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_u_57, o_27);
      t = r_13(p_27, o_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm j_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_45;
      t = copy_to_1_0(c_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_o_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,l_46 = NULL,n_46 = NULL;
  t = f_82(t);
  i_46 = t;
  t = term_t_35;
  l_46 = t;
  t = term_b_40;
  n_46 = t;
  t = term_c_40;
  t = j_14(l_46, n_46, t);
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_46, i_46);
  t = p_14(j_46, i_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,r_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 = NULL;
        t = n_47;
        t = v_0(t);
        o_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, r_47, o_28);
        t = r_13(r_47, o_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_47);
        LocalPopChoice(n_59);
      }
    else
      {
        t = k_59;
        {
          ATerm o_59 = t;
          int p_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_28 = NULL;
              t = n_47;
              t = v_0(t);
              x_28 = t;
              {
                ATerm r_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_28 = NULL;
                    z_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_28;
                          }
                        else
                          {
                            t = z_28;
                            if((r_47 != t))
                              {
                                _fail(t);
                              }
                            t = z_28;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_47, x_28);
              t = r_13(r_47, x_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_47);
              LocalPopChoice(p_59);
            }
          else
            {
              t = o_59;
              t = n_47;
              t = v_0(t);
              if((r_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_47);
            }
        }
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = get_outfile_1_0(f_22, t);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_u_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm y_48 = NULL;
  y_48 = t;
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL,z_29 = NULL,a_30 = NULL,f_30 = NULL;
        t = term_t_35;
        a_30 = t;
        t = term_x_59;
        f_30 = t;
        t = term_y_59;
        t = j_14(a_30, f_30, t);
        t = y_48;
        t = copy_to_1_0(d_22, t);
        u_29 = t;
        t = term_x_35;
        v_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_59));
        z_29 = t;
        t = SSL_printnl(v_29, z_29);
        t = u_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        t = y_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,o_50 = NULL;
  t = term_q_40;
  {
    ATerm a_60 = t;
    int b_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,u_50 = NULL;
        t = term_t_35;
        q_50 = t;
        t = term_q_40;
        u_50 = t;
        t = term_r_40;
        t = j_14(q_50, u_50, t);
        LocalPopChoice(b_60);
      }
    else
      {
        t = a_60;
        t = term_v_38;
      }
  }
  k_50 = t;
  t = term_v_38;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, term_v_38);
  t = p_13(k_50, o_50, t);
  l_50 = t;
  t = SSL_int_to_string(l_50);
  j_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_50), term_q_40);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm w_50 = NULL,a_51 = NULL,d_51 = NULL,e_51 = NULL,g_51 = NULL,h_51 = NULL;
  t = term_t_35;
  g_51 = t;
  t = term_c_60;
  h_51 = t;
  t = term_d_60;
  t = j_14(g_51, h_51, t);
  w_50 = t;
  t = term_e_60;
  t = xtc_find_path_0_0(t);
  a_51 = t;
  t = term_f_60;
  t = xtc_find_path_0_0(t);
  d_51 = t;
  t = term_g_60;
  t = xtc_find_path_0_0(t);
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_51), term_c_60), d_51), term_c_60), a_51), term_c_60));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
  z_51 = t;
  t = term_h_60;
  o_51 = t;
  t = z_51;
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_52 = NULL,e_52 = NULL;
        t = term_t_35;
        d_52 = t;
        t = term_d_36;
        e_52 = t;
        t = term_e_36;
        t = j_14(d_52, e_52, t);
        LocalPopChoice(j_60);
      }
    else
      {
        t = i_60;
        {
          ATerm l_52 = NULL,o_52 = NULL;
          t = term_t_35;
          l_52 = t;
          t = term_b_40;
          o_52 = t;
          t = term_c_40;
          t = j_14(l_52, o_52, t);
        }
      }
  }
  a_52 = t;
  t = z_51;
  t = get_include_dirs_0_0(t);
  q_51 = t;
  t = z_51;
  t = pass_keep_0_0(t);
  x_51 = t;
  t = term_l_60;
  {
    ATerm o_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_52 = NULL,q_52 = NULL;
        t = term_t_35;
        p_52 = t;
        t = term_l_60;
        q_52 = t;
        t = term_q_60;
        t = j_14(p_52, q_52, t);
        LocalPopChoice(p_60);
        t = (ATerm) ATinsert(ATempty, term_l_60);
      }
    else
      {
        t = o_60;
        t = (ATerm) ATempty;
      }
  }
  y_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_51), x_51), q_51), (ATerm) ATinsert(ATinsert(ATempty, a_52), term_r_60));
  t = concat_0_0(t);
  p_51 = t;
  t = z_51;
  t = comp_0_2(o_51, p_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  {
    ATerm s_60 = t;
    int u_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_53 = NULL,i_53 = NULL,j_53 = NULL;
        t = term_t_35;
        i_53 = t;
        t = term_u_35;
        j_53 = t;
        t = term_v_35;
        t = j_14(i_53, j_53, t);
        g_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_53, term_j_39);
        t = geq_0_0(t);
        t = u_52;
        t = i_106(t);
        LocalPopChoice(u_60);
      }
    else
      {
        t = s_60;
        t = u_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  j_54 = t;
  t = SSL_explode_string(j_54);
  {
    ATerm v_60 = t;
    int x_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_56 (ATerm t)
        {
          ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
          f_56 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_56 = ATgetFirst((ATermList) t);
              h_56 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm z_60 = t;
            int a_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_31 = NULL,s_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(f_56);
                i_31 = t;
                t = h_56;
                t = m_56(t);
                s_31 = t;
                t = (ATerm) ATinsert(CheckATermList(s_31), g_56);
                k_10 = t;
                t = SSLsetAnnotations(k_10, i_31);
                LocalPopChoice(a_61);
              }
            else
              {
                t = z_60;
                {
                  ATerm b_61 = t;
                  int c_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_32 = NULL,m_10 = NULL;
                      t = SSLgetAnnotations(f_56);
                      f_32 = t;
                      t = g_56;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
                      m_10 = t;
                      t = SSLsetAnnotations(m_10, f_32);
                      LocalPopChoice(c_61);
                    }
                  else
                    {
                      t = b_61;
                      {
                        ATerm a_33 = NULL,l_33 = NULL,n_10 = NULL;
                        t = SSLgetAnnotations(f_56);
                        a_33 = t;
                        t = g_56;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = h_56;
                        t = o_101(t);
                        l_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(l_33), g_56);
                        n_10 = t;
                        t = SSLsetAnnotations(n_10, a_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = m_56(t);
        LocalPopChoice(x_60);
      }
    else
      {
        t = v_60;
      }
  }
  i_54 = t;
  t = SSL_implode_string(i_54);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_e_61;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(s_22, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_h_61;
  return(t);
}
static ATerm k_13 (ATerm c_21, ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,y_56 = NULL,z_56 = NULL;
  t = c_21;
  t = basename_1_0(_id, t);
  u_56 = t;
  t = if_verbose3_1_0(o_22, t);
  t = term_d_40;
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, u_56);
  t = o_14(z_56, u_56, t);
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_57 = NULL,e_57 = NULL;
        t = term_t_35;
        b_57 = t;
        t = term_d_36;
        e_57 = t;
        t = term_e_36;
        t = j_14(b_57, e_57, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(j_61);
      }
    else
      {
        t = i_61;
        t = u_56;
      }
  }
  v_56 = t;
  t = if_verbose3_1_0(q_22, t);
  t = term_b_40;
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, v_56);
  t = o_14(y_56, v_56, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_56);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = debug_1_0(v_22, t);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = term_n_61;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(z_22, t);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,f_37 = NULL,g_37 = NULL,n_37 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_13(r_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm u_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
        s_58 = t;
        t = term_t_35;
        t_58 = t;
        t = term_f_38;
        u_58 = t;
        t = term_g_38;
        t = j_14(t_58, u_58, t);
        t = s_58;
        LocalPopChoice(v_61);
      }
    else
      {
        t = u_61;
        t = add_main_0_0(t);
      }
  }
  q_58 = t;
  {
    ATerm w_61 = t;
    int y_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_58 = ATgetArgument(t, 0);
            {
              ATerm t_33 = NULL,x_10 = NULL;
              t = SSLgetAnnotations(q_58);
              t_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_58);
              x_10 = t;
              t = SSLsetAnnotations(x_10, t_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_58;
          }
        LocalPopChoice(y_61);
        t = xtc_transform_file_2_0(a_23, d_23, t);
      }
    else
      {
        t = w_61;
        t = xtc_transform_term_2_0(f_23, i_23, t);
      }
  }
  p_58 = t;
  {
    ATerm c_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_59 = ATgetArgument(t, 0);
            {
              ATerm y_33 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(p_58);
              y_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_59);
              y_10 = t;
              t = SSLsetAnnotations(y_10, y_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_58;
          }
        LocalPopChoice(d_62);
        t = xtc_transform_file_2_0(k_23, n_23, t);
      }
    else
      {
        t = c_62;
        t = xtc_transform_term_2_0(p_23, q_23, t);
      }
  }
  t = if_keep5_1_0(s_23, t);
  o_58 = t;
  {
    ATerm e_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_59 = ATgetArgument(t, 0);
            {
              ATerm l_34 = NULL,b_11 = NULL;
              t = SSLgetAnnotations(o_58);
              l_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_59);
              b_11 = t;
              t = SSLsetAnnotations(b_11, l_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_58;
          }
        LocalPopChoice(f_62);
        t = xtc_transform_file_2_0(x_23, a_24, t);
      }
    else
      {
        t = e_62;
        t = xtc_transform_term_2_0(c_24, e_24, t);
      }
  }
  t = if_keep5_1_0(f_24, t);
  w_34 = t;
  t = term_h_62;
  t_34 = t;
  t = w_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  v_34 = t;
  t = w_34;
  t = comp_0_2(t_34, v_34, t);
  n_58 = t;
  {
    ATerm i_62 = t;
    int j_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_60 = ATgetArgument(t, 0);
            {
              ATerm b_35 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(n_58);
              b_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_60);
              l_11 = t;
              t = SSLsetAnnotations(l_11, b_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_58;
          }
        LocalPopChoice(j_62);
        t = xtc_transform_file_2_0(h_24, i_24, t);
      }
    else
      {
        t = i_62;
        t = xtc_transform_term_2_0(l_24, m_24, t);
      }
  }
  m_58 = t;
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_60 = ATgetArgument(t, 0);
            {
              ATerm k_35 = NULL,j_12 = NULL;
              t = SSLgetAnnotations(m_58);
              k_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_60);
              j_12 = t;
              t = SSLsetAnnotations(j_12, k_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_58;
          }
        LocalPopChoice(n_62);
        t = xtc_transform_file_2_0(o_24, p_24, t);
      }
    else
      {
        t = m_62;
        t = xtc_transform_term_2_0(r_24, s_24, t);
      }
  }
  t = if_keep5_1_0(t_24, t);
  l_58 = t;
  {
    ATerm o_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_61 = ATgetArgument(t, 0);
            {
              ATerm q_35 = NULL,l_12 = NULL;
              t = SSLgetAnnotations(l_58);
              q_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_61);
              l_12 = t;
              t = SSLsetAnnotations(l_12, q_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(p_62);
        t = xtc_transform_file_2_0(v_24, x_24, t);
      }
    else
      {
        t = o_62;
        t = xtc_transform_term_2_0(a_25, c_25, t);
      }
  }
  t = if_keep5_1_0(d_25, t);
  k_58 = t;
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_61 = ATgetArgument(t, 0);
            {
              ATerm y_35 = NULL,m_12 = NULL;
              t = SSLgetAnnotations(k_58);
              y_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_61);
              m_12 = t;
              t = SSLsetAnnotations(m_12, y_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(r_62);
        t = xtc_transform_file_2_0(f_25, g_25, t);
      }
    else
      {
        t = q_62;
        t = xtc_transform_term_2_0(k_25, r_25, t);
      }
  }
  t = if_keep5_1_0(s_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm t_62 = t;
    int w_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
        q_61 = t;
        t = term_t_35;
        r_61 = t;
        t = term_f_38;
        s_61 = t;
        t = term_g_38;
        t = j_14(r_61, s_61, t);
        t = q_61;
        LocalPopChoice(w_62);
        {
          ATerm t_61 = NULL;
          t_61 = t;
          {
            ATerm x_62 = t;
            int y_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    x_61 = ATgetArgument(t, 0);
                    {
                      ATerm j_36 = NULL,n_12 = NULL;
                      t = SSLgetAnnotations(t_61);
                      j_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, x_61);
                      n_12 = t;
                      t = SSLsetAnnotations(n_12, j_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = t_61;
                  }
                LocalPopChoice(y_62);
                t = xtc_transform_file_2_0(v_25, x_25, t);
              }
            else
              {
                t = x_62;
                t = xtc_transform_term_2_0(y_25, z_25, t);
              }
          }
        }
      }
    else
      {
        t = t_62;
        {
          ATerm b_62 = NULL;
          b_62 = t;
          {
            ATerm z_62 = t;
            int a_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_62 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_62 = ATgetArgument(t, 0);
                    {
                      ATerm v_36 = NULL,o_12 = NULL;
                      t = SSLgetAnnotations(b_62);
                      v_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_62);
                      o_12 = t;
                      t = SSLsetAnnotations(o_12, v_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = b_62;
                  }
                LocalPopChoice(a_63);
                t = xtc_transform_file_2_0(c_26, d_26, t);
              }
            else
              {
                t = z_62;
                t = xtc_transform_term_2_0(e_26, f_26, t);
              }
          }
          t = if_keep2_1_0(h_26, t);
        }
      }
  }
  n_37 = t;
  t = term_c_63;
  f_37 = t;
  t = n_37;
  t = pass_warnings_0_0(t);
  g_37 = t;
  t = n_37;
  t = comp_0_2(f_37, g_37, t);
  j_58 = t;
  {
    ATerm d_63 = t;
    int e_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_62 = ATgetArgument(t, 0);
            {
              ATerm r_37 = NULL,p_12 = NULL;
              t = SSLgetAnnotations(j_58);
              r_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_62);
              p_12 = t;
              t = SSLsetAnnotations(p_12, r_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_58;
          }
        LocalPopChoice(e_63);
        t = xtc_transform_file_2_0(l_26, m_26, t);
      }
    else
      {
        t = d_63;
        t = xtc_transform_term_2_0(n_26, o_26, t);
      }
  }
  i_58 = t;
  {
    ATerm h_63 = t;
    int i_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_63 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_63 = ATgetArgument(t, 0);
            {
              ATerm c_38 = NULL,r_12 = NULL;
              t = SSLgetAnnotations(i_58);
              c_38 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_63);
              r_12 = t;
              t = SSLsetAnnotations(r_12, c_38);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_58;
          }
        LocalPopChoice(i_63);
        t = xtc_transform_file_2_0(q_26, v_26, t);
      }
    else
      {
        t = h_63;
        t = xtc_transform_term_2_0(w_26, x_26, t);
      }
  }
  t = if_keep2_1_0(y_26, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
  f_58 = t;
  t = term_x_35;
  g_58 = t;
  t = (ATerm) ATinsert(CheckATermList(f_58), term_j_63);
  h_58 = t;
  t = SSL_printnl(g_58, h_58);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(f_58), term_j_63));
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm b_59 = NULL;
  t = pass_verbose_0_0(t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), term_t_38);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm c_59 = NULL;
  t = pass_verbose_0_0(t);
  c_59 = t;
  t = (ATerm) ATinsert(CheckATermList(c_59), term_t_38);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm l_59 = NULL;
  t = pass_verbose_0_0(t);
  l_59 = t;
  t = (ATerm) ATinsert(CheckATermList(l_59), term_t_38);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = term_l_63;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_t_38);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = save_as_1_0(t_23, t);
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = term_m_63;
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm s_59 = NULL;
  t = pass_verbose_0_0(t);
  s_59 = t;
  t = (ATerm) ATinsert(CheckATermList(s_59), term_t_38);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm t_59 = NULL;
  t = pass_verbose_0_0(t);
  t_59 = t;
  t = (ATerm) ATinsert(CheckATermList(t_59), term_t_38);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = save_as_1_0(g_24, t);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_o_63;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm m_60 = NULL;
  t = pass_verbose_0_0(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), term_t_38);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  t = term_p_63;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm n_60 = NULL;
  t = pass_verbose_0_0(t);
  n_60 = t;
  t = (ATerm) ATinsert(CheckATermList(n_60), term_t_38);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm w_60 = NULL;
  t = pass_verbose_0_0(t);
  w_60 = t;
  t = (ATerm) ATinsert(CheckATermList(w_60), term_t_38);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_q_63;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  ATerm y_60 = NULL;
  t = pass_verbose_0_0(t);
  y_60 = t;
  t = (ATerm) ATinsert(CheckATermList(y_60), term_t_38);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = save_as_1_0(u_24, t);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_r_63;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_t_38);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm g_61 = NULL;
  t = pass_verbose_0_0(t);
  g_61 = t;
  t = (ATerm) ATinsert(CheckATermList(g_61), term_t_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(e_25, t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm o_61 = NULL;
  t = pass_verbose_0_0(t);
  o_61 = t;
  t = (ATerm) ATinsert(CheckATermList(o_61), term_t_38);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = term_u_63;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm p_61 = NULL;
  t = pass_verbose_0_0(t);
  p_61 = t;
  t = (ATerm) ATinsert(CheckATermList(p_61), term_t_38);
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = save_as_1_0(u_25, t);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm z_61 = NULL;
  t = pass_verbose_0_0(t);
  z_61 = t;
  t = (ATerm) ATinsert(CheckATermList(z_61), term_t_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  ATerm a_62 = NULL;
  t = pass_verbose_0_0(t);
  a_62 = t;
  t = (ATerm) ATinsert(CheckATermList(a_62), term_t_38);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm k_62 = NULL;
  t = pass_verbose_0_0(t);
  k_62 = t;
  t = (ATerm) ATinsert(CheckATermList(k_62), term_t_38);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm l_62 = NULL;
  t = pass_verbose_0_0(t);
  l_62 = t;
  t = (ATerm) ATinsert(CheckATermList(l_62), term_t_38);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = save_as_1_0(k_26, t);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm u_62 = NULL;
  t = pass_verbose_0_0(t);
  u_62 = t;
  t = (ATerm) ATinsert(CheckATermList(u_62), term_t_38);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm v_62 = NULL;
  t = pass_verbose_0_0(t);
  v_62 = t;
  t = (ATerm) ATinsert(CheckATermList(v_62), term_t_38);
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm f_63 = NULL;
  t = pass_verbose_0_0(t);
  f_63 = t;
  t = (ATerm) ATinsert(CheckATermList(f_63), term_t_38);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm g_63 = NULL;
  t = pass_verbose_0_0(t);
  g_63 = t;
  t = (ATerm) ATinsert(CheckATermList(g_63), term_t_38);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = save_as_1_0(a_27, t);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_e_64;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_22, t);
  t = profile_p__2_0(x_22, y_22, t);
  return(t);
}
static ATerm j_14 (ATerm r_54, ATerm s_54, ATerm t)
{
  ATerm x_63 = NULL;
  t = lookup_table_0_1(r_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_14(s_54, x_63, t);
  return(t);
}
static ATerm l_13 (ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  c_64 = t;
  {
    ATerm f_64 = t;
    int g_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
        t = j_14(d_53, e_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_64 = ATgetFirst((ATermList) t);
            b_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_64);
        {
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_53, e_53, b_64);
          t = lookup_table_0_1(d_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_14(e_53, b_64, d_64, t);
          t = (ATerm) ATmakeAppl(sym__3, d_53, e_53, b_64);
        }
      }
    else
      {
        t = f_64;
        t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
        t = e_14(d_53, e_53, t);
      }
  }
  t = c_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  n_64 = t;
  t = w_103(t);
  m_64 = t;
  {
    ATerm k_64 = t;
    int l_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_64 = NULL;
        t = term_n_57;
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_64, term_n_57);
        t = j_14(m_64, r_64, t);
        LocalPopChoice(l_64);
      }
    else
      {
        t = k_64;
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
  t = (ATerm) ATmakeAppl(sym__3, m_64, term_n_57, i_64);
  t = lookup_table_0_1(m_64, t);
  q_64 = t;
  t = term_n_57;
  o_64 = t;
  t = q_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(o_64, i_64, p_64, t);
  t = j_64;
  {
    static ATerm d_27 (ATerm t)
    {
      ATerm u_64 = NULL;
      u_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_64, u_64);
      t = l_13(m_64, u_64, t);
      return(t);
    }
    t = map_1_0(d_27, t);
  }
  t = n_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm s_64 = t;
  int t_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_83(t);
      t = j_83(t);
      LocalPopChoice(t_64);
    }
  else
    {
      t = s_64;
      t = j_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  z_64 = t;
  t = v_103(t);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_64, term_n_57);
  {
    ATerm v_64 = t;
    int w_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_64 = ATgetArgument(t, 0);
            ATerm f_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_57;
        n_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_64, term_n_57);
        t = j_14(y_64, n_65, t);
        LocalPopChoice(w_64);
      }
    else
      {
        t = v_64;
        t = (ATerm) ATempty;
      }
  }
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_64, term_n_57, (ATerm) ATinsert(CheckATermList(a_65), (ATerm) ATempty));
  t = lookup_table_0_1(y_64, t);
  e_65 = t;
  t = term_n_57;
  b_65 = t;
  t = (ATerm) ATinsert(CheckATermList(a_65), (ATerm) ATempty);
  c_65 = t;
  t = e_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(b_65, c_65, d_65, t);
  t = z_64;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_s_57;
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm d_66 = NULL;
  d_66 = t;
  {
    ATerm g_65 = t;
    int h_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_66);
        LocalPopChoice(h_65);
      }
    else
      {
        t = g_65;
        t = d_66;
      }
  }
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_115 (ATerm), ATerm t)
{
  ATerm t_65 = NULL;
  static ATerm f_27 (ATerm t)
  {
    ATerm w_65 = NULL;
    w_65 = t;
    {
      ATerm i_65 = t;
      int j_65 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_65 = NULL,a_66 = NULL;
          t = term_s_57;
          x_65 = t;
          t = term_n_57;
          a_66 = t;
          t = term_a_59;
          t = j_14(x_65, a_66, t);
          LocalPopChoice(j_65);
        }
      else
        {
          t = i_65;
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
          ATerm k_65 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_65;
    t = map_1_0(g_27, t);
    t = w_65;
    t = end_scope_1_0(i_27, t);
    return(t);
  }
  t = begin_scope_1_0(e_27, t);
  t = restore_always_2_0(u_115, f_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  {
    ATerm l_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
        t = term_t_35;
        o_66 = t;
        t = term_u_35;
        p_66 = t;
        t = term_v_35;
        t = j_14(o_66, p_66, t);
        n_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_66, term_v_38);
        t = geq_0_0(t);
        t = i_66;
        t = g_106(t);
        LocalPopChoice(m_65);
      }
    else
      {
        t = l_65;
        t = i_66;
      }
  }
  return(t);
}
static ATerm n_13 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm o_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_41, h_41);
      LocalPopChoice(p_65);
    }
  else
    {
      t = o_65;
      t = SSL_addr(g_41, h_41);
    }
  return(t);
}
static ATerm p_13 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm q_65 = t;
  int r_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_41, n_41);
      LocalPopChoice(r_65);
    }
  else
    {
      t = q_65;
      t = SSL_subtr(m_41, n_41);
    }
  return(t);
}
static ATerm q_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,v_66 = NULL,w_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  t = p_13(a_50, b_50, t);
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, d_50);
  t = p_13(c_50, d_50, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
  t = p_13(e_50, f_50, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, h_50);
  t = p_13(g_50, h_50, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_66, s_66, v_66, w_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,c_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,j_67 = NULL,k_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_65 = ATgetArgument(t, 0);
      if(match_cons(s_65, sym__4))
        {
          y_66 = ATgetArgument(s_65, 0);
          z_66 = ATgetArgument(s_65, 1);
          c_67 = ATgetArgument(s_65, 2);
          f_67 = ATgetArgument(s_65, 3);
        }
      else
        _fail(t);
      {
        ATerm u_65 = ATgetArgument(t, 1);
        if(match_cons(u_65, sym__4))
          {
            g_67 = ATgetArgument(u_65, 0);
            h_67 = ATgetArgument(u_65, 1);
            j_67 = ATgetArgument(u_65, 2);
            k_67 = ATgetArgument(u_65, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_13(y_66, z_66, c_67, f_67, g_67, h_67, j_67, k_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,v_67 = NULL,z_67 = NULL,b_68 = NULL,d_68 = NULL,h_68 = NULL,l_68 = NULL;
  r_67 = t;
  t = times_0_0(t);
  l_67 = t;
  t = r_67;
  t = u_109(t);
  m_67 = t;
  t = times_0_0(t);
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_67, l_67);
  t = diff_times_0_0(t);
  p_67 = t;
  if(match_cons(t, sym__4))
    {
      d_68 = ATgetArgument(t, 0);
      {
        ATerm v_65 = ATgetArgument(t, 1);
      }
      h_68 = ATgetArgument(t, 2);
      {
        ATerm y_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, h_68);
  t = n_13(d_68, h_68, t);
  l_68 = t;
  t = SSL_TicksToSeconds(l_68);
  n_67 = t;
  t = p_67;
  if(match_cons(t, sym__4))
    {
      ATerm z_65 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
      {
        ATerm b_66 = ATgetArgument(t, 2);
      }
      z_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_67, z_67);
  t = n_13(v_67, z_67, t);
  b_68 = t;
  t = SSL_TicksToSeconds(b_68);
  o_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_67), term_e_66), n_67), term_c_66);
  t = t_109(t);
  t = m_67;
  return(t);
}
ATerm debug_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,q_68 = NULL,r_68 = NULL;
  m_68 = t;
  t = n_90(t);
  n_68 = t;
  t = term_x_35;
  q_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_68), n_68);
  r_68 = t;
  t = SSL_printnl(q_68, r_68);
  t = m_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL;
  s_68 = t;
  t = term_t_35;
  w_68 = t;
  t = term_f_66;
  x_68 = t;
  t = term_g_66;
  t = j_14(w_68, x_68, t);
  t_68 = t;
  t = term_b_37;
  u_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_66), term_t_66), term_q_66), term_m_66), term_l_66), term_k_66), term_j_66), t_68), term_h_66);
  v_68 = t;
  t = SSL_printnl(u_68, v_68);
  t = s_68;
  return(t);
}
static ATerm r_13 (ATerm k_44, ATerm l_44, ATerm t)
{
  t = SSL_copy(k_44, l_44);
  return(t);
}
static ATerm s_13 (ATerm t_55, ATerm t)
{
  t = SSL_hashtable_keys(t_55);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL;
  static ATerm j_27 (ATerm t)
  {
    ATerm a_69 = NULL,b_69 = NULL;
    a_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_68), a_69);
    t = j_14(not_null(y_68), a_69, t);
    b_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
    return(t);
  }
  if(((y_68 != NULL) && (y_68 != t)))
    _fail(t);
  else
    y_68 = t;
  t = lookup_table_0_1(y_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_13(z_68, t);
  t = map_1_0(j_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm d_69 = NULL;
  d_69 = t;
  {
    ATerm x_66 = t;
    int a_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
        t = term_t_35;
        g_69 = t;
        t = term_u_35;
        h_69 = t;
        t = term_v_35;
        t = j_14(g_69, h_69, t);
        f_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_69, term_j_45);
        t = geq_0_0(t);
        t = d_69;
        t = k_106(t);
        LocalPopChoice(a_67);
      }
    else
      {
        t = x_66;
        t = d_69;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm k_69 = NULL;
  k_69 = t;
  {
    ATerm b_67 = t;
    int d_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
        t = term_t_35;
        n_69 = t;
        t = term_u_35;
        o_69 = t;
        t = term_v_35;
        t = j_14(n_69, o_69, t);
        m_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_69, term_j_42);
        t = geq_0_0(t);
        t = k_69;
        t = j_106(t);
        LocalPopChoice(d_67);
      }
    else
      {
        t = b_67;
        t = k_69;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,b_70 = NULL;
  y_69 = t;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      b_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_67 = t;
    int i_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_70;
        if((z_69 != t))
          {
            _fail(t);
          }
        t = y_69;
        LocalPopChoice(i_67);
      }
    else
      {
        t = e_67;
        t = (ATerm) ATmakeAppl(sym__2, z_69, b_70);
        {
          ATerm s_67 = t;
          int t_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_69, b_70);
              LocalPopChoice(t_67);
            }
          else
            {
              t = s_67;
              t = SSL_gtr(z_69, b_70);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_69, b_70);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm g_70 = NULL;
  g_70 = t;
  {
    ATerm u_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_70 = NULL,j_70 = NULL,o_70 = NULL;
        t = term_t_35;
        j_70 = t;
        t = term_u_35;
        o_70 = t;
        t = term_v_35;
        t = j_14(j_70, o_70, t);
        i_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_70, term_n_42);
        t = geq_0_0(t);
        t = g_70;
        t = l_106(t);
        LocalPopChoice(w_67);
      }
    else
      {
        t = u_67;
        t = g_70;
      }
  }
  return(t);
}
static ATerm v_13 (ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  t = n_95(t);
  {
    static ATerm k_27 (ATerm t)
    {
      ATerm s_70 = NULL;
      s_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_29, s_70);
      t = m_95(t);
      return(t);
    }
    t = fetch_1_0(k_27, t);
  }
  t = m_29;
  return(t);
}
static ATerm w_13 (ATerm j_95 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm r_71 (ATerm t)
  {
    ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
    i_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_71 = ATgetFirst((ATermList) t);
            k_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_67 = t;
          int y_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_71;
              {
                static ATerm m_27 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = v_13(j_95, m_27, j_71, k_71, t);
              }
              t = r_71(t);
              LocalPopChoice(y_67);
            }
          else
            {
              t = x_67;
              {
                ATerm y_38 = NULL,b_39 = NULL,y_14 = NULL;
                t = SSLgetAnnotations(i_71);
                y_38 = t;
                t = k_71;
                t = r_71(t);
                b_39 = t;
                t = (ATerm) ATinsert(CheckATermList(b_39), j_71);
                y_14 = t;
                t = SSLsetAnnotations(y_14, y_38);
              }
            }
        }
      }
    return(t);
  }
  t = j_29;
  t = r_71(t);
  return(t);
}
static ATerm n_27 (ATerm t)
{
  ATerm f_72 = NULL;
  if(match_cons(t, sym__2))
    {
      f_72 = ATgetArgument(t, 0);
      if((f_72 != ATgetArgument(t, 1)))
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
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  {
    ATerm a_68 = t;
    int c_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_68 = ATgetArgument(t, 0);
            ATerm f_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = j_14(v_53, w_53, t);
        LocalPopChoice(c_68);
      }
    else
      {
        t = a_68;
        t = (ATerm) ATempty;
      }
  }
  y_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_71, x_53);
  t = w_13(n_27, y_71, x_53, t);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_53, w_53, x_71);
  t = lookup_table_0_1(v_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(w_53, x_71, z_71, t);
  t = w_71;
  return(t);
}
static ATerm y_13 (ATerm c_111 (ATerm), ATerm f_54, ATerm e_54, ATerm t)
{
  static ATerm s_27 (ATerm t)
  {
    ATerm i_72 = NULL,j_72 = NULL;
    if(match_cons(t, sym__2))
      {
        i_72 = ATgetArgument(t, 0);
        j_72 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_54, i_72, j_72);
    t = c_111(t);
    return(t);
  }
  t = e_54;
  t = map_1_0(s_27, t);
  return(t);
}
static ATerm c_14 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_access(d_38, e_38);
  return(t);
}
static ATerm j_73 (ATerm b_73, ATerm t)
{
  t = SSL_fclose(b_73);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL;
  f_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_73 = ATgetArgument(t, 0);
      {
        ATerm g_68 = t;
        int i_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_73);
            LocalPopChoice(i_68);
          }
        else
          {
            t = g_68;
            t = j_73(f_73, t);
          }
      }
    }
  else
    {
      t = j_73(f_73, t);
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
  ATerm k_73 = NULL;
  t = SSL_fopen(m_38, n_38);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_73);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_73 = NULL;
  t = SSL_stdin_stream();
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_73 = NULL;
  t = SSL_stdout_stream();
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_73 = NULL;
  t = SSL_stderr_stream();
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_73);
  return(t);
}
static ATerm j_75 (ATerm y_73, ATerm t)
{
  ATerm z_73 = NULL;
  t = SSL_explode_term(y_73);
  if(match_cons(t, sym__2))
    {
      ATerm j_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_68 = ATgetArgument(t, 1);
        if(((ATgetType(k_68) == AT_LIST) && !(ATisEmpty(k_68))))
          {
            z_73 = ATgetFirst((ATermList) k_68);
            {
              ATerm o_68 = (ATerm) ATgetNext((ATermList) k_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_75 (ATerm e_74, ATerm f_74, ATerm g_74, ATerm t)
{
  ATerm j_74 = NULL,l_74 = NULL,m_74 = NULL,p_74 = NULL,c_15 = NULL;
  t = SSLgetAnnotations(g_74);
  m_74 = t;
  t = e_74;
  if(match_cons(t, sym_Path_1))
    {
      p_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_74, f_74);
  c_15 = t;
  t = SSLsetAnnotations(c_15, m_74);
  if(match_cons(t, sym__2))
    {
      j_74 = ATgetArgument(t, 0);
      l_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(j_74, l_74, t);
  return(t);
}
static ATerm m_75 (ATerm r_74, ATerm s_74, ATerm u_74, ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,z_74 = NULL,c_75 = NULL,d_15 = NULL;
  t = SSLgetAnnotations(u_74);
  z_74 = t;
  t = SSL_is_string(r_74);
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_75, s_74);
  d_15 = t;
  t = SSLsetAnnotations(d_15, z_74);
  if(match_cons(t, sym__2))
    {
      w_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(w_74, x_74, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm e_75 = NULL,g_75 = NULL,i_75 = NULL;
  e_75 = t;
  if(match_cons(t, sym__2))
    {
      g_75 = ATgetArgument(t, 0);
      i_75 = ATgetArgument(t, 1);
      {
        ATerm p_68 = t;
        int c_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_75(e_75, t);
            LocalPopChoice(c_69);
          }
        else
          {
            t = p_68;
            {
              ATerm e_69 = t;
              int i_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_75(g_75, i_75, e_75, t);
                  LocalPopChoice(i_69);
                }
              else
                {
                  t = e_69;
                  t = m_75(g_75, i_75, e_75, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_75(e_75, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL,x_75 = NULL;
  x_75 = t;
  {
    ATerm j_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_75, term_p_69);
        t = b_14(t);
        LocalPopChoice(l_69);
      }
    else
      {
        t = j_69;
        {
          ATerm n_40 = NULL,o_40 = NULL;
          t = term_q_69;
          o_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_69, x_75);
          t = p_14(o_40, x_75, t);
          n_40 = t;
          t = SSL_perror(n_40);
          _fail(t);
        }
      }
  }
  p_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_13(q_75, t);
  o_75 = t;
  t = p_75;
  t = fclose_0_0(t);
  t = o_75;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  t = term_r_69;
  return(t);
}
static ATerm u_27 (ATerm t)
{
  t = term_s_69;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_76 = NULL,c_76 = NULL;
      b_76 = t;
      t = (ATerm) ATinsert(ATempty, term_v_69);
      c_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_76, (ATerm) ATinsert(ATempty, term_v_69));
      t = c_14(b_76, c_76, t);
      LocalPopChoice(u_69);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_69;
      {
        ATerm w_69 = t;
        int x_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_70 = t;
            if((PushChoice() == 0))
              {
                ATerm d_76 = NULL,e_76 = NULL;
                d_76 = t;
                t = (ATerm) ATinsert(ATempty, term_v_57);
                e_76 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_76, (ATerm) ATinsert(ATempty, term_v_57));
                t = c_14(d_76, e_76, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_70;
              }
            t = debug_1_0(t_27, t);
            LocalPopChoice(x_69);
          }
        else
          {
            t = w_69;
            t = debug_1_0(u_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = debug_1_0(y_27, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_c_70;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_d_70;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  t = term_x_35;
  c_77 = t;
  t = (ATerm) ATinsert(ATempty, term_e_70);
  d_77 = t;
  t = SSL_printnl(c_77, d_77);
  t = b_77;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm f_77 = NULL,h_77 = NULL,i_77 = NULL;
  if(match_cons(t, sym__3))
    {
      f_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
      i_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_13(f_77, h_77, i_77, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm j_77 = NULL,l_77 = NULL,m_77 = NULL;
  j_77 = t;
  t = term_x_35;
  l_77 = t;
  t = (ATerm) ATinsert(ATempty, term_f_70);
  m_77 = t;
  t = SSL_printnl(l_77, m_77);
  t = j_77;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  t = term_x_35;
  o_77 = t;
  t = (ATerm) ATinsert(ATempty, term_e_70);
  p_77 = t;
  t = SSL_printnl(o_77, p_77);
  t = n_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_76 = NULL,i_76 = NULL,j_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,s_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,y_76 = NULL;
  g_76 = t;
  t = if_verbose5_1_0(v_27, t);
  {
    ATerm h_70 = t;
    if((PushChoice() == 0))
      {
        ATerm z_76 = NULL,a_77 = NULL;
        t = term_k_70;
        z_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_76);
        a_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_70, (ATerm) ATmakeAppl(sym_Imported_1, g_76));
        t = j_14(z_76, a_77, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_70;
      }
  }
  j_76 = t;
  t = term_k_70;
  s_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_70, term_l_70, (ATerm) ATinsert(ATempty, g_76));
  t = lookup_table_0_1(s_76, t);
  y_76 = t;
  t = term_l_70;
  u_76 = t;
  t = (ATerm) ATinsert(ATempty, g_76);
  v_76 = t;
  t = y_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(u_76, v_76, w_76, t);
  t = j_76;
  t = if_verbose4_1_0(z_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(b_28, t);
  i_76 = t;
  t = term_k_70;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_70, i_76);
  t = y_13(c_28, q_76, i_76, t);
  t = if_verbose6_1_0(d_28, t);
  t = term_k_70;
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_70, (ATerm)ATmakeAppl(sym_Imported_1, g_76), (ATerm) ATempty);
  t = lookup_table_0_1(l_76, t);
  p_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, g_76);
  m_76 = t;
  t = (ATerm) ATempty;
  n_76 = t;
  t = p_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(m_76, n_76, o_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_70, (ATerm)ATmakeAppl(sym_Imported_1, g_76), (ATerm) ATempty);
  t = if_verbose4_1_0(e_28, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  h_78 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_78;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_78 = ATgetFirst((ATermList) t);
          j_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_70 = t;
        int n_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_40 = NULL,r_41 = NULL,t_41 = NULL,o_18 = NULL;
            t = SSLgetAnnotations(h_78);
            z_40 = t;
            t = i_78;
            t = t_98(t);
            r_41 = t;
            t = j_78;
            t = filter_1_0(t_98, t);
            t_41 = t;
            t = (ATerm) ATinsert(CheckATermList(t_41), r_41);
            o_18 = t;
            t = SSLsetAnnotations(o_18, z_40);
            LocalPopChoice(n_70);
          }
        else
          {
            t = m_70;
            t = j_78;
            t = filter_1_0(t_98, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  static ATerm o_78 (ATerm t)
  {
    ATerm p_70 = t;
    int q_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        t = o_78(t);
        LocalPopChoice(q_70);
      }
    else
      {
        t = p_70;
        t = n_83(t);
      }
    return(t);
  }
  t = o_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_70 = t;
  int t_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_78 = NULL,r_78 = NULL;
      t = term_t_35;
      p_78 = t;
      t = term_u_70;
      r_78 = t;
      t = term_v_70;
      t = j_14(p_78, r_78, t);
      LocalPopChoice(t_70);
    }
  else
    {
      t = r_70;
      {
        ATerm w_70 = t;
        int x_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_78 = NULL;
            t = term_y_70;
            s_78 = t;
            t = SSL_getenv(s_78);
            LocalPopChoice(x_70);
          }
        else
          {
            t = w_70;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = debug_1_0(g_28, t);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = term_z_70;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL;
  t = term_k_70;
  a_79 = t;
  t = term_a_71;
  b_79 = t;
  t = term_b_71;
  t = j_14(a_79, b_79, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_71 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_71;
      }
  }
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = debug_1_0(j_28, t);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_d_71;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_78 = NULL;
  t = if_verbose5_1_0(f_28, t);
  u_78 = t;
  {
    ATerm e_71 = t;
    int f_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_78 = NULL,w_78 = NULL;
        t = term_k_70;
        v_78 = t;
        t = term_l_70;
        w_78 = t;
        t = term_g_71;
        t = j_14(v_78, w_78, t);
        LocalPopChoice(f_71);
      }
    else
      {
        t = e_71;
        {
          ATerm y_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_78 = t;
          t = repeat_2_0(h_28, _id, t);
          t = y_78;
        }
      }
  }
  t = u_78;
  t = if_verbose5_1_0(i_28, t);
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = debug_1_0(l_28, t);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  t = term_h_71;
  return(t);
}
static ATerm e_80 (ATerm h_79, ATerm t)
{
  ATerm j_79 = NULL,l_79 = NULL,n_79 = NULL;
  t = term_k_70;
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_79);
  n_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_70, (ATerm) ATmakeAppl(sym_Tool_1, h_79));
  t = j_14(l_79, n_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_71 = ATgetFirst((ATermList) t);
      if(match_cons(l_71, sym__2))
        {
          ATerm n_71 = ATgetArgument(l_71, 0);
          j_79 = ATgetArgument(l_71, 1);
        }
      else
        _fail(t);
      {
        ATerm m_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_79;
  return(t);
}
static ATerm n_28 (ATerm t)
{
  t = debug_1_0(p_28, t);
  return(t);
}
static ATerm p_28 (ATerm t)
{
  t = term_h_71;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  t = term_k_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_28, t);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  t = term_o_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_71 = t;
  int q_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_79 = NULL,q_79 = NULL,r_79 = NULL;
      t = if_verbose5_1_0(k_28, t);
      t = xtc_load_0_0(t);
      r_79 = t;
      if(match_cons(t, sym__2))
        {
          o_79 = ATgetArgument(t, 0);
          q_79 = ATgetArgument(t, 1);
          {
            ATerm s_71 = t;
            int t_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_79 = NULL,v_79 = NULL,x_79 = NULL;
                t = term_k_70;
                v_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_79);
                x_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_70, (ATerm) ATmakeAppl(sym_Tool_1, o_79));
                t = j_14(v_79, x_79, t);
                {
                  static ATerm m_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_79 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_79 != NULL) && (u_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_28, t);
                }
                t = not_null(u_79);
                LocalPopChoice(t_71);
              }
            else
              {
                t = s_71;
                t = e_80(r_79, t);
              }
          }
        }
      else
        {
          t = e_80(r_79, t);
        }
      t = if_verbose5_1_0(n_28, t);
      LocalPopChoice(q_71);
    }
  else
    {
      t = p_71;
      {
        ATerm d_80 = NULL,o_42 = NULL,p_42 = NULL;
        d_80 = t;
        t = term_x_35;
        o_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_71), d_80), term_u_71);
        p_42 = t;
        t = SSL_printnl(o_42, p_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_71), d_80), term_u_71);
        t = if_verbose5_1_0(q_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm d_14 (ATerm j_48, ATerm i_48, ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,l_80 = NULL;
  t = j_48;
  {
    ATerm a_72 = t;
    int b_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_80 = NULL;
        t = term_t_35;
        n_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_35, j_48);
        t = j_14(n_80, j_48, t);
        LocalPopChoice(b_72);
      }
    else
      {
        t = a_72;
        t = (ATerm) ATempty;
      }
  }
  h_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, h_80);
  t = conc_0_0(t);
  g_80 = t;
  t = term_t_35;
  i_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, j_48, g_80);
  t = lookup_table_0_1(i_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(j_48, g_80, l_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, j_48, g_80);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,v_80 = NULL,y_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
      t = term_x_36;
      t = p_0(t);
      z_80 = t;
      t = term_c_72;
      a_81 = t;
      t = term_d_72;
      b_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_72, term_d_72, z_80);
      t = k_14(a_81, b_81, z_80, t);
      _fail(t);
    }
  else
    {
      ATerm g_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_80 = ATgetFirst((ATermList) t);
          t_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_80 = ATgetFirst((ATermList) t);
          y_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_80;
      t = n_0(t);
      t = v_80;
      t = o_0(t);
      g_81 = t;
      t = (ATerm) ATinsert(CheckATermList(y_80), g_81);
    }
  return(t);
}
static ATerm s_28 (ATerm t)
{
  ATerm o_81 = NULL;
  o_81 = t;
  if(match_string(t, "-S"))
    {
      t = o_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_81;
    }
  return(t);
}
static ATerm t_28 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  t = term_u_35;
  q_81 = t;
  t = term_o_35;
  r_81 = t;
  t = term_e_72;
  t = o_14(q_81, r_81, t);
  t = term_g_72;
  return(t);
}
static ATerm u_28 (ATerm t)
{
  t = term_h_72;
  return(t);
}
static ATerm v_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_28 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  t = SSL_string_to_int(s_81);
  t_81 = t;
  t = term_u_35;
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, t_81);
  t = o_14(u_81, t_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_81);
  return(t);
}
static ATerm c_29 (ATerm t)
{
  t = term_k_72;
  return(t);
}
static ATerm l_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL;
  t = term_l_72;
  v_81 = t;
  t = term_x_36;
  w_81 = t;
  t = term_m_72;
  t = o_14(v_81, w_81, t);
  t = term_n_72;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_o_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_28, t_28, u_28, t);
      LocalPopChoice(q_72);
    }
  else
    {
      t = p_72;
      {
        ATerm r_72 = t;
        int s_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_28, w_28, c_29, t);
            LocalPopChoice(s_72);
          }
        else
          {
            t = r_72;
            t = Option_3_0(l_29, o_29, p_29, t);
          }
      }
    }
  return(t);
}
static ATerm e_14 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm x_81 = NULL;
  t = lookup_table_0_1(t_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_14(u_54, x_81, t);
  return(t);
}
static ATerm f_14 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm t_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_81 = NULL,a_82 = NULL;
      t = term_t_35;
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_35, g_48);
      t = j_14(a_82, g_48, t);
      t = term_t_35;
      z_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_35, g_48);
      t = e_14(z_81, g_48, t);
      LocalPopChoice(u_72);
    }
  else
    {
      t = t_72;
      t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
      t = o_14(g_48, h_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_91 (ATerm), ATerm t)
{
  static ATerm c_83 (ATerm t)
  {
    ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL;
    b_83 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_82 = ATgetFirst((ATermList) t);
        a_83 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_42 = NULL,e_43 = NULL,a_19 = NULL;
          t = SSLgetAnnotations(b_83);
          w_42 = t;
          t = a_83;
          t = c_83(t);
          e_43 = t;
          t = (ATerm) ATinsert(CheckATermList(e_43), z_82);
          a_19 = t;
          t = SSLsetAnnotations(a_19, w_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_83;
        t = p_91(t);
      }
    return(t);
  }
  t = c_83(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_82 = NULL,h_82 = NULL,i_82 = NULL;
  e_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_82;
    }
  else
    {
      static ATerm q_29 (ATerm t)
      {
        t = not_null(i_82);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_82 = ATgetFirst((ATermList) t);
          if(((i_82 != NULL) && (i_82 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_82;
      t = at_end_1_0(q_29, t);
    }
  return(t);
}
static ATerm t_83 (ATerm g_83, ATerm t)
{
  ATerm h_83 = NULL;
  t = SSL_explode_term(g_83);
  if(match_cons(t, sym__2))
    {
      ATerm v_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_83;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_83 = NULL,p_83 = NULL,q_83 = NULL;
  q_83 = t;
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      p_83 = ATgetArgument(t, 1);
      {
        ATerm w_72 = t;
        int x_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_29 (ATerm t)
            {
              t = p_83;
              return(t);
            }
            t = l_83;
            t = at_end_1_0(r_29, t);
            LocalPopChoice(x_72);
          }
        else
          {
            t = w_72;
            t = t_83(q_83, t);
          }
      }
    }
  else
    {
      t = t_83(q_83, t);
    }
  return(t);
}
static ATerm g_14 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  t = k_48;
  {
    ATerm y_72 = t;
    int z_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_83 = NULL;
        t = term_t_35;
        z_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_35, k_48);
        t = j_14(z_83, k_48, t);
        LocalPopChoice(z_72);
      }
    else
      {
        t = y_72;
        t = (ATerm) ATempty;
      }
  }
  v_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_83, l_48);
  t = conc_0_0(t);
  u_83 = t;
  t = term_t_35;
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, k_48, u_83);
  t = lookup_table_0_1(w_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(k_48, u_83, x_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, k_48, u_83);
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm b_84 = NULL;
  b_84 = t;
  if(match_string(t, "-o"))
    {
      t = b_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_84;
    }
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm c_84 = NULL,d_84 = NULL;
  c_84 = t;
  t = term_d_36;
  d_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, c_84);
  t = o_14(d_84, c_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_84);
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = term_a_73;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_29, t_29, w_29, t);
  return(t);
}
static ATerm e_30 (ATerm t)
{
  ATerm f_84 = NULL;
  f_84 = t;
  if(match_string(t, "-i"))
    {
      t = f_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_84;
    }
  return(t);
}
static ATerm h_30 (ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL;
  g_84 = t;
  t = term_c_55;
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_55, g_84);
  t = o_14(h_84, g_84, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_84);
  return(t);
}
static ATerm j_30 (ATerm t)
{
  t = term_c_73;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_30, h_30, j_30, t);
  return(t);
}
static ATerm k_30 (ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  if(match_string(t, "-I"))
    {
      t = s_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = s_84;
    }
  return(t);
}
static ATerm l_30 (ATerm t)
{
  ATerm t_84 = NULL,v_84 = NULL,w_84 = NULL;
  t_84 = t;
  t = term_c_60;
  v_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_84), term_c_60);
  w_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_60, (ATerm) ATinsert(ATinsert(ATempty, t_84), term_c_60));
  t = g_14(v_84, w_84, t);
  t = term_x_36;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_d_73;
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  if(match_string(t, "--main"))
    {
      t = x_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = x_84;
    }
  return(t);
}
static ATerm y_30 (ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL;
  y_84 = t;
  t = term_b_58;
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_58, y_84);
  t = o_14(z_84, y_84, t);
  t = term_x_36;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_g_73;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm a_85 = NULL;
  a_85 = t;
  if(match_string(t, "--library"))
    {
      t = a_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = a_85;
    }
  return(t);
}
static ATerm e_31 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL;
  t = term_f_38;
  b_85 = t;
  t = term_x_36;
  c_85 = t;
  t = term_h_73;
  t = o_14(b_85, c_85, t);
  t = term_x_36;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_i_73;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
  h_85 = t;
  t = term_u_37;
  i_85 = t;
  t = (ATerm) ATinsert(ATempty, h_85);
  j_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_37, (ATerm) ATinsert(ATempty, h_85));
  t = g_14(i_85, j_85, t);
  t = term_x_36;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_m_73;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_31 (ATerm t)
{
  ATerm k_85 = NULL,m_85 = NULL,n_85 = NULL;
  k_85 = t;
  t = term_m_36;
  m_85 = t;
  t = (ATerm) ATinsert(ATempty, k_85);
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATempty, k_85));
  t = d_14(m_85, n_85, t);
  t = term_x_36;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_n_73;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
  o_85 = t;
  t = term_f_36;
  p_85 = t;
  t = (ATerm) ATinsert(ATempty, o_85);
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATempty, o_85));
  t = d_14(p_85, q_85, t);
  t = term_x_36;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_o_73;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  t = term_o_36;
  r_85 = t;
  t = term_x_36;
  s_85 = t;
  t = term_r_73;
  t = o_14(r_85, s_85, t);
  t = term_x_36;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_s_73;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL;
  t = term_x_59;
  t_85 = t;
  t = term_x_36;
  u_85 = t;
  t = term_t_73;
  t = o_14(t_85, u_85, t);
  t = term_x_36;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_u_73;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm v_85 = NULL,y_85 = NULL;
  t = term_l_55;
  v_85 = t;
  t = term_x_36;
  y_85 = t;
  t = term_v_73;
  t = o_14(v_85, y_85, t);
  t = term_x_36;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_w_73;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  t = SSL_string_to_int(z_85);
  a_86 = t;
  t = term_q_40;
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_40, a_86);
  t = o_14(b_86, a_86, t);
  t = term_x_36;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_x_73;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_32 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  c_86 = t;
  t = SSL_string_to_int(c_86);
  d_86 = t;
  t = term_u_40;
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_40, d_86);
  t = o_14(e_86, d_86, t);
  t = term_x_36;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_a_74;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  t = term_l_43;
  f_86 = t;
  t = term_x_36;
  g_86 = t;
  t = term_b_74;
  t = f_14(f_86, g_86, t);
  t = term_x_36;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_c_74;
  return(t);
}
static ATerm p_32 (ATerm t)
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
static ATerm q_32 (ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL;
  t = term_d_74;
  i_86 = t;
  t = term_x_36;
  j_86 = t;
  t = term_h_74;
  t = o_14(i_86, j_86, t);
  t = term_x_36;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_i_74;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_k_74;
  k_86 = t;
  t = term_x_36;
  l_86 = t;
  t = term_n_74;
  t = o_14(k_86, l_86, t);
  t = term_x_36;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  t = term_o_74;
  return(t);
}
static ATerm w_32 (ATerm t)
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
static ATerm x_32 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL;
  t = term_q_74;
  n_86 = t;
  t = term_x_36;
  o_86 = t;
  t = term_t_74;
  t = o_14(n_86, o_86, t);
  t = term_x_36;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_v_74;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm p_86 = NULL;
  p_86 = t;
  if(match_string(t, "--warning"))
    {
      t = p_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = p_86;
    }
  return(t);
}
static ATerm b_33 (ATerm t)
{
  ATerm s_86 = NULL;
  s_86 = t;
  {
    ATerm y_74 = t;
    int a_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,c_87 = NULL,d_87 = NULL,d_19 = NULL;
        t = term_t_35;
        x_86 = t;
        t = term_f_55;
        y_86 = t;
        t = term_g_55;
        t = j_14(x_86, y_86, t);
        d_87 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_87 = ATgetFirst((ATermList) t);
            c_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_87);
        z_86 = t;
        t = a_87;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = c_87;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_87), a_87);
        d_19 = t;
        t = SSLsetAnnotations(d_19, z_86);
        t = term_f_55;
        t_86 = t;
        t = (ATerm) ATinsert(ATempty, s_86);
        w_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, s_86));
        t = o_14(t_86, w_86, t);
        LocalPopChoice(a_75);
      }
    else
      {
        t = y_74;
        {
          ATerm e_87 = NULL,h_87 = NULL;
          t = term_f_55;
          e_87 = t;
          t = (ATerm) ATinsert(ATempty, s_86);
          h_87 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, s_86));
          t = d_14(e_87, h_87, t);
        }
      }
  }
  t = term_x_36;
  return(t);
}
static ATerm c_33 (ATerm t)
{
  t = term_b_75;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_33 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,m_87 = NULL;
  i_87 = t;
  t = term_l_56;
  j_87 = t;
  t = term_v_38;
  m_87 = t;
  t = term_d_75;
  t = o_14(j_87, m_87, t);
  t = i_87;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_l_56;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL;
  n_87 = t;
  t = term_o_56;
  o_87 = t;
  t = term_o_35;
  p_87 = t;
  t = term_f_75;
  t = o_14(o_87, p_87, t);
  t = n_87;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_o_56;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_33 (ATerm t)
{
  ATerm q_87 = NULL,r_87 = NULL;
  t = term_l_60;
  q_87 = t;
  t = term_x_36;
  r_87 = t;
  t = term_h_75;
  t = o_14(q_87, r_87, t);
  t = term_x_36;
  return(t);
}
static ATerm n_33 (ATerm t)
{
  t = term_l_75;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm n_75 = t;
  int r_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_75);
    }
  else
    {
      t = n_75;
      {
        ATerm s_75 = t;
        int t_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(t_75);
          }
        else
          {
            t = s_75;
            {
              ATerm u_75 = t;
              int v_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(k_30, l_30, p_30, t);
                  LocalPopChoice(v_75);
                }
              else
                {
                  t = u_75;
                  {
                    ATerm w_75 = t;
                    int y_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(x_30, y_30, a_31, t);
                        LocalPopChoice(y_75);
                      }
                    else
                      {
                        t = w_75;
                        {
                          ATerm z_75 = t;
                          int a_76 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(d_31, e_31, f_31, t);
                              LocalPopChoice(a_76);
                            }
                          else
                            {
                              t = z_75;
                              {
                                ATerm f_76 = t;
                                int h_76 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(g_31, h_31, j_31, t);
                                    LocalPopChoice(h_76);
                                  }
                                else
                                  {
                                    t = f_76;
                                    {
                                      ATerm k_76 = t;
                                      int r_76 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(k_31, l_31, m_31, t);
                                          LocalPopChoice(r_76);
                                        }
                                      else
                                        {
                                          t = k_76;
                                          {
                                            ATerm t_76 = t;
                                            int x_76 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(n_31, o_31, p_31, t);
                                                LocalPopChoice(x_76);
                                              }
                                            else
                                              {
                                                t = t_76;
                                                {
                                                  ATerm e_77 = t;
                                                  int g_77 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(q_31, r_31, t_31, t);
                                                      LocalPopChoice(g_77);
                                                    }
                                                  else
                                                    {
                                                      t = e_77;
                                                      {
                                                        ATerm k_77 = t;
                                                        int q_77 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(u_31, v_31, w_31, t);
                                                            LocalPopChoice(q_77);
                                                          }
                                                        else
                                                          {
                                                            t = k_77;
                                                            {
                                                              ATerm r_77 = t;
                                                              int s_77 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(x_31, y_31, z_31, t);
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
                                                                        t = ArgOption_3_0(a_32, b_32, c_32, t);
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
                                                                              t = ArgOption_3_0(d_32, e_32, g_32, t);
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
                                                                                    t = Option_3_0(h_32, m_32, n_32, t);
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
                                                                                          t = verbose_option_0_0(t);
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
                                                                                                t = Option_3_0(p_32, q_32, r_32, t);
                                                                                                LocalPopChoice(c_78);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = b_78;
                                                                                                {
                                                                                                  ATerm d_78 = t;
                                                                                                  int e_78 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(s_32, t_32, u_32, t);
                                                                                                      LocalPopChoice(e_78);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_78;
                                                                                                      {
                                                                                                        ATerm f_78 = t;
                                                                                                        int g_78 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(w_32, x_32, y_32, t);
                                                                                                            LocalPopChoice(g_78);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_78;
                                                                                                            {
                                                                                                              ATerm k_78 = t;
                                                                                                              int l_78 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(z_32, b_33, c_33, t);
                                                                                                                  LocalPopChoice(l_78);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_78;
                                                                                                                  {
                                                                                                                    ATerm m_78 = t;
                                                                                                                    int n_78 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(d_33, e_33, f_33, t);
                                                                                                                        LocalPopChoice(n_78);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = m_78;
                                                                                                                        {
                                                                                                                          ATerm q_78 = t;
                                                                                                                          int t_78 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(g_33, i_33, j_33, t);
                                                                                                                              LocalPopChoice(t_78);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_78;
                                                                                                                              t = Option_3_0(k_33, m_33, n_33, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm h_14 (ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm s_87 = NULL;
  t = SSL_hashtable_remove(s_55, r_55);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_87);
  return(t);
}
static ATerm i_14 (ATerm w_55, ATerm t)
{
  ATerm t_87 = NULL;
  t = SSL_hashtable_destroy(w_55);
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_87);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
  u_87 = t;
  t = table_hashtable_0_0(t);
  v_87 = t;
  t = lookup_table_0_1(u_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(x_87, t);
  t = v_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_14(u_87, w_87, t);
  t = u_87;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_79), term_l_66), term_s_79), term_p_79), term_m_79), term_l_66), term_k_79), term_i_79), term_g_79), term_f_79), term_e_79), term_d_79), term_c_79), term_z_78), term_x_78);
  return(t);
}
ATerm map_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  static ATerm m_88 (ATerm t)
  {
    ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
    j_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_88;
      }
    else
      {
        ATerm q_43 = NULL,w_43 = NULL,b_44 = NULL,j_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_88 = ATgetFirst((ATermList) t);
            l_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_88);
        q_43 = t;
        t = k_88;
        t = y_90(t);
        w_43 = t;
        t = l_88;
        t = m_88(t);
        b_44 = t;
        t = (ATerm) ATinsert(CheckATermList(b_44), w_43);
        j_19 = t;
        t = SSLsetAnnotations(j_19, q_43);
      }
    return(t);
  }
  t = m_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_88 = ATgetFirst((ATermList) t);
      q_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_88 = NULL,v_88 = NULL;
        static ATerm o_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_88)), not_null(v_88));
          return(t);
        }
        t = q_88;
        t = k_0(t);
        if(((u_88 != NULL) && (u_88 != t)))
          _fail(t);
        else
          u_88 = t;
        t = p_88;
        t = i_0(t);
        if(((v_88 != NULL) && (v_88 != t)))
          _fail(t);
        else
          v_88 = t;
        t = q_88;
        t = reverse_acc_2_0(i_0, o_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_36;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_88 = NULL;
  t = term_x_36;
  t = g_0(t);
  w_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_80), w_88), term_b_80), term_l_66), term_a_80), term_l_66), term_z_79), term_y_79), term_l_66), term_w_79);
  return(t);
}
static ATerm r_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_33 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_89), term_f_80);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,e_89 = NULL;
  ATerm j_80 = t;
  int k_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_89 = NULL,g_89 = NULL;
      t = term_t_35;
      f_89 = t;
      t = term_m_80;
      g_89 = t;
      t = term_o_80;
      t = j_14(f_89, g_89, t);
      a_89 = t;
      LocalPopChoice(k_80);
    }
  else
    {
      t = j_80;
      {
        static ATerm p_33 (ATerm t)
        {
          ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL,n_19 = NULL;
          l_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              k_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_89);
          j_89 = t;
          t = k_89;
          if(((a_89 != NULL) && (a_89 != t)))
            _fail(t);
          else
            a_89 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, k_89);
          n_19 = t;
          t = SSLsetAnnotations(n_19, j_89);
          return(t);
        }
        t = fetch_1_0(p_33, t);
      }
    }
  {
    ATerm p_80 = t;
    int q_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_33 (ATerm t)
        {
          t = not_null(a_89);
          return(t);
        }
        t = short_description_1_0(q_33, t);
        t = echo_0_0(t);
        LocalPopChoice(q_80);
      }
    else
      {
        t = p_80;
      }
  }
  t = term_r_80;
  t = echo_0_0(t);
  t = term_c_72;
  b_89 = t;
  t = term_d_72;
  e_89 = t;
  t = term_u_80;
  t = j_14(b_89, e_89, t);
  t = reverse_acc_2_0(_id, r_33, t);
  t = map_1_0(s_33, t);
  {
    ATerm w_80 = t;
    int x_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_89 = NULL;
        static ATerm u_33 (ATerm t)
        {
          t = not_null(a_89);
          return(t);
        }
        t = long_description_1_0(u_33, t);
        s_89 = t;
        t = (ATerm) ATinsert(CheckATermList(s_89), term_l_66);
        t = echo_0_0(t);
        LocalPopChoice(x_80);
      }
    else
      {
        t = w_80;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  static ATerm c_91 (ATerm t)
  {
    ATerm x_90 = NULL,a_91 = NULL,b_91 = NULL;
    x_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_91 = ATgetFirst((ATermList) t);
        b_91 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_81 = t;
      int d_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_44 = NULL,v_44 = NULL,p_19 = NULL;
          t = SSLgetAnnotations(x_90);
          p_44 = t;
          t = a_91;
          t = i_91(t);
          v_44 = t;
          t = (ATerm) ATinsert(CheckATermList(b_91), v_44);
          p_19 = t;
          t = SSLsetAnnotations(p_19, p_44);
          LocalPopChoice(d_81);
        }
      else
        {
          t = c_81;
          {
            ATerm l_45 = NULL,q_45 = NULL,q_19 = NULL;
            t = SSLgetAnnotations(x_90);
            l_45 = t;
            t = b_91;
            t = c_91(t);
            q_45 = t;
            t = (ATerm) ATinsert(CheckATermList(q_45), a_91);
            q_19 = t;
            t = SSLsetAnnotations(q_19, l_45);
          }
        }
    }
    return(t);
  }
  t = c_91(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL,m_91 = NULL;
  g_91 = t;
  {
    ATerm e_81 = t;
    int f_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_91;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_81 = ATgetFirst((ATermList) t);
                ATerm i_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_91;
          }
        LocalPopChoice(f_81);
      }
    else
      {
        t = e_81;
        t = (ATerm) ATinsert(ATempty, g_91);
      }
  }
  h_91 = t;
  t = term_b_37;
  m_91 = t;
  t = SSL_printnl(m_91, h_91);
  t = g_91;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL;
  t = term_t_35;
  s_91 = t;
  t = term_m_80;
  t_91 = t;
  t = term_o_80;
  t = j_14(s_91, t_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  ATerm w_91 = NULL,x_91 = NULL;
  t = term_j_81;
  w_91 = t;
  t = term_x_36;
  x_91 = t;
  t = term_k_81;
  t = o_14(w_91, x_91, t);
  return(t);
}
static ATerm z_33 (ATerm t)
{
  t = term_l_81;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_34 (ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,c_92 = NULL,d_92 = NULL;
  t = term_j_81;
  c_92 = t;
  t = term_x_36;
  d_92 = t;
  t = term_k_81;
  t = o_14(c_92, d_92, t);
  t = term_q_74;
  y_91 = t;
  t = term_x_36;
  z_91 = t;
  t = term_t_74;
  t = o_14(y_91, z_91, t);
  t = term_m_81;
  return(t);
}
static ATerm k_34 (ATerm t)
{
  t = term_n_81;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_81 = t;
  int y_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_33, w_33, z_33, t);
      LocalPopChoice(y_81);
    }
  else
    {
      t = p_81;
      t = Option_3_0(b_34, f_34, k_34, t);
    }
  return(t);
}
static ATerm k_14 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t)
{
  ATerm f_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,p_92 = NULL;
  f_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
  {
    ATerm b_82 = t;
    int c_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_82 = ATgetArgument(t, 0);
            ATerm j_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
        t = j_14(y_52, z_52, t);
        LocalPopChoice(c_82);
      }
    else
      {
        t = b_82;
        t = (ATerm) ATempty;
      }
  }
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_52, z_52, (ATerm) ATinsert(CheckATermList(j_92), x_52));
  t = lookup_table_0_1(y_52, t);
  p_92 = t;
  t = (ATerm) ATinsert(CheckATermList(j_92), x_52);
  k_92 = t;
  t = p_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(z_52, k_92, l_92, t);
  t = f_92;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,f_93 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_93 = NULL,h_93 = NULL,m_93 = NULL;
      t = term_x_36;
      t = e_0(t);
      g_93 = t;
      t = term_c_72;
      h_93 = t;
      t = term_d_72;
      m_93 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_72, term_d_72, g_93);
      t = k_14(h_93, m_93, g_93, t);
      _fail(t);
    }
  else
    {
      ATerm q_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_93 = ATgetFirst((ATermList) t);
          f_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_93;
      t = c_0(t);
      t = term_x_36;
      t = d_0(t);
      q_93 = t;
      t = (ATerm) ATinsert(CheckATermList(f_93), q_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_61 (ATerm), ATerm m_61 (ATerm), ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,v_19 = NULL;
  y_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_93 = ATgetFirst((ATermList) t);
      t_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_93);
  r_93 = t;
  t = s_93;
  t = l_61(t);
  w_93 = t;
  t = t_93;
  t = m_61(t);
  x_93 = t;
  t = (ATerm) ATinsert(CheckATermList(x_93), w_93);
  v_19 = t;
  t = SSLsetAnnotations(v_19, r_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_110 (ATerm), ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,p_94 = NULL,q_94 = NULL,y_19 = NULL;
  i_94 = t;
  {
    ATerm k_82 = t;
    int l_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_82;
        t = z_110(t);
        LocalPopChoice(l_82);
      }
    else
      {
        t = k_82;
      }
  }
  t = i_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_94 = ATgetFirst((ATermList) t);
      l_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_94);
  j_94 = t;
  t = term_m_80;
  q_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_80, k_94);
  t = o_14(q_94, k_94, t);
  t = l_94;
  {
    static ATerm g_95 (ATerm t)
    {
      ATerm n_82 = t;
      int o_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_82 = t;
          int q_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_94 = NULL;
              u_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_94;
              LocalPopChoice(q_82);
            }
          else
            {
              t = p_82;
              t = z_110(t);
              t = Cons_2_0(_id, g_95, t);
            }
          LocalPopChoice(o_82);
        }
      else
        {
          t = n_82;
          {
            ATerm c_95 = NULL,d_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_95 = ATgetFirst((ATermList) t);
                d_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_95), (ATerm) ATmakeAppl(sym_Undefined_1, c_95));
          }
        }
      return(t);
    }
    t = g_95(t);
  }
  p_94 = t;
  t = (ATerm) ATinsert(CheckATermList(p_94), (ATerm) ATmakeAppl(sym_Program_1, k_94));
  y_19 = t;
  t = SSLsetAnnotations(y_19, j_94);
  return(t);
}
static ATerm p_34 (ATerm t)
{
  ATerm o_96 = NULL;
  o_96 = t;
  if(match_string(t, "--help"))
    {
      t = o_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_96;
        }
    }
  return(t);
}
static ATerm s_34 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL;
  t = term_d_74;
  r_96 = t;
  t = term_x_36;
  s_96 = t;
  t = term_h_74;
  t = o_14(r_96, s_96, t);
  t = term_r_82;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  t = term_s_82;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm r_95 = NULL,y_95 = NULL,d_96 = NULL,e_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,m_96 = NULL;
  d_96 = t;
  t = term_c_72;
  e_96 = t;
  t = term_t_82;
  t = lookup_table_0_1(e_96, t);
  m_96 = t;
  t = term_d_72;
  g_96 = t;
  t = (ATerm) ATempty;
  h_96 = t;
  t = m_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(g_96, h_96, i_96, t);
  t = d_96;
  {
    static ATerm m_34 (ATerm t)
    {
      ATerm u_82 = t;
      int v_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_110(t);
          LocalPopChoice(v_82);
        }
      else
        {
          t = u_82;
          {
            ATerm w_82 = t;
            int x_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_34, s_34, x_34, t);
                LocalPopChoice(x_82);
              }
            else
              {
                t = w_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_34, t);
  }
  {
    ATerm y_82 = t;
    int d_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_97 = NULL;
        h_97 = t;
        {
          ATerm e_83 = t;
          int f_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_46 = NULL;
              t = h_97;
              {
                ATerm k_83 = t;
                int o_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_46 = NULL,h_46 = NULL;
                    t = term_t_35;
                    f_46 = t;
                    t = term_d_74;
                    h_46 = t;
                    t = term_r_83;
                    t = j_14(f_46, h_46, t);
                    LocalPopChoice(o_83);
                  }
                else
                  {
                    t = k_83;
                    t = fetch_1_0(y_34, t);
                  }
              }
              t = h_97;
              t = default_system_usage_0_0(t);
              t = term_o_35;
              d_46 = t;
              t = SSL_exit(d_46);
              LocalPopChoice(f_83);
            }
          else
            {
              t = e_83;
              {
                ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
                t = term_t_35;
                r_46 = t;
                t = term_j_81;
                s_46 = t;
                t = term_s_83;
                t = j_14(r_46, s_46, t);
                t = h_97;
                t = default_system_about_0_0(t);
                t = term_o_35;
                q_46 = t;
                t = SSL_exit(q_46);
              }
            }
        }
        LocalPopChoice(d_83);
      }
    else
      {
        t = y_82;
        {
          ATerm y_83 = t;
          int a_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_97 = NULL,j_97 = NULL,k_97 = NULL;
              static ATerm a_35 (ATerm t)
              {
                ATerm n_97 = NULL,u_97 = NULL,v_97 = NULL,d_20 = NULL;
                v_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_97);
                n_97 = t;
                t = u_97;
                if(((r_95 != NULL) && (r_95 != t)))
                  _fail(t);
                else
                  r_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_97);
                d_20 = t;
                t = SSLsetAnnotations(d_20, n_97);
                return(t);
              }
              t = fetch_1_0(a_35, t);
              t = term_x_35;
              j_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_95)), term_e_84);
              k_97 = t;
              t = SSL_printnl(j_97, k_97);
              t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_95)), term_e_84));
              t = default_system_usage_0_0(t);
              t = term_v_38;
              i_97 = t;
              t = SSL_exit(i_97);
              LocalPopChoice(a_84);
            }
          else
            {
              t = y_83;
            }
        }
      }
  }
  y_95 = t;
  t = term_c_72;
  t = table_destroy_0_0(t);
  t = y_95;
  return(t);
}
static ATerm m_14 (ATerm m_55, ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm h_98 = NULL;
  t = SSL_hashtable_put(o_55, m_55, n_55);
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_98);
  return(t);
}
static ATerm n_14 (ATerm p_55, ATerm q_55, ATerm t)
{
  t = SSL_hashtable_get(q_55, p_55);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_55, ATerm v_55, ATerm t)
{
  ATerm k_98 = NULL;
  t = SSL_hashtable_create(u_55, v_55);
  k_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_98);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_98 = NULL,n_98 = NULL,p_98 = NULL,r_98 = NULL,s_98 = NULL;
  l_98 = t;
  t = term_i_84;
  r_98 = t;
  t = term_j_84;
  s_98 = t;
  t = l_98;
  t = new_hashtable_0_2(r_98, s_98, t);
  n_98 = t;
  t = l_98;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(l_98, n_98, p_98, t);
  t = l_98;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_98 = NULL;
  t = SSL_table_hashtable();
  u_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_54, ATerm t)
{
  ATerm h_99 = NULL;
  t = table_hashtable_0_0(t);
  h_99 = t;
  {
    ATerm k_84 = t;
    int l_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_46 = NULL;
        t = h_99;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_14(k_54, v_46, t);
        LocalPopChoice(l_84);
      }
    else
      {
        t = k_84;
        {
          ATerm c_47 = NULL;
          t = k_54;
          t = table_create_0_0(t);
          t = h_99;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_14(k_54, c_47, t);
        }
      }
  }
  return(t);
}
static ATerm o_14 (ATerm d_48, ATerm e_48, ATerm t)
{
  ATerm p_99 = NULL,e_100 = NULL;
  t = term_t_35;
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, d_48, e_48);
  t = lookup_table_0_1(p_99, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_14(d_48, e_48, e_100, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, d_48, e_48);
  return(t);
}
static ATerm p_14 (ATerm d_37, ATerm e_37, ATerm t)
{
  t = SSL_strcat(d_37, e_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm t_100 = NULL,w_100 = NULL;
  w_100 = t;
  t = SSL_explode_string(w_100);
  {
    ATerm m_84 = t;
    int n_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_102 (ATerm t)
        {
          ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL;
          g_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_102 = ATgetFirst((ATermList) t);
              i_102 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm o_84 = t;
            int p_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_47 = NULL,x_47 = NULL,j_20 = NULL;
                t = SSLgetAnnotations(g_102);
                q_47 = t;
                t = i_102;
                t = j_102(t);
                x_47 = t;
                t = (ATerm) ATinsert(CheckATermList(x_47), h_102);
                j_20 = t;
                t = SSLsetAnnotations(j_20, q_47);
                LocalPopChoice(p_84);
              }
            else
              {
                t = o_84;
                {
                  ATerm r_48 = NULL,k_20 = NULL;
                  t = SSLgetAnnotations(g_102);
                  r_48 = t;
                  t = h_102;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, h_102);
                  k_20 = t;
                  t = SSLsetAnnotations(k_20, r_48);
                }
              }
          }
          return(t);
        }
        t = j_102(t);
        LocalPopChoice(n_84);
      }
    else
      {
        t = m_84;
        t = (ATerm) ATempty;
      }
  }
  t_100 = t;
  t = SSL_implode_string(t_100);
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
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,a_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL,j_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,s_103 = NULL,t_103 = NULL,y_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,q_104 = NULL,t_104 = NULL;
  n_102 = t;
  t = term_f_66;
  q_104 = t;
  t = term_q_84;
  t_104 = t;
  t = term_r_84;
  t = o_14(q_104, t_104, t);
  t = term_u_35;
  m_104 = t;
  t = term_v_38;
  n_104 = t;
  t = term_u_84;
  t = o_14(m_104, n_104, t);
  t = term_q_40;
  k_104 = t;
  t = term_o_35;
  l_104 = t;
  t = term_d_85;
  t = o_14(k_104, l_104, t);
  t = term_u_40;
  i_104 = t;
  t = term_n_42;
  j_104 = t;
  t = term_e_85;
  t = o_14(i_104, j_104, t);
  t = term_c_60;
  g_104 = t;
  t = (ATerm) ATempty;
  h_104 = t;
  t = term_f_85;
  t = o_14(g_104, h_104, t);
  t = term_u_37;
  e_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_85), term_g_85);
  f_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_37, (ATerm) ATinsert(ATinsert(ATempty, term_l_85), term_g_85));
  t = o_14(e_104, f_104, t);
  t = term_w_85;
  t = xtc_find_path_0_0(t);
  j_103 = t;
  t = term_x_85;
  d_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_103, term_x_85);
  t = p_14(j_103, d_104, t);
  d_103 = t;
  t = term_w_85;
  t = xtc_find_path_0_0(t);
  h_103 = t;
  t = term_x_85;
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_103, term_x_85);
  t = p_14(h_103, c_104, t);
  e_103 = t;
  t = term_q_86;
  t = xtc_find_path_0_0(t);
  g_103 = t;
  t = term_x_85;
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_103, term_x_85);
  t = p_14(g_103, b_104, t);
  f_103 = t;
  t = term_m_36;
  y_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_103), term_c_60), e_103), term_c_60), d_103), term_c_60);
  a_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_103), term_c_60), e_103), term_c_60), d_103), term_c_60));
  t = o_14(y_103, a_104, t);
  t = term_w_85;
  t = xtc_find_path_0_0(t);
  a_103 = t;
  t = term_r_86;
  t_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_103, term_r_86);
  t = p_14(a_103, t_103, t);
  o_102 = t;
  t = term_q_86;
  t = xtc_find_path_0_0(t);
  q_102 = t;
  t = term_u_86;
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_102, term_u_86);
  t = p_14(q_102, s_103, t);
  p_102 = t;
  t = term_f_36;
  p_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_87), term_g_87), p_102), term_v_86), term_f_87), term_b_87), o_102), term_v_86);
  q_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_87), term_g_87), p_102), term_v_86), term_f_87), term_b_87), o_102), term_v_86));
  t = o_14(p_103, q_103, t);
  t = term_f_55;
  n_103 = t;
  t = (ATerm) ATinsert(ATempty, term_l_87);
  o_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, (ATerm) ATinsert(ATempty, term_l_87));
  t = o_14(n_103, o_103, t);
  t = n_102;
  return(t);
}
static ATerm d_35 (ATerm t)
{
  ATerm p_106 = NULL,q_106 = NULL,r_106 = NULL;
  p_106 = t;
  t = term_t_35;
  q_106 = t;
  t = term_c_55;
  r_106 = t;
  t = term_y_87;
  t = j_14(q_106, r_106, t);
  t = debug_1_0(e_35, t);
  t = p_106;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  t = term_z_87;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm a_88 = t;
    int b_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,f_105 = NULL;
        t = term_t_35;
        a_105 = t;
        t = term_k_74;
        f_105 = t;
        t = term_c_88;
        t = j_14(a_105, f_105, t);
        t = term_d_88;
        t = xtc_find_0_0(t);
        w_104 = t;
        t = term_b_37;
        z_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_104, term_b_37);
        t = r_13(w_104, z_104, t);
        t = term_o_35;
        y_104 = t;
        t = SSL_exit(y_104);
        LocalPopChoice(b_88);
      }
    else
      {
        t = a_88;
      }
  }
  {
    ATerm e_88 = t;
    int f_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_105 = NULL,p_105 = NULL,r_105 = NULL;
        t = term_t_35;
        p_105 = t;
        t = term_q_74;
        r_105 = t;
        t = term_g_88;
        t = j_14(p_105, r_105, t);
        t = strc_version_0_0(t);
        t = term_o_35;
        m_105 = t;
        t = SSL_exit(m_105);
        LocalPopChoice(f_88);
      }
    else
      {
        t = e_88;
      }
  }
  {
    ATerm h_88 = t;
    int i_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_105 = NULL,z_105 = NULL,c_106 = NULL;
        x_105 = t;
        t = term_t_35;
        z_105 = t;
        t = term_c_55;
        c_106 = t;
        t = term_y_87;
        t = j_14(z_105, c_106, t);
        t = x_105;
        LocalPopChoice(i_88);
      }
    else
      {
        t = h_88;
        {
          ATerm d_106 = NULL,e_106 = NULL,o_106 = NULL;
          t = term_x_35;
          e_106 = t;
          t = (ATerm) ATinsert(ATempty, term_n_88);
          o_106 = t;
          t = SSL_printnl(e_106, o_106);
          t = term_v_38;
          d_106 = t;
          t = SSL_exit(d_106);
          t = (ATerm) ATinsert(ATempty, term_n_88);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(d_35, t);
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = if_verbose1_1_0(l_35, t);
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = xtc_temp_files_1_0(m_35, t);
  return(t);
}
static ATerm l_35 (ATerm t)
{
  ATerm v_106 = NULL,y_106 = NULL,a_107 = NULL;
  v_106 = t;
  t = term_x_35;
  y_106 = t;
  t = (ATerm) ATinsert(CheckATermList(v_106), term_o_88);
  a_107 = t;
  t = SSL_printnl(y_106, a_107);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(CheckATermList(v_106), term_o_88));
  return(t);
}
static ATerm m_35 (ATerm t)
{
  ATerm r_88 = t;
  int s_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
      t = term_t_35;
      c_107 = t;
      t = term_c_55;
      d_107 = t;
      t = term_y_87;
      t = j_14(c_107, d_107, t);
      b_107 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_107);
      LocalPopChoice(s_88);
    }
  else
    {
      t = r_88;
      t = term_u_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm n_35 (ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,h_107 = NULL;
  t = run_time_0_0(t);
  e_107 = t;
  t = term_x_35;
  f_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_88), e_107), term_t_88);
  h_107 = t;
  t = SSL_printnl(f_107, h_107);
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_88), e_107), term_t_88));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm y_88 = t;
  int z_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(f_35, j_35, t);
      t = if_verbose2_1_0(n_35, t);
      t = term_o_35;
      u_106 = t;
      t = SSL_exit(u_106);
      LocalPopChoice(z_88);
    }
  else
    {
      t = y_88;
      {
        ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
        t = run_time_0_0(t);
        o_107 = t;
        t = term_x_35;
        q_107 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_88), o_107), term_c_89);
        r_107 = t;
        t = SSL_printnl(q_107, r_107);
        t = term_v_38;
        p_107 = t;
        t = SSL_exit(p_107);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
