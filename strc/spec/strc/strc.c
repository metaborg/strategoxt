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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
}
ATerm term_b_82;
ATerm term_x_81;
ATerm term_w_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_k_81;
ATerm term_h_81;
ATerm term_g_81;
ATerm term_e_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_a_81;
ATerm term_w_80;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_d_80;
ATerm term_c_80;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_u_79;
ATerm term_l_79;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_z_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_m_77;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_o_76;
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
ATerm term_a_75;
ATerm term_x_74;
ATerm term_u_74;
ATerm term_q_74;
ATerm term_m_74;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_d_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_u_69;
ATerm term_r_69;
ATerm term_p_69;
ATerm term_l_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_x_68;
ATerm term_w_68;
ATerm term_v_68;
ATerm term_s_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_o_68;
ATerm term_j_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_k_67;
ATerm term_i_67;
ATerm term_f_67;
ATerm term_e_67;
ATerm term_d_67;
ATerm term_c_67;
ATerm term_b_67;
ATerm term_a_67;
ATerm term_z_66;
ATerm term_y_66;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_k_66;
ATerm term_v_65;
ATerm term_t_65;
ATerm term_h_65;
ATerm term_a_65;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_s_64;
ATerm term_n_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_i_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_c_63;
ATerm term_y_62;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_v_60;
ATerm term_i_59;
ATerm term_o_58;
ATerm term_h_58;
ATerm term_f_58;
ATerm term_d_58;
ATerm term_b_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_u_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_b_57;
ATerm term_d_56;
ATerm term_t_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_j_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_s_53;
ATerm term_p_53;
ATerm term_e_53;
ATerm term_y_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_h_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_m_51;
ATerm term_k_51;
ATerm term_g_51;
ATerm term_b_51;
ATerm term_w_50;
ATerm term_s_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_k_50;
ATerm term_c_50;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_q_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_i_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_c_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_a_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_v_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_r_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_b_36;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_f_34;
ATerm term_x_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_l_32;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_43, term_r_35, term_a_44);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_44, term_t_32, term_e_44);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_44, term_i_36, term_h_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_44, term_a_39, term_k_44);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_44, term_n_44, term_o_44);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_44, term_r_44, term_s_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_44, term_v_44, term_w_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_44, term_z_44, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_45, term_d_45, term_e_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_45, term_h_45, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_45, term_l_45, term_m_45);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_45, term_r_38, term_p_45);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_45, term_u_45, term_v_45);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_45, term_a_46, term_b_46);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_46, term_f_46, term_i_46);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_46, term_y_46, term_z_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_c_47, term_d_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_47, term_g_47, term_h_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_47, term_m_47, term_n_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_47, term_q_47, term_t_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_47, term_w_47, term_y_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_48, term_b_48, term_c_48);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_48, term_h_48, term_i_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_m_48, term_n_48);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_48, term_k_38, term_a_49);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_49, term_d_49, term_e_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_i_49, term_l_49);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_49, term_p_49, term_q_49);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym__2, term_e_52, term_d_52);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym__2, term_y_63, term_x_64);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym__2, term_y_63, term_z_63);
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_l_32);
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_32);
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(sym__2, term_e_67, term_x_33);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_x_33);
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_x_33);
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(sym__2, term_s_53, term_x_33);
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(sym__2, term_w_50, term_x_33);
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_x_33);
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(sym__2, term_p_69, term_x_33);
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(sym__2, term_w_69, term_x_33);
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(sym__2, term_a_70, term_x_33);
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_r_35);
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym__2, term_m_51, term_l_32);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(sym__2, term_e_54, term_x_33);
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(sym__2, term_y_66, term_z_66);
  ATprotect(&(term_m_77));
  term_m_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(sym__2, term_m_77, term_x_33);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(sym__2, term_y_60, term_u_79);
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_r_35);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_l_32);
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_a_39);
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm r_12 (ATerm k_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm s_12 (ATerm i_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm t_12 (ATerm v_42, ATerm u_42, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm m_103 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm q_103 (ATerm), ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm p_103 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm r_103 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm h_17 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm save_as_1_0 (ATerm d_79 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm n_103 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm t);
static ATerm x_12 (ATerm r_47, ATerm s_47, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm h_88 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_103 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm x_20, ATerm y_20, ATerm t);
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t);
static ATerm p_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm o_103 (ATerm), ATerm t);
static ATerm u_12 (ATerm c_79 (ATerm), ATerm d_21, ATerm t);
static ATerm v_12 (ATerm x_22, ATerm y_22, ATerm t);
static ATerm w_12 (ATerm m_87 (ATerm), ATerm e_188, ATerm f_23, ATerm t);
static ATerm z_12 (ATerm i_100 (ATerm), ATerm c_42, ATerm a_42, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm x_19 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm b_79 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm z_19 (ATerm t);
static ATerm c_20 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm x_97 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm a_13 (ATerm z_20, ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm u_21 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm b_13 (ATerm u_51, ATerm v_51, ATerm t);
ATerm end_scope_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_100 (ATerm), ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm t_24 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t);
static ATerm d_13 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm f_13 (ATerm u_40, ATerm v_40, ATerm t);
static ATerm g_13 (ATerm r_48, ATerm t_48, ATerm v_48, ATerm x_48, ATerm s_48, ATerm u_48, ATerm w_48, ATerm y_48, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm h_13 (ATerm w_42, ATerm x_42, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm n_102 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm p_102 (ATerm), ATerm t);
static ATerm k_13 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm y_28, ATerm x_28, ATerm t);
static ATerm l_13 (ATerm z_91 (ATerm), ATerm u_28, ATerm t_28, ATerm t);
static ATerm b_25 (ATerm t);
static ATerm m_13 (ATerm m_52, ATerm n_52, ATerm o_52, ATerm t);
static ATerm n_13 (ATerm g_107 (ATerm), ATerm w_52, ATerm v_52, ATerm t);
static ATerm r_13 (ATerm m_37, ATerm n_37, ATerm t);
static ATerm p_62 (ATerm g_62, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_13 (ATerm d_23, ATerm t);
static ATerm p_13 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_64 (ATerm a_63, ATerm t);
static ATerm v_64 (ATerm j_63, ATerm k_63, ATerm l_63, ATerm t);
static ATerm y_64 (ATerm a_64, ATerm c_64, ATerm e_64, ATerm t);
static ATerm q_13 (ATerm t);
static ATerm d_25 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm b_69 (ATerm e_68, ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_13 (ATerm v_46, ATerm u_46, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm r_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_13 (ATerm s_46, ATerm t_46, ATerm t);
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_72 (ATerm u_71, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_13 (ATerm w_46, ATerm x_46, ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm b_27 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
static ATerm g_27 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm u_29 (ATerm t);
static ATerm v_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm y_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm a_30 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm e_30 (ATerm t);
static ATerm f_30 (ATerm t);
static ATerm g_30 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm r_30 (ATerm t);
static ATerm s_30 (ATerm t);
static ATerm u_30 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm g_31 (ATerm t);
static ATerm k_31 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm n_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm u_31 (ATerm t);
static ATerm v_31 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_13 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm w_13 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_107 (ATerm), ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
ATerm parse_options_1_0 (ATerm c_107 (ATerm), ATerm t);
static ATerm y_13 (ATerm p_46, ATerm q_46, ATerm t);
static ATerm z_13 (ATerm m_36, ATerm n_36, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm f_32 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = y_93(t);
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
      t = foldr_2_0(y_93, z_93, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = z_93(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_l_32;
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
  t = d_13(c_1, e_1, t);
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
      ATerm m_32 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_t_32);
        t = geq_0_0(t);
        t = f_1;
        t = l_102(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  t = term_u_32;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_v_32);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = q_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  t = term_u_32;
  w_1 = t;
  t = (ATerm) ATinsert(ATempty, v_1);
  x_1 = t;
  t = SSL_printnl(w_1, x_1);
  t = v_1;
  return(t);
}
static ATerm r_12 (ATerm k_21, ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm x_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = get_config_0_0(t);
        LocalPopChoice(z_32);
      }
    else
      {
        t = x_32;
        t = get_outfile_1_0(g_1, t);
      }
  }
  m_1 = t;
  t = term_c_33;
  t = get_config_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_1), m_1), term_b_33), k_21));
  t = if_verbose3_1_0(h_1, t);
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
  {
    static ATerm i_1 (ATerm t)
    {
      ATerm a_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
      t = x_12(o_1, p_1, t);
      t = term_e_33;
      a_2 = t;
      t = SSL_exit(a_2);
      return(t);
    }
    t = fork_and_wait_1_0(i_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
  k_2 = t;
  t = term_u_32;
  l_2 = t;
  t = (ATerm) ATinsert(ATempty, term_f_33);
  m_2 = t;
  t = SSL_printnl(l_2, m_2);
  t = k_2;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  t = term_u_32;
  p_2 = t;
  t = (ATerm) ATinsert(ATempty, o_2);
  q_2 = t;
  t = SSL_printnl(p_2, q_2);
  t = o_2;
  return(t);
}
static ATerm s_12 (ATerm i_21, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(l_1, t);
  b_2 = t;
  t = term_h_33;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_b_33), i_21), term_i_33));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, c_2);
  t = if_verbose3_1_0(u_1, t);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
  {
    static ATerm y_1 (ATerm t)
    {
      ATerm r_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_2, f_2);
      t = x_12(e_2, f_2, t);
      t = term_e_33;
      r_2 = t;
      t = SSL_exit(r_2);
      return(t);
    }
    t = fork_and_wait_1_0(y_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      a_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(a_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(z_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = term_u_32;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_2), term_j_33);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(w_2), term_j_33));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm l_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      s_2 = t;
      t = term_i_33;
      t = get_config_0_0(t);
      t = s_2;
      LocalPopChoice(o_33);
    }
  else
    {
      t = l_33;
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
static ATerm t_12 (ATerm v_42, ATerm u_42, ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(v_42, u_42);
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = get_errno_0_0(t);
      t = term_x_33;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, v_42, u_42);
      t = h_13(v_42, u_42, t);
      t = SSL_remove(v_42);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  t_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_33 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = t_3;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_f_34;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, term_f_34);
        t = h_13(u_3, t_1, t);
        t = SSL_remove(u_3);
        t = term_f_34;
        LocalPopChoice(e_34);
      }
    else
      {
        t = y_33;
        {
          ATerm l_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = t_3;
              t = x_0(t);
              i_2 = t;
              {
                ATerm p_34 = t;
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
                        if((u_3 != t))
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
                    t = p_34;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_3, i_2);
              t = t_12(u_3, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(o_34);
            }
          else
            {
              t = l_34;
              t = t_3;
              t = x_0(t);
              if((u_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_3);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = term_r_34;
  y_3 = t;
  t = term_s_34;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_t_34);
  z_3 = t;
  t = c_4;
  t = comp_0_2(y_3, z_3, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_u_34);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = term_w_34;
  d_4 = t;
  t = l_4;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_35;
        t = get_config_0_0(t);
        t = l_4;
        LocalPopChoice(c_35);
        t = (ATerm) ATinsert(ATempty, term_d_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATempty;
      }
  }
  j_4 = t;
  t = term_u_34;
  t = get_config_0_0(t);
  t = foldr_3_0(n_2, conc_0_0, t_2, t);
  k_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_4), k_4);
  t = concat_0_0(t);
  g_4 = t;
  t = l_4;
  t = comp_0_2(d_4, g_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL;
  z_4 = t;
  t = term_u_32;
  b_5 = t;
  t = (ATerm) ATinsert(ATempty, term_e_35);
  c_5 = t;
  t = SSL_printnl(b_5, c_5);
  t = z_4;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,n_5 = NULL;
  n_5 = t;
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_5 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(n_5);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_5);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_5;
          }
        LocalPopChoice(h_35);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = g_35;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
  }
  t = if_keep1_1_0(j_3, t);
  t = olevel_2_0(l_3, m_3, t);
  t = olevel_2_0(v_4, w_4, t);
  k_5 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_6 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(k_5);
              h_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_6);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_5;
          }
        LocalPopChoice(j_35);
        t = xtc_transform_file_2_0(g_5, h_5, t);
      }
    else
      {
        t = i_35;
        t = xtc_transform_term_2_0(s_5, c_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  j_5 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_7 = ATgetArgument(t, 0);
            {
              ATerm p_4 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(j_5);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
              b_1 = t;
              t = SSLsetAnnotations(b_1, p_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_5;
          }
        LocalPopChoice(l_35);
        t = xtc_transform_file_2_0(m_6, pass_verbose_0_0, t);
      }
    else
      {
        t = k_35;
        t = xtc_transform_term_2_0(n_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(o_6, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  t = term_u_32;
  e_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_m_35);
  f_5 = t;
  t = SSL_printnl(e_5, f_5);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(d_5), term_m_35));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_n_35;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_5 = NULL;
  t = pass_verbose_0_0(t);
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(t_5), term_p_35);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_n_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_5 = NULL;
  t = pass_verbose_0_0(t);
  u_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_5), term_p_35);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_q_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  w_5 = t;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_6 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(w_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, f_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_5;
          }
        LocalPopChoice(t_35);
        t = xtc_transform_file_2_0(p_3, s_3, t);
      }
    else
      {
        t = s_35;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(a_4, t);
  v_5 = t;
  {
    ATerm u_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_6 = ATgetArgument(t, 0);
            {
              ATerm n_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(v_5);
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_6);
              z_0 = t;
              t = SSLsetAnnotations(z_0, n_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_5;
          }
        LocalPopChoice(y_35);
        t = xtc_transform_file_2_0(f_4, i_4, t);
      }
    else
      {
        t = u_35;
        t = xtc_transform_term_2_0(n_4, o_4, t);
      }
  }
  t = if_keep1_1_0(q_4, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_p_35);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_p_35);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = save_as_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm r_6 = NULL;
  t = pass_verbose_0_0(t);
  r_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), term_p_35);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_6 = NULL;
  t = pass_verbose_0_0(t);
  s_6 = t;
  t = (ATerm) ATinsert(CheckATermList(s_6), term_p_35);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = save_as_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = save_as_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_p_35);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_p_35);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = get_outfile_1_0(p_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(v_2, c_3, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  t = term_u_32;
  f_8 = t;
  t = (ATerm) ATinsert(ATempty, term_r_36);
  g_8 = t;
  t = SSL_printnl(f_8, g_8);
  t = e_8;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,k_8 = NULL;
  h_8 = t;
  t = term_u_32;
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(h_8), term_s_36);
  k_8 = t;
  t = SSL_printnl(i_8, k_8);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(h_8), term_s_36));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm k_9 = NULL;
  t = pass_verbose_0_0(t);
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), term_w_36);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm l_9 = NULL;
  t = pass_verbose_0_0(t);
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(l_9), term_w_36);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL;
      a_8 = t;
      t = term_d_35;
      t = get_config_0_0(t);
      t = a_8;
      LocalPopChoice(z_36);
      {
        ATerm b_8 = NULL;
        b_8 = t;
        t = if_verbose2_1_0(q_6, t);
        {
          static ATerm u_6 (ATerm t)
          {
            ATerm p_8 = NULL,s_8 = NULL,x_8 = NULL,y_8 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
            u_4 = t;
            t = term_a_37;
            s_4 = t;
            t = (ATerm) ATinsert(ATempty, term_b_37);
            t_4 = t;
            t = u_4;
            t = comp_0_2(s_4, t_4, t);
            p_8 = t;
            {
              ATerm c_37 = t;
              int d_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_8 = NULL,a_9 = NULL;
                  t = term_e_37;
                  t = get_config_0_0(t);
                  z_8 = t;
                  t = term_f_37;
                  t = get_config_0_0(t);
                  a_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
                  {
                    ATerm g_37 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm b_9 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            b_9 = ATgetArgument(t, 0);
                            if((b_9 != ATgetArgument(t, 1)))
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
                        t = g_37;
                      }
                  }
                  LocalPopChoice(d_37);
                }
              else
                {
                  t = c_37;
                  t = term_e_37;
                  t = get_config_0_0(t);
                  t = debug_1_0(w_6, t);
                  _fail(t);
                }
            }
            t = p_8;
            {
              static ATerm x_6 (ATerm t)
              {
                t = get_outfile_1_0(a_7, t);
                if(((y_7 != NULL) && (y_7 != t)))
                  _fail(t);
                else
                  y_7 = t;
                return(t);
              }
              t = copy_to_1_0(x_6, t);
            }
            {
              ATerm h_37 = t;
              int i_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_9 = NULL,j_9 = NULL;
                  j_9 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      i_9 = ATgetArgument(t, 0);
                      {
                        ATerm x_4 = NULL,o_3 = NULL;
                        t = SSLgetAnnotations(j_9);
                        x_4 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, i_9);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, x_4);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = j_9;
                    }
                  LocalPopChoice(i_37);
                  t = xtc_transform_file_2_0(b_7, f_7, t);
                }
              else
                {
                  t = h_37;
                  t = xtc_transform_term_2_0(g_7, h_7, t);
                }
            }
            {
              static ATerm j_7 (ATerm t)
              {
                t = get_outfile_1_0(k_7, t);
                if(((z_7 != NULL) && (z_7 != t)))
                  _fail(t);
                else
                  z_7 = t;
                return(t);
              }
              t = copy_to_1_0(j_7, t);
            }
            s_8 = t;
            t = term_u_32;
            x_8 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_7)), term_k_37), not_null(y_7)), term_j_37));
            y_8 = t;
            t = SSL_printnl(x_8, y_8);
            t = s_8;
            return(t);
          }
          t = profile_p__2_0(t_6, u_6, t);
        }
        t = b_8;
      }
    }
  else
    {
      t = y_36;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm l_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_r_35);
        t = geq_0_0(t);
        t = q_9;
        t = m_103(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = l_37;
        t = q_9;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL,e_10 = NULL;
        t = y_9;
        t = j_112(t);
        c_10 = t;
        t = term_x_37;
        t = get_config_0_0(t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, c_10);
        t = geq_0_0(t);
        t = y_9;
        t = k_112(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        t = y_9;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_p_35);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_p_35);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_8 = NULL;
  t = pass_verbose_0_0(t);
  r_8 = t;
  t = (ATerm) ATinsert(CheckATermList(r_8), term_p_35);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm t_8 = NULL;
  t = pass_verbose_0_0(t);
  t_8 = t;
  t = (ATerm) ATinsert(CheckATermList(t_8), term_p_35);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        {
          ATerm d_38 = t;
          int e_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  z_6 = ATgetArgument(t, 0);
                  {
                    ATerm w_7 = NULL,q_3 = NULL;
                    t = SSLgetAnnotations(m_11);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, z_6);
                    q_3 = t;
                    t = SSLsetAnnotations(q_3, w_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_11;
                }
              LocalPopChoice(e_38);
              t = xtc_transform_file_2_0(l_7, m_7, t);
            }
          else
            {
              t = d_38;
              t = xtc_transform_term_2_0(o_7, p_7, t);
            }
        }
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        t = m_11;
        {
          ATerm f_38 = t;
          int g_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  o_8 = ATgetArgument(t, 0);
                  {
                    ATerm d_9 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(m_11);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, o_8);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, d_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_11;
                }
              LocalPopChoice(g_38);
              t = xtc_transform_file_2_0(q_7, r_7, t);
            }
          else
            {
              t = f_38;
              t = xtc_transform_term_2_0(t_7, u_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  {
    ATerm h_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, term_k_38);
        t = geq_0_0(t);
        t = y_11;
        t = q_103(t);
        LocalPopChoice(j_38);
      }
    else
      {
        t = h_38;
        t = y_11;
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  f_12 = t;
  t = term_l_38;
  d_12 = t;
  t = f_12;
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_35;
        t = get_config_0_0(t);
        t = f_12;
        LocalPopChoice(n_38);
        t = (ATerm) ATinsert(ATempty, term_o_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATempty;
      }
  }
  e_12 = t;
  t = f_12;
  t = comp_0_2(d_12, e_12, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, term_r_38);
        t = geq_0_0(t);
        t = i_12;
        t = p_103(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = i_12;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  {
    ATerm s_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_a_39);
        t = geq_0_0(t);
        t = e_13;
        t = r_103(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = s_38;
        t = e_13;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL;
  d_16 = t;
  t = term_u_32;
  e_16 = t;
  t = (ATerm) ATinsert(ATempty, term_e_39);
  g_16 = t;
  t = SSL_printnl(e_16, g_16);
  t = d_16;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm m_16 = NULL;
  t = if_verbose3_1_0(j_8, t);
  t = olevel_2_0(q_8, u_8, t);
  t = olevel_2_0(o_9, p_9, t);
  t = olevel_2_0(f_10, h_10, t);
  m_16 = t;
  {
    ATerm g_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_18 = ATgetArgument(t, 0);
            {
              ATerm y_12 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(m_16);
              y_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
              p_5 = t;
              t = SSLsetAnnotations(p_5, y_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_16;
          }
        LocalPopChoice(i_39);
        t = xtc_transform_file_2_0(n_11, o_11, t);
      }
    else
      {
        t = g_39;
        t = xtc_transform_term_2_0(p_11, q_11, t);
      }
  }
  t = olevel_2_0(s_11, u_11, t);
  t = olevel_2_0(i_13, x_13, t);
  t = olevel_2_0(n_14, p_14, t);
  t = olevel_2_0(b_15, c_15, t);
  t = olevel_2_0(c_16, l_16, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  t = term_u_32;
  i_16 = t;
  t = (ATerm) ATinsert(CheckATermList(h_16), term_k_39);
  j_16 = t;
  t = SSL_printnl(i_16, j_16);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(h_16), term_k_39));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  t = term_x_37;
  t = get_config_0_0(t);
  t = debug_1_0(m_8, t);
  t = n_16;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  {
    ATerm q_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_16 = ATgetArgument(t, 0);
            {
              ATerm u_9 = NULL,x_3 = NULL;
              t = SSLgetAnnotations(o_16);
              u_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_16);
              x_3 = t;
              t = SSLsetAnnotations(x_3, u_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_16;
          }
        LocalPopChoice(t_39);
        t = xtc_transform_file_2_0(v_8, w_8, t);
      }
    else
      {
        t = q_39;
        t = xtc_transform_term_2_0(g_9, h_9, t);
      }
  }
  t = if_keep1_1_0(m_9, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm y_16 = NULL;
  t = pass_verbose_0_0(t);
  y_16 = t;
  t = (ATerm) ATinsert(CheckATermList(y_16), term_p_35);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm a_17 = NULL;
  t = pass_verbose_0_0(t);
  a_17 = t;
  t = (ATerm) ATinsert(CheckATermList(a_17), term_p_35);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = save_as_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_t_32;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  {
    ATerm w_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_17;
        {
          ATerm z_39 = t;
          if((PushChoice() == 0))
            {
              t = term_b_40;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_39;
            }
        }
        t = o_17;
        {
          ATerm c_40 = t;
          int d_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_10 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  m_10 = ATgetArgument(t, 0);
                  {
                    ATerm j_11 = NULL,i_5 = NULL;
                    t = SSLgetAnnotations(o_17);
                    j_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
                    i_5 = t;
                    t = SSLsetAnnotations(i_5, j_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = o_17;
                }
              LocalPopChoice(d_40);
              t = xtc_transform_file_2_0(r_9, s_9, t);
            }
          else
            {
              t = c_40;
              t = xtc_transform_term_2_0(v_9, w_9, t);
            }
        }
        t = if_keep2_1_0(x_9, t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = w_39;
        t = o_17;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm s_10 = NULL;
  t = pass_verbose_0_0(t);
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_10), term_p_35);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_e_40;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm t_10 = NULL;
  t = pass_verbose_0_0(t);
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(t_10), term_p_35);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = save_as_1_0(a_10, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t_17 = t;
  {
    ATerm h_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_17 = ATgetArgument(t, 0);
            {
              ATerm r_11 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(t_17);
              r_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_17);
              l_5 = t;
              t = SSLsetAnnotations(l_5, r_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_17;
          }
        LocalPopChoice(k_40);
        t = xtc_transform_file_2_0(i_10, n_10, t);
      }
    else
      {
        t = h_40;
        t = xtc_transform_term_2_0(u_10, v_10, t);
      }
  }
  t = if_keep6_1_0(w_10, t);
  s_17 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_18 = ATgetArgument(t, 0);
            {
              ATerm a_12 = NULL,m_5 = NULL;
              t = SSLgetAnnotations(s_17);
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
              m_5 = t;
              t = SSLsetAnnotations(m_5, a_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_17;
          }
        LocalPopChoice(m_40);
        t = xtc_transform_file_2_0(y_10, z_10, t);
      }
    else
      {
        t = l_40;
        t = xtc_transform_term_2_0(a_11, b_11, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_11, t);
  r_17 = t;
  {
    ATerm q_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_18 = ATgetArgument(t, 0);
            {
              ATerm l_12 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(r_17);
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_18);
              o_5 = t;
              t = SSLsetAnnotations(o_5, l_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_17;
          }
        LocalPopChoice(s_40);
        t = xtc_transform_file_2_0(e_11, f_11, t);
      }
    else
      {
        t = q_40;
        t = xtc_transform_term_2_0(g_11, i_11, t);
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm b_18 = NULL;
  t = pass_verbose_0_0(t);
  b_18 = t;
  t = (ATerm) ATinsert(CheckATermList(b_18), term_p_35);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm c_18 = NULL;
  t = pass_verbose_0_0(t);
  c_18 = t;
  t = (ATerm) ATinsert(CheckATermList(c_18), term_p_35);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = save_as_1_0(x_10, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_w_40;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm j_18 = NULL;
  t = pass_verbose_0_0(t);
  j_18 = t;
  t = (ATerm) ATinsert(CheckATermList(j_18), term_p_35);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm m_18 = NULL;
  t = pass_verbose_0_0(t);
  m_18 = t;
  t = (ATerm) ATinsert(CheckATermList(m_18), term_p_35);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_y_40;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm u_18 = NULL;
  t = pass_verbose_0_0(t);
  u_18 = t;
  t = (ATerm) ATinsert(CheckATermList(u_18), term_p_35);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm v_18 = NULL;
  t = pass_verbose_0_0(t);
  v_18 = t;
  t = (ATerm) ATinsert(CheckATermList(v_18), term_p_35);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm d_19 = NULL;
  t = pass_verbose_0_0(t);
  d_19 = t;
  t = (ATerm) ATinsert(CheckATermList(d_19), term_p_35);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm e_19 = NULL;
  t = pass_verbose_0_0(t);
  e_19 = t;
  t = (ATerm) ATinsert(CheckATermList(e_19), term_p_35);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_r_38;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  h_19 = t;
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_19 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(h_19);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_19);
              q_5 = t;
              t = SSLsetAnnotations(q_5, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_19;
          }
        LocalPopChoice(c_41);
        t = xtc_transform_file_2_0(v_11, w_11, t);
      }
    else
      {
        t = b_41;
        t = xtc_transform_term_2_0(x_11, z_11, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  g_19 = t;
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_19 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(g_19);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
              x_5 = t;
              t = SSLsetAnnotations(x_5, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_19;
          }
        LocalPopChoice(e_41);
        t = xtc_transform_file_2_0(c_12, g_12, t);
      }
    else
      {
        t = d_41;
        t = xtc_transform_term_2_0(h_12, j_12, t);
      }
  }
  f_19 = t;
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_20 = ATgetArgument(t, 0);
            {
              ATerm k_14 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(f_19);
              k_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
              y_5 = t;
              t = SSLsetAnnotations(y_5, k_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_19;
          }
        LocalPopChoice(h_41);
        t = xtc_transform_file_2_0(k_12, m_12, t);
      }
    else
      {
        t = g_41;
        t = xtc_transform_term_2_0(n_12, p_12, t);
      }
  }
  t = if_keep4_1_0(q_12, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm q_19 = NULL;
  t = pass_verbose_0_0(t);
  q_19 = t;
  t = (ATerm) ATinsert(CheckATermList(q_19), term_p_35);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm r_19 = NULL;
  t = pass_verbose_0_0(t);
  r_19 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), term_p_35);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm a_20 = NULL;
  t = pass_verbose_0_0(t);
  a_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), term_p_35);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm b_20 = NULL;
  t = pass_verbose_0_0(t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), term_p_35);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_p_35);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_p_35);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = save_as_1_0(c_13, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_t_32;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  o_20 = t;
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_20 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,z_5 = NULL;
              t = SSLgetAnnotations(o_20);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_20);
              z_5 = t;
              t = SSLsetAnnotations(z_5, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_20;
          }
        LocalPopChoice(n_41);
        t = xtc_transform_file_2_0(a_14, b_14, t);
      }
    else
      {
        t = m_41;
        t = xtc_transform_term_2_0(d_14, e_14, t);
      }
  }
  n_20 = t;
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_21 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,a_6 = NULL;
              t = SSLgetAnnotations(n_20);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_21);
              a_6 = t;
              t = SSLsetAnnotations(a_6, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_20;
          }
        LocalPopChoice(p_41);
        t = xtc_transform_file_2_0(f_14, h_14, t);
      }
    else
      {
        t = o_41;
        t = xtc_transform_term_2_0(i_14, j_14, t);
      }
  }
  t = if_keep2_1_0(l_14, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm g_21 = NULL;
  t = pass_verbose_0_0(t);
  g_21 = t;
  t = (ATerm) ATinsert(CheckATermList(g_21), term_p_35);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm h_21 = NULL;
  t = pass_verbose_0_0(t);
  h_21 = t;
  t = (ATerm) ATinsert(CheckATermList(h_21), term_p_35);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm x_21 = NULL;
  t = pass_verbose_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(CheckATermList(x_21), term_p_35);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_p_35);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = save_as_1_0(m_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm z_21 = NULL;
  z_21 = t;
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_22 = ATgetArgument(t, 0);
            {
              ATerm w_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(z_21);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_22);
              f_6 = t;
              t = SSLsetAnnotations(f_6, w_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_21;
          }
        LocalPopChoice(u_41);
        t = xtc_transform_file_2_0(q_14, r_14, t);
      }
    else
      {
        t = t_41;
        t = xtc_transform_term_2_0(t_14, u_14, t);
      }
  }
  t = if_keep5_1_0(v_14, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(y_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_p_35);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_x_40;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_p_35);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = save_as_1_0(x_14, t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = save_as_1_0(z_14, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL,o_22 = NULL;
  o_22 = t;
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_22 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(o_22);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, a_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_22;
          }
        LocalPopChoice(z_41);
        t = xtc_transform_file_2_0(d_15, f_15, t);
      }
    else
      {
        t = y_41;
        t = xtc_transform_term_2_0(g_15, h_15, t);
      }
  }
  t = if_keep3_1_0(j_15, t);
  l_22 = t;
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_23 = ATgetArgument(t, 0);
            {
              ATerm e_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(l_22);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, e_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_22;
          }
        LocalPopChoice(e_42);
        t = xtc_transform_file_2_0(l_15, n_15, t);
      }
    else
      {
        t = d_42;
        t = xtc_transform_term_2_0(o_15, p_15, t);
      }
  }
  t = if_keep3_1_0(r_15, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(t_15, t);
  j_22 = t;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_23 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(j_22);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(g_42);
        t = xtc_transform_file_2_0(w_15, x_15, t);
      }
    else
      {
        t = f_42;
        t = xtc_transform_term_2_0(y_15, z_15, t);
      }
  }
  t = if_keep3_1_0(a_16, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_p_35);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm z_22 = NULL;
  t = pass_verbose_0_0(t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_22), term_p_35);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = save_as_1_0(k_15, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm l_23 = NULL;
  t = pass_verbose_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_p_35);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_p_35);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = save_as_1_0(s_15, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = save_as_1_0(u_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_l_42;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_p_35);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm c_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), term_p_35);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = save_as_1_0(b_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_m_42;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = term_r_35;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm d_24 = NULL,i_24 = NULL;
  i_24 = t;
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_24 = ATgetArgument(t, 0);
            {
              ATerm m_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(i_24);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, m_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_24;
          }
        LocalPopChoice(o_42);
        t = xtc_transform_file_2_0(p_16, q_16, t);
      }
    else
      {
        t = n_42;
        t = xtc_transform_term_2_0(r_16, t_16, t);
      }
  }
  t = if_keep1_1_0(u_16, t);
  d_24 = t;
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_25 = ATgetArgument(t, 0);
            {
              ATerm q_15 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(d_24);
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_25);
              k_6 = t;
              t = SSLsetAnnotations(k_6, q_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_24;
          }
        LocalPopChoice(q_42);
        t = xtc_transform_file_2_0(z_16, b_17, t);
      }
    else
      {
        t = p_42;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep1_1_0(f_17, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm u_24 = NULL;
  t = pass_verbose_0_0(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), term_p_35);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm w_24 = NULL;
  t = pass_verbose_0_0(t);
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(w_24), term_p_35);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = save_as_1_0(x_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = term_r_42;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_s_42;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm e_25 = NULL;
  t = pass_verbose_0_0(t);
  e_25 = t;
  t = (ATerm) ATinsert(CheckATermList(e_25), term_p_35);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_s_42;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm f_25 = NULL;
  t = pass_verbose_0_0(t);
  f_25 = t;
  t = (ATerm) ATinsert(CheckATermList(f_25), term_p_35);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  t = profile_p__2_0(x_7, c_8, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm y_26 = NULL;
  t = pass_verbose_0_0(t);
  y_26 = t;
  t = (ATerm) ATinsert(CheckATermList(y_26), term_w_36);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm z_26 = NULL;
  t = pass_verbose_0_0(t);
  z_26 = t;
  t = (ATerm) ATinsert(CheckATermList(z_26), term_w_36);
  return(t);
}
ATerm save_as_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  {
    static ATerm j_17 (ATerm t)
    {
      t = get_outfile_1_0(d_79, t);
      if(((m_26 != NULL) && (m_26 != t)))
        _fail(t);
      else
        m_26 = t;
      return(t);
    }
    t = copy_to_1_0(j_17, t);
  }
  {
    ATerm y_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL,x_26 = NULL;
        x_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            w_26 = ATgetArgument(t, 0);
            {
              ATerm v_15 = NULL,s_7 = NULL;
              t = SSLgetAnnotations(x_26);
              v_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_26);
              s_7 = t;
              t = SSLsetAnnotations(s_7, v_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_26;
          }
        LocalPopChoice(a_43);
        t = xtc_transform_file_2_0(m_17, n_17, t);
      }
    else
      {
        t = y_42;
        t = xtc_transform_term_2_0(q_17, v_17, t);
      }
  }
  {
    static ATerm y_17 (ATerm t)
    {
      ATerm a_27 = NULL;
      t = term_c_43;
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_26), term_c_43);
      t = z_13(not_null(m_26), a_27, t);
      if(((n_26 != NULL) && (n_26 != t)))
        _fail(t);
      else
        n_26 = t;
      return(t);
    }
    t = copy_to_1_0(y_17, t);
  }
  t = term_u_32;
  p_26 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_26)), term_k_37), not_null(m_26)), term_j_37));
  q_26 = t;
  t = SSL_printnl(p_26, q_26);
  t = o_26;
  return(t);
}
ATerm if_keep2_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  {
    ATerm e_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_27, term_t_32);
        t = geq_0_0(t);
        t = d_27;
        t = n_103(t);
        LocalPopChoice(g_43);
      }
    else
      {
        t = e_43;
        t = d_27;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  t = term_q_32;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        t = term_r_35;
      }
  }
  i_27 = t;
  t = term_r_35;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_27, term_r_35);
  t = f_13(i_27, k_27, t);
  j_27 = t;
  t = SSL_int_to_string(j_27);
  h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_27), term_q_32);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(match_cons(l_43, sym_Stream_1))
        {
          n_27 = ATgetArgument(l_43, 0);
        }
      else
        _fail(t);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12(n_27, o_27, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  m_27 = t;
  t = xtc_new_file_0_0(t);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  t = w_12(z_17, l_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_27);
  t = xtc_transform_file_2_0(e_111, f_111, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm x_12 (ATerm r_47, ATerm s_47, ATerm t)
{
  t = SSL_execvp(r_47, s_47);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm l_28 = NULL,n_28 = NULL,p_28 = NULL,q_28 = NULL;
  l_28 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_28 = ATgetArgument(t, 0);
      {
        ATerm f_16 = NULL,k_16 = NULL;
        t = SSL_int_to_string(n_28);
        f_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_43), f_16), term_m_43);
        k_16 = t;
        t = SSL_concat_strings(k_16);
      }
    }
  else
    {
      ATerm i_17 = NULL,p_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_28 = ATgetArgument(t, 0);
          p_28 = ATgetArgument(t, 1);
          q_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_28);
      i_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_28), term_p_43), i_17), term_o_43), n_28);
      p_17 = t;
      t = SSL_concat_strings(p_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm v_28 = NULL;
  static ATerm a_18 (ATerm t)
  {
    t = h_88(t);
    if(((v_28 != NULL) && (v_28 != t)))
      _fail(t);
    else
      v_28 = t;
    return(t);
  }
  t = fetch_1_0(a_18, t);
  t = not_null(v_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  {
    ATerm r_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_18 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_43 = ATgetArgument(t, 0);
              if((w_28 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm y_43 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_49), term_m_49), term_g_49), term_b_49), term_q_48), term_j_48), term_f_48), term_z_47), term_u_47), term_o_47), term_i_47), term_e_47), term_a_47), term_k_46), term_c_46), term_w_45), term_q_45), term_n_45), term_j_45), term_f_45), term_b_45), term_x_44), term_t_44), term_p_44), term_l_44), term_i_44), term_f_44), term_b_44);
        t = fetch_elem_1_0(d_18, t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = r_43;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_28);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_29 = NULL,p_29 = NULL;
  f_29 = t;
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_49 = ATgetArgument(t, 0);
            p_29 = ATgetArgument(t, 1);
            {
              ATerm x_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_49);
        {
          ATerm y_49 = t;
          int z_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_18 = NULL,a_19 = NULL,b_19 = NULL;
              t = p_29;
              {
                ATerm b_50 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_50;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              s_18 = t;
              t = term_u_32;
              a_19 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_18), term_c_50);
              b_19 = t;
              t = SSL_printnl(a_19, b_19);
              t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(ATinsert(ATempty, s_18), term_c_50));
              LocalPopChoice(z_49);
            }
          else
            {
              t = y_49;
              t = f_29;
            }
        }
      }
    else
      {
        t = u_49;
        t = f_29;
      }
  }
  t = f_29;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  i_30 = t;
  t = fork_0_0(t);
  h_30 = t;
  {
    ATerm e_50 = t;
    int g_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_30;
        t = x_103(t);
        LocalPopChoice(g_50);
      }
    else
      {
        t = e_50;
        t = SSL_waitpid(h_30);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_50 = ATgetArgument(t, 0);
            if(((ATgetType(h_50) != AT_INT) || (ATgetInt((ATermInt) h_50) != 0)))
              _fail(t);
            {
              ATerm i_50 = ATgetArgument(t, 1);
            }
            {
              ATerm j_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_30;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,p_30 = NULL;
  p_30 = t;
  t = f_112(t);
  t = xtc_find_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, p_30);
  {
    static ATerm e_18 (ATerm t)
    {
      ATerm t_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_30, p_30);
      t = x_12(n_30, p_30, t);
      t = term_e_33;
      t_30 = t;
      t = SSL_exit(t_30);
      return(t);
    }
    t = fork_and_wait_1_0(e_18, t);
  }
  t = p_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_30 = NULL,a_31 = NULL;
      t = x_30;
      t = xtc_new_file_0_0(t);
      z_30 = t;
      t = t_0(t);
      a_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_31, (ATerm) ATinsert(ATinsert(ATempty, z_30), term_b_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_30);
    }
  else
    {
      ATerm c_31 = NULL,d_31 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_30;
      t = xtc_new_file_0_0(t);
      c_31 = t;
      t = t_0(t);
      d_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_31), term_b_33), y_30), term_k_50));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_31);
    }
  return(t);
}
ATerm comp_0_2 (ATerm x_20, ATerm y_20, ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_38 = NULL,w_38 = NULL;
      w_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_38 = ATgetArgument(t, 0);
          {
            ATerm v_24 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(w_38);
            v_24 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_38);
            l_8 = t;
            t = SSLsetAnnotations(l_8, v_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_38;
        }
      LocalPopChoice(m_50);
      {
        static ATerm g_18 (ATerm t)
        {
          t = x_20;
          return(t);
        }
        static ATerm i_18 (ATerm t)
        {
          ATerm y_38 = NULL;
          t = pass_verbose_0_0(t);
          y_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_20), y_38), (ATerm) ATinsert(ATempty, term_p_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(g_18, i_18, t);
      }
    }
  else
    {
      t = l_50;
      {
        static ATerm k_18 (ATerm t)
        {
          t = x_20;
          return(t);
        }
        static ATerm l_18 (ATerm t)
        {
          ATerm z_38 = NULL;
          t = pass_verbose_0_0(t);
          z_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_20), z_38), (ATerm) ATinsert(ATempty, term_p_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(k_18, l_18, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,i_31 = NULL,j_31 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_31;
      t = a_94(t);
    }
  else
    {
      ATerm o_31 = NULL,s_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_31 = ATgetFirst((ATermList) t);
          j_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_31;
      t = c_94(t);
      o_31 = t;
      t = j_31;
      t = foldr_3_0(a_94, b_94, c_94, t);
      s_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_31, s_31);
      t = b_94(t);
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_31), term_n_50);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_n_50;
  t = get_config_0_0(t);
  t = foldr_3_0(p_18, conc_0_0, r_18, t);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = term_p_50;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_p_35);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = term_p_50;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_p_35);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  t = get_outfile_1_0(i_19, t);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,l_20 = NULL,m_20 = NULL;
        t = term_w_50;
        t = get_config_0_0(t);
        t = a_33;
        {
          ATerm x_50 = t;
          int y_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_33;
              {
                ATerm z_50 = t;
                int a_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        a_21 = ATgetArgument(t, 0);
                        {
                          ATerm t_21 = NULL,n_8 = NULL;
                          t = SSLgetAnnotations(a_33);
                          t_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
                          n_8 = t;
                          t = SSLsetAnnotations(n_8, t_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = a_33;
                      }
                    LocalPopChoice(a_51);
                    t = xtc_transform_file_2_0(t_18, w_18, t);
                  }
                else
                  {
                    t = z_50;
                    t = xtc_transform_term_2_0(x_18, y_18, t);
                  }
              }
              LocalPopChoice(y_50);
            }
          else
            {
              t = x_50;
              {
                ATerm f_21 = NULL,j_21 = NULL,l_21 = NULL;
                t = term_u_32;
                j_21 = t;
                t = (ATerm) ATinsert(ATempty, term_b_51);
                l_21 = t;
                t = SSL_printnl(j_21, l_21);
                t = term_r_35;
                f_21 = t;
                t = SSL_exit(f_21);
                t = (ATerm) ATinsert(ATempty, term_b_51);
              }
            }
        }
        t = copy_to_1_0(c_19, t);
        g_20 = t;
        t = term_u_32;
        l_20 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_51));
        m_20 = t;
        t = SSL_printnl(l_20, m_20);
        t = g_20;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        t = a_33;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_51;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_51);
      LocalPopChoice(i_51);
    }
  else
    {
      t = h_51;
      t = (ATerm) ATinsert(ATempty, term_m_51);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  {
    ATerm n_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_33 = NULL;
        t = term_r_37;
        t = get_config_0_0(t);
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_33, term_i_36);
        t = geq_0_0(t);
        t = k_33;
        t = o_103(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = n_51;
        t = k_33;
      }
  }
  return(t);
}
static ATerm u_12 (ATerm c_79 (ATerm), ATerm d_21, ATerm t)
{
  ATerm r_33 = NULL;
  t = term_x_33;
  t = c_79(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(d_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_w_51, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_33), (ATerm) ATempty))))));
  return(t);
}
static ATerm v_12 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm s_33 = NULL;
  t = SSL_write_term_to_stream_baf(x_22, y_22);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_33);
  return(t);
}
static ATerm w_12 (ATerm m_87 (ATerm), ATerm e_188, ATerm f_23, ATerm t)
{
  ATerm t_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_188, term_x_51);
  t = q_13(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, f_23);
  t = m_87(t);
  t = fclose_0_0(t);
  t = f_23;
  return(t);
}
static ATerm z_12 (ATerm i_100 (ATerm), ATerm c_42, ATerm a_42, ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  z_33 = t;
  t = i_100(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_33, c_42, a_42);
  t = w_13(u_33, c_42, a_42, t);
  {
    ATerm y_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL;
        t = term_d_52;
        c_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_d_52);
        t = v_13(u_33, c_34, t);
        LocalPopChoice(a_52);
      }
    else
      {
        t = y_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_33 = ATgetFirst((ATermList) t);
      w_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_52;
  a_34 = t;
  t = (ATerm) ATinsert(CheckATermList(w_33), (ATerm) ATinsert(CheckATermList(v_33), c_42));
  b_34 = t;
  t = SSL_table_put(u_33, a_34, b_34);
  t = z_33;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,m_34 = NULL,n_34 = NULL;
  t = P__tmpdir_0_0(t);
  i_34 = t;
  t = term_f_52;
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_34, term_f_52);
  t = z_13(i_34, n_34, t);
  k_34 = t;
  t = term_h_52;
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_34, term_h_52);
  t = z_13(k_34, m_34, t);
  j_34 = t;
  t = SSL_mkstemp(j_34);
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_33;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_34, term_x_33);
  t = z_12(j_19, g_34, h_34, t);
  t = SSL_close(d_34);
  t = g_34;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm q_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_52;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          q_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_52);
      v_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, (ATerm) ATinsert(ATempty, term_l_52));
      t = r_13(q_34, v_34, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_52 = ATgetArgument(t, 0);
      if(match_cons(p_52, sym_Stream_1))
        {
          z_34 = ATgetArgument(p_52, 0);
        }
      else
        _fail(t);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12(z_34, a_35, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  t = read_from_0_0(t);
  t = g_111(t);
  y_34 = t;
  t = xtc_new_file_0_0(t);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
  t = w_12(k_19, x_34, y_34, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, x_34);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  t = debug_1_0(m_19, t);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = term_q_52;
  return(t);
}
static ATerm s_19 (ATerm t)
{
  t = save_as_1_0(t_19, t);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  t = term_r_52;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm f_35 = NULL,o_35 = NULL;
  o_35 = t;
  {
    ATerm t_52 = t;
    int x_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_52;
        t = get_config_0_0(t);
        f_35 = t;
        t = if_verbose2_1_0(l_19, t);
        t = o_35;
        {
          ATerm a_53 = t;
          int b_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_d_35;
              t = get_config_0_0(t);
              t = o_35;
              LocalPopChoice(b_53);
            }
          else
            {
              t = a_53;
              {
                static ATerm o_19 (ATerm t)
                {
                  ATerm m_22 = NULL;
                  static ATerm p_19 (ATerm t)
                  {
                    t = f_35;
                    return(t);
                  }
                  if(match_cons(t, sym_Specification_1))
                    {
                      m_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = u_12(p_19, m_22, t);
                  return(t);
                }
                t = xtc_io_transform_1_0(o_19, t);
              }
            }
        }
        LocalPopChoice(x_52);
      }
    else
      {
        t = t_52;
        t = o_35;
      }
  }
  t = if_keep3_1_0(s_19, t);
  return(t);
}
static ATerm w_19 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_36);
        LocalPopChoice(d_53);
      }
    else
      {
        t = c_53;
        t = h_36;
      }
  }
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  static ATerm u_19 (ATerm t)
  {
    ATerm x_35 = NULL,a_36 = NULL,c_36 = NULL;
    x_35 = t;
    t = term_e_52;
    a_36 = t;
    t = term_d_52;
    c_36 = t;
    t = term_e_53;
    t = v_13(a_36, c_36, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_35 != NULL) && (v_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_35 = ATgetFirst((ATermList) t);
        {
          ATerm f_53 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_35;
    t = map_1_0(w_19, t);
    t = x_35;
    t = end_scope_1_0(x_19, t);
    return(t);
  }
  t = repeat_2_0(u_19, _id, t);
  w_35 = t;
  t = SSL_exit(w_35);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_33;
      t = get_config_0_0(t);
      LocalPopChoice(j_53);
    }
  else
    {
      t = i_53;
      t = term_f_34;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(y_19, t);
  t = term_l_32;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,o_36 = NULL;
  t = b_79(t);
  l_36 = t;
  t = term_e_37;
  t = get_config_0_0(t);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, l_36);
  t = z_13(o_36, l_36, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  o_37 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_53 = t;
    int l_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = o_37;
        t = v_0(t);
        n_23 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_23;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_23;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_37, n_23);
        t = h_13(p_37, n_23, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_37);
        LocalPopChoice(l_53);
      }
    else
      {
        t = k_53;
        {
          ATerm m_53 = t;
          int n_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_23 = NULL;
              t = o_37;
              t = v_0(t);
              y_23 = t;
              {
                ATerm o_53 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_24 = NULL;
                    a_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_24;
                          }
                        else
                          {
                            t = a_24;
                            if((p_37 != t))
                              {
                                _fail(t);
                              }
                            t = a_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_53;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_37, y_23);
              t = h_13(p_37, y_23, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_37);
              LocalPopChoice(n_53);
            }
          else
            {
              t = m_53;
              t = o_37;
              t = v_0(t);
              if((p_37 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_37);
            }
        }
      }
  }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = get_outfile_1_0(c_20, t);
  return(t);
}
static ATerm c_20 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL,l_24 = NULL,n_24 = NULL;
        t = term_s_53;
        t = get_config_0_0(t);
        t = i_38;
        t = copy_to_1_0(z_19, t);
        j_24 = t;
        t = term_u_32;
        l_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_53));
        n_24 = t;
        t = SSL_printnl(l_24, n_24);
        t = j_24;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = i_38;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,f_39 = NULL;
  t = term_r_37;
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = v_53;
        t = term_r_35;
      }
  }
  c_39 = t;
  t = term_r_35;
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, term_r_35);
  t = f_13(c_39, f_39, t);
  d_39 = t;
  t = SSL_int_to_string(d_39);
  b_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_39), term_r_37);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm h_39 = NULL,j_39 = NULL,l_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,u_39 = NULL;
  s_39 = t;
  t = term_x_53;
  h_39 = t;
  t = s_39;
  {
    ATerm y_53 = t;
    int c_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = get_config_0_0(t);
        LocalPopChoice(c_54);
      }
    else
      {
        t = y_53;
        t = term_e_37;
        t = get_config_0_0(t);
      }
  }
  u_39 = t;
  t = s_39;
  t = pass_keep_0_0(t);
  l_39 = t;
  t = term_d_54;
  t = get_config_0_0(t);
  o_39 = t;
  t = term_e_54;
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(i_54);
        t = (ATerm) ATinsert(ATempty, term_e_54);
      }
    else
      {
        t = h_54;
        t = (ATerm) ATempty;
      }
  }
  p_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_39), l_39), o_39), (ATerm) ATinsert(ATinsert(ATempty, u_39), term_j_54));
  t = concat_0_0(t);
  j_39 = t;
  t = s_39;
  t = comp_0_2(h_39, j_39, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        a_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_40, term_i_36);
        t = geq_0_0(t);
        t = x_39;
        t = m_102(t);
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
        t = x_39;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,r_40 = NULL;
  r_40 = t;
  t = SSL_explode_string(r_40);
  {
    ATerm z_54 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_43 (ATerm t)
        {
          ATerm b_43 = NULL,d_43 = NULL,f_43 = NULL;
          b_43 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_43 = ATgetFirst((ATermList) t);
              f_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_55 = t;
            int h_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_25 = NULL,d_26 = NULL,c_9 = NULL;
                t = SSLgetAnnotations(b_43);
                v_25 = t;
                t = f_43;
                t = k_43(t);
                d_26 = t;
                t = (ATerm) ATinsert(CheckATermList(d_26), d_43);
                c_9 = t;
                t = SSLsetAnnotations(c_9, v_25);
                LocalPopChoice(h_55);
              }
            else
              {
                t = g_55;
                {
                  ATerm i_55 = t;
                  int j_55 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_27 = NULL,e_9 = NULL;
                      t = SSLgetAnnotations(b_43);
                      q_27 = t;
                      t = d_43;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(f_43), d_43);
                      e_9 = t;
                      t = SSLsetAnnotations(e_9, q_27);
                      LocalPopChoice(j_55);
                    }
                  else
                    {
                      t = i_55;
                      {
                        ATerm a_29 = NULL,d_29 = NULL,f_9 = NULL;
                        t = SSLgetAnnotations(b_43);
                        a_29 = t;
                        t = d_43;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = f_43;
                        t = x_97(t);
                        d_29 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_29), d_43);
                        f_9 = t;
                        t = SSLsetAnnotations(f_9, a_29);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = k_43(t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = z_54;
      }
  }
  n_40 = t;
  t = SSL_implode_string(n_40);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  t = debug_1_0(e_20, t);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = term_l_55;
  return(t);
}
static ATerm f_20 (ATerm t)
{
  t = debug_1_0(i_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = term_m_55;
  return(t);
}
static ATerm a_13 (ATerm z_20, ATerm t)
{
  ATerm s_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL;
  t = z_20;
  t = basename_1_0(_id, t);
  s_43 = t;
  t = if_verbose3_1_0(d_20, t);
  t = term_f_37;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_37, s_43);
  t = y_13(x_43, s_43, t);
  {
    ATerm n_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        LocalPopChoice(s_55);
      }
    else
      {
        t = n_55;
        t = s_43;
      }
  }
  u_43 = t;
  t = if_verbose3_1_0(f_20, t);
  t = term_e_37;
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_37, u_43);
  t = y_13(v_43, u_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_43);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = debug_1_0(q_20, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = term_t_55;
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = if_verbose1_1_0(t_20, t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm z_45 = NULL,d_46 = NULL,g_46 = NULL,h_46 = NULL,j_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,r_46 = NULL,j_47 = NULL,n_32 = NULL,r_32 = NULL,s_32 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(j_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_47 = NULL;
        k_47 = t;
        t = term_d_35;
        t = get_config_0_0(t);
        t = k_47;
        LocalPopChoice(v_55);
      }
    else
      {
        t = u_55;
        t = add_main_0_0(t);
      }
  }
  r_46 = t;
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_47 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_47 = ATgetArgument(t, 0);
            {
              ATerm s_29 = NULL,z_9 = NULL;
              t = SSLgetAnnotations(r_46);
              s_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_47);
              z_9 = t;
              t = SSLsetAnnotations(z_9, s_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_46;
          }
        LocalPopChoice(y_55);
        t = xtc_transform_file_2_0(u_20, w_20, t);
      }
    else
      {
        t = x_55;
        t = xtc_transform_term_2_0(b_21, m_21, t);
      }
  }
  o_46 = t;
  {
    ATerm z_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_48 = ATgetArgument(t, 0);
            {
              ATerm x_29 = NULL,b_10 = NULL;
              t = SSLgetAnnotations(o_46);
              x_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_48);
              b_10 = t;
              t = SSLsetAnnotations(b_10, x_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_46;
          }
        LocalPopChoice(a_56);
        t = xtc_transform_file_2_0(n_21, o_21, t);
      }
    else
      {
        t = z_55;
        t = xtc_transform_term_2_0(p_21, q_21, t);
      }
  }
  n_46 = t;
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_49 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_49 = ATgetArgument(t, 0);
            {
              ATerm d_30 = NULL,d_10 = NULL;
              t = SSLgetAnnotations(n_46);
              d_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_49);
              d_10 = t;
              t = SSLsetAnnotations(d_10, d_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_46;
          }
        LocalPopChoice(c_56);
        t = xtc_transform_file_2_0(r_21, u_21, t);
      }
    else
      {
        t = b_56;
        t = xtc_transform_term_2_0(v_21, w_21, t);
      }
  }
  l_30 = t;
  t = term_d_56;
  j_30 = t;
  t = l_30;
  t = pass_maybe_unbound_warnings_0_0(t);
  k_30 = t;
  t = l_30;
  t = comp_0_2(j_30, k_30, t);
  m_46 = t;
  {
    ATerm f_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_49 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_49 = ATgetArgument(t, 0);
            {
              ATerm q_30 = NULL,g_10 = NULL;
              t = SSLgetAnnotations(m_46);
              q_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_49);
              g_10 = t;
              t = SSLsetAnnotations(g_10, q_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_46;
          }
        LocalPopChoice(h_56);
        t = xtc_transform_file_2_0(a_22, b_22, t);
      }
    else
      {
        t = f_56;
        t = xtc_transform_term_2_0(c_22, d_22, t);
      }
  }
  j_46 = t;
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_50 = ATgetArgument(t, 0);
            {
              ATerm v_30 = NULL,j_10 = NULL;
              t = SSLgetAnnotations(j_46);
              v_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_50);
              j_10 = t;
              t = SSLsetAnnotations(j_10, v_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_46;
          }
        LocalPopChoice(j_56);
        t = xtc_transform_file_2_0(f_22, g_22, t);
      }
    else
      {
        t = i_56;
        t = xtc_transform_term_2_0(k_22, n_22, t);
      }
  }
  h_46 = t;
  {
    ATerm k_56 = t;
    int m_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_50 = ATgetArgument(t, 0);
            {
              ATerm h_31 = NULL,k_10 = NULL;
              t = SSLgetAnnotations(h_46);
              h_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_50);
              k_10 = t;
              t = SSLsetAnnotations(k_10, h_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_46;
          }
        LocalPopChoice(m_56);
        t = xtc_transform_file_2_0(p_22, q_22, t);
      }
    else
      {
        t = k_56;
        t = xtc_transform_term_2_0(r_22, s_22, t);
      }
  }
  g_46 = t;
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_50 = ATgetArgument(t, 0);
            {
              ATerm q_31 = NULL,l_10 = NULL;
              t = SSLgetAnnotations(g_46);
              q_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_50);
              l_10 = t;
              t = SSLsetAnnotations(l_10, q_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_46;
          }
        LocalPopChoice(r_56);
        t = xtc_transform_file_2_0(t_22, v_22, t);
      }
    else
      {
        t = q_56;
        t = xtc_transform_term_2_0(a_23, b_23, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_51 = NULL;
        e_51 = t;
        t = term_d_35;
        t = get_config_0_0(t);
        t = e_51;
        LocalPopChoice(v_56);
        {
          ATerm f_51 = NULL;
          f_51 = t;
          {
            ATerm w_56 = t;
            int y_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_51 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    j_51 = ATgetArgument(t, 0);
                    {
                      ATerm z_31 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(f_51);
                      z_31 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, j_51);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, z_31);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = f_51;
                  }
                LocalPopChoice(y_56);
                t = xtc_transform_file_2_0(c_23, e_23, t);
              }
            else
              {
                t = w_56;
                t = xtc_transform_term_2_0(g_23, h_23, t);
              }
          }
        }
      }
    else
      {
        t = u_56;
        {
          ATerm s_51 = NULL;
          s_51 = t;
          {
            ATerm z_56 = t;
            int a_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_51 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_51 = ATgetArgument(t, 0);
                    {
                      ATerm e_32 = NULL,p_10 = NULL;
                      t = SSLgetAnnotations(s_51);
                      e_32 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, z_51);
                      p_10 = t;
                      t = SSLsetAnnotations(p_10, e_32);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = s_51;
                  }
                LocalPopChoice(a_57);
                t = xtc_transform_file_2_0(i_23, k_23, t);
              }
            else
              {
                t = z_56;
                t = xtc_transform_term_2_0(o_23, p_23, t);
              }
          }
          t = if_keep2_1_0(q_23, t);
        }
      }
  }
  s_32 = t;
  t = term_b_57;
  n_32 = t;
  t = s_32;
  t = pass_warnings_0_0(t);
  r_32 = t;
  t = s_32;
  t = comp_0_2(n_32, r_32, t);
  d_46 = t;
  {
    ATerm c_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_52 = ATgetArgument(t, 0);
            {
              ATerm y_32 = NULL,q_10 = NULL;
              t = SSLgetAnnotations(d_46);
              y_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_52);
              q_10 = t;
              t = SSLsetAnnotations(q_10, y_32);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_46;
          }
        LocalPopChoice(d_57);
        t = xtc_transform_file_2_0(s_23, t_23, t);
      }
    else
      {
        t = c_57;
        t = xtc_transform_term_2_0(u_23, v_23, t);
      }
  }
  z_45 = t;
  {
    ATerm e_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_52 = ATgetArgument(t, 0);
            {
              ATerm n_33 = NULL,r_10 = NULL;
              t = SSLgetAnnotations(z_45);
              n_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_52);
              r_10 = t;
              t = SSLsetAnnotations(r_10, n_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_45;
          }
        LocalPopChoice(f_57);
        t = xtc_transform_file_2_0(w_23, z_23, t);
      }
    else
      {
        t = e_57;
        t = xtc_transform_term_2_0(e_24, f_24, t);
      }
  }
  t = if_keep2_1_0(g_24, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,x_45 = NULL;
  r_45 = t;
  t = term_u_32;
  s_45 = t;
  t = (ATerm) ATinsert(CheckATermList(r_45), term_g_57);
  x_45 = t;
  t = SSL_printnl(s_45, x_45);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(r_45), term_g_57));
  return(t);
}
static ATerm u_20 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm d_48 = NULL;
  t = pass_verbose_0_0(t);
  d_48 = t;
  t = (ATerm) ATinsert(CheckATermList(d_48), term_p_35);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm e_48 = NULL;
  t = pass_verbose_0_0(t);
  e_48 = t;
  t = (ATerm) ATinsert(CheckATermList(e_48), term_p_35);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_p_57;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  ATerm o_48 = NULL;
  t = pass_verbose_0_0(t);
  o_48 = t;
  t = (ATerm) ATinsert(CheckATermList(o_48), term_p_35);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_p_57;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm p_48 = NULL;
  t = pass_verbose_0_0(t);
  p_48 = t;
  t = (ATerm) ATinsert(CheckATermList(p_48), term_p_35);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = term_q_57;
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm j_49 = NULL;
  t = pass_verbose_0_0(t);
  j_49 = t;
  t = (ATerm) ATinsert(CheckATermList(j_49), term_p_35);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_q_57;
  return(t);
}
static ATerm w_21 (ATerm t)
{
  ATerm k_49 = NULL;
  t = pass_verbose_0_0(t);
  k_49 = t;
  t = (ATerm) ATinsert(CheckATermList(k_49), term_p_35);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_r_57;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm s_49 = NULL;
  t = pass_verbose_0_0(t);
  s_49 = t;
  t = (ATerm) ATinsert(CheckATermList(s_49), term_p_35);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_r_57;
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm t_49 = NULL;
  t = pass_verbose_0_0(t);
  t_49 = t;
  t = (ATerm) ATinsert(CheckATermList(t_49), term_p_35);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = term_s_57;
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm d_50 = NULL;
  t = pass_verbose_0_0(t);
  d_50 = t;
  t = (ATerm) ATinsert(CheckATermList(d_50), term_p_35);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = term_s_57;
  return(t);
}
static ATerm n_22 (ATerm t)
{
  ATerm f_50 = NULL;
  t = pass_verbose_0_0(t);
  f_50 = t;
  t = (ATerm) ATinsert(CheckATermList(f_50), term_p_35);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  t = term_u_57;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  ATerm q_50 = NULL;
  t = pass_verbose_0_0(t);
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(q_50), term_p_35);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_u_57;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm r_50 = NULL;
  t = pass_verbose_0_0(t);
  r_50 = t;
  t = (ATerm) ATinsert(CheckATermList(r_50), term_p_35);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_x_57;
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm c_51 = NULL;
  t = pass_verbose_0_0(t);
  c_51 = t;
  t = (ATerm) ATinsert(CheckATermList(c_51), term_p_35);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_x_57;
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm d_51 = NULL;
  t = pass_verbose_0_0(t);
  d_51 = t;
  t = (ATerm) ATinsert(CheckATermList(d_51), term_p_35);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_p_50;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm l_51 = NULL;
  t = pass_verbose_0_0(t);
  l_51 = t;
  t = (ATerm) ATinsert(CheckATermList(l_51), term_p_35);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_p_50;
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm r_51 = NULL;
  t = pass_verbose_0_0(t);
  r_51 = t;
  t = (ATerm) ATinsert(CheckATermList(r_51), term_p_35);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_y_57;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm b_52 = NULL;
  t = pass_verbose_0_0(t);
  b_52 = t;
  t = (ATerm) ATinsert(CheckATermList(b_52), term_p_35);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  t = term_y_57;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm c_52 = NULL;
  t = pass_verbose_0_0(t);
  c_52 = t;
  t = (ATerm) ATinsert(CheckATermList(c_52), term_p_35);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = save_as_1_0(r_23, t);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_d_58;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm i_52 = NULL;
  t = pass_verbose_0_0(t);
  i_52 = t;
  t = (ATerm) ATinsert(CheckATermList(i_52), term_p_35);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_d_58;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm j_52 = NULL;
  t = pass_verbose_0_0(t);
  j_52 = t;
  t = (ATerm) ATinsert(CheckATermList(j_52), term_p_35);
  return(t);
}
static ATerm w_23 (ATerm t)
{
  t = term_f_58;
  return(t);
}
static ATerm z_23 (ATerm t)
{
  ATerm u_52 = NULL;
  t = pass_verbose_0_0(t);
  u_52 = t;
  t = (ATerm) ATinsert(CheckATermList(u_52), term_p_35);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_f_58;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm z_52 = NULL;
  t = pass_verbose_0_0(t);
  z_52 = t;
  t = (ATerm) ATinsert(CheckATermList(z_52), term_p_35);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = save_as_1_0(h_24, t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_h_58;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(p_20, t);
  t = profile_p__2_0(r_20, s_20, t);
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm i_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_58);
    }
  else
    {
      t = i_58;
    }
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_o_58;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_58 = t;
  int v_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_53 = NULL;
      t_53 = t;
      t = SSL_is_string(t_53);
      LocalPopChoice(v_58);
    }
  else
    {
      t = u_58;
      {
        ATerm c_59 = t;
        int d_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_24, t);
            LocalPopChoice(d_59);
          }
        else
          {
            t = c_59;
            {
              ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
              z_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_54 = ATgetArgument(t, 0);
                  t = a_54;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_54 = ATgetArgument(t, 0);
                      t = a_54;
                      {
                        ATerm f_59 = t;
                        int h_59 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(h_59);
                          }
                        else
                          {
                            t = f_59;
                            t = debug_1_0(m_24, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_54 = NULL,g_54 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_54 = ATgetArgument(t, 0);
                          b_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_54;
                      t = eval_config_0_0(t);
                      f_54 = t;
                      t = b_54;
                      t = eval_config_0_0(t);
                      g_54 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_54, g_54);
                      t = z_13(f_54, g_54, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  k_54 = t;
  t = term_i_59;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_59, k_54);
  t = v_13(l_54, k_54, t);
  {
    ATerm j_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_54 = NULL,n_54 = NULL;
        t = eval_config_0_0(t);
        m_54 = t;
        t = term_i_59;
        n_54 = t;
        t = SSL_table_put(n_54, k_54, m_54);
        t = m_54;
        LocalPopChoice(l_59);
      }
    else
      {
        t = j_59;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm u_51, ATerm v_51, ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  r_54 = t;
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
        t = v_13(u_51, v_51, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_59 = ATgetFirst((ATermList) t);
            q_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_59);
        t = SSL_table_put(u_51, v_51, q_54);
        t = (ATerm) ATmakeAppl(sym__3, u_51, v_51, q_54);
      }
    else
      {
        t = m_59;
        t = SSL_table_remove(u_51, v_51);
        t = (ATerm) ATmakeAppl(sym__2, u_51, v_51);
      }
  }
  t = r_54;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  v_54 = t;
  t = f_100(t);
  u_54 = t;
  {
    ATerm r_59 = t;
    int s_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_54 = NULL;
        t = term_d_52;
        x_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_54, term_d_52);
        t = v_13(u_54, x_54, t);
        LocalPopChoice(s_59);
      }
    else
      {
        t = r_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_54 = ATgetFirst((ATermList) t);
      s_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_52;
  w_54 = t;
  t = SSL_table_put(u_54, w_54, s_54);
  t = t_54;
  {
    static ATerm o_24 (ATerm t)
    {
      ATerm y_54 = NULL;
      y_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_54, y_54);
      t = b_13(u_54, y_54, t);
      return(t);
    }
    t = map_1_0(o_24, t);
  }
  t = v_54;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_80(t);
      t = g_80(t);
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
      t = g_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  b_55 = t;
  t = e_100(t);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_55, term_d_52);
  {
    ATerm v_59 = t;
    int w_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_59 = ATgetArgument(t, 0);
            ATerm y_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_52;
        k_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_55, term_d_52);
        t = v_13(a_55, k_55, t);
        LocalPopChoice(w_59);
      }
    else
      {
        t = v_59;
        t = (ATerm) ATempty;
      }
  }
  c_55 = t;
  t = term_d_52;
  d_55 = t;
  t = (ATerm) ATinsert(CheckATermList(c_55), (ATerm) ATempty);
  e_55 = t;
  t = SSL_table_put(a_55, d_55, e_55);
  t = b_55;
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_e_52;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm w_55 = NULL;
  w_55 = t;
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_55);
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
        t = w_55;
      }
  }
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm o_55 = NULL;
  static ATerm q_24 (ATerm t)
  {
    ATerm p_55 = NULL;
    p_55 = t;
    {
      ATerm b_60 = t;
      int c_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_55 = NULL,r_55 = NULL;
          t = term_e_52;
          q_55 = t;
          t = term_d_52;
          r_55 = t;
          t = term_e_53;
          t = v_13(q_55, r_55, t);
          LocalPopChoice(c_60);
        }
      else
        {
          t = b_60;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_55 != NULL) && (o_55 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_55 = ATgetFirst((ATermList) t);
        {
          ATerm d_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_55;
    t = map_1_0(r_24, t);
    t = p_55;
    t = end_scope_1_0(t_24, t);
    return(t);
  }
  t = begin_scope_1_0(p_24, t);
  t = restore_always_2_0(r_111, q_24, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  {
    ATerm f_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_56 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        g_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_56, term_r_35);
        t = geq_0_0(t);
        t = e_56;
        t = k_102(t);
        LocalPopChoice(h_60);
      }
    else
      {
        t = f_60;
        t = e_56;
      }
  }
  return(t);
}
static ATerm d_13 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm j_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_40, p_40);
      LocalPopChoice(k_60);
    }
  else
    {
      t = j_60;
      t = SSL_addr(o_40, p_40);
    }
  return(t);
}
static ATerm f_13 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm l_60 = t;
  int m_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(u_40, v_40);
      LocalPopChoice(m_60);
    }
  else
    {
      t = l_60;
      t = SSL_subtr(u_40, v_40);
    }
  return(t);
}
static ATerm g_13 (ATerm r_48, ATerm t_48, ATerm v_48, ATerm x_48, ATerm s_48, ATerm u_48, ATerm w_48, ATerm y_48, ATerm t)
{
  ATerm l_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
  t = f_13(r_48, s_48, t);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_48, u_48);
  t = f_13(t_48, u_48, t);
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_48, w_48);
  t = f_13(v_48, w_48, t);
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_48, y_48);
  t = f_13(x_48, y_48, t);
  p_56 = t;
  t = (ATerm) ATmakeAppl(sym__4, l_56, n_56, o_56, p_56);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,x_56 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_60 = ATgetArgument(t, 0);
      if(match_cons(n_60, sym__4))
        {
          s_56 = ATgetArgument(n_60, 0);
          t_56 = ATgetArgument(n_60, 1);
          x_56 = ATgetArgument(n_60, 2);
          i_57 = ATgetArgument(n_60, 3);
        }
      else
        _fail(t);
      {
        ATerm o_60 = ATgetArgument(t, 1);
        if(match_cons(o_60, sym__4))
          {
            j_57 = ATgetArgument(o_60, 0);
            k_57 = ATgetArgument(o_60, 1);
            l_57 = ATgetArgument(o_60, 2);
            m_57 = ATgetArgument(o_60, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_13(s_56, t_56, x_56, i_57, j_57, k_57, l_57, m_57, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL,z_57 = NULL,a_58 = NULL,c_58 = NULL,e_58 = NULL,g_58 = NULL,j_58 = NULL,n_58 = NULL,p_58 = NULL;
  a_58 = t;
  t = times_0_0(t);
  n_57 = t;
  t = a_58;
  t = y_105(t);
  o_57 = t;
  t = times_0_0(t);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_57, n_57);
  t = diff_times_0_0(t);
  w_57 = t;
  if(match_cons(t, sym__4))
    {
      j_58 = ATgetArgument(t, 0);
      {
        ATerm p_60 = ATgetArgument(t, 1);
      }
      n_58 = ATgetArgument(t, 2);
      {
        ATerm r_60 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_58, n_58);
  t = d_13(j_58, n_58, t);
  p_58 = t;
  t = SSL_TicksToSeconds(p_58);
  t_57 = t;
  t = w_57;
  if(match_cons(t, sym__4))
    {
      ATerm t_60 = ATgetArgument(t, 0);
      c_58 = ATgetArgument(t, 1);
      {
        ATerm u_60 = ATgetArgument(t, 2);
      }
      e_58 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_58, e_58);
  t = d_13(c_58, e_58, t);
  g_58 = t;
  t = SSL_TicksToSeconds(g_58);
  v_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_57), term_x_60), t_57), term_v_60);
  t = x_105(t);
  t = o_57;
  return(t);
}
ATerm debug_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  q_58 = t;
  t = k_87(t);
  r_58 = t;
  t = term_u_32;
  s_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_58), r_58);
  t_58 = t;
  t = SSL_printnl(s_58, t_58);
  t = q_58;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  w_58 = t;
  t = term_y_60;
  t = get_config_0_0(t);
  x_58 = t;
  t = term_f_34;
  y_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_61), term_f_61), term_e_61), term_d_61), term_c_61), term_b_61), term_a_61), x_58), term_z_60);
  z_58 = t;
  t = SSL_printnl(y_58, z_58);
  t = w_58;
  return(t);
}
static ATerm h_13 (ATerm w_42, ATerm x_42, ATerm t)
{
  t = SSL_copy(w_42, x_42);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_59 = NULL;
  static ATerm x_24 (ATerm t)
  {
    ATerm b_59 = NULL,e_59 = NULL;
    b_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_59), b_59);
    t = v_13(not_null(a_59), b_59, t);
    e_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_59, e_59);
    return(t);
  }
  if(((a_59 != NULL) && (a_59 != t)))
    _fail(t);
  else
    a_59 = t;
  t = SSL_table_keys(a_59);
  t = map_1_0(x_24, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm g_59 = NULL;
  g_59 = t;
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        k_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_59, term_k_38);
        t = geq_0_0(t);
        t = g_59;
        t = o_102(t);
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        t = g_59;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_59, term_r_38);
        t = geq_0_0(t);
        t = o_59;
        t = n_102(t);
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
        t = o_59;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_60 = NULL,g_60 = NULL,i_60 = NULL;
  e_60 = t;
  if(match_cons(t, sym__2))
    {
      g_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_60;
        if((g_60 != t))
          {
            _fail(t);
          }
        t = e_60;
        LocalPopChoice(t_61);
      }
    else
      {
        t = s_61;
        t = (ATerm) ATmakeAppl(sym__2, g_60, i_60);
        {
          ATerm u_61 = t;
          int y_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_60, i_60);
              LocalPopChoice(y_61);
            }
          else
            {
              t = u_61;
              t = SSL_gtr(g_60, i_60);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_60, i_60);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm q_60 = NULL;
  q_60 = t;
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_60 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        s_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_60, term_a_39);
        t = geq_0_0(t);
        t = q_60;
        t = p_102(t);
        LocalPopChoice(a_62);
      }
    else
      {
        t = z_61;
        t = q_60;
      }
  }
  return(t);
}
static ATerm k_13 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm y_28, ATerm x_28, ATerm t)
{
  t = d_92(t);
  {
    static ATerm y_24 (ATerm t)
    {
      ATerm w_60 = NULL;
      w_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, w_60);
      t = c_92(t);
      return(t);
    }
    t = fetch_1_0(y_24, t);
  }
  t = x_28;
  return(t);
}
static ATerm l_13 (ATerm z_91 (ATerm), ATerm u_28, ATerm t_28, ATerm t)
{
  static ATerm m_61 (ATerm t)
  {
    ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
    h_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_61 = ATgetFirst((ATermList) t);
            j_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_62 = t;
          int c_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_61;
              {
                static ATerm z_24 (ATerm t)
                {
                  t = t_28;
                  return(t);
                }
                t = k_13(z_91, z_24, i_61, j_61, t);
              }
              t = m_61(t);
              LocalPopChoice(c_62);
            }
          else
            {
              t = b_62;
              {
                ATerm z_35 = NULL,g_36 = NULL,h_11 = NULL;
                t = SSLgetAnnotations(h_61);
                z_35 = t;
                t = j_61;
                t = m_61(t);
                g_36 = t;
                t = (ATerm) ATinsert(CheckATermList(g_36), i_61);
                h_11 = t;
                t = SSLsetAnnotations(h_11, z_35);
              }
            }
        }
      }
    return(t);
  }
  t = u_28;
  t = m_61(t);
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm v_61 = NULL;
  if(match_cons(t, sym__2))
    {
      v_61 = ATgetArgument(t, 0);
      if((v_61 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_13 (ATerm m_52, ATerm n_52, ATerm o_52, ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
  {
    ATerm d_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_62 = ATgetArgument(t, 0);
            ATerm h_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_52, n_52);
        t = v_13(m_52, n_52, t);
        LocalPopChoice(e_62);
      }
    else
      {
        t = d_62;
        t = (ATerm) ATempty;
      }
  }
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_61, o_52);
  t = l_13(b_25, r_61, o_52, t);
  q_61 = t;
  t = SSL_table_put(m_52, n_52, q_61);
  t = p_61;
  return(t);
}
static ATerm n_13 (ATerm g_107 (ATerm), ATerm w_52, ATerm v_52, ATerm t)
{
  static ATerm c_25 (ATerm t)
  {
    ATerm w_61 = NULL,x_61 = NULL;
    if(match_cons(t, sym__2))
      {
        w_61 = ATgetArgument(t, 0);
        x_61 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_52, w_61, x_61);
    t = g_107(t);
    return(t);
  }
  t = v_52;
  t = map_1_0(c_25, t);
  return(t);
}
static ATerm r_13 (ATerm m_37, ATerm n_37, ATerm t)
{
  t = SSL_access(m_37, n_37);
  return(t);
}
static ATerm p_62 (ATerm g_62, ATerm t)
{
  t = SSL_fclose(g_62);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_62 = NULL,l_62 = NULL;
  l_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_62 = ATgetArgument(t, 0);
      {
        ATerm i_62 = t;
        int k_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_62);
            LocalPopChoice(k_62);
          }
        else
          {
            t = i_62;
            t = p_62(l_62, t);
          }
      }
    }
  else
    {
      t = p_62(l_62, t);
    }
  return(t);
}
static ATerm o_13 (ATerm d_23, ATerm t)
{
  t = SSL_read_term_from_stream(d_23);
  return(t);
}
static ATerm p_13 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm q_62 = NULL;
  t = SSL_fopen(v_37, w_37);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_62);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_62 = NULL;
  t = SSL_stdin_stream();
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_62);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_62 = NULL;
  t = SSL_stdout_stream();
  s_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_62);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_62 = NULL;
  t = SSL_stderr_stream();
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_62);
  return(t);
}
static ATerm u_64 (ATerm a_63, ATerm t)
{
  ATerm d_63 = NULL;
  t = SSL_explode_term(a_63);
  if(match_cons(t, sym__2))
    {
      ATerm m_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_62 = ATgetArgument(t, 1);
        if(((ATgetType(n_62) == AT_LIST) && !(ATisEmpty(n_62))))
          {
            d_63 = ATgetFirst((ATermList) n_62);
            {
              ATerm o_62 = (ATerm) ATgetNext((ATermList) n_62);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_63;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_63;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_63;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_63;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_64 (ATerm j_63, ATerm k_63, ATerm l_63, ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,p_63 = NULL,w_63 = NULL,k_11 = NULL;
  t = SSLgetAnnotations(l_63);
  p_63 = t;
  t = j_63;
  if(match_cons(t, sym_Path_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_63, k_63);
  k_11 = t;
  t = SSLsetAnnotations(k_11, p_63);
  if(match_cons(t, sym__2))
    {
      m_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(m_63, n_63, t);
  return(t);
}
static ATerm y_64 (ATerm a_64, ATerm c_64, ATerm e_64, ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,m_64 = NULL,l_11 = NULL;
  t = SSLgetAnnotations(e_64);
  h_64 = t;
  t = SSL_is_string(a_64);
  m_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_64, c_64);
  l_11 = t;
  t = SSLsetAnnotations(l_11, h_64);
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(f_64, g_64, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,t_64 = NULL;
  p_64 = t;
  if(match_cons(t, sym__2))
    {
      q_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
      {
        ATerm u_62 = t;
        int v_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_64(p_64, t);
            LocalPopChoice(v_62);
          }
        else
          {
            t = u_62;
            {
              ATerm w_62 = t;
              int x_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_64(q_64, t_64, p_64, t);
                  LocalPopChoice(x_62);
                }
              else
                {
                  t = w_62;
                  t = y_64(q_64, t_64, p_64, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_64(p_64, t);
    }
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_y_62;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_64 = NULL,b_65 = NULL,c_65 = NULL;
  ATerm z_62 = t;
  int b_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_65 = NULL;
      d_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_65, term_c_63);
      t = q_13(t);
      LocalPopChoice(b_63);
    }
  else
    {
      t = z_62;
      t = debug_1_0(d_25, t);
      _fail(t);
    }
  b_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_13(c_65, t);
  z_64 = t;
  t = b_65;
  t = fclose_0_0(t);
  t = z_64;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_e_63;
  return(t);
}
static ATerm h_25 (ATerm t)
{
  t = term_f_63;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_63 = t;
  int h_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_65 = NULL,g_65 = NULL;
      f_65 = t;
      t = (ATerm) ATinsert(ATempty, term_i_63);
      g_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_65, (ATerm) ATinsert(ATempty, term_i_63));
      t = r_13(f_65, g_65, t);
      LocalPopChoice(h_63);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_63;
      {
        ATerm o_63 = t;
        int q_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_63 = t;
            if((PushChoice() == 0))
              {
                ATerm i_65 = NULL,k_65 = NULL;
                i_65 = t;
                t = (ATerm) ATinsert(ATempty, term_l_52);
                k_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_65, (ATerm) ATinsert(ATempty, term_l_52));
                t = r_13(i_65, k_65, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_63;
              }
            t = debug_1_0(g_25, t);
            LocalPopChoice(q_63);
          }
        else
          {
            t = o_63;
            t = debug_1_0(h_25, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_25 (ATerm t)
{
  t = debug_1_0(j_25, t);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = debug_1_0(l_25, t);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_t_63;
  return(t);
}
static ATerm m_25 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  t = term_u_32;
  c_66 = t;
  t = (ATerm) ATinsert(ATempty, term_u_63);
  d_66 = t;
  t = SSL_printnl(c_66, d_66);
  t = b_66;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm e_66 = NULL,g_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym__3))
    {
      e_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
      i_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_13(e_66, g_66, i_66, t);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm j_66 = NULL,l_66 = NULL,m_66 = NULL;
  j_66 = t;
  t = term_u_32;
  l_66 = t;
  t = (ATerm) ATinsert(ATempty, term_v_63);
  m_66 = t;
  t = SSL_printnl(l_66, m_66);
  t = j_66;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  t = term_u_32;
  o_66 = t;
  t = (ATerm) ATinsert(ATempty, term_u_63);
  p_66 = t;
  t = SSL_printnl(o_66, p_66);
  t = n_66;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,u_65 = NULL,w_65 = NULL,x_65 = NULL;
  l_65 = t;
  t = if_verbose5_1_0(i_25, t);
  {
    ATerm x_63 = t;
    if((PushChoice() == 0))
      {
        ATerm z_65 = NULL,a_66 = NULL;
        t = term_y_63;
        z_65 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, l_65);
        a_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_63, (ATerm) ATmakeAppl(sym_Imported_1, l_65));
        t = v_13(z_65, a_66, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_63;
      }
  }
  o_65 = t;
  t = term_y_63;
  u_65 = t;
  t = term_z_63;
  w_65 = t;
  t = (ATerm) ATinsert(ATempty, l_65);
  x_65 = t;
  t = SSL_table_put(u_65, w_65, x_65);
  t = o_65;
  t = if_verbose4_1_0(k_25, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_25, t);
  n_65 = t;
  t = term_y_63;
  s_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_63, n_65);
  t = n_13(n_25, s_65, n_65, t);
  t = if_verbose6_1_0(o_25, t);
  t = term_y_63;
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, l_65);
  q_65 = t;
  t = (ATerm) ATempty;
  r_65 = t;
  t = SSL_table_put(p_65, q_65, r_65);
  t = (ATerm) ATmakeAppl(sym__3, term_y_63, (ATerm)ATmakeAppl(sym_Imported_1, l_65), (ATerm) ATempty);
  t = if_verbose4_1_0(p_25, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,j_67 = NULL;
  g_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_67;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_67 = ATgetFirst((ATermList) t);
          j_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_64 = t;
        int d_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_37 = NULL,z_37 = NULL,c_38 = NULL,t_11 = NULL;
            t = SSLgetAnnotations(g_67);
            u_37 = t;
            t = h_67;
            t = c_95(t);
            z_37 = t;
            t = j_67;
            t = filter_1_0(c_95, t);
            c_38 = t;
            t = (ATerm) ATinsert(CheckATermList(c_38), z_37);
            t_11 = t;
            t = SSLsetAnnotations(t_11, u_37);
            LocalPopChoice(d_64);
          }
        else
          {
            t = b_64;
            t = j_67;
            t = filter_1_0(c_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t)
{
  static ATerm m_67 (ATerm t)
  {
    ATerm i_64 = t;
    int j_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        t = m_67(t);
        LocalPopChoice(j_64);
      }
    else
      {
        t = i_64;
        t = k_80(t);
      }
    return(t);
  }
  t = m_67(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_64;
      t = get_config_0_0(t);
      LocalPopChoice(l_64);
    }
  else
    {
      t = k_64;
      {
        ATerm o_64 = t;
        int r_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_67 = NULL;
            t = term_s_64;
            n_67 = t;
            t = SSL_getenv(n_67);
            LocalPopChoice(r_64);
          }
        else
          {
            t = o_64;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = debug_1_0(r_25, t);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_w_64;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL;
  t = term_y_63;
  w_67 = t;
  t = term_x_64;
  x_67 = t;
  t = term_a_65;
  t = v_13(w_67, x_67, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_65 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_65;
      }
  }
  return(t);
}
static ATerm t_25 (ATerm t)
{
  t = debug_1_0(u_25, t);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_h_65;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_67 = NULL;
  t = if_verbose5_1_0(q_25, t);
  q_67 = t;
  {
    ATerm j_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_67 = NULL,t_67 = NULL;
        t = term_y_63;
        s_67 = t;
        t = term_z_63;
        t_67 = t;
        t = term_t_65;
        t = v_13(s_67, t_67, t);
        LocalPopChoice(m_65);
      }
    else
      {
        t = j_65;
        {
          ATerm v_67 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_67 = t;
          t = repeat_2_0(s_25, _id, t);
          t = v_67;
        }
      }
  }
  t = q_67;
  t = if_verbose5_1_0(t_25, t);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = debug_1_0(x_25, t);
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_v_65;
  return(t);
}
static ATerm b_69 (ATerm e_68, ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,k_68 = NULL;
  t = term_y_63;
  i_68 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_68);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_63, (ATerm) ATmakeAppl(sym_Tool_1, e_68));
  t = v_13(i_68, k_68, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_65 = ATgetFirst((ATermList) t);
      if(match_cons(y_65, sym__2))
        {
          ATerm h_66 = ATgetArgument(y_65, 0);
          h_68 = ATgetArgument(y_65, 1);
        }
      else
        _fail(t);
      {
        ATerm f_66 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_68;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = debug_1_0(a_26, t);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_v_65;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_y_63;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_26, t);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_k_66;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_66 = t;
  int r_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
      t = if_verbose5_1_0(w_25, t);
      t = xtc_load_0_0(t);
      n_68 = t;
      if(match_cons(t, sym__2))
        {
          l_68 = ATgetArgument(t, 0);
          m_68 = ATgetArgument(t, 1);
          {
            ATerm s_66 = t;
            int t_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_68 = NULL,t_68 = NULL,u_68 = NULL;
                t = term_y_63;
                t_68 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_68);
                u_68 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_63, (ATerm) ATmakeAppl(sym_Tool_1, l_68));
                t = v_13(t_68, u_68, t);
                {
                  static ATerm y_25 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_68 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_68 != NULL) && (r_68 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_68 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(y_25, t);
                }
                t = not_null(r_68);
                LocalPopChoice(t_66);
              }
            else
              {
                t = s_66;
                t = b_69(n_68, t);
              }
          }
        }
      else
        {
          t = b_69(n_68, t);
        }
      t = if_verbose5_1_0(z_25, t);
      LocalPopChoice(r_66);
    }
  else
    {
      t = q_66;
      {
        ATerm a_69 = NULL,t_38 = NULL,x_38 = NULL;
        a_69 = t;
        t = term_u_32;
        t_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_66), a_69), term_u_66);
        x_38 = t;
        t = SSL_printnl(t_38, x_38);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_66), a_69), term_u_66);
        t = if_verbose5_1_0(b_26, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_13 (ATerm v_46, ATerm u_46, ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  t = v_46;
  {
    ATerm w_66 = t;
    int x_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(x_66);
      }
    else
      {
        t = w_66;
        t = (ATerm) ATempty;
      }
  }
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_46, g_69);
  t = conc_0_0(t);
  f_69 = t;
  t = term_i_59;
  h_69 = t;
  t = SSL_table_put(h_69, v_46, f_69);
  t = (ATerm) ATmakeAppl(sym__3, term_i_59, v_46, f_69);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,q_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_69 = NULL,t_69 = NULL,v_69 = NULL;
      t = term_x_33;
      t = p_0(t);
      s_69 = t;
      t = term_y_66;
      t_69 = t;
      t = term_z_66;
      v_69 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_66, term_z_66, s_69);
      t = w_13(t_69, v_69, s_69, t);
      _fail(t);
    }
  else
    {
      ATerm z_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_69 = ATgetFirst((ATermList) t);
          n_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_69 = ATgetFirst((ATermList) t);
          q_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_69;
      t = n_0(t);
      t = o_69;
      t = o_0(t);
      z_69 = t;
      t = (ATerm) ATinsert(CheckATermList(q_69), z_69);
    }
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm c_70 = NULL;
  c_70 = t;
  if(match_string(t, "-S"))
    {
      t = c_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_70;
    }
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL;
  t = term_q_32;
  e_70 = t;
  t = term_l_32;
  f_70 = t;
  t = term_a_67;
  t = y_13(e_70, f_70, t);
  t = term_b_67;
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_c_67;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  g_70 = t;
  t = SSL_string_to_int(g_70);
  h_70 = t;
  t = term_q_32;
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, h_70);
  t = y_13(i_70, h_70, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_70);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_d_67;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  t = term_e_67;
  j_70 = t;
  t = term_x_33;
  k_70 = t;
  t = term_f_67;
  t = y_13(j_70, k_70, t);
  t = term_i_67;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = term_k_67;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_26, f_26, g_26, t);
      LocalPopChoice(o_67);
    }
  else
    {
      t = l_67;
      {
        ATerm p_67 = t;
        int r_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_26, i_26, j_26, t);
            LocalPopChoice(r_67);
          }
        else
          {
            t = p_67;
            t = Option_3_0(k_26, l_26, r_26, t);
          }
      }
    }
  return(t);
}
static ATerm t_13 (ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm u_67 = t;
  int y_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_70 = NULL;
      t = s_46;
      t = get_config_0_0(t);
      t = term_i_59;
      l_70 = t;
      t = SSL_table_remove(l_70, s_46);
      t = (ATerm) ATmakeAppl(sym__2, term_i_59, s_46);
      LocalPopChoice(y_67);
    }
  else
    {
      t = u_67;
      t = (ATerm) ATmakeAppl(sym__2, s_46, t_46);
      t = y_13(s_46, t_46, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  static ATerm q_71 (ATerm t)
  {
    ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
    n_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_71 = ATgetFirst((ATermList) t);
        m_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_39 = NULL,r_39 = NULL,s_16 = NULL;
          t = SSLgetAnnotations(n_71);
          m_39 = t;
          t = m_71;
          t = q_71(t);
          r_39 = t;
          t = (ATerm) ATinsert(CheckATermList(r_39), l_71);
          s_16 = t;
          t = SSLsetAnnotations(s_16, m_39);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_71;
        t = l_88(t);
      }
    return(t);
  }
  t = q_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_70;
    }
  else
    {
      static ATerm s_26 (ATerm t)
      {
        t = not_null(p_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_70 = ATgetFirst((ATermList) t);
          if(((p_70 != NULL) && (p_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_70;
      t = at_end_1_0(s_26, t);
    }
  return(t);
}
static ATerm c_72 (ATerm u_71, ATerm t)
{
  ATerm v_71 = NULL;
  t = SSL_explode_term(u_71);
  if(match_cons(t, sym__2))
    {
      ATerm z_67 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_67) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_71;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  z_71 = t;
  if(match_cons(t, sym__2))
    {
      x_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
      {
        ATerm a_68 = t;
        int b_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_26 (ATerm t)
            {
              t = y_71;
              return(t);
            }
            t = x_71;
            t = at_end_1_0(t_26, t);
            LocalPopChoice(b_68);
          }
        else
          {
            t = a_68;
            t = c_72(z_71, t);
          }
      }
    }
  else
    {
      t = c_72(z_71, t);
    }
  return(t);
}
static ATerm u_13 (ATerm w_46, ATerm x_46, ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  t = w_46;
  {
    ATerm c_68 = t;
    int d_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(d_68);
      }
    else
      {
        t = c_68;
        t = (ATerm) ATempty;
      }
  }
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_72, x_46);
  t = conc_0_0(t);
  d_72 = t;
  t = term_i_59;
  f_72 = t;
  t = SSL_table_put(f_72, w_46, d_72);
  t = (ATerm) ATmakeAppl(sym__3, term_i_59, w_46, d_72);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm h_72 = NULL;
  h_72 = t;
  if(match_string(t, "-o"))
    {
      t = h_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_72;
    }
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL;
  i_72 = t;
  t = term_b_33;
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, i_72);
  t = y_13(j_72, i_72, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_72);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_f_68;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_26, v_26, b_27, t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  if(match_string(t, "-i"))
    {
      t = l_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_72;
    }
  return(t);
}
static ATerm e_27 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  m_72 = t;
  t = term_k_50;
  n_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_50, m_72);
  t = y_13(n_72, m_72, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_72);
  return(t);
}
static ATerm g_27 (ATerm t)
{
  t = term_g_68;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_27, e_27, g_27, t);
  return(t);
}
static ATerm p_27 (ATerm t)
{
  ATerm u_72 = NULL;
  u_72 = t;
  if(match_string(t, "-I"))
    {
      t = u_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = u_72;
    }
  return(t);
}
static ATerm r_27 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
  v_72 = t;
  t = term_d_54;
  w_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_72), term_d_54);
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_54, (ATerm) ATinsert(ATinsert(ATempty, v_72), term_d_54));
  t = s_13(w_72, x_72, t);
  t = term_x_33;
  return(t);
}
static ATerm s_27 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  if(match_string(t, "--main"))
    {
      t = y_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = y_72;
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  z_72 = t;
  t = term_y_52;
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_52, z_72);
  t = y_13(a_73, z_72, t);
  t = term_x_33;
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = term_o_68;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  if(match_string(t, "--library"))
    {
      t = f_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = f_73;
    }
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL;
  t = term_d_35;
  g_73 = t;
  t = term_x_33;
  h_73 = t;
  t = term_p_68;
  t = y_13(g_73, h_73, t);
  t = term_x_33;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_q_68;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm i_73 = NULL,k_73 = NULL,l_73 = NULL;
  i_73 = t;
  t = term_u_34;
  k_73 = t;
  t = (ATerm) ATinsert(ATempty, i_73);
  l_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, (ATerm) ATinsert(ATempty, i_73));
  t = u_13(k_73, l_73, t);
  t = term_x_33;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_s_68;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
  m_73 = t;
  t = term_h_33;
  n_73 = t;
  t = (ATerm) ATinsert(ATempty, m_73);
  o_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_33, (ATerm) ATinsert(ATempty, m_73));
  t = s_13(n_73, o_73, t);
  t = term_x_33;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_v_68;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  t = term_c_33;
  q_73 = t;
  t = (ATerm) ATinsert(ATempty, p_73);
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(ATempty, p_73));
  t = s_13(q_73, r_73, t);
  t = term_x_33;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = term_w_68;
  return(t);
}
static ATerm i_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  t = term_i_33;
  w_73 = t;
  t = term_x_33;
  x_73 = t;
  t = term_x_68;
  t = y_13(w_73, x_73, t);
  t = term_x_33;
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = term_y_68;
  return(t);
}
static ATerm m_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_28 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL;
  t = term_s_53;
  y_73 = t;
  t = term_x_33;
  z_73 = t;
  t = term_z_68;
  t = y_13(y_73, z_73, t);
  t = term_x_33;
  return(t);
}
static ATerm r_28 (ATerm t)
{
  t = term_c_69;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_28 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  t = term_w_50;
  b_74 = t;
  t = term_x_33;
  c_74 = t;
  t = term_d_69;
  t = y_13(b_74, c_74, t);
  t = term_x_33;
  return(t);
}
static ATerm b_29 (ATerm t)
{
  t = term_e_69;
  return(t);
}
static ATerm c_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  t = SSL_string_to_int(d_74);
  e_74 = t;
  t = term_r_37;
  f_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, e_74);
  t = y_13(f_74, e_74, t);
  t = term_x_33;
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_i_69;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  t = SSL_string_to_int(g_74);
  h_74 = t;
  t = term_x_37;
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_37, h_74);
  t = y_13(i_74, h_74, t);
  t = term_x_33;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_j_69;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_29 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL;
  t = term_b_40;
  j_74 = t;
  t = term_x_33;
  k_74 = t;
  t = term_k_69;
  t = t_13(j_74, k_74, t);
  t = term_x_33;
  return(t);
}
static ATerm m_29 (ATerm t)
{
  t = term_l_69;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm n_74 = NULL;
  n_74 = t;
  if(match_string(t, "-h"))
    {
      t = n_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = n_74;
    }
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL;
  t = term_p_69;
  o_74 = t;
  t = term_x_33;
  p_74 = t;
  t = term_r_69;
  t = y_13(o_74, p_74, t);
  t = term_x_33;
  return(t);
}
static ATerm q_29 (ATerm t)
{
  t = term_u_69;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  t = term_w_69;
  r_74 = t;
  t = term_x_33;
  s_74 = t;
  t = term_x_69;
  t = y_13(r_74, s_74, t);
  t = term_x_33;
  return(t);
}
static ATerm u_29 (ATerm t)
{
  t = term_y_69;
  return(t);
}
static ATerm v_29 (ATerm t)
{
  ATerm t_74 = NULL;
  t_74 = t;
  if(match_string(t, "-v"))
    {
      t = t_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = t_74;
    }
  return(t);
}
static ATerm w_29 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL;
  t = term_a_70;
  v_74 = t;
  t = term_x_33;
  w_74 = t;
  t = term_b_70;
  t = y_13(v_74, w_74, t);
  t = term_x_33;
  return(t);
}
static ATerm y_29 (ATerm t)
{
  t = term_d_70;
  return(t);
}
static ATerm z_29 (ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  if(match_string(t, "--warning"))
    {
      t = y_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = y_74;
    }
  return(t);
}
static ATerm a_30 (ATerm t)
{
  ATerm z_74 = NULL;
  z_74 = t;
  {
    ATerm m_70 = t;
    int q_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,v_16 = NULL;
        t = term_n_50;
        t = get_config_0_0(t);
        g_75 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_75 = ATgetFirst((ATermList) t);
            f_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_75);
        d_75 = t;
        t = e_75;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = f_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_75), e_75);
        v_16 = t;
        t = SSLsetAnnotations(v_16, d_75);
        t = term_n_50;
        b_75 = t;
        t = (ATerm) ATinsert(ATempty, z_74);
        c_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, z_74));
        t = y_13(b_75, c_75, t);
        LocalPopChoice(q_70);
      }
    else
      {
        t = m_70;
        {
          ATerm h_75 = NULL,i_75 = NULL;
          t = term_n_50;
          h_75 = t;
          t = (ATerm) ATinsert(ATempty, z_74);
          i_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, z_74));
          t = s_13(h_75, i_75, t);
        }
      }
  }
  t = term_x_33;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = term_r_70;
  return(t);
}
static ATerm c_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_30 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  t = term_k_51;
  k_75 = t;
  t = term_r_35;
  l_75 = t;
  t = term_s_70;
  t = y_13(k_75, l_75, t);
  t = j_75;
  return(t);
}
static ATerm f_30 (ATerm t)
{
  t = term_k_51;
  return(t);
}
static ATerm g_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_30 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL;
  m_75 = t;
  t = term_m_51;
  n_75 = t;
  t = term_l_32;
  o_75 = t;
  t = term_t_70;
  t = y_13(n_75, o_75, t);
  t = m_75;
  return(t);
}
static ATerm o_30 (ATerm t)
{
  t = term_m_51;
  return(t);
}
static ATerm r_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_30 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  t = term_e_54;
  p_75 = t;
  t = term_x_33;
  q_75 = t;
  t = term_u_70;
  t = y_13(p_75, q_75, t);
  t = term_x_33;
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = term_v_70;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm w_70 = t;
  int x_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_70);
    }
  else
    {
      t = w_70;
      {
        ATerm y_70 = t;
        int z_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_70);
          }
        else
          {
            t = y_70;
            {
              ATerm a_71 = t;
              int b_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(p_27, r_27, s_27, t);
                  LocalPopChoice(b_71);
                }
              else
                {
                  t = a_71;
                  {
                    ATerm c_71 = t;
                    int d_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(t_27, u_27, v_27, t);
                        LocalPopChoice(d_71);
                      }
                    else
                      {
                        t = c_71;
                        {
                          ATerm e_71 = t;
                          int f_71 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(w_27, x_27, y_27, t);
                              LocalPopChoice(f_71);
                            }
                          else
                            {
                              t = e_71;
                              {
                                ATerm g_71 = t;
                                int h_71 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(z_27, a_28, b_28, t);
                                    LocalPopChoice(h_71);
                                  }
                                else
                                  {
                                    t = g_71;
                                    {
                                      ATerm i_71 = t;
                                      int j_71 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(c_28, d_28, e_28, t);
                                          LocalPopChoice(j_71);
                                        }
                                      else
                                        {
                                          t = i_71;
                                          {
                                            ATerm k_71 = t;
                                            int o_71 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(f_28, g_28, h_28, t);
                                                LocalPopChoice(o_71);
                                              }
                                            else
                                              {
                                                t = k_71;
                                                {
                                                  ATerm p_71 = t;
                                                  int r_71 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(i_28, j_28, k_28, t);
                                                      LocalPopChoice(r_71);
                                                    }
                                                  else
                                                    {
                                                      t = p_71;
                                                      {
                                                        ATerm s_71 = t;
                                                        int t_71 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(m_28, o_28, r_28, t);
                                                            LocalPopChoice(t_71);
                                                          }
                                                        else
                                                          {
                                                            t = s_71;
                                                            {
                                                              ATerm w_71 = t;
                                                              int a_72 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(s_28, z_28, b_29, t);
                                                                  LocalPopChoice(a_72);
                                                                }
                                                              else
                                                                {
                                                                  t = w_71;
                                                                  {
                                                                    ATerm b_72 = t;
                                                                    int g_72 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(c_29, e_29, g_29, t);
                                                                        LocalPopChoice(g_72);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_72;
                                                                        {
                                                                          ATerm k_72 = t;
                                                                          int o_72 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(h_29, i_29, j_29, t);
                                                                              LocalPopChoice(o_72);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_72;
                                                                              {
                                                                                ATerm p_72 = t;
                                                                                int q_72 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(k_29, l_29, m_29, t);
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
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(s_72);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_72;
                                                                                          {
                                                                                            ATerm t_72 = t;
                                                                                            int b_73 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(n_29, o_29, q_29, t);
                                                                                                LocalPopChoice(b_73);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_72;
                                                                                                {
                                                                                                  ATerm c_73 = t;
                                                                                                  int d_73 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(r_29, t_29, u_29, t);
                                                                                                      LocalPopChoice(d_73);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_73;
                                                                                                      {
                                                                                                        ATerm e_73 = t;
                                                                                                        int j_73 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(v_29, w_29, y_29, t);
                                                                                                            LocalPopChoice(j_73);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_73;
                                                                                                            {
                                                                                                              ATerm s_73 = t;
                                                                                                              int t_73 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(z_29, a_30, b_30, t);
                                                                                                                  LocalPopChoice(t_73);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_73;
                                                                                                                  {
                                                                                                                    ATerm u_73 = t;
                                                                                                                    int v_73 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(c_30, e_30, f_30, t);
                                                                                                                        LocalPopChoice(v_73);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = u_73;
                                                                                                                        {
                                                                                                                          ATerm a_74 = t;
                                                                                                                          int l_74 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(g_30, m_30, o_30, t);
                                                                                                                              LocalPopChoice(l_74);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_74;
                                                                                                                              t = Option_3_0(r_30, s_30, u_30, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_75), term_c_61), term_x_75), term_w_75), term_v_75), term_c_61), term_u_75), term_t_75), term_s_75), term_r_75), term_a_75), term_x_74), term_u_74), term_q_74), term_m_74);
  return(t);
}
ATerm map_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm j_76 (ATerm t)
  {
    ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
    g_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_76;
      }
    else
      {
        ATerm f_40 = NULL,i_40 = NULL,j_40 = NULL,e_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_76 = ATgetFirst((ATermList) t);
            i_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_76);
        f_40 = t;
        t = h_76;
        t = v_87(t);
        i_40 = t;
        t = i_76;
        t = j_76(t);
        j_40 = t;
        t = (ATerm) ATinsert(CheckATermList(j_40), i_40);
        e_17 = t;
        t = SSLsetAnnotations(e_17, f_40);
      }
    return(t);
  }
  t = j_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_76 = ATgetFirst((ATermList) t);
      n_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_76 = NULL,s_76 = NULL;
        static ATerm w_30 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_76)), not_null(s_76));
          return(t);
        }
        t = n_76;
        t = k_0(t);
        if(((r_76 != NULL) && (r_76 != t)))
          _fail(t);
        else
          r_76 = t;
        t = m_76;
        t = i_0(t);
        if(((s_76 != NULL) && (s_76 != t)))
          _fail(t);
        else
          s_76 = t;
        t = n_76;
        t = reverse_acc_2_0(i_0, w_30, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_33;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_76 = NULL;
  t = term_x_33;
  t = g_0(t);
  t_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_76), t_76), term_d_76), term_c_61), term_c_76), term_c_61), term_b_76), term_a_76), term_c_61), term_z_75);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm g_77 = NULL;
  g_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_77), term_f_76);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  ATerm k_76 = t;
  int l_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_76;
      t = get_config_0_0(t);
      x_76 = t;
      LocalPopChoice(l_76);
    }
  else
    {
      t = k_76;
      {
        static ATerm b_31 (ATerm t)
        {
          ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,g_17 = NULL;
          c_77 = t;
          if(match_cons(t, sym_Program_1))
            {
              b_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_77);
          a_77 = t;
          t = b_77;
          if(((x_76 != NULL) && (x_76 != t)))
            _fail(t);
          else
            x_76 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, b_77);
          g_17 = t;
          t = SSLsetAnnotations(g_17, a_77);
          return(t);
        }
        t = fetch_1_0(b_31, t);
      }
    }
  {
    ATerm p_76 = t;
    int q_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_31 (ATerm t)
        {
          t = not_null(x_76);
          return(t);
        }
        t = short_description_1_0(e_31, t);
        t = echo_0_0(t);
        LocalPopChoice(q_76);
      }
    else
      {
        t = p_76;
      }
  }
  t = term_u_76;
  t = echo_0_0(t);
  t = term_y_66;
  y_76 = t;
  t = term_z_66;
  z_76 = t;
  t = term_v_76;
  t = v_13(y_76, z_76, t);
  t = reverse_acc_2_0(_id, g_31, t);
  t = map_1_0(k_31, t);
  {
    ATerm w_76 = t;
    int d_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_77 = NULL;
        static ATerm l_31 (ATerm t)
        {
          t = not_null(x_76);
          return(t);
        }
        t = long_description_1_0(l_31, t);
        h_77 = t;
        t = (ATerm) ATinsert(CheckATermList(h_77), term_c_61);
        t = echo_0_0(t);
        LocalPopChoice(d_77);
      }
    else
      {
        t = w_76;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  static ATerm m_78 (ATerm t)
  {
    ATerm h_78 = NULL,i_78 = NULL,l_78 = NULL;
    h_78 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_78 = ATgetFirst((ATermList) t);
        l_78 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_77 = t;
      int f_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_40 = NULL,f_41 = NULL,k_17 = NULL;
          t = SSLgetAnnotations(h_78);
          z_40 = t;
          t = i_78;
          t = f_88(t);
          f_41 = t;
          t = (ATerm) ATinsert(CheckATermList(l_78), f_41);
          k_17 = t;
          t = SSLsetAnnotations(k_17, z_40);
          LocalPopChoice(f_77);
        }
      else
        {
          t = e_77;
          {
            ATerm x_41 = NULL,b_42 = NULL,l_17 = NULL;
            t = SSLgetAnnotations(h_78);
            x_41 = t;
            t = l_78;
            t = m_78(t);
            b_42 = t;
            t = (ATerm) ATinsert(CheckATermList(b_42), i_78);
            l_17 = t;
            t = SSLsetAnnotations(l_17, x_41);
          }
        }
    }
    return(t);
  }
  t = m_78(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_78 = NULL,t_78 = NULL,u_78 = NULL;
  s_78 = t;
  {
    ATerm i_77 = t;
    int j_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_77 = ATgetFirst((ATermList) t);
                ATerm l_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_78;
          }
        LocalPopChoice(j_77);
      }
    else
      {
        t = i_77;
        t = (ATerm) ATinsert(ATempty, s_78);
      }
  }
  t_78 = t;
  t = term_f_34;
  u_78 = t;
  t = SSL_printnl(u_78, t_78);
  t = s_78;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_76;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  t = term_m_77;
  y_78 = t;
  t = term_x_33;
  z_78 = t;
  t = term_n_77;
  t = y_13(y_78, z_78, t);
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_o_77;
  return(t);
}
static ATerm r_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_31 (ATerm t)
{
  ATerm a_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
  t = term_m_77;
  f_79 = t;
  t = term_x_33;
  g_79 = t;
  t = term_n_77;
  t = y_13(f_79, g_79, t);
  t = term_a_70;
  a_79 = t;
  t = term_x_33;
  e_79 = t;
  t = term_b_70;
  t = y_13(a_79, e_79, t);
  t = term_p_77;
  return(t);
}
static ATerm v_31 (ATerm t)
{
  t = term_q_77;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_77 = t;
  int s_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_31, n_31, p_31, t);
      LocalPopChoice(s_77);
    }
  else
    {
      t = r_77;
      t = Option_3_0(r_31, u_31, v_31, t);
    }
  return(t);
}
static ATerm v_13 (ATerm g_53, ATerm h_53, ATerm t)
{
  t = SSL_table_get(g_53, h_53);
  return(t);
}
static ATerm w_13 (ATerm p_51, ATerm q_51, ATerm o_51, ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
  {
    ATerm t_77 = t;
    int u_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_77 = ATgetArgument(t, 0);
            ATerm w_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
        t = v_13(p_51, q_51, t);
        LocalPopChoice(u_77);
      }
    else
      {
        t = t_77;
        t = (ATerm) ATempty;
      }
  }
  j_79 = t;
  t = (ATerm) ATinsert(CheckATermList(j_79), o_51);
  k_79 = t;
  t = SSL_table_put(p_51, q_51, k_79);
  t = i_79;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_79 = NULL,t_79 = NULL,v_79 = NULL;
      t = term_x_33;
      t = e_0(t);
      s_79 = t;
      t = term_y_66;
      t_79 = t;
      t = term_z_66;
      v_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_66, term_z_66, s_79);
      t = w_13(t_79, v_79, s_79, t);
      _fail(t);
    }
  else
    {
      ATerm y_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_79 = ATgetFirst((ATermList) t);
          r_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_79;
      t = c_0(t);
      t = term_x_33;
      t = d_0(t);
      y_79 = t;
      t = (ATerm) ATinsert(CheckATermList(r_79), y_79);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,e_80 = NULL,h_80 = NULL,i_80 = NULL,u_17 = NULL;
  i_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_80 = ATgetFirst((ATermList) t);
      b_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_80);
  z_79 = t;
  t = a_80;
  t = k_58(t);
  e_80 = t;
  t = b_80;
  t = l_58(t);
  h_80 = t;
  t = (ATerm) ATinsert(CheckATermList(h_80), e_80);
  u_17 = t;
  t = SSLsetAnnotations(u_17, z_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm t_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,d_81 = NULL,f_81 = NULL,w_17 = NULL;
  t_80 = t;
  {
    ATerm x_77 = t;
    int y_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_77;
        t = d_107(t);
        LocalPopChoice(y_77);
      }
    else
      {
        t = x_77;
      }
  }
  t = t_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_80 = ATgetFirst((ATermList) t);
      z_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_80);
  x_80 = t;
  t = term_o_76;
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_76, y_80);
  t = y_13(f_81, y_80, t);
  t = z_80;
  {
    static ATerm y_81 (ATerm t)
    {
      ATerm a_78 = t;
      int b_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_78 = t;
          int d_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_81 = NULL;
              p_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_81;
              LocalPopChoice(d_78);
            }
          else
            {
              t = c_78;
              t = d_107(t);
              t = Cons_2_0(_id, y_81, t);
            }
          LocalPopChoice(b_78);
        }
      else
        {
          t = a_78;
          {
            ATerm s_81 = NULL,t_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_81 = ATgetFirst((ATermList) t);
                t_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_81), (ATerm) ATmakeAppl(sym_Undefined_1, s_81));
          }
        }
      return(t);
    }
    t = y_81(t);
  }
  d_81 = t;
  t = (ATerm) ATinsert(CheckATermList(d_81), (ATerm) ATmakeAppl(sym_Program_1, y_80));
  w_17 = t;
  t = SSLsetAnnotations(w_17, x_80);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm u_82 = NULL;
  u_82 = t;
  if(match_string(t, "--help"))
    {
      t = u_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_82;
        }
    }
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL;
  t = term_p_69;
  w_82 = t;
  t = term_x_33;
  x_82 = t;
  t = term_r_69;
  t = y_13(w_82, x_82, t);
  t = term_e_78;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_f_78;
  return(t);
}
static ATerm b_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  k_82 = t;
  t = term_y_66;
  o_82 = t;
  t = term_z_66;
  p_82 = t;
  t = (ATerm) ATempty;
  q_82 = t;
  t = SSL_table_put(o_82, p_82, q_82);
  t = k_82;
  {
    static ATerm w_31 (ATerm t)
    {
      ATerm g_78 = t;
      int j_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_107(t);
          LocalPopChoice(j_78);
        }
      else
        {
          t = g_78;
          {
            ATerm k_78 = t;
            int n_78 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_31, y_31, a_32, t);
                LocalPopChoice(n_78);
              }
            else
              {
                t = k_78;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_31, t);
  }
  {
    ATerm o_78 = t;
    int p_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_83 = NULL;
        g_83 = t;
        {
          ATerm q_78 = t;
          int r_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_42 = NULL;
              t = g_83;
              {
                ATerm v_78 = t;
                int w_78 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_p_69;
                    t = get_config_0_0(t);
                    LocalPopChoice(w_78);
                  }
                else
                  {
                    t = v_78;
                    t = fetch_1_0(b_32, t);
                  }
              }
              t = g_83;
              t = default_system_usage_0_0(t);
              t = term_l_32;
              k_42 = t;
              t = SSL_exit(k_42);
              LocalPopChoice(r_78);
            }
          else
            {
              t = q_78;
              {
                ATerm z_42 = NULL;
                t = term_m_77;
                t = get_config_0_0(t);
                t = g_83;
                t = default_system_about_0_0(t);
                t = term_l_32;
                z_42 = t;
                t = SSL_exit(z_42);
              }
            }
        }
        LocalPopChoice(p_78);
      }
    else
      {
        t = o_78;
        {
          ATerm x_78 = t;
          int h_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_83 = NULL,q_83 = NULL,r_83 = NULL;
              static ATerm c_32 (ATerm t)
              {
                ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,f_18 = NULL;
                v_83 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_83);
                t_83 = t;
                t = u_83;
                if(((i_82 != NULL) && (i_82 != t)))
                  _fail(t);
                else
                  i_82 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_83);
                f_18 = t;
                t = SSLsetAnnotations(f_18, t_83);
                return(t);
              }
              t = fetch_1_0(c_32, t);
              t = term_u_32;
              q_83 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_82)), term_l_79);
              r_83 = t;
              t = SSL_printnl(q_83, r_83);
              t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_82)), term_l_79));
              t = default_system_usage_0_0(t);
              t = term_r_35;
              l_83 = t;
              t = SSL_exit(l_83);
              LocalPopChoice(h_79);
            }
          else
            {
              t = x_78;
            }
        }
      }
  }
  j_82 = t;
  t = term_y_66;
  l_82 = t;
  t = SSL_table_destroy(l_82);
  t = j_82;
  return(t);
}
static ATerm y_13 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm g_84 = NULL;
  t = term_i_59;
  g_84 = t;
  t = SSL_table_put(g_84, p_46, q_46);
  t = (ATerm) ATmakeAppl(sym__3, term_i_59, p_46, q_46);
  return(t);
}
static ATerm z_13 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  n_84 = t;
  t = SSL_explode_string(n_84);
  {
    ATerm m_79 = t;
    int n_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_85 (ATerm t)
        {
          ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
          n_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_85 = ATgetFirst((ATermList) t);
              p_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm o_79 = t;
            int p_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_43 = NULL,q_43 = NULL,n_18 = NULL;
                t = SSLgetAnnotations(n_85);
                h_43 = t;
                t = p_85;
                t = r_85(t);
                q_43 = t;
                t = (ATerm) ATinsert(CheckATermList(q_43), o_85);
                n_18 = t;
                t = SSLsetAnnotations(n_18, h_43);
                LocalPopChoice(p_79);
              }
            else
              {
                t = o_79;
                {
                  ATerm c_44 = NULL,o_18 = NULL;
                  t = SSLgetAnnotations(n_85);
                  c_44 = t;
                  t = o_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, o_85);
                  o_18 = t;
                  t = SSLsetAnnotations(o_18, c_44);
                }
              }
          }
          return(t);
        }
        t = r_85(t);
        LocalPopChoice(n_79);
      }
    else
      {
        t = m_79;
        t = (ATerm) ATempty;
      }
  }
  m_84 = t;
  t = SSL_implode_string(m_84);
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
  ATerm m_86 = NULL,o_86 = NULL,p_86 = NULL,r_86 = NULL,b_87 = NULL,c_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,z_87 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,i_89 = NULL,j_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  m_86 = t;
  t = term_y_60;
  q_89 = t;
  t = term_u_79;
  r_89 = t;
  t = term_w_79;
  t = y_13(q_89, r_89, t);
  t = term_q_32;
  o_89 = t;
  t = term_r_35;
  p_89 = t;
  t = term_x_79;
  t = y_13(o_89, p_89, t);
  t = term_r_37;
  m_89 = t;
  t = term_l_32;
  n_89 = t;
  t = term_c_80;
  t = y_13(m_89, n_89, t);
  t = term_x_37;
  i_89 = t;
  t = term_a_39;
  j_89 = t;
  t = term_d_80;
  t = y_13(i_89, j_89, t);
  t = term_l_80;
  t = xtc_find_path_0_0(t);
  b_88 = t;
  t = term_m_80;
  t = xtc_find_path_0_0(t);
  c_88 = t;
  t = term_n_80;
  t = xtc_find_path_0_0(t);
  d_88 = t;
  t = term_d_54;
  f_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_88), term_d_54), c_88), term_d_54), b_88), term_d_54);
  g_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_54, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_88), term_d_54), c_88), term_d_54), b_88), term_d_54));
  t = y_13(f_89, g_89, t);
  t = term_u_34;
  d_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_80), term_o_80);
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, (ATerm) ATinsert(ATinsert(ATempty, term_p_80), term_o_80));
  t = y_13(d_89, e_89, t);
  t = term_q_80;
  t = xtc_find_path_0_0(t);
  z_87 = t;
  t = term_r_80;
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_87, term_r_80);
  t = z_13(z_87, b_89, t);
  c_87 = t;
  t = term_q_80;
  t = xtc_find_path_0_0(t);
  s_87 = t;
  t = term_r_80;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_87, term_r_80);
  t = z_13(s_87, a_89, t);
  p_87 = t;
  t = term_s_80;
  t = xtc_find_path_0_0(t);
  r_87 = t;
  t = term_r_80;
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_87, term_r_80);
  t = z_13(r_87, z_88, t);
  q_87 = t;
  t = term_h_33;
  r_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_87), term_d_54), p_87), term_d_54), c_87), term_d_54);
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_87), term_d_54), p_87), term_d_54), c_87), term_d_54));
  t = y_13(r_88, y_88, t);
  t = term_q_80;
  t = xtc_find_path_0_0(t);
  b_87 = t;
  t = term_u_80;
  q_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_87, term_u_80);
  t = z_13(b_87, q_88, t);
  o_86 = t;
  t = term_s_80;
  t = xtc_find_path_0_0(t);
  r_86 = t;
  t = term_v_80;
  p_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, term_v_80);
  t = z_13(r_86, p_88, t);
  p_86 = t;
  t = term_c_33;
  k_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_81), term_c_81), p_86), term_w_80), term_b_81), term_a_81), o_86), term_w_80);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_81), term_c_81), p_86), term_w_80), term_b_81), term_a_81), o_86), term_w_80));
  t = y_13(k_88, o_88, t);
  t = term_n_50;
  i_88 = t;
  t = (ATerm) ATinsert(ATempty, term_g_81);
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, term_g_81));
  t = y_13(i_88, j_88, t);
  t = m_86;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  ATerm q_90 = NULL;
  q_90 = t;
  t = term_k_50;
  t = get_config_0_0(t);
  t = debug_1_0(f_32, t);
  t = q_90;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  t = term_h_81;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm i_81 = t;
    int j_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
        t = term_w_69;
        t = get_config_0_0(t);
        t = term_k_81;
        t = xtc_find_0_0(t);
        u_89 = t;
        t = term_f_34;
        w_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_89, term_f_34);
        t = h_13(u_89, w_89, t);
        t = term_l_32;
        v_89 = t;
        t = SSL_exit(v_89);
        LocalPopChoice(j_81);
      }
    else
      {
        t = i_81;
      }
  }
  {
    ATerm l_81 = t;
    int m_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_89 = NULL;
        t = term_a_70;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = term_l_32;
        z_89 = t;
        t = SSL_exit(z_89);
        LocalPopChoice(m_81);
      }
    else
      {
        t = l_81;
      }
  }
  {
    ATerm n_81 = t;
    int o_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_90 = NULL;
        g_90 = t;
        t = term_k_50;
        t = get_config_0_0(t);
        t = g_90;
        LocalPopChoice(o_81);
      }
    else
      {
        t = n_81;
        {
          ATerm i_90 = NULL,j_90 = NULL,n_90 = NULL;
          t = term_u_32;
          j_90 = t;
          t = (ATerm) ATinsert(ATempty, term_q_81);
          n_90 = t;
          t = SSL_printnl(j_90, n_90);
          t = term_r_35;
          i_90 = t;
          t = SSL_exit(i_90);
          t = (ATerm) ATinsert(ATempty, term_q_81);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(d_32, t);
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = if_verbose1_1_0(i_32, t);
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = xtc_temp_files_1_0(j_32, t);
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
  w_90 = t;
  t = term_u_32;
  x_90 = t;
  t = (ATerm) ATinsert(CheckATermList(w_90), term_r_81);
  y_90 = t;
  t = SSL_printnl(x_90, y_90);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(CheckATermList(w_90), term_r_81));
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm u_81 = t;
  int v_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_90 = NULL;
      t = term_k_50;
      t = get_config_0_0(t);
      z_90 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_90);
      LocalPopChoice(v_81);
    }
  else
    {
      t = u_81;
      t = term_k_52;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm k_32 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL;
  t = run_time_0_0(t);
  c_91 = t;
  t = term_u_32;
  d_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_81), c_91), term_w_81);
  e_91 = t;
  t = SSL_printnl(d_91, e_91);
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_81), c_91), term_w_81));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm z_81 = t;
  int a_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_90 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(g_32, h_32, t);
      t = if_verbose2_1_0(k_32, t);
      t = term_l_32;
      t_90 = t;
      t = SSL_exit(t_90);
      LocalPopChoice(a_82);
    }
  else
    {
      t = z_81;
      {
        ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
        t = run_time_0_0(t);
        i_91 = t;
        t = term_u_32;
        k_91 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_81), i_91), term_b_82);
        l_91 = t;
        t = SSL_printnl(k_91, l_91);
        t = term_r_35;
        j_91 = t;
        t = SSL_exit(j_91);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
