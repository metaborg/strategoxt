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
ATerm term_z_87;
ATerm term_w_87;
ATerm term_v_87;
ATerm term_s_87;
ATerm term_r_87;
ATerm term_e_87;
ATerm term_t_86;
ATerm term_s_86;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_j_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_s_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_b_84;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_o_83;
ATerm term_m_83;
ATerm term_g_83;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_m_82;
ATerm term_j_82;
ATerm term_i_82;
ATerm term_u_81;
ATerm term_s_81;
ATerm term_n_81;
ATerm term_g_81;
ATerm term_s_80;
ATerm term_n_80;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_h_80;
ATerm term_r_79;
ATerm term_q_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_e_79;
ATerm term_z_78;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_r_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_h_78;
ATerm term_f_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_y_77;
ATerm term_w_77;
ATerm term_v_77;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_v_73;
ATerm term_r_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_l_72;
ATerm term_k_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_r_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_d_71;
ATerm term_a_71;
ATerm term_w_70;
ATerm term_r_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_j_70;
ATerm term_h_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_l_69;
ATerm term_k_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_c_69;
ATerm term_t_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_c_68;
ATerm term_b_68;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_e_65;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_p_62;
ATerm term_n_62;
ATerm term_i_62;
ATerm term_e_61;
ATerm term_p_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_v_59;
ATerm term_t_59;
ATerm term_s_59;
ATerm term_n_59;
ATerm term_j_59;
ATerm term_g_59;
ATerm term_e_59;
ATerm term_b_59;
ATerm term_b_58;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_a_57;
ATerm term_x_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_n_56;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_h_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_w_54;
ATerm term_t_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_m_54;
ATerm term_j_54;
ATerm term_b_54;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
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
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_x_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_s_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_l_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_t_49;
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
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_i_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
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
ATerm term_o_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_m_46;
ATerm term_h_46;
ATerm term_e_46;
ATerm term_z_45;
ATerm term_t_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_n_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_w_41;
ATerm term_o_41;
ATerm term_v_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_f_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_e_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_r_36;
ATerm term_n_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_u_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_d_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_l_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_u_35);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_x_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_d_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_f_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_q_37);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_j_37);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_t_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_v_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_e_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_m_40);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_c_43);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in ", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(", concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_47, term_l_38, term_i_47);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_47, term_o_35, term_m_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_47, term_x_38, term_r_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_47, term_e_42, term_v_47);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_47, term_y_47, term_z_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_48, term_c_48, term_d_48);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_48, term_i_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_48, term_y_48, term_z_48);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_49, term_c_49, term_f_49);
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
  term_n_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_49, term_w_41, term_m_49);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_49, term_p_49, term_q_49);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_49, term_x_49, term_b_50);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_50, term_n_50, term_p_50);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_50, term_u_50, term_v_50);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_50, term_z_50, term_f_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_51, term_i_51, term_j_51);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_51, term_p_51, term_q_51);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_51, term_x_51, term_z_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_d_52, term_e_52);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_52, term_j_52, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_n_52, term_p_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_52, term_s_52, term_t_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_a_45, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_52, term_z_52, term_d_53);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_53, term_i_53, term_j_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_53, term_n_53, term_p_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_m_54);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_t_54);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_h_55);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_l_57);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(sym__2, term_c_57, term_x_56);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_e_59);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_s_59);
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_v_59);
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_h_65);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_w_69);
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(sym__2, term_k_69, term_g_70);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(sym__2, term_k_69, term_l_69);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_l_35, term_d_35);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_35);
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym__2, term_l_71, term_n_36);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(sym__2, term_q_37, term_n_36);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(sym__2, term_f_36, term_n_36);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(sym__2, term_e_59, term_n_36);
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym__2, term_t_54, term_n_36);
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_n_36);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(sym__2, term_h_73, term_n_36);
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(sym__2, term_k_73, term_n_36);
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(sym__2, term_o_73, term_n_36);
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym__2, term_h_55, term_l_38);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(sym__2, term_m_55, term_d_35);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(sym__2, term_v_59, term_n_36);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_r_78));
  term_r_78 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_j_79);
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(sym__2, term_d_71, term_f_71);
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(sym__2, term_h_80, term_n_36);
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_81));
  term_u_81 = (ATerm) ATmakeAppl(sym__3, term_d_71, term_f_71, (ATerm) ATempty);
  ATprotect(&(term_i_82));
  term_i_82 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_h_73);
  ATprotect(&(term_j_82));
  term_j_82 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_h_80);
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_83));
  term_g_83 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.6pre", 0, ATtrue));
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(sym__2, term_h_65, term_g_83);
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(sym__2, term_l_35, term_l_38);
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_d_35);
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(sym__2, term_m_40, term_e_42);
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_j_54);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_k_73);
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_o_73);
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm p_106 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm a_13 (ATerm r_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm b_13 (ATerm p_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm c_13 (ATerm m_44, ATerm l_44, ATerm t);
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
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm q_107 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm t_107 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
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
static ATerm l_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm save_as_1_0 (ATerm o_82 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm r_107 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t);
static ATerm g_13 (ATerm d_49, ATerm e_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm q_116 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm d_21, ATerm e_21, ATerm t);
ATerm foldr_3_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t);
static ATerm y_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm u_107 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm s_107 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm s_91 (ATerm), ATerm t);
static ATerm y_20 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm d_13 (ATerm j_21, ATerm k_21, ATerm t);
static ATerm e_13 (ATerm e_23, ATerm f_23, ATerm t);
static ATerm f_13 (ATerm x_90 (ATerm), ATerm t_193, ATerm o_23, ATerm t);
static ATerm i_13 (ATerm h_104 (ATerm), ATerm x_42, ATerm v_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm g_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm x_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm a_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm q_106 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm g_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm j_13 (ATerm f_21, ATerm t);
static ATerm q_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm a_24 (ATerm t);
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
static ATerm y_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm p_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm h_14 (ATerm u_54, ATerm v_54, ATerm t);
static ATerm k_13 (ATerm g_53, ATerm h_53, ATerm t);
ATerm end_scope_1_0 (ATerm e_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_104 (ATerm), ATerm t);
static ATerm v_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm a_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm c_116 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm o_106 (ATerm), ATerm t);
static ATerm m_13 (ATerm j_41, ATerm k_41, ATerm t);
static ATerm o_13 (ATerm p_41, ATerm q_41, ATerm t);
static ATerm p_13 (ATerm d_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm v_90 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm q_13 (ATerm n_44, ATerm o_44, ATerm t);
static ATerm r_13 (ATerm y_55, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm s_106 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm r_106 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm t_106 (ATerm), ATerm t);
static ATerm u_13 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm q_29, ATerm p_29, ATerm t);
static ATerm v_13 (ATerm r_95 (ATerm), ATerm m_29, ATerm l_29, ATerm t);
static ATerm e_27 (ATerm t);
static ATerm w_13 (ATerm y_53, ATerm z_53, ATerm a_54, ATerm t);
static ATerm x_13 (ATerm k_111 (ATerm), ATerm i_54, ATerm h_54, ATerm t);
static ATerm b_14 (ATerm g_38, ATerm h_38, ATerm t);
static ATerm y_72 (ATerm m_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_13 (ATerm k_23, ATerm t);
static ATerm z_13 (ATerm p_38, ATerm q_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_74 (ATerm n_73, ATerm t);
static ATerm z_74 (ATerm u_73, ATerm w_73, ATerm x_73, ATerm t);
static ATerm a_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm t);
static ATerm a_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_27 (ATerm t);
static ATerm j_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm o_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_99 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm v_79 (ATerm y_78, ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm c_14 (ATerm m_48, ATerm l_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm l_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm u_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_14 (ATerm j_48, ATerm k_48, ATerm t);
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_83 (ATerm y_82, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_14 (ATerm n_48, ATerm o_48, ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm n_29 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm e_30 (ATerm t);
static ATerm i_30 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm n_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm u_30 (ATerm t);
static ATerm v_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm q_31 (ATerm t);
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
static ATerm f_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm c_33 (ATerm t);
static ATerm d_33 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
static ATerm f_14 (ATerm w_55, ATerm x_55, ATerm t);
static ATerm g_14 (ATerm b_56, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm j_33 (ATerm t);
static ATerm k_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_91 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm s_33 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm i_14 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_111 (ATerm), ATerm t);
static ATerm w_33 (ATerm t);
static ATerm y_33 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm h_34 (ATerm t);
ATerm parse_options_1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm k_14 (ATerm r_55, ATerm s_55, ATerm t_55, ATerm t);
static ATerm l_14 (ATerm u_55, ATerm v_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_55, ATerm a_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm n_54, ATerm t);
static ATerm m_14 (ATerm g_48, ATerm h_48, ATerm t);
static ATerm n_14 (ATerm g_37, ATerm h_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm p_34 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm c_35 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = x_97(t);
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
      t = foldr_2_0(x_97, y_97, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = y_97(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_d_35;
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
  t = m_13(c_1, e_1, t);
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
      ATerm g_35 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm h_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = term_k_35;
        l_1 = t;
        t = term_l_35;
        m_1 = t;
        t = term_m_35;
        t = h_14(l_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_o_35);
        t = geq_0_0(t);
        t = f_1;
        t = p_106(t);
        LocalPopChoice(j_35);
      }
    else
      {
        t = h_35;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = term_p_35;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_q_35);
  a_2 = t;
  t = SSL_printnl(x_1, a_2);
  t = w_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_p_35;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm a_13 (ATerm r_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_k_35;
        b_2 = t;
        t = term_u_35;
        c_2 = t;
        t = term_w_35;
        t = h_14(b_2, c_2, t);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = get_outfile_1_0(g_1, t);
      }
  }
  o_1 = t;
  t = term_k_35;
  s_1 = t;
  t = term_x_35;
  v_1 = t;
  t = term_y_35;
  t = h_14(s_1, v_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_u_35), r_21));
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
      t = g_13(q_1, r_1, t);
      t = term_a_36;
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
  t = term_p_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_b_36);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_c_36;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_p_35;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm b_13 (ATerm p_21, ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(n_1, t);
  m_2 = t;
  t = term_k_35;
  r_2 = t;
  t = term_d_36;
  s_2 = t;
  t = term_e_36;
  t = h_14(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_2), term_u_35), p_21), term_f_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, n_2);
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
      t = g_13(p_2, q_2, t);
      t = term_a_36;
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
  t = b_13(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(o_3, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL;
  k_3 = t;
  t = term_p_35;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_g_36);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(k_3), term_g_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_k_35;
      i_3 = t;
      t = term_f_36;
      j_3 = t;
      t = term_k_36;
      t = h_14(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
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
static ATerm c_13 (ATerm m_44, ATerm l_44, ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_44, l_44);
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      t = get_errno_0_0(t);
      t = term_n_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_44, l_44);
      t = q_13(m_44, l_44, t);
      t = SSL_remove(m_44);
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
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = g_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_r_36;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, term_r_36);
        t = q_13(j_4, t_1, t);
        t = SSL_remove(j_4);
        t = term_r_36;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        {
          ATerm t_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = g_4;
              t = x_0(t);
              i_2 = t;
              {
                ATerm v_36 = t;
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
                    t = v_36;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_4, i_2);
              t = c_13(j_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(u_36);
            }
          else
            {
              t = t_36;
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
  t = term_w_36;
  n_4 = t;
  t = term_y_36;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_e_37);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_j_37);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_l_37;
  s_4 = t;
  t = w_4;
  {
    ATerm m_37 = t;
    int n_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,c_5 = NULL;
        t = term_k_35;
        a_5 = t;
        t = term_q_37;
        c_5 = t;
        t = term_r_37;
        t = h_14(a_5, c_5, t);
        t = w_4;
        LocalPopChoice(n_37);
        t = (ATerm) ATinsert(ATempty, term_q_37);
      }
    else
      {
        t = m_37;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_k_35;
  x_4 = t;
  t = term_j_37;
  y_4 = t;
  t = term_v_37;
  t = h_14(x_4, y_4, t);
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
  t = term_p_35;
  v_5 = t;
  t = (ATerm) ATinsert(ATempty, term_x_37);
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
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  d_6 = t;
  {
    ATerm y_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_6 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(d_6);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(a_38);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = y_37;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  c_6 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_7 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(c_6);
              h_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_7);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_6;
          }
        LocalPopChoice(c_38);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = b_38;
        t = xtc_transform_term_2_0(k_6, n_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_8 = ATgetArgument(t, 0);
            {
              ATerm b_5 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(b_6);
              b_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_8);
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
        LocalPopChoice(e_38);
        t = xtc_transform_file_2_0(o_6, pass_verbose_0_0, t);
      }
    else
      {
        t = d_38;
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
  t = term_p_35;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(x_5), term_f_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(x_5), term_f_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_j_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_j_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL;
  t_6 = t;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_6 = ATgetArgument(t, 0);
            {
              ATerm l_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(t_6);
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
            t = t_6;
          }
        LocalPopChoice(n_38);
        t = xtc_transform_file_2_0(z_3, a_4, t);
      }
    else
      {
        t = m_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(f_4, t);
  q_6 = t;
  {
    ATerm o_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(q_6);
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
            t = q_6;
          }
        LocalPopChoice(r_38);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = o_38;
        t = xtc_transform_term_2_0(p_4, z_4, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_j_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_j_38);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_j_38);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_j_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_38;
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
  t = term_z_38;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_j_38);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_j_38);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = get_outfile_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(c_3, d_3, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  t = term_p_35;
  j_9 = t;
  t = (ATerm) ATinsert(ATempty, term_g_39);
  k_9 = t;
  t = SSL_printnl(j_9, k_9);
  t = i_9;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,p_9 = NULL;
  m_9 = t;
  t = term_p_35;
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_h_39);
  p_9 = t;
  t = SSL_printnl(n_9, p_9);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(m_9), term_h_39));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_l_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_10 = NULL;
  t = pass_verbose_0_0(t);
  y_10 = t;
  t = (ATerm) ATinsert(CheckATermList(y_10), term_l_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
      e_9 = t;
      t = term_k_35;
      f_9 = t;
      t = term_q_37;
      g_9 = t;
      t = term_r_37;
      t = h_14(f_9, g_9, t);
      t = e_9;
      LocalPopChoice(o_39);
      {
        ATerm h_9 = NULL;
        h_9 = t;
        t = if_verbose2_1_0(g_7, t);
        {
          static ATerm i_7 (ATerm t)
          {
            ATerm q_9 = NULL,s_9 = NULL,u_9 = NULL,v_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_p_39;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_q_39);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            q_9 = t;
            {
              ATerm r_39 = t;
              int s_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_9 = NULL,z_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
                  t = term_k_35;
                  d_10 = t;
                  t = term_t_39;
                  e_10 = t;
                  t = term_u_39;
                  t = h_14(d_10, e_10, t);
                  x_9 = t;
                  t = term_k_35;
                  b_10 = t;
                  t = term_v_39;
                  c_10 = t;
                  t = term_w_39;
                  t = h_14(b_10, c_10, t);
                  z_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_9, z_9);
                  {
                    ATerm x_39 = t;
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
                        t = x_39;
                      }
                  }
                  LocalPopChoice(s_39);
                }
              else
                {
                  t = r_39;
                  {
                    ATerm i_10 = NULL,j_10 = NULL;
                    t = term_k_35;
                    i_10 = t;
                    t = term_t_39;
                    j_10 = t;
                    t = term_u_39;
                    t = h_14(i_10, j_10, t);
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
              ATerm y_39 = t;
              int z_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_10 = NULL,w_10 = NULL;
                  w_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(w_10);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, s_10);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, l_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = w_10;
                    }
                  LocalPopChoice(z_39);
                  t = xtc_transform_file_2_0(q_7, s_7, t);
                }
              else
                {
                  t = y_39;
                  t = xtc_transform_term_2_0(t_7, u_7, t);
                }
            }
            {
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
            s_9 = t;
            t = term_p_35;
            u_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_b_40), not_null(c_9)), term_a_40));
            v_9 = t;
            t = SSL_printnl(u_9, v_9);
            t = s_9;
            return(t);
          }
          t = profile_p__2_0(h_7, i_7, t);
        }
        t = h_9;
      }
    }
  else
    {
      t = n_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL,i_11 = NULL;
        t = term_k_35;
        g_11 = t;
        t = term_e_40;
        i_11 = t;
        t = term_f_40;
        t = h_14(g_11, i_11, t);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_11, term_l_38);
        t = geq_0_0(t);
        t = c_11;
        t = q_107(t);
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = c_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL,q_11 = NULL,u_11 = NULL,y_11 = NULL;
        t = m_11;
        t = u_116(t);
        p_11 = t;
        t = term_k_35;
        u_11 = t;
        t = term_m_40;
        y_11 = t;
        t = term_n_40;
        t = h_14(u_11, y_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, p_11);
        t = geq_0_0(t);
        t = m_11;
        t = v_116(t);
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = m_11;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_j_38);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_j_38);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm q_8 = NULL;
  t = pass_verbose_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(CheckATermList(q_8), term_j_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm r_8 = NULL;
  t = pass_verbose_0_0(t);
  r_8 = t;
  t = (ATerm) ATinsert(CheckATermList(r_8), term_j_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_14;
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  y_6 = ATgetArgument(t, 0);
                  {
                    ATerm f_8 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(w_14);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, f_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = w_14;
                }
              LocalPopChoice(s_40);
              t = xtc_transform_file_2_0(z_7, b_8, t);
            }
          else
            {
              t = r_40;
              t = xtc_transform_term_2_0(c_8, d_8, t);
            }
        }
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = w_14;
        {
          ATerm t_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  n_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(w_14);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_8);
                    c_4 = t;
                    t = SSLsetAnnotations(c_4, z_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = w_14;
                }
              LocalPopChoice(u_40);
              t = xtc_transform_file_2_0(e_8, g_8, t);
            }
          else
            {
              t = t_40;
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
  t = term_v_40;
  g_15 = t;
  t = i_15;
  {
    ATerm g_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL,k_15 = NULL;
        t = term_k_35;
        j_15 = t;
        t = term_q_37;
        k_15 = t;
        t = term_r_37;
        t = h_14(j_15, k_15, t);
        t = i_15;
        LocalPopChoice(i_41);
        t = (ATerm) ATinsert(ATempty, term_o_41);
      }
    else
      {
        t = g_41;
        t = (ATerm) ATempty;
      }
  }
  h_15 = t;
  t = i_15;
  t = comp_0_2(g_15, h_15, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_15 = NULL,r_15 = NULL,u_15 = NULL;
        t = term_k_35;
        r_15 = t;
        t = term_e_40;
        u_15 = t;
        t = term_f_40;
        t = h_14(r_15, u_15, t);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_15, term_w_41);
        t = geq_0_0(t);
        t = o_15;
        t = t_107(t);
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = o_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm a_16 = NULL;
  a_16 = t;
  {
    ATerm y_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL;
        t = term_k_35;
        f_16 = t;
        t = term_e_40;
        g_16 = t;
        t = term_f_40;
        t = h_14(f_16, g_16, t);
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_16, term_e_42);
        t = geq_0_0(t);
        t = a_16;
        t = v_107(t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = y_41;
        t = a_16;
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_18 = NULL,n_18 = NULL,o_18 = NULL;
  k_18 = t;
  t = term_p_35;
  n_18 = t;
  t = (ATerm) ATinsert(ATempty, term_f_42);
  o_18 = t;
  t = SSL_printnl(n_18, o_18);
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
  t = olevel_2_0(t_8, v_8, t);
  t = olevel_2_0(t_9, a_10, t);
  t = olevel_2_0(z_10, d_11, t);
  u_18 = t;
  {
    ATerm g_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_22 = ATgetArgument(t, 0);
            {
              ATerm s_12 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(u_18);
              s_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
              y_5 = t;
              t = SSLsetAnnotations(y_5, s_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_18;
          }
        LocalPopChoice(i_42);
        t = xtc_transform_file_2_0(j_12, p_12, t);
      }
    else
      {
        t = g_42;
        t = xtc_transform_term_2_0(t_12, u_12, t);
      }
  }
  t = olevel_2_0(v_12, w_12, t);
  t = olevel_2_0(v_14, x_14, t);
  t = olevel_2_0(x_15, y_15, t);
  t = olevel_2_0(o_16, p_16, t);
  t = olevel_2_0(q_17, r_17, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_18 = NULL,s_18 = NULL,t_18 = NULL;
  p_18 = t;
  t = term_p_35;
  s_18 = t;
  t = (ATerm) ATinsert(CheckATermList(p_18), term_n_42);
  t_18 = t;
  t = SSL_printnl(s_18, t_18);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(p_18), term_n_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  t = term_k_35;
  w_18 = t;
  t = term_m_40;
  x_18 = t;
  t = term_n_40;
  t = h_14(w_18, x_18, t);
  t = debug_1_0(s_8, t);
  t = v_18;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_p_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_19 = ATgetArgument(t, 0);
            {
              ATerm o_9 = NULL,m_4 = NULL;
              t = SSLgetAnnotations(z_18);
              o_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_19);
              m_4 = t;
              t = SSLsetAnnotations(m_4, o_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_18;
          }
        LocalPopChoice(t_42);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = s_42;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(l_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm f_19 = NULL;
  t = pass_verbose_0_0(t);
  f_19 = t;
  t = (ATerm) ATinsert(CheckATermList(f_19), term_j_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_j_38);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = save_as_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_u_42;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm z_19 = NULL;
  z_19 = t;
  {
    ATerm w_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_19;
        {
          ATerm a_43 = t;
          if((PushChoice() == 0))
            {
              ATerm q_10 = NULL,r_10 = NULL;
              t = term_k_35;
              q_10 = t;
              t = term_c_43;
              r_10 = t;
              t = term_d_43;
              t = h_14(q_10, r_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_43;
            }
        }
        t = z_19;
        {
          ATerm e_43 = t;
          int f_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  {
                    ATerm s_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(z_19);
                    s_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, b_11);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, s_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = z_19;
                }
              LocalPopChoice(f_43);
              t = xtc_transform_file_2_0(f_10, h_10, t);
            }
          else
            {
              t = e_43;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(z_42);
      }
    else
      {
        t = w_42;
        t = z_19;
      }
  }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_h_43;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_j_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_h_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_j_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(t_10, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_i_43;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,g_20 = NULL;
  g_20 = t;
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_20 = ATgetArgument(t, 0);
            {
              ATerm x_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(g_20);
              x_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
              r_5 = t;
              t = SSLsetAnnotations(r_5, x_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_20;
          }
        LocalPopChoice(k_43);
        t = xtc_transform_file_2_0(e_11, j_11, t);
      }
    else
      {
        t = j_43;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = if_keep6_1_0(r_11, t);
  e_20 = t;
  {
    ATerm l_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(e_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_20);
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
        LocalPopChoice(n_43);
        t = xtc_transform_file_2_0(v_11, w_11, t);
      }
    else
      {
        t = l_43;
        t = xtc_transform_term_2_0(z_11, a_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(b_12, t);
  d_20 = t;
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_21 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(d_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_21);
              t_5 = t;
              t = SSLsetAnnotations(t_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_20;
          }
        LocalPopChoice(p_43);
        t = xtc_transform_file_2_0(e_12, f_12, t);
      }
    else
      {
        t = o_43;
        t = xtc_transform_term_2_0(g_12, i_12, t);
      }
  }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_j_38);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_q_43;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_j_38);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_r_43;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_j_38);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm a_21 = NULL;
  t = pass_verbose_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), term_j_38);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = save_as_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_u_43;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_j_38);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm z_21 = NULL;
  t = pass_verbose_0_0(t);
  z_21 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), term_j_38);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_j_38);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_j_38);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,n_22 = NULL;
  n_22 = t;
  {
    ATerm w_43 = t;
    int z_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_22 = ATgetArgument(t, 0);
            {
              ATerm h_13 = NULL,e_6 = NULL;
              t = SSLgetAnnotations(n_22);
              h_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_22);
              e_6 = t;
              t = SSLsetAnnotations(e_6, h_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_22;
          }
        LocalPopChoice(z_43);
        t = xtc_transform_file_2_0(x_12, y_12, t);
      }
    else
      {
        t = w_43;
        t = xtc_transform_term_2_0(z_12, l_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  k_22 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_23 = ATgetArgument(t, 0);
            {
              ATerm t_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(k_22);
              t_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              f_6 = t;
              t = SSLsetAnnotations(f_6, t_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_22;
          }
        LocalPopChoice(b_44);
        t = xtc_transform_file_2_0(n_13, s_13, t);
      }
    else
      {
        t = a_44;
        t = xtc_transform_term_2_0(t_13, j_14, t);
      }
  }
  j_22 = t;
  {
    ATerm c_44 = t;
    int d_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_23 = ATgetArgument(t, 0);
            {
              ATerm y_14 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(j_22);
              y_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, y_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(d_44);
        t = xtc_transform_file_2_0(o_14, p_14, t);
      }
    else
      {
        t = c_44;
        t = xtc_transform_term_2_0(q_14, r_14, t);
      }
  }
  t = if_keep4_1_0(s_14, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm v_22 = NULL;
  t = pass_verbose_0_0(t);
  v_22 = t;
  t = (ATerm) ATinsert(CheckATermList(v_22), term_j_38);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_j_38);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm h_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), term_j_38);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm i_23 = NULL;
  t = pass_verbose_0_0(t);
  i_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), term_j_38);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_j_38);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm u_23 = NULL;
  t = pass_verbose_0_0(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), term_j_38);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = save_as_1_0(u_14, t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_h_44;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  c_24 = t;
  {
    ATerm p_44 = t;
    int q_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm l_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(c_24);
              l_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              i_6 = t;
              t = SSLsetAnnotations(i_6, l_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_24;
          }
        LocalPopChoice(q_44);
        t = xtc_transform_file_2_0(a_15, c_15, t);
      }
    else
      {
        t = p_44;
        t = xtc_transform_term_2_0(d_15, e_15, t);
      }
  }
  b_24 = t;
  {
    ATerm u_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_24 = ATgetArgument(t, 0);
            {
              ATerm t_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(b_24);
              t_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, t_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_24;
          }
        LocalPopChoice(w_44);
        t = xtc_transform_file_2_0(m_15, n_15, t);
      }
    else
      {
        t = u_44;
        t = xtc_transform_term_2_0(p_15, s_15, t);
      }
  }
  t = if_keep2_1_0(v_15, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm m_24 = NULL;
  t = pass_verbose_0_0(t);
  m_24 = t;
  t = (ATerm) ATinsert(CheckATermList(m_24), term_j_38);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_j_38);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_y_44;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_j_38);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_y_44;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_j_38);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_z_44;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm b_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_25 = ATgetArgument(t, 0);
            {
              ATerm z_15 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(c_25);
              z_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
              l_6 = t;
              t = SSLsetAnnotations(l_6, z_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_25;
          }
        LocalPopChoice(d_45);
        t = xtc_transform_file_2_0(b_16, d_16, t);
      }
    else
      {
        t = b_45;
        t = xtc_transform_term_2_0(e_16, h_16, t);
      }
  }
  t = if_keep5_1_0(i_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(l_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_j_38);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_t_43;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm l_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), term_j_38);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = save_as_1_0(m_16, t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_f_45;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_25 = ATgetArgument(t, 0);
            {
              ATerm j_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(p_25);
              j_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, j_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_25;
          }
        LocalPopChoice(h_45);
        t = xtc_transform_file_2_0(q_16, s_16, t);
      }
    else
      {
        t = g_45;
        t = xtc_transform_term_2_0(t_16, u_16, t);
      }
  }
  t = if_keep3_1_0(w_16, t);
  n_25 = t;
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(n_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
              s_6 = t;
              t = SSLsetAnnotations(s_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(k_45);
        t = xtc_transform_file_2_0(y_16, a_17, t);
      }
    else
      {
        t = j_45;
        t = xtc_transform_term_2_0(b_17, c_17, t);
      }
  }
  t = if_keep3_1_0(d_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(g_17, t);
  m_25 = t;
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
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
        LocalPopChoice(m_45);
        t = xtc_transform_file_2_0(i_17, j_17, t);
      }
    else
      {
        t = l_45;
        t = xtc_transform_term_2_0(k_17, l_17, t);
      }
  }
  t = if_keep3_1_0(o_17, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm z_25 = NULL;
  t = pass_verbose_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), term_j_38);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm a_26 = NULL;
  t = pass_verbose_0_0(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), term_j_38);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_p_45;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm j_26 = NULL;
  t = pass_verbose_0_0(t);
  j_26 = t;
  t = (ATerm) ATinsert(CheckATermList(j_26), term_j_38);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm k_26 = NULL;
  t = pass_verbose_0_0(t);
  k_26 = t;
  t = (ATerm) ATinsert(CheckATermList(k_26), term_j_38);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = save_as_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_q_45;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_r_45;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_j_38);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm r_26 = NULL;
  t = pass_verbose_0_0(t);
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), term_j_38);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = save_as_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
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
        LocalPopChoice(v_45);
        t = xtc_transform_file_2_0(s_17, t_17, t);
      }
    else
      {
        t = u_45;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  t = if_keep1_1_0(w_17, t);
  s_26 = t;
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
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
        LocalPopChoice(x_45);
        t = xtc_transform_file_2_0(a_18, b_18, t);
      }
    else
      {
        t = w_45;
        t = xtc_transform_term_2_0(c_18, d_18, t);
      }
  }
  t = if_keep1_1_0(f_18, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm f_27 = NULL;
  t = pass_verbose_0_0(t);
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(f_27), term_j_38);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_g_44;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm g_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), term_j_38);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = save_as_1_0(z_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm p_27 = NULL;
  t = pass_verbose_0_0(t);
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), term_j_38);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_e_46;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_j_38);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  t = save_as_1_0(i_18, t);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_h_46;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  t = profile_p__2_0(k_8, l_8, t);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm w_29 = NULL;
  t = pass_verbose_0_0(t);
  w_29 = t;
  t = (ATerm) ATinsert(CheckATermList(w_29), term_l_39);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm z_29 = NULL;
  t = pass_verbose_0_0(t);
  z_29 = t;
  t = (ATerm) ATinsert(CheckATermList(z_29), term_l_39);
  return(t);
}
ATerm save_as_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  {
    static ATerm j_18 (ATerm t)
    {
      t = get_outfile_1_0(o_82, t);
      if(((y_28 != NULL) && (y_28 != t)))
        _fail(t);
      else
        y_28 = t;
      return(t);
    }
    t = copy_to_1_0(j_18, t);
  }
  {
    ATerm j_46 = t;
    int k_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL,v_29 = NULL;
        v_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,p_8 = NULL;
              t = SSLgetAnnotations(v_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_29);
              p_8 = t;
              t = SSLsetAnnotations(p_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_29;
          }
        LocalPopChoice(k_46);
        t = xtc_transform_file_2_0(l_18, q_18, t);
      }
    else
      {
        t = j_46;
        t = xtc_transform_term_2_0(r_18, y_18, t);
      }
  }
  {
    static ATerm b_19 (ATerm t)
    {
      ATerm a_30 = NULL;
      t = term_m_46;
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), term_m_46);
      t = n_14(not_null(y_28), a_30, t);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      return(t);
    }
    t = copy_to_1_0(b_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_28)), term_r_46), not_null(y_28)), term_q_46);
  f_29 = t;
  t = SSL_concat_strings(f_29);
  c_29 = t;
  t = term_p_35;
  d_29 = t;
  t = (ATerm) ATinsert(ATempty, c_29);
  e_29 = t;
  t = SSL_printnl(d_29, e_29);
  t = b_29;
  return(t);
}
ATerm if_keep2_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
        t = term_k_35;
        g_30 = t;
        t = term_e_40;
        h_30 = t;
        t = term_f_40;
        t = h_14(g_30, h_30, t);
        f_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_30, term_o_35);
        t = geq_0_0(t);
        t = d_30;
        t = r_107(t);
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = d_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,q_30 = NULL;
  t = term_l_35;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL;
        t = term_k_35;
        r_30 = t;
        t = term_l_35;
        s_30 = t;
        t = term_m_35;
        t = h_14(r_30, s_30, t);
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        t = term_l_38;
      }
  }
  k_30 = t;
  t = term_l_38;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, term_l_38);
  t = o_13(k_30, q_30, t);
  l_30 = t;
  t = SSL_int_to_string(l_30);
  j_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_30), term_l_35);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_46 = ATgetArgument(t, 0);
      if(match_cons(x_46, sym_Stream_1))
        {
          y_30 = ATgetArgument(x_46, 0);
        }
      else
        _fail(t);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13(y_30, z_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_115 (ATerm), ATerm q_115 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,w_30 = NULL;
  w_30 = t;
  t = xtc_new_file_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_30, w_30);
  t = f_13(e_19, t_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_30);
  t = xtc_transform_file_2_0(p_115, q_115, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_13 (ATerm d_49, ATerm e_49, ATerm t)
{
  t = SSL_execvp(d_49, e_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_32 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(g_32);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_46), m_17), term_y_46);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_32 = ATgetArgument(t, 0);
          h_32 = ATgetArgument(t, 1);
          i_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_32);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_32), term_c_47), x_17), term_b_47), g_32);
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
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_47 = ATgetArgument(t, 0);
              if((l_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_47 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_53), term_k_53), term_e_53), term_x_52), term_u_52), term_q_52), term_l_52), term_f_52), term_a_52), term_r_51), term_k_51), term_g_51), term_w_50), term_q_50), term_c_50), term_t_49), term_n_49), term_k_49), term_g_49), term_a_49), term_v_48), term_r_48), term_e_48), term_a_48), term_w_47), term_s_47), term_o_47), term_j_47);
        t = fetch_elem_1_0(j_19, t);
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_32 = NULL,e_33 = NULL;
  s_32 = t;
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_53 = ATgetArgument(t, 0);
            e_33 = ATgetArgument(t, 1);
            {
              ATerm u_53 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_53);
        {
          ATerm v_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,g_18 = NULL,h_18 = NULL;
              t = e_33;
              {
                ATerm x_53 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_53;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_18 = t;
              t = term_p_35;
              g_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_b_54);
              h_18 = t;
              t = SSL_printnl(g_18, h_18);
              t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_b_54));
              LocalPopChoice(w_53);
            }
          else
            {
              t = v_53;
              t = s_32;
            }
        }
      }
    else
      {
        t = r_53;
        t = s_32;
      }
  }
  t = s_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,x_33 = NULL;
  x_33 = t;
  t = fork_0_0(t);
  u_33 = t;
  {
    ATerm c_54 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_33;
        t = b_108(t);
        LocalPopChoice(d_54);
      }
    else
      {
        t = c_54;
        t = SSL_waitpid(u_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_54 = ATgetArgument(t, 0);
            if(((ATgetType(e_54) != AT_INT) || (ATgetInt((ATermInt) e_54) != 0)))
              _fail(t);
            {
              ATerm f_54 = ATgetArgument(t, 1);
            }
            {
              ATerm g_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  a_34 = t;
  t = q_116(t);
  t = xtc_find_0_0(t);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
  {
    static ATerm l_19 (ATerm t)
    {
      ATerm b_34 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
      t = g_13(z_33, a_34, t);
      t = term_a_36;
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
      t = (ATerm) ATmakeAppl(sym__2, g_34, (ATerm) ATinsert(ATinsert(ATempty, f_34), term_u_35));
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
      t = (ATerm) ATmakeAppl(sym__2, l_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_34), term_u_35), e_34), term_j_54));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm d_21, ATerm e_21, ATerm t)
{
  ATerm k_54 = t;
  int l_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_49 = NULL,s_49 = NULL;
      s_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_49 = ATgetArgument(t, 0);
          {
            ATerm p_30 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(s_49);
            p_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_49);
            u_8 = t;
            t = SSLsetAnnotations(u_8, p_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_49;
        }
      LocalPopChoice(l_54);
      {
        static ATerm n_19 (ATerm t)
        {
          t = d_21;
          return(t);
        }
        static ATerm s_19 (ATerm t)
        {
          ATerm u_49 = NULL;
          t = pass_verbose_0_0(t);
          u_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_21), u_49), (ATerm) ATinsert(ATempty, term_j_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(n_19, s_19, t);
      }
    }
  else
    {
      t = k_54;
      {
        static ATerm t_19 (ATerm t)
        {
          t = d_21;
          return(t);
        }
        static ATerm w_19 (ATerm t)
        {
          ATerm w_49 = NULL;
          t = pass_verbose_0_0(t);
          w_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_21), w_49), (ATerm) ATinsert(ATempty, term_j_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_19, w_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,r_34 = NULL;
  n_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_34;
      t = z_97(t);
    }
  else
    {
      ATerm w_34 = NULL,x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          r_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = b_98(t);
      w_34 = t;
      t = r_34;
      t = foldr_3_0(z_97, a_98, b_98, t);
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
      t = a_98(t);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, f_35), term_m_54);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm a_35 = NULL,e_35 = NULL;
  t = term_k_35;
  a_35 = t;
  t = term_m_54;
  e_35 = t;
  t = term_o_54;
  t = h_14(a_35, e_35, t);
  t = foldr_3_0(y_19, conc_0_0, a_20, t);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  t = term_p_54;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_j_38);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  t = term_p_54;
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_j_38);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = get_outfile_1_0(t_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  t = term_q_54;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL,i_19 = NULL,p_19 = NULL,r_19 = NULL,v_19 = NULL;
        t = term_k_35;
        r_19 = t;
        t = term_t_54;
        v_19 = t;
        t = term_w_54;
        t = h_14(r_19, v_19, t);
        t = q_36;
        {
          ATerm x_54 = t;
          int y_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_36;
              {
                ATerm z_54 = t;
                int a_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        c_20 = ATgetArgument(t, 0);
                        {
                          ATerm i_21 = NULL,w_8 = NULL;
                          t = SSLgetAnnotations(q_36);
                          i_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, c_20);
                          w_8 = t;
                          t = SSLsetAnnotations(w_8, i_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = q_36;
                      }
                    LocalPopChoice(a_55);
                    t = xtc_transform_file_2_0(f_20, h_20, t);
                  }
                else
                  {
                    t = z_54;
                    t = xtc_transform_term_2_0(o_20, r_20, t);
                  }
              }
              LocalPopChoice(y_54);
            }
          else
            {
              t = x_54;
              {
                ATerm m_20 = NULL,u_20 = NULL,v_20 = NULL;
                t = term_p_35;
                u_20 = t;
                t = (ATerm) ATinsert(ATempty, term_b_55);
                v_20 = t;
                t = SSL_printnl(u_20, v_20);
                t = term_l_38;
                m_20 = t;
                t = SSL_exit(m_20);
                t = (ATerm) ATinsert(ATempty, term_b_55);
              }
            }
        }
        t = copy_to_1_0(s_20, t);
        h_19 = t;
        t = term_p_35;
        i_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_55));
        p_19 = t;
        t = SSL_printnl(i_19, p_19);
        t = h_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
        t = q_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  {
    ATerm d_55 = t;
    int e_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_36 = NULL,c_37 = NULL,d_37 = NULL;
        t = term_k_35;
        c_37 = t;
        t = term_e_40;
        d_37 = t;
        t = term_f_40;
        t = h_14(c_37, d_37, t);
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_36, term_a_45);
        t = geq_0_0(t);
        t = x_36;
        t = u_107(t);
        LocalPopChoice(e_55);
      }
    else
      {
        t = d_55;
        t = x_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm f_55 = t;
  int g_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_37 = NULL,i_37 = NULL;
      t = term_k_35;
      f_37 = t;
      t = term_h_55;
      i_37 = t;
      t = term_l_55;
      t = h_14(f_37, i_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_55);
      LocalPopChoice(g_55);
    }
  else
    {
      t = f_55;
      t = (ATerm) ATinsert(ATempty, term_m_55);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
        t = term_k_35;
        t_37 = t;
        t = term_e_40;
        u_37 = t;
        t = term_f_40;
        t = h_14(t_37, u_37, t);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_37, term_x_38);
        t = geq_0_0(t);
        t = p_37;
        t = s_107(t);
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
        t = p_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm w_37 = NULL;
  static ATerm w_20 (ATerm t)
  {
    t = s_91(t);
    if(((w_37 != NULL) && (w_37 != t)))
      _fail(t);
    else
      w_37 = t;
    return(t);
  }
  t = fetch_1_0(w_20, t);
  t = not_null(w_37);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm i_40 = NULL,k_40 = NULL;
  i_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_40 = ATgetArgument(t, 0);
      {
        ATerm t_21 = NULL,v_21 = NULL,w_9 = NULL;
        t = SSLgetAnnotations(i_40);
        t_21 = t;
        t = k_40;
        t = fetch_elem_1_0(b_21, t);
        v_21 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, v_21);
        w_9 = t;
        t = SSLsetAnnotations(w_9, t_21);
      }
    }
  else
    {
      ATerm c_23 = NULL,n_23 = NULL,y_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          k_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_40);
      c_23 = t;
      t = k_40;
      t = fetch_elem_1_0(c_21, t);
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, n_23);
      y_9 = t;
      t = SSLsetAnnotations(y_9, c_23);
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,l_22 = NULL;
  d_22 = t;
  {
    ATerm q_55 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm d_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_56);
        t = e_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = l_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_22;
      }
    else
      {
        t = q_55;
        if(match_cons(t, sym_RDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm e_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = l_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_22;
      }
  }
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  {
    ATerm f_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm i_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_56);
        t = w_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_23;
      }
    else
      {
        t = f_56;
        if(match_cons(t, sym_RDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm m_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = x_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = fetch_elem_1_0(y_20, t);
  b_39 = t;
  t = term_p_35;
  c_39 = t;
  t = (ATerm) ATinsert(ATempty, term_n_56);
  d_39 = t;
  t = SSL_printnl(c_39, d_39);
  t = b_39;
  return(t);
}
static ATerm d_13 (ATerm j_21, ATerm k_21, ATerm t)
{
  t = j_21;
  {
    ATerm o_56 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_56;
      }
  }
  t = k_21;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(k_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_t_56, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm e_13 (ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_write_term_to_stream_baf(e_23, f_23);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
static ATerm f_13 (ATerm x_90 (ATerm), ATerm t_193, ATerm o_23, ATerm t)
{
  ATerm y_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_193, term_u_56);
  t = a_14(t);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, o_23);
  t = x_90(t);
  t = fclose_0_0(t);
  t = o_23;
  return(t);
}
static ATerm i_13 (ATerm h_104 (ATerm), ATerm x_42, ATerm v_42, ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL;
  c_41 = t;
  t = h_104(t);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_40, x_42, v_42);
  t = i_14(z_40, x_42, v_42, t);
  {
    ATerm v_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 = NULL;
        t = term_x_56;
        l_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_40, term_x_56);
        t = h_14(z_40, l_41, t);
        LocalPopChoice(w_56);
      }
    else
      {
        t = v_56;
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
  t = (ATerm) ATmakeAppl(sym__3, z_40, term_x_56, (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATinsert(CheckATermList(a_41), x_42)));
  t = lookup_table_0_1(z_40, t);
  h_41 = t;
  t = term_x_56;
  d_41 = t;
  t = (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATinsert(CheckATermList(a_41), x_42));
  e_41 = t;
  t = h_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(d_41, e_41, f_41, t);
  t = c_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL,g_24 = NULL;
      u_41 = t;
      t = term_a_57;
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_41, term_a_57);
      t = n_14(u_41, g_24, t);
      n_41 = t;
      t = SSL_mkstemp(n_41);
      LocalPopChoice(z_56);
    }
  else
    {
      t = y_56;
      {
        ATerm v_41 = NULL;
        t = term_b_57;
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
static ATerm g_21 (ATerm t)
{
  t = term_c_57;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  t = P__tmpdir_0_0(t);
  c_42 = t;
  t = term_d_57;
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, term_d_57);
  t = n_14(c_42, d_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_36;
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_41, term_n_36);
  t = i_13(g_21, z_41, b_42, t);
  t = SSL_close(x_41);
  t = z_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_57;
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
      t = (ATerm) ATinsert(ATempty, term_f_57);
      j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_42, (ATerm) ATinsert(ATempty, term_f_57));
      t = b_14(h_42, j_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm m_42 = NULL,o_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_57 = ATgetArgument(t, 0);
      if(match_cons(g_57, sym_Stream_1))
        {
          m_42 = ATgetArgument(g_57, 0);
        }
      else
        _fail(t);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13(m_42, o_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = read_from_0_0(t);
  t = r_115(t);
  l_42 = t;
  t = xtc_new_file_0_0(t);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  t = f_13(h_21, k_42, l_42, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_42);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = debug_1_0(m_21, t);
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = save_as_1_0(s_21, t);
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_i_57;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm g_43 = NULL,x_43 = NULL;
  x_43 = t;
  {
    ATerm j_57 = t;
    int k_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,h_25 = NULL;
        t = term_k_35;
        f_25 = t;
        t = term_l_57;
        h_25 = t;
        t = term_m_57;
        t = h_14(f_25, h_25, t);
        g_43 = t;
        t = if_verbose2_1_0(l_21, t);
        t = x_43;
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_25 = NULL,q_25 = NULL;
              t = term_k_35;
              o_25 = t;
              t = term_q_37;
              q_25 = t;
              t = term_r_37;
              t = h_14(o_25, q_25, t);
              t = x_43;
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              {
                static ATerm n_21 (ATerm t)
                {
                  ATerm p_57 = t;
                  int q_57 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          z_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = d_13(g_43, z_26, t);
                      LocalPopChoice(q_57);
                    }
                  else
                    {
                      t = p_57;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(n_21, t);
              }
            }
        }
        LocalPopChoice(k_57);
      }
    else
      {
        t = j_57;
        t = x_43;
      }
  }
  t = if_keep3_1_0(q_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  {
    ATerm w_57 = t;
    int x_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(c_45);
        LocalPopChoice(x_57);
      }
    else
      {
        t = w_57;
        t = c_45;
      }
  }
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_c_57;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  static ATerm u_21 (ATerm t)
  {
    ATerm r_44 = NULL,t_44 = NULL,v_44 = NULL;
    r_44 = t;
    t = term_c_57;
    t_44 = t;
    t = term_x_56;
    v_44 = t;
    t = term_b_58;
    t = h_14(t_44, v_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_44 != NULL) && (j_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_44 = ATgetFirst((ATermList) t);
        {
          ATerm c_58 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_44;
    t = map_1_0(w_21, t);
    t = r_44;
    t = end_scope_1_0(x_21, t);
    return(t);
  }
  t = repeat_2_0(u_21, _id, t);
  k_44 = t;
  t = SSL_exit(k_44);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_45 = NULL,c_46 = NULL;
      t = term_k_35;
      y_45 = t;
      t = term_u_35;
      c_46 = t;
      t = term_w_35;
      t = h_14(y_45, c_46, t);
      LocalPopChoice(m_58);
    }
  else
    {
      t = l_58;
      t = term_r_36;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_27 = NULL,n_27 = NULL;
      t = term_u_35;
      {
        ATerm n_58 = t;
        int o_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_27 = NULL,v_27 = NULL;
            t = term_k_35;
            u_27 = t;
            t = term_u_35;
            v_27 = t;
            t = term_w_35;
            t = h_14(u_27, v_27, t);
            LocalPopChoice(o_58);
          }
        else
          {
            t = n_58;
            t = term_r_36;
          }
      }
      m_27 = t;
      t = term_e_57;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_e_57, m_27);
      t = q_13(n_27, m_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm q_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_45;
      t = copy_to_1_0(a_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_d_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,i_46 = NULL,l_46 = NULL;
  t = n_82(t);
  f_46 = t;
  t = term_k_35;
  i_46 = t;
  t = term_t_39;
  l_46 = t;
  t = term_u_39;
  t = h_14(i_46, l_46, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, f_46);
  t = n_14(g_46, f_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,p_47 = NULL;
  l_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        t = l_47;
        t = v_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, p_47, m_28);
        t = q_13(p_47, m_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_47);
        LocalPopChoice(u_58);
      }
    else
      {
        t = t_58;
        {
          ATerm v_58 = t;
          int x_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_28 = NULL;
              t = l_47;
              t = v_0(t);
              w_28 = t;
              {
                ATerm a_59 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_28 = NULL;
                    x_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_28;
                          }
                        else
                          {
                            t = x_28;
                            if((p_47 != t))
                              {
                                _fail(t);
                              }
                            t = x_28;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_59;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_47, w_28);
              t = q_13(p_47, w_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_47);
              LocalPopChoice(x_58);
            }
          else
            {
              t = v_58;
              t = l_47;
              t = v_0(t);
              if((p_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_47);
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
  t = term_b_59;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm w_48 = NULL;
  w_48 = t;
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL,t_29 = NULL,x_29 = NULL,y_29 = NULL,c_30 = NULL;
        t = term_k_35;
        y_29 = t;
        t = term_e_59;
        c_30 = t;
        t = term_g_59;
        t = h_14(y_29, c_30, t);
        t = w_48;
        t = copy_to_1_0(b_22, t);
        s_29 = t;
        t = term_p_35;
        t_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_59));
        x_29 = t;
        t = SSL_printnl(t_29, x_29);
        t = s_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        t = w_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,m_50 = NULL;
  t = term_e_40;
  {
    ATerm k_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL,r_50 = NULL;
        t = term_k_35;
        o_50 = t;
        t = term_e_40;
        r_50 = t;
        t = term_f_40;
        t = h_14(o_50, r_50, t);
        LocalPopChoice(l_59);
      }
    else
      {
        t = k_59;
        t = term_l_38;
      }
  }
  z_49 = t;
  t = term_l_38;
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, term_l_38);
  t = o_13(z_49, m_50, t);
  a_50 = t;
  t = SSL_int_to_string(a_50);
  y_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_49), term_e_40);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm t_50 = NULL,x_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,l_51 = NULL,m_51 = NULL;
  d_51 = t;
  t = term_n_59;
  t_50 = t;
  t = d_51;
  {
    ATerm p_59 = t;
    int r_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL,t_51 = NULL;
        t = term_k_35;
        n_51 = t;
        t = term_u_35;
        t_51 = t;
        t = term_w_35;
        t = h_14(n_51, t_51, t);
        LocalPopChoice(r_59);
      }
    else
      {
        t = p_59;
        {
          ATerm u_51 = NULL,v_51 = NULL;
          t = term_k_35;
          u_51 = t;
          t = term_t_39;
          v_51 = t;
          t = term_u_39;
          t = h_14(u_51, v_51, t);
        }
      }
  }
  m_51 = t;
  t = d_51;
  t = pass_keep_0_0(t);
  a_51 = t;
  t = term_k_35;
  e_51 = t;
  t = term_s_59;
  l_51 = t;
  t = term_t_59;
  t = h_14(e_51, l_51, t);
  b_51 = t;
  t = term_v_59;
  {
    ATerm y_59 = t;
    int z_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL,y_51 = NULL;
        t = term_k_35;
        w_51 = t;
        t = term_v_59;
        y_51 = t;
        t = term_a_60;
        t = h_14(w_51, y_51, t);
        LocalPopChoice(z_59);
        t = (ATerm) ATinsert(ATempty, term_v_59);
      }
    else
      {
        t = y_59;
        t = (ATerm) ATempty;
      }
  }
  c_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_51), a_51), b_51), (ATerm) ATinsert(ATinsert(ATempty, m_51), term_b_60));
  t = concat_0_0(t);
  x_50 = t;
  t = d_51;
  t = comp_0_2(t_50, x_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL,i_52 = NULL,o_52 = NULL;
        t = term_k_35;
        i_52 = t;
        t = term_l_35;
        o_52 = t;
        t = term_m_35;
        t = h_14(i_52, o_52, t);
        h_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_52, term_x_38);
        t = geq_0_0(t);
        t = c_52;
        t = q_106(t);
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = c_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,o_53 = NULL;
  o_53 = t;
  t = SSL_explode_string(o_53);
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_55 (ATerm t)
        {
          ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
          i_55 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_55 = ATgetFirst((ATermList) t);
              k_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_60 = t;
            int h_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_31 = NULL,p_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(i_55);
                f_31 = t;
                t = k_55;
                t = p_55(t);
                p_31 = t;
                t = (ATerm) ATinsert(CheckATermList(p_31), j_55);
                k_10 = t;
                t = SSLsetAnnotations(k_10, f_31);
                LocalPopChoice(h_60);
              }
            else
              {
                t = g_60;
                {
                  ATerm i_60 = t;
                  int j_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_32 = NULL,l_10 = NULL;
                      t = SSLgetAnnotations(i_55);
                      d_32 = t;
                      t = j_55;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(k_55), j_55);
                      l_10 = t;
                      t = SSLsetAnnotations(l_10, d_32);
                      LocalPopChoice(j_60);
                    }
                  else
                    {
                      t = i_60;
                      {
                        ATerm x_32 = NULL,g_33 = NULL,m_10 = NULL;
                        t = SSLgetAnnotations(i_55);
                        x_32 = t;
                        t = j_55;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = k_55;
                        t = w_101(t);
                        g_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_33), j_55);
                        m_10 = t;
                        t = SSLsetAnnotations(m_10, x_32);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = p_55(t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
      }
  }
  l_53 = t;
  t = SSL_implode_string(l_53);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = debug_1_0(m_22, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = term_k_60;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = debug_1_0(p_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_l_60;
  return(t);
}
static ATerm j_13 (ATerm f_21, ATerm t)
{
  ATerm g_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL;
  t = f_21;
  t = basename_1_0(_id, t);
  g_56 = t;
  t = if_verbose3_1_0(g_22, t);
  t = term_v_39;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, g_56);
  t = m_14(l_56, g_56, t);
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_56 = NULL,q_56 = NULL;
        t = term_k_35;
        p_56 = t;
        t = term_u_35;
        q_56 = t;
        t = term_w_35;
        t = h_14(p_56, q_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(n_60);
      }
    else
      {
        t = m_60;
        t = g_56;
      }
  }
  j_56 = t;
  t = if_verbose3_1_0(o_22, t);
  t = term_t_39;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, j_56);
  t = m_14(k_56, j_56, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_56);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(s_22, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_p_60;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = if_verbose1_1_0(x_22, t);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,a_37 = NULL,b_37 = NULL,k_37 = NULL,q_34 = NULL,t_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_13(h_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm s_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
        i_58 = t;
        t = term_k_35;
        j_58 = t;
        t = term_q_37;
        k_58 = t;
        t = term_r_37;
        t = h_14(j_58, k_58, t);
        t = i_58;
        LocalPopChoice(t_60);
      }
    else
      {
        t = s_60;
        t = add_main_0_0(t);
      }
  }
  g_58 = t;
  {
    ATerm u_60 = t;
    int v_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_58 = ATgetArgument(t, 0);
            {
              ATerm q_33 = NULL,u_10 = NULL;
              t = SSLgetAnnotations(g_58);
              q_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_58);
              u_10 = t;
              t = SSLsetAnnotations(u_10, q_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_58;
          }
        LocalPopChoice(v_60);
        t = xtc_transform_file_2_0(y_22, z_22, t);
      }
    else
      {
        t = u_60;
        t = xtc_transform_term_2_0(a_23, b_23, t);
      }
  }
  f_58 = t;
  {
    ATerm w_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_58 = ATgetArgument(t, 0);
            {
              ATerm v_33 = NULL,v_10 = NULL;
              t = SSLgetAnnotations(f_58);
              v_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_58);
              v_10 = t;
              t = SSLsetAnnotations(v_10, v_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_58;
          }
        LocalPopChoice(y_60);
        t = xtc_transform_file_2_0(g_23, j_23, t);
      }
    else
      {
        t = w_60;
        t = xtc_transform_term_2_0(l_23, m_23, t);
      }
  }
  t = if_keep5_1_0(p_23, t);
  e_58 = t;
  {
    ATerm z_60 = t;
    int c_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_59 = ATgetArgument(t, 0);
            {
              ATerm i_34 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(e_58);
              i_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_59);
              a_11 = t;
              t = SSLsetAnnotations(a_11, i_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_58;
          }
        LocalPopChoice(c_61);
        t = xtc_transform_file_2_0(t_23, y_23, t);
      }
    else
      {
        t = z_60;
        t = xtc_transform_term_2_0(z_23, a_24, t);
      }
  }
  t = if_keep5_1_0(d_24, t);
  u_34 = t;
  t = term_e_61;
  q_34 = t;
  t = u_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  t_34 = t;
  t = u_34;
  t = comp_0_2(q_34, t_34, t);
  d_58 = t;
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_59 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(d_58);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_59);
              l_11 = t;
              t = SSLsetAnnotations(l_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_58;
          }
        LocalPopChoice(j_61);
        t = xtc_transform_file_2_0(f_24, h_24, t);
      }
    else
      {
        t = i_61;
        t = xtc_transform_term_2_0(i_24, j_24, t);
      }
  }
  a_58 = t;
  {
    ATerm k_61 = t;
    int m_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_59 = ATgetArgument(t, 0);
            {
              ATerm i_35 = NULL,k_12 = NULL;
              t = SSLgetAnnotations(a_58);
              i_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_59);
              k_12 = t;
              t = SSLsetAnnotations(k_12, i_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(m_61);
        t = xtc_transform_file_2_0(l_24, o_24, t);
      }
    else
      {
        t = k_61;
        t = xtc_transform_term_2_0(p_24, q_24, t);
      }
  }
  t = if_keep5_1_0(r_24, t);
  z_57 = t;
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_60 = ATgetArgument(t, 0);
            {
              ATerm n_35 = NULL,l_12 = NULL;
              t = SSLgetAnnotations(z_57);
              n_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_60);
              l_12 = t;
              t = SSLsetAnnotations(l_12, n_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_57;
          }
        LocalPopChoice(t_61);
        t = xtc_transform_file_2_0(t_24, u_24, t);
      }
    else
      {
        t = s_61;
        t = xtc_transform_term_2_0(w_24, y_24, t);
      }
  }
  y_57 = t;
  {
    ATerm u_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_60 = ATgetArgument(t, 0);
            {
              ATerm v_35 = NULL,m_12 = NULL;
              t = SSLgetAnnotations(y_57);
              v_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_60);
              m_12 = t;
              t = SSLsetAnnotations(m_12, v_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_57;
          }
        LocalPopChoice(w_61);
        t = xtc_transform_file_2_0(a_25, b_25, t);
      }
    else
      {
        t = u_61;
        t = xtc_transform_term_2_0(d_25, e_25, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL,f_61 = NULL,g_61 = NULL;
        d_61 = t;
        t = term_k_35;
        f_61 = t;
        t = term_q_37;
        g_61 = t;
        t = term_r_37;
        t = h_14(f_61, g_61, t);
        t = d_61;
        LocalPopChoice(a_62);
        {
          ATerm h_61 = NULL;
          h_61 = t;
          {
            ATerm b_62 = t;
            int d_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    l_61 = ATgetArgument(t, 0);
                    {
                      ATerm h_36 = NULL,n_12 = NULL;
                      t = SSLgetAnnotations(h_61);
                      h_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, l_61);
                      n_12 = t;
                      t = SSLsetAnnotations(n_12, h_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = h_61;
                  }
                LocalPopChoice(d_62);
                t = xtc_transform_file_2_0(g_25, j_25, t);
              }
            else
              {
                t = b_62;
                t = xtc_transform_term_2_0(r_25, s_25, t);
              }
          }
        }
      }
    else
      {
        t = z_61;
        {
          ATerm p_61 = NULL;
          p_61 = t;
          {
            ATerm e_62 = t;
            int f_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    v_61 = ATgetArgument(t, 0);
                    {
                      ATerm s_36 = NULL,o_12 = NULL;
                      t = SSLgetAnnotations(p_61);
                      s_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, v_61);
                      o_12 = t;
                      t = SSLsetAnnotations(o_12, s_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_61;
                  }
                LocalPopChoice(f_62);
                t = xtc_transform_file_2_0(t_25, u_25, t);
              }
            else
              {
                t = e_62;
                t = xtc_transform_term_2_0(v_25, x_25, t);
              }
          }
          t = if_keep2_1_0(y_25, t);
        }
      }
  }
  k_37 = t;
  t = term_i_62;
  a_37 = t;
  t = k_37;
  t = pass_warnings_0_0(t);
  b_37 = t;
  t = k_37;
  t = comp_0_2(a_37, b_37, t);
  v_57 = t;
  {
    ATerm j_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_62 = ATgetArgument(t, 0);
            {
              ATerm o_37 = NULL,q_12 = NULL;
              t = SSLgetAnnotations(v_57);
              o_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_62);
              q_12 = t;
              t = SSLsetAnnotations(q_12, o_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_57;
          }
        LocalPopChoice(k_62);
        t = xtc_transform_file_2_0(c_26, d_26, t);
      }
    else
      {
        t = j_62;
        t = xtc_transform_term_2_0(e_26, g_26, t);
      }
  }
  u_57 = t;
  {
    ATerm l_62 = t;
    int m_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_62 = ATgetArgument(t, 0);
            {
              ATerm z_37 = NULL,r_12 = NULL;
              t = SSLgetAnnotations(u_57);
              z_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_62);
              r_12 = t;
              t = SSLsetAnnotations(r_12, z_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_57;
          }
        LocalPopChoice(m_62);
        t = xtc_transform_file_2_0(h_26, i_26, t);
      }
    else
      {
        t = l_62;
        t = xtc_transform_term_2_0(l_26, m_26, t);
      }
  }
  t = if_keep2_1_0(n_26, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = term_p_35;
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(r_57), term_n_62);
  t_57 = t;
  t = SSL_printnl(s_57, t_57);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(r_57), term_n_62));
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_p_62;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm r_58 = NULL;
  t = pass_verbose_0_0(t);
  r_58 = t;
  t = (ATerm) ATinsert(CheckATermList(r_58), term_j_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_p_62;
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm s_58 = NULL;
  t = pass_verbose_0_0(t);
  s_58 = t;
  t = (ATerm) ATinsert(CheckATermList(s_58), term_j_38);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_s_62;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm y_58 = NULL;
  t = pass_verbose_0_0(t);
  y_58 = t;
  t = (ATerm) ATinsert(CheckATermList(y_58), term_j_38);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_s_62;
  return(t);
}
static ATerm m_23 (ATerm t)
{
  ATerm z_58 = NULL;
  t = pass_verbose_0_0(t);
  z_58 = t;
  t = (ATerm) ATinsert(CheckATermList(z_58), term_j_38);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = save_as_1_0(r_23, t);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_t_62;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = term_u_62;
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm h_59 = NULL;
  t = pass_verbose_0_0(t);
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), term_j_38);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = term_u_62;
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm i_59 = NULL;
  t = pass_verbose_0_0(t);
  i_59 = t;
  t = (ATerm) ATinsert(CheckATermList(i_59), term_j_38);
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = save_as_1_0(e_24, t);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_v_62;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_w_62;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_j_38);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_w_62;
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm q_59 = NULL;
  t = pass_verbose_0_0(t);
  q_59 = t;
  t = (ATerm) ATinsert(CheckATermList(q_59), term_j_38);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  t = term_x_62;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm w_59 = NULL;
  t = pass_verbose_0_0(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), term_j_38);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_x_62;
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm x_59 = NULL;
  t = pass_verbose_0_0(t);
  x_59 = t;
  t = (ATerm) ATinsert(CheckATermList(x_59), term_j_38);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = save_as_1_0(s_24, t);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_y_62;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = term_z_62;
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_j_38);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_z_62;
  return(t);
}
static ATerm y_24 (ATerm t)
{
  ATerm r_60 = NULL;
  t = pass_verbose_0_0(t);
  r_60 = t;
  t = (ATerm) ATinsert(CheckATermList(r_60), term_j_38);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_a_63;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm a_61 = NULL;
  t = pass_verbose_0_0(t);
  a_61 = t;
  t = (ATerm) ATinsert(CheckATermList(a_61), term_j_38);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_a_63;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm b_61 = NULL;
  t = pass_verbose_0_0(t);
  b_61 = t;
  t = (ATerm) ATinsert(CheckATermList(b_61), term_j_38);
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_p_54;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm n_61 = NULL;
  t = pass_verbose_0_0(t);
  n_61 = t;
  t = (ATerm) ATinsert(CheckATermList(n_61), term_j_38);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_p_54;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm o_61 = NULL;
  t = pass_verbose_0_0(t);
  o_61 = t;
  t = (ATerm) ATinsert(CheckATermList(o_61), term_j_38);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = term_b_63;
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm x_61 = NULL;
  t = pass_verbose_0_0(t);
  x_61 = t;
  t = (ATerm) ATinsert(CheckATermList(x_61), term_j_38);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = term_b_63;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm y_61 = NULL;
  t = pass_verbose_0_0(t);
  y_61 = t;
  t = (ATerm) ATinsert(CheckATermList(y_61), term_j_38);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(b_26, t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_c_63;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm g_62 = NULL;
  t = pass_verbose_0_0(t);
  g_62 = t;
  t = (ATerm) ATinsert(CheckATermList(g_62), term_j_38);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  ATerm h_62 = NULL;
  t = pass_verbose_0_0(t);
  h_62 = t;
  t = (ATerm) ATinsert(CheckATermList(h_62), term_j_38);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm q_62 = NULL;
  t = pass_verbose_0_0(t);
  q_62 = t;
  t = (ATerm) ATinsert(CheckATermList(q_62), term_j_38);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm r_62 = NULL;
  t = pass_verbose_0_0(t);
  r_62 = t;
  t = (ATerm) ATinsert(CheckATermList(r_62), term_j_38);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = save_as_1_0(p_26, t);
  return(t);
}
static ATerm p_26 (ATerm t)
{
  t = term_f_63;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_22, t);
  t = profile_p__2_0(t_22, u_22, t);
  return(t);
}
static ATerm h_14 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm k_63 = NULL;
  t = lookup_table_0_1(u_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_14(v_54, k_63, t);
  return(t);
}
static ATerm k_13 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL;
  n_63 = t;
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
        t = h_14(g_53, h_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_63 = ATgetFirst((ATermList) t);
            m_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_63);
        {
          ATerm q_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_53, h_53, m_63);
          t = lookup_table_0_1(g_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_14(h_53, m_63, q_63, t);
          t = (ATerm) ATmakeAppl(sym__3, g_53, h_53, m_63);
        }
      }
    else
      {
        t = g_63;
        {
          ATerm s_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
          t = lookup_table_0_1(g_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_14(h_53, s_63, t);
          t = (ATerm) ATmakeAppl(sym__2, g_53, h_53);
        }
      }
  }
  t = n_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,c_64 = NULL,e_64 = NULL,f_64 = NULL;
  z_63 = t;
  t = e_104(t);
  y_63 = t;
  {
    ATerm j_63 = t;
    int l_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_64 = NULL;
        t = term_x_56;
        i_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_63, term_x_56);
        t = h_14(y_63, i_64, t);
        LocalPopChoice(l_63);
      }
    else
      {
        t = j_63;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_63 = ATgetFirst((ATermList) t);
      w_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_63, term_x_56, w_63);
  t = lookup_table_0_1(y_63, t);
  f_64 = t;
  t = term_x_56;
  c_64 = t;
  t = f_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(c_64, w_63, e_64, t);
  t = x_63;
  {
    static ATerm u_26 (ATerm t)
    {
      ATerm j_64 = NULL;
      j_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_63, j_64);
      t = k_13(y_63, j_64, t);
      return(t);
    }
    t = map_1_0(u_26, t);
  }
  t = z_63;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm o_63 = t;
  int p_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_83(t);
      t = r_83(t);
      LocalPopChoice(p_63);
    }
  else
    {
      t = o_63;
      t = r_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,q_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  m_64 = t;
  t = d_104(t);
  l_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_64, term_x_56);
  {
    ATerm r_63 = t;
    int t_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_64 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_63 = ATgetArgument(t, 0);
            ATerm v_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_56;
        z_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_64, term_x_56);
        t = h_14(l_64, z_64, t);
        LocalPopChoice(t_63);
      }
    else
      {
        t = r_63;
        t = (ATerm) ATempty;
      }
  }
  n_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_64, term_x_56, (ATerm) ATinsert(CheckATermList(n_64), (ATerm) ATempty));
  t = lookup_table_0_1(l_64, t);
  v_64 = t;
  t = term_x_56;
  q_64 = t;
  t = (ATerm) ATinsert(CheckATermList(n_64), (ATerm) ATempty);
  t_64 = t;
  t = v_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(q_64, t_64, u_64, t);
  t = m_64;
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_c_57;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm s_65 = NULL;
  s_65 = t;
  {
    ATerm a_64 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_65);
        LocalPopChoice(b_64);
      }
    else
      {
        t = a_64;
        t = s_65;
      }
  }
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_c_57;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm f_65 = NULL;
  static ATerm w_26 (ATerm t)
  {
    ATerm i_65 = NULL;
    i_65 = t;
    {
      ATerm d_64 = t;
      int g_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_65 = NULL,n_65 = NULL;
          t = term_c_57;
          j_65 = t;
          t = term_x_56;
          n_65 = t;
          t = term_b_58;
          t = h_14(j_65, n_65, t);
          LocalPopChoice(g_64);
        }
      else
        {
          t = d_64;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_65 != NULL) && (f_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_65 = ATgetFirst((ATermList) t);
        {
          ATerm h_64 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_65;
    t = map_1_0(x_26, t);
    t = i_65;
    t = end_scope_1_0(a_27, t);
    return(t);
  }
  t = begin_scope_1_0(v_26, t);
  t = restore_always_2_0(c_116, w_26, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm y_65 = NULL;
  y_65 = t;
  {
    ATerm k_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
        t = term_k_35;
        b_66 = t;
        t = term_l_35;
        c_66 = t;
        t = term_m_35;
        t = h_14(b_66, c_66, t);
        a_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_66, term_l_38);
        t = geq_0_0(t);
        t = y_65;
        t = o_106(t);
        LocalPopChoice(o_64);
      }
    else
      {
        t = k_64;
        t = y_65;
      }
  }
  return(t);
}
static ATerm m_13 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm p_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_41, k_41);
      LocalPopChoice(r_64);
    }
  else
    {
      t = p_64;
      t = SSL_addr(j_41, k_41);
    }
  return(t);
}
static ATerm o_13 (ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm s_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_41, q_41);
      LocalPopChoice(w_64);
    }
  else
    {
      t = s_64;
      t = SSL_subtr(p_41, q_41);
    }
  return(t);
}
static ATerm p_13 (ATerm d_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm t)
{
  ATerm f_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_50, e_50);
  t = o_13(d_50, e_50, t);
  f_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_50, g_50);
  t = o_13(f_50, g_50, t);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
  t = o_13(h_50, i_50, t);
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_50, k_50);
  t = o_13(j_50, k_50, t);
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, f_66, j_66, k_66, l_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,y_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_64 = ATgetArgument(t, 0);
      if(match_cons(x_64, sym__4))
        {
          n_66 = ATgetArgument(x_64, 0);
          o_66 = ATgetArgument(x_64, 1);
          r_66 = ATgetArgument(x_64, 2);
          s_66 = ATgetArgument(x_64, 3);
        }
      else
        _fail(t);
      {
        ATerm y_64 = ATgetArgument(t, 1);
        if(match_cons(y_64, sym__4))
          {
            t_66 = ATgetArgument(y_64, 0);
            u_66 = ATgetArgument(y_64, 1);
            v_66 = ATgetArgument(y_64, 2);
            y_66 = ATgetArgument(y_64, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_13(n_66, o_66, r_66, s_66, t_66, u_66, v_66, y_66, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,k_67 = NULL,m_67 = NULL,n_67 = NULL,q_67 = NULL,s_67 = NULL,x_67 = NULL;
  i_67 = t;
  t = times_0_0(t);
  b_67 = t;
  t = i_67;
  t = c_110(t);
  c_67 = t;
  t = times_0_0(t);
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_67, b_67);
  t = diff_times_0_0(t);
  g_67 = t;
  if(match_cons(t, sym__4))
    {
      q_67 = ATgetArgument(t, 0);
      {
        ATerm a_65 = ATgetArgument(t, 1);
      }
      s_67 = ATgetArgument(t, 2);
      {
        ATerm b_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_67, s_67);
  t = m_13(q_67, s_67, t);
  x_67 = t;
  t = SSL_TicksToSeconds(x_67);
  d_67 = t;
  t = g_67;
  if(match_cons(t, sym__4))
    {
      ATerm c_65 = ATgetArgument(t, 0);
      k_67 = ATgetArgument(t, 1);
      {
        ATerm d_65 = ATgetArgument(t, 2);
      }
      m_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_67, m_67);
  t = m_13(k_67, m_67, t);
  n_67 = t;
  t = SSL_TicksToSeconds(n_67);
  f_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_67), term_g_65), d_67), term_e_65);
  t = b_110(t);
  t = c_67;
  return(t);
}
ATerm debug_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,d_68 = NULL,e_68 = NULL;
  z_67 = t;
  t = v_90(t);
  a_68 = t;
  t = term_p_35;
  d_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_67), a_68);
  e_68 = t;
  t = SSL_printnl(d_68, e_68);
  t = z_67;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  h_68 = t;
  t = term_k_35;
  n_68 = t;
  t = term_h_65;
  o_68 = t;
  t = term_k_65;
  t = h_14(n_68, o_68, t);
  i_68 = t;
  t = term_r_36;
  j_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_65), term_t_65), term_r_65), term_q_65), term_p_65), term_o_65), term_m_65), i_68), term_l_65);
  m_68 = t;
  t = SSL_printnl(j_68, m_68);
  t = h_68;
  return(t);
}
static ATerm q_13 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_copy(n_44, o_44);
  return(t);
}
static ATerm r_13 (ATerm y_55, ATerm t)
{
  t = SSL_hashtable_keys(y_55);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL;
  static ATerm b_27 (ATerm t)
  {
    ATerm r_68 = NULL,s_68 = NULL;
    r_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), r_68);
    t = h_14(not_null(p_68), r_68, t);
    s_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_68, s_68);
    return(t);
  }
  if(((p_68 != NULL) && (p_68 != t)))
    _fail(t);
  else
    p_68 = t;
  t = lookup_table_0_1(p_68, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_13(q_68, t);
  t = map_1_0(b_27, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm u_68 = NULL;
  u_68 = t;
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
        t = term_k_35;
        x_68 = t;
        t = term_l_35;
        y_68 = t;
        t = term_m_35;
        t = h_14(x_68, y_68, t);
        w_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_68, term_a_45);
        t = geq_0_0(t);
        t = u_68;
        t = s_106(t);
        LocalPopChoice(w_65);
      }
    else
      {
        t = v_65;
        t = u_68;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm b_69 = NULL;
  b_69 = t;
  {
    ATerm x_65 = t;
    int z_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
        t = term_k_35;
        e_69 = t;
        t = term_l_35;
        f_69 = t;
        t = term_m_35;
        t = h_14(e_69, f_69, t);
        d_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_69, term_w_41);
        t = geq_0_0(t);
        t = b_69;
        t = r_106(t);
        LocalPopChoice(z_65);
      }
    else
      {
        t = x_65;
        t = b_69;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  if(match_cons(t, sym__2))
    {
      q_69 = ATgetArgument(t, 0);
      r_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_69;
        if((q_69 != t))
          {
            _fail(t);
          }
        t = p_69;
        LocalPopChoice(e_66);
      }
    else
      {
        t = d_66;
        t = (ATerm) ATmakeAppl(sym__2, q_69, r_69);
        {
          ATerm g_66 = t;
          int h_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_69, r_69);
              LocalPopChoice(h_66);
            }
          else
            {
              t = g_66;
              t = SSL_gtr(q_69, r_69);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_69, r_69);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm v_69 = NULL;
  v_69 = t;
  {
    ATerm i_66 = t;
    int m_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
        t = term_k_35;
        z_69 = t;
        t = term_l_35;
        a_70 = t;
        t = term_m_35;
        t = h_14(z_69, a_70, t);
        y_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_69, term_e_42);
        t = geq_0_0(t);
        t = v_69;
        t = t_106(t);
        LocalPopChoice(m_66);
      }
    else
      {
        t = i_66;
        t = v_69;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm q_29, ATerm p_29, ATerm t)
{
  t = v_95(t);
  {
    static ATerm c_27 (ATerm t)
    {
      ATerm d_70 = NULL;
      d_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, d_70);
      t = u_95(t);
      return(t);
    }
    t = fetch_1_0(c_27, t);
  }
  t = p_29;
  return(t);
}
static ATerm v_13 (ATerm r_95 (ATerm), ATerm m_29, ATerm l_29, ATerm t)
{
  static ATerm e_71 (ATerm t)
  {
    ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
    x_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_70 = ATgetFirst((ATermList) t);
            z_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_66 = t;
          int q_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_70;
              {
                static ATerm d_27 (ATerm t)
                {
                  t = l_29;
                  return(t);
                }
                t = u_13(r_95, d_27, y_70, z_70, t);
              }
              t = e_71(t);
              LocalPopChoice(q_66);
            }
          else
            {
              t = p_66;
              {
                ATerm v_38 = NULL,y_38 = NULL,z_14 = NULL;
                t = SSLgetAnnotations(x_70);
                v_38 = t;
                t = z_70;
                t = e_71(t);
                y_38 = t;
                t = (ATerm) ATinsert(CheckATermList(y_38), y_70);
                z_14 = t;
                t = SSLsetAnnotations(z_14, v_38);
              }
            }
        }
      }
    return(t);
  }
  t = m_29;
  t = e_71(t);
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm t_71 = NULL;
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      if((t_71 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_13 (ATerm y_53, ATerm z_53, ATerm a_54, ATerm t)
{
  ATerm j_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  {
    ATerm w_66 = t;
    int x_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_66 = ATgetArgument(t, 0);
            ATerm a_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
        t = h_14(y_53, z_53, t);
        LocalPopChoice(x_66);
      }
    else
      {
        t = w_66;
        t = (ATerm) ATempty;
      }
  }
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_71, a_54);
  t = v_13(e_27, n_71, a_54, t);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_53, z_53, m_71);
  t = lookup_table_0_1(y_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(z_53, m_71, o_71, t);
  t = j_71;
  return(t);
}
static ATerm x_13 (ATerm k_111 (ATerm), ATerm i_54, ATerm h_54, ATerm t)
{
  static ATerm h_27 (ATerm t)
  {
    ATerm v_71 = NULL,w_71 = NULL;
    if(match_cons(t, sym__2))
      {
        v_71 = ATgetArgument(t, 0);
        w_71 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_54, v_71, w_71);
    t = k_111(t);
    return(t);
  }
  t = h_54;
  t = map_1_0(h_27, t);
  return(t);
}
static ATerm b_14 (ATerm g_38, ATerm h_38, ATerm t)
{
  t = SSL_access(g_38, h_38);
  return(t);
}
static ATerm y_72 (ATerm m_72, ATerm t)
{
  t = SSL_fclose(m_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_72 = NULL,v_72 = NULL;
  v_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_72 = ATgetArgument(t, 0);
      {
        ATerm e_67 = t;
        int j_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_72);
            LocalPopChoice(j_67);
          }
        else
          {
            t = e_67;
            t = y_72(v_72, t);
          }
      }
    }
  else
    {
      t = y_72(v_72, t);
    }
  return(t);
}
static ATerm y_13 (ATerm k_23, ATerm t)
{
  t = SSL_read_term_from_stream(k_23);
  return(t);
}
static ATerm z_13 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm z_72 = NULL;
  t = SSL_fopen(p_38, q_38);
  z_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_73 = NULL;
  t = SSL_stdin_stream();
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_73);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_73 = NULL;
  t = SSL_stdout_stream();
  b_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_73);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_73 = NULL;
  t = SSL_stderr_stream();
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_73);
  return(t);
}
static ATerm y_74 (ATerm n_73, ATerm t)
{
  ATerm q_73 = NULL;
  t = SSL_explode_term(n_73);
  if(match_cons(t, sym__2))
    {
      ATerm l_67 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_67) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_67 = ATgetArgument(t, 1);
        if(((ATgetType(o_67) == AT_LIST) && !(ATisEmpty(o_67))))
          {
            q_73 = ATgetFirst((ATermList) o_67);
            {
              ATerm p_67 = (ATerm) ATgetNext((ATermList) o_67);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_74 (ATerm u_73, ATerm w_73, ATerm x_73, ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,f_74 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(x_73);
  a_74 = t;
  t = u_73;
  if(match_cons(t, sym_Path_1))
    {
      f_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_74, w_73);
  b_15 = t;
  t = SSLsetAnnotations(b_15, a_74);
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(y_73, z_73, t);
  return(t);
}
static ATerm a_75 (ATerm i_74, ATerm j_74, ATerm k_74, ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,o_74 = NULL,s_74 = NULL,f_15 = NULL;
  t = SSLgetAnnotations(k_74);
  o_74 = t;
  t = SSL_is_string(i_74);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_74, j_74);
  f_15 = t;
  t = SSLsetAnnotations(f_15, o_74);
  if(match_cons(t, sym__2))
    {
      l_74 = ATgetArgument(t, 0);
      m_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(l_74, m_74, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  v_74 = t;
  if(match_cons(t, sym__2))
    {
      w_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
      {
        ATerm r_67 = t;
        int t_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_74(v_74, t);
            LocalPopChoice(t_67);
          }
        else
          {
            t = r_67;
            {
              ATerm u_67 = t;
              int v_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_74(w_74, x_74, v_74, t);
                  LocalPopChoice(v_67);
                }
              else
                {
                  t = u_67;
                  t = a_75(w_74, x_74, v_74, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_74(v_74, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,m_75 = NULL;
  m_75 = t;
  {
    ATerm w_67 = t;
    int y_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_75, term_b_68);
        t = a_14(t);
        LocalPopChoice(y_67);
      }
    else
      {
        t = w_67;
        {
          ATerm j_40 = NULL,l_40 = NULL;
          t = term_c_68;
          l_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_68, m_75);
          t = n_14(l_40, m_75, t);
          j_40 = t;
          t = SSL_perror(j_40);
          _fail(t);
        }
      }
  }
  f_75 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_13(g_75, t);
  e_75 = t;
  t = f_75;
  t = fclose_0_0(t);
  t = e_75;
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm j_27 (ATerm t)
{
  t = term_g_68;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_68 = t;
  int l_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_75 = NULL,s_75 = NULL;
      r_75 = t;
      t = (ATerm) ATinsert(ATempty, term_t_68);
      s_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_75, (ATerm) ATinsert(ATempty, term_t_68));
      t = b_14(r_75, s_75, t);
      LocalPopChoice(l_68);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_68;
      {
        ATerm v_68 = t;
        int z_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_69 = t;
            if((PushChoice() == 0))
              {
                ATerm t_75 = NULL,v_75 = NULL;
                t_75 = t;
                t = (ATerm) ATinsert(ATempty, term_f_57);
                v_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_75, (ATerm) ATinsert(ATempty, term_f_57));
                t = b_14(t_75, v_75, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_69;
              }
            t = debug_1_0(i_27, t);
            LocalPopChoice(z_68);
          }
        else
          {
            t = v_68;
            t = debug_1_0(j_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm l_27 (ATerm t)
{
  t = debug_1_0(o_27, t);
  return(t);
}
static ATerm o_27 (ATerm t)
{
  t = term_c_69;
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = debug_1_0(s_27, t);
  return(t);
}
static ATerm s_27 (ATerm t)
{
  t = term_g_69;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,u_76 = NULL;
  r_76 = t;
  t = term_p_35;
  s_76 = t;
  t = (ATerm) ATinsert(ATempty, term_h_69);
  u_76 = t;
  t = SSL_printnl(s_76, u_76);
  t = r_76;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  if(match_cons(t, sym__3))
    {
      v_76 = ATgetArgument(t, 0);
      w_76 = ATgetArgument(t, 1);
      x_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_13(v_76, w_76, x_76, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,b_77 = NULL;
  y_76 = t;
  t = term_p_35;
  z_76 = t;
  t = (ATerm) ATinsert(ATempty, term_i_69);
  b_77 = t;
  t = SSL_printnl(z_76, b_77);
  t = y_76;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,g_77 = NULL;
  d_77 = t;
  t = term_p_35;
  e_77 = t;
  t = (ATerm) ATinsert(ATempty, term_h_69);
  g_77 = t;
  t = SSL_printnl(e_77, g_77);
  t = d_77;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,c_76 = NULL,e_76 = NULL,f_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  w_75 = t;
  t = if_verbose5_1_0(l_27, t);
  {
    ATerm j_69 = t;
    if((PushChoice() == 0))
      {
        ATerm o_76 = NULL,q_76 = NULL;
        t = term_k_69;
        o_76 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_75);
        q_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_69, (ATerm) ATmakeAppl(sym_Imported_1, w_75));
        t = h_14(o_76, q_76, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_69;
      }
  }
  y_75 = t;
  t = term_k_69;
  i_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_69, term_l_69, (ATerm) ATinsert(ATempty, w_75));
  t = lookup_table_0_1(i_76, t);
  m_76 = t;
  t = term_l_69;
  j_76 = t;
  t = (ATerm) ATinsert(ATempty, w_75);
  k_76 = t;
  t = m_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(j_76, k_76, l_76, t);
  t = y_75;
  t = if_verbose4_1_0(r_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_27, t);
  x_75 = t;
  t = term_k_69;
  h_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_69, x_75);
  t = x_13(w_27, h_76, x_75, t);
  t = if_verbose6_1_0(x_27, t);
  t = term_k_69;
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_69, (ATerm)ATmakeAppl(sym_Imported_1, w_75), (ATerm) ATempty);
  t = lookup_table_0_1(z_75, t);
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_75);
  a_76 = t;
  t = (ATerm) ATempty;
  c_76 = t;
  t = f_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(a_76, c_76, e_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_69, (ATerm)ATmakeAppl(sym_Imported_1, w_75), (ATerm) ATempty);
  t = if_verbose4_1_0(y_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm x_77 = NULL,z_77 = NULL,a_78 = NULL;
  x_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_77;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_77 = ATgetFirst((ATermList) t);
          a_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_69 = t;
        int n_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_40 = NULL,m_41 = NULL,r_41 = NULL,m_18 = NULL;
            t = SSLgetAnnotations(x_77);
            x_40 = t;
            t = z_77;
            t = b_99(t);
            m_41 = t;
            t = a_78;
            t = filter_1_0(b_99, t);
            r_41 = t;
            t = (ATerm) ATinsert(CheckATermList(r_41), m_41);
            m_18 = t;
            t = SSLsetAnnotations(m_18, x_40);
            LocalPopChoice(n_69);
          }
        else
          {
            t = m_69;
            t = a_78;
            t = filter_1_0(b_99, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm t)
{
  static ATerm d_78 (ATerm t)
  {
    ATerm o_69 = t;
    int s_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_83(t);
        t = d_78(t);
        LocalPopChoice(s_69);
      }
    else
      {
        t = o_69;
        t = v_83(t);
      }
    return(t);
  }
  t = d_78(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_78 = NULL,g_78 = NULL;
      t = term_k_35;
      e_78 = t;
      t = term_w_69;
      g_78 = t;
      t = term_x_69;
      t = h_14(e_78, g_78, t);
      LocalPopChoice(u_69);
    }
  else
    {
      t = t_69;
      {
        ATerm b_70 = t;
        int c_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_78 = NULL;
            t = term_e_70;
            i_78 = t;
            t = SSL_getenv(i_78);
            LocalPopChoice(c_70);
          }
        else
          {
            t = b_70;
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
  t = term_f_70;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL;
  t = term_k_69;
  p_78 = t;
  t = term_g_70;
  q_78 = t;
  t = term_h_70;
  t = h_14(p_78, q_78, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_70 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_70;
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
  t = term_j_70;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_78 = NULL;
  t = if_verbose5_1_0(z_27, t);
  l_78 = t;
  {
    ATerm k_70 = t;
    int l_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_78 = NULL,n_78 = NULL;
        t = term_k_69;
        m_78 = t;
        t = term_l_69;
        n_78 = t;
        t = term_m_70;
        t = h_14(m_78, n_78, t);
        LocalPopChoice(l_70);
      }
    else
      {
        t = k_70;
        {
          ATerm o_78 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_78 = t;
          t = repeat_2_0(b_28, _id, t);
          t = o_78;
        }
      }
  }
  t = l_78;
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
  t = term_n_70;
  return(t);
}
static ATerm v_79 (ATerm y_78, ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  t = term_k_69;
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_78);
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_69, (ATerm) ATmakeAppl(sym_Tool_1, y_78));
  t = h_14(b_79, c_79, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_70 = ATgetFirst((ATermList) t);
      if(match_cons(o_70, sym__2))
        {
          ATerm q_70 = ATgetArgument(o_70, 0);
          a_79 = ATgetArgument(o_70, 1);
        }
      else
        _fail(t);
      {
        ATerm p_70 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_79;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = debug_1_0(i_28, t);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_n_70;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_k_69;
  t = table_getlist_0_0(t);
  t = debug_1_0(k_28, t);
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = term_r_70;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_70 = t;
  int t_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_79 = NULL,f_79 = NULL,h_79 = NULL;
      t = if_verbose5_1_0(e_28, t);
      t = xtc_load_0_0(t);
      h_79 = t;
      if(match_cons(t, sym__2))
        {
          d_79 = ATgetArgument(t, 0);
          f_79 = ATgetArgument(t, 1);
          {
            ATerm u_70 = t;
            int v_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
                t = term_k_69;
                m_79 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_79);
                n_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_69, (ATerm) ATmakeAppl(sym_Tool_1, d_79));
                t = h_14(m_79, n_79, t);
                {
                  static ATerm g_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_79 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_79 != NULL) && (l_79 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_79 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_28, t);
                }
                t = not_null(l_79);
                LocalPopChoice(v_70);
              }
            else
              {
                t = u_70;
                t = v_79(h_79, t);
              }
          }
        }
      else
        {
          t = v_79(h_79, t);
        }
      t = if_verbose5_1_0(h_28, t);
      LocalPopChoice(t_70);
    }
  else
    {
      t = s_70;
      {
        ATerm u_79 = NULL,q_42 = NULL,r_42 = NULL;
        u_79 = t;
        t = term_p_35;
        q_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_71), u_79), term_w_70);
        r_42 = t;
        t = SSL_printnl(q_42, r_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_71), u_79), term_w_70);
        t = if_verbose5_1_0(j_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_14 (ATerm m_48, ATerm l_48, ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  t = m_48;
  {
    ATerm b_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_80 = NULL;
        t = term_k_35;
        c_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_35, m_48);
        t = h_14(c_80, m_48, t);
        LocalPopChoice(c_71);
      }
    else
      {
        t = b_71;
        t = (ATerm) ATempty;
      }
  }
  y_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_48, y_79);
  t = conc_0_0(t);
  x_79 = t;
  t = term_k_35;
  z_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, m_48, x_79);
  t = lookup_table_0_1(z_79, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(m_48, x_79, a_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, m_48, x_79);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_80 = NULL,j_80 = NULL,m_80 = NULL,o_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL;
      t = term_n_36;
      t = p_0(t);
      p_80 = t;
      t = term_d_71;
      q_80 = t;
      t = term_f_71;
      r_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_71, term_f_71, p_80);
      t = i_14(q_80, r_80, p_80, t);
      _fail(t);
    }
  else
    {
      ATerm y_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_80 = ATgetFirst((ATermList) t);
          j_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_80;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_80 = ATgetFirst((ATermList) t);
          o_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_80;
      t = n_0(t);
      t = m_80;
      t = o_0(t);
      y_80 = t;
      t = (ATerm) ATinsert(CheckATermList(o_80), y_80);
    }
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  if(match_string(t, "-S"))
    {
      t = b_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_81;
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL;
  t = term_l_35;
  c_81 = t;
  t = term_d_35;
  d_81 = t;
  t = term_g_71;
  t = m_14(c_81, d_81, t);
  t = term_h_71;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_i_71;
  return(t);
}
static ATerm p_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm e_81 = NULL,j_81 = NULL,m_81 = NULL;
  e_81 = t;
  t = SSL_string_to_int(e_81);
  j_81 = t;
  t = term_l_35;
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_35, j_81);
  t = m_14(m_81, j_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_81);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  t = term_k_71;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_28 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  t = term_l_71;
  o_81 = t;
  t = term_n_36;
  p_81 = t;
  t = term_p_71;
  t = m_14(o_81, p_81, t);
  t = term_q_71;
  return(t);
}
static ATerm u_28 (ATerm t)
{
  t = term_r_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_71 = t;
  int u_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_28, n_28, o_28, t);
      LocalPopChoice(u_71);
    }
  else
    {
      t = s_71;
      {
        ATerm x_71 = t;
        int y_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_28, q_28, r_28, t);
            LocalPopChoice(y_71);
          }
        else
          {
            t = x_71;
            t = Option_3_0(s_28, t_28, u_28, t);
          }
      }
    }
  return(t);
}
static ATerm d_14 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm z_71 = t;
  int a_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_81 = NULL,r_81 = NULL,t_81 = NULL;
      t = term_k_35;
      t_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_35, j_48);
      t = h_14(t_81, j_48, t);
      t = term_k_35;
      q_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_35, j_48);
      t = lookup_table_0_1(q_81, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          r_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_14(j_48, r_81, t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_35, j_48);
      LocalPopChoice(a_72);
    }
  else
    {
      t = z_71;
      t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
      t = m_14(j_48, k_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_91 (ATerm), ATerm t)
{
  static ATerm u_82 (ATerm t)
  {
    ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL;
    t_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_82 = ATgetFirst((ATermList) t);
        s_82 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_42 = NULL,b_43 = NULL,a_19 = NULL;
          t = SSLgetAnnotations(t_82);
          y_42 = t;
          t = s_82;
          t = u_82(t);
          b_43 = t;
          t = (ATerm) ATinsert(CheckATermList(b_43), r_82);
          a_19 = t;
          t = SSLsetAnnotations(a_19, y_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_82;
        t = x_91(t);
      }
    return(t);
  }
  t = u_82(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_81;
    }
  else
    {
      static ATerm v_28 (ATerm t)
      {
        t = not_null(x_81);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_81 = ATgetFirst((ATermList) t);
          if(((x_81 != NULL) && (x_81 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_81;
      t = at_end_1_0(v_28, t);
    }
  return(t);
}
static ATerm h_83 (ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_explode_term(y_82);
  if(match_cons(t, sym__2))
    {
      ATerm b_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_82;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
  e_83 = t;
  if(match_cons(t, sym__2))
    {
      c_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
      {
        ATerm c_72 = t;
        int d_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_29 (ATerm t)
            {
              t = d_83;
              return(t);
            }
            t = c_83;
            t = at_end_1_0(a_29, t);
            LocalPopChoice(d_72);
          }
        else
          {
            t = c_72;
            t = h_83(e_83, t);
          }
      }
    }
  else
    {
      t = h_83(e_83, t);
    }
  return(t);
}
static ATerm e_14 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL;
  t = n_48;
  {
    ATerm e_72 = t;
    int f_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_83 = NULL;
        t = term_k_35;
        n_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_35, n_48);
        t = h_14(n_83, n_48, t);
        LocalPopChoice(f_72);
      }
    else
      {
        t = e_72;
        t = (ATerm) ATempty;
      }
  }
  j_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_83, o_48);
  t = conc_0_0(t);
  i_83 = t;
  t = term_k_35;
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, n_48, i_83);
  t = lookup_table_0_1(k_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(n_48, i_83, l_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, n_48, i_83);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm p_83 = NULL;
  p_83 = t;
  if(match_string(t, "-o"))
    {
      t = p_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_83;
    }
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  s_83 = t;
  t = term_u_35;
  t_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_35, s_83);
  t = m_14(t_83, s_83, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_83);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = term_g_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_29, h_29, i_29, t);
  return(t);
}
static ATerm j_29 (ATerm t)
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
static ATerm k_29 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  z_83 = t;
  t = term_j_54;
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_54, z_83);
  t = m_14(a_84, z_83, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_83);
  return(t);
}
static ATerm n_29 (ATerm t)
{
  t = term_h_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_29, k_29, n_29, t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm h_84 = NULL;
  h_84 = t;
  if(match_string(t, "-I"))
    {
      t = h_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = h_84;
    }
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL,o_84 = NULL;
  i_84 = t;
  t = term_s_59;
  j_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_84), term_s_59);
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_59, (ATerm) ATinsert(ATinsert(ATempty, i_84), term_s_59));
  t = e_14(j_84, o_84, t);
  t = term_n_36;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = term_i_72;
  return(t);
}
static ATerm e_30 (ATerm t)
{
  ATerm p_84 = NULL;
  p_84 = t;
  if(match_string(t, "--main"))
    {
      t = p_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = p_84;
    }
  return(t);
}
static ATerm i_30 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL;
  q_84 = t;
  t = term_l_57;
  r_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_57, q_84);
  t = m_14(r_84, q_84, t);
  t = term_n_36;
  return(t);
}
static ATerm m_30 (ATerm t)
{
  t = term_j_72;
  return(t);
}
static ATerm n_30 (ATerm t)
{
  ATerm t_84 = NULL;
  t_84 = t;
  if(match_string(t, "--library"))
    {
      t = t_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = t_84;
    }
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  t = term_q_37;
  u_84 = t;
  t = term_n_36;
  v_84 = t;
  t = term_k_72;
  t = m_14(u_84, v_84, t);
  t = term_n_36;
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = term_l_72;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  w_84 = t;
  t = term_j_37;
  x_84 = t;
  t = (ATerm) ATinsert(ATempty, w_84);
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, (ATerm) ATinsert(ATempty, w_84));
  t = e_14(x_84, y_84, t);
  t = term_n_36;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_n_72;
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
  ATerm z_84 = NULL,a_85 = NULL,f_85 = NULL;
  z_84 = t;
  t = term_d_36;
  a_85 = t;
  t = (ATerm) ATinsert(ATempty, z_84);
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, (ATerm) ATinsert(ATempty, z_84));
  t = c_14(a_85, f_85, t);
  t = term_n_36;
  return(t);
}
static ATerm d_31 (ATerm t)
{
  t = term_o_72;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
  g_85 = t;
  t = term_x_35;
  h_85 = t;
  t = (ATerm) ATinsert(ATempty, g_85);
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(ATempty, g_85));
  t = c_14(h_85, i_85, t);
  t = term_n_36;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  t = term_p_72;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  t = term_f_36;
  k_85 = t;
  t = term_n_36;
  l_85 = t;
  t = term_q_72;
  t = m_14(k_85, l_85, t);
  t = term_n_36;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  t = term_s_72;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL;
  t = term_e_59;
  m_85 = t;
  t = term_n_36;
  n_85 = t;
  t = term_t_72;
  t = m_14(m_85, n_85, t);
  t = term_n_36;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_u_72;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL;
  t = term_t_54;
  o_85 = t;
  t = term_n_36;
  p_85 = t;
  t = term_w_72;
  t = m_14(o_85, p_85, t);
  t = term_n_36;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  t = term_x_72;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_31 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL,s_85 = NULL;
  q_85 = t;
  t = SSL_string_to_int(q_85);
  r_85 = t;
  t = term_e_40;
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_40, r_85);
  t = m_14(s_85, r_85, t);
  t = term_n_36;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  t = term_d_73;
  return(t);
}
static ATerm v_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_31 (ATerm t)
{
  ATerm t_85 = NULL,w_85 = NULL,x_85 = NULL;
  t_85 = t;
  t = SSL_string_to_int(t_85);
  w_85 = t;
  t = term_m_40;
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_40, w_85);
  t = m_14(x_85, w_85, t);
  t = term_n_36;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_31 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL;
  t = term_c_43;
  y_85 = t;
  t = term_n_36;
  z_85 = t;
  t = term_f_73;
  t = d_14(y_85, z_85, t);
  t = term_n_36;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_g_73;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm a_86 = NULL;
  a_86 = t;
  if(match_string(t, "-h"))
    {
      t = a_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = a_86;
    }
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL;
  t = term_h_73;
  b_86 = t;
  t = term_n_36;
  c_86 = t;
  t = term_i_73;
  t = m_14(b_86, c_86, t);
  t = term_n_36;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  t = term_j_73;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  t = term_k_73;
  d_86 = t;
  t = term_n_36;
  e_86 = t;
  t = term_l_73;
  t = m_14(d_86, e_86, t);
  t = term_n_36;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  t = term_m_73;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm f_86 = NULL;
  f_86 = t;
  if(match_string(t, "-v"))
    {
      t = f_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = f_86;
    }
  return(t);
}
static ATerm o_32 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  t = term_o_73;
  g_86 = t;
  t = term_n_36;
  h_86 = t;
  t = term_p_73;
  t = m_14(g_86, h_86, t);
  t = term_n_36;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_r_73;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  if(match_string(t, "--warning"))
    {
      t = i_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = i_86;
    }
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  {
    ATerm s_73 = t;
    int t_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,q_86 = NULL,r_86 = NULL,u_86 = NULL,v_86 = NULL,c_19 = NULL;
        t = term_k_35;
        m_86 = t;
        t = term_m_54;
        n_86 = t;
        t = term_o_54;
        t = h_14(m_86, n_86, t);
        v_86 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_86 = ATgetFirst((ATermList) t);
            u_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_86);
        q_86 = t;
        t = r_86;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = u_86;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_86), r_86);
        c_19 = t;
        t = SSLsetAnnotations(c_19, q_86);
        t = term_m_54;
        k_86 = t;
        t = (ATerm) ATinsert(ATempty, j_86);
        l_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_54, (ATerm) ATinsert(ATempty, j_86));
        t = m_14(k_86, l_86, t);
        LocalPopChoice(t_73);
      }
    else
      {
        t = s_73;
        {
          ATerm w_86 = NULL,x_86 = NULL;
          t = term_m_54;
          w_86 = t;
          t = (ATerm) ATinsert(ATempty, j_86);
          x_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_54, (ATerm) ATinsert(ATempty, j_86));
          t = c_14(w_86, x_86, t);
        }
      }
  }
  t = term_n_36;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  t = term_v_73;
  return(t);
}
static ATerm u_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_32 (ATerm t)
{
  ATerm y_86 = NULL,a_87 = NULL,b_87 = NULL;
  y_86 = t;
  t = term_h_55;
  a_87 = t;
  t = term_l_38;
  b_87 = t;
  t = term_b_74;
  t = m_14(a_87, b_87, t);
  t = y_86;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm c_87 = NULL,f_87 = NULL,g_87 = NULL;
  c_87 = t;
  t = term_m_55;
  f_87 = t;
  t = term_d_35;
  g_87 = t;
  t = term_c_74;
  t = m_14(f_87, g_87, t);
  t = c_87;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  t = term_m_55;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_33 (ATerm t)
{
  ATerm h_87 = NULL,k_87 = NULL;
  t = term_v_59;
  h_87 = t;
  t = term_n_36;
  k_87 = t;
  t = term_d_74;
  t = m_14(h_87, k_87, t);
  t = term_n_36;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  t = term_e_74;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm g_74 = t;
  int h_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_74);
    }
  else
    {
      t = g_74;
      {
        ATerm n_74 = t;
        int p_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_74);
          }
        else
          {
            t = n_74;
            {
              ATerm q_74 = t;
              int r_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(o_29, r_29, b_30, t);
                  LocalPopChoice(r_74);
                }
              else
                {
                  t = q_74;
                  {
                    ATerm t_74 = t;
                    int u_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(e_30, i_30, m_30, t);
                        LocalPopChoice(u_74);
                      }
                    else
                      {
                        t = t_74;
                        {
                          ATerm b_75 = t;
                          int c_75 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(n_30, o_30, u_30, t);
                              LocalPopChoice(c_75);
                            }
                          else
                            {
                              t = b_75;
                              {
                                ATerm d_75 = t;
                                int h_75 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(v_30, x_30, a_31, t);
                                    LocalPopChoice(h_75);
                                  }
                                else
                                  {
                                    t = d_75;
                                    {
                                      ATerm i_75 = t;
                                      int j_75 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(b_31, c_31, d_31, t);
                                          LocalPopChoice(j_75);
                                        }
                                      else
                                        {
                                          t = i_75;
                                          {
                                            ATerm k_75 = t;
                                            int l_75 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(e_31, g_31, h_31, t);
                                                LocalPopChoice(l_75);
                                              }
                                            else
                                              {
                                                t = k_75;
                                                {
                                                  ATerm n_75 = t;
                                                  int o_75 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(i_31, j_31, k_31, t);
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
                                                            t = Option_3_0(l_31, m_31, n_31, t);
                                                            LocalPopChoice(q_75);
                                                          }
                                                        else
                                                          {
                                                            t = p_75;
                                                            {
                                                              ATerm u_75 = t;
                                                              int b_76 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(o_31, q_31, r_31, t);
                                                                  LocalPopChoice(b_76);
                                                                }
                                                              else
                                                                {
                                                                  t = u_75;
                                                                  {
                                                                    ATerm d_76 = t;
                                                                    int g_76 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(s_31, t_31, u_31, t);
                                                                        LocalPopChoice(g_76);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_76;
                                                                        {
                                                                          ATerm n_76 = t;
                                                                          int p_76 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(v_31, w_31, x_31, t);
                                                                              LocalPopChoice(p_76);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_76;
                                                                              {
                                                                                ATerm t_76 = t;
                                                                                int a_77 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(y_31, z_31, a_32, t);
                                                                                    LocalPopChoice(a_77);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_76;
                                                                                    {
                                                                                      ATerm c_77 = t;
                                                                                      int f_77 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(f_77);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_77;
                                                                                          {
                                                                                            ATerm h_77 = t;
                                                                                            int i_77 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(b_32, c_32, f_32, t);
                                                                                                LocalPopChoice(i_77);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_77;
                                                                                                {
                                                                                                  ATerm j_77 = t;
                                                                                                  int k_77 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(j_32, k_32, m_32, t);
                                                                                                      LocalPopChoice(k_77);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_77;
                                                                                                      {
                                                                                                        ATerm l_77 = t;
                                                                                                        int m_77 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(n_32, o_32, p_32, t);
                                                                                                            LocalPopChoice(m_77);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_77;
                                                                                                            {
                                                                                                              ATerm n_77 = t;
                                                                                                              int o_77 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(q_32, r_32, t_32, t);
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
                                                                                                                        t = Option_3_0(u_32, v_32, w_32, t);
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
                                                                                                                              t = Option_3_0(y_32, z_32, a_33, t);
                                                                                                                              LocalPopChoice(s_77);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_77;
                                                                                                                              t = Option_3_0(b_33, c_33, d_33, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm f_14 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm l_87 = NULL;
  t = SSL_hashtable_remove(x_55, w_55);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_87);
  return(t);
}
static ATerm g_14 (ATerm b_56, ATerm t)
{
  ATerm m_87 = NULL;
  t = SSL_hashtable_destroy(b_56);
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
  t = g_14(q_87, t);
  t = o_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_14(n_87, p_87, t);
  t = n_87;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_78), term_p_65), term_r_78), term_k_78), term_j_78), term_p_65), term_h_78), term_f_78), term_c_78), term_b_78), term_y_77), term_w_77), term_v_77), term_u_77), term_t_77);
  return(t);
}
ATerm map_1_0 (ATerm g_91 (ATerm), ATerm t)
{
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
        ATerm m_43 = NULL,s_43 = NULL,y_43 = NULL,k_19 = NULL;
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
        t = g_91(t);
        s_43 = t;
        t = e_88;
        t = f_88(t);
        y_43 = t;
        t = (ATerm) ATinsert(CheckATermList(y_43), s_43);
        k_19 = t;
        t = SSLsetAnnotations(k_19, m_43);
      }
    return(t);
  }
  t = f_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_88 = ATgetFirst((ATermList) t);
      j_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_88 = NULL,o_88 = NULL;
        static ATerm f_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_88)), not_null(o_88));
          return(t);
        }
        t = j_88;
        t = k_0(t);
        if(((n_88 != NULL) && (n_88 != t)))
          _fail(t);
        else
          n_88 = t;
        t = i_88;
        t = i_0(t);
        if(((o_88 != NULL) && (o_88 != t)))
          _fail(t);
        else
          o_88 = t;
        t = j_88;
        t = reverse_acc_2_0(i_0, f_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_36;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_88 = NULL;
  t = term_n_36;
  t = g_0(t);
  p_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_78), p_88), term_x_78), term_p_65), term_w_78), term_p_65), term_v_78), term_u_78), term_p_65), term_t_78);
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  ATerm i_89 = NULL;
  i_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_89), term_e_79);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  ATerm g_79 = t;
  int i_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_88 = NULL,x_88 = NULL;
      t = term_k_35;
      w_88 = t;
      t = term_j_79;
      x_88 = t;
      t = term_k_79;
      t = h_14(w_88, x_88, t);
      t_88 = t;
      LocalPopChoice(i_79);
    }
  else
    {
      t = g_79;
      {
        static ATerm h_33 (ATerm t)
        {
          ATerm y_88 = NULL,z_88 = NULL,c_89 = NULL,m_19 = NULL;
          c_89 = t;
          if(match_cons(t, sym_Program_1))
            {
              z_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_89);
          y_88 = t;
          t = z_88;
          if(((t_88 != NULL) && (t_88 != t)))
            _fail(t);
          else
            t_88 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, z_88);
          m_19 = t;
          t = SSLsetAnnotations(m_19, y_88);
          return(t);
        }
        t = fetch_1_0(h_33, t);
      }
    }
  {
    ATerm o_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_33 (ATerm t)
        {
          t = not_null(t_88);
          return(t);
        }
        t = short_description_1_0(i_33, t);
        t = echo_0_0(t);
        LocalPopChoice(p_79);
      }
    else
      {
        t = o_79;
      }
  }
  t = term_q_79;
  t = echo_0_0(t);
  t = term_d_71;
  u_88 = t;
  t = term_f_71;
  v_88 = t;
  t = term_r_79;
  t = h_14(u_88, v_88, t);
  t = reverse_acc_2_0(_id, j_33, t);
  t = map_1_0(k_33, t);
  {
    ATerm s_79 = t;
    int t_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_89 = NULL;
        static ATerm l_33 (ATerm t)
        {
          t = not_null(t_88);
          return(t);
        }
        t = long_description_1_0(l_33, t);
        j_89 = t;
        t = (ATerm) ATinsert(CheckATermList(j_89), term_p_65);
        t = echo_0_0(t);
        LocalPopChoice(t_79);
      }
    else
      {
        t = s_79;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  static ATerm q_90 (ATerm t)
  {
    ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
    n_90 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_90 = ATgetFirst((ATermList) t);
        p_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_79 = t;
      int b_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_44 = NULL,s_44 = NULL,o_19 = NULL;
          t = SSLgetAnnotations(n_90);
          i_44 = t;
          t = o_90;
          t = q_91(t);
          s_44 = t;
          t = (ATerm) ATinsert(CheckATermList(p_90), s_44);
          o_19 = t;
          t = SSLsetAnnotations(o_19, i_44);
          LocalPopChoice(b_80);
        }
      else
        {
          t = w_79;
          {
            ATerm i_45 = NULL,o_45 = NULL,q_19 = NULL;
            t = SSLgetAnnotations(n_90);
            i_45 = t;
            t = p_90;
            t = q_90(t);
            o_45 = t;
            t = (ATerm) ATinsert(CheckATermList(o_45), o_90);
            q_19 = t;
            t = SSLsetAnnotations(q_19, i_45);
          }
        }
    }
    return(t);
  }
  t = q_90(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_90 = NULL,w_90 = NULL,y_90 = NULL;
  u_90 = t;
  {
    ATerm d_80 = t;
    int e_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_90;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_80 = ATgetFirst((ATermList) t);
                ATerm g_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_90;
          }
        LocalPopChoice(e_80);
      }
    else
      {
        t = d_80;
        t = (ATerm) ATinsert(ATempty, u_90);
      }
  }
  w_90 = t;
  t = term_r_36;
  y_90 = t;
  t = SSL_printnl(y_90, w_90);
  t = u_90;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_91 = NULL,f_91 = NULL;
  t = term_k_35;
  c_91 = t;
  t = term_j_79;
  f_91 = t;
  t = term_k_79;
  t = h_14(c_91, f_91, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_33 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL;
  t = term_h_80;
  i_91 = t;
  t = term_n_36;
  j_91 = t;
  t = term_k_80;
  t = m_14(i_91, j_91, t);
  return(t);
}
static ATerm o_33 (ATerm t)
{
  t = term_l_80;
  return(t);
}
static ATerm p_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_33 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,p_91 = NULL;
  t = term_h_80;
  m_91 = t;
  t = term_n_36;
  p_91 = t;
  t = term_k_80;
  t = m_14(m_91, p_91, t);
  t = term_o_73;
  k_91 = t;
  t = term_n_36;
  l_91 = t;
  t = term_p_73;
  t = m_14(k_91, l_91, t);
  t = term_n_80;
  return(t);
}
static ATerm s_33 (ATerm t)
{
  t = term_s_80;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_33, n_33, o_33, t);
      LocalPopChoice(u_80);
    }
  else
    {
      t = t_80;
      t = Option_3_0(p_33, r_33, s_33, t);
    }
  return(t);
}
static ATerm i_14 (ATerm b_53, ATerm c_53, ATerm a_53, ATerm t)
{
  ATerm u_91 = NULL,v_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  u_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
  {
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_80 = ATgetArgument(t, 0);
            ATerm z_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_53, c_53);
        t = h_14(b_53, c_53, t);
        LocalPopChoice(w_80);
      }
    else
      {
        t = v_80;
        t = (ATerm) ATempty;
      }
  }
  v_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_53, c_53, (ATerm) ATinsert(CheckATermList(v_91), a_53));
  t = lookup_table_0_1(b_53, t);
  c_92 = t;
  t = (ATerm) ATinsert(CheckATermList(v_91), a_53);
  a_92 = t;
  t = c_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(c_53, a_92, b_92, t);
  t = u_91;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_92 = NULL,u_92 = NULL,w_92 = NULL;
      t = term_n_36;
      t = e_0(t);
      s_92 = t;
      t = term_d_71;
      u_92 = t;
      t = term_f_71;
      w_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_71, term_f_71, s_92);
      t = i_14(u_92, w_92, s_92, t);
      _fail(t);
    }
  else
    {
      ATerm e_93 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_92 = ATgetFirst((ATermList) t);
          r_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_92;
      t = c_0(t);
      t = term_n_36;
      t = d_0(t);
      e_93 = t;
      t = (ATerm) ATinsert(CheckATermList(r_92), e_93);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,k_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,u_19 = NULL;
  p_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_93 = ATgetFirst((ATermList) t);
      m_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_93);
  f_93 = t;
  t = k_93;
  t = q_61(t);
  n_93 = t;
  t = m_93;
  t = r_61(t);
  o_93 = t;
  t = (ATerm) ATinsert(CheckATermList(o_93), n_93);
  u_19 = t;
  t = SSLsetAnnotations(u_19, f_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm w_93 = NULL,y_93 = NULL,z_93 = NULL,e_94 = NULL,g_94 = NULL,h_94 = NULL,x_19 = NULL;
  w_93 = t;
  {
    ATerm a_81 = t;
    int f_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_81;
        t = h_111(t);
        LocalPopChoice(f_81);
      }
    else
      {
        t = a_81;
      }
  }
  t = w_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_93 = ATgetFirst((ATermList) t);
      e_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_93);
  y_93 = t;
  t = term_j_79;
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_79, z_93);
  t = m_14(h_94, z_93, t);
  t = e_94;
  {
    static ATerm z_94 (ATerm t)
    {
      ATerm h_81 = t;
      int i_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_81 = t;
          int l_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_94 = NULL;
              m_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_94;
              LocalPopChoice(l_81);
            }
          else
            {
              t = k_81;
              t = h_111(t);
              t = Cons_2_0(_id, z_94, t);
            }
          LocalPopChoice(i_81);
        }
      else
        {
          t = h_81;
          {
            ATerm q_94 = NULL,r_94 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_94 = ATgetFirst((ATermList) t);
                r_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_94), (ATerm) ATmakeAppl(sym_Undefined_1, q_94));
          }
        }
      return(t);
    }
    t = z_94(t);
  }
  g_94 = t;
  t = (ATerm) ATinsert(CheckATermList(g_94), (ATerm) ATmakeAppl(sym_Program_1, z_93));
  x_19 = t;
  t = SSLsetAnnotations(x_19, y_93);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  ATerm c_96 = NULL;
  c_96 = t;
  if(match_string(t, "--help"))
    {
      t = c_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_96;
        }
    }
  return(t);
}
static ATerm y_33 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  t = term_h_73;
  e_96 = t;
  t = term_n_36;
  f_96 = t;
  t = term_i_73;
  t = m_14(e_96, f_96, t);
  t = term_n_81;
  return(t);
}
static ATerm c_34 (ATerm t)
{
  t = term_s_81;
  return(t);
}
static ATerm h_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm e_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,w_95 = NULL,b_96 = NULL;
  i_95 = t;
  t = term_d_71;
  j_95 = t;
  t = term_u_81;
  t = lookup_table_0_1(j_95, t);
  b_96 = t;
  t = term_f_71;
  k_95 = t;
  t = (ATerm) ATempty;
  l_95 = t;
  t = b_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(k_95, l_95, w_95, t);
  t = i_95;
  {
    static ATerm t_33 (ATerm t)
    {
      ATerm y_81 = t;
      int z_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_111(t);
          LocalPopChoice(z_81);
        }
      else
        {
          t = y_81;
          {
            ATerm a_82 = t;
            int b_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_33, y_33, c_34, t);
                LocalPopChoice(b_82);
              }
            else
              {
                t = a_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_33, t);
  }
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_96 = NULL;
        y_96 = t;
        {
          ATerm e_82 = t;
          int f_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_46 = NULL;
              t = y_96;
              {
                ATerm g_82 = t;
                int h_82 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_46 = NULL,d_46 = NULL;
                    t = term_k_35;
                    b_46 = t;
                    t = term_h_73;
                    d_46 = t;
                    t = term_i_82;
                    t = h_14(b_46, d_46, t);
                    LocalPopChoice(h_82);
                  }
                else
                  {
                    t = g_82;
                    t = fetch_1_0(h_34, t);
                  }
              }
              t = y_96;
              t = default_system_usage_0_0(t);
              t = term_d_35;
              a_46 = t;
              t = SSL_exit(a_46);
              LocalPopChoice(f_82);
            }
          else
            {
              t = e_82;
              {
                ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
                t = term_k_35;
                o_46 = t;
                t = term_h_80;
                p_46 = t;
                t = term_j_82;
                t = h_14(o_46, p_46, t);
                t = y_96;
                t = default_system_about_0_0(t);
                t = term_d_35;
                n_46 = t;
                t = SSL_exit(n_46);
              }
            }
        }
        LocalPopChoice(d_82);
      }
    else
      {
        t = c_82;
        {
          ATerm k_82 = t;
          int l_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_96 = NULL,a_97 = NULL,c_97 = NULL;
              static ATerm j_34 (ATerm t)
              {
                ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,b_20 = NULL;
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
                if(((e_95 != NULL) && (e_95 != t)))
                  _fail(t);
                else
                  e_95 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_97);
                b_20 = t;
                t = SSLsetAnnotations(b_20, e_97);
                return(t);
              }
              t = fetch_1_0(j_34, t);
              t = term_p_35;
              a_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_95)), term_m_82);
              c_97 = t;
              t = SSL_printnl(a_97, c_97);
              t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_95)), term_m_82));
              t = default_system_usage_0_0(t);
              t = term_l_38;
              z_96 = t;
              t = SSL_exit(z_96);
              LocalPopChoice(l_82);
            }
          else
            {
              t = k_82;
            }
        }
      }
  }
  h_95 = t;
  t = term_d_71;
  t = table_destroy_0_0(t);
  t = h_95;
  return(t);
}
static ATerm k_14 (ATerm r_55, ATerm s_55, ATerm t_55, ATerm t)
{
  ATerm o_97 = NULL;
  t = SSL_hashtable_put(t_55, r_55, s_55);
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_97);
  return(t);
}
static ATerm l_14 (ATerm u_55, ATerm v_55, ATerm t)
{
  t = SSL_hashtable_get(v_55, u_55);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_55, ATerm a_56, ATerm t)
{
  ATerm r_97 = NULL;
  t = SSL_hashtable_create(z_55, a_56);
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_97);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_97 = NULL,w_97 = NULL,e_98 = NULL,g_98 = NULL,h_98 = NULL;
  u_97 = t;
  t = term_p_82;
  g_98 = t;
  t = term_q_82;
  h_98 = t;
  t = u_97;
  t = new_hashtable_0_2(g_98, h_98, t);
  w_97 = t;
  t = u_97;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(u_97, w_97, e_98, t);
  t = u_97;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_98 = NULL;
  t = SSL_table_hashtable();
  i_98 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_98);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_54, ATerm t)
{
  ATerm v_98 = NULL;
  t = table_hashtable_0_0(t);
  v_98 = t;
  {
    ATerm v_82 = t;
    int w_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_46 = NULL;
        t = v_98;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_14(n_54, s_46, t);
        LocalPopChoice(w_82);
      }
    else
      {
        t = v_82;
        {
          ATerm a_47 = NULL;
          t = n_54;
          t = table_create_0_0(t);
          t = v_98;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_14(n_54, a_47, t);
        }
      }
  }
  return(t);
}
static ATerm m_14 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm z_98 = NULL,c_99 = NULL;
  t = term_k_35;
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, g_48, h_48);
  t = lookup_table_0_1(z_98, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(g_48, h_48, c_99, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_35, g_48, h_48);
  return(t);
}
static ATerm n_14 (ATerm g_37, ATerm h_37, ATerm t)
{
  t = SSL_strcat(g_37, h_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm j_99 = NULL,l_99 = NULL;
  l_99 = t;
  t = SSL_explode_string(l_99);
  {
    ATerm x_82 = t;
    int a_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm v_101 (ATerm t)
        {
          ATerm q_101 = NULL,r_101 = NULL,u_101 = NULL;
          q_101 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_101 = ATgetFirst((ATermList) t);
              u_101 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_83 = t;
            int f_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_47 = NULL,u_47 = NULL,i_20 = NULL;
                t = SSLgetAnnotations(q_101);
                n_47 = t;
                t = u_101;
                t = v_101(t);
                u_47 = t;
                t = (ATerm) ATinsert(CheckATermList(u_47), r_101);
                i_20 = t;
                t = SSLsetAnnotations(i_20, n_47);
                LocalPopChoice(f_83);
              }
            else
              {
                t = b_83;
                {
                  ATerm p_48 = NULL,j_20 = NULL;
                  t = SSLgetAnnotations(q_101);
                  p_48 = t;
                  t = r_101;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, r_101);
                  j_20 = t;
                  t = SSLsetAnnotations(j_20, p_48);
                }
              }
          }
          return(t);
        }
        t = v_101(t);
        LocalPopChoice(a_83);
      }
    else
      {
        t = x_82;
        t = (ATerm) ATempty;
      }
  }
  j_99 = t;
  t = SSL_implode_string(j_99);
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
  ATerm c_102 = NULL,e_102 = NULL,f_102 = NULL,i_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL,s_102 = NULL,t_102 = NULL,c_103 = NULL,f_103 = NULL,h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,u_103 = NULL,v_103 = NULL,y_103 = NULL,z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL,f_104 = NULL,g_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL;
  c_102 = t;
  t = term_h_65;
  l_104 = t;
  t = term_g_83;
  m_104 = t;
  t = term_m_83;
  t = m_14(l_104, m_104, t);
  t = term_l_35;
  j_104 = t;
  t = term_l_38;
  k_104 = t;
  t = term_o_83;
  t = m_14(j_104, k_104, t);
  t = term_e_40;
  g_104 = t;
  t = term_d_35;
  i_104 = t;
  t = term_w_83;
  t = m_14(g_104, i_104, t);
  t = term_m_40;
  c_104 = t;
  t = term_e_42;
  f_104 = t;
  t = term_x_83;
  t = m_14(c_104, f_104, t);
  t = term_b_84;
  t = xtc_find_path_0_0(t);
  t_102 = t;
  t = term_c_84;
  t = xtc_find_path_0_0(t);
  c_103 = t;
  t = term_d_84;
  t = xtc_find_path_0_0(t);
  f_103 = t;
  t = term_s_59;
  a_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_103), term_s_59), c_103), term_s_59), t_102), term_s_59);
  b_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_103), term_s_59), c_103), term_s_59), t_102), term_s_59));
  t = m_14(a_104, b_104, t);
  t = term_j_37;
  y_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_84), term_e_84);
  z_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_37, (ATerm) ATinsert(ATinsert(ATempty, term_f_84), term_e_84));
  t = m_14(y_103, z_103, t);
  t = term_g_84;
  t = xtc_find_path_0_0(t);
  s_102 = t;
  t = term_k_84;
  v_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_102, term_k_84);
  t = n_14(s_102, v_103, t);
  l_102 = t;
  t = term_g_84;
  t = xtc_find_path_0_0(t);
  q_102 = t;
  t = term_k_84;
  u_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_102, term_k_84);
  t = n_14(q_102, u_103, t);
  m_102 = t;
  t = term_l_84;
  t = xtc_find_path_0_0(t);
  p_102 = t;
  t = term_k_84;
  s_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_102, term_k_84);
  t = n_14(p_102, s_103, t);
  o_102 = t;
  t = term_d_36;
  q_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_102), term_s_59), m_102), term_s_59), l_102), term_s_59);
  r_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_102), term_s_59), m_102), term_s_59), l_102), term_s_59));
  t = m_14(q_103, r_103, t);
  t = term_g_84;
  t = xtc_find_path_0_0(t);
  k_102 = t;
  t = term_m_84;
  p_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_102, term_m_84);
  t = n_14(k_102, p_103, t);
  e_102 = t;
  t = term_l_84;
  t = xtc_find_path_0_0(t);
  i_102 = t;
  t = term_n_84;
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_102, term_n_84);
  t = n_14(i_102, l_103, t);
  f_102 = t;
  t = term_x_35;
  j_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_85), term_d_85), f_102), term_s_84), term_c_85), term_b_85), e_102), term_s_84);
  k_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_85), term_d_85), f_102), term_s_84), term_c_85), term_b_85), e_102), term_s_84));
  t = m_14(j_103, k_103, t);
  t = term_m_54;
  h_103 = t;
  t = (ATerm) ATinsert(ATempty, term_j_85);
  i_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_54, (ATerm) ATinsert(ATempty, term_j_85));
  t = m_14(h_103, i_103, t);
  t = c_102;
  return(t);
}
static ATerm m_34 (ATerm t)
{
  ATerm b_106 = NULL,e_106 = NULL,f_106 = NULL;
  b_106 = t;
  t = term_k_35;
  e_106 = t;
  t = term_j_54;
  f_106 = t;
  t = term_u_85;
  t = h_14(e_106, f_106, t);
  t = debug_1_0(p_34, t);
  t = b_106;
  return(t);
}
static ATerm p_34 (ATerm t)
{
  t = term_v_85;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm o_86 = t;
    int p_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_104 = NULL,s_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL;
        t = term_k_35;
        w_104 = t;
        t = term_k_73;
        x_104 = t;
        t = term_s_86;
        t = h_14(w_104, x_104, t);
        t = term_t_86;
        t = xtc_find_0_0(t);
        p_104 = t;
        t = term_r_36;
        v_104 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_104, term_r_36);
        t = q_13(p_104, v_104, t);
        t = term_d_35;
        s_104 = t;
        t = SSL_exit(s_104);
        LocalPopChoice(p_86);
      }
    else
      {
        t = o_86;
      }
  }
  {
    ATerm z_86 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_105 = NULL,c_105 = NULL,h_105 = NULL;
        t = term_k_35;
        c_105 = t;
        t = term_o_73;
        h_105 = t;
        t = term_e_87;
        t = h_14(c_105, h_105, t);
        t = strc_version_0_0(t);
        t = term_d_35;
        b_105 = t;
        t = SSL_exit(b_105);
        LocalPopChoice(d_87);
      }
    else
      {
        t = z_86;
      }
  }
  {
    ATerm i_87 = t;
    int j_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_105 = NULL,t_105 = NULL,u_105 = NULL;
        o_105 = t;
        t = term_k_35;
        t_105 = t;
        t = term_j_54;
        u_105 = t;
        t = term_u_85;
        t = h_14(t_105, u_105, t);
        t = o_105;
        LocalPopChoice(j_87);
      }
    else
      {
        t = i_87;
        {
          ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
          t = term_p_35;
          z_105 = t;
          t = (ATerm) ATinsert(ATempty, term_r_87);
          a_106 = t;
          t = SSL_printnl(z_105, a_106);
          t = term_l_38;
          y_105 = t;
          t = SSL_exit(y_105);
          t = (ATerm) ATinsert(ATempty, term_r_87);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(m_34, t);
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = if_verbose1_1_0(y_34, t);
  return(t);
}
static ATerm v_34 (ATerm t)
{
  t = xtc_temp_files_1_0(b_35, t);
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
  k_106 = t;
  t = term_p_35;
  l_106 = t;
  t = (ATerm) ATinsert(CheckATermList(k_106), term_s_87);
  m_106 = t;
  t = SSL_printnl(l_106, m_106);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(CheckATermList(k_106), term_s_87));
  return(t);
}
static ATerm b_35 (ATerm t)
{
  ATerm t_87 = t;
  int u_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_106 = NULL,w_106 = NULL,x_106 = NULL;
      t = term_k_35;
      w_106 = t;
      t = term_j_54;
      x_106 = t;
      t = term_u_85;
      t = h_14(w_106, x_106, t);
      n_106 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_106);
      LocalPopChoice(u_87);
    }
  else
    {
      t = t_87;
      t = term_e_57;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm c_35 (ATerm t)
{
  ATerm a_107 = NULL,c_107 = NULL,d_107 = NULL;
  t = run_time_0_0(t);
  a_107 = t;
  t = term_p_35;
  c_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_87), a_107), term_v_87);
  d_107 = t;
  t = SSL_printnl(c_107, d_107);
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_87), a_107), term_v_87));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm x_87 = t;
  int y_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_106 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(s_34, v_34, t);
      t = if_verbose2_1_0(c_35, t);
      t = term_d_35;
      g_106 = t;
      t = SSL_exit(g_106);
      LocalPopChoice(y_87);
    }
  else
    {
      t = x_87;
      {
        ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL;
        t = run_time_0_0(t);
        e_107 = t;
        t = term_p_35;
        g_107 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_87), e_107), term_z_87);
        h_107 = t;
        t = SSL_printnl(g_107, h_107);
        t = term_l_38;
        f_107 = t;
        t = SSL_exit(f_107);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
