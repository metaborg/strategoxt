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
ATerm term_d_92;
ATerm term_a_92;
ATerm term_z_91;
ATerm term_w_91;
ATerm term_v_91;
ATerm term_s_91;
ATerm term_p_91;
ATerm term_n_91;
ATerm term_i_91;
ATerm term_h_91;
ATerm term_g_91;
ATerm term_e_91;
ATerm term_c_91;
ATerm term_b_91;
ATerm term_z_90;
ATerm term_x_90;
ATerm term_v_90;
ATerm term_t_90;
ATerm term_p_90;
ATerm term_o_90;
ATerm term_n_90;
ATerm term_m_90;
ATerm term_i_90;
ATerm term_g_90;
ATerm term_f_90;
ATerm term_d_90;
ATerm term_c_90;
ATerm term_b_90;
ATerm term_a_90;
ATerm term_z_89;
ATerm term_y_89;
ATerm term_x_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_k_89;
ATerm term_h_89;
ATerm term_g_89;
ATerm term_s_88;
ATerm term_q_88;
ATerm term_j_88;
ATerm term_x_87;
ATerm term_e_87;
ATerm term_a_87;
ATerm term_z_86;
ATerm term_y_86;
ATerm term_x_86;
ATerm term_o_86;
ATerm term_k_86;
ATerm term_d_86;
ATerm term_c_86;
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
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_d_80;
ATerm term_a_80;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_o_79;
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
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_v_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_q_78;
ATerm term_o_78;
ATerm term_m_78;
ATerm term_l_78;
ATerm term_h_78;
ATerm term_g_78;
ATerm term_y_77;
ATerm term_x_77;
ATerm term_w_77;
ATerm term_v_77;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_n_77;
ATerm term_m_77;
ATerm term_l_77;
ATerm term_k_77;
ATerm term_j_76;
ATerm term_e_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_p_75;
ATerm term_o_75;
ATerm term_z_74;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_t_74;
ATerm term_s_74;
ATerm term_l_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_l_72;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_w_71;
ATerm term_t_71;
ATerm term_r_71;
ATerm term_k_71;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_m_70;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_l_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_g_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_d_65;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_d_64;
ATerm term_m_63;
ATerm term_f_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_m_62;
ATerm term_a_62;
ATerm term_v_61;
ATerm term_r_61;
ATerm term_q_61;
ATerm term_n_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_u_60;
ATerm term_e_60;
ATerm term_r_59;
ATerm term_q_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_f_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_r_58;
ATerm term_j_58;
ATerm term_f_58;
ATerm term_q_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_b_56;
ATerm term_u_55;
ATerm term_i_55;
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
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_u_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_i_50;
ATerm term_f_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_m_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_v_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_v_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_p_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_b_46;
ATerm term_x_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_x_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_i_44;
ATerm term_d_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_u_42;
ATerm term_r_42;
ATerm term_f_42;
ATerm term_d_42;
ATerm term_a_42;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_s_39;
ATerm term_m_39;
ATerm term_h_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_s_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_c_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_l_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_a_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_f_38);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_w_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_z_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_b_39);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_d_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_z_39);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_r_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_x_42);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_o_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_t_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_h_45);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_s_38, term_f_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_o_37, term_i_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_49, term_d_41, term_o_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_t_49, term_u_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_b_50, term_c_50);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_50, term_i_50, term_o_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_50, term_r_50, term_u_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_50, term_a_51, term_b_51);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_51, term_e_51, term_i_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_n_51, term_q_51);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_51, term_y_51, term_z_51);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_52, term_l_44, term_d_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_i_52, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_52, term_p_52, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_52, term_t_52, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_52, term_x_52, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_53, term_b_53, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_53, term_h_53, term_i_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_53, term_l_53, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_53, term_p_53, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_53, term_t_53, term_u_53);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_53, term_x_53, term_y_53);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_54, term_b_54, term_c_54);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_54, term_f_54, term_g_54);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_54, term_a_47, term_j_54);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_54, term_m_54, term_n_54);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_54, term_q_54, term_r_54);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_54, term_x_54, term_y_54);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_b_56);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_h_56);
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_v_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_z_56);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_q_59);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(sym__2, term_z_58, term_r_58);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_d_61);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_j_61);
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_v_61);
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_g_69);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_c_37);
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_37);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(sym__2, term_f_72, term_m_39);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_o_75);
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(sym__2, term_y_70, term_a_76);
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(sym__2, term_y_70, term_z_74);
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(sym__2, term_d_40, term_m_39);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_x_77));
  term_x_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_m_78));
  term_m_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_m_39);
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(sym__2, term_d_61, term_m_39);
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(sym__2, term_h_56, term_m_39);
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_e_79));
  term_e_79 = (ATerm) ATmakeAppl(sym__2, term_h_45, term_m_39);
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_i_79));
  term_i_79 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(sym__2, term_k_79, term_m_39);
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(sym__2, term_n_79, term_m_39);
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym__2, term_t_79, term_m_39);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_s_38);
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(sym__2, term_x_56, term_c_37);
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(sym__2, term_v_61, term_m_39);
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_c_86);
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(sym__2, term_w_71, term_z_71);
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(sym__2, term_x_86, term_m_39);
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_87));
  term_x_87 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(sym__3, term_w_71, term_z_71, (ATerm) ATempty);
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_k_79);
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_x_86);
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_89));
  term_x_89 = (ATerm) ATmakeAppl(ATmakeSymbol("0.11pre", 0, ATtrue));
  ATprotect(&(term_y_89));
  term_y_89 = (ATerm) ATmakeAppl(sym__2, term_g_69, term_x_89);
  ATprotect(&(term_z_89));
  term_z_89 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_s_38);
  ATprotect(&(term_a_90));
  term_a_90 = (ATerm) ATmakeAppl(sym__2, term_o_43, term_c_37);
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_t_49);
  ATprotect(&(term_c_90));
  term_c_90 = (ATerm) ATmakeAppl(sym__2, term_j_61, (ATerm) ATempty);
  ATprotect(&(term_d_90));
  term_d_90 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_g_90));
  term_g_90 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_m_90));
  term_m_90 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_n_90));
  term_n_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_o_90));
  term_o_90 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_p_90));
  term_p_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_t_90));
  term_t_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_x_90));
  term_x_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_z_90));
  term_z_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_b_91));
  term_b_91 = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATempty);
  ATprotect(&(term_c_91));
  term_c_91 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_e_91));
  term_e_91 = (ATerm) ATmakeAppl(sym__2, term_z_56, term_c_91);
  ATprotect(&(term_g_91));
  term_g_91 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_u_55);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_n_91));
  term_n_91 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_n_79);
  ATprotect(&(term_p_91));
  term_p_91 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_s_91));
  term_s_91 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_t_79);
  ATprotect(&(term_v_91));
  term_v_91 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_w_91));
  term_w_91 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_a_92));
  term_a_92 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_92));
  term_d_92 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm g_128 (ATerm), ATerm t);
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
static ATerm m_14 (ATerm b_67, ATerm a_67, ATerm t);
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
ATerm if_keep1_1_0 (ATerm h_129 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm k_138 (ATerm), ATerm l_138 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm k_129 (ATerm), ATerm t);
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
ATerm save_as_1_0 (ATerm u_101 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm i_129 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm p_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm t);
static ATerm q_14 (ATerm x_71, ATerm y_71, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_129 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm g_138 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm t);
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
ATerm if_keep5_1_0 (ATerm l_129 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm m_129 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm j_129 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm u_112 (ATerm), ATerm t);
static ATerm h_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm n_14 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm o_14 (ATerm d_36, ATerm e_36, ATerm t);
static ATerm p_14 (ATerm z_111 (ATerm), ATerm x_284, ATerm n_36, ATerm t);
static ATerm s_14 (ATerm n_102 (ATerm), ATerm t_23, ATerm r_23, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm e_137 (ATerm), ATerm t);
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
ATerm get_outfile_1_0 (ATerm t_101 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm i_22 (ATerm t);
static ATerm m_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm h_128 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm j_123 (ATerm), ATerm t);
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
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm u_15 (ATerm c_59, ATerm d_59, ATerm t);
static ATerm u_14 (ATerm o_57, ATerm p_57, ATerm t);
ATerm end_scope_1_0 (ATerm k_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_102 (ATerm), ATerm t);
static ATerm k_27 (ATerm t);
static ATerm n_27 (ATerm t);
static ATerm o_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_137 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm f_128 (ATerm), ATerm t);
static ATerm w_14 (ATerm s_55, ATerm t_55, ATerm t);
static ATerm y_14 (ATerm y_55, ATerm z_55, ATerm t);
static ATerm z_14 (ATerm s_64, ATerm u_64, ATerm w_64, ATerm y_64, ATerm t_64, ATerm v_64, ATerm x_64, ATerm z_64, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_111 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_15 (ATerm f_37, ATerm v_297, ATerm t);
ATerm at_suffix_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm v_112 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm f_122 (ATerm), ATerm t);
static ATerm u_27 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm d_15 (ATerm d_67, ATerm c_67, ATerm t);
static ATerm e_15 (ATerm i_62, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm t_75 (ATerm u_74, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm f_15 (ATerm g_71, ATerm f_71, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm m_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm j_128 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm i_128 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm k_128 (ATerm), ATerm t);
static ATerm i_15 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm q_42, ATerm p_42, ATerm t);
static ATerm j_15 (ATerm t_116 (ATerm), ATerm m_42, ATerm l_42, ATerm t);
static ATerm q_28 (ATerm t);
static ATerm k_15 (ATerm g_58, ATerm h_58, ATerm i_58, ATerm t);
static ATerm l_15 (ATerm w_125 (ATerm), ATerm q_58, ATerm p_58, ATerm t);
static ATerm j_82 (ATerm z_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_15 (ATerm j_36, ATerm t);
static ATerm n_15 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_84 (ATerm c_83, ATerm t);
static ATerm l_84 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t);
static ATerm m_84 (ATerm v_83, ATerm w_83, ATerm x_83, ATerm t);
static ATerm o_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm z_28 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm n_29 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_120 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm a_30 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm d_30 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_88 (ATerm y_87, ATerm t);
static ATerm i_30 (ATerm t);
static ATerm j_30 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
static ATerm p_15 (ATerm d_71, ATerm e_71, ATerm t);
static ATerm q_15 (ATerm s_51, ATerm t_51, ATerm t);
ATerm at_end_1_0 (ATerm z_112 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_90 (ATerm e_90, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_15 (ATerm h_71, ATerm i_71, ATerm t);
static ATerm u_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm o_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm w_32 (ATerm t);
static ATerm x_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm e_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm n_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm s_33 (ATerm t);
static ATerm u_33 (ATerm t);
static ATerm v_33 (ATerm t);
static ATerm z_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm h_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm k_34 (ATerm t);
static ATerm p_34 (ATerm t);
static ATerm u_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm w_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm z_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm d_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm h_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
static ATerm o_35 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm s_15 (ATerm g_62, ATerm h_62, ATerm t);
static ATerm t_15 (ATerm l_62, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t);
static ATerm t_35 (ATerm t);
static ATerm u_35 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_112 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm z_35 (ATerm t);
static ATerm b_36 (ATerm t);
static ATerm c_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_15 (ATerm j_57, ATerm k_57, ATerm i_57, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_132 (ATerm), ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm i_36 (ATerm t);
static ATerm m_36 (ATerm t);
ATerm parse_options_1_0 (ATerm s_132 (ATerm), ATerm t);
static ATerm x_15 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t);
static ATerm y_15 (ATerm e_62, ATerm f_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_62, ATerm k_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm v_58, ATerm t);
static ATerm z_15 (ATerm a_71, ATerm b_71, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm a_16 (ATerm g_50, ATerm h_50, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm p_36 (ATerm t);
static ATerm q_36 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm r_36 (ATerm t);
static ATerm w_36 (ATerm t);
static ATerm y_36 (ATerm t);
static ATerm z_36 (ATerm t);
static ATerm a_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm h_119 (ATerm), ATerm i_119 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = h_119(t);
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
      t = foldr_2_0(h_119, i_119, t);
      n_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, n_0);
      t = i_119(t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_c_37;
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
      ATerm h_37 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm g_128 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_k_37;
        h_1 = t;
        t = term_l_37;
        k_1 = t;
        t = term_m_37;
        t = u_15(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_o_37);
        t = geq_0_0(t);
        t = b_1;
        t = g_128(t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = b_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  t = term_r_37;
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
  t = term_r_37;
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
    ATerm w_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_k_37;
        z_1 = t;
        t = term_a_38;
        c_2 = t;
        t = term_b_38;
        t = u_15(z_1, c_2, t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = w_37;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_e_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_k_37;
  s_1 = t;
  t = term_f_38;
  t_1 = t;
  t = term_m_38;
  t = u_15(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_a_38), i_23), term_o_38), term_n_38));
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
      t = term_s_38;
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
  t = term_r_37;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_u_38);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_r_37;
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
  t = term_k_37;
  u_2 = t;
  t = term_w_38;
  x_2 = t;
  t = term_x_38;
  t = u_15(u_2, x_2, t);
  o_2 = t;
  t = term_k_37;
  s_2 = t;
  t = term_z_38;
  t_2 = t;
  t = term_a_39;
  t = u_15(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_a_38), g_23), term_b_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, m_2);
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
      t = term_s_38;
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
  t = term_r_37;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_c_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(o_3), term_c_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_k_37;
      m_3 = t;
      t = term_b_39;
      n_3 = t;
      t = term_h_39;
      t = u_15(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
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
static ATerm m_14 (ATerm b_67, ATerm a_67, ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(b_67, a_67);
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      t = get_errno_0_0(t);
      t = term_m_39;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, b_67, a_67);
      t = d_15(b_67, a_67, t);
      t = SSL_remove(b_67);
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
    ATerm n_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = w_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_s_39;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_s_39);
        t = d_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_s_39;
        LocalPopChoice(r_39);
      }
    else
      {
        t = n_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = w_0(t);
              l_2 = t;
              {
                ATerm v_39 = t;
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
                    t = v_39;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = m_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
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
  t = term_w_39;
  r_4 = t;
  t = term_x_39;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_y_39);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_z_39);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_a_40;
  w_4 = t;
  t = a_5;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_k_37;
        d_5 = t;
        t = term_d_40;
        e_5 = t;
        t = term_e_40;
        t = u_15(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(c_40);
        t = (ATerm) ATinsert(ATempty, term_d_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_k_37;
  b_5 = t;
  t = term_z_39;
  c_5 = t;
  t = term_f_40;
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
  t = term_r_37;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_g_40);
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
    ATerm h_40 = t;
    int i_40 = stack_ptr;
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
        LocalPopChoice(i_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = h_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
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
        LocalPopChoice(k_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = j_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
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
        LocalPopChoice(m_40);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = l_40;
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
  t = term_r_37;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_n_40);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(b_6), term_n_40));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_p_40);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_p_40);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
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
        LocalPopChoice(t_40);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = s_40;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm u_40 = t;
    int w_40 = stack_ptr;
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
        LocalPopChoice(w_40);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = u_40;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_y_40;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_p_40);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_y_40;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_p_40);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_p_40);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_p_40);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_d_41;
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
  t = term_e_41;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_p_40);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm e_8 = NULL;
  t = pass_verbose_0_0(t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), term_p_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_h_41;
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
  t = term_r_37;
  i_9 = t;
  t = (ATerm) ATinsert(ATempty, term_i_41);
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
  t = term_r_37;
  x_9 = t;
  t = (ATerm) ATinsert(CheckATermList(t_9), term_j_41);
  y_9 = t;
  t = SSL_printnl(x_9, y_9);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(t_9), term_j_41));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm b_11 = NULL;
  t = pass_verbose_0_0(t);
  b_11 = t;
  t = (ATerm) ATinsert(CheckATermList(b_11), term_y_41);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm d_11 = NULL;
  t = pass_verbose_0_0(t);
  d_11 = t;
  t = (ATerm) ATinsert(CheckATermList(d_11), term_y_41);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL,d_9 = NULL,f_9 = NULL;
      c_9 = t;
      t = term_k_37;
      d_9 = t;
      t = term_d_40;
      f_9 = t;
      t = term_e_40;
      t = u_15(d_9, f_9, t);
      t = c_9;
      LocalPopChoice(c_42);
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
            t = term_d_42;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_f_42);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            z_9 = t;
            {
              ATerm h_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL,k_10 = NULL;
                  t = term_k_37;
                  i_10 = t;
                  t = term_r_42;
                  k_10 = t;
                  t = term_u_42;
                  t = u_15(i_10, k_10, t);
                  d_10 = t;
                  t = term_k_37;
                  f_10 = t;
                  t = term_x_42;
                  h_10 = t;
                  t = term_y_42;
                  t = u_15(f_10, h_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
                  {
                    ATerm c_43 = t;
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
                        t = c_43;
                      }
                  }
                  LocalPopChoice(k_42);
                }
              else
                {
                  t = h_42;
                  {
                    ATerm n_10 = NULL,p_10 = NULL;
                    t = term_k_37;
                    n_10 = t;
                    t = term_r_42;
                    p_10 = t;
                    t = term_u_42;
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
              ATerm f_43 = t;
              int g_43 = stack_ptr;
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
                  LocalPopChoice(g_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = f_43;
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
            t = term_r_37;
            b_10 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_9)), term_j_43), not_null(a_9)), term_i_43));
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
      t = b_42;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL;
        t = term_k_37;
        m_11 = t;
        t = term_o_43;
        o_11 = t;
        t = term_p_43;
        t = u_15(m_11, o_11, t);
        l_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_11, term_s_38);
        t = geq_0_0(t);
        t = j_11;
        t = h_129(t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        t = j_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm k_138 (ATerm), ATerm l_138 (ATerm), ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm r_43 = t;
    int s_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
        t = t_11;
        t = k_138(t);
        w_11 = t;
        t = term_k_37;
        y_11 = t;
        t = term_t_43;
        z_11 = t;
        t = term_u_43;
        t = u_15(y_11, z_11, t);
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, w_11);
        t = geq_0_0(t);
        t = t_11;
        t = l_138(t);
        LocalPopChoice(s_43);
      }
    else
      {
        t = r_43;
        t = t_11;
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_p_40);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_p_40);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_8 = NULL;
  t = pass_verbose_0_0(t);
  y_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_8), term_p_40);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_v_43;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm z_8 = NULL;
  t = pass_verbose_0_0(t);
  z_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_8), term_p_40);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  {
    ATerm w_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_13;
        {
          ATerm z_43 = t;
          int a_44 = stack_ptr;
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
              LocalPopChoice(a_44);
              t = xtc_transform_file_2_0(d_8, f_8, t);
            }
          else
            {
              t = z_43;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(y_43);
      }
    else
      {
        t = w_43;
        t = r_13;
        {
          ATerm b_44 = t;
          int c_44 = stack_ptr;
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
              LocalPopChoice(c_44);
              t = xtc_transform_file_2_0(i_8, k_8, t);
            }
          else
            {
              t = b_44;
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
  t = term_d_44;
  x_13 = t;
  t = a_14;
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,d_14 = NULL;
        t = term_k_37;
        b_14 = t;
        t = term_d_40;
        d_14 = t;
        t = term_e_40;
        t = u_15(b_14, d_14, t);
        t = a_14;
        LocalPopChoice(f_44);
        t = (ATerm) ATinsert(ATempty, term_i_44);
      }
    else
      {
        t = e_44;
        t = (ATerm) ATempty;
      }
  }
  y_13 = t;
  t = a_14;
  t = comp_0_2(x_13, y_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm k_129 (ATerm), ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  {
    ATerm j_44 = t;
    int k_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL;
        t = term_k_37;
        a_15 = t;
        t = term_o_43;
        b_15 = t;
        t = term_p_43;
        t = u_15(a_15, b_15, t);
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_14, term_l_44);
        t = geq_0_0(t);
        t = i_14;
        t = k_129(t);
        LocalPopChoice(k_44);
      }
    else
      {
        t = j_44;
        t = i_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  t = term_r_37;
  j_18 = t;
  t = (ATerm) ATinsert(ATempty, term_m_44);
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
    ATerm n_44 = t;
    int o_44 = stack_ptr;
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
        LocalPopChoice(o_44);
        t = xtc_transform_file_2_0(q_12, u_12, t);
      }
    else
      {
        t = n_44;
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
  t = term_r_37;
  m_18 = t;
  t = (ATerm) ATinsert(CheckATermList(l_18), term_q_44);
  n_18 = t;
  t = SSL_printnl(m_18, n_18);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(l_18), term_q_44));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  t = term_k_37;
  s_18 = t;
  t = term_t_43;
  t_18 = t;
  t = term_u_43;
  t = u_15(s_18, t_18, t);
  t = debug_1_0(u_8, t);
  t = r_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_r_44;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  {
    ATerm s_44 = t;
    int u_44 = stack_ptr;
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
        LocalPopChoice(u_44);
        t = xtc_transform_file_2_0(k_9, l_9, t);
      }
    else
      {
        t = s_44;
        t = xtc_transform_term_2_0(n_9, o_9, t);
      }
  }
  t = if_keep1_1_0(p_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_19 = NULL;
  t = pass_verbose_0_0(t);
  f_19 = t;
  t = (ATerm) ATinsert(CheckATermList(f_19), term_p_40);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_p_40);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = save_as_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_19;
        {
          ATerm d_45 = t;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL,r_10 = NULL;
              t = term_k_37;
              o_10 = t;
              t = term_h_45;
              r_10 = t;
              t = term_i_45;
              t = u_15(o_10, r_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_45;
            }
        }
        t = w_19;
        {
          ATerm j_45 = t;
          int k_45 = stack_ptr;
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
              LocalPopChoice(k_45);
              t = xtc_transform_file_2_0(g_10, j_10, t);
            }
          else
            {
              t = j_45;
              t = xtc_transform_term_2_0(m_10, u_10, t);
            }
        }
        t = if_keep2_1_0(v_10, t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = w_19;
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_l_45;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm h_11 = NULL;
  t = pass_verbose_0_0(t);
  h_11 = t;
  t = (ATerm) ATinsert(CheckATermList(h_11), term_p_40);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_l_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm i_11 = NULL;
  t = pass_verbose_0_0(t);
  i_11 = t;
  t = (ATerm) ATinsert(CheckATermList(i_11), term_p_40);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = save_as_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL,e_20 = NULL;
  e_20 = t;
  {
    ATerm n_45 = t;
    int o_45 = stack_ptr;
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
        LocalPopChoice(o_45);
        t = xtc_transform_file_2_0(k_11, p_11, t);
      }
    else
      {
        t = n_45;
        t = xtc_transform_term_2_0(q_11, r_11, t);
      }
  }
  t = if_keep6_1_0(u_11, t);
  b_20 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
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
        LocalPopChoice(q_45);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = p_45;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
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
        LocalPopChoice(s_45);
        t = xtc_transform_file_2_0(i_12, j_12, t);
      }
    else
      {
        t = r_45;
        t = xtc_transform_term_2_0(k_12, m_12, t);
      }
  }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_p_40);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_t_45;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm q_20 = NULL;
  t = pass_verbose_0_0(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), term_p_40);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = save_as_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_u_45;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_p_40);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_p_40);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm i_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(i_21), term_p_40);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm m_21 = NULL;
  t = pass_verbose_0_0(t);
  m_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), term_p_40);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm s_21 = NULL;
  t = pass_verbose_0_0(t);
  s_21 = t;
  t = (ATerm) ATinsert(CheckATermList(s_21), term_p_40);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm v_21 = NULL;
  t = pass_verbose_0_0(t);
  v_21 = t;
  t = (ATerm) ATinsert(CheckATermList(v_21), term_p_40);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_l_44;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
  a_22 = t;
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
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
        LocalPopChoice(e_46);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = d_46;
        t = xtc_transform_term_2_0(c_13, d_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  z_21 = t;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
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
        LocalPopChoice(i_46);
        t = xtc_transform_file_2_0(e_13, g_13, t);
      }
    else
      {
        t = h_46;
        t = xtc_transform_term_2_0(h_13, i_13, t);
      }
  }
  w_21 = t;
  {
    ATerm j_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_23 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(w_21);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_23);
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
        LocalPopChoice(l_46);
        t = xtc_transform_file_2_0(j_13, k_13, t);
      }
    else
      {
        t = j_46;
        t = xtc_transform_term_2_0(l_13, m_13, t);
      }
  }
  t = if_keep4_1_0(o_13, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm j_22 = NULL;
  t = pass_verbose_0_0(t);
  j_22 = t;
  t = (ATerm) ATinsert(CheckATermList(j_22), term_p_40);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_p_40);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_p_40);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm e_23 = NULL;
  t = pass_verbose_0_0(t);
  e_23 = t;
  t = (ATerm) ATinsert(CheckATermList(e_23), term_p_40);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_p_40);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm c_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), term_p_40);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = save_as_1_0(q_13, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  g_24 = t;
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_24 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(g_24);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_24;
          }
        LocalPopChoice(t_46);
        t = xtc_transform_file_2_0(w_13, z_13, t);
      }
    else
      {
        t = s_46;
        t = xtc_transform_term_2_0(e_14, f_14, t);
      }
  }
  f_24 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_24 = ATgetArgument(t, 0);
            {
              ATerm w_15 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(f_24);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_24);
              s_6 = t;
              t = SSLsetAnnotations(s_6, w_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_24;
          }
        LocalPopChoice(w_46);
        t = xtc_transform_file_2_0(g_14, j_14, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(r_14, v_14, t);
      }
  }
  t = if_keep2_1_0(g_15, t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm p_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), term_p_40);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_x_46;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm q_24 = NULL;
  t = pass_verbose_0_0(t);
  q_24 = t;
  t = (ATerm) ATinsert(CheckATermList(q_24), term_p_40);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_y_46;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_p_40);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_y_46;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_p_40);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = save_as_1_0(h_15, t);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_a_47;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm b_47 = t;
    int c_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_25 = ATgetArgument(t, 0);
            {
              ATerm e_16 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(a_25);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, e_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_25;
          }
        LocalPopChoice(c_47);
        t = xtc_transform_file_2_0(d_16, f_16, t);
      }
    else
      {
        t = b_47;
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
  t = term_v_45;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm j_25 = NULL;
  t = pass_verbose_0_0(t);
  j_25 = t;
  t = (ATerm) ATinsert(CheckATermList(j_25), term_p_40);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_p_40);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = save_as_1_0(n_16, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_e_47;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  {
    ATerm f_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm i_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
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
            t = n_25;
          }
        LocalPopChoice(h_47);
        t = xtc_transform_file_2_0(r_16, s_16, t);
      }
    else
      {
        t = f_47;
        t = xtc_transform_term_2_0(t_16, v_16, t);
      }
  }
  t = if_keep3_1_0(w_16, t);
  m_25 = t;
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_26 = ATgetArgument(t, 0);
            {
              ATerm m_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(m_25);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_26);
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
        LocalPopChoice(j_47);
        t = xtc_transform_file_2_0(z_16, a_17, t);
      }
    else
      {
        t = i_47;
        t = xtc_transform_term_2_0(b_17, c_17, t);
      }
  }
  t = if_keep3_1_0(e_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(g_17, t);
  l_25 = t;
  {
    ATerm l_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_26 = ATgetArgument(t, 0);
            {
              ATerm q_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(l_25);
              q_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_26);
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
        LocalPopChoice(n_47);
        t = xtc_transform_file_2_0(i_17, j_17, t);
      }
    else
      {
        t = l_47;
        t = xtc_transform_term_2_0(k_17, n_17, t);
      }
  }
  t = if_keep3_1_0(o_17, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm y_25 = NULL;
  t = pass_verbose_0_0(t);
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), term_p_40);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_p_47;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm z_25 = NULL;
  t = pass_verbose_0_0(t);
  z_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_25), term_p_40);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_r_47;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_p_40);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_n_46;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm i_26 = NULL;
  t = pass_verbose_0_0(t);
  i_26 = t;
  t = (ATerm) ATinsert(CheckATermList(i_26), term_p_40);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = save_as_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm s_26 = NULL;
  t = pass_verbose_0_0(t);
  s_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), term_p_40);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm u_26 = NULL;
  t = pass_verbose_0_0(t);
  u_26 = t;
  t = (ATerm) ATinsert(CheckATermList(u_26), term_p_40);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = save_as_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_v_47;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_s_38;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  w_26 = t;
  {
    ATerm w_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm u_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(w_26);
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, u_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_26;
          }
        LocalPopChoice(z_47);
        t = xtc_transform_file_2_0(s_17, t_17, t);
      }
    else
      {
        t = w_47;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  t = if_keep1_1_0(y_17, t);
  v_26 = t;
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_27 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(v_26);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_26;
          }
        LocalPopChoice(b_48);
        t = xtc_transform_file_2_0(a_18, b_18, t);
      }
    else
      {
        t = a_48;
        t = xtc_transform_term_2_0(c_18, e_18, t);
      }
  }
  t = if_keep1_1_0(h_18, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm f_27 = NULL;
  t = pass_verbose_0_0(t);
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(f_27), term_p_40);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm g_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), term_p_40);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = save_as_1_0(z_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = term_d_48;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm p_27 = NULL;
  t = pass_verbose_0_0(t);
  p_27 = t;
  t = (ATerm) ATinsert(CheckATermList(p_27), term_p_40);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_e_48;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm q_27 = NULL;
  t = pass_verbose_0_0(t);
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), term_p_40);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = save_as_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_f_48;
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
  t = term_w_41;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm q_29 = NULL;
  t = pass_verbose_0_0(t);
  q_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), term_y_41);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm r_29 = NULL;
  t = pass_verbose_0_0(t);
  r_29 = t;
  t = (ATerm) ATinsert(CheckATermList(r_29), term_y_41);
  return(t);
}
ATerm save_as_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  v_28 = t;
  {
    static ATerm w_18 (ATerm t);
    static ATerm w_18 (ATerm t)
    {
      static ATerm z_18 (ATerm t);
      static ATerm z_18 (ATerm t)
      {
        ATerm d_29 = NULL,e_29 = NULL;
        t = u_101(t);
        d_29 = t;
        t = term_g_48;
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_48, d_29);
        t = a_16(e_29, d_29, t);
        return(t);
      }
      t = get_outfile_1_0(z_18, t);
      if(((t_28 != NULL) && (t_28 != t)))
        _fail(t);
      else
        t_28 = t;
      return(t);
    }
    t = copy_to_1_0(w_18, t);
  }
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_29 = NULL,p_29 = NULL;
        p_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            m_29 = ATgetArgument(t, 0);
            {
              ATerm d_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(p_29);
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, d_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_29;
          }
        LocalPopChoice(i_48);
        t = xtc_transform_file_2_0(a_19, b_19, t);
      }
    else
      {
        t = h_48;
        t = xtc_transform_term_2_0(e_19, j_19, t);
      }
  }
  {
    static ATerm l_19 (ATerm t);
    static ATerm l_19 (ATerm t)
    {
      ATerm s_29 = NULL;
      t = term_j_48;
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), term_j_48);
      t = a_16(not_null(t_28), s_29, t);
      if(((u_28 != NULL) && (u_28 != t)))
        _fail(t);
      else
        u_28 = t;
      return(t);
    }
    t = copy_to_1_0(l_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_48), not_null(u_28)), term_m_48), not_null(t_28)), term_k_48);
  c_29 = t;
  t = SSL_concat_strings(c_29);
  w_28 = t;
  t = term_r_37;
  a_29 = t;
  t = (ATerm) ATinsert(ATempty, w_28);
  b_29 = t;
  t = SSL_printnl(a_29, b_29);
  t = v_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm i_129 (ATerm), ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL,f_30 = NULL,g_30 = NULL;
        t = term_k_37;
        f_30 = t;
        t = term_o_43;
        g_30 = t;
        t = term_p_43;
        t = u_15(f_30, g_30, t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_o_37);
        t = geq_0_0(t);
        t = x_29;
        t = i_129(t);
        LocalPopChoice(p_48);
      }
    else
      {
        t = o_48;
        t = x_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,n_30 = NULL,o_30 = NULL;
  t = term_l_37;
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL,q_30 = NULL;
        t = term_k_37;
        p_30 = t;
        t = term_l_37;
        q_30 = t;
        t = term_m_37;
        t = u_15(p_30, q_30, t);
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        t = term_s_38;
      }
  }
  l_30 = t;
  t = term_s_38;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, term_s_38);
  t = y_14(l_30, o_30, t);
  n_30 = t;
  t = SSL_int_to_string(n_30);
  k_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_30), term_l_37);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if(match_cons(u_48, sym_Stream_1))
        {
          v_30 = ATgetArgument(u_48, 0);
        }
      else
        _fail(t);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14(v_30, w_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_137 (ATerm), ATerm d_137 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  s_30 = t;
  t = xtc_new_file_0_0(t);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
  t = p_14(p_19, r_30, s_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_30);
  t = xtc_transform_file_2_0(c_137, d_137, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm q_14 (ATerm x_71, ATerm y_71, ATerm t)
{
  t = SSL_execvp(x_71, y_71);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  s_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_31 = ATgetArgument(t, 0);
      {
        ATerm l_17 = NULL,m_17 = NULL;
        t = SSL_int_to_string(t_31);
        l_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_48), l_17), term_v_48);
        m_17 = t;
        t = SSL_concat_strings(m_17);
      }
    }
  else
    {
      ATerm w_17 = NULL,x_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_31 = ATgetArgument(t, 0);
          u_31 = ATgetArgument(t, 1);
          v_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_31);
      w_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_31), term_z_48), w_17), term_y_48), t_31);
      x_17 = t;
      t = SSL_concat_strings(x_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_19 (ATerm t);
        static ATerm r_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_49 = ATgetArgument(t, 0);
              if((b_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_49 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_54), term_s_54), term_o_54), term_k_54), term_h_54), term_d_54), term_z_53), term_v_53), term_r_53), term_n_53), term_j_53), term_f_53), term_z_52), term_v_52), term_r_52), term_n_52), term_g_52), term_b_52), term_r_51), term_j_51), term_c_51), term_y_50), term_p_50), term_d_50), term_v_49), term_q_49), term_j_49), term_g_49);
        t = fetch_elem_1_0(r_19, t);
        LocalPopChoice(b_49);
      }
    else
      {
        t = a_49;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_32 = NULL,o_32 = NULL;
  f_32 = t;
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_55 = ATgetArgument(t, 0);
            o_32 = ATgetArgument(t, 1);
            {
              ATerm e_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_55);
        {
          ATerm f_55 = t;
          int g_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_18 = NULL,f_18 = NULL,g_18 = NULL;
              t = o_32;
              {
                ATerm h_55 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_55;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              d_18 = t;
              t = term_r_37;
              f_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, d_18), term_i_55);
              g_18 = t;
              t = SSL_printnl(f_18, g_18);
              t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(ATinsert(ATempty, d_18), term_i_55));
              LocalPopChoice(g_55);
            }
          else
            {
              t = f_55;
              t = f_32;
            }
        }
      }
    else
      {
        t = b_55;
        t = f_32;
      }
  }
  t = f_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_129 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,h_33 = NULL;
  h_33 = t;
  t = fork_0_0(t);
  f_33 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_33;
        t = s_129(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = SSL_waitpid(f_33);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_55 = ATgetArgument(t, 0);
            if(((ATgetType(l_55) != AT_INT) || (ATgetInt((ATermInt) l_55) != 0)))
              _fail(t);
            {
              ATerm m_55 = ATgetArgument(t, 1);
            }
            {
              ATerm r_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_138 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  t = g_138(t);
  t = xtc_find_0_0(t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
  {
    static ATerm t_19 (ATerm t);
    static ATerm t_19 (ATerm t)
    {
      ATerm m_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      t = q_14(k_33, l_33, t);
      t = term_s_38;
      m_33 = t;
      t = SSL_exit(m_33);
      return(t);
    }
    t = fork_and_wait_1_0(t_19, t);
  }
  t = l_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_33 = NULL,t_33 = NULL;
      t = o_33;
      t = xtc_new_file_0_0(t);
      q_33 = t;
      t = t_0(t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_33, (ATerm) ATinsert(ATinsert(ATempty, q_33), term_a_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_33);
    }
  else
    {
      ATerm w_33 = NULL,x_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_33;
      t = xtc_new_file_0_0(t);
      w_33 = t;
      t = t_0(t);
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_33), term_a_38), p_33), term_u_55));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm u_22, ATerm v_22, ATerm t)
{
  ATerm v_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_49 = NULL,n_49 = NULL;
      n_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          k_49 = ATgetArgument(t, 0);
          {
            ATerm e_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(n_49);
            e_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_49);
            t_8 = t;
            t = SSLsetAnnotations(t_8, e_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_49;
        }
      LocalPopChoice(w_55);
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
          ATerm p_49 = NULL;
          t = pass_verbose_0_0(t);
          p_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), p_49), (ATerm) ATinsert(ATempty, term_p_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(v_19, y_19, t);
      }
    }
  else
    {
      t = v_55;
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
          ATerm s_49 = NULL;
          t = pass_verbose_0_0(t);
          s_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_22), s_49), (ATerm) ATinsert(ATempty, term_p_40));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(c_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm l_119 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_34;
      t = j_119(t);
    }
  else
    {
      ATerm j_34 = NULL,m_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      t = l_119(t);
      j_34 = t;
      t = g_34;
      t = foldr_3_0(j_119, k_119, l_119, t);
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_34, m_34);
      t = k_119(t);
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
  ATerm t_34 = NULL;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_34), term_b_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  t = term_k_37;
  q_34 = t;
  t = term_b_56;
  r_34 = t;
  t = term_c_56;
  t = u_15(q_34, r_34, t);
  t = foldr_3_0(g_20, conc_0_0, j_20, t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  t = term_d_56;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_p_40);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = term_d_56;
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm l_20 = NULL;
  t = pass_verbose_0_0(t);
  l_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), term_p_40);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  t = get_outfile_1_0(b_21, t);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_e_56;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_19 = NULL,h_19 = NULL,i_19 = NULL,m_19 = NULL,n_19 = NULL;
        t = term_k_37;
        m_19 = t;
        t = term_h_56;
        n_19 = t;
        t = term_i_56;
        t = u_15(m_19, n_19, t);
        t = l_36;
        {
          ATerm j_56 = t;
          int k_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_36;
              {
                ATerm l_56 = t;
                int m_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        d_20 = ATgetArgument(t, 0);
                        {
                          ATerm d_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(l_36);
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
                        t = l_36;
                      }
                    LocalPopChoice(m_56);
                    t = xtc_transform_file_2_0(o_20, s_20, t);
                  }
                else
                  {
                    t = l_56;
                    t = xtc_transform_term_2_0(w_20, x_20, t);
                  }
              }
              LocalPopChoice(k_56);
            }
          else
            {
              t = j_56;
              {
                ATerm m_20 = NULL,n_20 = NULL,v_20 = NULL;
                t = term_r_37;
                n_20 = t;
                t = (ATerm) ATinsert(ATempty, term_n_56);
                v_20 = t;
                t = SSL_printnl(n_20, v_20);
                t = term_s_38;
                m_20 = t;
                t = SSL_exit(m_20);
                t = (ATerm) ATinsert(ATempty, term_n_56);
              }
            }
        }
        t = copy_to_1_0(a_21, t);
        c_19 = t;
        t = term_r_37;
        h_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_56));
        i_19 = t;
        t = SSL_printnl(h_19, i_19);
        t = c_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = l_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm l_129 (ATerm), ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,g_37 = NULL;
        t = term_k_37;
        e_37 = t;
        t = term_o_43;
        g_37 = t;
        t = term_p_43;
        t = u_15(e_37, g_37, t);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_37, term_a_47);
        t = geq_0_0(t);
        t = u_36;
        t = l_129(t);
        LocalPopChoice(q_56);
      }
    else
      {
        t = p_56;
        t = u_36;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm m_129 (ATerm), ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL,q_37 = NULL,t_37 = NULL;
        t = term_k_37;
        q_37 = t;
        t = term_o_43;
        t_37 = t;
        t = term_p_43;
        t = u_15(q_37, t_37, t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_37, term_t_49);
        t = geq_0_0(t);
        t = n_37;
        t = m_129(t);
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = n_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_37 = NULL,y_37 = NULL;
      t = term_k_37;
      v_37 = t;
      t = term_v_56;
      y_37 = t;
      t = term_w_56;
      t = u_15(v_37, y_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_56);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      t = (ATerm) ATinsert(ATempty, term_x_56);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  g_38 = t;
  t = term_y_56;
  c_38 = t;
  t = term_k_37;
  i_38 = t;
  t = term_z_56;
  j_38 = t;
  t = term_a_57;
  t = u_15(i_38, j_38, t);
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_38), term_z_56);
  d_38 = t;
  t = g_38;
  t = comp_0_2(c_38, d_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
        t = term_k_37;
        q_38 = t;
        t = term_o_43;
        r_38 = t;
        t = term_p_43;
        t = u_15(q_38, r_38, t);
        p_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_38, term_d_41);
        t = geq_0_0(t);
        t = l_38;
        t = j_129(t);
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        t = l_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_112 (ATerm), ATerm t)
{
  ATerm t_38 = NULL;
  static ATerm f_21 (ATerm t);
  static ATerm f_21 (ATerm t)
  {
    t = u_112(t);
    if(((t_38 != NULL) && (t_38 != t)))
      _fail(t);
    else
      t_38 = t;
    return(t);
  }
  t = fetch_1_0(f_21, t);
  t = not_null(t_38);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm v_40 = NULL,x_40 = NULL;
  v_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_40 = ATgetArgument(t, 0);
      {
        ATerm u_21 = NULL,y_21 = NULL,u_9 = NULL;
        t = SSLgetAnnotations(v_40);
        u_21 = t;
        t = x_40;
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
          x_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_40);
      c_23 = t;
      t = x_40;
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
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm f_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_57);
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
        t = d_57;
        if(match_cons(t, sym_RDef_3))
          {
            e_22 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
            {
              ATerm g_57 = ATgetArgument(t, 2);
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
    ATerm h_57 = t;
    int l_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            l_23 = ATgetArgument(t, 0);
            m_23 = ATgetArgument(t, 1);
            {
              ATerm m_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_57);
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
        t = h_57;
        if(match_cons(t, sym_RDef_3))
          {
            l_23 = ATgetArgument(t, 0);
            m_23 = ATgetArgument(t, 1);
            {
              ATerm n_57 = ATgetArgument(t, 2);
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
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = fetch_elem_1_0(h_21, t);
  o_39 = t;
  t = term_r_37;
  p_39 = t;
  t = (ATerm) ATinsert(ATempty, term_q_57);
  q_39 = t;
  t = SSL_printnl(p_39, q_39);
  t = o_39;
  return(t);
}
static ATerm n_14 (ATerm a_23, ATerm b_23, ATerm t)
{
  t = a_23;
  {
    ATerm v_57 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_57;
      }
  }
  t = b_23;
  {
    ATerm w_57 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(b_58);
      }
    else
      {
        t = w_57;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(b_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_f_58, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm o_14 (ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_write_term_to_stream_baf(d_36, e_36);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_41);
  return(t);
}
static ATerm p_14 (ATerm z_111 (ATerm), ATerm x_284, ATerm n_36, ATerm t)
{
  ATerm l_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_284, term_j_58);
  t = o_15(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_41, n_36);
  t = z_111(t);
  t = fclose_0_0(t);
  t = n_36;
  return(t);
}
static ATerm s_14 (ATerm n_102 (ATerm), ATerm t_23, ATerm r_23, ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  q_41 = t;
  t = n_102(t);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_41, t_23, r_23);
  t = v_15(m_41, t_23, r_23, t);
  {
    ATerm k_58 = t;
    int l_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL;
        t = term_r_58;
        x_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_41, term_r_58);
        t = u_15(m_41, x_41, t);
        {
          ATerm s_58 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_58;
            }
        }
        LocalPopChoice(l_58);
      }
    else
      {
        t = k_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      o_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_41, term_r_58, (ATerm) ATinsert(CheckATermList(o_41), (ATerm) ATinsert(CheckATermList(n_41), t_23)));
  t = lookup_table_0_1(m_41, t);
  v_41 = t;
  t = term_r_58;
  s_41 = t;
  t = (ATerm) ATinsert(CheckATermList(o_41), (ATerm) ATinsert(CheckATermList(n_41), t_23));
  t_41 = t;
  t = v_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(s_41, t_41, u_41, t);
  t = q_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  ATerm u_58 = t;
  int w_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_42 = NULL,u_23 = NULL;
      e_42 = t;
      t = term_x_58;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_42, term_x_58);
      t = a_16(e_42, u_23, t);
      z_41 = t;
      t = SSL_mkstemp(z_41);
      LocalPopChoice(w_58);
    }
  else
    {
      t = u_58;
      {
        ATerm g_42 = NULL;
        t = term_y_58;
        g_42 = t;
        t = SSL_perror(g_42);
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
  t = term_z_58;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,n_42 = NULL,o_42 = NULL,s_42 = NULL;
  t = P__tmpdir_0_0(t);
  o_42 = t;
  t = term_a_59;
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, term_a_59);
  t = a_16(o_42, s_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_39;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_42, term_m_39);
  t = s_14(l_21, j_42, n_42, t);
  t = SSL_close(i_42);
  t = j_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_59;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_42 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_59);
      z_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_42, (ATerm) ATinsert(ATempty, term_f_59));
      t = q_15(v_42, z_42, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_59 = ATgetArgument(t, 0);
      if(match_cons(i_59, sym_Stream_1))
        {
          d_43 = ATgetArgument(i_59, 0);
        }
      else
        _fail(t);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_14(d_43, e_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm e_137 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = read_from_0_0(t);
  t = e_137(t);
  b_43 = t;
  t = xtc_new_file_0_0(t);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
  t = p_14(n_21, a_43, b_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_43);
  return(t);
}
static ATerm o_21 (ATerm t)
{
  t = debug_1_0(p_21, t);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_j_59;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = save_as_1_0(x_21, t);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_k_59;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm q_43 = NULL,g_44 = NULL;
  g_44 = t;
  {
    ATerm m_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,b_25 = NULL;
        t = term_k_37;
        v_24 = t;
        t = term_q_59;
        b_25 = t;
        t = term_r_59;
        t = u_15(v_24, b_25, t);
        q_43 = t;
        t = if_verbose2_1_0(o_21, t);
        t = g_44;
        {
          ATerm t_59 = t;
          int w_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_25 = NULL,h_25 = NULL;
              t = term_k_37;
              c_25 = t;
              t = term_d_40;
              h_25 = t;
              t = term_e_40;
              t = u_15(c_25, h_25, t);
              t = g_44;
              LocalPopChoice(w_59);
            }
          else
            {
              t = t_59;
              {
                static ATerm r_21 (ATerm t);
                static ATerm r_21 (ATerm t)
                {
                  ATerm x_59 = t;
                  int y_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          k_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = n_14(q_43, k_26, t);
                      LocalPopChoice(y_59);
                    }
                  else
                    {
                      t = x_59;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(r_21, t);
              }
            }
        }
        LocalPopChoice(p_59);
      }
    else
      {
        t = m_59;
        t = g_44;
      }
  }
  t = if_keep3_1_0(t_21, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm a_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_45);
        LocalPopChoice(d_60);
      }
    else
      {
        t = a_60;
        t = g_45;
      }
  }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_z_58;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm t_44 = NULL,v_44 = NULL;
  static ATerm b_22 (ATerm t);
  static ATerm b_22 (ATerm t)
  {
    ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
    y_44 = t;
    t = term_z_58;
    z_44 = t;
    t = term_r_58;
    a_45 = t;
    t = term_e_60;
    t = u_15(z_44, a_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_44 != NULL) && (t_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_44 = ATgetFirst((ATermList) t);
        {
          ATerm f_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_44;
    t = map_1_0(c_22, t);
    t = y_44;
    t = end_scope_1_0(f_22, t);
    return(t);
  }
  t = repeat_2_0(b_22, _id, t);
  v_44 = t;
  t = SSL_exit(v_44);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm g_60 = t;
  int i_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_45 = NULL,a_46 = NULL;
      t = term_k_37;
      z_45 = t;
      t = term_a_38;
      a_46 = t;
      t = term_b_38;
      t = u_15(z_45, a_46, t);
      LocalPopChoice(i_60);
    }
  else
    {
      t = g_60;
      t = term_s_39;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_27 = NULL,d_27 = NULL;
      t = term_a_38;
      {
        ATerm j_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = NULL,j_27 = NULL;
            t = term_k_37;
            h_27 = t;
            t = term_a_38;
            j_27 = t;
            t = term_b_38;
            t = u_15(h_27, j_27, t);
            LocalPopChoice(l_60);
          }
        else
          {
            t = j_60;
            t = term_s_39;
          }
      }
      c_27 = t;
      t = term_b_59;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_59, c_27);
      t = d_15(d_27, c_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm n_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_45;
      t = copy_to_1_0(g_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_c_37;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm c_46 = NULL,g_46 = NULL,k_46 = NULL,m_46 = NULL;
  t = t_101(t);
  c_46 = t;
  t = term_k_37;
  k_46 = t;
  t = term_r_42;
  m_46 = t;
  t = term_u_42;
  t = u_15(k_46, m_46, t);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, c_46);
  t = a_16(g_46, c_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm o_47 = NULL,q_47 = NULL;
  o_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL;
        t = o_47;
        t = u_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, q_47, l_28);
        t = d_15(q_47, l_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_47);
        LocalPopChoice(p_60);
      }
    else
      {
        t = o_60;
        {
          ATerm q_60 = t;
          int s_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_28 = NULL;
              t = o_47;
              t = u_0(t);
              x_28 = t;
              {
                ATerm t_60 = t;
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
                            if((q_47 != t))
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
                    t = t_60;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_47, x_28);
              t = d_15(q_47, x_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_47);
              LocalPopChoice(s_60);
            }
          else
            {
              t = q_60;
              t = o_47;
              t = u_0(t);
              if((q_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_47);
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
  t = term_u_60;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  {
    ATerm y_60 = t;
    int z_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,y_29 = NULL;
        t = term_k_37;
        w_29 = t;
        t = term_d_61;
        y_29 = t;
        t = term_e_61;
        t = u_15(w_29, y_29, t);
        t = q_48;
        t = copy_to_1_0(i_22, t);
        o_29 = t;
        t = term_r_37;
        u_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_61));
        v_29 = t;
        t = SSL_printnl(u_29, v_29);
        t = o_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(z_60);
      }
    else
      {
        t = y_60;
        t = q_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm w_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  t = term_o_43;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_50 = NULL,j_50 = NULL;
        t = term_k_37;
        e_50 = t;
        t = term_o_43;
        j_50 = t;
        t = term_p_43;
        t = u_15(e_50, j_50, t);
        LocalPopChoice(h_61);
      }
    else
      {
        t = g_61;
        t = term_s_38;
      }
  }
  y_49 = t;
  t = term_s_38;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_49, term_s_38);
  t = y_14(y_49, a_50, t);
  z_49 = t;
  t = SSL_int_to_string(z_49);
  w_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_49), term_o_43);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,s_50 = NULL,t_50 = NULL;
  t = term_k_37;
  s_50 = t;
  t = term_j_61;
  t_50 = t;
  t = term_k_61;
  t = u_15(s_50, t_50, t);
  k_50 = t;
  t = term_l_61;
  t = xtc_find_path_0_0(t);
  l_50 = t;
  t = term_n_61;
  t = xtc_find_path_0_0(t);
  m_50 = t;
  t = term_q_61;
  t = xtc_find_path_0_0(t);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_50), term_j_61), m_50), term_j_61), l_50), term_j_61));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,k_51 = NULL;
  h_51 = t;
  t = term_r_61;
  v_50 = t;
  t = h_51;
  {
    ATerm s_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_51 = NULL,o_51 = NULL;
        t = term_k_37;
        l_51 = t;
        t = term_a_38;
        o_51 = t;
        t = term_b_38;
        t = u_15(l_51, o_51, t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = s_61;
        {
          ATerm p_51 = NULL,u_51 = NULL;
          t = term_k_37;
          p_51 = t;
          t = term_r_42;
          u_51 = t;
          t = term_u_42;
          t = u_15(p_51, u_51, t);
        }
      }
  }
  k_51 = t;
  t = h_51;
  t = get_include_dirs_0_0(t);
  x_50 = t;
  t = h_51;
  t = pass_keep_0_0(t);
  f_51 = t;
  t = term_v_61;
  {
    ATerm w_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL,w_51 = NULL;
        t = term_k_37;
        v_51 = t;
        t = term_v_61;
        w_51 = t;
        t = term_a_62;
        t = u_15(v_51, w_51, t);
        LocalPopChoice(z_61);
        t = (ATerm) ATinsert(ATempty, term_v_61);
      }
    else
      {
        t = w_61;
        t = (ATerm) ATempty;
      }
  }
  g_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_51), f_51), x_50), (ATerm) ATinsert(ATinsert(ATempty, k_51), term_m_62));
  t = concat_0_0(t);
  w_50 = t;
  t = h_51;
  t = comp_0_2(v_50, w_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_128 (ATerm), ATerm t)
{
  ATerm a_52 = NULL;
  a_52 = t;
  {
    ATerm n_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
        t = term_k_37;
        k_52 = t;
        t = term_l_37;
        l_52 = t;
        t = term_m_37;
        t = u_15(k_52, l_52, t);
        j_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_52, term_d_41);
        t = geq_0_0(t);
        t = a_52;
        t = h_128(t);
        LocalPopChoice(o_62);
      }
    else
      {
        t = n_62;
        t = a_52;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  d_53 = t;
  t = SSL_explode_string(d_53);
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
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
            ATerm s_62 = t;
            int u_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_30 = NULL,e_31 = NULL,q_10 = NULL;
                t = SSLgetAnnotations(t_54);
                z_30 = t;
                t = v_54;
                t = a_55(t);
                e_31 = t;
                t = (ATerm) ATinsert(CheckATermList(e_31), u_54);
                q_10 = t;
                t = SSLsetAnnotations(q_10, z_30);
                LocalPopChoice(u_62);
              }
            else
              {
                t = s_62;
                {
                  ATerm w_62 = t;
                  int x_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_32 = NULL,s_10 = NULL;
                      t = SSLgetAnnotations(t_54);
                      h_32 = t;
                      t = u_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(v_54), u_54);
                      s_10 = t;
                      t = SSLsetAnnotations(s_10, h_32);
                      LocalPopChoice(x_62);
                    }
                  else
                    {
                      t = w_62;
                      {
                        ATerm c_33 = NULL,g_33 = NULL,t_10 = NULL;
                        t = SSLgetAnnotations(t_54);
                        c_33 = t;
                        t = u_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = v_54;
                        t = j_123(t);
                        g_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_33), u_54);
                        t_10 = t;
                        t = SSLsetAnnotations(t_10, c_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = a_55(t);
        LocalPopChoice(r_62);
      }
    else
      {
        t = q_62;
      }
  }
  c_53 = t;
  t = SSL_implode_string(c_53);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = debug_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_y_62;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = debug_1_0(r_22, t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_z_62;
  return(t);
}
static ATerm t_14 (ATerm w_22, ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  t = w_22;
  t = basename_1_0(_id, t);
  n_55 = t;
  t = if_verbose3_1_0(n_22, t);
  t = term_x_42;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_42, n_55);
  t = z_15(q_55, n_55, t);
  {
    ATerm a_63 = t;
    int c_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_55 = NULL,a_56 = NULL;
        t = term_k_37;
        x_55 = t;
        t = term_a_38;
        a_56 = t;
        t = term_b_38;
        t = u_15(x_55, a_56, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(c_63);
      }
    else
      {
        t = a_63;
        t = n_55;
      }
  }
  o_55 = t;
  t = if_verbose3_1_0(p_22, t);
  t = term_r_42;
  p_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, o_55);
  t = z_15(p_55, o_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_55);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = debug_1_0(x_22, t);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = term_f_63;
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = if_verbose1_1_0(d_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm u_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,m_58 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL,l_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      m_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(m_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_58 = NULL,o_58 = NULL,t_58 = NULL;
        n_58 = t;
        t = term_k_37;
        o_58 = t;
        t = term_d_40;
        t_58 = t;
        t = term_e_40;
        t = u_15(o_58, t_58, t);
        t = n_58;
        LocalPopChoice(h_63);
      }
    else
      {
        t = g_63;
        t = add_main_0_0(t);
      }
  }
  e_58 = t;
  {
    ATerm i_63 = t;
    int j_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_59 = ATgetArgument(t, 0);
            {
              ATerm y_33 = NULL,x_10 = NULL;
              t = SSLgetAnnotations(e_58);
              y_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_59);
              x_10 = t;
              t = SSLsetAnnotations(x_10, y_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_58;
          }
        LocalPopChoice(j_63);
        t = xtc_transform_file_2_0(f_23, j_23, t);
      }
    else
      {
        t = i_63;
        t = xtc_transform_term_2_0(n_23, o_23, t);
      }
  }
  d_58 = t;
  {
    ATerm k_63 = t;
    int l_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_59 = ATgetArgument(t, 0);
            {
              ATerm c_34 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(d_58);
              c_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_59);
              z_10 = t;
              t = SSLsetAnnotations(z_10, c_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_58;
          }
        LocalPopChoice(l_63);
        t = xtc_transform_file_2_0(p_23, q_23, t);
      }
    else
      {
        t = k_63;
        t = xtc_transform_term_2_0(s_23, v_23, t);
      }
  }
  t = if_keep5_1_0(w_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(y_23, t);
  o_34 = t;
  t = term_m_63;
  l_34 = t;
  t = o_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  n_34 = t;
  t = o_34;
  t = comp_0_2(l_34, n_34, t);
  t = if_keep6_1_0(d_24, t);
  c_58 = t;
  {
    ATerm n_63 = t;
    int o_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm s_34 = NULL,g_11 = NULL;
              t = SSLgetAnnotations(c_58);
              s_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              g_11 = t;
              t = SSLsetAnnotations(g_11, s_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_58;
          }
        LocalPopChoice(o_63);
        t = xtc_transform_file_2_0(h_24, i_24, t);
      }
    else
      {
        t = n_63;
        t = xtc_transform_term_2_0(j_24, l_24, t);
      }
  }
  t = if_keep6_1_0(m_24, t);
  a_58 = t;
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_59 = ATgetArgument(t, 0);
            {
              ATerm y_34 = NULL,n_11 = NULL;
              t = SSLgetAnnotations(a_58);
              y_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_59);
              n_11 = t;
              t = SSLsetAnnotations(n_11, y_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_58;
          }
        LocalPopChoice(q_63);
        t = xtc_transform_file_2_0(o_24, r_24, t);
      }
    else
      {
        t = p_63;
        t = xtc_transform_term_2_0(s_24, t_24, t);
      }
  }
  t = if_keep5_1_0(u_24, t);
  z_57 = t;
  {
    ATerm r_63 = t;
    int s_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_60 = ATgetArgument(t, 0);
            {
              ATerm e_35 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(z_57);
              e_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_60);
              n_12 = t;
              t = SSLsetAnnotations(n_12, e_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_57;
          }
        LocalPopChoice(s_63);
        t = xtc_transform_file_2_0(d_25, e_25, t);
      }
    else
      {
        t = r_63;
        t = xtc_transform_term_2_0(f_25, i_25, t);
      }
  }
  t = if_keep5_1_0(o_25, t);
  y_57 = t;
  {
    ATerm t_63 = t;
    int u_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_60 = ATgetArgument(t, 0);
            {
              ATerm s_35 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(y_57);
              s_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_60);
              o_12 = t;
              t = SSLsetAnnotations(o_12, s_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_57;
          }
        LocalPopChoice(u_63);
        t = xtc_transform_file_2_0(q_25, r_25, t);
      }
    else
      {
        t = t_63;
        t = xtc_transform_term_2_0(s_25, t_25, t);
      }
  }
  t = if_keep5_1_0(u_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm v_63 = t;
    int x_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_60 = NULL,a_61 = NULL,b_61 = NULL;
        x_60 = t;
        t = term_k_37;
        a_61 = t;
        t = term_d_40;
        b_61 = t;
        t = term_e_40;
        t = u_15(a_61, b_61, t);
        t = x_60;
        LocalPopChoice(x_63);
        {
          ATerm c_61 = NULL;
          c_61 = t;
          {
            ATerm y_63 = t;
            int z_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    i_61 = ATgetArgument(t, 0);
                    {
                      ATerm a_36 = NULL,p_12 = NULL;
                      t = SSLgetAnnotations(c_61);
                      a_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, i_61);
                      p_12 = t;
                      t = SSLsetAnnotations(p_12, a_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = c_61;
                  }
                LocalPopChoice(z_63);
                t = xtc_transform_file_2_0(x_25, a_26, t);
              }
            else
              {
                t = y_63;
                t = xtc_transform_term_2_0(b_26, c_26, t);
              }
          }
        }
      }
    else
      {
        t = v_63;
        {
          ATerm p_61 = NULL;
          p_61 = t;
          {
            ATerm b_64 = t;
            int c_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    t_61 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,r_12 = NULL;
                      t = SSLgetAnnotations(p_61);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, t_61);
                      r_12 = t;
                      t = SSLsetAnnotations(r_12, k_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_61;
                  }
                LocalPopChoice(c_64);
                t = xtc_transform_file_2_0(d_26, f_26, t);
              }
            else
              {
                t = b_64;
                t = xtc_transform_term_2_0(g_26, j_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  v_36 = t;
  t = term_d_64;
  s_36 = t;
  t = v_36;
  t = pass_warnings_0_0(t);
  t_36 = t;
  t = v_36;
  t = comp_0_2(s_36, t_36, t);
  x_57 = t;
  {
    ATerm g_64 = t;
    int h_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_62 = ATgetArgument(t, 0);
            {
              ATerm x_36 = NULL,s_12 = NULL;
              t = SSLgetAnnotations(x_57);
              x_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_62);
              s_12 = t;
              t = SSLsetAnnotations(s_12, x_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_57;
          }
        LocalPopChoice(h_64);
        t = xtc_transform_file_2_0(n_26, o_26, t);
      }
    else
      {
        t = g_64;
        t = xtc_transform_term_2_0(q_26, r_26, t);
      }
  }
  u_57 = t;
  {
    ATerm i_64 = t;
    int k_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_63 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_63 = ATgetArgument(t, 0);
            {
              ATerm b_37 = NULL,t_12 = NULL;
              t = SSLgetAnnotations(u_57);
              b_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_63);
              t_12 = t;
              t = SSLsetAnnotations(t_12, b_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_57;
          }
        LocalPopChoice(k_64);
        t = xtc_transform_file_2_0(t_26, x_26, t);
      }
    else
      {
        t = i_64;
        t = xtc_transform_term_2_0(y_26, z_26, t);
      }
  }
  t = if_keep2_1_0(a_27, t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  t = term_r_37;
  s_57 = t;
  t = (ATerm) ATinsert(CheckATermList(r_57), term_l_64);
  t_57 = t;
  t = SSL_printnl(s_57, t_57);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(r_57), term_l_64));
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_m_64;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm g_59 = NULL;
  t = pass_verbose_0_0(t);
  g_59 = t;
  t = (ATerm) ATinsert(CheckATermList(g_59), term_p_40);
  return(t);
}
static ATerm n_23 (ATerm t)
{
  t = term_m_64;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm h_59 = NULL;
  t = pass_verbose_0_0(t);
  h_59 = t;
  t = (ATerm) ATinsert(CheckATermList(h_59), term_p_40);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = term_d_65;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm n_59 = NULL;
  t = pass_verbose_0_0(t);
  n_59 = t;
  t = (ATerm) ATinsert(CheckATermList(n_59), term_p_40);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_d_65;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm o_59 = NULL;
  t = pass_verbose_0_0(t);
  o_59 = t;
  t = (ATerm) ATinsert(CheckATermList(o_59), term_p_40);
  return(t);
}
static ATerm w_23 (ATerm t)
{
  t = save_as_1_0(x_23, t);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  t = term_f_65;
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = save_as_1_0(a_24, t);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_g_65;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = save_as_1_0(e_24, t);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_h_65;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_i_65;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_p_40);
  return(t);
}
static ATerm j_24 (ATerm t)
{
  t = term_i_65;
  return(t);
}
static ATerm l_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_p_40);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = save_as_1_0(n_24, t);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = term_p_65;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_q_65;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm b_60 = NULL;
  t = pass_verbose_0_0(t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), term_p_40);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_q_65;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm c_60 = NULL;
  t = pass_verbose_0_0(t);
  c_60 = t;
  t = (ATerm) ATinsert(CheckATermList(c_60), term_p_40);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = save_as_1_0(x_24, t);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  t = term_s_65;
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_t_65;
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm k_60 = NULL;
  t = pass_verbose_0_0(t);
  k_60 = t;
  t = (ATerm) ATinsert(CheckATermList(k_60), term_p_40);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  t = term_t_65;
  return(t);
}
static ATerm i_25 (ATerm t)
{
  ATerm m_60 = NULL;
  t = pass_verbose_0_0(t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), term_p_40);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = save_as_1_0(p_25, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_u_65;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_w_65;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm v_60 = NULL;
  t = pass_verbose_0_0(t);
  v_60 = t;
  t = (ATerm) ATinsert(CheckATermList(v_60), term_p_40);
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = term_w_65;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm w_60 = NULL;
  t = pass_verbose_0_0(t);
  w_60 = t;
  t = (ATerm) ATinsert(CheckATermList(w_60), term_p_40);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = save_as_1_0(w_25, t);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_x_65;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_d_56;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm m_61 = NULL;
  t = pass_verbose_0_0(t);
  m_61 = t;
  t = (ATerm) ATinsert(CheckATermList(m_61), term_p_40);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_d_56;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm o_61 = NULL;
  t = pass_verbose_0_0(t);
  o_61 = t;
  t = (ATerm) ATinsert(CheckATermList(o_61), term_p_40);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_y_65;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm x_61 = NULL;
  t = pass_verbose_0_0(t);
  x_61 = t;
  t = (ATerm) ATinsert(CheckATermList(x_61), term_p_40);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_y_65;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm y_61 = NULL;
  t = pass_verbose_0_0(t);
  y_61 = t;
  t = (ATerm) ATinsert(CheckATermList(y_61), term_p_40);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(m_26, t);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = term_z_65;
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_a_66;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm t_62 = NULL;
  t = pass_verbose_0_0(t);
  t_62 = t;
  t = (ATerm) ATinsert(CheckATermList(t_62), term_p_40);
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_a_66;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  ATerm v_62 = NULL;
  t = pass_verbose_0_0(t);
  v_62 = t;
  t = (ATerm) ATinsert(CheckATermList(v_62), term_p_40);
  return(t);
}
static ATerm t_26 (ATerm t)
{
  t = term_b_66;
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm d_63 = NULL;
  t = pass_verbose_0_0(t);
  d_63 = t;
  t = (ATerm) ATinsert(CheckATermList(d_63), term_p_40);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_b_66;
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm e_63 = NULL;
  t = pass_verbose_0_0(t);
  e_63 = t;
  t = (ATerm) ATinsert(CheckATermList(e_63), term_p_40);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = save_as_1_0(e_27, t);
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_g_66;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(t_22, t);
  t = profile_p__2_0(y_22, z_22, t);
  return(t);
}
static ATerm u_15 (ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm w_63 = NULL;
  t = lookup_table_0_1(c_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(d_59, w_63, t);
  return(t);
}
static ATerm u_14 (ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm a_64 = NULL,e_64 = NULL;
  e_64 = t;
  {
    ATerm h_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
        t = u_15(o_57, p_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_66 = ATgetFirst((ATermList) t);
            a_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_66);
        {
          ATerm f_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_57, p_57, a_64);
          t = lookup_table_0_1(o_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(p_57, a_64, f_64, t);
          t = (ATerm) ATmakeAppl(sym__3, o_57, p_57, a_64);
        }
      }
    else
      {
        t = h_66;
        {
          ATerm j_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
          t = lookup_table_0_1(o_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_15(p_57, j_64, t);
          t = (ATerm) ATmakeAppl(sym__2, o_57, p_57);
        }
      }
  }
  t = e_64;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,a_65 = NULL,b_65 = NULL;
  q_64 = t;
  t = k_102(t);
  p_64 = t;
  {
    ATerm l_66 = t;
    int m_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_65 = NULL;
        t = term_r_58;
        c_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_64, term_r_58);
        t = u_15(p_64, c_65, t);
        {
          ATerm n_66 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_66;
            }
        }
        LocalPopChoice(m_66);
      }
    else
      {
        t = l_66;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_64 = ATgetFirst((ATermList) t);
      n_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_64, term_r_58, n_64);
  t = lookup_table_0_1(p_64, t);
  b_65 = t;
  t = term_r_58;
  r_64 = t;
  t = b_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(r_64, n_64, a_65, t);
  t = o_64;
  {
    static ATerm i_27 (ATerm t);
    static ATerm i_27 (ATerm t)
    {
      ATerm e_65 = NULL;
      e_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_64, e_65);
      t = u_14(p_64, e_65, t);
      return(t);
    }
    t = map_1_0(i_27, t);
  }
  t = q_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t)
{
  ATerm p_66 = t;
  int t_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_104(t);
      t = t_104(t);
      LocalPopChoice(t_66);
    }
  else
    {
      t = p_66;
      t = t_104(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,r_65 = NULL;
  k_65 = t;
  t = j_102(t);
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_65, term_r_58);
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_67 = ATgetArgument(t, 0);
            ATerm f_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_58;
        v_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_65, term_r_58);
        t = u_15(j_65, v_65, t);
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
        t = (ATerm) ATempty;
      }
  }
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_65, term_r_58, (ATerm) ATinsert(CheckATermList(l_65), (ATerm) ATempty));
  t = lookup_table_0_1(j_65, t);
  r_65 = t;
  t = term_r_58;
  m_65 = t;
  t = (ATerm) ATinsert(CheckATermList(l_65), (ATerm) ATempty);
  n_65 = t;
  t = r_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(m_65, n_65, o_65, t);
  t = k_65;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  t = term_z_58;
  return(t);
}
static ATerm n_27 (ATerm t)
{
  ATerm i_66 = NULL;
  i_66 = t;
  {
    ATerm h_67 = t;
    int i_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_66);
        LocalPopChoice(i_67);
      }
    else
      {
        t = h_67;
        t = i_66;
      }
  }
  return(t);
}
static ATerm o_27 (ATerm t)
{
  t = term_z_58;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_137 (ATerm), ATerm t)
{
  ATerm c_66 = NULL;
  static ATerm l_27 (ATerm t);
  static ATerm l_27 (ATerm t)
  {
    ATerm d_66 = NULL;
    d_66 = t;
    {
      ATerm m_67 = t;
      int p_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_66 = NULL,f_66 = NULL;
          t = term_z_58;
          e_66 = t;
          t = term_r_58;
          f_66 = t;
          t = term_e_60;
          t = u_15(e_66, f_66, t);
          LocalPopChoice(p_67);
        }
      else
        {
          t = m_67;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_66 != NULL) && (c_66 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_66 = ATgetFirst((ATermList) t);
        {
          ATerm s_67 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_66;
    t = map_1_0(n_27, t);
    t = d_66;
    t = end_scope_1_0(o_27, t);
    return(t);
  }
  t = begin_scope_1_0(k_27, t);
  t = restore_always_2_0(p_137, l_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_128 (ATerm), ATerm t)
{
  ATerm o_66 = NULL;
  o_66 = t;
  {
    ATerm t_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
        t = term_k_37;
        r_66 = t;
        t = term_l_37;
        s_66 = t;
        t = term_m_37;
        t = u_15(r_66, s_66, t);
        q_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_66, term_s_38);
        t = geq_0_0(t);
        t = o_66;
        t = f_128(t);
        LocalPopChoice(w_67);
      }
    else
      {
        t = t_67;
        t = o_66;
      }
  }
  return(t);
}
static ATerm w_14 (ATerm s_55, ATerm t_55, ATerm t)
{
  ATerm x_67 = t;
  int b_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_55, t_55);
      LocalPopChoice(b_68);
    }
  else
    {
      t = x_67;
      t = SSL_addr(s_55, t_55);
    }
  return(t);
}
static ATerm y_14 (ATerm y_55, ATerm z_55, ATerm t)
{
  ATerm c_68 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(y_55, z_55);
      LocalPopChoice(f_68);
    }
  else
    {
      t = c_68;
      t = SSL_subtr(y_55, z_55);
    }
  return(t);
}
static ATerm z_14 (ATerm s_64, ATerm u_64, ATerm w_64, ATerm y_64, ATerm t_64, ATerm v_64, ATerm x_64, ATerm z_64, ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL,z_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
  t = y_14(s_64, t_64, t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
  t = y_14(u_64, v_64, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_64, x_64);
  t = y_14(w_64, x_64, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_64, z_64);
  t = y_14(y_64, z_64, t);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_66, v_66, w_66, z_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm g_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,n_67 = NULL,o_67 = NULL,q_67 = NULL,r_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_68 = ATgetArgument(t, 0);
      if(match_cons(h_68, sym__4))
        {
          g_67 = ATgetArgument(h_68, 0);
          j_67 = ATgetArgument(h_68, 1);
          k_67 = ATgetArgument(h_68, 2);
          l_67 = ATgetArgument(h_68, 3);
        }
      else
        _fail(t);
      {
        ATerm l_68 = ATgetArgument(t, 1);
        if(match_cons(l_68, sym__4))
          {
            n_67 = ATgetArgument(l_68, 0);
            o_67 = ATgetArgument(l_68, 1);
            q_67 = ATgetArgument(l_68, 2);
            r_67 = ATgetArgument(l_68, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_14(g_67, j_67, k_67, l_67, n_67, o_67, q_67, r_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,d_68 = NULL,e_68 = NULL,g_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,m_68 = NULL,o_68 = NULL;
  e_68 = t;
  t = times_0_0(t);
  u_67 = t;
  t = e_68;
  t = d_126(t);
  v_67 = t;
  t = times_0_0(t);
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_68, u_67);
  t = diff_times_0_0(t);
  a_68 = t;
  if(match_cons(t, sym__4))
    {
      k_68 = ATgetArgument(t, 0);
      {
        ATerm n_68 = ATgetArgument(t, 1);
      }
      m_68 = ATgetArgument(t, 2);
      {
        ATerm z_68 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_68, m_68);
  t = w_14(k_68, m_68, t);
  o_68 = t;
  t = SSL_TicksToSeconds(o_68);
  y_67 = t;
  t = a_68;
  if(match_cons(t, sym__4))
    {
      ATerm a_69 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
      {
        ATerm b_69 = ATgetArgument(t, 2);
      }
      i_68 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_68, i_68);
  t = w_14(g_68, i_68, t);
  j_68 = t;
  t = SSL_TicksToSeconds(j_68);
  z_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_67), term_f_69), y_67), term_e_69);
  t = c_126(t);
  t = v_67;
  return(t);
}
ATerm debug_1_0 (ATerm x_111 (ATerm), ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  p_68 = t;
  t = x_111(t);
  q_68 = t;
  t = term_r_37;
  r_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_68), q_68);
  s_68 = t;
  t = SSL_printnl(r_68, s_68);
  t = p_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  t_68 = t;
  t = term_k_37;
  x_68 = t;
  t = term_g_69;
  y_68 = t;
  t = term_h_69;
  t = u_15(x_68, y_68, t);
  u_68 = t;
  t = term_s_39;
  v_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_69), term_o_69), term_n_69), term_m_69), term_l_69), term_k_69), term_j_69), u_68), term_i_69);
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
static ATerm c_15 (ATerm f_37, ATerm v_297, ATerm t)
{
  static ATerm r_27 (ATerm t);
  static ATerm r_27 (ATerm t)
  {
    if((f_37 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = v_297;
  t = fetch_1_0(r_27, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  static ATerm b_70 (ATerm t);
  static ATerm b_70 (ATerm t)
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_113(t);
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        {
          ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL,x_37 = NULL,k_38 = NULL,n_13 = NULL;
          u_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_69 = ATgetFirst((ATermList) t);
              w_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_69);
          x_37 = t;
          t = w_69;
          t = b_70(t);
          k_38 = t;
          t = (ATerm) ATinsert(CheckATermList(k_38), v_69);
          n_13 = t;
          t = SSLsetAnnotations(n_13, x_37);
        }
      }
    return(t);
  }
  t = b_70(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_112 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm i_70 = NULL,j_70 = NULL,l_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,t_70 = NULL,u_13 = NULL,s_13 = NULL;
    t_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_70 = ATgetFirst((ATermList) t);
        p_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_70);
    n_70 = t;
    t = o_70;
    t = v_112(t);
    q_70 = t;
    t = (ATerm) ATinsert(CheckATermList(p_70), q_70);
    s_13 = t;
    t = SSLsetAnnotations(s_13, n_70);
    r_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_70 = ATgetFirst((ATermList) t);
        l_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_70);
    i_70 = t;
    t = l_70;
    if(((f_70 != NULL) && (f_70 != t)))
      _fail(t);
    else
      f_70 = t;
    t = (ATerm) ATinsert(CheckATermList(l_70), j_70);
    u_13 = t;
    t = SSLsetAnnotations(u_13, i_70);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_27, t);
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_70, not_null(f_70));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,s_71 = NULL;
  ATerm s_69 = t;
  int t_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(f_122, t);
      LocalPopChoice(t_69);
    }
  else
    {
      t = s_69;
      {
        ATerm l_71 = NULL;
        l_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_71, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      o_71 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_69 = ATgetFirst((ATermList) t);
              ATerm y_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_71;
          t = list_tokenize_1_0(f_122, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm z_69 = ATgetFirst((ATermList) t);
          ATerm a_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, o_71);
        }
      else
        {
          ATerm d_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_70 = ATgetFirst((ATermList) t);
              ATerm d_70 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_71;
          t = list_tokenize_1_0(f_122, t);
          d_72 = t;
          t = (ATerm) ATinsert(CheckATermList(d_72), o_71);
        }
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  t = SSL_implode_string(a_73);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,r_72 = NULL,o_18 = NULL;
  r_72 = t;
  if(match_cons(t, sym__2))
    {
      m_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_72);
  k_72 = t;
  t = SSL_explode_string(n_72);
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_72, o_72);
  o_18 = t;
  t = SSLsetAnnotations(o_18, k_72);
  if(match_cons(t, sym__2))
    {
      i_72 = ATgetArgument(t, 0);
      j_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_72;
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm s_72 = NULL;
      s_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_72, i_72);
      t = c_15(s_72, i_72, t);
      return(t);
    }
    t = list_tokenize_1_0(t_27, t);
  }
  t = map_1_0(u_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm v_73 = NULL;
  v_73 = t;
  {
    ATerm e_70 = t;
    int h_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_38 = NULL;
        t = SSL_filemode(v_73);
        if(match_cons(t, sym__2))
          {
            y_38 = ATgetArgument(t, 0);
            {
              ATerm k_70 = ATgetArgument(t, 1);
              if(((ATgetType(k_70) != AT_INT) || (ATgetInt((ATermInt) k_70) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_38;
        LocalPopChoice(h_70);
      }
    else
      {
        t = e_70;
        {
          ATerm d_39 = NULL,e_39 = NULL;
          t = term_m_70;
          e_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_70, v_73);
          t = a_16(e_39, v_73, t);
          d_39 = t;
          t = SSL_perror(d_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm d_15 (ATerm d_67, ATerm c_67, ATerm t)
{
  ATerm y_73 = NULL,b_74 = NULL;
  b_74 = t;
  {
    ATerm s_70 = t;
    int u_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_74 = NULL,d_74 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_59);
        d_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_67, (ATerm) ATinsert(ATempty, term_f_59));
        t = q_15(c_67, d_74, t);
        t = filemode_0_0(t);
        c_74 = t;
        t = SSL_S_ISDIR(c_74);
        t = b_74;
        LocalPopChoice(u_70);
        {
          ATerm h_74 = NULL,i_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_v_70), d_67);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          h_74 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_74), term_w_70), c_67);
          i_74 = t;
          t = SSL_concat_strings(i_74);
        }
      }
    else
      {
        t = s_70;
        t = c_67;
      }
  }
  y_73 = t;
  t = SSL_copy(d_67, y_73);
  return(t);
}
static ATerm e_15 (ATerm i_62, ATerm t)
{
  t = SSL_hashtable_keys(i_62);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_74 = NULL,m_74 = NULL;
  static ATerm v_27 (ATerm t);
  static ATerm v_27 (ATerm t)
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
  t = term_x_70;
  return(t);
}
static ATerm t_75 (ATerm u_74, ATerm t)
{
  ATerm y_74 = NULL,a_75 = NULL,b_75 = NULL;
  t = term_y_70;
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_74);
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_70, (ATerm) ATmakeAppl(sym_Tool_1, u_74));
  t = u_15(a_75, b_75, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_70 = ATgetFirst((ATermList) t);
      if(match_cons(z_70, sym__2))
        {
          ATerm j_71 = ATgetArgument(z_70, 0);
          y_74 = ATgetArgument(z_70, 1);
        }
      else
        _fail(t);
      {
        ATerm c_71 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_74;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_x_70;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_y_70;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_28, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_k_71;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_71 = t;
  int n_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
      t = if_verbose5_1_0(w_27, t);
      t = xtc_load_0_0(t);
      e_75 = t;
      if(match_cons(t, sym__2))
        {
          c_75 = ATgetArgument(t, 0);
          d_75 = ATgetArgument(t, 1);
          {
            ATerm p_71 = t;
            int q_71 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_75 = NULL,k_75 = NULL,m_75 = NULL;
                t = term_y_70;
                k_75 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_75);
                m_75 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_70, (ATerm) ATmakeAppl(sym_Tool_1, c_75));
                t = u_15(k_75, m_75, t);
                {
                  static ATerm y_27 (ATerm t);
                  static ATerm y_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_75 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_75 != NULL) && (j_75 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_27, t);
                }
                t = not_null(j_75);
                LocalPopChoice(q_71);
              }
            else
              {
                t = p_71;
                t = t_75(e_75, t);
              }
          }
        }
      else
        {
          t = t_75(e_75, t);
        }
      t = if_verbose5_1_0(z_27, t);
      LocalPopChoice(n_71);
    }
  else
    {
      t = m_71;
      {
        ATerm r_75 = NULL,i_39 = NULL,j_39 = NULL;
        r_75 = t;
        t = term_r_37;
        i_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_71), r_75), term_r_71);
        j_39 = t;
        t = SSL_printnl(i_39, j_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_71), r_75), term_r_71);
        t = if_verbose5_1_0(b_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_15 (ATerm g_71, ATerm f_71, ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  t = g_71;
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_76 = NULL;
        t = term_k_37;
        c_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_37, g_71);
        t = u_15(c_76, g_71, t);
        LocalPopChoice(v_71);
      }
    else
      {
        t = u_71;
        t = (ATerm) ATempty;
      }
  }
  x_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_71, x_75);
  t = conc_0_0(t);
  w_75 = t;
  t = term_k_37;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, g_71, w_75);
  t = lookup_table_0_1(y_75, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(g_71, w_75, z_75, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, g_71, w_75);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm g_76 = NULL,i_76 = NULL,k_76 = NULL,l_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_76 = NULL,o_76 = NULL,p_76 = NULL;
      t = term_m_39;
      t = q_0(t);
      m_76 = t;
      t = term_w_71;
      o_76 = t;
      t = term_z_71;
      p_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_71, term_z_71, m_76);
      t = v_15(o_76, p_76, m_76, t);
      _fail(t);
    }
  else
    {
      ATerm t_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_76 = ATgetFirst((ATermList) t);
          i_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_76 = ATgetFirst((ATermList) t);
          l_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_76;
      t = o_0(t);
      t = k_76;
      t = p_0(t);
      t_76 = t;
      t = (ATerm) ATinsert(CheckATermList(l_76), t_76);
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  if(match_string(t, "-S"))
    {
      t = x_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_76;
    }
  return(t);
}
static ATerm e_28 (ATerm t)
{
  ATerm y_76 = NULL,a_77 = NULL;
  t = term_l_37;
  y_76 = t;
  t = term_c_37;
  a_77 = t;
  t = term_a_72;
  t = z_15(y_76, a_77, t);
  t = term_b_72;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_c_72;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  t = SSL_string_to_int(c_77);
  d_77 = t;
  t = term_l_37;
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_37, d_77);
  t = z_15(e_77, d_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_77);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_e_72;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_28 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL;
  t = term_f_72;
  f_77 = t;
  t = term_m_39;
  g_77 = t;
  t = term_g_72;
  t = z_15(f_77, g_77, t);
  t = term_h_72;
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_l_72;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_28, e_28, f_28, t);
      LocalPopChoice(q_72);
    }
  else
    {
      t = p_72;
      {
        ATerm t_72 = t;
        int u_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_28, h_28, i_28, t);
            LocalPopChoice(u_72);
          }
        else
          {
            t = t_72;
            t = Option_3_0(j_28, k_28, m_28, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm o_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  o_77 = t;
  t = term_k_37;
  b_78 = t;
  t = term_f_38;
  c_78 = t;
  t = term_m_38;
  t = u_15(b_78, c_78, t);
  {
    static ATerm n_28 (ATerm t);
    static ATerm n_28 (ATerm t)
    {
      ATerm d_78 = NULL;
      d_78 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = o_77;
        }
      else
        {
          t = d_78;
        }
      return(t);
    }
    t = map_1_0(n_28, t);
  }
  z_77 = t;
  t = term_f_38;
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, z_77);
  t = z_15(a_78, z_77, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm k_78 = NULL;
  k_78 = t;
  {
    ATerm v_72 = t;
    int w_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_78 = NULL,p_78 = NULL,r_78 = NULL;
        t = term_k_37;
        p_78 = t;
        t = term_l_37;
        r_78 = t;
        t = term_m_37;
        t = u_15(p_78, r_78, t);
        n_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_78, term_a_47);
        t = geq_0_0(t);
        t = k_78;
        t = j_128(t);
        LocalPopChoice(w_72);
      }
    else
      {
        t = v_72;
        t = k_78;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm i_128 (ATerm), ATerm t)
{
  ATerm u_78 = NULL;
  u_78 = t;
  {
    ATerm x_72 = t;
    int y_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
        t = term_k_37;
        x_78 = t;
        t = term_l_37;
        y_78 = t;
        t = term_m_37;
        t = u_15(x_78, y_78, t);
        w_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_78, term_l_44);
        t = geq_0_0(t);
        t = u_78;
        t = i_128(t);
        LocalPopChoice(y_72);
      }
    else
      {
        t = x_72;
        t = u_78;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL;
  p_79 = t;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_72 = t;
    int b_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_79;
        if((q_79 != t))
          {
            _fail(t);
          }
        t = p_79;
        LocalPopChoice(b_73);
      }
    else
      {
        t = z_72;
        t = (ATerm) ATmakeAppl(sym__2, q_79, r_79);
        {
          ATerm c_73 = t;
          int d_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_79, r_79);
              LocalPopChoice(d_73);
            }
          else
            {
              t = c_73;
              t = SSL_gtr(q_79, r_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_79, r_79);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm k_128 (ATerm), ATerm t)
{
  ATerm w_79 = NULL;
  w_79 = t;
  {
    ATerm e_73 = t;
    int f_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_79 = NULL,b_80 = NULL,c_80 = NULL;
        t = term_k_37;
        b_80 = t;
        t = term_l_37;
        c_80 = t;
        t = term_m_37;
        t = u_15(b_80, c_80, t);
        z_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_79, term_t_49);
        t = geq_0_0(t);
        t = w_79;
        t = k_128(t);
        LocalPopChoice(f_73);
      }
    else
      {
        t = e_73;
        t = w_79;
      }
  }
  return(t);
}
static ATerm i_15 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm q_42, ATerm p_42, ATerm t)
{
  t = x_116(t);
  {
    static ATerm o_28 (ATerm t);
    static ATerm o_28 (ATerm t)
    {
      ATerm e_80 = NULL;
      e_80 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_42, e_80);
      t = w_116(t);
      return(t);
    }
    t = fetch_1_0(o_28, t);
  }
  t = p_42;
  return(t);
}
static ATerm j_15 (ATerm t_116 (ATerm), ATerm m_42, ATerm l_42, ATerm t)
{
  static ATerm a_81 (ATerm t);
  static ATerm a_81 (ATerm t)
  {
    ATerm s_80 = NULL,t_80 = NULL,v_80 = NULL;
    s_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_80 = ATgetFirst((ATermList) t);
            v_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_73 = t;
          int h_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_80;
              {
                static ATerm p_28 (ATerm t);
                static ATerm p_28 (ATerm t)
                {
                  t = l_42;
                  return(t);
                }
                t = i_15(t_116, p_28, t_80, v_80, t);
              }
              t = a_81(t);
              LocalPopChoice(h_73);
            }
          else
            {
              t = g_73;
              {
                ATerm r_40 = NULL,a_41 = NULL,v_18 = NULL;
                t = SSLgetAnnotations(s_80);
                r_40 = t;
                t = v_80;
                t = a_81(t);
                a_41 = t;
                t = (ATerm) ATinsert(CheckATermList(a_41), t_80);
                v_18 = t;
                t = SSLsetAnnotations(v_18, r_40);
              }
            }
        }
      }
    return(t);
  }
  t = m_42;
  t = a_81(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm n_81 = NULL;
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      if((n_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_15 (ATerm g_58, ATerm h_58, ATerm i_58, ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL,h_81 = NULL;
  d_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  {
    ATerm i_73 = t;
    int j_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_73 = ATgetArgument(t, 0);
            ATerm l_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
        t = u_15(g_58, h_58, t);
        LocalPopChoice(j_73);
      }
    else
      {
        t = i_73;
        t = (ATerm) ATempty;
      }
  }
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_81, i_58);
  t = j_15(q_28, f_81, i_58, t);
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_58, h_58, e_81);
  t = lookup_table_0_1(g_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_58, e_81, h_81, t);
  t = d_81;
  return(t);
}
static ATerm l_15 (ATerm w_125 (ATerm), ATerm q_58, ATerm p_58, ATerm t)
{
  static ATerm r_28 (ATerm t);
  static ATerm r_28 (ATerm t)
  {
    ATerm o_81 = NULL,p_81 = NULL;
    if(match_cons(t, sym__2))
      {
        o_81 = ATgetArgument(t, 0);
        p_81 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_58, o_81, p_81);
    t = w_125(t);
    return(t);
  }
  t = p_58;
  t = map_1_0(r_28, t);
  return(t);
}
static ATerm j_82 (ATerm z_81, ATerm t)
{
  t = SSL_fclose(z_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL;
  g_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_82 = ATgetArgument(t, 0);
      {
        ATerm m_73 = t;
        int n_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_82);
            LocalPopChoice(n_73);
          }
        else
          {
            t = m_73;
            t = j_82(g_82, t);
          }
      }
    }
  else
    {
      t = j_82(g_82, t);
    }
  return(t);
}
static ATerm m_15 (ATerm j_36, ATerm t)
{
  t = SSL_read_term_from_stream(j_36);
  return(t);
}
static ATerm n_15 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_fopen(e_52, f_52);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
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
  ATerm o_82 = NULL;
  t = SSL_stdout_stream();
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_82 = NULL;
  t = SSL_stderr_stream();
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_82);
  return(t);
}
static ATerm k_84 (ATerm c_83, ATerm t)
{
  ATerm e_83 = NULL;
  t = SSL_explode_term(c_83);
  if(match_cons(t, sym__2))
    {
      ATerm o_73 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_73) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_73 = ATgetArgument(t, 1);
        if(((ATgetType(p_73) == AT_LIST) && !(ATisEmpty(p_73))))
          {
            e_83 = ATgetFirst((ATermList) p_73);
            {
              ATerm q_73 = (ATerm) ATgetNext((ATermList) p_73);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_84 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,p_83 = NULL,x_18 = NULL;
  t = SSLgetAnnotations(j_83);
  m_83 = t;
  t = h_83;
  if(match_cons(t, sym_Path_1))
    {
      p_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_83, i_83);
  x_18 = t;
  t = SSLsetAnnotations(x_18, m_83);
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(k_83, l_83, t);
  return(t);
}
static ATerm m_84 (ATerm v_83, ATerm w_83, ATerm x_83, ATerm t)
{
  ATerm y_83 = NULL,b_84 = NULL,c_84 = NULL,f_84 = NULL,y_18 = NULL;
  t = SSLgetAnnotations(x_83);
  c_84 = t;
  t = SSL_is_string(v_83);
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
        ATerm r_73 = t;
        int s_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_84(h_84, t);
            LocalPopChoice(s_73);
          }
        else
          {
            t = r_73;
            {
              ATerm t_73 = t;
              int u_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_84(i_84, j_84, h_84, t);
                  LocalPopChoice(u_73);
                }
              else
                {
                  t = t_73;
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
    ATerm w_73 = t;
    int x_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_84, term_z_73);
        t = o_15(t);
        LocalPopChoice(x_73);
      }
    else
      {
        t = w_73;
        {
          ATerm t_42 = NULL,w_42 = NULL;
          t = term_a_74;
          w_42 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_74, v_84);
          t = a_16(w_42, v_84, t);
          t_42 = t;
          t = SSL_perror(t_42);
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
static ATerm s_28 (ATerm t)
{
  t = term_e_74;
  return(t);
}
static ATerm z_28 (ATerm t)
{
  t = term_f_74;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_84 = NULL,z_84 = NULL;
      y_84 = t;
      t = (ATerm) ATinsert(ATempty, term_l_74);
      z_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_84, (ATerm) ATinsert(ATempty, term_l_74));
      t = q_15(y_84, z_84, t);
      LocalPopChoice(k_74);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_74;
      {
        ATerm p_74 = t;
        int q_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_74 = t;
            if((PushChoice() == 0))
              {
                ATerm a_85 = NULL,b_85 = NULL;
                a_85 = t;
                t = (ATerm) ATinsert(ATempty, term_f_59);
                b_85 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_85, (ATerm) ATinsert(ATempty, term_f_59));
                t = q_15(a_85, b_85, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_74;
              }
            t = debug_1_0(s_28, t);
            LocalPopChoice(q_74);
          }
        else
          {
            t = p_74;
            t = debug_1_0(z_28, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_29 (ATerm t)
{
  t = debug_1_0(g_29, t);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_s_74;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = debug_1_0(i_29, t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  t = term_t_74;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  x_85 = t;
  t = term_r_37;
  y_85 = t;
  t = (ATerm) ATinsert(ATempty, term_v_74);
  z_85 = t;
  t = SSL_printnl(y_85, z_85);
  t = x_85;
  return(t);
}
static ATerm k_29 (ATerm t)
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
static ATerm l_29 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  t = term_r_37;
  i_86 = t;
  t = (ATerm) ATinsert(ATempty, term_w_74);
  j_86 = t;
  t = SSL_printnl(i_86, j_86);
  t = h_86;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
  l_86 = t;
  t = term_r_37;
  m_86 = t;
  t = (ATerm) ATinsert(ATempty, term_v_74);
  n_86 = t;
  t = SSL_printnl(m_86, n_86);
  t = l_86;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,u_85 = NULL;
  c_85 = t;
  t = if_verbose5_1_0(f_29, t);
  {
    ATerm x_74 = t;
    if((PushChoice() == 0))
      {
        ATerm v_85 = NULL,w_85 = NULL;
        t = term_y_70;
        v_85 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_85);
        w_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_70, (ATerm) ATmakeAppl(sym_Imported_1, c_85));
        t = u_15(v_85, w_85, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_74;
      }
  }
  e_85 = t;
  t = term_y_70;
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_70, term_z_74, (ATerm) ATinsert(ATempty, c_85));
  t = lookup_table_0_1(p_85, t);
  u_85 = t;
  t = term_z_74;
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
  t = if_verbose4_1_0(h_29, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_29, t);
  d_85 = t;
  t = term_y_70;
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_70, d_85);
  t = l_15(k_29, k_85, d_85, t);
  t = if_verbose6_1_0(l_29, t);
  t = term_y_70;
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_70, (ATerm)ATmakeAppl(sym_Imported_1, c_85), (ATerm) ATempty);
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
  t = (ATerm) ATmakeAppl(sym__3, term_y_70, (ATerm)ATmakeAppl(sym_Imported_1, c_85), (ATerm) ATempty);
  t = if_verbose4_1_0(n_29, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_120 (ATerm), ATerm t)
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
        ATerm f_75 = t;
        int g_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_43 = NULL,k_43 = NULL,l_43 = NULL,k_19 = NULL;
            t = SSLgetAnnotations(b_87);
            h_43 = t;
            t = c_87;
            t = l_120(t);
            k_43 = t;
            t = d_87;
            t = filter_1_0(l_120, t);
            l_43 = t;
            t = (ATerm) ATinsert(CheckATermList(l_43), k_43);
            k_19 = t;
            t = SSLsetAnnotations(k_19, h_43);
            LocalPopChoice(g_75);
          }
        else
          {
            t = f_75;
            t = d_87;
            t = filter_1_0(l_120, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  static ATerm g_87 (ATerm t);
  static ATerm g_87 (ATerm t)
  {
    ATerm h_75 = t;
    int i_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_104(t);
        t = g_87(t);
        LocalPopChoice(i_75);
      }
    else
      {
        t = h_75;
        t = x_104(t);
      }
    return(t);
  }
  t = g_87(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_75 = t;
  int n_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_87 = NULL,i_87 = NULL;
      t = term_k_37;
      h_87 = t;
      t = term_o_75;
      i_87 = t;
      t = term_p_75;
      t = u_15(h_87, i_87, t);
      LocalPopChoice(n_75);
    }
  else
    {
      t = l_75;
      {
        ATerm q_75 = t;
        int s_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_87 = NULL;
            t = term_u_75;
            j_87 = t;
            t = SSL_getenv(j_87);
            LocalPopChoice(s_75);
          }
        else
          {
            t = q_75;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm t_29 (ATerm t)
{
  t = debug_1_0(z_29, t);
  return(t);
}
static ATerm z_29 (ATerm t)
{
  t = term_v_75;
  return(t);
}
static ATerm a_30 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  t = term_y_70;
  r_87 = t;
  t = term_a_76;
  s_87 = t;
  t = term_b_76;
  t = u_15(r_87, s_87, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_76 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_76;
      }
  }
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = debug_1_0(d_30, t);
  return(t);
}
static ATerm d_30 (ATerm t)
{
  t = term_e_76;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_87 = NULL;
  t = if_verbose5_1_0(t_29, t);
  l_87 = t;
  {
    ATerm f_76 = t;
    int h_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_87 = NULL,n_87 = NULL;
        t = term_y_70;
        m_87 = t;
        t = term_z_74;
        n_87 = t;
        t = term_j_76;
        t = u_15(m_87, n_87, t);
        LocalPopChoice(h_76);
      }
    else
      {
        t = f_76;
        {
          ATerm o_87 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          o_87 = t;
          t = repeat_2_0(a_30, _id, t);
          t = o_87;
        }
      }
  }
  t = l_87;
  t = if_verbose5_1_0(b_30, t);
  return(t);
}
static ATerm n_88 (ATerm y_87, ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,d_88 = NULL;
  t = term_y_70;
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_87);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_70, (ATerm) ATmakeAppl(sym_Tool_1, y_87));
  t = u_15(b_88, d_88, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_76 = ATgetFirst((ATermList) t);
      if(match_cons(n_76, sym__2))
        {
          ATerm r_76 = ATgetArgument(n_76, 0);
          a_88 = ATgetArgument(n_76, 1);
        }
      else
        _fail(t);
      {
        ATerm q_76 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_88;
  return(t);
}
static ATerm i_30 (ATerm t)
{
  t = debug_1_0(j_30, t);
  return(t);
}
static ATerm j_30 (ATerm t)
{
  t = term_x_70;
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
        ATerm s_76 = t;
        int u_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
            t = term_y_70;
            l_88 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, e_88);
            m_88 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_y_70, (ATerm) ATmakeAppl(sym_Tool_1, e_88));
            t = u_15(l_88, m_88, t);
            {
              static ATerm h_30 (ATerm t);
              static ATerm h_30 (ATerm t)
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
              t = fetch_1_0(h_30, t);
            }
            t = not_null(k_88);
            LocalPopChoice(u_76);
          }
        else
          {
            t = s_76;
            t = n_88(h_88, t);
          }
      }
    }
  else
    {
      t = n_88(h_88, t);
    }
  t = if_verbose5_1_0(i_30, t);
  return(t);
}
static ATerm p_15 (ATerm d_71, ATerm e_71, ATerm t)
{
  ATerm v_76 = t;
  int w_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_88 = NULL,p_88 = NULL,r_88 = NULL;
      t = term_k_37;
      r_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_37, d_71);
      t = u_15(r_88, d_71, t);
      t = term_k_37;
      o_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_37, d_71);
      t = lookup_table_0_1(o_88, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          p_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_15(d_71, p_88, t);
      t = (ATerm) ATmakeAppl(sym__2, term_k_37, d_71);
      LocalPopChoice(w_76);
    }
  else
    {
      t = v_76;
      t = (ATerm) ATmakeAppl(sym__2, d_71, e_71);
      t = z_15(d_71, e_71, t);
    }
  return(t);
}
static ATerm q_15 (ATerm s_51, ATerm t_51, ATerm t)
{
  t = SSL_access(s_51, t_51);
  return(t);
}
ATerm at_end_1_0 (ATerm z_112 (ATerm), ATerm t)
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
          ATerm x_43 = NULL,h_44 = NULL,o_19 = NULL;
          t = SSLgetAnnotations(u_89);
          x_43 = t;
          t = t_89;
          t = w_89(t);
          h_44 = t;
          t = (ATerm) ATinsert(CheckATermList(h_44), q_89);
          o_19 = t;
          t = SSLsetAnnotations(o_19, x_43);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_89;
        t = z_112(t);
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
      static ATerm m_30 (ATerm t);
      static ATerm m_30 (ATerm t)
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
      t = at_end_1_0(m_30, t);
    }
  return(t);
}
static ATerm q_90 (ATerm e_90, ATerm t)
{
  ATerm h_90 = NULL;
  t = SSL_explode_term(e_90);
  if(match_cons(t, sym__2))
    {
      ATerm z_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_90;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
  l_90 = t;
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
      {
        ATerm b_77 = t;
        int h_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_30 (ATerm t);
            static ATerm t_30 (ATerm t)
            {
              t = k_90;
              return(t);
            }
            t = j_90;
            t = at_end_1_0(t_30, t);
            LocalPopChoice(h_77);
          }
        else
          {
            t = b_77;
            t = q_90(l_90, t);
          }
      }
    }
  else
    {
      t = q_90(l_90, t);
    }
  return(t);
}
static ATerm r_15 (ATerm h_71, ATerm i_71, ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,u_90 = NULL,w_90 = NULL;
  t = h_71;
  {
    ATerm i_77 = t;
    int j_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_90 = NULL;
        t = term_k_37;
        y_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_37, h_71);
        t = u_15(y_90, h_71, t);
        LocalPopChoice(j_77);
      }
    else
      {
        t = i_77;
        t = (ATerm) ATempty;
      }
  }
  s_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_90, i_71);
  t = conc_0_0(t);
  r_90 = t;
  t = term_k_37;
  u_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, h_71, r_90);
  t = lookup_table_0_1(u_90, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_71, r_90, w_90, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, h_71, r_90);
  return(t);
}
static ATerm u_30 (ATerm t)
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
static ATerm x_30 (ATerm t)
{
  ATerm d_91 = NULL,f_91 = NULL;
  d_91 = t;
  t = term_a_38;
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, d_91);
  t = z_15(f_91, d_91, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_91);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_k_77;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_30, x_30, y_30, t);
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm j_91 = NULL;
  j_91 = t;
  if(match_string(t, "-i"))
    {
      t = j_91;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_91;
    }
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm m_91 = NULL,o_91 = NULL;
  m_91 = t;
  t = term_u_55;
  o_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_55, m_91);
  t = z_15(o_91, m_91, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_91);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  t = term_l_77;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_31, b_31, c_31, t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm e_92 = NULL;
  e_92 = t;
  if(match_string(t, "-I"))
    {
      t = e_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = e_92;
    }
  return(t);
}
static ATerm f_31 (ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,j_92 = NULL;
  f_92 = t;
  t = term_j_61;
  g_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_92), term_j_61);
  j_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_61, (ATerm) ATinsert(ATinsert(ATempty, f_92), term_j_61));
  t = r_15(g_92, j_92, t);
  t = term_m_39;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  t = term_m_77;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm k_92 = NULL;
  k_92 = t;
  if(match_string(t, "--main"))
    {
      t = k_92;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = k_92;
    }
  return(t);
}
static ATerm i_31 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL;
  l_92 = t;
  t = term_q_59;
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_59, l_92);
  t = z_15(m_92, l_92, t);
  t = term_m_39;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_n_77;
  return(t);
}
static ATerm k_31 (ATerm t)
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
static ATerm l_31 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL;
  t = term_d_40;
  o_92 = t;
  t = term_m_39;
  p_92 = t;
  t = term_p_77;
  t = z_15(o_92, p_92, t);
  t = term_m_39;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  t = term_q_77;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_31 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  q_92 = t;
  t = term_z_39;
  r_92 = t;
  t = (ATerm) ATinsert(ATempty, q_92);
  s_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, (ATerm) ATinsert(ATempty, q_92));
  t = r_15(r_92, s_92, t);
  t = term_m_39;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_r_77;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t_92 = t;
  t = term_w_38;
  u_92 = t;
  t = (ATerm) ATinsert(ATempty, t_92);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_38, (ATerm) ATinsert(ATempty, t_92));
  t = f_15(u_92, v_92, t);
  t = term_m_39;
  return(t);
}
static ATerm w_31 (ATerm t)
{
  t = term_s_77;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  w_92 = t;
  t = term_t_77;
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_77, w_92);
  t = a_16(a_93, w_92, t);
  x_92 = t;
  t = term_z_38;
  y_92 = t;
  t = (ATerm) ATinsert(ATempty, x_92);
  z_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATempty, x_92));
  t = f_15(y_92, z_92, t);
  t = term_m_39;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_u_77;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  b_93 = t;
  t = term_v_77;
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_77, b_93);
  t = a_16(f_93, b_93, t);
  c_93 = t;
  t = term_f_38;
  d_93 = t;
  t = (ATerm) ATinsert(ATempty, c_93);
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, c_93));
  t = f_15(d_93, e_93, t);
  t = term_m_39;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  t = term_w_77;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL;
  g_93 = t;
  t = term_x_77;
  k_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_77, g_93);
  t = a_16(k_93, g_93, t);
  h_93 = t;
  t = term_f_38;
  i_93 = t;
  t = (ATerm) ATinsert(ATempty, h_93);
  j_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATempty, h_93));
  t = f_15(i_93, j_93, t);
  t = term_m_39;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  t = term_y_77;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  l_93 = t;
  {
    ATerm e_78 = t;
    int f_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_93 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_59);
        p_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_93, (ATerm) ATinsert(ATempty, term_f_59));
        t = q_15(l_93, p_93, t);
        LocalPopChoice(f_78);
      }
    else
      {
        t = e_78;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_78), l_93), term_g_78);
        {
          ATerm i_78 = t;
          int j_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_44 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_78), l_93), term_g_78);
              p_44 = t;
              t = SSL_concat_strings(p_44);
              t = xtc_find_0_0(t);
              LocalPopChoice(j_78);
            }
          else
            {
              t = i_78;
              {
                ATerm t_93 = NULL;
                t = term_s_38;
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
  t = term_m_39;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = term_l_78;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,b_94 = NULL,c_94 = NULL;
  w_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_78), w_93), term_m_78);
  c_94 = t;
  t = SSL_concat_strings(c_94);
  x_93 = t;
  t = term_z_38;
  y_93 = t;
  t = (ATerm) ATinsert(ATempty, x_93);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATinsert(ATempty, x_93));
  t = f_15(y_93, b_94, t);
  t = term_m_39;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = term_q_78;
  return(t);
}
static ATerm q_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL;
  t = term_b_39;
  d_94 = t;
  t = term_m_39;
  e_94 = t;
  t = term_s_78;
  t = z_15(d_94, e_94, t);
  t = term_m_39;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_t_78;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm f_94 = NULL,i_94 = NULL;
  t = term_d_61;
  f_94 = t;
  t = term_m_39;
  i_94 = t;
  t = term_v_78;
  t = z_15(f_94, i_94, t);
  t = term_m_39;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_z_78;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_32 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_h_56;
  j_94 = t;
  t = term_m_39;
  k_94 = t;
  t = term_a_79;
  t = z_15(j_94, k_94, t);
  t = term_m_39;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  t = term_b_79;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_33 (ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
  l_94 = t;
  t = SSL_string_to_int(l_94);
  m_94 = t;
  t = term_o_43;
  n_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_43, m_94);
  t = z_15(n_94, m_94, t);
  t = term_m_39;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  t = term_c_79;
  return(t);
}
static ATerm d_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_33 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
  q_94 = t;
  t = SSL_string_to_int(q_94);
  r_94 = t;
  t = term_t_43;
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_43, r_94);
  t = z_15(s_94, r_94, t);
  t = term_m_39;
  return(t);
}
static ATerm i_33 (ATerm t)
{
  t = term_d_79;
  return(t);
}
static ATerm j_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_33 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL;
  t = term_h_45;
  v_94 = t;
  t = term_m_39;
  w_94 = t;
  t = term_e_79;
  t = p_15(v_94, w_94, t);
  t = term_m_39;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  t = term_f_79;
  return(t);
}
static ATerm s_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_33 (ATerm t)
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
  t = term_z_56;
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_56, x_94);
  t = z_15(y_94, x_94, t);
  t = term_m_39;
  return(t);
}
static ATerm v_33 (ATerm t)
{
  t = term_g_79;
  return(t);
}
static ATerm z_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_m_39;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  t = term_h_79;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_34 (ATerm t)
{
  t = term_i_79;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_m_39;
  return(t);
}
static ATerm i_34 (ATerm t)
{
  t = term_j_79;
  return(t);
}
static ATerm k_34 (ATerm t)
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
static ATerm p_34 (ATerm t)
{
  ATerm d_95 = NULL,g_95 = NULL;
  t = term_k_79;
  d_95 = t;
  t = term_m_39;
  g_95 = t;
  t = term_l_79;
  t = z_15(d_95, g_95, t);
  t = term_m_39;
  return(t);
}
static ATerm u_34 (ATerm t)
{
  t = term_m_79;
  return(t);
}
static ATerm v_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_34 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL;
  t = term_n_79;
  h_95 = t;
  t = term_m_39;
  i_95 = t;
  t = term_o_79;
  t = z_15(h_95, i_95, t);
  t = term_m_39;
  return(t);
}
static ATerm x_34 (ATerm t)
{
  t = term_s_79;
  return(t);
}
static ATerm z_34 (ATerm t)
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
static ATerm a_35 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL;
  t = term_t_79;
  k_95 = t;
  t = term_m_39;
  l_95 = t;
  t = term_u_79;
  t = z_15(k_95, l_95, t);
  t = term_m_39;
  return(t);
}
static ATerm b_35 (ATerm t)
{
  t = term_v_79;
  return(t);
}
static ATerm c_35 (ATerm t)
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
static ATerm d_35 (ATerm t)
{
  ATerm n_95 = NULL;
  n_95 = t;
  {
    ATerm x_79 = t;
    int y_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,v_95 = NULL,w_95 = NULL,q_19 = NULL;
        t = term_k_37;
        q_95 = t;
        t = term_b_56;
        r_95 = t;
        t = term_c_56;
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
        t = term_b_56;
        o_95 = t;
        t = (ATerm) ATinsert(ATempty, n_95);
        p_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_56, (ATerm) ATinsert(ATempty, n_95));
        t = z_15(o_95, p_95, t);
        LocalPopChoice(y_79);
      }
    else
      {
        t = x_79;
        {
          ATerm x_95 = NULL,y_95 = NULL;
          t = term_b_56;
          x_95 = t;
          t = (ATerm) ATinsert(ATempty, n_95);
          y_95 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_56, (ATerm) ATinsert(ATempty, n_95));
          t = f_15(x_95, y_95, t);
        }
      }
  }
  t = term_m_39;
  return(t);
}
static ATerm f_35 (ATerm t)
{
  t = term_a_80;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_35 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,d_96 = NULL;
  z_95 = t;
  t = term_v_56;
  a_96 = t;
  t = term_s_38;
  d_96 = t;
  t = term_d_80;
  t = z_15(a_96, d_96, t);
  t = z_95;
  return(t);
}
static ATerm i_35 (ATerm t)
{
  t = term_v_56;
  return(t);
}
static ATerm j_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_35 (ATerm t)
{
  ATerm e_96 = NULL,h_96 = NULL,i_96 = NULL;
  e_96 = t;
  t = term_x_56;
  h_96 = t;
  t = term_c_37;
  i_96 = t;
  t = term_f_80;
  t = z_15(h_96, i_96, t);
  t = e_96;
  return(t);
}
static ATerm l_35 (ATerm t)
{
  t = term_x_56;
  return(t);
}
static ATerm m_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_35 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  t = term_v_61;
  j_96 = t;
  t = term_m_39;
  k_96 = t;
  t = term_g_80;
  t = z_15(j_96, k_96, t);
  t = term_m_39;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  t = term_h_80;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm i_80 = t;
  int j_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_80);
    }
  else
    {
      t = i_80;
      {
        ATerm k_80 = t;
        int l_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_80);
          }
        else
          {
            t = k_80;
            {
              ATerm m_80 = t;
              int n_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_31, f_31, g_31, t);
                  LocalPopChoice(n_80);
                }
              else
                {
                  t = m_80;
                  {
                    ATerm o_80 = t;
                    int p_80 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(h_31, i_31, j_31, t);
                        LocalPopChoice(p_80);
                      }
                    else
                      {
                        t = o_80;
                        {
                          ATerm q_80 = t;
                          int r_80 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(k_31, l_31, m_31, t);
                              LocalPopChoice(r_80);
                            }
                          else
                            {
                              t = q_80;
                              {
                                ATerm u_80 = t;
                                int w_80 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(n_31, o_31, p_31, t);
                                    LocalPopChoice(w_80);
                                  }
                                else
                                  {
                                    t = u_80;
                                    {
                                      ATerm x_80 = t;
                                      int y_80 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(q_31, r_31, w_31, t);
                                          LocalPopChoice(y_80);
                                        }
                                      else
                                        {
                                          t = x_80;
                                          {
                                            ATerm z_80 = t;
                                            int b_81 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(x_31, y_31, z_31, t);
                                                LocalPopChoice(b_81);
                                              }
                                            else
                                              {
                                                t = z_80;
                                                {
                                                  ATerm c_81 = t;
                                                  int g_81 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(a_32, c_32, d_32, t);
                                                      LocalPopChoice(g_81);
                                                    }
                                                  else
                                                    {
                                                      t = c_81;
                                                      {
                                                        ATerm i_81 = t;
                                                        int j_81 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(e_32, g_32, i_32, t);
                                                            LocalPopChoice(j_81);
                                                          }
                                                        else
                                                          {
                                                            t = i_81;
                                                            {
                                                              ATerm k_81 = t;
                                                              int l_81 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(j_32, k_32, l_32, t);
                                                                  LocalPopChoice(l_81);
                                                                }
                                                              else
                                                                {
                                                                  t = k_81;
                                                                  {
                                                                    ATerm m_81 = t;
                                                                    int q_81 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(m_32, n_32, p_32, t);
                                                                        LocalPopChoice(q_81);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_81;
                                                                        {
                                                                          ATerm r_81 = t;
                                                                          int s_81 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(q_32, r_32, s_32, t);
                                                                              LocalPopChoice(s_81);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_81;
                                                                              {
                                                                                ATerm t_81 = t;
                                                                                int u_81 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(t_32, u_32, v_32, t);
                                                                                    LocalPopChoice(u_81);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_81;
                                                                                    {
                                                                                      ATerm v_81 = t;
                                                                                      int w_81 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(w_32, x_32, y_32, t);
                                                                                          LocalPopChoice(w_81);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_81;
                                                                                          {
                                                                                            ATerm x_81 = t;
                                                                                            int y_81 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(z_32, a_33, b_33, t);
                                                                                                LocalPopChoice(y_81);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_81;
                                                                                                {
                                                                                                  ATerm a_82 = t;
                                                                                                  int b_82 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(d_33, e_33, i_33, t);
                                                                                                      LocalPopChoice(b_82);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = a_82;
                                                                                                      {
                                                                                                        ATerm c_82 = t;
                                                                                                        int d_82 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(j_33, n_33, r_33, t);
                                                                                                            LocalPopChoice(d_82);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_82;
                                                                                                            {
                                                                                                              ATerm e_82 = t;
                                                                                                              int h_82 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(s_33, u_33, v_33, t);
                                                                                                                  LocalPopChoice(h_82);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = e_82;
                                                                                                                  {
                                                                                                                    ATerm i_82 = t;
                                                                                                                    int k_82 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(z_33, a_34, b_34, t);
                                                                                                                        LocalPopChoice(k_82);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_82;
                                                                                                                        {
                                                                                                                          ATerm l_82 = t;
                                                                                                                          int q_82 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm a_95 = NULL;
                                                                                                                              a_95 = t;
                                                                                                                              t = term_i_79;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = a_95;
                                                                                                                              t = Option_3_0(d_34, h_34, i_34, t);
                                                                                                                              LocalPopChoice(q_82);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = l_82;
                                                                                                                              {
                                                                                                                                ATerm r_82 = t;
                                                                                                                                int s_82 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(s_82);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = r_82;
                                                                                                                                    {
                                                                                                                                      ATerm t_82 = t;
                                                                                                                                      int u_82 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(k_34, p_34, u_34, t);
                                                                                                                                          LocalPopChoice(u_82);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = t_82;
                                                                                                                                          {
                                                                                                                                            ATerm v_82 = t;
                                                                                                                                            int w_82 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(v_34, w_34, x_34, t);
                                                                                                                                                LocalPopChoice(w_82);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = v_82;
                                                                                                                                                {
                                                                                                                                                  ATerm x_82 = t;
                                                                                                                                                  int y_82 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(z_34, a_35, b_35, t);
                                                                                                                                                      LocalPopChoice(y_82);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = x_82;
                                                                                                                                                      {
                                                                                                                                                        ATerm z_82 = t;
                                                                                                                                                        int a_83 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = ArgOption_3_0(c_35, d_35, f_35, t);
                                                                                                                                                            LocalPopChoice(a_83);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = z_82;
                                                                                                                                                            {
                                                                                                                                                              ATerm b_83 = t;
                                                                                                                                                              int d_83 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(g_35, h_35, i_35, t);
                                                                                                                                                                  LocalPopChoice(d_83);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = b_83;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm f_83 = t;
                                                                                                                                                                    int g_83 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(j_35, k_35, l_35, t);
                                                                                                                                                                        LocalPopChoice(g_83);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = f_83;
                                                                                                                                                                        t = Option_3_0(m_35, n_35, o_35, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
static ATerm s_15 (ATerm g_62, ATerm h_62, ATerm t)
{
  ATerm p_96 = NULL;
  t = SSL_hashtable_remove(h_62, g_62);
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_96);
  return(t);
}
static ATerm t_15 (ATerm l_62, ATerm t)
{
  ATerm q_96 = NULL;
  t = SSL_hashtable_destroy(l_62);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_84), term_l_69), term_r_84), term_n_84), term_g_84), term_l_69), term_e_84), term_d_84), term_a_84), term_z_83), term_u_83), term_t_83), term_s_83), term_o_83), term_n_83);
  return(t);
}
ATerm map_1_0 (ATerm i_112 (ATerm), ATerm t)
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
        ATerm w_44 = NULL,e_45 = NULL,f_45 = NULL,s_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_97 = ATgetFirst((ATermList) t);
            b_98 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_97);
        w_44 = t;
        t = y_97;
        t = i_112(t);
        e_45 = t;
        t = b_98;
        t = c_98(t);
        f_45 = t;
        t = (ATerm) ATinsert(CheckATermList(f_45), e_45);
        s_19 = t;
        t = SSLsetAnnotations(s_19, w_44);
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
        static ATerm p_35 (ATerm t);
        static ATerm p_35 (ATerm t)
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
        t = reverse_acc_2_0(j_0, p_35, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_39;
      t = l_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_98 = NULL;
  t = term_m_39;
  t = h_0(t);
  t_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_85), t_98), term_l_85), term_l_69), term_x_84), term_l_69), term_w_84), term_u_84), term_l_69), term_t_84);
  return(t);
}
static ATerm t_35 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_35 (ATerm t)
{
  ATerm q_99 = NULL;
  q_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_99), term_n_85);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,e_99 = NULL;
  ATerm o_85 = t;
  int t_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_99 = NULL,h_99 = NULL;
      t = term_k_37;
      g_99 = t;
      t = term_c_86;
      h_99 = t;
      t = term_d_86;
      t = u_15(g_99, h_99, t);
      y_98 = t;
      LocalPopChoice(t_85);
    }
  else
    {
      t = o_85;
      {
        static ATerm q_35 (ATerm t);
        static ATerm q_35 (ATerm t)
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
        t = fetch_1_0(q_35, t);
      }
    }
  {
    ATerm e_86 = t;
    int f_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_35 (ATerm t);
        static ATerm r_35 (ATerm t)
        {
          t = not_null(y_98);
          return(t);
        }
        t = short_description_1_0(r_35, t);
        t = echo_0_0(t);
        LocalPopChoice(f_86);
      }
    else
      {
        t = e_86;
      }
  }
  t = term_k_86;
  t = echo_0_0(t);
  t = term_w_71;
  z_98 = t;
  t = term_z_71;
  e_99 = t;
  t = term_o_86;
  t = u_15(z_98, e_99, t);
  t = reverse_acc_2_0(_id, t_35, t);
  t = map_1_0(u_35, t);
  {
    ATerm p_86 = t;
    int q_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_99 = NULL;
        static ATerm v_35 (ATerm t);
        static ATerm v_35 (ATerm t)
        {
          t = not_null(y_98);
          return(t);
        }
        t = long_description_1_0(v_35, t);
        r_99 = t;
        t = (ATerm) ATinsert(CheckATermList(r_99), term_l_69);
        t = echo_0_0(t);
        LocalPopChoice(q_86);
      }
    else
      {
        t = p_86;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  static ATerm l_101 (ATerm t);
  static ATerm l_101 (ATerm t)
  {
    ATerm i_101 = NULL,j_101 = NULL,k_101 = NULL;
    i_101 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_101 = ATgetFirst((ATermList) t);
        k_101 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_86 = t;
      int s_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_45 = NULL,f_46 = NULL,x_19 = NULL;
          t = SSLgetAnnotations(i_101);
          y_45 = t;
          t = j_101;
          t = s_112(t);
          f_46 = t;
          t = (ATerm) ATinsert(CheckATermList(k_101), f_46);
          x_19 = t;
          t = SSLsetAnnotations(x_19, y_45);
          LocalPopChoice(s_86);
        }
      else
        {
          t = r_86;
          {
            ATerm r_46 = NULL,u_46 = NULL,a_20 = NULL;
            t = SSLgetAnnotations(i_101);
            r_46 = t;
            t = k_101;
            t = l_101(t);
            u_46 = t;
            t = (ATerm) ATinsert(CheckATermList(u_46), j_101);
            a_20 = t;
            t = SSLsetAnnotations(a_20, r_46);
          }
        }
    }
    return(t);
  }
  t = l_101(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,v_101 = NULL;
  r_101 = t;
  {
    ATerm t_86 = t;
    int u_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_101;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_86 = ATgetFirst((ATermList) t);
                ATerm w_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_101;
          }
        LocalPopChoice(u_86);
      }
    else
      {
        t = t_86;
        t = (ATerm) ATinsert(ATempty, r_101);
      }
  }
  s_101 = t;
  t = term_s_39;
  v_101 = t;
  t = SSL_printnl(v_101, s_101);
  t = r_101;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL;
  t = term_k_37;
  z_101 = t;
  t = term_c_86;
  a_102 = t;
  t = term_d_86;
  t = u_15(z_101, a_102, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_35 (ATerm t)
{
  ATerm b_102 = NULL,c_102 = NULL;
  t = term_x_86;
  b_102 = t;
  t = term_m_39;
  c_102 = t;
  t = term_y_86;
  t = z_15(b_102, c_102, t);
  return(t);
}
static ATerm y_35 (ATerm t)
{
  t = term_z_86;
  return(t);
}
static ATerm z_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_36 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL,g_102 = NULL;
  t = term_x_86;
  f_102 = t;
  t = term_m_39;
  g_102 = t;
  t = term_y_86;
  t = z_15(f_102, g_102, t);
  t = term_t_79;
  d_102 = t;
  t = term_m_39;
  e_102 = t;
  t = term_u_79;
  t = z_15(d_102, e_102, t);
  t = term_a_87;
  return(t);
}
static ATerm c_36 (ATerm t)
{
  t = term_e_87;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_87 = t;
  int k_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_35, x_35, y_35, t);
      LocalPopChoice(k_87);
    }
  else
    {
      t = f_87;
      t = Option_3_0(z_35, b_36, c_36, t);
    }
  return(t);
}
static ATerm v_15 (ATerm j_57, ATerm k_57, ATerm i_57, ATerm t)
{
  ATerm o_102 = NULL,q_102 = NULL,u_102 = NULL,c_103 = NULL,g_103 = NULL;
  o_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
  {
    ATerm p_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_87 = ATgetArgument(t, 0);
            ATerm u_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
        t = u_15(j_57, k_57, t);
        LocalPopChoice(q_87);
      }
    else
      {
        t = p_87;
        t = (ATerm) ATempty;
      }
  }
  q_102 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_57, k_57, (ATerm) ATinsert(CheckATermList(q_102), i_57));
  t = lookup_table_0_1(j_57, t);
  g_103 = t;
  t = (ATerm) ATinsert(CheckATermList(q_102), i_57);
  u_102 = t;
  t = g_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(k_57, u_102, c_103, t);
  t = o_102;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_104 = NULL,o_104 = NULL,z_104 = NULL;
      t = term_m_39;
      t = g_0(t);
      k_104 = t;
      t = term_w_71;
      o_104 = t;
      t = term_z_71;
      z_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_71, term_z_71, k_104);
      t = v_15(o_104, z_104, k_104, t);
      _fail(t);
    }
  else
    {
      ATerm f_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_104 = ATgetFirst((ATermList) t);
          i_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_104;
      t = d_0(t);
      t = term_m_39;
      t = f_0(t);
      f_105 = t;
      t = (ATerm) ATinsert(CheckATermList(i_104), f_105);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm g_105 = NULL,s_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,i_20 = NULL;
  x_105 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_105 = ATgetFirst((ATermList) t);
      u_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_105);
  g_105 = t;
  t = s_105;
  t = q_83(t);
  v_105 = t;
  t = u_105;
  t = r_83(t);
  w_105 = t;
  t = (ATerm) ATinsert(CheckATermList(w_105), v_105);
  i_20 = t;
  t = SSLsetAnnotations(i_20, g_105);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm g_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,m_106 = NULL,n_106 = NULL,r_20 = NULL;
  g_106 = t;
  {
    ATerm v_87 = t;
    int w_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_87;
        t = t_132(t);
        LocalPopChoice(w_87);
      }
    else
      {
        t = v_87;
      }
  }
  t = g_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_106 = ATgetFirst((ATermList) t);
      k_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_106);
  i_106 = t;
  t = term_c_86;
  n_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_86, j_106);
  t = z_15(n_106, j_106, t);
  t = k_106;
  {
    static ATerm i_107 (ATerm t);
    static ATerm i_107 (ATerm t)
    {
      ATerm z_87 = t;
      int c_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_88 = t;
          int i_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_106 = NULL;
              r_106 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_106;
              LocalPopChoice(i_88);
            }
          else
            {
              t = f_88;
              t = t_132(t);
              t = Cons_2_0(_id, i_107, t);
            }
          LocalPopChoice(c_88);
        }
      else
        {
          t = z_87;
          {
            ATerm u_106 = NULL,v_106 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_106 = ATgetFirst((ATermList) t);
                v_106 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_106), (ATerm) ATmakeAppl(sym_Undefined_1, u_106));
          }
        }
      return(t);
    }
    t = i_107(t);
  }
  m_106 = t;
  t = (ATerm) ATinsert(CheckATermList(m_106), (ATerm) ATmakeAppl(sym_Program_1, j_106));
  r_20 = t;
  t = SSLsetAnnotations(r_20, i_106);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  ATerm b_108 = NULL;
  b_108 = t;
  if(match_string(t, "--help"))
    {
      t = b_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_108;
        }
    }
  return(t);
}
static ATerm h_36 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL;
  t = term_k_79;
  c_108 = t;
  t = term_m_39;
  d_108 = t;
  t = term_l_79;
  t = z_15(c_108, d_108, t);
  t = term_j_88;
  return(t);
}
static ATerm i_36 (ATerm t)
{
  t = term_q_88;
  return(t);
}
static ATerm m_36 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_132 (ATerm), ATerm t)
{
  ATerm n_107 = NULL,r_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,w_107 = NULL,x_107 = NULL,a_108 = NULL;
  s_107 = t;
  t = term_w_71;
  t_107 = t;
  t = term_s_88;
  t = lookup_table_0_1(t_107, t);
  a_108 = t;
  t = term_z_71;
  u_107 = t;
  t = (ATerm) ATempty;
  w_107 = t;
  t = a_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(u_107, w_107, x_107, t);
  t = s_107;
  {
    static ATerm f_36 (ATerm t);
    static ATerm f_36 (ATerm t)
    {
      ATerm t_88 = t;
      int u_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_132(t);
          LocalPopChoice(u_88);
        }
      else
        {
          t = t_88;
          {
            ATerm w_88 = t;
            int z_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_36, h_36, i_36, t);
                LocalPopChoice(z_88);
              }
            else
              {
                t = w_88;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_36, t);
  }
  {
    ATerm a_89 = t;
    int b_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_108 = NULL;
        o_108 = t;
        {
          ATerm c_89 = t;
          int d_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_47 = NULL;
              t = o_108;
              {
                ATerm e_89 = t;
                int f_89 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_47 = NULL,m_47 = NULL;
                    t = term_k_37;
                    k_47 = t;
                    t = term_k_79;
                    m_47 = t;
                    t = term_g_89;
                    t = u_15(k_47, m_47, t);
                    LocalPopChoice(f_89);
                  }
                else
                  {
                    t = e_89;
                    t = fetch_1_0(m_36, t);
                  }
              }
              t = o_108;
              t = default_system_usage_0_0(t);
              t = term_c_37;
              g_47 = t;
              t = SSL_exit(g_47);
              LocalPopChoice(d_89);
            }
          else
            {
              t = c_89;
              {
                ATerm u_47 = NULL,x_47 = NULL,y_47 = NULL;
                t = term_k_37;
                x_47 = t;
                t = term_x_86;
                y_47 = t;
                t = term_h_89;
                t = u_15(x_47, y_47, t);
                t = o_108;
                t = default_system_about_0_0(t);
                t = term_c_37;
                u_47 = t;
                t = SSL_exit(u_47);
              }
            }
        }
        LocalPopChoice(b_89);
      }
    else
      {
        t = a_89;
        {
          ATerm i_89 = t;
          int j_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_108 = NULL,u_108 = NULL,v_108 = NULL;
              static ATerm o_36 (ATerm t);
              static ATerm o_36 (ATerm t)
              {
                ATerm w_108 = NULL,x_108 = NULL,z_108 = NULL,t_20 = NULL;
                z_108 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_108 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_108);
                w_108 = t;
                t = x_108;
                if(((n_107 != NULL) && (n_107 != t)))
                  _fail(t);
                else
                  n_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_108);
                t_20 = t;
                t = SSLsetAnnotations(t_20, w_108);
                return(t);
              }
              t = fetch_1_0(o_36, t);
              t = term_r_37;
              u_108 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_107)), term_k_89);
              v_108 = t;
              t = SSL_printnl(u_108, v_108);
              t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_107)), term_k_89));
              t = default_system_usage_0_0(t);
              t = term_s_38;
              r_108 = t;
              t = SSL_exit(r_108);
              LocalPopChoice(j_89);
            }
          else
            {
              t = i_89;
            }
        }
      }
  }
  r_107 = t;
  t = term_w_71;
  t = table_destroy_0_0(t);
  t = r_107;
  return(t);
}
static ATerm x_15 (ATerm b_62, ATerm c_62, ATerm d_62, ATerm t)
{
  ATerm m_109 = NULL;
  t = SSL_hashtable_put(d_62, b_62, c_62);
  m_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_109);
  return(t);
}
static ATerm y_15 (ATerm e_62, ATerm f_62, ATerm t)
{
  t = SSL_hashtable_get(f_62, e_62);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_62, ATerm k_62, ATerm t)
{
  ATerm n_109 = NULL;
  t = SSL_hashtable_create(j_62, k_62);
  n_109 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_109);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_109 = NULL,s_109 = NULL,t_109 = NULL,y_109 = NULL,z_109 = NULL;
  q_109 = t;
  t = term_l_89;
  y_109 = t;
  t = term_m_89;
  z_109 = t;
  t = q_109;
  t = new_hashtable_0_2(y_109, z_109, t);
  s_109 = t;
  t = q_109;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(q_109, s_109, t_109, t);
  t = q_109;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_110 = NULL;
  t = SSL_table_hashtable();
  a_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_58, ATerm t)
{
  ATerm q_110 = NULL;
  t = table_hashtable_0_0(t);
  q_110 = t;
  {
    ATerm n_89 = t;
    int o_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL;
        t = q_110;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_15(v_58, c_48, t);
        LocalPopChoice(o_89);
      }
    else
      {
        t = n_89;
        {
          ATerm l_48 = NULL;
          t = v_58;
          t = table_create_0_0(t);
          t = q_110;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_15(v_58, l_48, t);
        }
      }
  }
  return(t);
}
static ATerm z_15 (ATerm a_71, ATerm b_71, ATerm t)
{
  ATerm w_110 = NULL,x_110 = NULL;
  t = term_k_37;
  w_110 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, a_71, b_71);
  t = lookup_table_0_1(w_110, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(a_71, b_71, x_110, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, a_71, b_71);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL;
  e_111 = t;
  t = SSL_explode_string(e_111);
  {
    ATerm p_89 = t;
    int r_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_113 (ATerm t);
        static ATerm r_113 (ATerm t)
        {
          ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL;
          m_113 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_113 = ATgetFirst((ATermList) t);
              o_113 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_89 = t;
            int v_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_48 = NULL,w_48 = NULL,c_21 = NULL;
                t = SSLgetAnnotations(m_113);
                t_48 = t;
                t = o_113;
                t = r_113(t);
                w_48 = t;
                t = (ATerm) ATinsert(CheckATermList(w_48), n_113);
                c_21 = t;
                t = SSLsetAnnotations(c_21, t_48);
                LocalPopChoice(v_89);
              }
            else
              {
                t = s_89;
                {
                  ATerm l_49 = NULL,e_21 = NULL;
                  t = SSLgetAnnotations(m_113);
                  l_49 = t;
                  t = n_113;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, n_113);
                  e_21 = t;
                  t = SSLsetAnnotations(e_21, l_49);
                }
              }
          }
          return(t);
        }
        t = r_113(t);
        LocalPopChoice(r_89);
      }
    else
      {
        t = p_89;
        t = (ATerm) ATempty;
      }
  }
  d_111 = t;
  t = SSL_implode_string(d_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm a_16 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_strcat(g_50, h_50);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm w_113 = NULL,a_114 = NULL,b_114 = NULL,e_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,m_114 = NULL,n_114 = NULL,q_114 = NULL,r_114 = NULL,u_114 = NULL,v_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,i_115 = NULL,j_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,q_115 = NULL,r_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL;
  w_113 = t;
  t = term_g_69;
  d_116 = t;
  t = term_x_89;
  e_116 = t;
  t = term_y_89;
  t = z_15(d_116, e_116, t);
  t = term_l_37;
  b_116 = t;
  t = term_s_38;
  c_116 = t;
  t = term_z_89;
  t = z_15(b_116, c_116, t);
  t = term_o_43;
  z_115 = t;
  t = term_c_37;
  a_116 = t;
  t = term_a_90;
  t = z_15(z_115, a_116, t);
  t = term_t_43;
  w_115 = t;
  t = term_t_49;
  y_115 = t;
  t = term_b_90;
  t = z_15(w_115, y_115, t);
  t = term_j_61;
  u_115 = t;
  t = (ATerm) ATempty;
  v_115 = t;
  t = term_c_90;
  t = z_15(u_115, v_115, t);
  t = term_z_39;
  q_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_90), term_d_90);
  r_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, (ATerm) ATinsert(ATinsert(ATempty, term_f_90), term_d_90));
  t = z_15(q_115, r_115, t);
  t = term_g_90;
  t = xtc_find_path_0_0(t);
  q_114 = t;
  t = term_i_90;
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_114, term_i_90);
  t = a_16(q_114, o_115, t);
  h_114 = t;
  t = term_g_90;
  t = xtc_find_path_0_0(t);
  n_114 = t;
  t = term_i_90;
  n_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_114, term_i_90);
  t = a_16(n_114, n_115, t);
  i_114 = t;
  t = term_m_90;
  t = xtc_find_path_0_0(t);
  m_114 = t;
  t = term_i_90;
  m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_114, term_i_90);
  t = a_16(m_114, m_115, t);
  j_114 = t;
  t = term_w_38;
  i_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_114), term_j_61), i_114), term_j_61), h_114), term_j_61);
  j_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_114), term_j_61), i_114), term_j_61), h_114), term_j_61));
  t = z_15(i_115, j_115, t);
  t = term_g_90;
  t = xtc_find_path_0_0(t);
  g_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_90), g_114), term_v_77);
  f_115 = t;
  t = SSL_concat_strings(f_115);
  a_114 = t;
  t = term_m_90;
  t = xtc_find_path_0_0(t);
  e_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_90), e_114), term_v_77);
  e_115 = t;
  t = SSL_concat_strings(e_115);
  b_114 = t;
  t = term_f_38;
  c_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_90), term_x_90), b_114), term_v_90), term_t_90), term_p_90), a_114);
  d_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_90), term_x_90), b_114), term_v_90), term_t_90), term_p_90), a_114));
  t = z_15(c_115, d_115, t);
  t = term_z_38;
  z_114 = t;
  t = (ATerm) ATempty;
  a_115 = t;
  t = term_b_91;
  t = z_15(z_114, a_115, t);
  t = term_z_56;
  v_114 = t;
  t = term_c_91;
  y_114 = t;
  t = term_e_91;
  t = z_15(v_114, y_114, t);
  t = term_b_56;
  r_114 = t;
  t = (ATerm) ATinsert(ATempty, term_g_91);
  u_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_56, (ATerm) ATinsert(ATempty, term_g_91));
  t = z_15(r_114, u_114, t);
  t = w_113;
  return(t);
}
static ATerm p_36 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
  e_117 = t;
  t = term_k_37;
  f_117 = t;
  t = term_u_55;
  g_117 = t;
  t = term_h_91;
  t = u_15(f_117, g_117, t);
  t = debug_1_0(q_36, t);
  t = e_117;
  return(t);
}
static ATerm q_36 (ATerm t)
{
  t = term_i_91;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_1_0(strc_options_0_0, t);
  {
    ATerm k_91 = t;
    int l_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL,l_116 = NULL;
        t = term_k_37;
        k_116 = t;
        t = term_n_79;
        l_116 = t;
        t = term_n_91;
        t = u_15(k_116, l_116, t);
        t = term_p_91;
        t = xtc_find_0_0(t);
        h_116 = t;
        t = term_s_39;
        j_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_116, term_s_39);
        t = d_15(h_116, j_116, t);
        t = term_c_37;
        i_116 = t;
        t = SSL_exit(i_116);
        LocalPopChoice(l_91);
      }
    else
      {
        t = k_91;
      }
  }
  {
    ATerm q_91 = t;
    int r_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL;
        t = term_k_37;
        p_116 = t;
        t = term_t_79;
        q_116 = t;
        t = term_s_91;
        t = u_15(p_116, q_116, t);
        t = strc_version_0_0(t);
        t = term_c_37;
        o_116 = t;
        t = SSL_exit(o_116);
        LocalPopChoice(r_91);
      }
    else
      {
        t = q_91;
      }
  }
  {
    ATerm t_91 = t;
    int u_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_116 = NULL,z_116 = NULL,a_117 = NULL;
        v_116 = t;
        t = term_k_37;
        z_116 = t;
        t = term_u_55;
        a_117 = t;
        t = term_h_91;
        t = u_15(z_116, a_117, t);
        t = v_116;
        LocalPopChoice(u_91);
      }
    else
      {
        t = t_91;
        {
          ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL;
          t = term_r_37;
          c_117 = t;
          t = (ATerm) ATinsert(ATempty, term_v_91);
          d_117 = t;
          t = SSL_printnl(c_117, d_117);
          t = term_s_38;
          b_117 = t;
          t = SSL_exit(b_117);
          t = (ATerm) ATinsert(ATempty, term_v_91);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(p_36, t);
  return(t);
}
static ATerm r_36 (ATerm t)
{
  t = if_verbose1_1_0(y_36, t);
  return(t);
}
static ATerm w_36 (ATerm t)
{
  t = xtc_temp_files_1_0(z_36, t);
  return(t);
}
static ATerm y_36 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL;
  i_117 = t;
  t = term_r_37;
  j_117 = t;
  t = (ATerm) ATinsert(CheckATermList(i_117), term_w_91);
  k_117 = t;
  t = SSL_printnl(j_117, k_117);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(CheckATermList(i_117), term_w_91));
  return(t);
}
static ATerm z_36 (ATerm t)
{
  ATerm x_91 = t;
  int y_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL;
      t = term_k_37;
      m_117 = t;
      t = term_u_55;
      n_117 = t;
      t = term_h_91;
      t = u_15(m_117, n_117, t);
      l_117 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_117);
      LocalPopChoice(y_91);
    }
  else
    {
      t = x_91;
      t = term_b_59;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm a_37 (ATerm t)
{
  ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
  t = run_time_0_0(t);
  o_117 = t;
  t = term_r_37;
  p_117 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_92), o_117), term_z_91);
  q_117 = t;
  t = SSL_printnl(p_117, q_117);
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_92), o_117), term_z_91));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm b_92 = t;
  int c_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_117 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(r_36, w_36, t);
      t = if_verbose2_1_0(a_37, t);
      t = term_c_37;
      h_117 = t;
      t = SSL_exit(h_117);
      LocalPopChoice(c_92);
    }
  else
    {
      t = b_92;
      {
        ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL;
        t = run_time_0_0(t);
        r_117 = t;
        t = term_r_37;
        t_117 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_92), r_117), term_d_92);
        u_117 = t;
        t = SSL_printnl(t_117, u_117);
        t = term_s_38;
        s_117 = t;
        t = SSL_exit(s_117);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
