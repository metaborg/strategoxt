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
ATerm term_w_86;
ATerm term_t_86;
ATerm term_s_86;
ATerm term_p_86;
ATerm term_m_86;
ATerm term_b_86;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_p_85;
ATerm term_k_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_r_84;
ATerm term_q_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_h_83;
ATerm term_v_82;
ATerm term_e_82;
ATerm term_d_82;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_g_80;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_f_79;
ATerm term_d_79;
ATerm term_t_78;
ATerm term_r_78;
ATerm term_i_78;
ATerm term_g_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_d_78;
ATerm term_z_77;
ATerm term_x_77;
ATerm term_w_77;
ATerm term_u_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_n_77;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_e_73;
ATerm term_a_73;
ATerm term_z_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_t_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_f_72;
ATerm term_e_72;
ATerm term_a_72;
ATerm term_z_71;
ATerm term_y_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_m_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_s_70;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_i_70;
ATerm term_h_70;
ATerm term_e_70;
ATerm term_b_70;
ATerm term_v_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_j_69;
ATerm term_g_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_y_68;
ATerm term_x_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_m_68;
ATerm term_i_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_y_67;
ATerm term_v_67;
ATerm term_u_67;
ATerm term_t_67;
ATerm term_s_67;
ATerm term_k_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_y_64;
ATerm term_v_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_i_64;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_k_62;
ATerm term_j_62;
ATerm term_g_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_o_61;
ATerm term_r_60;
ATerm term_d_60;
ATerm term_a_60;
ATerm term_t_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_x_58;
ATerm term_u_58;
ATerm term_r_58;
ATerm term_p_58;
ATerm term_k_58;
ATerm term_r_57;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_f_56;
ATerm term_c_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_u_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_v_54;
ATerm term_r_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_g_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_y_53;
ATerm term_p_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_s_52;
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
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_d_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_q_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_c_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
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
ATerm term_x_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_f_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_v_45;
ATerm term_o_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_a_44;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_x_42;
ATerm term_v_42;
ATerm term_o_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_s_41;
ATerm term_f_41;
ATerm term_a_41;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_p_37;
ATerm term_l_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_u_36;
ATerm term_m_36;
ATerm term_i_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_g_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_o_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_r_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_y_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_a_36);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_l_37);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_z_36);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_o_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_q_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_b_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_f_40);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_v_42);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in ", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol(", concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_g_38, term_d_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_47, term_i_35, term_g_47);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_47, term_v_38, term_j_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_47, term_d_42, term_m_47);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_47, term_p_47, term_q_47);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_47, term_u_47, term_v_47);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_47, term_z_47, term_a_48);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_48, term_f_48, term_m_48);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_48, term_p_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_48, term_c_49, term_e_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_s_41, term_i_49);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_49, term_l_49, term_n_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_49, term_s_49, term_t_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_y_49, term_z_49);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_50, term_q_50, term_r_50);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_50, term_u_50, term_v_50);
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_51, term_d_51, term_f_51);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_51, term_l_51, term_m_51);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_51, term_p_51, term_r_51);
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_51, term_u_51, term_y_51);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_52, term_b_52, term_c_52);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_52, term_f_52, term_g_52);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_52, term_j_52, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_u_44, term_n_52);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_52, term_q_52, term_s_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_w_52, term_a_53);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_53, term_f_53, term_g_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_b_54);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_j_54);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_b_55);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_w_56);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(sym__2, term_h_56, term_c_56);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_p_58);
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_d_59);
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_f_59);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_m_64);
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_x_68);
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_p_68, term_d_69);
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(sym__2, term_p_68, term_q_68);
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_a_35);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_35);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(sym__2, term_o_70, term_i_36);
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_i_36);
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(sym__2, term_a_36, term_i_36);
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(sym__2, term_p_58, term_i_36);
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_j_54, term_i_36);
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(sym__2, term_v_42, term_i_36);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(sym__2, term_m_72, term_i_36);
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym__2, term_t_72, term_i_36);
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(sym__2, term_z_72, term_i_36);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym__2, term_b_55, term_g_38);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(sym__2, term_d_55, term_a_35);
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__2, term_f_59, term_i_36);
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_x_77));
  term_x_77 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_78));
  term_r_78 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_r_78);
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(sym__2, term_h_70, term_i_70);
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym__2, term_t_79, term_i_36);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_m_72);
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_t_79);
  ATprotect(&(term_v_82));
  term_v_82 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(sym__2, term_m_64, term_h_83);
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_g_38);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_a_35);
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_f_40, term_d_42);
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_y_53);
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_t_72);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_z_72);
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm o_12 (ATerm o_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm p_12 (ATerm m_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm q_12 (ATerm j_44, ATerm i_44, ATerm t);
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
ATerm if_keep1_1_0 (ATerm s_106 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t);
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
ATerm if_keep4_1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm x_106 (ATerm), ATerm t);
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
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
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
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm o_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm save_as_1_0 (ATerm q_81 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t);
static ATerm u_12 (ATerm a_49, ATerm b_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm d_107 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t);
ATerm foldr_3_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t);
static ATerm q_19 (ATerm t);
static ATerm x_19 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm u_106 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm u_90 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm r_12 (ATerm g_21, ATerm h_21, ATerm t);
static ATerm s_12 (ATerm b_23, ATerm c_23, ATerm t);
static ATerm t_12 (ATerm z_89 (ATerm), ATerm y_192, ATerm l_23, ATerm t);
static ATerm w_12 (ATerm j_103 (ATerm), ATerm u_42, ATerm s_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm v_20 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm t_114 (ATerm), ATerm t);
static ATerm i_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm p_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm s_21 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm p_81 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm v_21 (ATerm t);
static ATerm c_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm s_105 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm y_100 (ATerm), ATerm t);
static ATerm d_22 (ATerm t);
static ATerm e_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm h_22 (ATerm t);
static ATerm x_12 (ATerm c_21, ATerm t);
static ATerm j_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm s_13 (ATerm p_54, ATerm q_54, ATerm t);
static ATerm y_12 (ATerm d_53, ATerm e_53, ATerm t);
ATerm end_scope_1_0 (ATerm g_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm q_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm e_115 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm q_105 (ATerm), ATerm t);
static ATerm a_13 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm c_13 (ATerm m_41, ATerm n_41, ATerm t);
static ATerm d_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm e_13 (ATerm k_44, ATerm l_44, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_105 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_105 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm v_105 (ATerm), ATerm t);
static ATerm h_13 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm n_29, ATerm m_29, ATerm t);
static ATerm i_13 (ATerm t_94 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
static ATerm c_27 (ATerm t);
static ATerm j_13 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t);
static ATerm k_13 (ATerm m_110 (ATerm), ATerm f_54, ATerm e_54, ATerm t);
static ATerm o_13 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm y_70 (ATerm m_70, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_13 (ATerm h_23, ATerm t);
static ATerm m_13 (ATerm m_38, ATerm n_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_73 (ATerm q_71, ATerm t);
static ATerm g_73 (ATerm w_71, ATerm x_71, ATerm b_72, ATerm t);
static ATerm h_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t);
static ATerm n_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm h_27 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_27 (ATerm t);
static ATerm j_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm m_27 (ATerm t);
static ATerm n_27 (ATerm t);
static ATerm o_27 (ATerm t);
static ATerm p_27 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm v_77 (ATerm y_76, ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm p_13 (ATerm j_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm w_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_13 (ATerm g_48, ATerm h_48, ATerm t);
ATerm at_end_1_0 (ATerm z_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_80 (ATerm o_80, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_13 (ATerm k_48, ATerm l_48, ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm d_29 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm s_30 (ATerm t);
static ATerm t_30 (ATerm t);
static ATerm u_30 (ATerm t);
static ATerm v_30 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
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
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm e_33 (ATerm t);
static ATerm f_33 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_90 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm j_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm t_33 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm t_13 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_110 (ATerm), ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm d_34 (ATerm t);
static ATerm e_34 (ATerm t);
ATerm parse_options_1_0 (ATerm i_110 (ATerm), ATerm t);
static ATerm v_13 (ATerm d_48, ATerm e_48, ATerm t);
static ATerm w_13 (ATerm d_37, ATerm e_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm k_34 (ATerm t);
static ATerm l_34 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm n_34 (ATerm t);
static ATerm o_34 (ATerm t);
static ATerm w_34 (ATerm t);
static ATerm x_34 (ATerm t);
static ATerm y_34 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = z_96(t);
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
      t = foldr_2_0(z_96, a_97, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = a_97(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_a_35;
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
  t = a_13(c_1, e_1, t);
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
      ATerm b_35 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = term_f_35;
        l_1 = t;
        t = term_g_35;
        m_1 = t;
        t = term_h_35;
        t = s_13(l_1, m_1, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_i_35);
        t = geq_0_0(t);
        t = f_1;
        t = r_105(t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,a_2 = NULL;
  w_1 = t;
  t = term_j_35;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_k_35);
  a_2 = t;
  t = SSL_printnl(x_1, a_2);
  t = w_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_j_35;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm o_12 (ATerm o_21, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL;
        t = term_f_35;
        b_2 = t;
        t = term_o_35;
        c_2 = t;
        t = term_q_35;
        t = s_13(b_2, c_2, t);
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        t = get_outfile_1_0(g_1, t);
      }
  }
  o_1 = t;
  t = term_f_35;
  s_1 = t;
  t = term_r_35;
  v_1 = t;
  t = term_s_35;
  t = s_13(s_1, v_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_1), o_1), term_o_35), o_21));
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
      t = u_12(q_1, r_1, t);
      t = term_u_35;
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
  t = term_j_35;
  w_2 = t;
  t = (ATerm) ATinsert(ATempty, term_v_35);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = v_2;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_j_35;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, y_2);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm p_12 (ATerm m_21, ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(n_1, t);
  m_2 = t;
  t = term_f_35;
  r_2 = t;
  t = term_y_35;
  s_2 = t;
  t = term_z_35;
  t = s_13(r_2, s_2, t);
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_2), term_o_35), m_21), term_a_36));
  t = conc_0_0(t);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, n_2);
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
      t = u_12(p_2, q_2, t);
      t = term_u_35;
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
  t = p_12(p_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_12(o_3, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL;
  k_3 = t;
  t = term_j_35;
  m_3 = t;
  t = (ATerm) ATinsert(CheckATermList(k_3), term_b_36);
  n_3 = t;
  t = SSL_printnl(m_3, n_3);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(k_3), term_b_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL;
      g_3 = t;
      t = term_f_35;
      i_3 = t;
      t = term_a_36;
      j_3 = t;
      t = term_e_36;
      t = s_13(i_3, j_3, t);
      t = g_3;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
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
static ATerm q_12 (ATerm j_44, ATerm i_44, ATerm t)
{
  ATerm f_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(j_44, i_44);
      LocalPopChoice(h_36);
    }
  else
    {
      t = f_36;
      t = get_errno_0_0(t);
      t = term_i_36;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, j_44, i_44);
      t = e_13(j_44, i_44, t);
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
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = g_4;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_m_36;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_4, term_m_36);
        t = e_13(j_4, t_1, t);
        t = SSL_remove(j_4);
        t = term_m_36;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        {
          ATerm o_36 = t;
          int s_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = g_4;
              t = x_0(t);
              i_2 = t;
              {
                ATerm t_36 = t;
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
                    t = t_36;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_4, i_2);
              t = q_12(j_4, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(s_36);
            }
          else
            {
              t = o_36;
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
  t = term_u_36;
  n_4 = t;
  t = term_x_36;
  t = xtc_find_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_y_36);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_z_36);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  t = term_b_37;
  s_4 = t;
  t = w_4;
  {
    ATerm c_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL,c_5 = NULL;
        t = term_f_35;
        a_5 = t;
        t = term_l_37;
        c_5 = t;
        t = term_p_37;
        t = s_13(a_5, c_5, t);
        t = w_4;
        LocalPopChoice(h_37);
        t = (ATerm) ATinsert(ATempty, term_l_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATempty;
      }
  }
  u_4 = t;
  t = term_f_35;
  x_4 = t;
  t = term_z_36;
  y_4 = t;
  t = term_r_37;
  t = s_13(x_4, y_4, t);
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
  t = term_j_35;
  v_5 = t;
  t = (ATerm) ATinsert(ATempty, term_s_37);
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
    ATerm t_37 = t;
    int v_37 = stack_ptr;
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
        LocalPopChoice(v_37);
        t = xtc_transform_file_2_0(h_3, q_3, t);
      }
    else
      {
        t = t_37;
        t = xtc_transform_term_2_0(r_3, s_3, t);
      }
  }
  t = if_keep1_1_0(u_3, t);
  t = olevel_2_0(w_3, x_3, t);
  t = olevel_2_0(j_5, k_5, t);
  c_6 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
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
        LocalPopChoice(x_37);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = w_37;
        t = xtc_transform_term_2_0(k_6, n_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  b_6 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
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
        LocalPopChoice(z_37);
        t = xtc_transform_file_2_0(o_6, pass_verbose_0_0, t);
      }
    else
      {
        t = y_37;
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
  t = term_j_35;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(x_5), term_a_38);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(x_5), term_a_38));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_c_38);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_c_38);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = save_as_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL;
  t_6 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
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
        LocalPopChoice(i_38);
        t = xtc_transform_file_2_0(z_3, a_4, t);
      }
    else
      {
        t = h_38;
        t = xtc_transform_term_2_0(d_4, e_4, t);
      }
  }
  t = if_keep1_1_0(f_4, t);
  q_6 = t;
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
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
        LocalPopChoice(k_38);
        t = xtc_transform_file_2_0(k_4, l_4, t);
      }
    else
      {
        t = j_38;
        t = xtc_transform_term_2_0(p_4, z_4, t);
      }
  }
  t = if_keep1_1_0(e_5, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_c_38);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_c_38);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_c_38);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_c_38);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = save_as_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_v_38;
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
  t = term_w_38;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_c_38);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_c_38);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = get_outfile_1_0(b_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_z_38;
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
  t = term_j_35;
  j_9 = t;
  t = (ATerm) ATinsert(ATempty, term_a_39);
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
  t = term_j_35;
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_c_39);
  p_9 = t;
  t = SSL_printnl(n_9, p_9);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(m_9), term_c_39));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm u_10 = NULL;
  t = pass_verbose_0_0(t);
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_10), term_g_39);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_10 = NULL;
  t = pass_verbose_0_0(t);
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(v_10), term_g_39);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
      e_9 = t;
      t = term_f_35;
      f_9 = t;
      t = term_l_37;
      g_9 = t;
      t = term_p_37;
      t = s_13(f_9, g_9, t);
      t = e_9;
      LocalPopChoice(j_39);
      {
        ATerm h_9 = NULL;
        h_9 = t;
        t = if_verbose2_1_0(g_7, t);
        {
          static ATerm i_7 (ATerm t)
          {
            ATerm q_9 = NULL,s_9 = NULL,u_9 = NULL,v_9 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
            i_5 = t;
            t = term_k_39;
            g_5 = t;
            t = (ATerm) ATinsert(ATempty, term_l_39);
            h_5 = t;
            t = i_5;
            t = comp_0_2(g_5, h_5, t);
            q_9 = t;
            {
              ATerm m_39 = t;
              int n_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_9 = NULL,z_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
                  t = term_f_35;
                  d_10 = t;
                  t = term_o_39;
                  e_10 = t;
                  t = term_p_39;
                  t = s_13(d_10, e_10, t);
                  x_9 = t;
                  t = term_f_35;
                  b_10 = t;
                  t = term_q_39;
                  c_10 = t;
                  t = term_r_39;
                  t = s_13(b_10, c_10, t);
                  z_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_9, z_9);
                  {
                    ATerm s_39 = t;
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
                        t = s_39;
                      }
                  }
                  LocalPopChoice(n_39);
                }
              else
                {
                  t = m_39;
                  {
                    ATerm i_10 = NULL,j_10 = NULL;
                    t = term_f_35;
                    i_10 = t;
                    t = term_o_39;
                    j_10 = t;
                    t = term_p_39;
                    t = s_13(i_10, j_10, t);
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
              ATerm t_39 = t;
              int u_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_10 = NULL,t_10 = NULL;
                  t_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      {
                        ATerm l_5 = NULL,y_3 = NULL;
                        t = SSLgetAnnotations(t_10);
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
                      t = t_10;
                    }
                  LocalPopChoice(u_39);
                  t = xtc_transform_file_2_0(q_7, s_7, t);
                }
              else
                {
                  t = t_39;
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
            t = term_j_35;
            u_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_9)), term_w_39), not_null(c_9)), term_v_39));
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
      t = i_39;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm s_106 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  {
    ATerm x_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL,e_11 = NULL,f_11 = NULL;
        t = term_f_35;
        e_11 = t;
        t = term_b_40;
        f_11 = t;
        t = term_c_40;
        t = s_13(e_11, f_11, t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, term_g_38);
        t = geq_0_0(t);
        t = a_11;
        t = s_106(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = x_39;
        t = a_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm w_115 (ATerm), ATerm x_115 (ATerm), ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_11 = NULL,q_11 = NULL,s_11 = NULL,u_11 = NULL;
        t = j_11;
        t = w_115(t);
        m_11 = t;
        t = term_f_35;
        s_11 = t;
        t = term_f_40;
        u_11 = t;
        t = term_g_40;
        t = s_13(s_11, u_11, t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_11, m_11);
        t = geq_0_0(t);
        t = j_11;
        t = x_115(t);
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = j_11;
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_c_38);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_c_38);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm q_8 = NULL;
  t = pass_verbose_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(CheckATermList(q_8), term_c_38);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_h_40;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm r_8 = NULL;
  t = pass_verbose_0_0(t);
  r_8 = t;
  t = (ATerm) ATinsert(CheckATermList(r_8), term_c_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_14;
        {
          ATerm k_40 = t;
          int u_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  y_6 = ATgetArgument(t, 0);
                  {
                    ATerm f_8 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(p_14);
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
                  t = p_14;
                }
              LocalPopChoice(u_40);
              t = xtc_transform_file_2_0(z_7, b_8, t);
            }
          else
            {
              t = k_40;
              t = xtc_transform_term_2_0(c_8, d_8, t);
            }
        }
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = p_14;
        {
          ATerm x_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  n_8 = ATgetArgument(t, 0);
                  {
                    ATerm z_8 = NULL,c_4 = NULL;
                    t = SSLgetAnnotations(p_14);
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
                  t = p_14;
                }
              LocalPopChoice(z_40);
              t = xtc_transform_file_2_0(e_8, g_8, t);
            }
          else
            {
              t = x_40;
              t = xtc_transform_term_2_0(h_8, i_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  y_14 = t;
  t = term_a_41;
  w_14 = t;
  t = y_14;
  {
    ATerm b_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,a_15 = NULL;
        t = term_f_35;
        z_14 = t;
        t = term_l_37;
        a_15 = t;
        t = term_p_37;
        t = s_13(z_14, a_15, t);
        t = y_14;
        LocalPopChoice(d_41);
        t = (ATerm) ATinsert(ATempty, term_f_41);
      }
    else
      {
        t = b_41;
        t = (ATerm) ATempty;
      }
  }
  x_14 = t;
  t = y_14;
  t = comp_0_2(w_14, x_14, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  {
    ATerm i_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
        t = term_f_35;
        k_15 = t;
        t = term_b_40;
        l_15 = t;
        t = term_c_40;
        t = s_13(k_15, l_15, t);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_15, term_s_41);
        t = geq_0_0(t);
        t = e_15;
        t = v_106(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = i_41;
        t = e_15;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  {
    ATerm u_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
        t = term_f_35;
        v_15 = t;
        t = term_b_40;
        w_15 = t;
        t = term_c_40;
        t = s_13(v_15, w_15, t);
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_15, term_d_42);
        t = geq_0_0(t);
        t = q_15;
        t = x_106(t);
        LocalPopChoice(v_41);
      }
    else
      {
        t = u_41;
        t = q_15;
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  t = term_j_35;
  b_18 = t;
  t = (ATerm) ATinsert(ATempty, term_e_42);
  c_18 = t;
  t = SSL_printnl(b_18, c_18);
  t = a_18;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = if_verbose1_1_0(m_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm h_18 = NULL;
  t = if_verbose3_1_0(o_8, t);
  t = olevel_2_0(t_8, v_8, t);
  t = olevel_2_0(t_9, a_10, t);
  t = olevel_2_0(x_10, b_11, t);
  h_18 = t;
  {
    ATerm f_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_21 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(h_18);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
              y_5 = t;
              t = SSLsetAnnotations(y_5, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_18;
          }
        LocalPopChoice(h_42);
        t = xtc_transform_file_2_0(b_13, f_13, t);
      }
    else
      {
        t = f_42;
        t = xtc_transform_term_2_0(g_13, u_13, t);
      }
  }
  t = olevel_2_0(x_13, y_13, t);
  t = olevel_2_0(u_14, v_14, t);
  t = olevel_2_0(t_15, x_15, t);
  t = olevel_2_0(j_16, k_16, t);
  t = olevel_2_0(l_17, m_17, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = term_j_35;
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(d_18), term_i_42);
  f_18 = t;
  t = SSL_printnl(e_18, f_18);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(d_18), term_i_42));
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,m_18 = NULL;
  i_18 = t;
  t = term_f_35;
  j_18 = t;
  t = term_f_40;
  m_18 = t;
  t = term_g_40;
  t = s_13(j_18, m_18, t);
  t = debug_1_0(s_8, t);
  t = i_18;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  {
    ATerm l_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_18 = ATgetArgument(t, 0);
            {
              ATerm o_9 = NULL,m_4 = NULL;
              t = SSLgetAnnotations(n_18);
              o_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_18);
              m_4 = t;
              t = SSLsetAnnotations(m_4, o_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_18;
          }
        LocalPopChoice(n_42);
        t = xtc_transform_file_2_0(x_8, y_8, t);
      }
    else
      {
        t = l_42;
        t = xtc_transform_term_2_0(a_9, b_9, t);
      }
  }
  t = if_keep1_1_0(l_9, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm v_18 = NULL;
  t = pass_verbose_0_0(t);
  v_18 = t;
  t = (ATerm) ATinsert(CheckATermList(v_18), term_c_38);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm w_18 = NULL;
  t = pass_verbose_0_0(t);
  w_18 = t;
  t = (ATerm) ATinsert(CheckATermList(w_18), term_c_38);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = save_as_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_19;
        {
          ATerm t_42 = t;
          if((PushChoice() == 0))
            {
              ATerm q_10 = NULL,r_10 = NULL;
              t = term_f_35;
              q_10 = t;
              t = term_v_42;
              r_10 = t;
              t = term_x_42;
              t = s_13(q_10, r_10, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_42;
            }
        }
        t = p_19;
        {
          ATerm y_42 = t;
          int z_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  g_11 = ATgetArgument(t, 0);
                  {
                    ATerm t_11 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(p_19);
                    t_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, g_11);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, t_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_19;
                }
              LocalPopChoice(z_42);
              t = xtc_transform_file_2_0(f_10, h_10, t);
            }
          else
            {
              t = y_42;
              t = xtc_transform_term_2_0(n_10, o_10, t);
            }
        }
        t = if_keep2_1_0(p_10, t);
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        t = p_19;
      }
  }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm k_11 = NULL;
  t = pass_verbose_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(CheckATermList(k_11), term_c_38);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_a_43;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_c_38);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = save_as_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_b_43;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL;
  v_19 = t;
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_20 = ATgetArgument(t, 0);
            {
              ATerm z_11 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(v_19);
              z_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_20);
              r_5 = t;
              t = SSLsetAnnotations(r_5, z_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_19;
          }
        LocalPopChoice(d_43);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = c_43;
        t = xtc_transform_term_2_0(l_11, p_11, t);
      }
  }
  t = if_keep6_1_0(r_11, t);
  s_19 = t;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(s_19);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_20);
              s_5 = t;
              t = SSLsetAnnotations(s_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_19;
          }
        LocalPopChoice(f_43);
        t = xtc_transform_file_2_0(w_11, x_11, t);
      }
    else
      {
        t = e_43;
        t = xtc_transform_term_2_0(y_11, a_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(b_12, t);
  r_19 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_20 = ATgetArgument(t, 0);
            {
              ATerm k_12 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(r_19);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
              t_5 = t;
              t = SSLsetAnnotations(t_5, k_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_19;
          }
        LocalPopChoice(h_43);
        t = xtc_transform_file_2_0(g_12, i_12, t);
      }
    else
      {
        t = g_43;
        t = xtc_transform_term_2_0(j_12, z_12, t);
      }
  }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_i_43;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm c_20 = NULL;
  t = pass_verbose_0_0(t);
  c_20 = t;
  t = (ATerm) ATinsert(CheckATermList(c_20), term_c_38);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_i_43;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm f_20 = NULL;
  t = pass_verbose_0_0(t);
  f_20 = t;
  t = (ATerm) ATinsert(CheckATermList(f_20), term_c_38);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = save_as_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_j_43;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_c_38);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_c_38);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = save_as_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_m_43;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm y_20 = NULL;
  t = pass_verbose_0_0(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), term_c_38);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_c_38);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_n_43;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm w_21 = NULL;
  t = pass_verbose_0_0(t);
  w_21 = t;
  t = (ATerm) ATinsert(CheckATermList(w_21), term_c_38);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_n_43;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm x_21 = NULL;
  t = pass_verbose_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(CheckATermList(x_21), term_c_38);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  a_22 = t;
  {
    ATerm o_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_22 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,e_6 = NULL;
              t = SSLgetAnnotations(a_22);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
              e_6 = t;
              t = SSLsetAnnotations(e_6, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_22;
          }
        LocalPopChoice(q_43);
        t = xtc_transform_file_2_0(z_13, a_14, t);
      }
    else
      {
        t = o_43;
        t = xtc_transform_term_2_0(b_14, d_14, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  z_21 = t;
  {
    ATerm r_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_22 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(z_21);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
              f_6 = t;
              t = SSLsetAnnotations(f_6, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_21;
          }
        LocalPopChoice(u_43);
        t = xtc_transform_file_2_0(e_14, f_14, t);
      }
    else
      {
        t = r_43;
        t = xtc_transform_term_2_0(h_14, i_14, t);
      }
  }
  y_21 = t;
  {
    ATerm v_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_23 = ATgetArgument(t, 0);
            {
              ATerm c_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(y_21);
              c_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_23);
              g_6 = t;
              t = SSLsetAnnotations(g_6, c_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_21;
          }
        LocalPopChoice(x_43);
        t = xtc_transform_file_2_0(j_14, k_14, t);
      }
    else
      {
        t = v_43;
        t = xtc_transform_term_2_0(l_14, m_14, t);
      }
  }
  t = if_keep4_1_0(o_14, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_c_38);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm l_22 = NULL;
  t = pass_verbose_0_0(t);
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), term_c_38);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm u_22 = NULL;
  t = pass_verbose_0_0(t);
  u_22 = t;
  t = (ATerm) ATinsert(CheckATermList(u_22), term_c_38);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_c_38);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm f_23 = NULL;
  t = pass_verbose_0_0(t);
  f_23 = t;
  t = (ATerm) ATinsert(CheckATermList(f_23), term_c_38);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm g_23 = NULL;
  t = pass_verbose_0_0(t);
  g_23 = t;
  t = (ATerm) ATinsert(CheckATermList(g_23), term_c_38);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = save_as_1_0(r_14, t);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_f_44;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_i_35;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm j_23 = NULL,o_23 = NULL;
  o_23 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_23 = ATgetArgument(t, 0);
            {
              ATerm h_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(o_23);
              h_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, h_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_23;
          }
        LocalPopChoice(h_44);
        t = xtc_transform_file_2_0(b_15, d_15, t);
      }
    else
      {
        t = g_44;
        t = xtc_transform_term_2_0(f_15, g_15, t);
      }
  }
  j_23 = t;
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_24 = ATgetArgument(t, 0);
            {
              ATerm r_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(j_23);
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, r_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_23;
          }
        LocalPopChoice(o_44);
        t = xtc_transform_file_2_0(i_15, m_15, t);
      }
    else
      {
        t = n_44;
        t = xtc_transform_term_2_0(n_15, o_15, t);
      }
  }
  t = if_keep2_1_0(p_15, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_c_38);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm c_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), term_c_38);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm q_24 = NULL;
  t = pass_verbose_0_0(t);
  q_24 = t;
  t = (ATerm) ATinsert(CheckATermList(q_24), term_c_38);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_s_44;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm r_24 = NULL;
  t = pass_verbose_0_0(t);
  r_24 = t;
  t = (ATerm) ATinsert(CheckATermList(r_24), term_c_38);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = save_as_1_0(s_15, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_u_44;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_24 = ATgetArgument(t, 0);
            {
              ATerm a_16 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(s_24);
              a_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, a_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_24;
          }
        LocalPopChoice(w_44);
        t = xtc_transform_file_2_0(y_15, z_15, t);
      }
    else
      {
        t = v_44;
        t = xtc_transform_term_2_0(b_16, c_16, t);
      }
  }
  t = if_keep5_1_0(d_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(g_16, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_c_38);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_k_43;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_25 = NULL;
  t = pass_verbose_0_0(t);
  a_25 = t;
  t = (ATerm) ATinsert(CheckATermList(a_25), term_c_38);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = save_as_1_0(f_16, t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_x_44;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = save_as_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_y_44;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm b_25 = NULL,f_25 = NULL,h_25 = NULL;
  h_25 = t;
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_25 = ATgetArgument(t, 0);
            {
              ATerm e_16 = NULL,r_6 = NULL;
              t = SSLgetAnnotations(h_25);
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_25);
              r_6 = t;
              t = SSLsetAnnotations(r_6, e_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_25;
          }
        LocalPopChoice(a_45);
        t = xtc_transform_file_2_0(l_16, n_16, t);
      }
    else
      {
        t = z_44;
        t = xtc_transform_term_2_0(o_16, p_16, t);
      }
  }
  t = if_keep3_1_0(r_16, t);
  f_25 = t;
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_25 = ATgetArgument(t, 0);
            {
              ATerm i_16 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(f_25);
              i_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
              s_6 = t;
              t = SSLsetAnnotations(s_6, i_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_25;
          }
        LocalPopChoice(c_45);
        t = xtc_transform_file_2_0(t_16, v_16, t);
      }
    else
      {
        t = b_45;
        t = xtc_transform_term_2_0(w_16, x_16, t);
      }
  }
  t = if_keep3_1_0(y_16, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(b_17, t);
  b_25 = t;
  {
    ATerm d_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_26 = ATgetArgument(t, 0);
            {
              ATerm m_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(b_25);
              m_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_26);
              u_6 = t;
              t = SSLsetAnnotations(u_6, m_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_25;
          }
        LocalPopChoice(e_45);
        t = xtc_transform_file_2_0(d_17, e_17, t);
      }
    else
      {
        t = d_45;
        t = xtc_transform_term_2_0(f_17, g_17, t);
      }
  }
  t = if_keep3_1_0(j_17, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm o_25 = NULL;
  t = pass_verbose_0_0(t);
  o_25 = t;
  t = (ATerm) ATinsert(CheckATermList(o_25), term_c_38);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_g_45;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm p_25 = NULL;
  t = pass_verbose_0_0(t);
  p_25 = t;
  t = (ATerm) ATinsert(CheckATermList(p_25), term_c_38);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = save_as_1_0(s_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_h_45;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm x_25 = NULL;
  t = pass_verbose_0_0(t);
  x_25 = t;
  t = (ATerm) ATinsert(CheckATermList(x_25), term_c_38);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm y_25 = NULL;
  t = pass_verbose_0_0(t);
  y_25 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), term_c_38);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = save_as_1_0(a_17, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_j_45;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = save_as_1_0(c_17, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm e_26 = NULL;
  t = pass_verbose_0_0(t);
  e_26 = t;
  t = (ATerm) ATinsert(CheckATermList(e_26), term_c_38);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm g_26 = NULL;
  t = pass_verbose_0_0(t);
  g_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), term_c_38);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = save_as_1_0(k_17, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL;
  j_26 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_26 = ATgetArgument(t, 0);
            {
              ATerm q_16 = NULL,v_6 = NULL;
              t = SSLgetAnnotations(j_26);
              q_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_26);
              v_6 = t;
              t = SSLsetAnnotations(v_6, q_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_26;
          }
        LocalPopChoice(q_45);
        t = xtc_transform_file_2_0(n_17, o_17, t);
      }
    else
      {
        t = p_45;
        t = xtc_transform_term_2_0(p_17, q_17, t);
      }
  }
  t = if_keep1_1_0(r_17, t);
  h_26 = t;
  {
    ATerm t_45 = t;
    int u_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_27 = ATgetArgument(t, 0);
            {
              ATerm u_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(h_26);
              u_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
              w_6 = t;
              t = SSLsetAnnotations(w_6, u_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_26;
          }
        LocalPopChoice(u_45);
        t = xtc_transform_file_2_0(v_17, w_17, t);
      }
    else
      {
        t = t_45;
        t = xtc_transform_term_2_0(x_17, y_17, t);
      }
  }
  t = if_keep1_1_0(g_18, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm t_26 = NULL;
  t = pass_verbose_0_0(t);
  t_26 = t;
  t = (ATerm) ATinsert(CheckATermList(t_26), term_c_38);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm x_26 = NULL;
  t = pass_verbose_0_0(t);
  x_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), term_c_38);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = save_as_1_0(u_17, t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm f_27 = NULL;
  t = pass_verbose_0_0(t);
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(f_27), term_c_38);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_y_45;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm g_27 = NULL;
  t = pass_verbose_0_0(t);
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), term_c_38);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = save_as_1_0(o_18, t);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = term_z_45;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  t = profile_p__2_0(k_8, l_8, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm h_29 = NULL;
  t = pass_verbose_0_0(t);
  h_29 = t;
  t = (ATerm) ATinsert(CheckATermList(h_29), term_g_39);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm k_29 = NULL;
  t = pass_verbose_0_0(t);
  k_29 = t;
  t = (ATerm) ATinsert(CheckATermList(k_29), term_g_39);
  return(t);
}
ATerm save_as_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  p_28 = t;
  {
    static ATerm p_18 (ATerm t)
    {
      t = get_outfile_1_0(q_81, t);
      if(((n_28 != NULL) && (n_28 != t)))
        _fail(t);
      else
        n_28 = t;
      return(t);
    }
    t = copy_to_1_0(p_18, t);
  }
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,g_29 = NULL;
        g_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_29 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,p_8 = NULL;
              t = SSLgetAnnotations(g_29);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_29);
              p_8 = t;
              t = SSLsetAnnotations(p_8, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_29;
          }
        LocalPopChoice(e_46);
        t = xtc_transform_file_2_0(s_18, t_18, t);
      }
    else
      {
        t = d_46;
        t = xtc_transform_term_2_0(u_18, y_18, t);
      }
  }
  {
    static ATerm a_19 (ATerm t)
    {
      ATerm l_29 = NULL;
      t = term_f_46;
      l_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_f_46);
      t = w_13(not_null(n_28), l_29, t);
      if(((o_28 != NULL) && (o_28 != t)))
        _fail(t);
      else
        o_28 = t;
      return(t);
    }
    t = copy_to_1_0(a_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_28)), term_k_46), not_null(n_28)), term_j_46);
  v_28 = t;
  t = SSL_concat_strings(v_28);
  s_28 = t;
  t = term_j_35;
  t_28 = t;
  t = (ATerm) ATinsert(ATempty, s_28);
  u_28 = t;
  t = SSL_printnl(t_28, u_28);
  t = p_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
        t = term_f_35;
        u_29 = t;
        t = term_b_40;
        v_29 = t;
        t = term_c_40;
        t = s_13(u_29, v_29, t);
        t_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_29, term_i_35);
        t = geq_0_0(t);
        t = r_29;
        t = t_106(t);
        LocalPopChoice(m_46);
      }
    else
      {
        t = l_46;
        t = r_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  t = term_g_35;
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL,f_30 = NULL;
        t = term_f_35;
        d_30 = t;
        t = term_g_35;
        f_30 = t;
        t = term_h_35;
        t = s_13(d_30, f_30, t);
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = term_g_38;
      }
  }
  y_29 = t;
  t = term_g_38;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_g_38);
  t = c_13(y_29, a_30, t);
  z_29 = t;
  t = SSL_int_to_string(z_29);
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_29), term_g_35);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm i_30 = NULL,n_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_46 = ATgetArgument(t, 0);
      if(match_cons(p_46, sym_Stream_1))
        {
          i_30 = ATgetArgument(p_46, 0);
        }
      else
        _fail(t);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12(i_30, n_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_114 (ATerm), ATerm s_114 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  h_30 = t;
  t = xtc_new_file_0_0(t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, h_30);
  t = t_12(c_19, g_30, h_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_30);
  t = xtc_transform_file_2_0(r_114, s_114, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_12 (ATerm a_49, ATerm b_49, ATerm t)
{
  t = SSL_execvp(a_49, b_49);
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
        ATerm h_17 = NULL,i_17 = NULL;
        t = SSL_int_to_string(u_31);
        h_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_46), h_17), term_q_46);
        i_17 = t;
        t = SSL_concat_strings(i_17);
      }
    }
  else
    {
      ATerm s_17 = NULL,t_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_31 = ATgetArgument(t, 0);
          v_31 = ATgetArgument(t, 1);
          w_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_31);
      s_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_t_46), s_17), term_s_46), u_31);
      t_17 = t;
      t = SSL_concat_strings(t_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_46 = ATgetArgument(t, 0);
              if((b_32 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_46 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_53), term_b_53), term_u_52), term_o_52), term_l_52), term_h_52), term_d_52), term_z_51), term_s_51), term_n_51), term_g_51), term_z_50), term_s_50), term_j_50), term_v_49), term_q_49), term_j_49), term_f_49), term_x_48), term_r_48), term_n_48), term_b_48), term_w_47), term_s_47), term_n_47), term_k_47), term_h_47), term_e_47);
        t = fetch_elem_1_0(e_19, t);
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_32);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_32 = NULL,u_32 = NULL;
  j_32 = t;
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
              ATerm z_17 = NULL,k_18 = NULL,l_18 = NULL;
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
              z_17 = t;
              t = term_j_35;
              k_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_17), term_p_53);
              l_18 = t;
              t = SSL_printnl(k_18, l_18);
              t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(ATinsert(ATempty, z_17), term_p_53));
              LocalPopChoice(n_53);
            }
          else
            {
              t = m_53;
              t = j_32;
            }
        }
      }
    else
      {
        t = i_53;
        t = j_32;
      }
  }
  t = j_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  l_33 = t;
  t = fork_0_0(t);
  k_33 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = l_33;
        t = d_107(t);
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = SSL_waitpid(k_33);
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
        t = l_33;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  o_33 = t;
  t = s_115(t);
  t = xtc_find_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
  {
    static ATerm h_19 (ATerm t)
    {
      ATerm p_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
      t = u_12(n_33, o_33, t);
      t = term_u_35;
      p_33 = t;
      t = SSL_exit(p_33);
      return(t);
    }
    t = fork_and_wait_1_0(h_19, t);
  }
  t = o_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,u_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_33 = NULL,w_33 = NULL;
      t = r_33;
      t = xtc_new_file_0_0(t);
      v_33 = t;
      t = t_0(t);
      w_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATinsert(ATinsert(ATempty, v_33), term_o_35));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_33);
    }
  else
    {
      ATerm y_33 = NULL,z_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_33;
      t = xtc_new_file_0_0(t);
      y_33 = t;
      t = t_0(t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_33), term_o_35), u_33), term_y_53));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_48 = NULL,w_48 = NULL;
      w_48 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_48 = ATgetArgument(t, 0);
          {
            ATerm r_30 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(w_48);
            r_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_48);
            u_8 = t;
            t = SSLsetAnnotations(u_8, r_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_48;
        }
      LocalPopChoice(a_54);
      {
        static ATerm i_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm j_19 (ATerm t)
        {
          ATerm z_48 = NULL;
          t = pass_verbose_0_0(t);
          z_48 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), z_48), (ATerm) ATinsert(ATempty, term_c_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(i_19, j_19, t);
      }
    }
  else
    {
      t = z_53;
      {
        static ATerm k_19 (ATerm t)
        {
          t = a_21;
          return(t);
        }
        static ATerm o_19 (ATerm t)
        {
          ATerm d_49 = NULL;
          t = pass_verbose_0_0(t);
          d_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), d_49), (ATerm) ATinsert(ATempty, term_c_38));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(k_19, o_19, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,j_34 = NULL;
  f_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_34;
      t = b_97(t);
    }
  else
    {
      ATerm p_34 = NULL,q_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          j_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      t = d_97(t);
      p_34 = t;
      t = j_34;
      t = foldr_3_0(b_97, c_97, d_97, t);
      q_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, q_34);
      t = c_97(t);
    }
  return(t);
}
static ATerm q_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_34), term_b_54);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_f_35;
  t_34 = t;
  t = term_b_54;
  u_34 = t;
  t = term_c_54;
  t = s_13(t_34, u_34, t);
  t = foldr_3_0(q_19, conc_0_0, x_19, t);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm u_20 = NULL;
  t = pass_verbose_0_0(t);
  u_20 = t;
  t = (ATerm) ATinsert(CheckATermList(u_20), term_c_38);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm w_20 = NULL;
  t = pass_verbose_0_0(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), term_c_38);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  t = get_outfile_1_0(l_20, t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL,m_19 = NULL,t_19 = NULL,u_19 = NULL,y_19 = NULL;
        t = term_f_35;
        u_19 = t;
        t = term_j_54;
        y_19 = t;
        t = term_k_54;
        t = s_13(u_19, y_19, t);
        t = g_36;
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_36;
              {
                ATerm n_54 = t;
                int o_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        m_20 = ATgetArgument(t, 0);
                        {
                          ATerm n_21 = NULL,w_8 = NULL;
                          t = SSLgetAnnotations(g_36);
                          n_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
                          w_8 = t;
                          t = SSLsetAnnotations(w_8, n_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = g_36;
                      }
                    LocalPopChoice(o_54);
                    t = xtc_transform_file_2_0(b_20, d_20, t);
                  }
                else
                  {
                    t = n_54;
                    t = xtc_transform_term_2_0(h_20, i_20, t);
                  }
              }
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              {
                ATerm x_20 = NULL,d_21 = NULL,e_21 = NULL;
                t = term_j_35;
                d_21 = t;
                t = (ATerm) ATinsert(ATempty, term_r_54);
                e_21 = t;
                t = SSL_printnl(d_21, e_21);
                t = term_g_38;
                x_20 = t;
                t = SSL_exit(x_20);
                t = (ATerm) ATinsert(ATempty, term_r_54);
              }
            }
        }
        t = copy_to_1_0(k_20, t);
        l_19 = t;
        t = term_j_35;
        m_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_54));
        t_19 = t;
        t = SSL_printnl(m_19, t_19);
        t = l_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = g_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  {
    ATerm w_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
        t = term_f_35;
        q_36 = t;
        t = term_b_40;
        r_36 = t;
        t = term_c_40;
        t = s_13(q_36, r_36, t);
        p_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_36, term_u_44);
        t = geq_0_0(t);
        t = n_36;
        t = w_106(t);
        LocalPopChoice(y_54);
      }
    else
      {
        t = w_54;
        t = n_36;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,w_36 = NULL;
      t = term_f_35;
      v_36 = t;
      t = term_b_55;
      w_36 = t;
      t = term_c_55;
      t = s_13(v_36, w_36, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_55);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      t = (ATerm) ATinsert(ATempty, term_d_55);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm u_106 (ATerm), ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  {
    ATerm e_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
        t = term_f_35;
        j_37 = t;
        t = term_b_40;
        k_37 = t;
        t = term_c_40;
        t = s_13(j_37, k_37, t);
        i_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_37, term_v_38);
        t = geq_0_0(t);
        t = g_37;
        t = u_106(t);
        LocalPopChoice(h_55);
      }
    else
      {
        t = e_55;
        t = g_37;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm m_37 = NULL;
  static ATerm o_20 (ATerm t)
  {
    t = u_90(t);
    if(((m_37 != NULL) && (m_37 != t)))
      _fail(t);
    else
      m_37 = t;
    return(t);
  }
  t = fetch_1_0(o_20, t);
  t = not_null(m_37);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm y_39 = NULL,a_40 = NULL;
  y_39 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_40 = ATgetArgument(t, 0);
      {
        ATerm b_22 = NULL,i_22 = NULL,w_9 = NULL;
        t = SSLgetAnnotations(y_39);
        b_22 = t;
        t = a_40;
        t = fetch_elem_1_0(r_20, t);
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, i_22);
        w_9 = t;
        t = SSLsetAnnotations(w_9, b_22);
      }
    }
  else
    {
      ATerm n_23 = NULL,t_23 = NULL,y_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          a_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_39);
      n_23 = t;
      t = a_40;
      t = fetch_elem_1_0(s_20, t);
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, t_23);
      y_9 = t;
      t = SSLsetAnnotations(y_9, n_23);
    }
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm o_22 = NULL,r_22 = NULL,t_22 = NULL;
  o_22 = t;
  {
    ATerm i_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            r_22 = ATgetArgument(t, 0);
            t_22 = ATgetArgument(t, 1);
            {
              ATerm o_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_55);
        t = r_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = t_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_22;
      }
    else
      {
        t = i_55;
        if(match_cons(t, sym_RDef_3))
          {
            r_22 = ATgetArgument(t, 0);
            t_22 = ATgetArgument(t, 1);
            {
              ATerm p_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = t_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_22;
      }
  }
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm s_55 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_55);
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
        t = q_55;
        if(match_cons(t, sym_RDef_3))
          {
            w_23 = ATgetArgument(t, 0);
            x_23 = ATgetArgument(t, 1);
            {
              ATerm t_55 = ATgetArgument(t, 2);
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  t = fetch_elem_1_0(q_20, t);
  q_38 = t;
  t = term_j_35;
  r_38 = t;
  t = (ATerm) ATinsert(ATempty, term_u_55);
  s_38 = t;
  t = SSL_printnl(r_38, s_38);
  t = q_38;
  return(t);
}
static ATerm r_12 (ATerm g_21, ATerm h_21, ATerm t)
{
  t = g_21;
  {
    ATerm v_55 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_55;
      }
  }
  t = h_21;
  {
    ATerm w_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(x_55);
      }
    else
      {
        t = w_55;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(h_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_y_55, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm s_12 (ATerm b_23, ATerm c_23, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_write_term_to_stream_baf(b_23, c_23);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
static ATerm t_12 (ATerm z_89 (ATerm), ATerm y_192, ATerm l_23, ATerm t)
{
  ATerm m_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_192, term_z_55);
  t = n_13(t);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_40, l_23);
  t = z_89(t);
  t = fclose_0_0(t);
  t = l_23;
  return(t);
}
static ATerm w_12 (ATerm j_103 (ATerm), ATerm u_42, ATerm s_42, ATerm t)
{
  ATerm o_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,v_40 = NULL;
  s_40 = t;
  t = j_103(t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_40, u_42, s_42);
  t = t_13(o_40, u_42, s_42, t);
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_40 = NULL;
        t = term_c_56;
        w_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_40, term_c_56);
        t = s_13(o_40, w_40, t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_40 = ATgetFirst((ATermList) t);
      r_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_56;
  t_40 = t;
  t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATinsert(CheckATermList(q_40), u_42));
  v_40 = t;
  t = SSL_table_put(o_40, t_40, v_40);
  t = s_40;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm y_40 = NULL;
  ATerm d_56 = t;
  int e_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_41 = NULL,l_24 = NULL;
      c_41 = t;
      t = term_f_56;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_41, term_f_56);
      t = w_13(c_41, l_24, t);
      y_40 = t;
      t = SSL_mkstemp(y_40);
      LocalPopChoice(e_56);
    }
  else
    {
      t = d_56;
      {
        ATerm e_41 = NULL;
        t = term_g_56;
        e_41 = t;
        t = SSL_perror(e_41);
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
static ATerm v_20 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  t = P__tmpdir_0_0(t);
  p_41 = t;
  t = term_i_56;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_41, term_i_56);
  t = w_13(p_41, q_41, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_i_36;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_41, term_i_36);
  t = w_12(v_20, k_41, o_41, t);
  t = SSL_close(j_41);
  t = k_41;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_41 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_56;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_41 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_56);
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_41, (ATerm) ATinsert(ATempty, term_k_56));
      t = o_13(t_41, x_41, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm a_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_56 = ATgetArgument(t, 0);
      if(match_cons(l_56, sym_Stream_1))
        {
          a_42 = ATgetArgument(l_56, 0);
        }
      else
        _fail(t);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12(a_42, c_42, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  t = read_from_0_0(t);
  t = t_114(t);
  z_41 = t;
  t = xtc_new_file_0_0(t);
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_41, z_41);
  t = t_12(f_21, y_41, z_41, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_41);
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = debug_1_0(j_21, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  t = term_m_56;
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = save_as_1_0(p_21, t);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm g_42 = NULL,l_43 = NULL;
  l_43 = t;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_25 = NULL,s_25 = NULL;
        t = term_f_35;
        k_25 = t;
        t = term_w_56;
        s_25 = t;
        t = term_x_56;
        t = s_13(k_25, s_25, t);
        g_42 = t;
        t = if_verbose2_1_0(i_21, t);
        t = l_43;
        {
          ATerm i_57 = t;
          int j_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_25 = NULL,f_26 = NULL;
              t = term_f_35;
              t_25 = t;
              t = term_l_37;
              f_26 = t;
              t = term_p_37;
              t = s_13(t_25, f_26, t);
              t = l_43;
              LocalPopChoice(j_57);
            }
          else
            {
              t = i_57;
              {
                static ATerm k_21 (ATerm t)
                {
                  ATerm k_57 = t;
                  int l_57 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          w_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = r_12(g_42, w_26, t);
                      LocalPopChoice(l_57);
                    }
                  else
                    {
                      t = k_57;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(k_21, t);
              }
            }
        }
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
        t = l_43;
      }
  }
  t = if_keep3_1_0(l_21, t);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  {
    ATerm n_57 = t;
    int q_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_44);
        LocalPopChoice(q_57);
      }
    else
      {
        t = n_57;
        t = p_44;
      }
  }
  return(t);
}
static ATerm s_21 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm w_43 = NULL,y_43 = NULL;
  static ATerm q_21 (ATerm t)
  {
    ATerm z_43 = NULL,b_44 = NULL,c_44 = NULL;
    z_43 = t;
    t = term_h_56;
    b_44 = t;
    t = term_c_56;
    c_44 = t;
    t = term_r_57;
    t = s_13(b_44, c_44, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_43 != NULL) && (w_43 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_43 = ATgetFirst((ATermList) t);
        {
          ATerm s_57 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_43;
    t = map_1_0(r_21, t);
    t = z_43;
    t = end_scope_1_0(s_21, t);
    return(t);
  }
  t = repeat_2_0(q_21, _id, t);
  y_43 = t;
  t = SSL_exit(y_43);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm u_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_45 = NULL,n_45 = NULL;
      t = term_f_35;
      l_45 = t;
      t = term_o_35;
      n_45 = t;
      t = term_q_35;
      t = s_13(l_45, n_45, t);
      LocalPopChoice(w_57);
    }
  else
    {
      t = u_57;
      t = term_m_36;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_27 = NULL,v_27 = NULL;
      t = term_o_35;
      {
        ATerm x_57 = t;
        int z_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = NULL,x_27 = NULL;
            t = term_f_35;
            w_27 = t;
            t = term_o_35;
            x_27 = t;
            t = term_q_35;
            t = s_13(w_27, x_27, t);
            LocalPopChoice(z_57);
          }
        else
          {
            t = x_57;
            t = term_m_36;
          }
      }
      s_27 = t;
      t = term_j_56;
      v_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_56, s_27);
      t = e_13(v_27, s_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm a_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_45;
      t = copy_to_1_0(u_21, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_a_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = p_81(t);
  r_45 = t;
  t = term_f_35;
  w_45 = t;
  t = term_o_39;
  x_45 = t;
  t = term_p_39;
  t = s_13(w_45, x_45, t);
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_45, r_45);
  t = w_13(s_45, r_45, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,a_47 = NULL;
  y_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_58 = t;
    int d_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL;
        t = y_46;
        t = v_0(t);
        j_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, a_47, j_28);
        t = e_13(a_47, j_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
        LocalPopChoice(d_58);
      }
    else
      {
        t = b_58;
        {
          ATerm g_58 = t;
          int h_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL;
              t = y_46;
              t = v_0(t);
              b_29 = t;
              {
                ATerm i_58 = t;
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
                            if((a_47 != t))
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
                    t = i_58;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_47, b_29);
              t = e_13(a_47, b_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_47);
              LocalPopChoice(h_58);
            }
          else
            {
              t = g_58;
              t = y_46;
              t = v_0(t);
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
static ATerm v_21 (ATerm t)
{
  t = get_outfile_1_0(c_22, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_k_58;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
        t = term_f_35;
        l_30 = t;
        t = term_p_58;
        m_30 = t;
        t = term_r_58;
        t = s_13(l_30, m_30, t);
        t = y_47;
        t = copy_to_1_0(v_21, t);
        e_30 = t;
        t = term_j_35;
        j_30 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_58));
        k_30 = t;
        t = SSL_printnl(j_30, k_30);
        t = e_30;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
        t = y_47;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm g_49 = NULL,m_49 = NULL,o_49 = NULL,p_49 = NULL;
  t = term_b_40;
  {
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_49 = NULL,w_49 = NULL;
        t = term_f_35;
        u_49 = t;
        t = term_b_40;
        w_49 = t;
        t = term_c_40;
        t = s_13(u_49, w_49, t);
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = term_g_38;
      }
  }
  m_49 = t;
  t = term_g_38;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, term_g_38);
  t = c_13(m_49, p_49, t);
  o_49 = t;
  t = SSL_int_to_string(o_49);
  g_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_49), term_b_40);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm i_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  p_50 = t;
  t = term_x_58;
  i_50 = t;
  t = p_50;
  {
    ATerm z_58 = t;
    int c_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,c_51 = NULL;
        t = term_f_35;
        b_51 = t;
        t = term_o_35;
        c_51 = t;
        t = term_q_35;
        t = s_13(b_51, c_51, t);
        LocalPopChoice(c_59);
      }
    else
      {
        t = z_58;
        {
          ATerm e_51 = NULL,h_51 = NULL;
          t = term_f_35;
          e_51 = t;
          t = term_o_39;
          h_51 = t;
          t = term_p_39;
          t = s_13(e_51, h_51, t);
        }
      }
  }
  y_50 = t;
  t = p_50;
  t = pass_keep_0_0(t);
  m_50 = t;
  t = term_f_35;
  w_50 = t;
  t = term_d_59;
  x_50 = t;
  t = term_e_59;
  t = s_13(w_50, x_50, t);
  n_50 = t;
  t = term_f_59;
  {
    ATerm g_59 = t;
    int h_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_51 = NULL,j_51 = NULL;
        t = term_f_35;
        i_51 = t;
        t = term_f_59;
        j_51 = t;
        t = term_i_59;
        t = s_13(i_51, j_51, t);
        LocalPopChoice(h_59);
        t = (ATerm) ATinsert(ATempty, term_f_59);
      }
    else
      {
        t = g_59;
        t = (ATerm) ATempty;
      }
  }
  o_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_50), m_50), n_50), (ATerm) ATinsert(ATinsert(ATempty, y_50), term_j_59));
  t = concat_0_0(t);
  l_50 = t;
  t = p_50;
  t = comp_0_2(i_50, l_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  {
    ATerm k_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
        t = term_f_35;
        w_51 = t;
        t = term_g_35;
        x_51 = t;
        t = term_h_35;
        t = s_13(w_51, x_51, t);
        v_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_51, term_v_38);
        t = geq_0_0(t);
        t = q_51;
        t = s_105(t);
        LocalPopChoice(l_59);
      }
    else
      {
        t = k_59;
        t = q_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,t_52 = NULL;
  t_52 = t;
  t = SSL_explode_string(t_52);
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm x_54 (ATerm t)
        {
          ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
          s_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_54 = ATgetFirst((ATermList) t);
              u_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm o_59 = t;
            int p_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_31 = NULL,o_31 = NULL,k_10 = NULL;
                t = SSLgetAnnotations(s_54);
                j_31 = t;
                t = u_54;
                t = x_54(t);
                o_31 = t;
                t = (ATerm) ATinsert(CheckATermList(o_31), t_54);
                k_10 = t;
                t = SSLsetAnnotations(k_10, j_31);
                LocalPopChoice(p_59);
              }
            else
              {
                t = o_59;
                {
                  ATerm q_59 = t;
                  int r_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_32 = NULL,l_10 = NULL;
                      t = SSLgetAnnotations(s_54);
                      f_32 = t;
                      t = t_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(u_54), t_54);
                      l_10 = t;
                      t = SSLsetAnnotations(l_10, f_32);
                      LocalPopChoice(r_59);
                    }
                  else
                    {
                      t = q_59;
                      {
                        ATerm x_32 = NULL,d_33 = NULL,m_10 = NULL;
                        t = SSLgetAnnotations(s_54);
                        x_32 = t;
                        t = t_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = u_54;
                        t = y_100(t);
                        d_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_33), t_54);
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
        t = x_54(t);
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
      }
  }
  r_52 = t;
  t = SSL_implode_string(r_52);
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = debug_1_0(e_22, t);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = term_t_59;
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = debug_1_0(h_22, t);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = term_a_60;
  return(t);
}
static ATerm x_12 (ATerm c_21, ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,j_55 = NULL,k_55 = NULL;
  t = c_21;
  t = basename_1_0(_id, t);
  f_55 = t;
  t = if_verbose3_1_0(d_22, t);
  t = term_q_39;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_39, f_55);
  t = v_13(k_55, f_55, t);
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_55 = NULL,n_55 = NULL;
        t = term_f_35;
        m_55 = t;
        t = term_o_35;
        n_55 = t;
        t = term_q_35;
        t = s_13(m_55, n_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
        t = f_55;
      }
  }
  g_55 = t;
  t = if_verbose3_1_0(f_22, t);
  t = term_o_39;
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, g_55);
  t = v_13(j_55, g_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_55);
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = debug_1_0(m_22, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = term_d_60;
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = if_verbose1_1_0(s_22, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_37 = NULL,n_37 = NULL,o_37 = NULL,m_34 = NULL,r_34 = NULL,s_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      e_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_12(e_57, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
        f_57 = t;
        t = term_f_35;
        g_57 = t;
        t = term_l_37;
        h_57 = t;
        t = term_p_37;
        t = s_13(g_57, h_57, t);
        t = f_57;
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
        t = add_main_0_0(t);
      }
  }
  d_57 = t;
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_57 = ATgetArgument(t, 0);
            {
              ATerm s_33 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(d_57);
              s_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_57);
              y_10 = t;
              t = SSLsetAnnotations(y_10, s_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_57;
          }
        LocalPopChoice(i_60);
        t = xtc_transform_file_2_0(v_22, x_22, t);
      }
    else
      {
        t = h_60;
        t = xtc_transform_term_2_0(y_22, z_22, t);
      }
  }
  c_57 = t;
  {
    ATerm j_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_57 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_57 = ATgetArgument(t, 0);
            {
              ATerm c_34 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(c_57);
              c_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_57);
              z_10 = t;
              t = SSLsetAnnotations(z_10, c_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_57;
          }
        LocalPopChoice(n_60);
        t = xtc_transform_file_2_0(a_23, e_23, t);
      }
    else
      {
        t = j_60;
        t = xtc_transform_term_2_0(i_23, k_23, t);
      }
  }
  t = if_keep5_1_0(m_23, t);
  b_57 = t;
  {
    ATerm o_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_58 = ATgetArgument(t, 0);
            {
              ATerm i_34 = NULL,d_11 = NULL;
              t = SSLgetAnnotations(b_57);
              i_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_58);
              d_11 = t;
              t = SSLsetAnnotations(d_11, i_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_57;
          }
        LocalPopChoice(p_60);
        t = xtc_transform_file_2_0(q_23, r_23, t);
      }
    else
      {
        t = o_60;
        t = xtc_transform_term_2_0(s_23, u_23, t);
      }
  }
  t = if_keep5_1_0(y_23, t);
  s_34 = t;
  t = term_r_60;
  m_34 = t;
  t = s_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  r_34 = t;
  t = s_34;
  t = comp_0_2(m_34, r_34, t);
  a_57 = t;
  {
    ATerm u_60 = t;
    int x_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_58 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,o_11 = NULL;
              t = SSLgetAnnotations(a_57);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_58);
              o_11 = t;
              t = SSLsetAnnotations(o_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_57;
          }
        LocalPopChoice(x_60);
        t = xtc_transform_file_2_0(d_24, e_24, t);
      }
    else
      {
        t = u_60;
        t = xtc_transform_term_2_0(f_24, g_24, t);
      }
  }
  z_56 = t;
  {
    ATerm y_60 = t;
    int z_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_58 = ATgetArgument(t, 0);
            {
              ATerm e_35 = NULL,e_12 = NULL;
              t = SSLgetAnnotations(z_56);
              e_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_58);
              e_12 = t;
              t = SSLsetAnnotations(e_12, e_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_56;
          }
        LocalPopChoice(z_60);
        t = xtc_transform_file_2_0(h_24, j_24, t);
      }
    else
      {
        t = y_60;
        t = xtc_transform_term_2_0(k_24, m_24, t);
      }
  }
  t = if_keep5_1_0(n_24, t);
  y_56 = t;
  {
    ATerm a_61 = t;
    int c_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_58 = ATgetArgument(t, 0);
            {
              ATerm p_35 = NULL,f_12 = NULL;
              t = SSLgetAnnotations(y_56);
              p_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_58);
              f_12 = t;
              t = SSLsetAnnotations(f_12, p_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_56;
          }
        LocalPopChoice(c_61);
        t = xtc_transform_file_2_0(p_24, t_24, t);
      }
    else
      {
        t = a_61;
        t = xtc_transform_term_2_0(u_24, v_24, t);
      }
  }
  v_56 = t;
  {
    ATerm e_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm w_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(v_56);
              w_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              h_12 = t;
              t = SSLsetAnnotations(h_12, w_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_56;
          }
        LocalPopChoice(g_61);
        t = xtc_transform_file_2_0(x_24, y_24, t);
      }
    else
      {
        t = e_61;
        t = xtc_transform_term_2_0(c_25, d_25, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
        w_59 = t;
        t = term_f_35;
        x_59 = t;
        t = term_l_37;
        y_59 = t;
        t = term_p_37;
        t = s_13(x_59, y_59, t);
        t = w_59;
        LocalPopChoice(i_61);
        {
          ATerm z_59 = NULL;
          z_59 = t;
          {
            ATerm j_61 = t;
            int k_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_60 = ATgetArgument(t, 0);
                    {
                      ATerm l_36 = NULL,l_12 = NULL;
                      t = SSLgetAnnotations(z_59);
                      l_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_60);
                      l_12 = t;
                      t = SSLsetAnnotations(l_12, l_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = z_59;
                  }
                LocalPopChoice(k_61);
                t = xtc_transform_file_2_0(e_25, g_25, t);
              }
            else
              {
                t = j_61;
                t = xtc_transform_term_2_0(i_25, j_25, t);
              }
          }
        }
      }
    else
      {
        t = h_61;
        {
          ATerm m_60 = NULL;
          m_60 = t;
          {
            ATerm m_61 = t;
            int n_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_60 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    q_60 = ATgetArgument(t, 0);
                    {
                      ATerm a_37 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(m_60);
                      a_37 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, q_60);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, a_37);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = m_60;
                  }
                LocalPopChoice(n_61);
                t = xtc_transform_file_2_0(l_25, n_25, t);
              }
            else
              {
                t = m_61;
                t = xtc_transform_term_2_0(q_25, r_25, t);
              }
          }
          t = if_keep2_1_0(u_25, t);
        }
      }
  }
  o_37 = t;
  t = term_o_61;
  f_37 = t;
  t = o_37;
  t = pass_warnings_0_0(t);
  n_37 = t;
  t = o_37;
  t = comp_0_2(f_37, n_37, t);
  u_56 = t;
  {
    ATerm r_61 = t;
    int s_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_61 = ATgetArgument(t, 0);
            {
              ATerm q_37 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(u_56);
              q_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_61);
              n_12 = t;
              t = SSLsetAnnotations(n_12, q_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_56;
          }
        LocalPopChoice(s_61);
        t = xtc_transform_file_2_0(z_25, a_26, t);
      }
    else
      {
        t = r_61;
        t = xtc_transform_term_2_0(b_26, d_26, t);
      }
  }
  t_56 = t;
  {
    ATerm t_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_61 = ATgetArgument(t, 0);
            {
              ATerm u_37 = NULL,v_12 = NULL;
              t = SSLgetAnnotations(t_56);
              u_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_61);
              v_12 = t;
              t = SSLsetAnnotations(v_12, u_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_56;
          }
        LocalPopChoice(u_61);
        t = xtc_transform_file_2_0(i_26, k_26, t);
      }
    else
      {
        t = t_61;
        t = xtc_transform_term_2_0(l_26, m_26, t);
      }
  }
  t = if_keep2_1_0(n_26, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  o_56 = t;
  t = term_j_35;
  p_56 = t;
  t = (ATerm) ATinsert(CheckATermList(o_56), term_v_61);
  q_56 = t;
  t = SSL_printnl(p_56, q_56);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(o_56), term_v_61));
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = term_w_61;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm o_57 = NULL;
  t = pass_verbose_0_0(t);
  o_57 = t;
  t = (ATerm) ATinsert(CheckATermList(o_57), term_c_38);
  return(t);
}
static ATerm y_22 (ATerm t)
{
  t = term_w_61;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm p_57 = NULL;
  t = pass_verbose_0_0(t);
  p_57 = t;
  t = (ATerm) ATinsert(CheckATermList(p_57), term_c_38);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_x_61;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm v_57 = NULL;
  t = pass_verbose_0_0(t);
  v_57 = t;
  t = (ATerm) ATinsert(CheckATermList(v_57), term_c_38);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_x_61;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm y_57 = NULL;
  t = pass_verbose_0_0(t);
  y_57 = t;
  t = (ATerm) ATinsert(CheckATermList(y_57), term_c_38);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = save_as_1_0(p_23, t);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = term_y_61;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_z_61;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm e_58 = NULL;
  t = pass_verbose_0_0(t);
  e_58 = t;
  t = (ATerm) ATinsert(CheckATermList(e_58), term_c_38);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_z_61;
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm f_58 = NULL;
  t = pass_verbose_0_0(t);
  f_58 = t;
  t = (ATerm) ATinsert(CheckATermList(f_58), term_c_38);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = save_as_1_0(a_24, t);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_a_62;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_b_62;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm l_58 = NULL;
  t = pass_verbose_0_0(t);
  l_58 = t;
  t = (ATerm) ATinsert(CheckATermList(l_58), term_c_38);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_b_62;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  ATerm m_58 = NULL;
  t = pass_verbose_0_0(t);
  m_58 = t;
  t = (ATerm) ATinsert(CheckATermList(m_58), term_c_38);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_c_62;
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm s_58 = NULL;
  t = pass_verbose_0_0(t);
  s_58 = t;
  t = (ATerm) ATinsert(CheckATermList(s_58), term_c_38);
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_c_62;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm t_58 = NULL;
  t = pass_verbose_0_0(t);
  t_58 = t;
  t = (ATerm) ATinsert(CheckATermList(t_58), term_c_38);
  return(t);
}
static ATerm n_24 (ATerm t)
{
  t = save_as_1_0(o_24, t);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_d_62;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_e_62;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm a_59 = NULL;
  t = pass_verbose_0_0(t);
  a_59 = t;
  t = (ATerm) ATinsert(CheckATermList(a_59), term_c_38);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_e_62;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm b_59 = NULL;
  t = pass_verbose_0_0(t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), term_c_38);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  t = term_f_62;
  return(t);
}
static ATerm y_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_c_38);
  return(t);
}
static ATerm c_25 (ATerm t)
{
  t = term_f_62;
  return(t);
}
static ATerm d_25 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_c_38);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm k_60 = NULL;
  t = pass_verbose_0_0(t);
  k_60 = t;
  t = (ATerm) ATinsert(CheckATermList(k_60), term_c_38);
  return(t);
}
static ATerm i_25 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm l_60 = NULL;
  t = pass_verbose_0_0(t);
  l_60 = t;
  t = (ATerm) ATinsert(CheckATermList(l_60), term_c_38);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_g_62;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm s_60 = NULL;
  t = pass_verbose_0_0(t);
  s_60 = t;
  t = (ATerm) ATinsert(CheckATermList(s_60), term_c_38);
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_g_62;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm t_60 = NULL;
  t = pass_verbose_0_0(t);
  t_60 = t;
  t = (ATerm) ATinsert(CheckATermList(t_60), term_c_38);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = save_as_1_0(w_25, t);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_j_62;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_k_62;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm d_61 = NULL;
  t = pass_verbose_0_0(t);
  d_61 = t;
  t = (ATerm) ATinsert(CheckATermList(d_61), term_c_38);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_k_62;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_c_38);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_p_62;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm p_61 = NULL;
  t = pass_verbose_0_0(t);
  p_61 = t;
  t = (ATerm) ATinsert(CheckATermList(p_61), term_c_38);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_p_62;
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm q_61 = NULL;
  t = pass_verbose_0_0(t);
  q_61 = t;
  t = (ATerm) ATinsert(CheckATermList(q_61), term_c_38);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = save_as_1_0(o_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_q_62;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_22, t);
  t = profile_p__2_0(n_22, p_22, t);
  return(t);
}
static ATerm s_13 (ATerm p_54, ATerm q_54, ATerm t)
{
  t = SSL_table_get(p_54, q_54);
  return(t);
}
static ATerm y_12 (ATerm d_53, ATerm e_53, ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL;
  i_62 = t;
  {
    ATerm u_62 = t;
    int v_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
        t = s_13(d_53, e_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_62 = ATgetFirst((ATermList) t);
            h_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_62);
        t = SSL_table_put(d_53, e_53, h_62);
        t = (ATerm) ATmakeAppl(sym__3, d_53, e_53, h_62);
      }
    else
      {
        t = u_62;
        t = SSL_table_remove(d_53, e_53);
        t = (ATerm) ATmakeAppl(sym__2, d_53, e_53);
      }
  }
  t = i_62;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,r_62 = NULL;
  o_62 = t;
  t = g_103(t);
  n_62 = t;
  {
    ATerm y_62 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 = NULL;
        t = term_c_56;
        s_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_62, term_c_56);
        t = s_13(n_62, s_62, t);
        LocalPopChoice(b_63);
      }
    else
      {
        t = y_62;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_62 = ATgetFirst((ATermList) t);
      l_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_56;
  r_62 = t;
  t = SSL_table_put(n_62, r_62, l_62);
  t = m_62;
  {
    static ATerm p_26 (ATerm t)
    {
      ATerm t_62 = NULL;
      t_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_62, t_62);
      t = y_12(n_62, t_62, t);
      return(t);
    }
    t = map_1_0(p_26, t);
  }
  t = o_62;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  ATerm c_63 = t;
  int f_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_82(t);
      t = t_82(t);
      LocalPopChoice(f_63);
    }
  else
    {
      t = c_63;
      t = t_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm x_62 = NULL,z_62 = NULL,a_63 = NULL,d_63 = NULL,e_63 = NULL;
  z_62 = t;
  t = f_103(t);
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_62, term_c_56);
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_63 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_63 = ATgetArgument(t, 0);
            ATerm k_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_56;
        i_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_62, term_c_56);
        t = s_13(x_62, i_63, t);
        LocalPopChoice(h_63);
      }
    else
      {
        t = g_63;
        t = (ATerm) ATempty;
      }
  }
  a_63 = t;
  t = term_c_56;
  d_63 = t;
  t = (ATerm) ATinsert(CheckATermList(a_63), (ATerm) ATempty);
  e_63 = t;
  t = SSL_table_put(x_62, d_63, e_63);
  t = z_62;
  return(t);
}
static ATerm q_26 (ATerm t)
{
  t = term_h_56;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_63);
        LocalPopChoice(m_63);
      }
    else
      {
        t = l_63;
        t = v_63;
      }
  }
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_h_56;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm p_63 = NULL;
  static ATerm s_26 (ATerm t)
  {
    ATerm q_63 = NULL;
    q_63 = t;
    {
      ATerm n_63 = t;
      int o_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_63 = NULL,s_63 = NULL;
          t = term_h_56;
          r_63 = t;
          t = term_c_56;
          s_63 = t;
          t = term_r_57;
          t = s_13(r_63, s_63, t);
          LocalPopChoice(o_63);
        }
      else
        {
          t = n_63;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_63 != NULL) && (p_63 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_63 = ATgetFirst((ATermList) t);
        {
          ATerm t_63 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_63;
    t = map_1_0(u_26, t);
    t = q_63;
    t = end_scope_1_0(v_26, t);
    return(t);
  }
  t = begin_scope_1_0(q_26, t);
  t = restore_always_2_0(e_115, s_26, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm e_64 = NULL;
  e_64 = t;
  {
    ATerm u_63 = t;
    int w_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_64 = NULL,k_64 = NULL,n_64 = NULL;
        t = term_f_35;
        k_64 = t;
        t = term_g_35;
        n_64 = t;
        t = term_h_35;
        t = s_13(k_64, n_64, t);
        j_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_64, term_g_38);
        t = geq_0_0(t);
        t = e_64;
        t = q_105(t);
        LocalPopChoice(w_63);
      }
    else
      {
        t = u_63;
        t = e_64;
      }
  }
  return(t);
}
static ATerm a_13 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm x_63 = t;
  int y_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_41, h_41);
      LocalPopChoice(y_63);
    }
  else
    {
      t = x_63;
      t = SSL_addr(g_41, h_41);
    }
  return(t);
}
static ATerm c_13 (ATerm m_41, ATerm n_41, ATerm t)
{
  ATerm z_63 = t;
  int a_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_41, n_41);
      LocalPopChoice(a_64);
    }
  else
    {
      t = z_63;
      t = SSL_subtr(m_41, n_41);
    }
  return(t);
}
static ATerm d_13 (ATerm a_50, ATerm c_50, ATerm e_50, ATerm g_50, ATerm b_50, ATerm d_50, ATerm f_50, ATerm h_50, ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_50, b_50);
  t = c_13(a_50, b_50, t);
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_50, d_50);
  t = c_13(c_50, d_50, t);
  s_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
  t = c_13(e_50, f_50, t);
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, h_50);
  t = c_13(g_50, h_50, t);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_64, s_64, t_64, u_64);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,z_64 = NULL,a_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_64 = ATgetArgument(t, 0);
      if(match_cons(b_64, sym__4))
        {
          w_64 = ATgetArgument(b_64, 0);
          x_64 = ATgetArgument(b_64, 1);
          z_64 = ATgetArgument(b_64, 2);
          a_65 = ATgetArgument(b_64, 3);
        }
      else
        _fail(t);
      {
        ATerm c_64 = ATgetArgument(t, 1);
        if(match_cons(c_64, sym__4))
          {
            e_65 = ATgetArgument(c_64, 0);
            f_65 = ATgetArgument(c_64, 1);
            g_65 = ATgetArgument(c_64, 2);
            h_65 = ATgetArgument(c_64, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_13(w_64, x_64, z_64, a_65, e_65, f_65, g_65, h_65, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,w_65 = NULL,y_65 = NULL,a_66 = NULL,b_66 = NULL,d_66 = NULL,f_66 = NULL;
  q_65 = t;
  t = times_0_0(t);
  i_65 = t;
  t = q_65;
  t = e_109(t);
  j_65 = t;
  t = times_0_0(t);
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_65, i_65);
  t = diff_times_0_0(t);
  o_65 = t;
  if(match_cons(t, sym__4))
    {
      b_66 = ATgetArgument(t, 0);
      {
        ATerm d_64 = ATgetArgument(t, 1);
      }
      d_66 = ATgetArgument(t, 2);
      {
        ATerm f_64 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_66, d_66);
  t = a_13(b_66, d_66, t);
  f_66 = t;
  t = SSL_TicksToSeconds(f_66);
  m_65 = t;
  t = o_65;
  if(match_cons(t, sym__4))
    {
      ATerm g_64 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
      {
        ATerm h_64 = ATgetArgument(t, 2);
      }
      y_65 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_65, y_65);
  t = a_13(w_65, y_65, t);
  a_66 = t;
  t = SSL_TicksToSeconds(a_66);
  n_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_65), term_l_64), m_65), term_i_64);
  t = d_109(t);
  t = j_65;
  return(t);
}
ATerm debug_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,l_66 = NULL;
  g_66 = t;
  t = x_89(t);
  h_66 = t;
  t = term_j_35;
  i_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_66), h_66);
  l_66 = t;
  t = SSL_printnl(i_66, l_66);
  t = g_66;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,q_66 = NULL,s_66 = NULL,u_66 = NULL,v_66 = NULL;
  m_66 = t;
  t = term_f_35;
  u_66 = t;
  t = term_m_64;
  v_66 = t;
  t = term_o_64;
  t = s_13(u_66, v_66, t);
  n_66 = t;
  t = term_m_36;
  q_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_65), term_d_65), term_c_65), term_b_65), term_y_64), term_v_64), term_q_64), n_66), term_p_64);
  s_66 = t;
  t = SSL_printnl(q_66, s_66);
  t = m_66;
  return(t);
}
static ATerm e_13 (ATerm k_44, ATerm l_44, ATerm t)
{
  t = SSL_copy(k_44, l_44);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_66 = NULL;
  static ATerm y_26 (ATerm t)
  {
    ATerm z_66 = NULL,c_67 = NULL;
    z_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_66), z_66);
    t = s_13(not_null(y_66), z_66, t);
    c_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_66, c_67);
    return(t);
  }
  if(((y_66 != NULL) && (y_66 != t)))
    _fail(t);
  else
    y_66 = t;
  t = SSL_table_keys(y_66);
  t = map_1_0(y_26, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm e_67 = NULL;
  e_67 = t;
  {
    ATerm l_65 = t;
    int r_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
        t = term_f_35;
        j_67 = t;
        t = term_g_35;
        k_67 = t;
        t = term_h_35;
        t = s_13(j_67, k_67, t);
        i_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_67, term_u_44);
        t = geq_0_0(t);
        t = e_67;
        t = u_105(t);
        LocalPopChoice(r_65);
      }
    else
      {
        t = l_65;
        t = e_67;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm n_67 = NULL;
  n_67 = t;
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
        t = term_f_35;
        q_67 = t;
        t = term_g_35;
        r_67 = t;
        t = term_h_35;
        t = s_13(q_67, r_67, t);
        p_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_67, term_s_41);
        t = geq_0_0(t);
        t = n_67;
        t = t_105(t);
        LocalPopChoice(t_65);
      }
    else
      {
        t = s_65;
        t = n_67;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
  b_68 = t;
  if(match_cons(t, sym__2))
    {
      c_68 = ATgetArgument(t, 0);
      d_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_65 = t;
    int v_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_68;
        if((c_68 != t))
          {
            _fail(t);
          }
        t = b_68;
        LocalPopChoice(v_65);
      }
    else
      {
        t = u_65;
        t = (ATerm) ATmakeAppl(sym__2, c_68, d_68);
        {
          ATerm x_65 = t;
          int z_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_68, d_68);
              LocalPopChoice(z_65);
            }
          else
            {
              t = x_65;
              t = SSL_gtr(c_68, d_68);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_68, d_68);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  {
    ATerm c_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
        t = term_f_35;
        k_68 = t;
        t = term_g_35;
        l_68 = t;
        t = term_h_35;
        t = s_13(k_68, l_68, t);
        j_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_68, term_d_42);
        t = geq_0_0(t);
        t = h_68;
        t = v_105(t);
        LocalPopChoice(e_66);
      }
    else
      {
        t = c_66;
        t = h_68;
      }
  }
  return(t);
}
static ATerm h_13 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm n_29, ATerm m_29, ATerm t)
{
  t = x_94(t);
  {
    static ATerm z_26 (ATerm t)
    {
      ATerm n_68 = NULL;
      n_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_29, n_68);
      t = w_94(t);
      return(t);
    }
    t = fetch_1_0(z_26, t);
  }
  t = m_29;
  return(t);
}
static ATerm i_13 (ATerm t_94 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm m_69 (ATerm t)
  {
    ATerm e_69 = NULL,f_69 = NULL,h_69 = NULL;
    e_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_69 = ATgetFirst((ATermList) t);
            h_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_66 = t;
          int k_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_69;
              {
                static ATerm a_27 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = h_13(t_94, a_27, f_69, h_69, t);
              }
              t = m_69(t);
              LocalPopChoice(k_66);
            }
          else
            {
              t = j_66;
              {
                ATerm u_38 = NULL,b_39 = NULL,q_14 = NULL;
                t = SSLgetAnnotations(e_69);
                u_38 = t;
                t = h_69;
                t = m_69(t);
                b_39 = t;
                t = (ATerm) ATinsert(CheckATermList(b_39), f_69);
                q_14 = t;
                t = SSLsetAnnotations(q_14, u_38);
              }
            }
        }
      }
    return(t);
  }
  t = j_29;
  t = m_69(t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm z_69 = NULL;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      if((z_69 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm v_53, ATerm w_53, ATerm x_53, ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,s_69 = NULL;
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
  {
    ATerm o_66 = t;
    int p_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_66 = ATgetArgument(t, 0);
            ATerm t_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_53, w_53);
        t = s_13(v_53, w_53, t);
        LocalPopChoice(p_66);
      }
    else
      {
        t = o_66;
        t = (ATerm) ATempty;
      }
  }
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_69, x_53);
  t = i_13(c_27, s_69, x_53, t);
  q_69 = t;
  t = SSL_table_put(v_53, w_53, q_69);
  t = p_69;
  return(t);
}
static ATerm k_13 (ATerm m_110 (ATerm), ATerm f_54, ATerm e_54, ATerm t)
{
  static ATerm d_27 (ATerm t)
  {
    ATerm c_70 = NULL,d_70 = NULL;
    if(match_cons(t, sym__2))
      {
        c_70 = ATgetArgument(t, 0);
        d_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_54, c_70, d_70);
    t = m_110(t);
    return(t);
  }
  t = e_54;
  t = map_1_0(d_27, t);
  return(t);
}
static ATerm o_13 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_access(d_38, e_38);
  return(t);
}
static ATerm y_70 (ATerm m_70, ATerm t)
{
  t = SSL_fclose(m_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_70 = NULL,u_70 = NULL;
  u_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_70 = ATgetArgument(t, 0);
      {
        ATerm w_66 = t;
        int x_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_70);
            LocalPopChoice(x_66);
          }
        else
          {
            t = w_66;
            t = y_70(u_70, t);
          }
      }
    }
  else
    {
      t = y_70(u_70, t);
    }
  return(t);
}
static ATerm l_13 (ATerm h_23, ATerm t)
{
  t = SSL_read_term_from_stream(h_23);
  return(t);
}
static ATerm m_13 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_fopen(m_38, n_38);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_71 = NULL;
  t = SSL_stdin_stream();
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_71 = NULL;
  t = SSL_stdout_stream();
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_71 = NULL;
  t = SSL_stderr_stream();
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_71);
  return(t);
}
static ATerm f_73 (ATerm q_71, ATerm t)
{
  ATerm r_71 = NULL;
  t = SSL_explode_term(q_71);
  if(match_cons(t, sym__2))
    {
      ATerm a_67 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_67) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_67 = ATgetArgument(t, 1);
        if(((ATgetType(b_67) == AT_LIST) && !(ATisEmpty(b_67))))
          {
            r_71 = ATgetFirst((ATermList) b_67);
            {
              ATerm d_67 = (ATerm) ATgetNext((ATermList) b_67);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_71;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_73 (ATerm w_71, ATerm x_71, ATerm b_72, ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,g_72 = NULL,k_72 = NULL,s_14 = NULL;
  t = SSLgetAnnotations(b_72);
  g_72 = t;
  t = w_71;
  if(match_cons(t, sym_Path_1))
    {
      k_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_72, x_71);
  s_14 = t;
  t = SSLsetAnnotations(s_14, g_72);
  if(match_cons(t, sym__2))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(c_72, d_72, t);
  return(t);
}
static ATerm h_73 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm s_72 = NULL,u_72 = NULL,v_72 = NULL,y_72 = NULL,t_14 = NULL;
  t = SSLgetAnnotations(p_72);
  v_72 = t;
  t = SSL_is_string(n_72);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_72, o_72);
  t_14 = t;
  t = SSLsetAnnotations(t_14, v_72);
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_13(s_72, u_72, t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
      {
        ATerm f_67 = t;
        int g_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_73(b_73, t);
            LocalPopChoice(g_67);
          }
        else
          {
            t = f_67;
            {
              ATerm h_67 = t;
              int l_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_73(c_73, d_73, b_73, t);
                  LocalPopChoice(l_67);
                }
              else
                {
                  t = h_67;
                  t = h_73(c_73, d_73, b_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_73(b_73, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,t_73 = NULL;
  t_73 = t;
  {
    ATerm m_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_73, term_s_67);
        t = n_13(t);
        LocalPopChoice(o_67);
      }
    else
      {
        t = m_67;
        {
          ATerm n_40 = NULL,p_40 = NULL;
          t = term_t_67;
          p_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_67, t_73);
          t = w_13(p_40, t_73, t);
          n_40 = t;
          t = SSL_perror(n_40);
          _fail(t);
        }
      }
  }
  l_73 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_13(m_73, t);
  k_73 = t;
  t = l_73;
  t = fclose_0_0(t);
  t = k_73;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_u_67;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_67 = t;
  int x_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_73 = NULL,y_73 = NULL;
      x_73 = t;
      t = (ATerm) ATinsert(ATempty, term_y_67);
      y_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_73, (ATerm) ATinsert(ATempty, term_y_67));
      t = o_13(x_73, y_73, t);
      LocalPopChoice(x_67);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_67;
      {
        ATerm z_67 = t;
        int a_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_68 = t;
            if((PushChoice() == 0))
              {
                ATerm z_73 = NULL,a_74 = NULL;
                z_73 = t;
                t = (ATerm) ATinsert(ATempty, term_k_56);
                a_74 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_73, (ATerm) ATinsert(ATempty, term_k_56));
                t = o_13(z_73, a_74, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_68;
              }
            t = debug_1_0(e_27, t);
            LocalPopChoice(a_68);
          }
        else
          {
            t = z_67;
            t = debug_1_0(h_27, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_27 (ATerm t)
{
  t = debug_1_0(j_27, t);
  return(t);
}
static ATerm j_27 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  t = debug_1_0(l_27, t);
  return(t);
}
static ATerm l_27 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm m_27 (ATerm t)
{
  ATerm q_74 = NULL,s_74 = NULL,u_74 = NULL;
  q_74 = t;
  t = term_j_35;
  s_74 = t;
  t = (ATerm) ATinsert(ATempty, term_i_68);
  u_74 = t;
  t = SSL_printnl(s_74, u_74);
  t = q_74;
  return(t);
}
static ATerm n_27 (ATerm t)
{
  ATerm v_74 = NULL,x_74 = NULL,y_74 = NULL;
  if(match_cons(t, sym__3))
    {
      v_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
      y_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_13(v_74, x_74, y_74, t);
  return(t);
}
static ATerm o_27 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL;
  z_74 = t;
  t = term_j_35;
  a_75 = t;
  t = (ATerm) ATinsert(ATempty, term_m_68);
  b_75 = t;
  t = SSL_printnl(a_75, b_75);
  t = z_74;
  return(t);
}
static ATerm p_27 (ATerm t)
{
  ATerm c_75 = NULL,e_75 = NULL,g_75 = NULL;
  c_75 = t;
  t = term_j_35;
  e_75 = t;
  t = (ATerm) ATinsert(ATempty, term_i_68);
  g_75 = t;
  t = SSL_printnl(e_75, g_75);
  t = c_75;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,f_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL;
  b_74 = t;
  t = if_verbose5_1_0(i_27, t);
  {
    ATerm o_68 = t;
    if((PushChoice() == 0))
      {
        ATerm o_74 = NULL,p_74 = NULL;
        t = term_p_68;
        o_74 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_74);
        p_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_68, (ATerm) ATmakeAppl(sym_Imported_1, b_74));
        t = s_13(o_74, p_74, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_68;
      }
  }
  d_74 = t;
  t = term_p_68;
  l_74 = t;
  t = term_q_68;
  m_74 = t;
  t = (ATerm) ATinsert(ATempty, b_74);
  n_74 = t;
  t = SSL_table_put(l_74, m_74, n_74);
  t = d_74;
  t = if_verbose4_1_0(k_27, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_27, t);
  c_74 = t;
  t = term_p_68;
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_68, c_74);
  t = k_13(n_27, j_74, c_74, t);
  t = if_verbose6_1_0(o_27, t);
  t = term_p_68;
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_74);
  h_74 = t;
  t = (ATerm) ATempty;
  i_74 = t;
  t = SSL_table_put(f_74, h_74, i_74);
  t = (ATerm) ATmakeAppl(sym__3, term_p_68, (ATerm)ATmakeAppl(sym_Imported_1, b_74), (ATerm) ATempty);
  t = if_verbose4_1_0(p_27, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
  w_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_75;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_75 = ATgetFirst((ATermList) t);
          y_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_68 = t;
        int s_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_41 = NULL,w_41 = NULL,b_42 = NULL,q_18 = NULL;
            t = SSLgetAnnotations(w_75);
            l_41 = t;
            t = x_75;
            t = d_98(t);
            w_41 = t;
            t = y_75;
            t = filter_1_0(d_98, t);
            b_42 = t;
            t = (ATerm) ATinsert(CheckATermList(b_42), w_41);
            q_18 = t;
            t = SSLsetAnnotations(q_18, l_41);
            LocalPopChoice(s_68);
          }
        else
          {
            t = r_68;
            t = y_75;
            t = filter_1_0(d_98, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  static ATerm b_76 (ATerm t)
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_82(t);
        t = b_76(t);
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
        t = x_82(t);
      }
    return(t);
  }
  t = b_76(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_68 = t;
  int w_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_76 = NULL,f_76 = NULL;
      t = term_f_35;
      d_76 = t;
      t = term_x_68;
      f_76 = t;
      t = term_y_68;
      t = s_13(d_76, f_76, t);
      LocalPopChoice(w_68);
    }
  else
    {
      t = v_68;
      {
        ATerm z_68 = t;
        int a_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_76 = NULL;
            t = term_b_69;
            h_76 = t;
            t = SSL_getenv(h_76);
            LocalPopChoice(a_69);
          }
        else
          {
            t = z_68;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = debug_1_0(r_27, t);
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = term_c_69;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  t = term_p_68;
  q_76 = t;
  t = term_d_69;
  r_76 = t;
  t = term_g_69;
  t = s_13(q_76, r_76, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm i_69 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_69;
      }
  }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  t = debug_1_0(y_27, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_j_69;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_76 = NULL;
  t = if_verbose5_1_0(q_27, t);
  j_76 = t;
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_76 = NULL,n_76 = NULL;
        t = term_p_68;
        k_76 = t;
        t = term_q_68;
        n_76 = t;
        t = term_n_69;
        t = s_13(k_76, n_76, t);
        LocalPopChoice(l_69);
      }
    else
      {
        t = k_69;
        {
          ATerm p_76 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_76 = t;
          t = repeat_2_0(t_27, _id, t);
          t = p_76;
        }
      }
  }
  t = j_76;
  t = if_verbose5_1_0(u_27, t);
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = debug_1_0(a_28, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = term_o_69;
  return(t);
}
static ATerm v_77 (ATerm y_76, ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  t = term_p_68;
  c_77 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_76);
  d_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_68, (ATerm) ATmakeAppl(sym_Tool_1, y_76));
  t = s_13(c_77, d_77, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_69 = ATgetFirst((ATermList) t);
      if(match_cons(r_69, sym__2))
        {
          ATerm u_69 = ATgetArgument(r_69, 0);
          b_77 = ATgetArgument(r_69, 1);
        }
      else
        _fail(t);
      {
        ATerm t_69 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_77;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_o_69;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_p_68;
  t = table_getlist_0_0(t);
  t = debug_1_0(f_28, t);
  return(t);
}
static ATerm f_28 (ATerm t)
{
  t = term_v_69;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
      t = if_verbose5_1_0(z_27, t);
      t = xtc_load_0_0(t);
      g_77 = t;
      if(match_cons(t, sym__2))
        {
          e_77 = ATgetArgument(t, 0);
          f_77 = ATgetArgument(t, 1);
          {
            ATerm y_69 = t;
            int a_70 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_77 = NULL,m_77 = NULL,o_77 = NULL;
                t = term_p_68;
                m_77 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, e_77);
                o_77 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_68, (ATerm) ATmakeAppl(sym_Tool_1, e_77));
                t = s_13(m_77, o_77, t);
                {
                  static ATerm b_28 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((f_77 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_77 != NULL) && (l_77 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(b_28, t);
                }
                t = not_null(l_77);
                LocalPopChoice(a_70);
              }
            else
              {
                t = y_69;
                t = v_77(g_77, t);
              }
          }
        }
      else
        {
          t = v_77(g_77, t);
        }
      t = if_verbose5_1_0(c_28, t);
      LocalPopChoice(x_69);
    }
  else
    {
      t = w_69;
      {
        ATerm t_77 = NULL,k_42 = NULL,m_42 = NULL;
        t_77 = t;
        t = term_j_35;
        k_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_70), t_77), term_b_70);
        m_42 = t;
        t = SSL_printnl(k_42, m_42);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_70), t_77), term_b_70);
        t = if_verbose5_1_0(e_28, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm p_13 (ATerm j_48, ATerm i_48, ATerm t)
{
  ATerm y_77 = NULL,a_78 = NULL,b_78 = NULL;
  t = j_48;
  {
    ATerm f_70 = t;
    int g_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_78 = NULL;
        t = term_f_35;
        c_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_35, j_48);
        t = s_13(c_78, j_48, t);
        LocalPopChoice(g_70);
      }
    else
      {
        t = f_70;
        t = (ATerm) ATempty;
      }
  }
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, a_78);
  t = conc_0_0(t);
  y_77 = t;
  t = term_f_35;
  b_78 = t;
  t = SSL_table_put(b_78, j_48, y_77);
  t = (ATerm) ATmakeAppl(sym__3, term_f_35, j_48, y_77);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
      t = term_i_36;
      t = p_0(t);
      m_78 = t;
      t = term_h_70;
      n_78 = t;
      t = term_i_70;
      o_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_70, term_i_70, m_78);
      t = t_13(n_78, o_78, m_78, t);
      _fail(t);
    }
  else
    {
      ATerm s_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_78 = ATgetFirst((ATermList) t);
          j_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_78 = ATgetFirst((ATermList) t);
          l_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_78;
      t = n_0(t);
      t = k_78;
      t = o_0(t);
      s_78 = t;
      t = (ATerm) ATinsert(CheckATermList(l_78), s_78);
    }
  return(t);
}
static ATerm g_28 (ATerm t)
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
static ATerm h_28 (ATerm t)
{
  ATerm w_78 = NULL,y_78 = NULL;
  t = term_g_35;
  w_78 = t;
  t = term_a_35;
  y_78 = t;
  t = term_j_70;
  t = v_13(w_78, y_78, t);
  t = term_k_70;
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_l_70;
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
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  t = SSL_string_to_int(z_78);
  a_79 = t;
  t = term_g_35;
  b_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_35, a_79);
  t = v_13(b_79, a_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_78);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_n_70;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  ATerm c_79 = NULL,e_79 = NULL;
  t = term_o_70;
  c_79 = t;
  t = term_i_36;
  e_79 = t;
  t = term_p_70;
  t = v_13(c_79, e_79, t);
  t = term_q_70;
  return(t);
}
static ATerm w_28 (ATerm t)
{
  t = term_s_70;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_70 = t;
  int v_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_28, h_28, i_28, t);
      LocalPopChoice(v_70);
    }
  else
    {
      t = t_70;
      {
        ATerm w_70 = t;
        int x_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_28, l_28, m_28, t);
            LocalPopChoice(x_70);
          }
        else
          {
            t = w_70;
            t = Option_3_0(q_28, r_28, w_28, t);
          }
      }
    }
  return(t);
}
static ATerm q_13 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm a_71 = t;
  int b_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_79 = NULL,k_79 = NULL;
      t = term_f_35;
      k_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_35, g_48);
      t = s_13(k_79, g_48, t);
      t = term_f_35;
      h_79 = t;
      t = SSL_table_remove(h_79, g_48);
      t = (ATerm) ATmakeAppl(sym__2, term_f_35, g_48);
      LocalPopChoice(b_71);
    }
  else
    {
      t = a_71;
      t = (ATerm) ATmakeAppl(sym__2, g_48, h_48);
      t = v_13(g_48, h_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  static ATerm k_80 (ATerm t)
  {
    ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
    j_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_80 = ATgetFirst((ATermList) t);
        i_80 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_42 = NULL,w_42 = NULL,x_18 = NULL;
          t = SSLgetAnnotations(j_80);
          r_42 = t;
          t = i_80;
          t = k_80(t);
          w_42 = t;
          t = (ATerm) ATinsert(CheckATermList(w_42), h_80);
          x_18 = t;
          t = SSLsetAnnotations(x_18, r_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_80;
        t = z_90(t);
      }
    return(t);
  }
  t = k_80(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
  n_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_79;
    }
  else
    {
      static ATerm x_28 (ATerm t)
      {
        t = not_null(p_79);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_79 = ATgetFirst((ATermList) t);
          if(((p_79 != NULL) && (p_79 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_79;
      t = at_end_1_0(x_28, t);
    }
  return(t);
}
static ATerm w_80 (ATerm o_80, ATerm t)
{
  ATerm p_80 = NULL;
  t = SSL_explode_term(o_80);
  if(match_cons(t, sym__2))
    {
      ATerm d_71 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_71) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_80;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
  t_80 = t;
  if(match_cons(t, sym__2))
    {
      r_80 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
      {
        ATerm e_71 = t;
        int h_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_28 (ATerm t)
            {
              t = s_80;
              return(t);
            }
            t = r_80;
            t = at_end_1_0(y_28, t);
            LocalPopChoice(h_71);
          }
        else
          {
            t = e_71;
            t = w_80(t_80, t);
          }
      }
    }
  else
    {
      t = w_80(t_80, t);
    }
  return(t);
}
static ATerm r_13 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
  t = k_48;
  {
    ATerm i_71 = t;
    int j_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_81 = NULL;
        t = term_f_35;
        a_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_35, k_48);
        t = s_13(a_81, k_48, t);
        LocalPopChoice(j_71);
      }
    else
      {
        t = i_71;
        t = (ATerm) ATempty;
      }
  }
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_80, l_48);
  t = conc_0_0(t);
  x_80 = t;
  t = term_f_35;
  z_80 = t;
  t = SSL_table_put(z_80, k_48, x_80);
  t = (ATerm) ATmakeAppl(sym__3, term_f_35, k_48, x_80);
  return(t);
}
static ATerm z_28 (ATerm t)
{
  ATerm c_81 = NULL;
  c_81 = t;
  if(match_string(t, "-o"))
    {
      t = c_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_81;
    }
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  d_81 = t;
  t = term_o_35;
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_35, d_81);
  t = v_13(e_81, d_81, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_81);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  t = term_k_71;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_28, a_29, d_29, t);
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm g_81 = NULL;
  g_81 = t;
  if(match_string(t, "-i"))
    {
      t = g_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_81;
    }
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL;
  h_81 = t;
  t = term_y_53;
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_53, h_81);
  t = v_13(i_81, h_81, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_81);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_l_71;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_29, o_29, p_29, t);
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm r_81 = NULL;
  r_81 = t;
  if(match_string(t, "-I"))
    {
      t = r_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = r_81;
    }
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
  s_81 = t;
  t = term_d_59;
  t_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_81), term_d_59);
  u_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_59, (ATerm) ATinsert(ATinsert(ATempty, s_81), term_d_59));
  t = p_13(t_81, u_81, t);
  t = term_i_36;
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = term_m_71;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  ATerm v_81 = NULL;
  v_81 = t;
  if(match_string(t, "--main"))
    {
      t = v_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = v_81;
    }
  return(t);
}
static ATerm c_30 (ATerm t)
{
  ATerm w_81 = NULL,z_81 = NULL;
  w_81 = t;
  t = term_w_56;
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_56, w_81);
  t = v_13(z_81, w_81, t);
  t = term_i_36;
  return(t);
}
static ATerm o_30 (ATerm t)
{
  t = term_n_71;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  ATerm a_82 = NULL;
  a_82 = t;
  if(match_string(t, "--library"))
    {
      t = a_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = a_82;
    }
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL;
  t = term_l_37;
  b_82 = t;
  t = term_i_36;
  c_82 = t;
  t = term_o_71;
  t = v_13(b_82, c_82, t);
  t = term_i_36;
  return(t);
}
static ATerm s_30 (ATerm t)
{
  t = term_p_71;
  return(t);
}
static ATerm t_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_30 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL;
  g_82 = t;
  t = term_z_36;
  h_82 = t;
  t = (ATerm) ATinsert(ATempty, g_82);
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, (ATerm) ATinsert(ATempty, g_82));
  t = r_13(h_82, i_82, t);
  t = term_i_36;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  t = term_s_71;
  return(t);
}
static ATerm w_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm j_82 = NULL,l_82 = NULL,m_82 = NULL;
  j_82 = t;
  t = term_y_35;
  l_82 = t;
  t = (ATerm) ATinsert(ATempty, j_82);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_35, (ATerm) ATinsert(ATempty, j_82));
  t = p_13(l_82, m_82, t);
  t = term_i_36;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = term_t_71;
  return(t);
}
static ATerm z_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
  n_82 = t;
  t = term_r_35;
  o_82 = t;
  t = (ATerm) ATinsert(ATempty, n_82);
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, (ATerm) ATinsert(ATempty, n_82));
  t = p_13(o_82, p_82, t);
  t = term_i_36;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  t = term_u_71;
  return(t);
}
static ATerm c_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  t = term_a_36;
  q_82 = t;
  t = term_i_36;
  r_82 = t;
  t = term_v_71;
  t = v_13(q_82, r_82, t);
  t = term_i_36;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  t = term_y_71;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm u_82 = NULL,z_82 = NULL;
  t = term_p_58;
  u_82 = t;
  t = term_i_36;
  z_82 = t;
  t = term_z_71;
  t = v_13(u_82, z_82, t);
  t = term_i_36;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  t = term_a_72;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm d_83 = NULL,e_83 = NULL;
  t = term_j_54;
  d_83 = t;
  t = term_i_36;
  e_83 = t;
  t = term_e_72;
  t = v_13(d_83, e_83, t);
  t = term_i_36;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = term_f_72;
  return(t);
}
static ATerm m_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,i_83 = NULL;
  f_83 = t;
  t = SSL_string_to_int(f_83);
  g_83 = t;
  t = term_b_40;
  i_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, g_83);
  t = v_13(i_83, g_83, t);
  t = term_i_36;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_h_72;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  t = SSL_string_to_int(j_83);
  k_83 = t;
  t = term_f_40;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, k_83);
  t = v_13(l_83, k_83, t);
  t = term_i_36;
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_i_72;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL;
  t = term_v_42;
  m_83 = t;
  t = term_i_36;
  n_83 = t;
  t = term_j_72;
  t = q_13(m_83, n_83, t);
  t = term_i_36;
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_l_72;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm o_83 = NULL;
  o_83 = t;
  if(match_string(t, "-h"))
    {
      t = o_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = o_83;
    }
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL;
  t = term_m_72;
  p_83 = t;
  t = term_i_36;
  q_83 = t;
  t = term_q_72;
  t = v_13(p_83, q_83, t);
  t = term_i_36;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  t = term_r_72;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm r_83 = NULL,u_83 = NULL;
  t = term_t_72;
  r_83 = t;
  t = term_i_36;
  u_83 = t;
  t = term_w_72;
  t = v_13(r_83, u_83, t);
  t = term_i_36;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_x_72;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm v_83 = NULL;
  v_83 = t;
  if(match_string(t, "-v"))
    {
      t = v_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = v_83;
    }
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL;
  t = term_z_72;
  w_83 = t;
  t = term_i_36;
  x_83 = t;
  t = term_a_73;
  t = v_13(w_83, x_83, t);
  t = term_i_36;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = term_e_73;
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm y_83 = NULL;
  y_83 = t;
  if(match_string(t, "--warning"))
    {
      t = y_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = y_83;
    }
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm z_83 = NULL;
  z_83 = t;
  {
    ATerm i_73 = t;
    int j_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,z_18 = NULL;
        t = term_f_35;
        c_84 = t;
        t = term_b_54;
        d_84 = t;
        t = term_c_54;
        t = s_13(c_84, d_84, t);
        h_84 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_84 = ATgetFirst((ATermList) t);
            g_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_84);
        e_84 = t;
        t = f_84;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = g_84;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_84), f_84);
        z_18 = t;
        t = SSLsetAnnotations(z_18, e_84);
        t = term_b_54;
        a_84 = t;
        t = (ATerm) ATinsert(ATempty, z_83);
        b_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_54, (ATerm) ATinsert(ATempty, z_83));
        t = v_13(a_84, b_84, t);
        LocalPopChoice(j_73);
      }
    else
      {
        t = i_73;
        {
          ATerm i_84 = NULL,j_84 = NULL;
          t = term_b_54;
          i_84 = t;
          t = (ATerm) ATinsert(ATempty, z_83);
          j_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_54, (ATerm) ATinsert(ATempty, z_83));
          t = p_13(i_84, j_84, t);
        }
      }
  }
  t = term_i_36;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_n_73;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,o_84 = NULL;
  k_84 = t;
  t = term_b_55;
  l_84 = t;
  t = term_g_38;
  o_84 = t;
  t = term_o_73;
  t = v_13(l_84, o_84, t);
  t = k_84;
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = term_b_55;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm p_84 = NULL,s_84 = NULL,t_84 = NULL;
  p_84 = t;
  t = term_d_55;
  s_84 = t;
  t = term_a_35;
  t_84 = t;
  t = term_p_73;
  t = v_13(s_84, t_84, t);
  t = p_84;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_d_55;
  return(t);
}
static ATerm w_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_32 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  t = term_f_59;
  u_84 = t;
  t = term_i_36;
  v_84 = t;
  t = term_q_73;
  t = v_13(u_84, v_84, t);
  t = term_i_36;
  return(t);
}
static ATerm z_32 (ATerm t)
{
  t = term_r_73;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm s_73 = t;
  int u_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_73);
    }
  else
    {
      t = s_73;
      {
        ATerm v_73 = t;
        int w_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_73);
          }
        else
          {
            t = v_73;
            {
              ATerm e_74 = t;
              int g_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(q_29, s_29, w_29, t);
                  LocalPopChoice(g_74);
                }
              else
                {
                  t = e_74;
                  {
                    ATerm k_74 = t;
                    int r_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(b_30, c_30, o_30, t);
                        LocalPopChoice(r_74);
                      }
                    else
                      {
                        t = k_74;
                        {
                          ATerm t_74 = t;
                          int w_74 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(p_30, q_30, s_30, t);
                              LocalPopChoice(w_74);
                            }
                          else
                            {
                              t = t_74;
                              {
                                ATerm d_75 = t;
                                int f_75 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(t_30, u_30, v_30, t);
                                    LocalPopChoice(f_75);
                                  }
                                else
                                  {
                                    t = d_75;
                                    {
                                      ATerm h_75 = t;
                                      int i_75 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(w_30, x_30, y_30, t);
                                          LocalPopChoice(i_75);
                                        }
                                      else
                                        {
                                          t = h_75;
                                          {
                                            ATerm j_75 = t;
                                            int k_75 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(z_30, a_31, b_31, t);
                                                LocalPopChoice(k_75);
                                              }
                                            else
                                              {
                                                t = j_75;
                                                {
                                                  ATerm l_75 = t;
                                                  int m_75 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(c_31, d_31, e_31, t);
                                                      LocalPopChoice(m_75);
                                                    }
                                                  else
                                                    {
                                                      t = l_75;
                                                      {
                                                        ATerm n_75 = t;
                                                        int o_75 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(f_31, g_31, h_31, t);
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
                                                                  t = Option_3_0(i_31, k_31, l_31, t);
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
                                                                        t = ArgOption_3_0(m_31, n_31, p_31, t);
                                                                        LocalPopChoice(s_75);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_75;
                                                                        {
                                                                          ATerm t_75 = t;
                                                                          int u_75 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(q_31, r_31, s_31, t);
                                                                              LocalPopChoice(u_75);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_75;
                                                                              {
                                                                                ATerm v_75 = t;
                                                                                int z_75 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(x_31, y_31, z_31, t);
                                                                                    LocalPopChoice(z_75);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_75;
                                                                                    {
                                                                                      ATerm a_76 = t;
                                                                                      int c_76 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(c_76);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_76;
                                                                                          {
                                                                                            ATerm e_76 = t;
                                                                                            int g_76 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(a_32, c_32, d_32, t);
                                                                                                LocalPopChoice(g_76);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_76;
                                                                                                {
                                                                                                  ATerm i_76 = t;
                                                                                                  int l_76 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(e_32, g_32, h_32, t);
                                                                                                      LocalPopChoice(l_76);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_76;
                                                                                                      {
                                                                                                        ATerm m_76 = t;
                                                                                                        int o_76 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(i_32, k_32, l_32, t);
                                                                                                            LocalPopChoice(o_76);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_76;
                                                                                                            {
                                                                                                              ATerm s_76 = t;
                                                                                                              int t_76 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(m_32, n_32, o_32, t);
                                                                                                                  LocalPopChoice(t_76);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_76;
                                                                                                                  {
                                                                                                                    ATerm u_76 = t;
                                                                                                                    int v_76 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(p_32, q_32, r_32, t);
                                                                                                                        LocalPopChoice(v_76);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = u_76;
                                                                                                                        {
                                                                                                                          ATerm w_76 = t;
                                                                                                                          int x_76 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(s_32, t_32, v_32, t);
                                                                                                                              LocalPopChoice(x_76);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_76;
                                                                                                                              t = Option_3_0(w_32, y_32, z_32, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_77), term_y_64), term_u_77), term_s_77), term_r_77), term_y_64), term_q_77), term_p_77), term_n_77), term_k_77), term_j_77), term_i_77), term_h_77), term_a_77), term_z_76);
  return(t);
}
ATerm map_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  static ATerm o_85 (ATerm t)
  {
    ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
    l_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_85;
      }
    else
      {
        ATerm p_43 = NULL,s_43 = NULL,t_43 = NULL,b_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_85 = ATgetFirst((ATermList) t);
            n_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_85);
        p_43 = t;
        t = m_85;
        t = i_90(t);
        s_43 = t;
        t = n_85;
        t = o_85(t);
        t_43 = t;
        t = (ATerm) ATinsert(CheckATermList(t_43), s_43);
        b_19 = t;
        t = SSLsetAnnotations(b_19, p_43);
      }
    return(t);
  }
  t = o_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_85 = ATgetFirst((ATermList) t);
      s_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_85 = NULL,x_85 = NULL;
        static ATerm a_33 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_85)), not_null(x_85));
          return(t);
        }
        t = s_85;
        t = k_0(t);
        if(((w_85 != NULL) && (w_85 != t)))
          _fail(t);
        else
          w_85 = t;
        t = r_85;
        t = i_0(t);
        if(((x_85 != NULL) && (x_85 != t)))
          _fail(t);
        else
          x_85 = t;
        t = s_85;
        t = reverse_acc_2_0(i_0, a_33, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_36;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_85 = NULL;
  t = term_i_36;
  t = g_0(t);
  y_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_78), y_85), term_f_78), term_y_64), term_e_78), term_y_64), term_d_78), term_z_77), term_y_64), term_x_77);
  return(t);
}
static ATerm e_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_86), term_i_78);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
  ATerm p_78 = t;
  int q_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_86 = NULL,g_86 = NULL;
      t = term_f_35;
      f_86 = t;
      t = term_r_78;
      g_86 = t;
      t = term_t_78;
      t = s_13(f_86, g_86, t);
      c_86 = t;
      LocalPopChoice(q_78);
    }
  else
    {
      t = p_78;
      {
        static ATerm b_33 (ATerm t)
        {
          ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL,d_19 = NULL;
          j_86 = t;
          if(match_cons(t, sym_Program_1))
            {
              i_86 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_86);
          h_86 = t;
          t = i_86;
          if(((c_86 != NULL) && (c_86 != t)))
            _fail(t);
          else
            c_86 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, i_86);
          d_19 = t;
          t = SSLsetAnnotations(d_19, h_86);
          return(t);
        }
        t = fetch_1_0(b_33, t);
      }
    }
  {
    ATerm v_78 = t;
    int x_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_33 (ATerm t)
        {
          t = not_null(c_86);
          return(t);
        }
        t = short_description_1_0(c_33, t);
        t = echo_0_0(t);
        LocalPopChoice(x_78);
      }
    else
      {
        t = v_78;
      }
  }
  t = term_d_79;
  t = echo_0_0(t);
  t = term_h_70;
  d_86 = t;
  t = term_i_70;
  e_86 = t;
  t = term_f_79;
  t = s_13(d_86, e_86, t);
  t = reverse_acc_2_0(_id, e_33, t);
  t = map_1_0(f_33, t);
  {
    ATerm g_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_86 = NULL;
        static ATerm g_33 (ATerm t)
        {
          t = not_null(c_86);
          return(t);
        }
        t = long_description_1_0(g_33, t);
        o_86 = t;
        t = (ATerm) ATinsert(CheckATermList(o_86), term_y_64);
        t = echo_0_0(t);
        LocalPopChoice(i_79);
      }
    else
      {
        t = g_79;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  static ATerm x_87 (ATerm t)
  {
    ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL;
    s_87 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_87 = ATgetFirst((ATermList) t);
        u_87 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_79 = t;
      int l_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_44 = NULL,r_44 = NULL,f_19 = NULL;
          t = SSLgetAnnotations(s_87);
          m_44 = t;
          t = t_87;
          t = s_90(t);
          r_44 = t;
          t = (ATerm) ATinsert(CheckATermList(u_87), r_44);
          f_19 = t;
          t = SSLsetAnnotations(f_19, m_44);
          LocalPopChoice(l_79);
        }
      else
        {
          t = j_79;
          {
            ATerm i_45 = NULL,m_45 = NULL,g_19 = NULL;
            t = SSLgetAnnotations(s_87);
            i_45 = t;
            t = u_87;
            t = x_87(t);
            m_45 = t;
            t = (ATerm) ATinsert(CheckATermList(m_45), t_87);
            g_19 = t;
            t = SSLsetAnnotations(g_19, i_45);
          }
        }
    }
    return(t);
  }
  t = x_87(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  {
    ATerm m_79 = t;
    int q_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_88;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_79 = ATgetFirst((ATermList) t);
                ATerm s_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_88;
          }
        LocalPopChoice(q_79);
      }
    else
      {
        t = m_79;
        t = (ATerm) ATinsert(ATempty, d_88);
      }
  }
  e_88 = t;
  t = term_m_36;
  f_88 = t;
  t = SSL_printnl(f_88, e_88);
  t = d_88;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL;
  t = term_f_35;
  j_88 = t;
  t = term_r_78;
  k_88 = t;
  t = term_t_78;
  t = s_13(j_88, k_88, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL;
  t = term_t_79;
  l_88 = t;
  t = term_i_36;
  m_88 = t;
  t = term_u_79;
  t = v_13(l_88, m_88, t);
  return(t);
}
static ATerm j_33 (ATerm t)
{
  t = term_v_79;
  return(t);
}
static ATerm m_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_33 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  t = term_t_79;
  p_88 = t;
  t = term_i_36;
  q_88 = t;
  t = term_u_79;
  t = v_13(p_88, q_88, t);
  t = term_z_72;
  n_88 = t;
  t = term_i_36;
  o_88 = t;
  t = term_a_73;
  t = v_13(n_88, o_88, t);
  t = term_w_79;
  return(t);
}
static ATerm t_33 (ATerm t)
{
  t = term_x_79;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_79 = t;
  int z_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_33, i_33, j_33, t);
      LocalPopChoice(z_79);
    }
  else
    {
      t = y_79;
      t = Option_3_0(m_33, q_33, t_33, t);
    }
  return(t);
}
static ATerm t_13 (ATerm y_52, ATerm z_52, ATerm x_52, ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
  {
    ATerm a_80 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_80 = ATgetArgument(t, 0);
            ATerm d_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_52, z_52);
        t = s_13(y_52, z_52, t);
        LocalPopChoice(b_80);
      }
    else
      {
        t = a_80;
        t = (ATerm) ATempty;
      }
  }
  u_88 = t;
  t = (ATerm) ATinsert(CheckATermList(u_88), x_52);
  v_88 = t;
  t = SSL_table_put(y_52, z_52, v_88);
  t = t_88;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
      t = term_i_36;
      t = e_0(t);
      i_89 = t;
      t = term_h_70;
      j_89 = t;
      t = term_i_70;
      k_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_70, term_i_70, i_89);
      t = t_13(j_89, k_89, i_89, t);
      _fail(t);
    }
  else
    {
      ATerm s_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_89 = ATgetFirst((ATermList) t);
          e_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_89;
      t = c_0(t);
      t = term_i_36;
      t = d_0(t);
      s_89 = t;
      t = (ATerm) ATinsert(CheckATermList(e_89), s_89);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_60 (ATerm), ATerm w_60 (ATerm), ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,w_89 = NULL,a_90 = NULL,c_90 = NULL,m_90 = NULL,n_19 = NULL;
  m_90 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_89 = ATgetFirst((ATermList) t);
      w_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_90);
  t_89 = t;
  t = u_89;
  t = v_60(t);
  a_90 = t;
  t = w_89;
  t = w_60(t);
  c_90 = t;
  t = (ATerm) ATinsert(CheckATermList(c_90), a_90);
  n_19 = t;
  t = SSLsetAnnotations(n_19, t_89);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,b_91 = NULL,c_91 = NULL,f_91 = NULL,g_91 = NULL,w_19 = NULL;
  v_90 = t;
  {
    ATerm e_80 = t;
    int f_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_80;
        t = j_110(t);
        LocalPopChoice(f_80);
      }
    else
      {
        t = e_80;
      }
  }
  t = v_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_91 = ATgetFirst((ATermList) t);
      c_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_90);
  w_90 = t;
  t = term_r_78;
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_78, b_91);
  t = v_13(g_91, b_91, t);
  t = c_91;
  {
    static ATerm z_91 (ATerm t)
    {
      ATerm l_80 = t;
      int m_80 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_80 = t;
          int q_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_91 = NULL;
              n_91 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_91;
              LocalPopChoice(q_80);
            }
          else
            {
              t = n_80;
              t = j_110(t);
              t = Cons_2_0(_id, z_91, t);
            }
          LocalPopChoice(m_80);
        }
      else
        {
          t = l_80;
          {
            ATerm q_91 = NULL,t_91 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_91 = ATgetFirst((ATermList) t);
                t_91 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_91), (ATerm) ATmakeAppl(sym_Undefined_1, q_91));
          }
        }
      return(t);
    }
    t = z_91(t);
  }
  f_91 = t;
  t = (ATerm) ATinsert(CheckATermList(f_91), (ATerm) ATmakeAppl(sym_Program_1, b_91));
  w_19 = t;
  t = SSLsetAnnotations(w_19, w_90);
  return(t);
}
static ATerm a_34 (ATerm t)
{
  ATerm u_92 = NULL;
  u_92 = t;
  if(match_string(t, "--help"))
    {
      t = u_92;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_92;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_92;
        }
    }
  return(t);
}
static ATerm b_34 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL;
  t = term_m_72;
  z_92 = t;
  t = term_i_36;
  a_93 = t;
  t = term_q_72;
  t = v_13(z_92, a_93, t);
  t = term_u_80;
  return(t);
}
static ATerm d_34 (ATerm t)
{
  t = term_v_80;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm f_92 = NULL,g_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL;
  j_92 = t;
  t = term_h_70;
  l_92 = t;
  t = term_i_70;
  m_92 = t;
  t = (ATerm) ATempty;
  n_92 = t;
  t = SSL_table_put(l_92, m_92, n_92);
  t = j_92;
  {
    static ATerm x_33 (ATerm t)
    {
      ATerm b_81 = t;
      int f_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_110(t);
          LocalPopChoice(f_81);
        }
      else
        {
          t = b_81;
          {
            ATerm j_81 = t;
            int k_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_34, b_34, d_34, t);
                LocalPopChoice(k_81);
              }
            else
              {
                t = j_81;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_33, t);
  }
  {
    ATerm l_81 = t;
    int m_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_93 = NULL;
        u_93 = t;
        {
          ATerm n_81 = t;
          int o_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_46 = NULL;
              t = u_93;
              {
                ATerm x_81 = t;
                int y_81 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_46 = NULL,c_46 = NULL;
                    t = term_f_35;
                    b_46 = t;
                    t = term_m_72;
                    c_46 = t;
                    t = term_d_82;
                    t = s_13(b_46, c_46, t);
                    LocalPopChoice(y_81);
                  }
                else
                  {
                    t = x_81;
                    t = fetch_1_0(e_34, t);
                  }
              }
              t = u_93;
              t = default_system_usage_0_0(t);
              t = term_a_35;
              a_46 = t;
              t = SSL_exit(a_46);
              LocalPopChoice(o_81);
            }
          else
            {
              t = n_81;
              {
                ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
                t = term_f_35;
                h_46 = t;
                t = term_t_79;
                i_46 = t;
                t = term_e_82;
                t = s_13(h_46, i_46, t);
                t = u_93;
                t = default_system_about_0_0(t);
                t = term_a_35;
                g_46 = t;
                t = SSL_exit(g_46);
              }
            }
        }
        LocalPopChoice(m_81);
      }
    else
      {
        t = l_81;
        {
          ATerm f_82 = t;
          int k_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
              static ATerm h_34 (ATerm t)
              {
                ATerm y_93 = NULL,a_94 = NULL,c_94 = NULL,z_19 = NULL;
                c_94 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_94 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_94);
                y_93 = t;
                t = a_94;
                if(((f_92 != NULL) && (f_92 != t)))
                  _fail(t);
                else
                  f_92 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_94);
                z_19 = t;
                t = SSLsetAnnotations(z_19, y_93);
                return(t);
              }
              t = fetch_1_0(h_34, t);
              t = term_j_35;
              w_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_92)), term_v_82);
              x_93 = t;
              t = SSL_printnl(w_93, x_93);
              t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_92)), term_v_82));
              t = default_system_usage_0_0(t);
              t = term_g_38;
              v_93 = t;
              t = SSL_exit(v_93);
              LocalPopChoice(k_82);
            }
          else
            {
              t = f_82;
            }
        }
      }
  }
  g_92 = t;
  t = term_h_70;
  k_92 = t;
  t = SSL_table_destroy(k_92);
  t = g_92;
  return(t);
}
static ATerm v_13 (ATerm d_48, ATerm e_48, ATerm t)
{
  ATerm k_94 = NULL;
  t = term_f_35;
  k_94 = t;
  t = SSL_table_put(k_94, d_48, e_48);
  t = (ATerm) ATmakeAppl(sym__3, term_f_35, d_48, e_48);
  return(t);
}
static ATerm w_13 (ATerm d_37, ATerm e_37, ATerm t)
{
  t = SSL_strcat(d_37, e_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_94 = NULL,z_94 = NULL;
  z_94 = t;
  t = SSL_explode_string(z_94);
  {
    ATerm y_82 = t;
    int a_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_96 (ATerm t)
        {
          ATerm w_95 = NULL,l_96 = NULL,n_96 = NULL;
          w_95 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_96 = ATgetFirst((ATermList) t);
              n_96 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_83 = t;
            int c_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_46 = NULL,c_47 = NULL,e_20 = NULL;
                t = SSLgetAnnotations(w_95);
                x_46 = t;
                t = n_96;
                t = o_96(t);
                c_47 = t;
                t = (ATerm) ATinsert(CheckATermList(c_47), l_96);
                e_20 = t;
                t = SSLsetAnnotations(e_20, x_46);
                LocalPopChoice(c_83);
              }
            else
              {
                t = b_83;
                {
                  ATerm r_47 = NULL,g_20 = NULL;
                  t = SSLgetAnnotations(w_95);
                  r_47 = t;
                  t = l_96;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, l_96);
                  g_20 = t;
                  t = SSLsetAnnotations(g_20, r_47);
                }
              }
          }
          return(t);
        }
        t = o_96(t);
        LocalPopChoice(a_83);
      }
    else
      {
        t = y_82;
        t = (ATerm) ATempty;
      }
  }
  v_94 = t;
  t = SSL_implode_string(v_94);
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
  ATerm f_97 = NULL,i_97 = NULL,j_97 = NULL,n_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,b_98 = NULL,c_98 = NULL,e_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,o_98 = NULL,p_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL,p_99 = NULL,q_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
  f_97 = t;
  t = term_m_64;
  w_99 = t;
  t = term_h_83;
  x_99 = t;
  t = term_s_83;
  t = v_13(w_99, x_99, t);
  t = term_g_35;
  u_99 = t;
  t = term_g_38;
  v_99 = t;
  t = term_t_83;
  t = v_13(u_99, v_99, t);
  t = term_b_40;
  q_99 = t;
  t = term_a_35;
  t_99 = t;
  t = term_m_84;
  t = v_13(q_99, t_99, t);
  t = term_f_40;
  n_99 = t;
  t = term_d_42;
  p_99 = t;
  t = term_n_84;
  t = v_13(n_99, p_99, t);
  t = term_q_84;
  t = xtc_find_path_0_0(t);
  k_98 = t;
  t = term_r_84;
  t = xtc_find_path_0_0(t);
  l_98 = t;
  t = term_w_84;
  t = xtc_find_path_0_0(t);
  m_98 = t;
  t = term_d_59;
  l_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_98), term_d_59), l_98), term_d_59), k_98), term_d_59);
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_98), term_d_59), l_98), term_d_59), k_98), term_d_59));
  t = v_13(l_99, m_99, t);
  t = term_z_36;
  i_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_84), term_x_84);
  k_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, (ATerm) ATinsert(ATinsert(ATempty, term_y_84), term_x_84));
  t = v_13(i_99, k_99, t);
  t = term_z_84;
  t = xtc_find_path_0_0(t);
  j_98 = t;
  t = term_a_85;
  h_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_98, term_a_85);
  t = w_13(j_98, h_99, t);
  x_97 = t;
  t = term_z_84;
  t = xtc_find_path_0_0(t);
  e_98 = t;
  t = term_a_85;
  g_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_98, term_a_85);
  t = w_13(e_98, g_99, t);
  y_97 = t;
  t = term_b_85;
  t = xtc_find_path_0_0(t);
  c_98 = t;
  t = term_a_85;
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_98, term_a_85);
  t = w_13(c_98, f_99, t);
  b_98 = t;
  t = term_y_35;
  v_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_98), term_d_59), y_97), term_d_59), x_97), term_d_59);
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_98), term_d_59), y_97), term_d_59), x_97), term_d_59));
  t = v_13(v_98, w_98, t);
  t = term_z_84;
  t = xtc_find_path_0_0(t);
  w_97 = t;
  t = term_c_85;
  u_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_97, term_c_85);
  t = w_13(w_97, u_98, t);
  i_97 = t;
  t = term_b_85;
  t = xtc_find_path_0_0(t);
  n_97 = t;
  t = term_d_85;
  t_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_97, term_d_85);
  t = w_13(n_97, t_98, t);
  j_97 = t;
  t = term_r_35;
  r_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_85), term_h_85), j_97), term_e_85), term_g_85), term_f_85), i_97), term_e_85);
  s_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_35, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_85), term_h_85), j_97), term_e_85), term_g_85), term_f_85), i_97), term_e_85));
  t = v_13(r_98, s_98, t);
  t = term_b_54;
  o_98 = t;
  t = (ATerm) ATinsert(ATempty, term_j_85);
  p_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_54, (ATerm) ATinsert(ATempty, term_j_85));
  t = v_13(o_98, p_98, t);
  t = f_97;
  return(t);
}
static ATerm k_34 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,q_101 = NULL;
  l_101 = t;
  t = term_f_35;
  m_101 = t;
  t = term_y_53;
  q_101 = t;
  t = term_k_85;
  t = s_13(m_101, q_101, t);
  t = debug_1_0(l_34, t);
  t = l_101;
  return(t);
}
static ATerm l_34 (ATerm t)
{
  t = term_p_85;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm q_85 = t;
    int t_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,d_100 = NULL,e_100 = NULL;
        t = term_f_35;
        d_100 = t;
        t = term_t_72;
        e_100 = t;
        t = term_u_85;
        t = s_13(d_100, e_100, t);
        t = term_v_85;
        t = xtc_find_0_0(t);
        a_100 = t;
        t = term_m_36;
        c_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_100, term_m_36);
        t = e_13(a_100, c_100, t);
        t = term_a_35;
        b_100 = t;
        t = SSL_exit(b_100);
        LocalPopChoice(t_85);
      }
    else
      {
        t = q_85;
      }
  }
  {
    ATerm z_85 = t;
    int a_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_100 = NULL,k_100 = NULL,n_100 = NULL;
        t = term_f_35;
        k_100 = t;
        t = term_z_72;
        n_100 = t;
        t = term_b_86;
        t = s_13(k_100, n_100, t);
        t = strc_version_0_0(t);
        t = term_a_35;
        h_100 = t;
        t = SSL_exit(h_100);
        LocalPopChoice(a_86);
      }
    else
      {
        t = z_85;
      }
  }
  {
    ATerm k_86 = t;
    int l_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_100 = NULL,x_100 = NULL,z_100 = NULL;
        q_100 = t;
        t = term_f_35;
        x_100 = t;
        t = term_y_53;
        z_100 = t;
        t = term_k_85;
        t = s_13(x_100, z_100, t);
        t = q_100;
        LocalPopChoice(l_86);
      }
    else
      {
        t = k_86;
        {
          ATerm d_101 = NULL,e_101 = NULL,h_101 = NULL;
          t = term_j_35;
          e_101 = t;
          t = (ATerm) ATinsert(ATempty, term_m_86);
          h_101 = t;
          t = SSL_printnl(e_101, h_101);
          t = term_g_38;
          d_101 = t;
          t = SSL_exit(d_101);
          t = (ATerm) ATinsert(ATempty, term_m_86);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(k_34, t);
  return(t);
}
static ATerm n_34 (ATerm t)
{
  t = if_verbose1_1_0(w_34, t);
  return(t);
}
static ATerm o_34 (ATerm t)
{
  t = xtc_temp_files_1_0(x_34, t);
  return(t);
}
static ATerm w_34 (ATerm t)
{
  ATerm s_101 = NULL,t_101 = NULL,w_101 = NULL;
  s_101 = t;
  t = term_j_35;
  t_101 = t;
  t = (ATerm) ATinsert(CheckATermList(s_101), term_p_86);
  w_101 = t;
  t = SSL_printnl(t_101, w_101);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(CheckATermList(s_101), term_p_86));
  return(t);
}
static ATerm x_34 (ATerm t)
{
  ATerm q_86 = t;
  int r_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_101 = NULL,y_101 = NULL,c_102 = NULL;
      t = term_f_35;
      y_101 = t;
      t = term_y_53;
      c_102 = t;
      t = term_k_85;
      t = s_13(y_101, c_102, t);
      x_101 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_101);
      LocalPopChoice(r_86);
    }
  else
    {
      t = q_86;
      t = term_j_56;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm y_34 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
  t = run_time_0_0(t);
  d_102 = t;
  t = term_j_35;
  e_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_86), d_102), term_s_86);
  f_102 = t;
  t = SSL_printnl(e_102, f_102);
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_86), d_102), term_s_86));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm u_86 = t;
  int v_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_101 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(n_34, o_34, t);
      t = if_verbose2_1_0(y_34, t);
      t = term_a_35;
      r_101 = t;
      t = SSL_exit(r_101);
      LocalPopChoice(v_86);
    }
  else
    {
      t = u_86;
      {
        ATerm g_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL;
        t = run_time_0_0(t);
        g_102 = t;
        t = term_j_35;
        j_102 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_86), g_102), term_w_86);
        k_102 = t;
        t = SSL_printnl(j_102, k_102);
        t = term_g_38;
        i_102 = t;
        t = SSL_exit(i_102);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
