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
ATerm term_j_92;
ATerm term_b_92;
ATerm term_a_92;
ATerm term_x_91;
ATerm term_w_91;
ATerm term_t_91;
ATerm term_q_91;
ATerm term_p_91;
ATerm term_m_91;
ATerm term_l_91;
ATerm term_k_91;
ATerm term_h_91;
ATerm term_f_91;
ATerm term_e_91;
ATerm term_d_91;
ATerm term_z_90;
ATerm term_y_90;
ATerm term_w_90;
ATerm term_v_90;
ATerm term_q_90;
ATerm term_p_90;
ATerm term_n_90;
ATerm term_m_90;
ATerm term_j_90;
ATerm term_i_90;
ATerm term_g_90;
ATerm term_f_90;
ATerm term_d_90;
ATerm term_b_90;
ATerm term_a_90;
ATerm term_z_89;
ATerm term_y_89;
ATerm term_n_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_i_89;
ATerm term_h_89;
ATerm term_t_88;
ATerm term_s_88;
ATerm term_q_88;
ATerm term_z_87;
ATerm term_f_87;
ATerm term_e_87;
ATerm term_a_87;
ATerm term_z_86;
ATerm term_y_86;
ATerm term_p_86;
ATerm term_o_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_u_84;
ATerm term_t_84;
ATerm term_s_84;
ATerm term_r_84;
ATerm term_n_84;
ATerm term_g_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_a_84;
ATerm term_z_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_s_83;
ATerm term_q_83;
ATerm term_k_80;
ATerm term_j_80;
ATerm term_i_80;
ATerm term_h_80;
ATerm term_f_80;
ATerm term_z_79;
ATerm term_y_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_s_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_i_79;
ATerm term_h_79;
ATerm term_g_79;
ATerm term_f_79;
ATerm term_e_79;
ATerm term_d_79;
ATerm term_c_79;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_v_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_o_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_a_78;
ATerm term_z_77;
ATerm term_y_77;
ATerm term_u_77;
ATerm term_q_77;
ATerm term_m_77;
ATerm term_k_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_f_77;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_c_76;
ATerm term_z_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_f_75;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_t_74;
ATerm term_p_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_a_74;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_c_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_u_71;
ATerm term_s_71;
ATerm term_n_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_d_71;
ATerm term_z_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_d_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_u_64;
ATerm term_t_64;
ATerm term_k_64;
ATerm term_r_63;
ATerm term_k_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_h_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_b_62;
ATerm term_y_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_y_60;
ATerm term_f_60;
ATerm term_t_59;
ATerm term_r_59;
ATerm term_m_59;
ATerm term_k_59;
ATerm term_i_59;
ATerm term_f_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_r_58;
ATerm term_d_58;
ATerm term_c_58;
ATerm term_u_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_x_55;
ATerm term_n_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
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
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_i_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_x_50;
ATerm term_v_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_o_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_j_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_c_50;
ATerm term_b_50;
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
ATerm term_k_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_o_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_z_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_x_45;
ATerm term_v_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_i_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_q_44;
ATerm term_n_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_c_44;
ATerm term_y_43;
ATerm term_v_43;
ATerm term_o_43;
ATerm term_j_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_u_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_z_41;
ATerm term_x_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_k_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_y_40;
ATerm term_v_40;
ATerm term_t_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_w_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_o_38;
ATerm term_j_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_e_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_n_37);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_b_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_f_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_a_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_d_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_f_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_h_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_d_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_u_42);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_b_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_v_43);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_c_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_m_45);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_49, term_b_41, term_r_49);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_49, term_p_37, term_u_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_49, term_m_41, term_x_49);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_49, term_a_50, term_b_50);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_50, term_g_50, term_h_50);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_50, term_m_50, term_o_50);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_50, term_v_50, term_x_50);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_51, term_e_51, term_f_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_n_51, term_o_51);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_51, term_r_51, term_a_52);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_52, term_e_52, term_f_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_t_44, term_j_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_n_52, term_o_52);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_52, term_u_52, term_v_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_52, term_y_52, term_z_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_c_53, term_d_53);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_53, term_g_53, term_h_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_53, term_m_53, term_n_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_53, term_q_53, term_r_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_53, term_u_53, term_v_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_53, term_y_53, term_z_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_54, term_c_54, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_g_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_k_54, term_l_54);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_54, term_o_47, term_o_54);
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_54, term_r_54, term_s_54);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_54, term_v_54, term_w_54);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_55, term_b_55, term_d_55);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_c_56);
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_i_56);
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_b_57);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_f_57);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_r_59);
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(sym__2, term_c_59, term_r_58);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_e_61);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_v_61);
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_h_62);
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_p_69);
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_e_37);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_37);
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym__2, term_f_72, term_q_39);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_p_75);
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(sym__2, term_g_71, term_w_75);
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(sym__2, term_g_71, term_f_75);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(sym__2, term_h_40, term_q_39);
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(sym__2, term_f_39, term_q_39);
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(sym__2, term_e_61, term_q_39);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(sym__2, term_i_56, term_q_39);
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(sym__2, term_m_45, term_q_39);
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(sym__2, term_n_79, term_q_39);
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym__2, term_s_79, term_q_39);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(sym__2, term_w_79, term_q_39);
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_b_41);
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(sym__2, term_d_57, term_e_37);
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(sym__2, term_h_62, term_q_39);
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_d_86);
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(sym__2, term_y_71, term_z_71);
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(sym__2, term_y_86, term_q_39);
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_87));
  term_f_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(sym__3, term_y_71, term_z_71, (ATerm) ATempty);
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_n_79);
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_y_86);
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_89));
  term_y_89 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_z_89));
  term_z_89 = (ATerm) ATmakeAppl(sym__2, term_p_69, term_y_89);
  ATprotect(&(term_a_90));
  term_a_90 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_b_41);
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(sym__2, term_v_43, term_e_37);
  ATprotect(&(term_d_90));
  term_d_90 = (ATerm) ATmakeAppl(sym__2, term_c_44, term_a_50);
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(sym__2, term_v_61, (ATerm) ATempty);
  ATprotect(&(term_g_90));
  term_g_90 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_j_90));
  term_j_90 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_m_90));
  term_m_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_q_90));
  term_q_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_w_90));
  term_w_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_y_90));
  term_y_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_z_90));
  term_z_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_e_91));
  term_e_91 = (ATerm) ATmakeAppl(sym__2, term_d_39, (ATerm) ATempty);
  ATprotect(&(term_f_91));
  term_f_91 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym__2, term_f_57, term_f_91);
  ATprotect(&(term_k_91));
  term_k_91 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_x_55);
  ATprotect(&(term_m_91));
  term_m_91 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_p_91));
  term_p_91 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_s_79);
  ATprotect(&(term_q_91));
  term_q_91 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_t_91));
  term_t_91 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_w_79);
  ATprotect(&(term_w_91));
  term_w_91 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_x_91));
  term_x_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_92));
  term_a_92 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_b_92));
  term_b_92 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_92));
  term_j_92 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm b_126 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_14 (ATerm i_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm l_14 (ATerm g_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm m_14 (ATerm a_63, ATerm z_62, ATerm t);
ATerm rename_to_1_0 (ATerm w_0 (ATerm), ATerm t);
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
ATerm if_keep1_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm f_127 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm j_16 (ATerm t);
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
static ATerm e_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm p_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm q_14 (ATerm w_67, ATerm x_67, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm g_20 (ATerm t);
static ATerm j_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm b_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm g_127 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm h_127 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm e_127 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm j_109 (ATerm), ATerm t);
static ATerm h_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm n_14 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm o_14 (ATerm v_24, ATerm w_24, ATerm t);
static ATerm p_14 (ATerm o_108 (ATerm), ATerm e_214, ATerm f_25, ATerm t);
static ATerm s_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm x_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm i_22 (ATerm t);
static ATerm m_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm c_126 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm y_119 (ATerm), ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm t_14 (ATerm w_22, ATerm t);
static ATerm t_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm d_27 (ATerm t);
static ATerm f_27 (ATerm t);
static ATerm i_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm u_15 (ATerm i_58, ATerm j_58, ATerm t);
static ATerm u_14 (ATerm u_56, ATerm v_56, ATerm t);
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm n_27 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t);
static ATerm w_14 (ATerm q_43, ATerm r_43, ATerm t);
static ATerm y_14 (ATerm w_43, ATerm x_43, ATerm t);
static ATerm z_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_15 (ATerm x_25, ATerm c_227, ATerm t);
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm k_109 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t);
static ATerm x_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm d_15 (ATerm c_63, ATerm b_63, ATerm t);
static ATerm e_15 (ATerm o_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm g_76 (ATerm u_74, ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm f_15 (ATerm f_67, ATerm e_67, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm i_15 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t);
static ATerm j_15 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
static ATerm w_28 (ATerm t);
static ATerm k_15 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t);
static ATerm l_15 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t);
static ATerm k_82 (ATerm b_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_15 (ATerm b_25, ATerm t);
static ATerm n_15 (ATerm w_40, ATerm x_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_84 (ATerm y_82, ATerm t);
static ATerm l_84 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm t);
static ATerm m_84 (ATerm t_83, ATerm w_83, ATerm x_83, ATerm t);
static ATerm o_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm h_29 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm r_29 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm g_30 (ATerm t);
static ATerm h_30 (ATerm t);
static ATerm j_30 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_88 (ATerm y_87, ATerm t);
static ATerm o_30 (ATerm t);
static ATerm p_30 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm p_15 (ATerm c_67, ATerm d_67, ATerm t);
static ATerm q_15 (ATerm k_40, ATerm l_40, ATerm t);
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_90 (ATerm c_90, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_15 (ATerm g_67, ATerm h_67, ATerm t);
static ATerm x_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
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
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm g_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm k_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm o_33 (ATerm t);
static ATerm p_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm v_33 (ATerm t);
static ATerm z_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm h_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm j_34 (ATerm t);
static ATerm p_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm w_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
static ATerm p_35 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
static ATerm s_35 (ATerm t);
static ATerm u_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm s_15 (ATerm m_61, ATerm n_61, ATerm t);
static ATerm t_15 (ATerm r_61, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm b_36 (ATerm t);
static ATerm c_36 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_36 (ATerm t);
static ATerm f_36 (ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm j_36 (ATerm t);
static ATerm k_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t);
static ATerm m_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm o_36 (ATerm t);
static ATerm p_36 (ATerm t);
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t);
static ATerm x_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t);
static ATerm y_15 (ATerm k_61, ATerm l_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm b_58, ATerm t);
static ATerm z_15 (ATerm z_66, ATerm a_67, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm a_16 (ATerm y_38, ATerm z_38, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm t_36 (ATerm t);
static ATerm u_36 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm x_36 (ATerm t);
static ATerm z_36 (ATerm t);
static ATerm a_37 (ATerm t);
static ATerm b_37 (ATerm t);
static ATerm c_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = w_115(t);
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
      t = foldr_2_0(w_115, x_115, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, n_0);
      t = x_115(t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_e_37;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm e_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(e_1, i_1, t);
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
      ATerm g_37 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(i_0, k_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_m_37;
        h_1 = t;
        t = term_n_37;
        k_1 = t;
        t = term_o_37;
        t = u_15(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_p_37);
        t = geq_0_0(t);
        t = b_1;
        t = b_126(t);
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = b_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  t = term_q_37;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_s_37);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_q_37;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm k_14 (ATerm i_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm y_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_m_37;
        z_1 = t;
        t = term_b_38;
        c_2 = t;
        t = term_d_38;
        t = u_15(z_1, c_2, t);
        LocalPopChoice(a_38);
      }
    else
      {
        t = y_37;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_e_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_m_37;
  s_1 = t;
  t = term_f_38;
  t_1 = t;
  t = term_j_38;
  t = u_15(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_b_38), i_23), term_q_38), term_o_38));
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
      t = q_14(q_1, r_1, t);
      t = term_r_38;
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
  t = term_q_37;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_s_38);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_q_37;
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, b_3);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = b_3;
  return(t);
}
static ATerm l_14 (ATerm g_23, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_m_37;
  u_2 = t;
  t = term_a_39;
  x_2 = t;
  t = term_b_39;
  t = u_15(u_2, x_2, t);
  o_2 = t;
  t = term_m_37;
  s_2 = t;
  t = term_d_39;
  t_2 = t;
  t = term_e_39;
  t = u_15(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_b_38), g_23), term_f_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_38, m_2);
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
      t = q_14(q_2, r_2, t);
      t = term_r_38;
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
  t = l_14(s_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(r_3, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  t = term_q_37;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_g_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(o_3), term_g_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_m_37;
      m_3 = t;
      t = term_f_39;
      n_3 = t;
      t = term_l_39;
      t = u_15(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
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
static ATerm m_14 (ATerm a_63, ATerm z_62, ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(a_63, z_62);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = get_errno_0_0(t);
      t = term_q_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, a_63, z_62);
      t = d_15(a_63, z_62, t);
      t = SSL_remove(a_63);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm w_0 (ATerm), ATerm t)
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
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = w_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_t_39;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_t_39);
        t = d_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_t_39;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        {
          ATerm u_39 = t;
          int y_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = w_0(t);
              l_2 = t;
              {
                ATerm z_39 = t;
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
                    t = z_39;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = m_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(y_39);
            }
          else
            {
              t = u_39;
              t = i_4;
              t = w_0(t);
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
  t = term_a_40;
  r_4 = t;
  t = term_b_40;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_c_40);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_d_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_e_40;
  w_4 = t;
  t = a_5;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_m_37;
        d_5 = t;
        t = term_h_40;
        e_5 = t;
        t = term_i_40;
        t = u_15(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(g_40);
        t = (ATerm) ATinsert(ATempty, term_h_40);
      }
    else
      {
        t = f_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_m_37;
  b_5 = t;
  t = term_d_40;
  c_5 = t;
  t = term_j_40;
  t = u_15(b_5, c_5, t);
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
  t = term_q_37;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_m_40);
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
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_6 = ATgetArgument(t, 0);
            {
              ATerm d_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(h_6);
              d_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
              s_0 = t;
              t = SSLsetAnnotations(s_0, d_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_6;
          }
        LocalPopChoice(o_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = n_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
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
        LocalPopChoice(q_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = p_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
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
        LocalPopChoice(s_40);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = r_40;
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
  t = term_q_37;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_t_40);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(b_6), term_t_40));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_v_40;
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
  t = term_v_40;
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
  t = term_a_41;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(r_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
              v_0 = t;
              t = SSLsetAnnotations(v_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_6;
          }
        LocalPopChoice(d_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = c_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
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
        LocalPopChoice(f_41);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = e_41;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_g_41;
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
  t = term_g_41;
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
  t = term_h_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_i_41;
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
  t = term_i_41;
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
  t = term_k_41;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_m_41;
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
  t = term_n_41;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_y_40);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_8 = NULL;
  t = pass_verbose_0_0(t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), term_y_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_q_41;
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
  t = term_q_37;
  i_9 = t;
  t = (ATerm) ATinsert(ATempty, term_r_41);
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
  ATerm t_9 = NULL,x_9 = NULL,y_9 = NULL;
  t_9 = t;
  t = term_q_37;
  x_9 = t;
  t = (ATerm) ATinsert(CheckATermList(t_9), term_s_41);
  y_9 = t;
  t = SSL_printnl(x_9, y_9);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(t_9), term_s_41));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_41;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_u_41;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm b_11 = NULL;
  t = pass_verbose_0_0(t);
  b_11 = t;
  t = (ATerm) ATinsert(CheckATermList(b_11), term_x_41);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm d_11 = NULL;
  t = pass_verbose_0_0(t);
  d_11 = t;
  t = (ATerm) ATinsert(CheckATermList(d_11), term_x_41);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_z_41;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  ATerm f_42 = t;
  int k_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL,d_9 = NULL,f_9 = NULL;
      c_9 = t;
      t = term_m_37;
      d_9 = t;
      t = term_h_40;
      f_9 = t;
      t = term_i_40;
      t = u_15(d_9, f_9, t);
      t = c_9;
      LocalPopChoice(k_42);
      {
        ATerm g_9 = NULL;
        g_9 = t;
        t = if_verbose2_1_0(i_7, t);
        {
          static ATerm l_7 (ATerm t);
          static ATerm l_7 (ATerm t)
          {
            ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
            m_5 = t;
            t = term_n_42;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_p_42);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            z_9 = t;
            {
              ATerm q_42 = t;
              int t_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL,k_10 = NULL;
                  t = term_m_37;
                  i_10 = t;
                  t = term_u_42;
                  k_10 = t;
                  t = term_a_43;
                  t = u_15(i_10, k_10, t);
                  d_10 = t;
                  t = term_m_37;
                  f_10 = t;
                  t = term_b_43;
                  h_10 = t;
                  t = term_c_43;
                  t = u_15(f_10, h_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
                  {
                    ATerm d_43 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm l_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            l_10 = ATgetArgument(t, 0);
                            if((l_10 != ATgetArgument(t, 1)))
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
                        t = d_43;
                      }
                  }
                  LocalPopChoice(t_42);
                }
              else
                {
                  t = q_42;
                  {
                    ATerm n_10 = NULL,p_10 = NULL;
                    t = term_m_37;
                    n_10 = t;
                    t = term_u_42;
                    p_10 = t;
                    t = term_a_43;
                    t = u_15(n_10, p_10, t);
                    t = debug_1_0(p_7, t);
                    _fail(t);
                  }
                }
            }
            t = z_9;
            {
              static ATerm s_7 (ATerm t);
              static ATerm s_7 (ATerm t)
              {
                t = get_outfile_1_0(t_7, t);
                if(((a_9 != NULL) && (a_9 != t)))
                  _fail(t);
                else
                  a_9 = t;
                return(t);
              }
              t = copy_to_1_0(s_7, t);
            }
            {
              ATerm g_43 = t;
              int h_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_10 = NULL,a_11 = NULL;
                  a_11 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      y_10 = ATgetArgument(t, 0);
                      {
                        ATerm p_5 = NULL,b_4 = NULL;
                        t = SSLgetAnnotations(a_11);
                        p_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, y_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, p_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = a_11;
                    }
                  LocalPopChoice(h_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = g_43;
                  t = xtc_transform_term_2_0(x_7, y_7, t);
                }
            }
            {
              static ATerm a_8 (ATerm t);
              static ATerm a_8 (ATerm t)
              {
                t = get_outfile_1_0(b_8, t);
                if(((b_9 != NULL) && (b_9 != t)))
                  _fail(t);
                else
                  b_9 = t;
                return(t);
              }
              t = copy_to_1_0(a_8, t);
            }
            a_10 = t;
            t = term_q_37;
            b_10 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_9)), term_o_43), not_null(a_9)), term_j_43));
            c_10 = t;
            t = SSL_printnl(b_10, c_10);
            t = a_10;
            return(t);
          }
          t = profile_p__2_0(j_7, l_7, t);
        }
        t = g_9;
      }
    }
  else
    {
      t = f_42;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm s_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL;
        t = term_m_37;
        m_11 = t;
        t = term_v_43;
        o_11 = t;
        t = term_y_43;
        t = u_15(m_11, o_11, t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_b_41);
        t = geq_0_0(t);
        t = j_11;
        t = c_127(t);
        LocalPopChoice(u_43);
      }
    else
      {
        t = s_43;
        t = j_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
        t = t_11;
        t = k_136(t);
        w_11 = t;
        t = term_m_37;
        y_11 = t;
        t = term_c_44;
        z_11 = t;
        t = term_e_44;
        t = u_15(y_11, z_11, t);
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
        t = geq_0_0(t);
        t = t_11;
        t = l_136(t);
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = t_11;
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_f_44;
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
  t = term_f_44;
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
static ATerm i_8 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_8 = NULL;
  t = pass_verbose_0_0(t);
  y_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_8), term_y_40);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm z_8 = NULL;
  t = pass_verbose_0_0(t);
  z_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_8), term_y_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  {
    ATerm g_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_13;
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  {
                    ATerm v_7 = NULL,e_4 = NULL;
                    t = SSLgetAnnotations(r_13);
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
                  t = r_13;
                }
              LocalPopChoice(k_44);
              t = xtc_transform_file_2_0(d_8, f_8, t);
            }
          else
            {
              t = j_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(i_44);
      }
    else
      {
        t = g_44;
        t = r_13;
        {
          ATerm l_44 = t;
          int m_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  {
                    ATerm m_9 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(r_13);
                    m_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
                    f_4 = t;
                    t = SSLsetAnnotations(f_4, m_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_13;
                }
              LocalPopChoice(m_44);
              t = xtc_transform_file_2_0(i_8, k_8, t);
            }
          else
            {
              t = l_44;
              t = xtc_transform_term_2_0(l_8, m_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,a_14 = NULL;
  a_14 = t;
  t = term_n_44;
  x_13 = t;
  t = a_14;
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,d_14 = NULL;
        t = term_m_37;
        b_14 = t;
        t = term_h_40;
        d_14 = t;
        t = term_i_40;
        t = u_15(b_14, d_14, t);
        t = a_14;
        LocalPopChoice(p_44);
        t = (ATerm) ATinsert(ATempty, term_q_44);
      }
    else
      {
        t = o_44;
        t = (ATerm) ATempty;
      }
  }
  y_13 = t;
  t = a_14;
  t = comp_0_2(x_13, y_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL;
        t = term_m_37;
        a_15 = t;
        t = term_v_43;
        b_15 = t;
        t = term_y_43;
        t = u_15(a_15, b_15, t);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_14, term_t_44);
        t = geq_0_0(t);
        t = i_14;
        t = f_127(t);
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        t = i_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_q_37;
  j_18 = t;
  t = (ATerm) ATinsert(ATempty, term_v_44);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = i_18;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_18 = NULL;
  t = if_verbose3_1_0(s_8, t);
  t = olevel_2_0(x_8, e_9, t);
  t = olevel_2_0(s_9, w_9, t);
  t = olevel_2_0(e_11, f_11, t);
  q_18 = t;
  {
    ATerm x_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_21 = ATgetArgument(t, 0);
            {
              ATerm x_12 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(q_18);
              x_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, x_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_18;
          }
        LocalPopChoice(y_44);
        t = xtc_transform_file_2_0(q_12, u_12, t);
      }
    else
      {
        t = x_44;
        t = xtc_transform_term_2_0(v_12, w_12, t);
      }
  }
  t = olevel_2_0(y_12, z_12, t);
  t = olevel_2_0(t_13, v_13, t);
  t = olevel_2_0(b_16, c_16, t);
  t = olevel_2_0(o_16, p_16, t);
  t = olevel_2_0(q_17, r_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = term_q_37;
  m_18 = t;
  t = (ATerm) ATinsert(CheckATermList(l_18), term_z_44);
  n_18 = t;
  t = SSL_printnl(m_18, n_18);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(l_18), term_z_44));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  t = term_m_37;
  s_18 = t;
  t = term_c_44;
  t_18 = t;
  t = term_e_44;
  t = u_15(s_18, t_18, t);
  t = debug_1_0(u_8, t);
  t = r_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_a_45;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  {
    ATerm d_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_19 = ATgetArgument(t, 0);
            {
              ATerm q_9 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(u_18);
              q_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_19);
              q_4 = t;
              t = SSLsetAnnotations(q_4, q_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_18;
          }
        LocalPopChoice(f_45);
        t = xtc_transform_file_2_0(k_9, l_9, t);
      }
    else
      {
        t = d_45;
        t = xtc_transform_term_2_0(n_9, o_9, t);
      }
  }
  t = if_keep1_1_0(p_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_19 = NULL;
  t = pass_verbose_0_0(t);
  f_19 = t;
  t = (ATerm) ATinsert(CheckATermList(f_19), term_y_40);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_y_40);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = save_as_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_i_45;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_p_37;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_19;
        {
          ATerm l_45 = t;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL,r_10 = NULL;
              t = term_m_37;
              o_10 = t;
              t = term_m_45;
              r_10 = t;
              t = term_n_45;
              t = u_15(o_10, r_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_45;
            }
        }
        t = w_19;
        {
          ATerm o_45 = t;
          int p_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm s_11 = NULL,u_5 = NULL;
                    t = SSLgetAnnotations(w_19);
                    s_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
                    u_5 = t;
                    t = SSLsetAnnotations(u_5, s_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = w_19;
                }
              LocalPopChoice(p_45);
              t = xtc_transform_file_2_0(g_10, j_10, t);
            }
          else
            {
              t = o_45;
              t = xtc_transform_term_2_0(m_10, u_10, t);
            }
        }
        t = if_keep2_1_0(v_10, t);
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        t = w_19;
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_y_40);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm i_11 = NULL;
  t = pass_verbose_0_0(t);
  i_11 = t;
  t = (ATerm) ATinsert(CheckATermList(i_11), term_y_40);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = save_as_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL,e_20 = NULL;
  e_20 = t;
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(e_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
              v_5 = t;
              t = SSLsetAnnotations(v_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_20;
          }
        LocalPopChoice(z_45);
        t = xtc_transform_file_2_0(k_11, p_11, t);
      }
    else
      {
        t = y_45;
        t = xtc_transform_term_2_0(q_11, r_11, t);
      }
  }
  t = if_keep6_1_0(u_11, t);
  b_20 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_20 = ATgetArgument(t, 0);
            {
              ATerm h_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(b_20);
              h_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_20);
              w_5 = t;
              t = SSLsetAnnotations(w_5, h_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(d_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = c_46;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_21 = ATgetArgument(t, 0);
            {
              ATerm l_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_21);
              x_5 = t;
              t = SSLsetAnnotations(x_5, l_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_19;
          }
        LocalPopChoice(f_46);
        t = xtc_transform_file_2_0(i_12, j_12, t);
      }
    else
      {
        t = e_46;
        t = xtc_transform_term_2_0(k_12, m_12, t);
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_y_40);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_g_46;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_y_40);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = save_as_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_h_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_y_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_y_40);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_j_46;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm i_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(i_21), term_y_40);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm m_21 = NULL;
  t = pass_verbose_0_0(t);
  m_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), term_y_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm s_21 = NULL;
  t = pass_verbose_0_0(t);
  s_21 = t;
  t = (ATerm) ATinsert(CheckATermList(s_21), term_y_40);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_k_46;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm v_21 = NULL;
  t = pass_verbose_0_0(t);
  v_21 = t;
  t = (ATerm) ATinsert(CheckATermList(v_21), term_y_40);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
  a_22 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_22 = ATgetArgument(t, 0);
            {
              ATerm f_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(a_22);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
              i_6 = t;
              t = SSLsetAnnotations(i_6, f_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_22;
          }
        LocalPopChoice(m_46);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = l_46;
        t = xtc_transform_term_2_0(c_13, d_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  z_21 = t;
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_22 = ATgetArgument(t, 0);
            {
              ATerm p_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(z_21);
              p_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, p_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_21;
          }
        LocalPopChoice(o_46);
        t = xtc_transform_file_2_0(e_13, g_13, t);
      }
    else
      {
        t = n_46;
        t = xtc_transform_term_2_0(h_13, i_13, t);
      }
  }
  w_21 = t;
  {
    ATerm p_46 = t;
    int r_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_23 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(w_21);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              k_6 = t;
              t = SSLsetAnnotations(k_6, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_21;
          }
        LocalPopChoice(r_46);
        t = xtc_transform_file_2_0(j_13, k_13, t);
      }
    else
      {
        t = p_46;
        t = xtc_transform_term_2_0(l_13, m_13, t);
      }
  }
  t = if_keep4_1_0(o_13, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm j_22 = NULL;
  t = pass_verbose_0_0(t);
  j_22 = t;
  t = (ATerm) ATinsert(CheckATermList(j_22), term_y_40);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_y_40);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_y_40);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm e_23 = NULL;
  t = pass_verbose_0_0(t);
  e_23 = t;
  t = (ATerm) ATinsert(CheckATermList(e_23), term_y_40);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm r_23 = NULL;
  t = pass_verbose_0_0(t);
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), term_y_40);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_y_40);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = save_as_1_0(q_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_p_37;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm a_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_24 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(w_23);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_23;
          }
        LocalPopChoice(d_47);
        t = xtc_transform_file_2_0(w_13, z_13, t);
      }
    else
      {
        t = a_47;
        t = xtc_transform_term_2_0(e_14, f_14, t);
      }
  }
  v_23 = t;
  {
    ATerm e_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm w_15 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(v_23);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              s_6 = t;
              t = SSLsetAnnotations(s_6, w_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_23;
          }
        LocalPopChoice(g_47);
        t = xtc_transform_file_2_0(g_14, j_14, t);
      }
    else
      {
        t = e_47;
        t = xtc_transform_term_2_0(r_14, v_14, t);
      }
  }
  t = if_keep2_1_0(g_15, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm f_24 = NULL;
  t = pass_verbose_0_0(t);
  f_24 = t;
  t = (ATerm) ATinsert(CheckATermList(f_24), term_y_40);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_i_47;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm g_24 = NULL;
  t = pass_verbose_0_0(t);
  g_24 = t;
  t = (ATerm) ATinsert(CheckATermList(g_24), term_y_40);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_j_47;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm o_24 = NULL;
  t = pass_verbose_0_0(t);
  o_24 = t;
  t = (ATerm) ATinsert(CheckATermList(o_24), term_y_40);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_j_47;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm p_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), term_y_40);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = save_as_1_0(h_15, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_24 = ATgetArgument(t, 0);
            {
              ATerm e_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(q_24);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_24);
              t_6 = t;
              t = SSLsetAnnotations(t_6, e_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_24;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(d_16, f_16, t);
      }
    else
      {
        t = p_47;
        t = xtc_transform_term_2_0(g_16, h_16, t);
      }
  }
  t = if_keep5_1_0(j_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(l_16, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm a_25 = NULL;
  t = pass_verbose_0_0(t);
  a_25 = t;
  t = (ATerm) ATinsert(CheckATermList(a_25), term_y_40);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_i_46;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm c_25 = NULL;
  t = pass_verbose_0_0(t);
  c_25 = t;
  t = (ATerm) ATinsert(CheckATermList(c_25), term_y_40);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_u_47;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = save_as_1_0(n_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_m_41;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm i_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(i_25);
              i_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, i_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_25;
          }
        LocalPopChoice(x_47);
        t = xtc_transform_file_2_0(r_16, s_16, t);
      }
    else
      {
        t = w_47;
        t = xtc_transform_term_2_0(t_16, v_16, t);
      }
  }
  t = if_keep3_1_0(w_16, t);
  h_25 = t;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_26 = ATgetArgument(t, 0);
            {
              ATerm m_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(h_25);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, m_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_25;
          }
        LocalPopChoice(z_47);
        t = xtc_transform_file_2_0(z_16, a_17, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(b_17, c_17, t);
      }
  }
  t = if_keep3_1_0(e_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(g_17, t);
  g_25 = t;
  {
    ATerm a_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_26 = ATgetArgument(t, 0);
            {
              ATerm q_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(g_25);
              q_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, q_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_25;
          }
        LocalPopChoice(c_48);
        t = xtc_transform_file_2_0(i_17, j_17, t);
      }
    else
      {
        t = a_48;
        t = xtc_transform_term_2_0(k_17, n_17, t);
      }
  }
  t = if_keep3_1_0(o_17, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm y_25 = NULL;
  t = pass_verbose_0_0(t);
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), term_y_40);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm b_26 = NULL;
  t = pass_verbose_0_0(t);
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(b_26), term_y_40);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm l_26 = NULL;
  t = pass_verbose_0_0(t);
  l_26 = t;
  t = (ATerm) ATinsert(CheckATermList(l_26), term_y_40);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_t_46;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm o_26 = NULL;
  t = pass_verbose_0_0(t);
  o_26 = t;
  t = (ATerm) ATinsert(CheckATermList(o_26), term_y_40);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = save_as_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm w_26 = NULL;
  t = pass_verbose_0_0(t);
  w_26 = t;
  t = (ATerm) ATinsert(CheckATermList(w_26), term_y_40);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm x_26 = NULL;
  t = pass_verbose_0_0(t);
  x_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), term_y_40);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = save_as_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  z_26 = t;
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_27 = ATgetArgument(t, 0);
            {
              ATerm u_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(z_26);
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, u_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_26;
          }
        LocalPopChoice(j_48);
        t = xtc_transform_file_2_0(s_17, t_17, t);
      }
    else
      {
        t = i_48;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  t = if_keep1_1_0(y_17, t);
  y_26 = t;
  {
    ATerm k_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_27 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(y_26);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_26;
          }
        LocalPopChoice(o_48);
        t = xtc_transform_file_2_0(a_18, b_18, t);
      }
    else
      {
        t = k_48;
        t = xtc_transform_term_2_0(c_18, e_18, t);
      }
  }
  t = if_keep1_1_0(h_18, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm j_27 = NULL;
  t = pass_verbose_0_0(t);
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(j_27), term_y_40);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_v_46;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm k_27 = NULL;
  t = pass_verbose_0_0(t);
  k_27 = t;
  t = (ATerm) ATinsert(CheckATermList(k_27), term_y_40);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = save_as_1_0(z_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_p_48;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm t_27 = NULL;
  t = pass_verbose_0_0(t);
  t_27 = t;
  t = (ATerm) ATinsert(CheckATermList(t_27), term_y_40);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm v_27 = NULL;
  t = pass_verbose_0_0(t);
  v_27 = t;
  t = (ATerm) ATinsert(CheckATermList(v_27), term_y_40);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = save_as_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_r_48;
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
  t = term_v_41;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm t_29 = NULL;
  t = pass_verbose_0_0(t);
  t_29 = t;
  t = (ATerm) ATinsert(CheckATermList(t_29), term_x_41);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm u_29 = NULL;
  t = pass_verbose_0_0(t);
  u_29 = t;
  t = (ATerm) ATinsert(CheckATermList(u_29), term_x_41);
  return(t);
}
ATerm save_as_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  v_28 = t;
  {
    static ATerm w_18 (ATerm t);
    static ATerm w_18 (ATerm t)
    {
      static ATerm z_18 (ATerm t);
      static ATerm z_18 (ATerm t)
      {
        ATerm f_29 = NULL,g_29 = NULL;
        t = b_100(t);
        f_29 = t;
        t = term_s_48;
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_48, f_29);
        t = a_16(g_29, f_29, t);
        return(t);
      }
      t = get_outfile_1_0(z_18, t);
      if(((s_28 != NULL) && (s_28 != t)))
        _fail(t);
      else
        s_28 = t;
      return(t);
    }
    t = copy_to_1_0(w_18, t);
  }
  {
    ATerm t_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_29 = NULL,q_29 = NULL;
        q_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_29 = ATgetArgument(t, 0);
            {
              ATerm d_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(q_29);
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, d_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_29;
          }
        LocalPopChoice(v_48);
        t = xtc_transform_file_2_0(a_19, b_19, t);
      }
    else
      {
        t = t_48;
        t = xtc_transform_term_2_0(e_19, j_19, t);
      }
  }
  {
    static ATerm l_19 (ATerm t);
    static ATerm l_19 (ATerm t)
    {
      ATerm v_29 = NULL;
      t = term_w_48;
      v_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_28), term_w_48);
      t = a_16(not_null(s_28), v_29, t);
      if(((u_28 != NULL) && (u_28 != t)))
        _fail(t);
      else
        u_28 = t;
      return(t);
    }
    t = copy_to_1_0(l_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_49), not_null(u_28)), term_z_48), not_null(s_28)), term_x_48);
  e_29 = t;
  t = SSL_concat_strings(e_29);
  x_28 = t;
  t = term_q_37;
  c_29 = t;
  t = (ATerm) ATinsert(ATempty, x_28);
  d_29 = t;
  t = SSL_printnl(c_29, d_29);
  t = v_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
        t = term_m_37;
        d_30 = t;
        t = term_v_43;
        e_30 = t;
        t = term_y_43;
        t = u_15(d_30, e_30, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_p_37);
        t = geq_0_0(t);
        t = a_30;
        t = d_127(t);
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
        t = a_30;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm i_30 = NULL,m_30 = NULL,n_30 = NULL,q_30 = NULL;
  t = term_n_37;
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,t_30 = NULL;
        t = term_m_37;
        r_30 = t;
        t = term_n_37;
        t_30 = t;
        t = term_o_37;
        t = u_15(r_30, t_30, t);
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = term_b_41;
      }
  }
  m_30 = t;
  t = term_b_41;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, term_b_41);
  t = y_14(m_30, q_30, t);
  n_30 = t;
  t = SSL_int_to_string(n_30);
  i_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_30), term_n_37);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_49 = ATgetArgument(t, 0);
      if(match_cons(f_49, sym_Stream_1))
        {
          y_30 = ATgetArgument(f_49, 0);
        }
      else
        _fail(t);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14(y_30, z_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  w_30 = t;
  t = xtc_new_file_0_0(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, w_30);
  t = p_14(p_19, v_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_30);
  t = xtc_transform_file_2_0(c_135, d_135, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm q_14 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_execvp(w_67, x_67);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,i_32 = NULL,j_32 = NULL;
  c_32 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_32 = ATgetArgument(t, 0);
      {
        ATerm l_17 = NULL,m_17 = NULL;
        t = SSL_int_to_string(d_32);
        l_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_49), l_17), term_g_49);
        m_17 = t;
        t = SSL_concat_strings(m_17);
      }
    }
  else
    {
      ATerm w_17 = NULL,x_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_32 = ATgetArgument(t, 0);
          i_32 = ATgetArgument(t, 1);
          j_32 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(i_32);
      w_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_32), term_k_49), w_17), term_i_49), d_32);
      x_17 = t;
      t = SSL_concat_strings(x_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_19 (ATerm t);
        static ATerm r_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_49 = ATgetArgument(t, 0);
              if((o_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_49 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_55), term_x_54), term_t_54), term_p_54), term_m_54), term_i_54), term_e_54), term_a_54), term_w_53), term_s_53), term_o_53), term_k_53), term_e_53), term_a_53), term_w_52), term_s_52), term_l_52), term_g_52), term_b_52), term_p_51), term_i_51), term_c_51), term_q_50), term_j_50), term_c_50), term_y_49), term_v_49), term_s_49);
        t = fetch_elem_1_0(r_19, t);
        LocalPopChoice(m_49);
      }
    else
      {
        t = l_49;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_32 = NULL,c_33 = NULL;
  t_32 = t;
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_55 = ATgetArgument(t, 0);
            c_33 = ATgetArgument(t, 1);
            {
              ATerm j_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_55);
        {
          ATerm k_55 = t;
          int l_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_18 = NULL,f_18 = NULL,g_18 = NULL;
              t = c_33;
              {
                ATerm m_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              d_18 = t;
              t = term_q_37;
              f_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, d_18), term_n_55);
              g_18 = t;
              t = SSL_printnl(f_18, g_18);
              t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(ATinsert(ATempty, d_18), term_n_55));
              LocalPopChoice(l_55);
            }
          else
            {
              t = k_55;
              t = t_32;
            }
        }
      }
    else
      {
        t = f_55;
        t = t_32;
      }
  }
  t = t_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  u_33 = t;
  t = fork_0_0(t);
  t_33 = t;
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_33;
        t = n_127(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        t = SSL_waitpid(t_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_55 = ATgetArgument(t, 0);
            if(((ATgetType(q_55) != AT_INT) || (ATgetInt((ATermInt) q_55) != 0)))
              _fail(t);
            {
              ATerm r_55 = ATgetArgument(t, 1);
            }
            {
              ATerm w_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_136 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  x_33 = t;
  t = g_136(t);
  t = xtc_find_0_0(t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
  {
    static ATerm t_19 (ATerm t);
    static ATerm t_19 (ATerm t)
    {
      ATerm y_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
      t = q_14(w_33, x_33, t);
      t = term_r_38;
      y_33 = t;
      t = SSL_exit(y_33);
      return(t);
    }
    t = fork_and_wait_1_0(t_19, t);
  }
  t = x_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm b_34 = NULL,d_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_34 = NULL,f_34 = NULL;
      t = b_34;
      t = xtc_new_file_0_0(t);
      e_34 = t;
      t = t_0(t);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, (ATerm) ATinsert(ATinsert(ATempty, e_34), term_b_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_34);
    }
  else
    {
      ATerm k_34 = NULL,l_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_34;
      t = xtc_new_file_0_0(t);
      k_34 = t;
      t = t_0(t);
      l_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_34), term_b_38), d_34), term_x_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_50 = NULL,e_50 = NULL;
      e_50 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_50 = ATgetArgument(t, 0);
          {
            ATerm l_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(e_50);
            l_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_50);
            t_8 = t;
            t = SSLsetAnnotations(t_8, l_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_50;
        }
      LocalPopChoice(z_55);
      {
        static ATerm v_19 (ATerm t);
        static ATerm y_19 (ATerm t);
        static ATerm v_19 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm y_19 (ATerm t)
        {
          ATerm i_50 = NULL;
          t = pass_verbose_0_0(t);
          i_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), i_50), (ATerm) ATinsert(ATempty, term_y_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(v_19, y_19, t);
      }
    }
  else
    {
      t = y_55;
      {
        static ATerm c_20 (ATerm t);
        static ATerm f_20 (ATerm t);
        static ATerm c_20 (ATerm t)
        {
          t = u_22;
          return(t);
        }
        static ATerm f_20 (ATerm t)
        {
          ATerm k_50 = NULL;
          t = pass_verbose_0_0(t);
          k_50 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), k_50), (ATerm) ATinsert(ATempty, term_y_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(c_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,t_34 = NULL,u_34 = NULL;
  q_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_34;
      t = y_115(t);
    }
  else
    {
      ATerm a_35 = NULL,b_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_34;
      t = a_116(t);
      a_35 = t;
      t = u_34;
      t = foldr_3_0(y_115, z_115, a_116, t);
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_35, b_35);
      t = z_115(t);
    }
  return(t);
}
static ATerm g_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_35), term_c_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm c_35 = NULL,e_35 = NULL;
  t = term_m_37;
  c_35 = t;
  t = term_c_56;
  e_35 = t;
  t = term_d_56;
  t = u_15(c_35, e_35, t);
  t = foldr_3_0(g_20, conc_0_0, j_20, t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_y_40);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_y_40);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  t = get_outfile_1_0(b_21, t);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_f_56;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL,h_19 = NULL,i_19 = NULL,m_19 = NULL,n_19 = NULL;
        t = term_m_37;
        m_19 = t;
        t = term_i_56;
        n_19 = t;
        t = term_j_56;
        t = u_15(m_19, n_19, t);
        t = s_36;
        {
          ATerm k_56 = t;
          int l_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_36;
              {
                ATerm m_56 = t;
                int n_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        d_20 = ATgetArgument(t, 0);
                        {
                          ATerm d_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(s_36);
                          d_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, d_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, d_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = s_36;
                      }
                    LocalPopChoice(n_56);
                    t = xtc_transform_file_2_0(o_20, s_20, t);
                  }
                else
                  {
                    t = m_56;
                    t = xtc_transform_term_2_0(w_20, x_20, t);
                  }
              }
              LocalPopChoice(l_56);
            }
          else
            {
              t = k_56;
              {
                ATerm m_20 = NULL,n_20 = NULL,v_20 = NULL;
                t = term_q_37;
                n_20 = t;
                t = (ATerm) ATinsert(ATempty, term_r_56);
                v_20 = t;
                t = SSL_printnl(n_20, v_20);
                t = term_b_41;
                m_20 = t;
                t = SSL_exit(m_20);
                t = (ATerm) ATinsert(ATempty, term_r_56);
              }
            }
        }
        t = copy_to_1_0(a_21, t);
        c_19 = t;
        t = term_q_37;
        h_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_56));
        i_19 = t;
        t = SSL_printnl(h_19, i_19);
        t = c_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(h_56);
      }
    else
      {
        t = g_56;
        t = s_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  {
    ATerm t_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
        t = term_m_37;
        i_37 = t;
        t = term_v_43;
        j_37 = t;
        t = term_y_43;
        t = u_15(i_37, j_37, t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_37, term_o_47);
        t = geq_0_0(t);
        t = d_37;
        t = g_127(t);
        LocalPopChoice(w_56);
      }
    else
      {
        t = t_56;
        t = d_37;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm h_127 (ATerm), ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  {
    ATerm x_56 = t;
    int y_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
        t = term_m_37;
        w_37 = t;
        t = term_v_43;
        x_37 = t;
        t = term_y_43;
        t = u_15(w_37, x_37, t);
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_37, term_a_50);
        t = geq_0_0(t);
        t = r_37;
        t = h_127(t);
        LocalPopChoice(y_56);
      }
    else
      {
        t = x_56;
        t = r_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm z_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_37 = NULL,c_38 = NULL;
      t = term_m_37;
      z_37 = t;
      t = term_b_57;
      c_38 = t;
      t = term_c_57;
      t = u_15(z_37, c_38, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_57);
      LocalPopChoice(a_57);
    }
  else
    {
      t = z_56;
      t = (ATerm) ATinsert(ATempty, term_d_57);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  k_38 = t;
  t = term_e_57;
  g_38 = t;
  t = term_m_37;
  m_38 = t;
  t = term_f_57;
  n_38 = t;
  t = term_g_57;
  t = u_15(m_38, n_38, t);
  l_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_38), term_f_57);
  h_38 = t;
  t = k_38;
  t = comp_0_2(g_38, h_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
        t = term_m_37;
        u_38 = t;
        t = term_v_43;
        v_38 = t;
        t = term_y_43;
        t = u_15(u_38, v_38, t);
        t_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_38, term_m_41);
        t = geq_0_0(t);
        t = p_38;
        t = e_127(t);
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
        t = p_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm x_38 = NULL;
  static ATerm f_21 (ATerm t);
  static ATerm f_21 (ATerm t)
  {
    t = j_109(t);
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    return(t);
  }
  t = fetch_1_0(f_21, t);
  t = not_null(x_38);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm j_41 = NULL,l_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_41 = ATgetArgument(t, 0);
      {
        ATerm u_21 = NULL,y_21 = NULL,u_9 = NULL;
        t = SSLgetAnnotations(j_41);
        u_21 = t;
        t = l_41;
        t = fetch_elem_1_0(j_21, t);
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, y_21);
        u_9 = t;
        t = SSLsetAnnotations(u_9, u_21);
      }
    }
  else
    {
      ATerm c_23 = NULL,h_23 = NULL,v_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          l_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_41);
      c_23 = t;
      t = l_41;
      t = fetch_elem_1_0(k_21, t);
      h_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, h_23);
      v_9 = t;
      t = SSLsetAnnotations(v_9, c_23);
    }
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,l_22 = NULL;
  d_22 = t;
  {
    ATerm j_57 = t;
    int k_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm l_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_57);
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
        t = j_57;
        if(match_cons(t, sym_RDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm p_57 = ATgetArgument(t, 2);
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
static ATerm k_21 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  {
    ATerm q_57 = t;
    int r_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            l_23 = ATgetArgument(t, 0);
            m_23 = ATgetArgument(t, 1);
            {
              ATerm s_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_57);
        t = l_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = m_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_23;
      }
    else
      {
        t = q_57;
        if(match_cons(t, sym_RDef_3))
          {
            l_23 = ATgetArgument(t, 0);
            m_23 = ATgetArgument(t, 1);
            {
              ATerm t_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = m_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  t = fetch_elem_1_0(h_21, t);
  v_39 = t;
  t = term_q_37;
  w_39 = t;
  t = (ATerm) ATinsert(ATempty, term_u_57);
  x_39 = t;
  t = SSL_printnl(w_39, x_39);
  t = v_39;
  return(t);
}
static ATerm n_14 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm x_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_57;
      }
  }
  t = b_23;
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(z_57);
      }
    else
      {
        t = y_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_c_58, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm o_14 (ATerm v_24, ATerm w_24, ATerm t)
{
  ATerm w_41 = NULL;
  t = SSL_write_term_to_stream_baf(v_24, w_24);
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_41);
  return(t);
}
static ATerm p_14 (ATerm o_108 (ATerm), ATerm e_214, ATerm f_25, ATerm t)
{
  ATerm y_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_214, term_d_58);
  t = o_15(t);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, f_25);
  t = o_108(t);
  t = fclose_0_0(t);
  t = f_25;
  return(t);
}
static ATerm s_14 (ATerm k_122 (ATerm), ATerm e_45, ATerm c_45, ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  d_42 = t;
  t = k_122(t);
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_42, e_45, c_45);
  t = v_15(a_42, e_45, c_45, t);
  {
    ATerm e_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL;
        t = term_r_58;
        j_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_42, term_r_58);
        t = u_15(a_42, j_42, t);
        {
          ATerm w_58 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_58;
            }
        }
        LocalPopChoice(q_58);
      }
    else
      {
        t = e_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_42 = ATgetFirst((ATermList) t);
      c_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_42, term_r_58, (ATerm) ATinsert(CheckATermList(c_42), (ATerm) ATinsert(CheckATermList(b_42), e_45)));
  t = lookup_table_0_1(a_42, t);
  i_42 = t;
  t = term_r_58;
  e_42 = t;
  t = (ATerm) ATinsert(CheckATermList(c_42), (ATerm) ATinsert(CheckATermList(b_42), e_45));
  g_42 = t;
  t = i_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(e_42, g_42, h_42, t);
  t = d_42;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_42 = NULL;
  ATerm y_58 = t;
  int z_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_42 = NULL,l_24 = NULL;
      r_42 = t;
      t = term_a_59;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_42, term_a_59);
      t = a_16(r_42, l_24, t);
      l_42 = t;
      t = SSL_mkstemp(l_42);
      LocalPopChoice(z_58);
    }
  else
    {
      t = y_58;
      {
        ATerm s_42 = NULL;
        t = term_b_59;
        s_42 = t;
        t = SSL_perror(s_42);
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
static ATerm l_21 (ATerm t)
{
  t = term_c_59;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  t = P__tmpdir_0_0(t);
  y_42 = t;
  t = term_d_59;
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, term_d_59);
  t = a_16(y_42, z_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_39;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, term_q_39);
  t = s_14(l_21, w_42, x_42, t);
  t = SSL_close(v_42);
  t = w_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_43 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_59;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm i_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_59);
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_43, (ATerm) ATinsert(ATempty, term_i_59));
      t = q_15(e_43, i_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm p_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_59 = ATgetArgument(t, 0);
      if(match_cons(j_59, sym_Stream_1))
        {
          p_43 = ATgetArgument(j_59, 0);
        }
      else
        _fail(t);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14(p_43, t_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,n_43 = NULL;
  t = read_from_0_0(t);
  t = e_135(t);
  n_43 = t;
  t = xtc_new_file_0_0(t);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, n_43);
  t = p_14(n_21, l_43, n_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_43);
  return(t);
}
static ATerm o_21 (ATerm t)
{
  t = debug_1_0(p_21, t);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_k_59;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = save_as_1_0(x_21, t);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm b_44 = NULL,u_44 = NULL;
  u_44 = t;
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL,o_25 = NULL;
        t = term_m_37;
        n_25 = t;
        t = term_r_59;
        o_25 = t;
        t = term_t_59;
        t = u_15(n_25, o_25, t);
        b_44 = t;
        t = if_verbose2_1_0(o_21, t);
        t = u_44;
        {
          ATerm w_59 = t;
          int x_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_25 = NULL,q_25 = NULL;
              t = term_m_37;
              p_25 = t;
              t = term_h_40;
              q_25 = t;
              t = term_i_40;
              t = u_15(p_25, q_25, t);
              t = u_44;
              LocalPopChoice(x_59);
            }
          else
            {
              t = w_59;
              {
                static ATerm r_21 (ATerm t);
                static ATerm r_21 (ATerm t)
                {
                  ATerm y_59 = t;
                  int a_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = n_14(b_44, k_26, t);
                      LocalPopChoice(a_60);
                    }
                  else
                    {
                      t = y_59;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(r_21, t);
              }
            }
        }
        LocalPopChoice(q_59);
      }
    else
      {
        t = p_59;
        t = u_44;
      }
  }
  t = if_keep3_1_0(t_21, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  {
    ATerm d_60 = t;
    int e_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_46);
        LocalPopChoice(e_60);
      }
    else
      {
        t = d_60;
        t = a_46;
      }
  }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_c_59;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  static ATerm b_22 (ATerm t);
  static ATerm b_22 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL,w_45 = NULL;
    t_45 = t;
    t = term_c_59;
    u_45 = t;
    t = term_r_58;
    w_45 = t;
    t = term_f_60;
    t = u_15(u_45, w_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_45 != NULL) && (r_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_45 = ATgetFirst((ATermList) t);
        {
          ATerm g_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_45;
    t = map_1_0(c_22, t);
    t = t_45;
    t = end_scope_1_0(f_22, t);
    return(t);
  }
  t = repeat_2_0(b_22, _id, t);
  s_45 = t;
  t = SSL_exit(s_45);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm i_60 = t;
  int j_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_46 = NULL,y_46 = NULL;
      t = term_m_37;
      w_46 = t;
      t = term_b_38;
      y_46 = t;
      t = term_d_38;
      t = u_15(w_46, y_46, t);
      LocalPopChoice(j_60);
    }
  else
    {
      t = i_60;
      t = term_t_39;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_27 = NULL,e_27 = NULL;
      t = term_b_38;
      {
        ATerm l_60 = t;
        int n_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_27 = NULL,l_27 = NULL;
            t = term_m_37;
            g_27 = t;
            t = term_b_38;
            l_27 = t;
            t = term_d_38;
            t = u_15(g_27, l_27, t);
            LocalPopChoice(n_60);
          }
        else
          {
            t = l_60;
            t = term_t_39;
          }
      }
      c_27 = t;
      t = term_f_59;
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_59, c_27);
      t = d_15(e_27, c_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm o_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_46;
      t = copy_to_1_0(g_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_e_37;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,f_47 = NULL,h_47 = NULL;
  t = a_100(t);
  b_47 = t;
  t = term_m_37;
  f_47 = t;
  t = term_u_42;
  h_47 = t;
  t = term_a_43;
  t = u_15(f_47, h_47, t);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, b_47);
  t = a_16(c_47, b_47, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL;
        t = l_48;
        t = u_0(t);
        y_27 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_27;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_27;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_48, y_27);
        t = d_15(m_48, y_27, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
        LocalPopChoice(q_60);
      }
    else
      {
        t = p_60;
        {
          ATerm s_60 = t;
          int t_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_29 = NULL;
              t = l_48;
              t = u_0(t);
              a_29 = t;
              {
                ATerm u_60 = t;
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
                            if((m_48 != t))
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
                    t = u_60;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_48, a_29);
              t = d_15(m_48, a_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
              LocalPopChoice(t_60);
            }
          else
            {
              t = s_60;
              t = l_48;
              t = u_0(t);
              if((m_48 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_48);
            }
        }
      }
  }
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = get_outfile_1_0(m_22, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = term_y_60;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  {
    ATerm z_60 = t;
    int d_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,f_30 = NULL;
        t = term_m_37;
        z_29 = t;
        t = term_e_61;
        f_30 = t;
        t = term_f_61;
        t = u_15(z_29, f_30, t);
        t = j_49;
        t = copy_to_1_0(i_22, t);
        s_29 = t;
        t = term_q_37;
        x_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_61));
        y_29 = t;
        t = SSL_printnl(x_29, y_29);
        t = s_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(d_61);
      }
    else
      {
        t = z_60;
        t = j_49;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm n_50 = NULL,p_50 = NULL,s_50 = NULL,t_50 = NULL;
  t = term_v_43;
  {
    ATerm s_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_50 = NULL,w_50 = NULL;
        t = term_m_37;
        u_50 = t;
        t = term_v_43;
        w_50 = t;
        t = term_y_43;
        t = u_15(u_50, w_50, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = s_61;
        t = term_b_41;
      }
  }
  p_50 = t;
  t = term_b_41;
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, term_b_41);
  t = y_14(p_50, t_50, t);
  s_50 = t;
  t = SSL_int_to_string(s_50);
  n_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_50), term_v_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,g_51 = NULL,h_51 = NULL;
  t = term_m_37;
  g_51 = t;
  t = term_v_61;
  h_51 = t;
  t = term_w_61;
  t = u_15(g_51, h_51, t);
  y_50 = t;
  t = term_y_61;
  t = xtc_find_path_0_0(t);
  z_50 = t;
  t = term_b_62;
  t = xtc_find_path_0_0(t);
  a_51 = t;
  t = term_c_62;
  t = xtc_find_path_0_0(t);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_51), term_v_61), a_51), term_v_61), z_50), term_v_61));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  u_51 = t;
  t = term_d_62;
  j_51 = t;
  t = u_51;
  {
    ATerm f_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_51 = NULL,x_51 = NULL;
        t = term_m_37;
        w_51 = t;
        t = term_b_38;
        x_51 = t;
        t = term_d_38;
        t = u_15(w_51, x_51, t);
        LocalPopChoice(g_62);
      }
    else
      {
        t = f_62;
        {
          ATerm y_51 = NULL,z_51 = NULL;
          t = term_m_37;
          y_51 = t;
          t = term_u_42;
          z_51 = t;
          t = term_a_43;
          t = u_15(y_51, z_51, t);
        }
      }
  }
  v_51 = t;
  t = u_51;
  t = get_include_dirs_0_0(t);
  l_51 = t;
  t = u_51;
  t = pass_keep_0_0(t);
  s_51 = t;
  t = term_h_62;
  {
    ATerm k_62 = t;
    int l_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_52 = NULL,i_52 = NULL;
        t = term_m_37;
        d_52 = t;
        t = term_h_62;
        i_52 = t;
        t = term_m_62;
        t = u_15(d_52, i_52, t);
        LocalPopChoice(l_62);
        t = (ATerm) ATinsert(ATempty, term_h_62);
      }
    else
      {
        t = k_62;
        t = (ATerm) ATempty;
      }
  }
  t_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_51), s_51), l_51), (ATerm) ATinsert(ATinsert(ATempty, v_51), term_n_62));
  t = concat_0_0(t);
  k_51 = t;
  t = u_51;
  t = comp_0_2(j_51, k_51, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  ATerm k_52 = NULL;
  k_52 = t;
  {
    ATerm o_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
        t = term_m_37;
        q_52 = t;
        t = term_n_37;
        r_52 = t;
        t = term_o_37;
        t = u_15(q_52, r_52, t);
        p_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_52, term_m_41);
        t = geq_0_0(t);
        t = k_52;
        t = c_126(t);
        LocalPopChoice(q_62);
      }
    else
      {
        t = o_62;
        t = k_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_119 (ATerm), ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL;
  j_53 = t;
  t = SSL_explode_string(j_53);
  {
    ATerm r_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_55 (ATerm t);
        static ATerm i_55 (ATerm t)
        {
          ATerm y_54 = NULL,z_54 = NULL,c_55 = NULL;
          y_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_54 = ATgetFirst((ATermList) t);
              c_55 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_62 = t;
            int w_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_31 = NULL,k_31 = NULL,q_10 = NULL;
                t = SSLgetAnnotations(y_54);
                c_31 = t;
                t = c_55;
                t = i_55(t);
                k_31 = t;
                t = (ATerm) ATinsert(CheckATermList(k_31), z_54);
                q_10 = t;
                t = SSLsetAnnotations(q_10, c_31);
                LocalPopChoice(w_62);
              }
            else
              {
                t = u_62;
                {
                  ATerm x_62 = t;
                  int y_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_32 = NULL,s_10 = NULL;
                      t = SSLgetAnnotations(y_54);
                      h_32 = t;
                      t = z_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(c_55), z_54);
                      s_10 = t;
                      t = SSLsetAnnotations(s_10, h_32);
                      LocalPopChoice(y_62);
                    }
                  else
                    {
                      t = x_62;
                      {
                        ATerm e_33 = NULL,j_33 = NULL,t_10 = NULL;
                        t = SSLgetAnnotations(y_54);
                        e_33 = t;
                        t = z_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = c_55;
                        t = y_119(t);
                        j_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_33), z_54);
                        t_10 = t;
                        t = SSLsetAnnotations(t_10, e_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = i_55(t);
        LocalPopChoice(s_62);
      }
    else
      {
        t = r_62;
      }
  }
  i_53 = t;
  t = SSL_implode_string(i_53);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = debug_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_d_63;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = debug_1_0(r_22, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm t_14 (ATerm w_22, ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  s_55 = t;
  t = if_verbose3_1_0(n_22, t);
  t = term_b_43;
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_43, s_55);
  t = z_15(v_55, s_55, t);
  {
    ATerm f_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL,b_56 = NULL;
        t = term_m_37;
        a_56 = t;
        t = term_b_38;
        b_56 = t;
        t = term_d_38;
        t = u_15(a_56, b_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(h_63);
      }
    else
      {
        t = f_63;
        t = s_55;
      }
  }
  t_55 = t;
  t = if_verbose3_1_0(p_22, t);
  t = term_u_42;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_42, t_55);
  t = z_15(u_55, t_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_55);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = debug_1_0(x_22, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = term_k_63;
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = if_verbose1_1_0(d_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm h_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,s_58 = NULL,t_58 = NULL,r_36 = NULL,v_36 = NULL,w_36 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(t_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL,v_58 = NULL,x_58 = NULL;
        u_58 = t;
        t = term_m_37;
        v_58 = t;
        t = term_h_40;
        x_58 = t;
        t = term_i_40;
        t = u_15(v_58, x_58, t);
        t = u_58;
        LocalPopChoice(m_63);
      }
    else
      {
        t = l_63;
        t = add_main_0_0(t);
      }
  }
  s_58 = t;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_59 = ATgetArgument(t, 0);
            {
              ATerm s_33 = NULL,x_10 = NULL;
              t = SSLgetAnnotations(s_58);
              s_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_59);
              x_10 = t;
              t = SSLsetAnnotations(x_10, s_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_58;
          }
        LocalPopChoice(o_63);
        t = xtc_transform_file_2_0(f_23, j_23, t);
      }
    else
      {
        t = n_63;
        t = xtc_transform_term_2_0(n_23, o_23, t);
      }
  }
  p_58 = t;
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_59 = ATgetArgument(t, 0);
            {
              ATerm g_34 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(p_58);
              g_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_59);
              z_10 = t;
              t = SSLsetAnnotations(z_10, g_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_58;
          }
        LocalPopChoice(q_63);
        t = xtc_transform_file_2_0(q_23, t_23, t);
      }
    else
      {
        t = p_63;
        t = xtc_transform_term_2_0(u_23, x_23, t);
      }
  }
  t = if_keep5_1_0(y_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(b_24, t);
  o_34 = t;
  t = term_r_63;
  m_34 = t;
  t = o_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  n_34 = t;
  t = o_34;
  t = comp_0_2(m_34, n_34, t);
  t = if_keep6_1_0(d_24, t);
  o_58 = t;
  {
    ATerm s_63 = t;
    int t_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm r_34 = NULL,g_11 = NULL;
              t = SSLgetAnnotations(o_58);
              r_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              g_11 = t;
              t = SSLsetAnnotations(g_11, r_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_58;
          }
        LocalPopChoice(t_63);
        t = xtc_transform_file_2_0(h_24, i_24, t);
      }
    else
      {
        t = s_63;
        t = xtc_transform_term_2_0(j_24, m_24, t);
      }
  }
  t = if_keep6_1_0(n_24, t);
  n_58 = t;
  {
    ATerm u_63 = t;
    int v_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_59 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,n_11 = NULL;
              t = SSLgetAnnotations(n_58);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_59);
              n_11 = t;
              t = SSLsetAnnotations(n_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_58;
          }
        LocalPopChoice(v_63);
        t = xtc_transform_file_2_0(s_24, t_24, t);
      }
    else
      {
        t = u_63;
        t = xtc_transform_term_2_0(u_24, x_24, t);
      }
  }
  t = if_keep5_1_0(z_24, t);
  m_58 = t;
  {
    ATerm w_63 = t;
    int x_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_60 = ATgetArgument(t, 0);
            {
              ATerm j_35 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(m_58);
              j_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_60);
              n_12 = t;
              t = SSLsetAnnotations(n_12, j_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_58;
          }
        LocalPopChoice(x_63);
        t = xtc_transform_file_2_0(e_25, j_25, t);
      }
    else
      {
        t = w_63;
        t = xtc_transform_term_2_0(k_25, l_25, t);
      }
  }
  t = if_keep5_1_0(m_25, t);
  l_58 = t;
  {
    ATerm z_63 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_60 = ATgetArgument(t, 0);
            {
              ATerm o_35 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(l_58);
              o_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_60);
              o_12 = t;
              t = SSLsetAnnotations(o_12, o_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_58;
          }
        LocalPopChoice(b_64);
        t = xtc_transform_file_2_0(s_25, t_25, t);
      }
    else
      {
        t = z_63;
        t = xtc_transform_term_2_0(u_25, w_25, t);
      }
  }
  t = if_keep5_1_0(z_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm c_64 = t;
    int d_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL,a_61 = NULL,b_61 = NULL;
        x_60 = t;
        t = term_m_37;
        a_61 = t;
        t = term_h_40;
        b_61 = t;
        t = term_i_40;
        t = u_15(a_61, b_61, t);
        t = x_60;
        LocalPopChoice(d_64);
        {
          ATerm c_61 = NULL;
          c_61 = t;
          {
            ATerm f_64 = t;
            int g_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    t_61 = ATgetArgument(t, 0);
                    {
                      ATerm t_35 = NULL,p_12 = NULL;
                      t = SSLgetAnnotations(c_61);
                      t_35 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, t_61);
                      p_12 = t;
                      t = SSLsetAnnotations(p_12, t_35);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = c_61;
                  }
                LocalPopChoice(g_64);
                t = xtc_transform_file_2_0(c_26, d_26, t);
              }
            else
              {
                t = f_64;
                t = xtc_transform_term_2_0(e_26, f_26, t);
              }
          }
        }
      }
    else
      {
        t = c_64;
        {
          ATerm a_62 = NULL;
          a_62 = t;
          {
            ATerm i_64 = t;
            int j_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_62 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_62 = ATgetArgument(t, 0);
                    {
                      ATerm i_36 = NULL,r_12 = NULL;
                      t = SSLgetAnnotations(a_62);
                      i_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_62);
                      r_12 = t;
                      t = SSLsetAnnotations(r_12, i_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = a_62;
                  }
                LocalPopChoice(j_64);
                t = xtc_transform_file_2_0(h_26, i_26, t);
              }
            else
              {
                t = i_64;
                t = xtc_transform_term_2_0(j_26, m_26, t);
              }
          }
          t = if_keep2_1_0(n_26, t);
        }
      }
  }
  w_36 = t;
  t = term_k_64;
  r_36 = t;
  t = w_36;
  t = pass_warnings_0_0(t);
  v_36 = t;
  t = w_36;
  t = comp_0_2(r_36, v_36, t);
  k_58 = t;
  {
    ATerm l_64 = t;
    int n_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_62 = ATgetArgument(t, 0);
            {
              ATerm y_36 = NULL,s_12 = NULL;
              t = SSLgetAnnotations(k_58);
              y_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_62);
              s_12 = t;
              t = SSLsetAnnotations(s_12, y_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(n_64);
        t = xtc_transform_file_2_0(q_26, r_26, t);
      }
    else
      {
        t = l_64;
        t = xtc_transform_term_2_0(s_26, u_26, t);
      }
  }
  h_58 = t;
  {
    ATerm p_64 = t;
    int q_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_63 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_63 = ATgetArgument(t, 0);
            {
              ATerm f_37 = NULL,t_12 = NULL;
              t = SSLgetAnnotations(h_58);
              f_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_63);
              t_12 = t;
              t = SSLsetAnnotations(t_12, f_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_58;
          }
        LocalPopChoice(q_64);
        t = xtc_transform_file_2_0(v_26, a_27, t);
      }
    else
      {
        t = p_64;
        t = xtc_transform_term_2_0(b_27, d_27, t);
      }
  }
  t = if_keep2_1_0(f_27, t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm a_58 = NULL,f_58 = NULL,g_58 = NULL;
  a_58 = t;
  t = term_q_37;
  f_58 = t;
  t = (ATerm) ATinsert(CheckATermList(a_58), term_t_64);
  g_58 = t;
  t = SSL_printnl(f_58, g_58);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(a_58), term_t_64));
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_u_64;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm g_59 = NULL;
  t = pass_verbose_0_0(t);
  g_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), term_y_40);
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = term_u_64;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm h_59 = NULL;
  t = pass_verbose_0_0(t);
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), term_y_40);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_y_40);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_y_40);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = save_as_1_0(z_23, t);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = term_c_65;
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = save_as_1_0(c_24, t);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_f_65;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = save_as_1_0(e_24, t);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_g_65;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_h_65;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_y_40);
  return(t);
}
static ATerm j_24 (ATerm t)
{
  t = term_h_65;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_y_40);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = save_as_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_n_65;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_o_65;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm b_60 = NULL;
  t = pass_verbose_0_0(t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), term_y_40);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_o_65;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm c_60 = NULL;
  t = pass_verbose_0_0(t);
  c_60 = t;
  t = (ATerm) ATinsert(CheckATermList(c_60), term_y_40);
  return(t);
}
static ATerm z_24 (ATerm t)
{
  t = save_as_1_0(d_25, t);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_p_65;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_q_65;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm k_60 = NULL;
  t = pass_verbose_0_0(t);
  k_60 = t;
  t = (ATerm) ATinsert(CheckATermList(k_60), term_y_40);
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = term_q_65;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm m_60 = NULL;
  t = pass_verbose_0_0(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), term_y_40);
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = save_as_1_0(r_25, t);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_r_65;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = term_t_65;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm v_60 = NULL;
  t = pass_verbose_0_0(t);
  v_60 = t;
  t = (ATerm) ATinsert(CheckATermList(v_60), term_y_40);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_t_65;
  return(t);
}
static ATerm w_25 (ATerm t)
{
  ATerm w_60 = NULL;
  t = pass_verbose_0_0(t);
  w_60 = t;
  t = (ATerm) ATinsert(CheckATermList(w_60), term_y_40);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = save_as_1_0(a_26, t);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_u_65;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm x_61 = NULL;
  t = pass_verbose_0_0(t);
  x_61 = t;
  t = (ATerm) ATinsert(CheckATermList(x_61), term_y_40);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm z_61 = NULL;
  t = pass_verbose_0_0(t);
  z_61 = t;
  t = (ATerm) ATinsert(CheckATermList(z_61), term_y_40);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_v_65;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm i_62 = NULL;
  t = pass_verbose_0_0(t);
  i_62 = t;
  t = (ATerm) ATinsert(CheckATermList(i_62), term_y_40);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_v_65;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm j_62 = NULL;
  t = pass_verbose_0_0(t);
  j_62 = t;
  t = (ATerm) ATinsert(CheckATermList(j_62), term_y_40);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = save_as_1_0(p_26, t);
  return(t);
}
static ATerm p_26 (ATerm t)
{
  t = term_w_65;
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_y_65;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  ATerm t_62 = NULL;
  t = pass_verbose_0_0(t);
  t_62 = t;
  t = (ATerm) ATinsert(CheckATermList(t_62), term_y_40);
  return(t);
}
static ATerm s_26 (ATerm t)
{
  t = term_y_65;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm v_62 = NULL;
  t = pass_verbose_0_0(t);
  v_62 = t;
  t = (ATerm) ATinsert(CheckATermList(v_62), term_y_40);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_z_65;
  return(t);
}
static ATerm a_27 (ATerm t)
{
  ATerm i_63 = NULL;
  t = pass_verbose_0_0(t);
  i_63 = t;
  t = (ATerm) ATinsert(CheckATermList(i_63), term_y_40);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_z_65;
  return(t);
}
static ATerm d_27 (ATerm t)
{
  ATerm j_63 = NULL;
  t = pass_verbose_0_0(t);
  j_63 = t;
  t = (ATerm) ATinsert(CheckATermList(j_63), term_y_40);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = save_as_1_0(i_27, t);
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = term_d_66;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(t_22, t);
  t = profile_p__2_0(y_22, z_22, t);
  return(t);
}
static ATerm u_15 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm y_63 = NULL;
  t = lookup_table_0_1(i_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(j_58, y_63, t);
  return(t);
}
static ATerm u_14 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm a_64 = NULL,e_64 = NULL;
  e_64 = t;
  {
    ATerm e_66 = t;
    int f_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        t = u_15(u_56, v_56, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_66 = ATgetFirst((ATermList) t);
            a_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_66);
        {
          ATerm h_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, a_64);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(v_56, a_64, h_64, t);
          t = (ATerm) ATmakeAppl(sym__3, u_56, v_56, a_64);
        }
      }
    else
      {
        t = e_66;
        {
          ATerm m_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
          t = lookup_table_0_1(u_56, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_15(v_56, m_64, t);
          t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        }
      }
  }
  t = e_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm o_64 = NULL,r_64 = NULL,s_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  v_64 = t;
  t = h_122(t);
  s_64 = t;
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_64 = NULL;
        t = term_r_58;
        z_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_64, term_r_58);
        t = u_15(s_64, z_64, t);
        {
          ATerm l_66 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_66;
            }
        }
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_64 = ATgetFirst((ATermList) t);
      o_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_64, term_r_58, o_64);
  t = lookup_table_0_1(s_64, t);
  y_64 = t;
  t = term_r_58;
  w_64 = t;
  t = y_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(w_64, o_64, x_64, t);
  t = r_64;
  {
    static ATerm m_27 (ATerm t);
    static ATerm m_27 (ATerm t)
    {
      ATerm a_65 = NULL;
      a_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_64, a_65);
      t = u_14(s_64, a_65, t);
      return(t);
    }
    t = map_1_0(m_27, t);
  }
  t = v_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm t)
{
  ATerm n_66 = t;
  int o_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_101(t);
      t = i_101(t);
      LocalPopChoice(o_66);
    }
  else
    {
      t = n_66;
      t = i_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL;
  e_65 = t;
  t = g_122(t);
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_65, term_r_58);
  {
    ATerm r_66 = t;
    int s_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_66 = ATgetArgument(t, 0);
            ATerm v_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_58;
        s_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_65, term_r_58);
        t = u_15(d_65, s_65, t);
        LocalPopChoice(s_66);
      }
    else
      {
        t = r_66;
        t = (ATerm) ATempty;
      }
  }
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_65, term_r_58, (ATerm) ATinsert(CheckATermList(i_65), (ATerm) ATempty));
  t = lookup_table_0_1(d_65, t);
  m_65 = t;
  t = term_r_58;
  j_65 = t;
  t = (ATerm) ATinsert(CheckATermList(i_65), (ATerm) ATempty);
  k_65 = t;
  t = m_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(j_65, k_65, l_65, t);
  t = e_65;
  return(t);
}
static ATerm n_27 (ATerm t)
{
  t = term_c_59;
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm g_66 = NULL;
  g_66 = t;
  {
    ATerm x_66 = t;
    int i_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_66);
        LocalPopChoice(i_67);
      }
    else
      {
        t = x_66;
        t = g_66;
      }
  }
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_c_59;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_135 (ATerm), ATerm t)
{
  ATerm x_65 = NULL;
  static ATerm o_27 (ATerm t);
  static ATerm o_27 (ATerm t)
  {
    ATerm a_66 = NULL;
    a_66 = t;
    {
      ATerm j_67 = t;
      int k_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_66 = NULL,c_66 = NULL;
          t = term_c_59;
          b_66 = t;
          t = term_r_58;
          c_66 = t;
          t = term_f_60;
          t = u_15(b_66, c_66, t);
          LocalPopChoice(k_67);
        }
      else
        {
          t = j_67;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_65 != NULL) && (x_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_65 = ATgetFirst((ATermList) t);
        {
          ATerm o_67 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_65;
    t = map_1_0(q_27, t);
    t = a_66;
    t = end_scope_1_0(r_27, t);
    return(t);
  }
  t = begin_scope_1_0(n_27, t);
  t = restore_always_2_0(p_135, o_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm k_66 = NULL;
  k_66 = t;
  {
    ATerm s_67 = t;
    int a_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_66 = NULL,p_66 = NULL,q_66 = NULL;
        t = term_m_37;
        p_66 = t;
        t = term_n_37;
        q_66 = t;
        t = term_o_37;
        t = u_15(p_66, q_66, t);
        m_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_66, term_b_41);
        t = geq_0_0(t);
        t = k_66;
        t = a_126(t);
        LocalPopChoice(a_68);
      }
    else
      {
        t = s_67;
        t = k_66;
      }
  }
  return(t);
}
static ATerm w_14 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm b_68 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_43, r_43);
      LocalPopChoice(c_68);
    }
  else
    {
      t = b_68;
      t = SSL_addr(q_43, r_43);
    }
  return(t);
}
static ATerm y_14 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm d_68 = t;
  int e_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_43, x_43);
      LocalPopChoice(e_68);
    }
  else
    {
      t = d_68;
      t = SSL_subtr(w_43, x_43);
    }
  return(t);
}
static ATerm z_14 (ATerm w_68, ATerm y_68, ATerm a_69, ATerm c_69, ATerm x_68, ATerm z_68, ATerm b_69, ATerm d_69, ATerm t)
{
  ATerm u_66 = NULL,w_66 = NULL,y_66 = NULL,b_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_68, x_68);
  t = y_14(w_68, x_68, t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_68, z_68);
  t = y_14(y_68, z_68, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, b_69);
  t = y_14(a_69, b_69, t);
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_69, d_69);
  t = y_14(c_69, d_69, t);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_66, w_66, y_66, b_67);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_68 = ATgetArgument(t, 0);
      if(match_cons(f_68, sym__4))
        {
          l_67 = ATgetArgument(f_68, 0);
          m_67 = ATgetArgument(f_68, 1);
          n_67 = ATgetArgument(f_68, 2);
          p_67 = ATgetArgument(f_68, 3);
        }
      else
        _fail(t);
      {
        ATerm g_68 = ATgetArgument(t, 1);
        if(match_cons(g_68, sym__4))
          {
            q_67 = ATgetArgument(g_68, 0);
            r_67 = ATgetArgument(g_68, 1);
            t_67 = ATgetArgument(g_68, 2);
            u_67 = ATgetArgument(g_68, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_14(l_67, m_67, n_67, p_67, q_67, r_67, t_67, u_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t)
{
  ATerm v_67 = NULL,y_67 = NULL,z_67 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,m_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,s_68 = NULL,u_68 = NULL;
  k_68 = t;
  t = times_0_0(t);
  v_67 = t;
  t = k_68;
  t = o_129(t);
  y_67 = t;
  t = times_0_0(t);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_68, v_67);
  t = diff_times_0_0(t);
  i_68 = t;
  if(match_cons(t, sym__4))
    {
      q_68 = ATgetArgument(t, 0);
      {
        ATerm l_68 = ATgetArgument(t, 1);
      }
      s_68 = ATgetArgument(t, 2);
      {
        ATerm n_68 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_68, s_68);
  t = w_14(q_68, s_68, t);
  u_68 = t;
  t = SSL_TicksToSeconds(u_68);
  z_67 = t;
  t = i_68;
  if(match_cons(t, sym__4))
    {
      ATerm r_68 = ATgetArgument(t, 0);
      m_68 = ATgetArgument(t, 1);
      {
        ATerm t_68 = ATgetArgument(t, 2);
      }
      o_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_68, o_68);
  t = w_14(m_68, o_68, t);
  p_68 = t;
  t = SSL_TicksToSeconds(p_68);
  h_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_68), term_o_69), z_67), term_n_69);
  t = n_129(t);
  t = y_67;
  return(t);
}
ATerm debug_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm v_68 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  v_68 = t;
  t = m_108(t);
  e_69 = t;
  t = term_q_37;
  f_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_68), e_69);
  g_69 = t;
  t = SSL_printnl(f_69, g_69);
  t = v_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL;
  h_69 = t;
  t = term_m_37;
  l_69 = t;
  t = term_p_69;
  m_69 = t;
  t = term_s_69;
  t = u_15(l_69, m_69, t);
  i_69 = t;
  t = term_t_39;
  j_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_70), term_z_69), term_y_69), term_x_69), term_w_69), term_v_69), term_u_69), i_69), term_t_69);
  k_69 = t;
  t = SSL_printnl(j_69, k_69);
  t = h_69;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_69 = ATgetFirst((ATermList) t);
      r_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_69;
    }
  else
    {
      t = r_69;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_15 (ATerm x_25, ATerm c_227, ATerm t)
{
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    if((x_25 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = c_227;
  t = fetch_1_0(s_27, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  static ATerm l_70 (ATerm t);
  static ATerm l_70 (ATerm t)
  {
    ATerm b_70 = t;
    int c_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_109(t);
        LocalPopChoice(c_70);
      }
    else
      {
        t = b_70;
        {
          ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,t_37 = NULL,i_38 = NULL,n_13 = NULL;
          i_70 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_70 = ATgetFirst((ATermList) t);
              k_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_70);
          t_37 = t;
          t = k_70;
          t = l_70(t);
          i_38 = t;
          t = (ATerm) ATinsert(CheckATermList(i_38), j_70);
          n_13 = t;
          t = SSLsetAnnotations(n_13, t_37);
        }
      }
    return(t);
  }
  t = l_70(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL;
  static ATerm u_27 (ATerm t);
  static ATerm u_27 (ATerm t)
  {
    ATerm p_70 = NULL,r_70 = NULL,s_70 = NULL,x_70 = NULL,y_70 = NULL,b_71 = NULL,h_71 = NULL,j_71 = NULL,k_71 = NULL,u_13 = NULL,s_13 = NULL;
    k_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_70 = ATgetFirst((ATermList) t);
        b_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_71);
    x_70 = t;
    t = y_70;
    t = k_109(t);
    h_71 = t;
    t = (ATerm) ATinsert(CheckATermList(b_71), h_71);
    s_13 = t;
    t = SSLsetAnnotations(s_13, x_70);
    j_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_70 = ATgetFirst((ATermList) t);
        s_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_71);
    p_70 = t;
    t = s_70;
    if(((n_70 != NULL) && (n_70 != t)))
      _fail(t);
    else
      n_70 = t;
    t = (ATerm) ATinsert(CheckATermList(s_70), r_70);
    u_13 = t;
    t = SSLsetAnnotations(u_13, p_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(u_27, t);
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_70, not_null(n_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm w_71 = NULL,b_72 = NULL;
  ATerm d_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(u_118, t);
      LocalPopChoice(e_70);
    }
  else
    {
      t = d_70;
      {
        ATerm t_71 = NULL;
        t_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      w_71 = ATgetArgument(t, 0);
      b_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_72;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_70 = ATgetFirst((ATermList) t);
              ATerm g_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_72;
          t = list_tokenize_1_0(u_118, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_70 = ATgetFirst((ATermList) t);
          ATerm m_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_72;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, w_71);
        }
      else
        {
          ATerm o_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_70 = ATgetFirst((ATermList) t);
              ATerm t_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_72;
          t = list_tokenize_1_0(u_118, t);
          o_72 = t;
          t = (ATerm) ATinsert(CheckATermList(o_72), w_71);
        }
    }
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  t = SSL_implode_string(a_73);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,v_72 = NULL,w_72 = NULL,o_18 = NULL;
  w_72 = t;
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_72);
  r_72 = t;
  t = SSL_explode_string(t_72);
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_72, v_72);
  o_18 = t;
  t = SSLsetAnnotations(o_18, r_72);
  if(match_cons(t, sym__2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_72;
  {
    static ATerm w_27 (ATerm t);
    static ATerm w_27 (ATerm t)
    {
      ATerm x_72 = NULL;
      x_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_72, p_72);
      t = c_15(x_72, p_72, t);
      return(t);
    }
    t = list_tokenize_1_0(w_27, t);
  }
  t = map_1_0(x_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm u_70 = t;
    int v_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_39 = NULL;
        t = SSL_filemode(v_73);
        if(match_cons(t, sym__2))
          {
            c_39 = ATgetArgument(t, 0);
            {
              ATerm w_70 = ATgetArgument(t, 1);
              if(((ATgetType(w_70) != AT_INT) || (ATgetInt((ATermInt) w_70) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_39;
        LocalPopChoice(v_70);
      }
    else
      {
        t = u_70;
        {
          ATerm h_39 = NULL,i_39 = NULL;
          t = term_z_70;
          i_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_70, v_73);
          t = a_16(i_39, v_73, t);
          h_39 = t;
          t = SSL_perror(h_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm d_15 (ATerm c_63, ATerm b_63, ATerm t)
{
  ATerm y_73 = NULL,b_74 = NULL;
  b_74 = t;
  {
    ATerm a_71 = t;
    int c_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_74 = NULL,d_74 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_59);
        d_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_63, (ATerm) ATinsert(ATempty, term_i_59));
        t = q_15(b_63, d_74, t);
        t = filemode_0_0(t);
        c_74 = t;
        t = SSL_S_ISDIR(c_74);
        t = b_74;
        LocalPopChoice(c_71);
        {
          ATerm h_74 = NULL,i_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_d_71), c_63);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          h_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_74), term_e_71), b_63);
          i_74 = t;
          t = SSL_concat_strings(i_74);
        }
      }
    else
      {
        t = a_71;
        t = b_63;
      }
  }
  y_73 = t;
  t = SSL_copy(c_63, y_73);
  return(t);
}
static ATerm e_15 (ATerm o_61, ATerm t)
{
  t = SSL_hashtable_keys(o_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_74 = NULL,m_74 = NULL;
  static ATerm z_27 (ATerm t);
  static ATerm z_27 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL;
    n_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_74), n_74);
    t = u_15(not_null(j_74), n_74, t);
    o_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_74, o_74);
    return(t);
  }
  if(((j_74 != NULL) && (j_74 != t)))
    _fail(t);
  else
    j_74 = t;
  t = lookup_table_0_1(j_74, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_15(m_74, t);
  t = map_1_0(z_27, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_f_71;
  return(t);
}
static ATerm g_76 (ATerm u_74, ATerm t)
{
  ATerm y_74 = NULL,a_75 = NULL,b_75 = NULL;
  t = term_g_71;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_74);
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_71, (ATerm) ATmakeAppl(sym_Tool_1, u_74));
  t = u_15(a_75, b_75, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_71 = ATgetFirst((ATermList) t);
      if(match_cons(i_71, sym__2))
        {
          ATerm m_71 = ATgetArgument(i_71, 0);
          y_74 = ATgetArgument(i_71, 1);
        }
      else
        _fail(t);
      {
        ATerm l_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_74;
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = debug_1_0(e_28, t);
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_f_71;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_g_71;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_28, t);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = term_n_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_71 = t;
  int p_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
      t = if_verbose5_1_0(a_28, t);
      t = xtc_load_0_0(t);
      e_75 = t;
      if(match_cons(t, sym__2))
        {
          c_75 = ATgetArgument(t, 0);
          d_75 = ATgetArgument(t, 1);
          {
            ATerm q_71 = t;
            int r_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_75 = NULL,l_75 = NULL,n_75 = NULL;
                t = term_g_71;
                l_75 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_75);
                n_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_71, (ATerm) ATmakeAppl(sym_Tool_1, c_75));
                t = u_15(l_75, n_75, t);
                {
                  static ATerm c_28 (ATerm t);
                  static ATerm c_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_75 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_75 != NULL) && (k_75 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(c_28, t);
                }
                t = not_null(k_75);
                LocalPopChoice(r_71);
              }
            else
              {
                t = q_71;
                t = g_76(e_75, t);
              }
          }
        }
      else
        {
          t = g_76(e_75, t);
        }
      t = if_verbose5_1_0(d_28, t);
      LocalPopChoice(p_71);
    }
  else
    {
      t = o_71;
      {
        ATerm v_75 = NULL,m_39 = NULL,n_39 = NULL;
        v_75 = t;
        t = term_q_37;
        m_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_71), v_75), term_s_71);
        n_39 = t;
        t = SSL_printnl(m_39, n_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_71), v_75), term_s_71);
        t = if_verbose5_1_0(f_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_15 (ATerm f_67, ATerm e_67, ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,l_76 = NULL,n_76 = NULL;
  t = f_67;
  {
    ATerm v_71 = t;
    int x_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_76 = NULL;
        t = term_m_37;
        r_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_37, f_67);
        t = u_15(r_76, f_67, t);
        LocalPopChoice(x_71);
      }
    else
      {
        t = v_71;
        t = (ATerm) ATempty;
      }
  }
  j_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, j_76);
  t = conc_0_0(t);
  i_76 = t;
  t = term_m_37;
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, f_67, i_76);
  t = lookup_table_0_1(l_76, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(f_67, i_76, n_76, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, f_67, i_76);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
      t = term_q_39;
      t = q_0(t);
      c_77 = t;
      t = term_y_71;
      d_77 = t;
      t = term_z_71;
      e_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_71, term_z_71, c_77);
      t = v_15(d_77, e_77, c_77, t);
      _fail(t);
    }
  else
    {
      ATerm j_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_76 = ATgetFirst((ATermList) t);
          z_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_77 = ATgetFirst((ATermList) t);
          b_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_76;
      t = o_0(t);
      t = a_77;
      t = p_0(t);
      j_77 = t;
      t = (ATerm) ATinsert(CheckATermList(b_77), j_77);
    }
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  if(match_string(t, "-S"))
    {
      t = l_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_77;
    }
  return(t);
}
static ATerm i_28 (ATerm t)
{
  ATerm p_77 = NULL,r_77 = NULL;
  t = term_n_37;
  p_77 = t;
  t = term_e_37;
  r_77 = t;
  t = term_a_72;
  t = z_15(p_77, r_77, t);
  t = term_c_72;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_d_72;
  return(t);
}
static ATerm k_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,v_77 = NULL;
  s_77 = t;
  t = SSL_string_to_int(s_77);
  t_77 = t;
  t = term_n_37;
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_37, t_77);
  t = z_15(v_77, t_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_77);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_e_72;
  return(t);
}
static ATerm n_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_28 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL;
  t = term_f_72;
  w_77 = t;
  t = term_q_39;
  x_77 = t;
  t = term_g_72;
  t = z_15(w_77, x_77, t);
  t = term_h_72;
  return(t);
}
static ATerm p_28 (ATerm t)
{
  t = term_i_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_72 = t;
  int k_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_28, i_28, j_28, t);
      LocalPopChoice(k_72);
    }
  else
    {
      t = j_72;
      {
        ATerm l_72 = t;
        int m_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_28, l_28, m_28, t);
            LocalPopChoice(m_72);
          }
        else
          {
            t = l_72;
            t = Option_3_0(n_28, o_28, p_28, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,g_78 = NULL;
  b_78 = t;
  t = term_m_37;
  e_78 = t;
  t = term_f_38;
  g_78 = t;
  t = term_j_38;
  t = u_15(e_78, g_78, t);
  {
    static ATerm q_28 (ATerm t);
    static ATerm q_28 (ATerm t)
    {
      ATerm i_78 = NULL;
      i_78 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = b_78;
        }
      else
        {
          t = i_78;
        }
      return(t);
    }
    t = map_1_0(q_28, t);
  }
  c_78 = t;
  t = term_f_38;
  d_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, c_78);
  t = z_15(d_78, c_78, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm n_78 = NULL;
  n_78 = t;
  {
    ATerm n_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
        t = term_m_37;
        q_78 = t;
        t = term_n_37;
        r_78 = t;
        t = term_o_37;
        t = u_15(q_78, r_78, t);
        p_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_78, term_o_47);
        t = geq_0_0(t);
        t = n_78;
        t = e_126(t);
        LocalPopChoice(u_72);
      }
    else
      {
        t = n_72;
        t = n_78;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm w_78 = NULL;
  w_78 = t;
  {
    ATerm y_72 = t;
    int z_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
        t = term_m_37;
        a_79 = t;
        t = term_n_37;
        b_79 = t;
        t = term_o_37;
        t = u_15(a_79, b_79, t);
        z_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_78, term_t_44);
        t = geq_0_0(t);
        t = w_78;
        t = d_126(t);
        LocalPopChoice(z_72);
      }
    else
      {
        t = y_72;
        t = w_78;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_79 = NULL,r_79 = NULL,t_79 = NULL;
  o_79 = t;
  if(match_cons(t, sym__2))
    {
      r_79 = ATgetArgument(t, 0);
      t_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_73 = t;
    int c_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_79;
        if((r_79 != t))
          {
            _fail(t);
          }
        t = o_79;
        LocalPopChoice(c_73);
      }
    else
      {
        t = b_73;
        t = (ATerm) ATmakeAppl(sym__2, r_79, t_79);
        {
          ATerm d_73 = t;
          int e_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_79, t_79);
              LocalPopChoice(e_73);
            }
          else
            {
              t = d_73;
              t = SSL_gtr(r_79, t_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_79, t_79);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm x_79 = NULL;
  x_79 = t;
  {
    ATerm f_73 = t;
    int g_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_80 = NULL,c_80 = NULL,d_80 = NULL;
        t = term_m_37;
        c_80 = t;
        t = term_n_37;
        d_80 = t;
        t = term_o_37;
        t = u_15(c_80, d_80, t);
        a_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_80, term_a_50);
        t = geq_0_0(t);
        t = x_79;
        t = f_126(t);
        LocalPopChoice(g_73);
      }
    else
      {
        t = f_73;
        t = x_79;
      }
  }
  return(t);
}
static ATerm i_15 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
{
  t = m_113(t);
  {
    static ATerm r_28 (ATerm t);
    static ATerm r_28 (ATerm t)
    {
      ATerm g_80 = NULL;
      g_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_31, g_80);
      t = l_113(t);
      return(t);
    }
    t = fetch_1_0(r_28, t);
  }
  t = h_31;
  return(t);
}
static ATerm j_15 (ATerm i_113 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm b_81 (ATerm t);
  static ATerm b_81 (ATerm t)
  {
    ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
    u_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_80 = ATgetFirst((ATermList) t);
            w_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_73 = t;
          int i_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_80;
              {
                static ATerm t_28 (ATerm t);
                static ATerm t_28 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = i_15(i_113, t_28, v_80, w_80, t);
              }
              t = b_81(t);
              LocalPopChoice(i_73);
            }
          else
            {
              t = h_73;
              {
                ATerm u_40 = NULL,z_40 = NULL,v_18 = NULL;
                t = SSLgetAnnotations(u_80);
                u_40 = t;
                t = w_80;
                t = b_81(t);
                z_40 = t;
                t = (ATerm) ATinsert(CheckATermList(z_40), v_80);
                v_18 = t;
                t = SSLsetAnnotations(v_18, u_40);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = b_81(t);
  return(t);
}
static ATerm w_28 (ATerm t)
{
  ATerm p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      p_81 = ATgetArgument(t, 0);
      if((p_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm m_57, ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  {
    ATerm j_73 = t;
    int k_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_73 = ATgetArgument(t, 0);
            ATerm m_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
        t = u_15(m_57, n_57, t);
        LocalPopChoice(k_73);
      }
    else
      {
        t = j_73;
        t = (ATerm) ATempty;
      }
  }
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_81, o_57);
  t = j_15(w_28, h_81, o_57, t);
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_57, n_57, g_81);
  t = lookup_table_0_1(m_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(n_57, g_81, i_81, t);
  t = f_81;
  return(t);
}
static ATerm l_15 (ATerm w_123 (ATerm), ATerm w_57, ATerm v_57, ATerm t)
{
  static ATerm y_28 (ATerm t);
  static ATerm y_28 (ATerm t)
  {
    ATerm q_81 = NULL,r_81 = NULL;
    if(match_cons(t, sym__2))
      {
        q_81 = ATgetArgument(t, 0);
        r_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_57, q_81, r_81);
    t = w_123(t);
    return(t);
  }
  t = v_57;
  t = map_1_0(y_28, t);
  return(t);
}
static ATerm k_82 (ATerm b_82, ATerm t)
{
  t = SSL_fclose(b_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_82 = NULL,i_82 = NULL;
  i_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_82 = ATgetArgument(t, 0);
      {
        ATerm n_73 = t;
        int o_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_82);
            LocalPopChoice(o_73);
          }
        else
          {
            t = n_73;
            t = k_82(i_82, t);
          }
      }
    }
  else
    {
      t = k_82(i_82, t);
    }
  return(t);
}
static ATerm m_15 (ATerm b_25, ATerm t)
{
  t = SSL_read_term_from_stream(b_25);
  return(t);
}
static ATerm n_15 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_fopen(w_40, x_40);
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_82 = NULL;
  t = SSL_stdin_stream();
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_82 = NULL;
  t = SSL_stdout_stream();
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  t = SSL_stderr_stream();
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_82);
  return(t);
}
static ATerm k_84 (ATerm y_82, ATerm t)
{
  ATerm d_83 = NULL;
  t = SSL_explode_term(y_82);
  if(match_cons(t, sym__2))
    {
      ATerm p_73 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_73) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_73 = ATgetArgument(t, 1);
        if(((ATgetType(q_73) == AT_LIST) && !(ATisEmpty(q_73))))
          {
            d_83 = ATgetFirst((ATermList) q_73);
            {
              ATerm r_73 = (ATerm) ATgetNext((ATermList) q_73);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_84 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,r_83 = NULL,x_18 = NULL;
  t = SSLgetAnnotations(l_83);
  o_83 = t;
  t = j_83;
  if(match_cons(t, sym_Path_1))
    {
      r_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_83, k_83);
  x_18 = t;
  t = SSLsetAnnotations(x_18, o_83);
  if(match_cons(t, sym__2))
    {
      m_83 = ATgetArgument(t, 0);
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(m_83, n_83, t);
  return(t);
}
static ATerm m_84 (ATerm t_83, ATerm w_83, ATerm x_83, ATerm t)
{
  ATerm y_83 = NULL,b_84 = NULL,c_84 = NULL,f_84 = NULL,y_18 = NULL;
  t = SSLgetAnnotations(x_83);
  c_84 = t;
  t = SSL_is_string(t_83);
  f_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_84, w_83);
  y_18 = t;
  t = SSLsetAnnotations(y_18, c_84);
  if(match_cons(t, sym__2))
    {
      y_83 = ATgetArgument(t, 0);
      b_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(y_83, b_84, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL;
  h_84 = t;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
      {
        ATerm s_73 = t;
        int t_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_84(h_84, t);
            LocalPopChoice(t_73);
          }
        else
          {
            t = s_73;
            {
              ATerm u_73 = t;
              int w_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_84(i_84, j_84, h_84, t);
                  LocalPopChoice(w_73);
                }
              else
                {
                  t = u_73;
                  t = m_84(i_84, j_84, h_84, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_84(h_84, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,v_84 = NULL;
  v_84 = t;
  {
    ATerm x_73 = t;
    int z_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_84, term_a_74);
        t = o_15(t);
        LocalPopChoice(z_73);
      }
    else
      {
        t = x_73;
        {
          ATerm m_42 = NULL,o_42 = NULL;
          t = term_e_74;
          o_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_74, v_84);
          t = a_16(o_42, v_84, t);
          m_42 = t;
          t = SSL_perror(m_42);
          _fail(t);
        }
      }
  }
  p_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(q_84, t);
  o_84 = t;
  t = p_84;
  t = fclose_0_0(t);
  t = o_84;
  return(t);
}
static ATerm z_28 (ATerm t)
{
  t = term_f_74;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = term_g_74;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_74 = t;
  int l_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_84 = NULL,z_84 = NULL;
      y_84 = t;
      t = (ATerm) ATinsert(ATempty, term_p_74);
      z_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_84, (ATerm) ATinsert(ATempty, term_p_74));
      t = q_15(y_84, z_84, t);
      LocalPopChoice(l_74);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_74;
      {
        ATerm q_74 = t;
        int r_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_74 = t;
            if((PushChoice() == 0))
              {
                ATerm a_85 = NULL,b_85 = NULL;
                a_85 = t;
                t = (ATerm) ATinsert(ATempty, term_i_59);
                b_85 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_85, (ATerm) ATinsert(ATempty, term_i_59));
                t = q_15(a_85, b_85, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_74;
              }
            t = debug_1_0(z_28, t);
            LocalPopChoice(r_74);
          }
        else
          {
            t = q_74;
            t = debug_1_0(h_29, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = debug_1_0(j_29, t);
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_t_74;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  t = debug_1_0(l_29, t);
  return(t);
}
static ATerm l_29 (ATerm t)
{
  t = term_v_74;
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  x_85 = t;
  t = term_q_37;
  y_85 = t;
  t = (ATerm) ATinsert(ATempty, term_w_74);
  z_85 = t;
  t = SSL_printnl(y_85, z_85);
  t = x_85;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,g_86 = NULL;
  if(match_cons(t, sym__3))
    {
      a_86 = ATgetArgument(t, 0);
      b_86 = ATgetArgument(t, 1);
      g_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_15(a_86, b_86, g_86, t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  t = term_q_37;
  i_86 = t;
  t = (ATerm) ATinsert(ATempty, term_x_74);
  j_86 = t;
  t = SSL_printnl(i_86, j_86);
  t = h_86;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  t = term_q_37;
  m_86 = t;
  t = (ATerm) ATinsert(ATempty, term_w_74);
  n_86 = t;
  t = SSL_printnl(m_86, n_86);
  t = l_86;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,u_85 = NULL;
  c_85 = t;
  t = if_verbose5_1_0(i_29, t);
  {
    ATerm z_74 = t;
    if((PushChoice() == 0))
      {
        ATerm v_85 = NULL,w_85 = NULL;
        t = term_g_71;
        v_85 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_85);
        w_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_71, (ATerm) ATmakeAppl(sym_Imported_1, c_85));
        t = u_15(v_85, w_85, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_74;
      }
  }
  e_85 = t;
  t = term_g_71;
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_71, term_f_75, (ATerm) ATinsert(ATempty, c_85));
  t = lookup_table_0_1(p_85, t);
  u_85 = t;
  t = term_f_75;
  q_85 = t;
  t = (ATerm) ATinsert(ATempty, c_85);
  r_85 = t;
  t = u_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(q_85, r_85, s_85, t);
  t = e_85;
  t = if_verbose4_1_0(k_29, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_29, t);
  d_85 = t;
  t = term_g_71;
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_71, d_85);
  t = l_15(n_29, k_85, d_85, t);
  t = if_verbose6_1_0(o_29, t);
  t = term_g_71;
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_71, (ATerm)ATmakeAppl(sym_Imported_1, c_85), (ATerm) ATempty);
  t = lookup_table_0_1(f_85, t);
  j_85 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_85);
  g_85 = t;
  t = (ATerm) ATempty;
  h_85 = t;
  t = j_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(g_85, h_85, i_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_71, (ATerm)ATmakeAppl(sym_Imported_1, c_85), (ATerm) ATempty);
  t = if_verbose4_1_0(r_29, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL;
  b_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_87;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_87 = ATgetFirst((ATermList) t);
          d_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_75 = t;
        int h_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_43 = NULL,k_43 = NULL,m_43 = NULL,k_19 = NULL;
            t = SSLgetAnnotations(b_87);
            f_43 = t;
            t = c_87;
            t = a_117(t);
            k_43 = t;
            t = d_87;
            t = filter_1_0(a_117, t);
            m_43 = t;
            t = (ATerm) ATinsert(CheckATermList(m_43), k_43);
            k_19 = t;
            t = SSLsetAnnotations(k_19, f_43);
            LocalPopChoice(h_75);
          }
        else
          {
            t = g_75;
            t = d_87;
            t = filter_1_0(a_117, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  static ATerm g_87 (ATerm t);
  static ATerm g_87 (ATerm t)
  {
    ATerm i_75 = t;
    int j_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        t = g_87(t);
        LocalPopChoice(j_75);
      }
    else
      {
        t = i_75;
        t = m_101(t);
      }
    return(t);
  }
  t = g_87(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_75 = t;
  int o_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_87 = NULL,i_87 = NULL;
      t = term_m_37;
      h_87 = t;
      t = term_p_75;
      i_87 = t;
      t = term_q_75;
      t = u_15(h_87, i_87, t);
      LocalPopChoice(o_75);
    }
  else
    {
      t = m_75;
      {
        ATerm r_75 = t;
        int s_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_87 = NULL;
            t = term_t_75;
            j_87 = t;
            t = SSL_getenv(j_87);
            LocalPopChoice(s_75);
          }
        else
          {
            t = r_75;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = debug_1_0(b_30, t);
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = term_u_75;
  return(t);
}
static ATerm g_30 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  t = term_g_71;
  r_87 = t;
  t = term_w_75;
  s_87 = t;
  t = term_x_75;
  t = u_15(r_87, s_87, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_75 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_75;
      }
  }
  return(t);
}
static ATerm h_30 (ATerm t)
{
  t = debug_1_0(j_30, t);
  return(t);
}
static ATerm j_30 (ATerm t)
{
  t = term_z_75;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_87 = NULL;
  t = if_verbose5_1_0(w_29, t);
  l_87 = t;
  {
    ATerm a_76 = t;
    int b_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_87 = NULL,n_87 = NULL;
        t = term_g_71;
        m_87 = t;
        t = term_f_75;
        n_87 = t;
        t = term_c_76;
        t = u_15(m_87, n_87, t);
        LocalPopChoice(b_76);
      }
    else
      {
        t = a_76;
        {
          ATerm o_87 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_87 = t;
          t = repeat_2_0(g_30, _id, t);
          t = o_87;
        }
      }
  }
  t = l_87;
  t = if_verbose5_1_0(h_30, t);
  return(t);
}
static ATerm n_88 (ATerm y_87, ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,d_88 = NULL;
  t = term_g_71;
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_87);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_71, (ATerm) ATmakeAppl(sym_Tool_1, y_87));
  t = u_15(b_88, d_88, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_76 = ATgetFirst((ATermList) t);
      if(match_cons(d_76, sym__2))
        {
          ATerm f_76 = ATgetArgument(d_76, 0);
          a_88 = ATgetArgument(d_76, 1);
        }
      else
        _fail(t);
      {
        ATerm e_76 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_88;
  return(t);
}
static ATerm o_30 (ATerm t)
{
  t = debug_1_0(p_30, t);
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_f_71;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm e_88 = NULL,g_88 = NULL,h_88 = NULL;
  t = xtc_load_0_0(t);
  h_88 = t;
  if(match_cons(t, sym__2))
    {
      e_88 = ATgetArgument(t, 0);
      g_88 = ATgetArgument(t, 1);
      {
        ATerm h_76 = t;
        int k_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
            t = term_g_71;
            l_88 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, e_88);
            m_88 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_g_71, (ATerm) ATmakeAppl(sym_Tool_1, e_88));
            t = u_15(l_88, m_88, t);
            {
              static ATerm k_30 (ATerm t);
              static ATerm k_30 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((g_88 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((k_88 != NULL) && (k_88 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_30, t);
            }
            t = not_null(k_88);
            LocalPopChoice(k_76);
          }
        else
          {
            t = h_76;
            t = n_88(h_88, t);
          }
      }
    }
  else
    {
      t = n_88(h_88, t);
    }
  t = if_verbose5_1_0(o_30, t);
  return(t);
}
static ATerm p_15 (ATerm c_67, ATerm d_67, ATerm t)
{
  ATerm m_76 = t;
  int o_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_88 = NULL,p_88 = NULL,r_88 = NULL;
      t = term_m_37;
      r_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_37, c_67);
      t = u_15(r_88, c_67, t);
      t = term_m_37;
      o_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_37, c_67);
      t = lookup_table_0_1(o_88, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          p_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_15(c_67, p_88, t);
      t = (ATerm) ATmakeAppl(sym__2, term_m_37, c_67);
      LocalPopChoice(o_76);
    }
  else
    {
      t = m_76;
      t = (ATerm) ATmakeAppl(sym__2, c_67, d_67);
      t = z_15(c_67, d_67, t);
    }
  return(t);
}
static ATerm q_15 (ATerm k_40, ATerm l_40, ATerm t)
{
  t = SSL_access(k_40, l_40);
  return(t);
}
ATerm at_end_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  static ATerm w_89 (ATerm t);
  static ATerm w_89 (ATerm t)
  {
    ATerm q_89 = NULL,t_89 = NULL,u_89 = NULL;
    u_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_89 = ATgetFirst((ATermList) t);
        t_89 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_44 = NULL,h_44 = NULL,o_19 = NULL;
          t = SSLgetAnnotations(u_89);
          d_44 = t;
          t = t_89;
          t = w_89(t);
          h_44 = t;
          t = (ATerm) ATinsert(CheckATermList(h_44), q_89);
          o_19 = t;
          t = SSLsetAnnotations(o_19, d_44);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_89;
        t = o_109(t);
      }
    return(t);
  }
  t = w_89(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_88 = NULL,x_88 = NULL,y_88 = NULL;
  v_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_88;
    }
  else
    {
      static ATerm s_30 (ATerm t);
      static ATerm s_30 (ATerm t)
      {
        t = not_null(y_88);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_88 = ATgetFirst((ATermList) t);
          if(((y_88 != NULL) && (y_88 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_88;
      t = at_end_1_0(s_30, t);
    }
  return(t);
}
static ATerm o_90 (ATerm c_90, ATerm t)
{
  ATerm e_90 = NULL;
  t = SSL_explode_term(c_90);
  if(match_cons(t, sym__2))
    {
      ATerm p_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_90;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_90 = NULL,k_90 = NULL,l_90 = NULL;
  l_90 = t;
  if(match_cons(t, sym__2))
    {
      h_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
      {
        ATerm q_76 = t;
        int s_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_30 (ATerm t);
            static ATerm u_30 (ATerm t)
            {
              t = k_90;
              return(t);
            }
            t = h_90;
            t = at_end_1_0(u_30, t);
            LocalPopChoice(s_76);
          }
        else
          {
            t = q_76;
            t = o_90(l_90, t);
          }
      }
    }
  else
    {
      t = o_90(l_90, t);
    }
  return(t);
}
static ATerm r_15 (ATerm g_67, ATerm h_67, ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  t = g_67;
  {
    ATerm t_76 = t;
    int u_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_90 = NULL;
        t = term_m_37;
        x_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_37, g_67);
        t = u_15(x_90, g_67, t);
        LocalPopChoice(u_76);
      }
    else
      {
        t = t_76;
        t = (ATerm) ATempty;
      }
  }
  s_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_90, h_67);
  t = conc_0_0(t);
  r_90 = t;
  t = term_m_37;
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, g_67, r_90);
  t = lookup_table_0_1(t_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(g_67, r_90, u_90, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, g_67, r_90);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm a_91 = NULL;
  a_91 = t;
  if(match_string(t, "-o"))
    {
      t = a_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_91;
    }
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL;
  b_91 = t;
  t = term_b_38;
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_38, b_91);
  t = z_15(c_91, b_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_91);
  return(t);
}
static ATerm b_31 (ATerm t)
{
  t = term_v_76;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_30, a_31, b_31, t);
  return(t);
}
static ATerm f_31 (ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  if(match_string(t, "-i"))
    {
      t = g_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_91;
    }
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL;
  i_91 = t;
  t = term_x_55;
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_55, i_91);
  t = z_15(j_91, i_91, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_91);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_w_76;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_31, g_31, j_31, t);
  return(t);
}
static ATerm l_31 (ATerm t)
{
  ATerm c_92 = NULL;
  c_92 = t;
  if(match_string(t, "-I"))
    {
      t = c_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = c_92;
    }
  return(t);
}
static ATerm m_31 (ATerm t)
{
  ATerm d_92 = NULL,g_92 = NULL,h_92 = NULL;
  d_92 = t;
  t = term_v_61;
  g_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_92), term_v_61);
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_61, (ATerm) ATinsert(ATinsert(ATempty, d_92), term_v_61));
  t = r_15(g_92, h_92, t);
  t = term_q_39;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_x_76;
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  if(match_string(t, "--main"))
    {
      t = i_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = i_92;
    }
  return(t);
}
static ATerm p_31 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL;
  l_92 = t;
  t = term_r_59;
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_59, l_92);
  t = z_15(m_92, l_92, t);
  t = term_q_39;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  t = term_f_77;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm n_92 = NULL;
  n_92 = t;
  if(match_string(t, "--library"))
    {
      t = n_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = n_92;
    }
  return(t);
}
static ATerm s_31 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL;
  t = term_h_40;
  o_92 = t;
  t = term_q_39;
  p_92 = t;
  t = term_g_77;
  t = z_15(o_92, p_92, t);
  t = term_q_39;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  t = term_h_77;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_31 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  q_92 = t;
  t = term_d_40;
  r_92 = t;
  t = (ATerm) ATinsert(ATempty, q_92);
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, (ATerm) ATinsert(ATempty, q_92));
  t = r_15(r_92, s_92, t);
  t = term_q_39;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_i_77;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  t = term_a_39;
  u_92 = t;
  t = (ATerm) ATinsert(ATempty, t_92);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, t_92));
  t = f_15(u_92, v_92, t);
  t = term_q_39;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_k_77;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  w_92 = t;
  t = term_m_77;
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_77, w_92);
  t = a_16(a_93, w_92, t);
  x_92 = t;
  t = term_d_39;
  y_92 = t;
  t = (ATerm) ATinsert(ATempty, x_92);
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, (ATerm) ATinsert(ATempty, x_92));
  t = f_15(y_92, z_92, t);
  t = term_q_39;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_q_77;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  b_93 = t;
  t = term_u_77;
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_77, b_93);
  t = a_16(f_93, b_93, t);
  c_93 = t;
  t = term_f_38;
  d_93 = t;
  t = (ATerm) ATinsert(ATempty, c_93);
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, c_93));
  t = f_15(d_93, e_93, t);
  t = term_q_39;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_y_77;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  g_93 = t;
  t = term_z_77;
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_77, g_93);
  t = a_16(k_93, g_93, t);
  h_93 = t;
  t = term_f_38;
  i_93 = t;
  t = (ATerm) ATinsert(ATempty, h_93);
  j_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, h_93));
  t = f_15(i_93, j_93, t);
  t = term_q_39;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = term_a_78;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  l_93 = t;
  {
    ATerm f_78 = t;
    int h_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_93 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_59);
        p_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_93, (ATerm) ATinsert(ATempty, term_i_59));
        t = q_15(l_93, p_93, t);
        LocalPopChoice(h_78);
      }
    else
      {
        t = f_78;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_78), l_93), term_j_78);
        {
          ATerm l_78 = t;
          int m_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_44 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_78), l_93), term_j_78);
              w_44 = t;
              t = SSL_concat_strings(w_44);
              t = xtc_find_0_0(t);
              LocalPopChoice(m_78);
            }
          else
            {
              t = l_78;
              {
                ATerm t_93 = NULL;
                t = term_b_41;
                t_93 = t;
                t = SSL_exit(t_93);
              }
            }
        }
      }
  }
  m_93 = t;
  t = term_f_38;
  n_93 = t;
  t = (ATerm) ATinsert(ATempty, m_93);
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, m_93));
  t = f_15(n_93, o_93, t);
  t = term_q_39;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_o_78;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,b_94 = NULL,c_94 = NULL;
  w_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_78), w_93), term_s_78);
  c_94 = t;
  t = SSL_concat_strings(c_94);
  x_93 = t;
  t = term_d_39;
  y_93 = t;
  t = (ATerm) ATinsert(ATempty, x_93);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, (ATerm) ATinsert(ATempty, x_93));
  t = f_15(y_93, b_94, t);
  t = term_q_39;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_u_78;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL;
  t = term_f_39;
  d_94 = t;
  t = term_q_39;
  e_94 = t;
  t = term_v_78;
  t = z_15(d_94, e_94, t);
  t = term_q_39;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_x_78;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm f_94 = NULL,i_94 = NULL;
  t = term_e_61;
  f_94 = t;
  t = term_q_39;
  i_94 = t;
  t = term_y_78;
  t = z_15(f_94, i_94, t);
  t = term_q_39;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_c_79;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_33 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_i_56;
  j_94 = t;
  t = term_q_39;
  k_94 = t;
  t = term_d_79;
  t = z_15(j_94, k_94, t);
  t = term_q_39;
  return(t);
}
static ATerm g_33 (ATerm t)
{
  t = term_e_79;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
  l_94 = t;
  t = SSL_string_to_int(l_94);
  m_94 = t;
  t = term_v_43;
  n_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, m_94);
  t = z_15(n_94, m_94, t);
  t = term_q_39;
  return(t);
}
static ATerm k_33 (ATerm t)
{
  t = term_f_79;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_33 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  t = SSL_string_to_int(q_94);
  r_94 = t;
  t = term_c_44;
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_44, r_94);
  t = z_15(s_94, r_94, t);
  t = term_q_39;
  return(t);
}
static ATerm n_33 (ATerm t)
{
  t = term_g_79;
  return(t);
}
static ATerm o_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_33 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL;
  t = term_m_45;
  v_94 = t;
  t = term_q_39;
  w_94 = t;
  t = term_h_79;
  t = p_15(v_94, w_94, t);
  t = term_q_39;
  return(t);
}
static ATerm q_33 (ATerm t)
{
  t = term_i_79;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_33 (ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL;
  x_94 = t;
  if(match_string(t, "old"))
    {
      t = x_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = x_94;
    }
  t = term_f_57;
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_57, x_94);
  t = z_15(y_94, x_94, t);
  t = term_q_39;
  return(t);
}
static ATerm z_33 (ATerm t)
{
  t = term_j_79;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_q_39;
  return(t);
}
static ATerm h_34 (ATerm t)
{
  t = term_k_79;
  return(t);
}
static ATerm i_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_34 (ATerm t)
{
  t = term_l_79;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_q_39;
  return(t);
}
static ATerm p_34 (ATerm t)
{
  t = term_m_79;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  ATerm c_95 = NULL;
  c_95 = t;
  if(match_string(t, "-h"))
    {
      t = c_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = c_95;
    }
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm d_95 = NULL,g_95 = NULL;
  t = term_n_79;
  d_95 = t;
  t = term_q_39;
  g_95 = t;
  t = term_p_79;
  t = z_15(d_95, g_95, t);
  t = term_q_39;
  return(t);
}
static ATerm w_34 (ATerm t)
{
  t = term_q_79;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  t = term_s_79;
  h_95 = t;
  t = term_q_39;
  i_95 = t;
  t = term_u_79;
  t = z_15(h_95, i_95, t);
  t = term_q_39;
  return(t);
}
static ATerm d_35 (ATerm t)
{
  t = term_v_79;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  ATerm j_95 = NULL;
  j_95 = t;
  if(match_string(t, "-v"))
    {
      t = j_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = j_95;
    }
  return(t);
}
static ATerm h_35 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL;
  t = term_w_79;
  k_95 = t;
  t = term_q_39;
  l_95 = t;
  t = term_y_79;
  t = z_15(k_95, l_95, t);
  t = term_q_39;
  return(t);
}
static ATerm i_35 (ATerm t)
{
  t = term_z_79;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  if(match_string(t, "--warning"))
    {
      t = m_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = m_95;
    }
  return(t);
}
static ATerm l_35 (ATerm t)
{
  ATerm n_95 = NULL;
  n_95 = t;
  {
    ATerm b_80 = t;
    int e_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,v_95 = NULL,w_95 = NULL,q_19 = NULL;
        t = term_m_37;
        q_95 = t;
        t = term_c_56;
        r_95 = t;
        t = term_d_56;
        t = u_15(q_95, r_95, t);
        w_95 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_95 = ATgetFirst((ATermList) t);
            v_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_95);
        s_95 = t;
        t = t_95;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = v_95;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_95), t_95);
        q_19 = t;
        t = SSLsetAnnotations(q_19, s_95);
        t = term_c_56;
        o_95 = t;
        t = (ATerm) ATinsert(ATempty, n_95);
        p_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_56, (ATerm) ATinsert(ATempty, n_95));
        t = z_15(o_95, p_95, t);
        LocalPopChoice(e_80);
      }
    else
      {
        t = b_80;
        {
          ATerm x_95 = NULL,y_95 = NULL;
          t = term_c_56;
          x_95 = t;
          t = (ATerm) ATinsert(ATempty, n_95);
          y_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_56, (ATerm) ATinsert(ATempty, n_95));
          t = f_15(x_95, y_95, t);
        }
      }
  }
  t = term_q_39;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_f_80;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,d_96 = NULL;
  z_95 = t;
  t = term_b_57;
  a_96 = t;
  t = term_b_41;
  d_96 = t;
  t = term_h_80;
  t = z_15(a_96, d_96, t);
  t = z_95;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_b_57;
  return(t);
}
static ATerm r_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_35 (ATerm t)
{
  ATerm e_96 = NULL,h_96 = NULL,i_96 = NULL;
  e_96 = t;
  t = term_d_57;
  h_96 = t;
  t = term_e_37;
  i_96 = t;
  t = term_i_80;
  t = z_15(h_96, i_96, t);
  t = e_96;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm v_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_35 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  t = term_h_62;
  j_96 = t;
  t = term_q_39;
  k_96 = t;
  t = term_j_80;
  t = z_15(j_96, k_96, t);
  t = term_q_39;
  return(t);
}
static ATerm x_35 (ATerm t)
{
  t = term_k_80;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm l_80 = t;
  int m_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_80);
    }
  else
    {
      t = l_80;
      {
        ATerm n_80 = t;
        int o_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_80);
          }
        else
          {
            t = n_80;
            {
              ATerm p_80 = t;
              int q_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(l_31, m_31, n_31, t);
                  LocalPopChoice(q_80);
                }
              else
                {
                  t = p_80;
                  {
                    ATerm r_80 = t;
                    int s_80 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(o_31, p_31, q_31, t);
                        LocalPopChoice(s_80);
                      }
                    else
                      {
                        t = r_80;
                        {
                          ATerm t_80 = t;
                          int x_80 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(r_31, s_31, t_31, t);
                              LocalPopChoice(x_80);
                            }
                          else
                            {
                              t = t_80;
                              {
                                ATerm y_80 = t;
                                int z_80 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(u_31, v_31, w_31, t);
                                    LocalPopChoice(z_80);
                                  }
                                else
                                  {
                                    t = y_80;
                                    {
                                      ATerm a_81 = t;
                                      int c_81 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(x_31, y_31, z_31, t);
                                          LocalPopChoice(c_81);
                                        }
                                      else
                                        {
                                          t = a_81;
                                          {
                                            ATerm d_81 = t;
                                            int e_81 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(a_32, b_32, e_32, t);
                                                LocalPopChoice(e_81);
                                              }
                                            else
                                              {
                                                t = d_81;
                                                {
                                                  ATerm j_81 = t;
                                                  int k_81 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(f_32, g_32, k_32, t);
                                                      LocalPopChoice(k_81);
                                                    }
                                                  else
                                                    {
                                                      t = j_81;
                                                      {
                                                        ATerm l_81 = t;
                                                        int m_81 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(l_32, m_32, n_32, t);
                                                            LocalPopChoice(m_81);
                                                          }
                                                        else
                                                          {
                                                            t = l_81;
                                                            {
                                                              ATerm n_81 = t;
                                                              int o_81 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(p_32, q_32, r_32, t);
                                                                  LocalPopChoice(o_81);
                                                                }
                                                              else
                                                                {
                                                                  t = n_81;
                                                                  {
                                                                    ATerm s_81 = t;
                                                                    int t_81 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(s_32, u_32, v_32, t);
                                                                        LocalPopChoice(t_81);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_81;
                                                                        {
                                                                          ATerm u_81 = t;
                                                                          int v_81 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(w_32, x_32, y_32, t);
                                                                              LocalPopChoice(v_81);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_81;
                                                                              {
                                                                                ATerm w_81 = t;
                                                                                int x_81 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(z_32, a_33, b_33, t);
                                                                                    LocalPopChoice(x_81);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_81;
                                                                                    {
                                                                                      ATerm y_81 = t;
                                                                                      int z_81 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(d_33, f_33, g_33, t);
                                                                                          LocalPopChoice(z_81);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_81;
                                                                                          {
                                                                                            ATerm a_82 = t;
                                                                                            int c_82 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(h_33, i_33, k_33, t);
                                                                                                LocalPopChoice(c_82);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_82;
                                                                                                {
                                                                                                  ATerm d_82 = t;
                                                                                                  int e_82 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(l_33, m_33, n_33, t);
                                                                                                      LocalPopChoice(e_82);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_82;
                                                                                                      {
                                                                                                        ATerm f_82 = t;
                                                                                                        int h_82 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(o_33, p_33, q_33, t);
                                                                                                            LocalPopChoice(h_82);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_82;
                                                                                                            {
                                                                                                              ATerm j_82 = t;
                                                                                                              int m_82 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(r_33, v_33, z_33, t);
                                                                                                                  LocalPopChoice(m_82);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_82;
                                                                                                                  {
                                                                                                                    ATerm o_82 = t;
                                                                                                                    int p_82 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(a_34, c_34, h_34, t);
                                                                                                                        LocalPopChoice(p_82);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_82;
                                                                                                                        {
                                                                                                                          ATerm s_82 = t;
                                                                                                                          int t_82 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm a_95 = NULL;
                                                                                                                              a_95 = t;
                                                                                                                              t = term_l_79;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = a_95;
                                                                                                                              t = Option_3_0(i_34, j_34, p_34, t);
                                                                                                                              LocalPopChoice(t_82);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_82;
                                                                                                                              {
                                                                                                                                ATerm u_82 = t;
                                                                                                                                int v_82 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
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
                                                                                                                                          t = Option_3_0(s_34, v_34, w_34, t);
                                                                                                                                          LocalPopChoice(x_82);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = w_82;
                                                                                                                                          {
                                                                                                                                            ATerm z_82 = t;
                                                                                                                                            int a_83 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(x_34, y_34, d_35, t);
                                                                                                                                                LocalPopChoice(a_83);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = z_82;
                                                                                                                                                {
                                                                                                                                                  ATerm b_83 = t;
                                                                                                                                                  int c_83 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(g_35, h_35, i_35, t);
                                                                                                                                                      LocalPopChoice(c_83);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_83;
                                                                                                                                                      {
                                                                                                                                                        ATerm e_83 = t;
                                                                                                                                                        int f_83 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = ArgOption_3_0(k_35, l_35, m_35, t);
                                                                                                                                                            LocalPopChoice(f_83);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = e_83;
                                                                                                                                                            {
                                                                                                                                                              ATerm g_83 = t;
                                                                                                                                                              int h_83 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(n_35, p_35, q_35, t);
                                                                                                                                                                  LocalPopChoice(h_83);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = g_83;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm i_83 = t;
                                                                                                                                                                    int p_83 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(r_35, s_35, u_35, t);
                                                                                                                                                                        LocalPopChoice(p_83);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = i_83;
                                                                                                                                                                        t = Option_3_0(v_35, w_35, x_35, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm s_15 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm p_96 = NULL;
  t = SSL_hashtable_remove(n_61, m_61);
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_96);
  return(t);
}
static ATerm t_15 (ATerm r_61, ATerm t)
{
  ATerm q_96 = NULL;
  t = SSL_hashtable_destroy(r_61);
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_96);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL;
  u_96 = t;
  t = table_hashtable_0_0(t);
  x_96 = t;
  t = lookup_table_0_1(u_96, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(z_96, t);
  t = x_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(u_96, y_96, t);
  t = u_96;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_84), term_w_69), term_s_84), term_r_84), term_n_84), term_w_69), term_g_84), term_e_84), term_d_84), term_a_84), term_z_83), term_v_83), term_u_83), term_s_83), term_q_83);
  return(t);
}
ATerm map_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  static ATerm c_98 (ATerm t);
  static ATerm c_98 (ATerm t)
  {
    ATerm x_97 = NULL,y_97 = NULL,b_98 = NULL;
    x_97 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_97;
      }
    else
      {
        ATerm b_45 = NULL,g_45 = NULL,h_45 = NULL,s_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_97 = ATgetFirst((ATermList) t);
            b_98 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_97);
        b_45 = t;
        t = y_97;
        t = x_108(t);
        g_45 = t;
        t = b_98;
        t = c_98(t);
        h_45 = t;
        t = (ATerm) ATinsert(CheckATermList(h_45), g_45);
        s_19 = t;
        t = SSLsetAnnotations(s_19, b_45);
      }
    return(t);
  }
  t = c_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_98 = NULL,l_98 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_98 = ATgetFirst((ATermList) t);
      l_98 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_98 = NULL,q_98 = NULL;
        static ATerm y_35 (ATerm t);
        static ATerm y_35 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_98)), not_null(q_98));
          return(t);
        }
        t = l_98;
        t = l_0(t);
        if(((p_98 != NULL) && (p_98 != t)))
          _fail(t);
        else
          p_98 = t;
        t = g_98;
        t = j_0(t);
        if(((q_98 != NULL) && (q_98 != t)))
          _fail(t);
        else
          q_98 = t;
        t = l_98;
        t = reverse_acc_2_0(j_0, y_35, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_39;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_98 = NULL;
  t = term_q_39;
  t = h_0(t);
  t_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_85), t_98), term_m_85), term_w_69), term_l_85), term_w_69), term_x_84), term_w_84), term_w_69), term_u_84);
  return(t);
}
static ATerm b_36 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_36 (ATerm t)
{
  ATerm q_99 = NULL;
  q_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_99), term_o_85);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,e_99 = NULL;
  ATerm t_85 = t;
  int c_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_99 = NULL,h_99 = NULL;
      t = term_m_37;
      g_99 = t;
      t = term_d_86;
      h_99 = t;
      t = term_e_86;
      t = u_15(g_99, h_99, t);
      y_98 = t;
      LocalPopChoice(c_86);
    }
  else
    {
      t = t_85;
      {
        static ATerm z_35 (ATerm t);
        static ATerm z_35 (ATerm t)
        {
          ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,u_19 = NULL;
          k_99 = t;
          if(match_cons(t, sym_Program_1))
            {
              j_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_99);
          i_99 = t;
          t = j_99;
          if(((y_98 != NULL) && (y_98 != t)))
            _fail(t);
          else
            y_98 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, j_99);
          u_19 = t;
          t = SSLsetAnnotations(u_19, i_99);
          return(t);
        }
        t = fetch_1_0(z_35, t);
      }
    }
  {
    ATerm f_86 = t;
    int k_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_36 (ATerm t);
        static ATerm a_36 (ATerm t)
        {
          t = not_null(y_98);
          return(t);
        }
        t = short_description_1_0(a_36, t);
        t = echo_0_0(t);
        LocalPopChoice(k_86);
      }
    else
      {
        t = f_86;
      }
  }
  t = term_o_86;
  t = echo_0_0(t);
  t = term_y_71;
  z_98 = t;
  t = term_z_71;
  e_99 = t;
  t = term_p_86;
  t = u_15(z_98, e_99, t);
  t = reverse_acc_2_0(_id, b_36, t);
  t = map_1_0(c_36, t);
  {
    ATerm q_86 = t;
    int r_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_99 = NULL;
        static ATerm d_36 (ATerm t);
        static ATerm d_36 (ATerm t)
        {
          t = not_null(y_98);
          return(t);
        }
        t = long_description_1_0(d_36, t);
        r_99 = t;
        t = (ATerm) ATinsert(CheckATermList(r_99), term_w_69);
        t = echo_0_0(t);
        LocalPopChoice(r_86);
      }
    else
      {
        t = q_86;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  static ATerm p_101 (ATerm t);
  static ATerm p_101 (ATerm t)
  {
    ATerm j_101 = NULL,k_101 = NULL,o_101 = NULL;
    j_101 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_101 = ATgetFirst((ATermList) t);
        o_101 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_86 = t;
      int t_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_45 = NULL,b_46 = NULL,x_19 = NULL;
          t = SSLgetAnnotations(j_101);
          q_45 = t;
          t = k_101;
          t = h_109(t);
          b_46 = t;
          t = (ATerm) ATinsert(CheckATermList(o_101), b_46);
          x_19 = t;
          t = SSLsetAnnotations(x_19, q_45);
          LocalPopChoice(t_86);
        }
      else
        {
          t = s_86;
          {
            ATerm q_46 = NULL,x_46 = NULL,a_20 = NULL;
            t = SSLgetAnnotations(j_101);
            q_46 = t;
            t = o_101;
            t = p_101(t);
            x_46 = t;
            t = (ATerm) ATinsert(CheckATermList(x_46), k_101);
            a_20 = t;
            t = SSLsetAnnotations(a_20, q_46);
          }
        }
    }
    return(t);
  }
  t = p_101(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_101 = NULL,y_101 = NULL,z_101 = NULL;
  v_101 = t;
  {
    ATerm u_86 = t;
    int v_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_101;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_86 = ATgetFirst((ATermList) t);
                ATerm x_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_101;
          }
        LocalPopChoice(v_86);
      }
    else
      {
        t = u_86;
        t = (ATerm) ATinsert(ATempty, v_101);
      }
  }
  y_101 = t;
  t = term_t_39;
  z_101 = t;
  t = SSL_printnl(z_101, y_101);
  t = v_101;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL;
  t = term_m_37;
  d_102 = t;
  t = term_d_86;
  e_102 = t;
  t = term_e_86;
  t = u_15(d_102, e_102, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_36 (ATerm t)
{
  ATerm f_102 = NULL,h_102 = NULL;
  t = term_y_86;
  f_102 = t;
  t = term_q_39;
  h_102 = t;
  t = term_z_86;
  t = z_15(f_102, h_102, t);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  t = term_a_87;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL;
  t = term_y_86;
  l_102 = t;
  t = term_q_39;
  m_102 = t;
  t = term_z_86;
  t = z_15(l_102, m_102, t);
  t = term_w_79;
  j_102 = t;
  t = term_q_39;
  k_102 = t;
  t = term_y_79;
  t = z_15(j_102, k_102, t);
  t = term_e_87;
  return(t);
}
static ATerm k_36 (ATerm t)
{
  t = term_f_87;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_87 = t;
  int p_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_36, f_36, g_36, t);
      LocalPopChoice(p_87);
    }
  else
    {
      t = k_87;
      t = Option_3_0(h_36, j_36, k_36, t);
    }
  return(t);
}
static ATerm v_15 (ATerm p_56, ATerm q_56, ATerm o_56, ATerm t)
{
  ATerm q_102 = NULL,s_102 = NULL,u_102 = NULL,y_102 = NULL,g_103 = NULL;
  q_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
  {
    ATerm q_87 = t;
    int t_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_87 = ATgetArgument(t, 0);
            ATerm v_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_56, q_56);
        t = u_15(p_56, q_56, t);
        LocalPopChoice(t_87);
      }
    else
      {
        t = q_87;
        t = (ATerm) ATempty;
      }
  }
  s_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_56, q_56, (ATerm) ATinsert(CheckATermList(s_102), o_56));
  t = lookup_table_0_1(p_56, t);
  g_103 = t;
  t = (ATerm) ATinsert(CheckATermList(s_102), o_56);
  u_102 = t;
  t = g_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(q_56, u_102, y_102, t);
  t = q_102;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_104 = NULL,k_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_104 = NULL,n_104 = NULL,r_104 = NULL;
      t = term_q_39;
      t = g_0(t);
      l_104 = t;
      t = term_y_71;
      n_104 = t;
      t = term_z_71;
      r_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_71, term_z_71, l_104);
      t = v_15(n_104, r_104, l_104, t);
      _fail(t);
    }
  else
    {
      ATerm c_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_104 = ATgetFirst((ATermList) t);
          k_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_104;
      t = d_0(t);
      t = term_q_39;
      t = f_0(t);
      c_105 = t;
      t = (ATerm) ATinsert(CheckATermList(k_104), c_105);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_77 (ATerm), ATerm o_77 (ATerm), ATerm t)
{
  ATerm d_105 = NULL,p_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL,i_20 = NULL;
  u_105 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_105 = ATgetFirst((ATermList) t);
      r_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_105);
  d_105 = t;
  t = p_105;
  t = n_77(t);
  s_105 = t;
  t = r_105;
  t = o_77(t);
  t_105 = t;
  t = (ATerm) ATinsert(CheckATermList(t_105), s_105);
  i_20 = t;
  t = SSLsetAnnotations(i_20, d_105);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm d_106 = NULL,f_106 = NULL,g_106 = NULL,h_106 = NULL,j_106 = NULL,k_106 = NULL,r_20 = NULL;
  d_106 = t;
  {
    ATerm w_87 = t;
    int x_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_87;
        t = t_130(t);
        LocalPopChoice(x_87);
      }
    else
      {
        t = w_87;
      }
  }
  t = d_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_106 = ATgetFirst((ATermList) t);
      h_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_106);
  f_106 = t;
  t = term_d_86;
  k_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_86, g_106);
  t = z_15(k_106, g_106, t);
  t = h_106;
  {
    static ATerm f_107 (ATerm t);
    static ATerm f_107 (ATerm t)
    {
      ATerm c_88 = t;
      int f_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_88 = t;
          int j_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_106 = NULL;
              o_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_106;
              LocalPopChoice(j_88);
            }
          else
            {
              t = i_88;
              t = t_130(t);
              t = Cons_2_0(_id, f_107, t);
            }
          LocalPopChoice(f_88);
        }
      else
        {
          t = c_88;
          {
            ATerm r_106 = NULL,s_106 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_106 = ATgetFirst((ATermList) t);
                s_106 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_106), (ATerm) ATmakeAppl(sym_Undefined_1, r_106));
          }
        }
      return(t);
    }
    t = f_107(t);
  }
  j_106 = t;
  t = (ATerm) ATinsert(CheckATermList(j_106), (ATerm) ATmakeAppl(sym_Program_1, g_106));
  r_20 = t;
  t = SSLsetAnnotations(r_20, f_106);
  return(t);
}
static ATerm m_36 (ATerm t)
{
  ATerm y_107 = NULL;
  y_107 = t;
  if(match_string(t, "--help"))
    {
      t = y_107;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_107;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_107;
        }
    }
  return(t);
}
static ATerm n_36 (ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL;
  t = term_n_79;
  z_107 = t;
  t = term_q_39;
  a_108 = t;
  t = term_p_79;
  t = z_15(z_107, a_108, t);
  t = term_q_88;
  return(t);
}
static ATerm o_36 (ATerm t)
{
  t = term_s_88;
  return(t);
}
static ATerm p_36 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm k_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,t_107 = NULL,u_107 = NULL,x_107 = NULL;
  p_107 = t;
  t = term_y_71;
  q_107 = t;
  t = term_t_88;
  t = lookup_table_0_1(q_107, t);
  x_107 = t;
  t = term_z_71;
  r_107 = t;
  t = (ATerm) ATempty;
  t_107 = t;
  t = x_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(r_107, t_107, u_107, t);
  t = p_107;
  {
    static ATerm l_36 (ATerm t);
    static ATerm l_36 (ATerm t)
    {
      ATerm u_88 = t;
      int w_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_130(t);
          LocalPopChoice(w_88);
        }
      else
        {
          t = u_88;
          {
            ATerm z_88 = t;
            int a_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_36, n_36, o_36, t);
                LocalPopChoice(a_89);
              }
            else
              {
                t = z_88;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_36, t);
  }
  {
    ATerm b_89 = t;
    int c_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_108 = NULL;
        l_108 = t;
        {
          ATerm d_89 = t;
          int e_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL;
              t = l_108;
              {
                ATerm f_89 = t;
                int g_89 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_47 = NULL,n_47 = NULL;
                    t = term_m_37;
                    m_47 = t;
                    t = term_n_79;
                    n_47 = t;
                    t = term_h_89;
                    t = u_15(m_47, n_47, t);
                    LocalPopChoice(g_89);
                  }
                else
                  {
                    t = f_89;
                    t = fetch_1_0(p_36, t);
                  }
              }
              t = l_108;
              t = default_system_usage_0_0(t);
              t = term_e_37;
              l_47 = t;
              t = SSL_exit(l_47);
              LocalPopChoice(e_89);
            }
          else
            {
              t = d_89;
              {
                ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
                t = term_m_37;
                s_47 = t;
                t = term_y_86;
                t_47 = t;
                t = term_i_89;
                t = u_15(s_47, t_47, t);
                t = l_108;
                t = default_system_about_0_0(t);
                t = term_e_37;
                r_47 = t;
                t = SSL_exit(r_47);
              }
            }
        }
        LocalPopChoice(c_89);
      }
    else
      {
        t = b_89;
        {
          ATerm j_89 = t;
          int k_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_108 = NULL,r_108 = NULL,u_108 = NULL;
              static ATerm q_36 (ATerm t);
              static ATerm q_36 (ATerm t)
              {
                ATerm w_108 = NULL,z_108 = NULL,a_109 = NULL,t_20 = NULL;
                a_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_108 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_109);
                w_108 = t;
                t = z_108;
                if(((k_107 != NULL) && (k_107 != t)))
                  _fail(t);
                else
                  k_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_108);
                t_20 = t;
                t = SSLsetAnnotations(t_20, w_108);
                return(t);
              }
              t = fetch_1_0(q_36, t);
              t = term_q_37;
              r_108 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_107)), term_l_89);
              u_108 = t;
              t = SSL_printnl(r_108, u_108);
              t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_107)), term_l_89));
              t = default_system_usage_0_0(t);
              t = term_b_41;
              n_108 = t;
              t = SSL_exit(n_108);
              LocalPopChoice(k_89);
            }
          else
            {
              t = j_89;
            }
        }
      }
  }
  o_107 = t;
  t = term_y_71;
  t = table_destroy_0_0(t);
  t = o_107;
  return(t);
}
static ATerm x_15 (ATerm h_61, ATerm i_61, ATerm j_61, ATerm t)
{
  ATerm u_109 = NULL;
  t = SSL_hashtable_put(j_61, h_61, i_61);
  u_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_109);
  return(t);
}
static ATerm y_15 (ATerm k_61, ATerm l_61, ATerm t)
{
  t = SSL_hashtable_get(l_61, k_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm x_109 = NULL;
  t = SSL_hashtable_create(p_61, q_61);
  x_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_109);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_109 = NULL,b_110 = NULL,d_110 = NULL,i_110 = NULL,j_110 = NULL;
  y_109 = t;
  t = term_m_89;
  i_110 = t;
  t = term_n_89;
  j_110 = t;
  t = y_109;
  t = new_hashtable_0_2(i_110, j_110, t);
  b_110 = t;
  t = y_109;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(y_109, b_110, d_110, t);
  t = y_109;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_110 = NULL;
  t = SSL_table_hashtable();
  k_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_58, ATerm t)
{
  ATerm a_111 = NULL;
  t = table_hashtable_0_0(t);
  a_111 = t;
  {
    ATerm o_89 = t;
    int p_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        t = a_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_15(b_58, b_48, t);
        LocalPopChoice(p_89);
      }
    else
      {
        t = o_89;
        {
          ATerm n_48 = NULL;
          t = b_58;
          t = table_create_0_0(t);
          t = a_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_15(b_58, n_48, t);
        }
      }
  }
  return(t);
}
static ATerm z_15 (ATerm z_66, ATerm a_67, ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL;
  t = term_m_37;
  g_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, z_66, a_67);
  t = lookup_table_0_1(g_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(z_66, a_67, h_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_37, z_66, a_67);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm n_111 = NULL,o_111 = NULL;
  o_111 = t;
  t = SSL_explode_string(o_111);
  {
    ATerm r_89 = t;
    int s_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_113 (ATerm t);
        static ATerm s_113 (ATerm t)
        {
          ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL;
          n_113 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_113 = ATgetFirst((ATermList) t);
              p_113 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_89 = t;
            int x_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_48 = NULL,y_48 = NULL,c_21 = NULL;
                t = SSLgetAnnotations(n_113);
                u_48 = t;
                t = p_113;
                t = s_113(t);
                y_48 = t;
                t = (ATerm) ATinsert(CheckATermList(y_48), o_113);
                c_21 = t;
                t = SSLsetAnnotations(c_21, u_48);
                LocalPopChoice(x_89);
              }
            else
              {
                t = v_89;
                {
                  ATerm p_49 = NULL,e_21 = NULL;
                  t = SSLgetAnnotations(n_113);
                  p_49 = t;
                  t = o_113;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, o_113);
                  e_21 = t;
                  t = SSLsetAnnotations(e_21, p_49);
                }
              }
          }
          return(t);
        }
        t = s_113(t);
        LocalPopChoice(s_89);
      }
    else
      {
        t = r_89;
        t = (ATerm) ATempty;
      }
  }
  n_111 = t;
  t = SSL_implode_string(n_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm a_16 (ATerm y_38, ATerm z_38, ATerm t)
{
  t = SSL_strcat(y_38, z_38);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm x_113 = NULL,b_114 = NULL,c_114 = NULL,f_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL,n_114 = NULL,o_114 = NULL,r_114 = NULL,s_114 = NULL,v_114 = NULL,w_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,j_115 = NULL,k_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,r_115 = NULL,s_115 = NULL,v_115 = NULL,b_116 = NULL,c_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  x_113 = t;
  t = term_p_69;
  j_116 = t;
  t = term_y_89;
  k_116 = t;
  t = term_z_89;
  t = z_15(j_116, k_116, t);
  t = term_n_37;
  h_116 = t;
  t = term_b_41;
  i_116 = t;
  t = term_a_90;
  t = z_15(h_116, i_116, t);
  t = term_v_43;
  f_116 = t;
  t = term_e_37;
  g_116 = t;
  t = term_b_90;
  t = z_15(f_116, g_116, t);
  t = term_c_44;
  c_116 = t;
  t = term_a_50;
  e_116 = t;
  t = term_d_90;
  t = z_15(c_116, e_116, t);
  t = term_v_61;
  v_115 = t;
  t = (ATerm) ATempty;
  b_116 = t;
  t = term_f_90;
  t = z_15(v_115, b_116, t);
  t = term_d_40;
  r_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_90), term_g_90);
  s_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_40, (ATerm) ATinsert(ATinsert(ATempty, term_i_90), term_g_90));
  t = z_15(r_115, s_115, t);
  t = term_j_90;
  t = xtc_find_path_0_0(t);
  r_114 = t;
  t = term_m_90;
  p_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_114, term_m_90);
  t = a_16(r_114, p_115, t);
  i_114 = t;
  t = term_j_90;
  t = xtc_find_path_0_0(t);
  o_114 = t;
  t = term_m_90;
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_114, term_m_90);
  t = a_16(o_114, o_115, t);
  j_114 = t;
  t = term_n_90;
  t = xtc_find_path_0_0(t);
  n_114 = t;
  t = term_m_90;
  n_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_114, term_m_90);
  t = a_16(n_114, n_115, t);
  k_114 = t;
  t = term_a_39;
  j_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_114), term_v_61), j_114), term_v_61), i_114), term_v_61);
  k_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_114), term_v_61), j_114), term_v_61), i_114), term_v_61));
  t = z_15(j_115, k_115, t);
  t = term_j_90;
  t = xtc_find_path_0_0(t);
  h_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_90), h_114), term_u_77);
  g_115 = t;
  t = SSL_concat_strings(g_115);
  b_114 = t;
  t = term_n_90;
  t = xtc_find_path_0_0(t);
  f_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_90), f_114), term_u_77);
  f_115 = t;
  t = SSL_concat_strings(f_115);
  c_114 = t;
  t = term_f_38;
  d_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_91), term_z_90), c_114), term_y_90), term_w_90), term_v_90), b_114);
  e_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_91), term_z_90), c_114), term_y_90), term_w_90), term_v_90), b_114));
  t = z_15(d_115, e_115, t);
  t = term_d_39;
  a_115 = t;
  t = (ATerm) ATempty;
  b_115 = t;
  t = term_e_91;
  t = z_15(a_115, b_115, t);
  t = term_f_57;
  w_114 = t;
  t = term_f_91;
  z_114 = t;
  t = term_h_91;
  t = z_15(w_114, z_114, t);
  t = term_c_56;
  s_114 = t;
  t = (ATerm) ATinsert(ATempty, term_k_91);
  v_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_56, (ATerm) ATinsert(ATempty, term_k_91));
  t = z_15(s_114, v_114, t);
  t = x_113;
  return(t);
}
static ATerm t_36 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
  i_117 = t;
  t = term_m_37;
  j_117 = t;
  t = term_x_55;
  k_117 = t;
  t = term_l_91;
  t = u_15(j_117, k_117, t);
  t = debug_1_0(u_36, t);
  t = i_117;
  return(t);
}
static ATerm u_36 (ATerm t)
{
  t = term_m_91;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm n_91 = t;
    int o_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL;
        t = term_m_37;
        r_116 = t;
        t = term_s_79;
        s_116 = t;
        t = term_p_91;
        t = u_15(r_116, s_116, t);
        t = term_q_91;
        t = xtc_find_0_0(t);
        o_116 = t;
        t = term_t_39;
        q_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_116, term_t_39);
        t = d_15(o_116, q_116, t);
        t = term_e_37;
        p_116 = t;
        t = SSL_exit(p_116);
        LocalPopChoice(o_91);
      }
    else
      {
        t = n_91;
      }
  }
  {
    ATerm r_91 = t;
    int s_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_116 = NULL,w_116 = NULL,x_116 = NULL;
        t = term_m_37;
        w_116 = t;
        t = term_w_79;
        x_116 = t;
        t = term_t_91;
        t = u_15(w_116, x_116, t);
        t = strc_version_0_0(t);
        t = term_e_37;
        v_116 = t;
        t = SSL_exit(v_116);
        LocalPopChoice(s_91);
      }
    else
      {
        t = r_91;
      }
  }
  {
    ATerm u_91 = t;
    int v_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_117 = NULL,d_117 = NULL,e_117 = NULL;
        b_117 = t;
        t = term_m_37;
        d_117 = t;
        t = term_x_55;
        e_117 = t;
        t = term_l_91;
        t = u_15(d_117, e_117, t);
        t = b_117;
        LocalPopChoice(v_91);
      }
    else
      {
        t = u_91;
        {
          ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL;
          t = term_q_37;
          g_117 = t;
          t = (ATerm) ATinsert(ATempty, term_w_91);
          h_117 = t;
          t = SSL_printnl(g_117, h_117);
          t = term_b_41;
          f_117 = t;
          t = SSL_exit(f_117);
          t = (ATerm) ATinsert(ATempty, term_w_91);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(t_36, t);
  return(t);
}
static ATerm x_36 (ATerm t)
{
  t = if_verbose1_1_0(a_37, t);
  return(t);
}
static ATerm z_36 (ATerm t)
{
  t = xtc_temp_files_1_0(b_37, t);
  return(t);
}
static ATerm a_37 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL;
  m_117 = t;
  t = term_q_37;
  n_117 = t;
  t = (ATerm) ATinsert(CheckATermList(m_117), term_x_91);
  o_117 = t;
  t = SSL_printnl(n_117, o_117);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(CheckATermList(m_117), term_x_91));
  return(t);
}
static ATerm b_37 (ATerm t)
{
  ATerm y_91 = t;
  int z_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_117 = NULL,q_117 = NULL,r_117 = NULL;
      t = term_m_37;
      q_117 = t;
      t = term_x_55;
      r_117 = t;
      t = term_l_91;
      t = u_15(q_117, r_117, t);
      p_117 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_117);
      LocalPopChoice(z_91);
    }
  else
    {
      t = y_91;
      t = term_f_59;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm c_37 (ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL;
  t = run_time_0_0(t);
  s_117 = t;
  t = term_q_37;
  t_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_92), s_117), term_a_92);
  u_117 = t;
  t = SSL_printnl(t_117, u_117);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_92), s_117), term_a_92));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm e_92 = t;
  int f_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(x_36, z_36, t);
      t = if_verbose2_1_0(c_37, t);
      t = term_e_37;
      l_117 = t;
      t = SSL_exit(l_117);
      LocalPopChoice(f_92);
    }
  else
    {
      t = e_92;
      {
        ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL;
        t = run_time_0_0(t);
        v_117 = t;
        t = term_q_37;
        x_117 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_92), v_117), term_j_92);
        y_117 = t;
        t = SSL_printnl(x_117, y_117);
        t = term_b_41;
        w_117 = t;
        t = SSL_exit(w_117);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
