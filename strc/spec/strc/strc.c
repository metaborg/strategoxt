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
ATerm term_w_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_i_81;
ATerm term_h_81;
ATerm term_c_81;
ATerm term_z_80;
ATerm term_v_80;
ATerm term_s_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_j_80;
ATerm term_f_80;
ATerm term_b_80;
ATerm term_a_80;
ATerm term_z_79;
ATerm term_y_79;
ATerm term_x_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_f_79;
ATerm term_p_78;
ATerm term_o_78;
ATerm term_j_78;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_o_77;
ATerm term_y_76;
ATerm term_v_76;
ATerm term_s_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_m_76;
ATerm term_l_76;
ATerm term_g_75;
ATerm term_f_75;
ATerm term_x_74;
ATerm term_w_74;
ATerm term_f_74;
ATerm term_c_74;
ATerm term_z_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_l_70;
ATerm term_j_70;
ATerm term_i_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_z_69;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_z_68;
ATerm term_w_68;
ATerm term_u_68;
ATerm term_r_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_m_68;
ATerm term_j_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_k_67;
ATerm term_i_67;
ATerm term_g_67;
ATerm term_z_66;
ATerm term_w_66;
ATerm term_u_66;
ATerm term_n_66;
ATerm term_k_66;
ATerm term_i_66;
ATerm term_g_66;
ATerm term_w_65;
ATerm term_s_65;
ATerm term_k_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_r_64;
ATerm term_o_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_h_64;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_i_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_y_62;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_n_61;
ATerm term_l_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_n_58;
ATerm term_v_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_l_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_x_56;
ATerm term_c_56;
ATerm term_g_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_n_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_g_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_z_53;
ATerm term_i_53;
ATerm term_x_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_g_52;
ATerm term_e_52;
ATerm term_z_51;
ATerm term_v_51;
ATerm term_s_51;
ATerm term_i_51;
ATerm term_d_51;
ATerm term_b_51;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_l_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_e_50;
ATerm term_b_50;
ATerm term_u_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_m_48;
ATerm term_l_48;
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
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
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
ATerm term_c_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_q_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_d_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_g_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_n_41;
ATerm term_d_41;
ATerm term_b_41;
ATerm term_s_40;
ATerm term_q_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_i_39;
ATerm term_e_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_w_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_b_35;
ATerm term_n_34;
ATerm term_l_34;
ATerm term_f_34;
ATerm term_y_33;
ATerm term_t_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_43, term_k_35, term_t_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_43, term_k_32, term_w_43);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_43, term_a_36, term_z_43);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_44, term_u_38, term_c_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_44, term_g_44, term_h_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_44, term_k_44, term_o_44);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_44, term_r_44, term_u_44);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_44, term_x_44, term_y_44);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_45, term_b_45, term_d_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_45, term_h_45, term_j_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_45, term_n_45, term_o_45);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_45, term_q_38, term_r_45);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_45, term_u_45, term_v_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_45, term_y_45, term_z_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_46, term_c_46, term_d_46);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_46, term_g_46, term_h_46);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_46, term_k_46, term_l_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_46, term_q_46, term_x_46);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_46, term_a_47, term_b_47);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_47, term_e_47, term_f_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_47, term_i_47, term_j_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_47, term_m_47, term_n_47);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_47, term_s_47, term_t_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_47, term_w_47, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_i_38, term_a_48);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_48, term_d_48, term_e_48);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_48, term_m_48, term_o_48);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_49, term_g_49, term_i_49);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym__2, term_g_52, term_i_51);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(sym__2, term_s_63, term_m_64);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym__2, term_s_63, term_t_63);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_e_32);
  ATprotect(&(term_n_66));
  term_n_66 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_32);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym__2, term_z_66, term_f_33);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_f_33);
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_f_33);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(sym__2, term_c_54, term_f_33);
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(sym__2, term_l_50, term_f_33);
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_f_33);
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(sym__2, term_i_69, term_f_33);
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(sym__2, term_u_69, term_f_33);
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(sym__2, term_x_69, term_f_33);
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym__2, term_x_50, term_k_35);
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(sym__2, term_y_50, term_e_32);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym__2, term_k_54, term_f_33);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(sym__2, term_g_66, term_i_66);
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(sym__2, term_o_77, term_f_33);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(sym__2, term_c_61, term_o_79);
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_k_35);
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(sym__2, term_q_37, term_e_32);
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_u_38);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_b_80));
  term_b_80 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_h_81));
  term_h_81 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm t);
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
static ATerm t_12 (ATerm u_42, ATerm t_42, ATerm t);
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
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
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
ATerm if_keep1_1_0 (ATerm k_103 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm o_103 (ATerm), ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm n_103 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm p_103 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
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
static ATerm r_11 (ATerm t);
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
static ATerm s_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm save_as_1_0 (ATerm b_79 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm l_103 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t);
static ATerm x_12 (ATerm q_47, ATerm r_47, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm x_20, ATerm y_20, ATerm t);
ATerm foldr_3_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t);
static ATerm n_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm m_103 (ATerm), ATerm t);
static ATerm u_12 (ATerm a_79 (ATerm), ATerm d_21, ATerm t);
static ATerm v_12 (ATerm x_22, ATerm y_22, ATerm t);
static ATerm w_12 (ATerm k_87 (ATerm), ATerm c_188, ATerm f_23, ATerm t);
static ATerm z_12 (ATerm g_100 (ATerm), ATerm b_42, ATerm z_41, ATerm t);
static ATerm a_35 (ATerm m_34, ATerm t);
static ATerm c_35 (ATerm o_34, ATerm p_34, ATerm q_34, ATerm t);
static ATerm i_19 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm c_112 (ATerm), ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm c_20 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm z_78 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm k_102 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm v_97 (ATerm), ATerm t);
static ATerm f_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm a_13 (ATerm z_20, ATerm t);
static ATerm q_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm z_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm k_24 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm b_13 (ATerm t_51, ATerm u_51, ATerm t);
ATerm end_scope_1_0 (ATerm d_100 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_100 (ATerm), ATerm t);
static ATerm o_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm s_24 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t);
static ATerm d_13 (ATerm n_40, ATerm o_40, ATerm t);
static ATerm f_13 (ATerm t_40, ATerm u_40, ATerm t);
static ATerm g_13 (ATerm q_48, ATerm s_48, ATerm u_48, ATerm w_48, ATerm r_48, ATerm t_48, ATerm v_48, ATerm x_48, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_87 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm h_13 (ATerm v_42, ATerm w_42, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm k_13 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm y_28, ATerm x_28, ATerm t);
static ATerm l_13 (ATerm x_91 (ATerm), ATerm u_28, ATerm t_28, ATerm t);
static ATerm b_25 (ATerm t);
static ATerm m_13 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t);
static ATerm n_13 (ATerm e_107 (ATerm), ATerm v_52, ATerm u_52, ATerm t);
static ATerm r_13 (ATerm m_37, ATerm n_37, ATerm t);
static ATerm z_63 (ATerm o_63, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_13 (ATerm d_23, ATerm t);
static ATerm p_13 (ATerm u_37, ATerm v_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_65 (ATerm n_64, ATerm t);
static ATerm z_65 (ATerm t_64, ATerm u_64, ATerm v_64, ATerm t);
static ATerm a_66 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm t);
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
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_95 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm b_70 (ATerm f_69, ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm s_13 (ATerm u_46, ATerm t_46, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm f_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm t_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_13 (ATerm r_46, ATerm s_46, ATerm t);
ATerm at_end_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_73 (ATerm p_72, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_13 (ATerm v_46, ATerm w_46, ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm n_27 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm o_27 (ATerm t);
static ATerm p_27 (ATerm t);
static ATerm q_27 (ATerm t);
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
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm k_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm l_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm v_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm a_30 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm c_30 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm f_30 (ATerm t);
static ATerm g_30 (ATerm t);
static ATerm k_30 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm m_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm p_30 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm u_30 (ATerm t);
static ATerm v_30 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm c_31 (ATerm t);
static ATerm f_31 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_13 (ATerm f_53, ATerm g_53, ATerm t);
static ATerm w_13 (ATerm o_51, ATerm p_51, ATerm n_51, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm j_31 (ATerm t);
static ATerm m_31 (ATerm t);
static ATerm p_31 (ATerm t);
static ATerm q_31 (ATerm t);
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm t);
static ATerm y_13 (ATerm o_46, ATerm p_46, ATerm t);
static ATerm z_13 (ATerm m_36, ATerm n_36, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm t_31 (ATerm t);
static ATerm x_31 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = w_93(t);
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
      t = foldr_2_0(w_93, x_93, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = x_93(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_e_32;
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
      ATerm f_32 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  {
    ATerm g_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_k_32);
        t = geq_0_0(t);
        t = f_1;
        t = j_102(t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = g_32;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  t = term_l_32;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_m_32);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = q_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  t = term_l_32;
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
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_32;
        t = get_config_0_0(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = get_outfile_1_0(g_1, t);
      }
  }
  m_1 = t;
  t = term_r_32;
  t = get_config_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_1), m_1), term_q_32), k_21));
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
      t = term_u_32;
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
  t = term_l_32;
  l_2 = t;
  t = (ATerm) ATinsert(ATempty, term_v_32);
  m_2 = t;
  t = SSL_printnl(l_2, m_2);
  t = k_2;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  t = term_l_32;
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
  t = term_x_32;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_q_32), i_21), term_y_32));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, c_2);
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
      t = term_u_32;
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
  t = term_l_32;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_2), term_z_32);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(w_2), term_z_32));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      s_2 = t;
      t = term_y_32;
      t = get_config_0_0(t);
      t = s_2;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
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
static ATerm t_12 (ATerm u_42, ATerm t_42, ATerm t)
{
  ATerm c_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(u_42, t_42);
      LocalPopChoice(e_33);
    }
  else
    {
      t = c_33;
      t = get_errno_0_0(t);
      t = term_f_33;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, u_42, t_42);
      t = h_13(u_42, t_42, t);
      t = SSL_remove(u_42);
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
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = t_3;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_j_33;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, term_j_33);
        t = h_13(u_3, t_1, t);
        t = SSL_remove(u_3);
        t = term_j_33;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = t_3;
              t = x_0(t);
              i_2 = t;
              {
                ATerm m_33 = t;
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
                    t = m_33;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_3, i_2);
              t = t_12(u_3, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
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
  t = term_o_33;
  y_3 = t;
  t = term_p_33;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_t_33);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_y_33);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = term_f_34;
  d_4 = t;
  t = l_4;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = get_config_0_0(t);
        t = l_4;
        LocalPopChoice(j_34);
        t = (ATerm) ATinsert(ATempty, term_l_34);
      }
    else
      {
        t = i_34;
        t = (ATerm) ATempty;
      }
  }
  j_4 = t;
  t = term_y_33;
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
  t = term_l_32;
  b_5 = t;
  t = (ATerm) ATinsert(ATempty, term_n_34);
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
  ATerm g_5 = NULL,j_5 = NULL,k_5 = NULL;
  k_5 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_5 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(k_5);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_5);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_5;
          }
        LocalPopChoice(s_34);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = r_34;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
  }
  t = if_keep1_1_0(j_3, t);
  t = olevel_2_0(l_3, m_3, t);
  t = olevel_2_0(v_4, w_4, t);
  j_5 = t;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_6 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(j_5);
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
            t = j_5;
          }
        LocalPopChoice(u_34);
        t = xtc_transform_file_2_0(h_5, i_5, t);
      }
    else
      {
        t = t_34;
        t = xtc_transform_term_2_0(r_5, c_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  g_5 = t;
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_7 = ATgetArgument(t, 0);
            {
              ATerm p_4 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(g_5);
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
            t = g_5;
          }
        LocalPopChoice(y_34);
        t = xtc_transform_file_2_0(m_6, pass_verbose_0_0, t);
      }
    else
      {
        t = x_34;
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
  t = term_l_32;
  e_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_b_35);
  f_5 = t;
  t = SSL_printnl(e_5, f_5);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(d_5), term_b_35));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm s_5 = NULL;
  t = pass_verbose_0_0(t);
  s_5 = t;
  t = (ATerm) ATinsert(CheckATermList(s_5), term_h_35);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_5 = NULL;
  t = pass_verbose_0_0(t);
  u_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_5), term_h_35);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_j_35;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  w_5 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
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
        LocalPopChoice(m_35);
        t = xtc_transform_file_2_0(p_3, s_3, t);
      }
    else
      {
        t = l_35;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(a_4, t);
  v_5 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
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
        LocalPopChoice(p_35);
        t = xtc_transform_file_2_0(f_4, i_4, t);
      }
    else
      {
        t = o_35;
        t = xtc_transform_term_2_0(n_4, o_4, t);
      }
  }
  t = if_keep1_1_0(q_4, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_h_35);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_h_35);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = save_as_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_h_35);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_h_35);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = save_as_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_a_36;
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
  t = term_b_36;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_h_35);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_h_35);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = get_outfile_1_0(r_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(v_2, c_3, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  t = term_l_32;
  d_8 = t;
  t = (ATerm) ATinsert(ATempty, term_g_36);
  e_8 = t;
  t = SSL_printnl(d_8, e_8);
  t = c_8;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  t = term_l_32;
  g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(f_8), term_h_36);
  h_8 = t;
  t = SSL_printnl(g_8, h_8);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(f_8), term_h_36));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm k_9 = NULL;
  t = pass_verbose_0_0(t);
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), term_o_36);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm l_9 = NULL;
  t = pass_verbose_0_0(t);
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(l_9), term_o_36);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL;
      a_8 = t;
      t = term_l_34;
      t = get_config_0_0(t);
      t = a_8;
      LocalPopChoice(s_36);
      {
        ATerm b_8 = NULL;
        b_8 = t;
        t = if_verbose2_1_0(s_6, t);
        {
          static ATerm u_6 (ATerm t)
          {
            ATerm i_8 = NULL,s_8 = NULL,x_8 = NULL,y_8 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
            u_4 = t;
            t = term_t_36;
            s_4 = t;
            t = (ATerm) ATinsert(ATempty, term_u_36);
            t_4 = t;
            t = u_4;
            t = comp_0_2(s_4, t_4, t);
            i_8 = t;
            {
              ATerm v_36 = t;
              int w_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_8 = NULL,a_9 = NULL;
                  t = term_y_36;
                  t = get_config_0_0(t);
                  z_8 = t;
                  t = term_z_36;
                  t = get_config_0_0(t);
                  a_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
                  {
                    ATerm b_37 = t;
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
                        t = b_37;
                      }
                  }
                  LocalPopChoice(w_36);
                }
              else
                {
                  t = v_36;
                  t = term_y_36;
                  t = get_config_0_0(t);
                  t = debug_1_0(w_6, t);
                  _fail(t);
                }
            }
            t = i_8;
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
              ATerm c_37 = t;
              int e_37 = stack_ptr;
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
                  LocalPopChoice(e_37);
                  t = xtc_transform_file_2_0(b_7, f_7, t);
                }
              else
                {
                  t = c_37;
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
            t = term_l_32;
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
      t = r_36;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm l_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_k_35);
        t = geq_0_0(t);
        t = q_9;
        t = k_103(t);
        LocalPopChoice(p_37);
      }
    else
      {
        t = l_37;
        t = q_9;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL,e_10 = NULL;
        t = y_9;
        t = h_112(t);
        c_10 = t;
        t = term_t_37;
        t = get_config_0_0(t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, c_10);
        t = geq_0_0(t);
        t = y_9;
        t = i_112(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = y_9;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_h_35);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_h_35);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_8 = NULL;
  t = pass_verbose_0_0(t);
  r_8 = t;
  t = (ATerm) ATinsert(CheckATermList(r_8), term_h_35);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm t_8 = NULL;
  t = pass_verbose_0_0(t);
  t_8 = t;
  t = (ATerm) ATinsert(CheckATermList(t_8), term_h_35);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm x_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_11;
        {
          ATerm b_38 = t;
          int c_38 = stack_ptr;
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
              LocalPopChoice(c_38);
              t = xtc_transform_file_2_0(l_7, m_7, t);
            }
          else
            {
              t = b_38;
              t = xtc_transform_term_2_0(o_7, p_7, t);
            }
        }
        LocalPopChoice(a_38);
      }
    else
      {
        t = x_37;
        t = m_11;
        {
          ATerm d_38 = t;
          int e_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  p_8 = ATgetArgument(t, 0);
                  {
                    ATerm d_9 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(m_11);
                    d_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
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
              LocalPopChoice(e_38);
              t = xtc_transform_file_2_0(q_7, r_7, t);
            }
          else
            {
              t = d_38;
              t = xtc_transform_term_2_0(t_7, u_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  {
    ATerm f_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_12 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, term_i_38);
        t = geq_0_0(t);
        t = y_11;
        t = o_103(t);
        LocalPopChoice(h_38);
      }
    else
      {
        t = f_38;
        t = y_11;
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  f_12 = t;
  t = term_j_38;
  d_12 = t;
  t = f_12;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = get_config_0_0(t);
        t = f_12;
        LocalPopChoice(l_38);
        t = (ATerm) ATinsert(ATempty, term_n_38);
      }
    else
      {
        t = k_38;
        t = (ATerm) ATempty;
      }
  }
  e_12 = t;
  t = f_12;
  t = comp_0_2(d_12, e_12, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm o_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_12 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_12, term_q_38);
        t = geq_0_0(t);
        t = i_12;
        t = n_103(t);
        LocalPopChoice(p_38);
      }
    else
      {
        t = o_38;
        t = i_12;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_u_38);
        t = geq_0_0(t);
        t = y_12;
        t = p_103(t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = y_12;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL;
  d_16 = t;
  t = term_l_32;
  e_16 = t;
  t = (ATerm) ATinsert(ATempty, term_v_38);
  g_16 = t;
  t = SSL_printnl(e_16, g_16);
  t = d_16;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = if_verbose1_1_0(k_8, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm m_16 = NULL;
  t = if_verbose3_1_0(l_8, t);
  t = olevel_2_0(q_8, u_8, t);
  t = olevel_2_0(o_9, p_9, t);
  t = olevel_2_0(f_10, h_10, t);
  m_16 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_18 = ATgetArgument(t, 0);
            {
              ATerm e_13 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(m_16);
              e_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
              p_5 = t;
              t = SSLsetAnnotations(p_5, e_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_16;
          }
        LocalPopChoice(z_38);
        t = xtc_transform_file_2_0(n_11, o_11, t);
      }
    else
      {
        t = y_38;
        t = xtc_transform_term_2_0(p_11, q_11, t);
      }
  }
  t = olevel_2_0(r_11, u_11, t);
  t = olevel_2_0(i_13, x_13, t);
  t = olevel_2_0(n_14, p_14, t);
  t = olevel_2_0(b_15, c_15, t);
  t = olevel_2_0(c_16, l_16, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  t = term_l_32;
  i_16 = t;
  t = (ATerm) ATinsert(CheckATermList(h_16), term_a_39);
  j_16 = t;
  t = SSL_printnl(i_16, j_16);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(h_16), term_a_39));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  t = term_t_37;
  t = get_config_0_0(t);
  t = debug_1_0(n_8, t);
  t = n_16;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_b_39;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_16 = ATgetArgument(t, 0);
            {
              ATerm u_9 = NULL,x_3 = NULL;
              t = SSLgetAnnotations(o_16);
              u_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_16);
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
        LocalPopChoice(d_39);
        t = xtc_transform_file_2_0(v_8, w_8, t);
      }
    else
      {
        t = c_39;
        t = xtc_transform_term_2_0(g_9, h_9, t);
      }
  }
  t = if_keep1_1_0(m_9, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm w_16 = NULL;
  t = pass_verbose_0_0(t);
  w_16 = t;
  t = (ATerm) ATinsert(CheckATermList(w_16), term_h_35);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm x_16 = NULL;
  t = pass_verbose_0_0(t);
  x_16 = t;
  t = (ATerm) ATinsert(CheckATermList(x_16), term_h_35);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = save_as_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_17;
        {
          ATerm h_39 = t;
          if((PushChoice() == 0))
            {
              t = term_i_39;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_39;
            }
        }
        t = m_17;
        {
          ATerm j_39 = t;
          int k_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_10 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  m_10 = ATgetArgument(t, 0);
                  {
                    ATerm j_11 = NULL,l_5 = NULL;
                    t = SSLgetAnnotations(m_17);
                    j_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
                    l_5 = t;
                    t = SSLsetAnnotations(l_5, j_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_17;
                }
              LocalPopChoice(k_39);
              t = xtc_transform_file_2_0(r_9, s_9, t);
            }
          else
            {
              t = j_39;
              t = xtc_transform_term_2_0(v_9, w_9, t);
            }
        }
        t = if_keep2_1_0(x_9, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = m_17;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm s_10 = NULL;
  t = pass_verbose_0_0(t);
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(s_10), term_h_35);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_n_39;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm t_10 = NULL;
  t = pass_verbose_0_0(t);
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(t_10), term_h_35);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = save_as_1_0(a_10, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL;
  r_17 = t;
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_17 = ATgetArgument(t, 0);
            {
              ATerm s_11 = NULL,m_5 = NULL;
              t = SSLgetAnnotations(r_17);
              s_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_17);
              m_5 = t;
              t = SSLsetAnnotations(m_5, s_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_17;
          }
        LocalPopChoice(r_39);
        t = xtc_transform_file_2_0(i_10, n_10, t);
      }
    else
      {
        t = q_39;
        t = xtc_transform_term_2_0(u_10, v_10, t);
      }
  }
  t = if_keep6_1_0(w_10, t);
  q_17 = t;
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_18 = ATgetArgument(t, 0);
            {
              ATerm a_12 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(q_17);
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_18);
              n_5 = t;
              t = SSLsetAnnotations(n_5, a_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_17;
          }
        LocalPopChoice(t_39);
        t = xtc_transform_file_2_0(y_10, z_10, t);
      }
    else
      {
        t = s_39;
        t = xtc_transform_term_2_0(a_11, b_11, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_11, t);
  o_17 = t;
  {
    ATerm u_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_18 = ATgetArgument(t, 0);
            {
              ATerm l_12 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(o_17);
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
            t = o_17;
          }
        LocalPopChoice(w_39);
        t = xtc_transform_file_2_0(e_11, f_11, t);
      }
    else
      {
        t = u_39;
        t = xtc_transform_term_2_0(g_11, i_11, t);
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm z_17 = NULL;
  t = pass_verbose_0_0(t);
  z_17 = t;
  t = (ATerm) ATinsert(CheckATermList(z_17), term_h_35);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_x_39;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm a_18 = NULL;
  t = pass_verbose_0_0(t);
  a_18 = t;
  t = (ATerm) ATinsert(CheckATermList(a_18), term_h_35);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = save_as_1_0(x_10, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_y_39;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm j_18 = NULL;
  t = pass_verbose_0_0(t);
  j_18 = t;
  t = (ATerm) ATinsert(CheckATermList(j_18), term_h_35);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm k_18 = NULL;
  t = pass_verbose_0_0(t);
  k_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), term_h_35);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm s_18 = NULL;
  t = pass_verbose_0_0(t);
  s_18 = t;
  t = (ATerm) ATinsert(CheckATermList(s_18), term_h_35);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm t_18 = NULL;
  t = pass_verbose_0_0(t);
  t_18 = t;
  t = (ATerm) ATinsert(CheckATermList(t_18), term_h_35);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_h_35);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm e_19 = NULL;
  t = pass_verbose_0_0(t);
  e_19 = t;
  t = (ATerm) ATinsert(CheckATermList(e_19), term_h_35);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_q_38;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  h_19 = t;
  {
    ATerm d_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_19 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,t_5 = NULL;
              t = SSLgetAnnotations(h_19);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_19);
              t_5 = t;
              t = SSLsetAnnotations(t_5, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_19;
          }
        LocalPopChoice(i_40);
        t = xtc_transform_file_2_0(v_11, w_11, t);
      }
    else
      {
        t = d_40;
        t = xtc_transform_term_2_0(x_11, z_11, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  g_19 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
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
        LocalPopChoice(k_40);
        t = xtc_transform_file_2_0(c_12, g_12, t);
      }
    else
      {
        t = j_40;
        t = xtc_transform_term_2_0(h_12, j_12, t);
      }
  }
  f_19 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
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
        LocalPopChoice(m_40);
        t = xtc_transform_file_2_0(k_12, m_12, t);
      }
    else
      {
        t = l_40;
        t = xtc_transform_term_2_0(n_12, p_12, t);
      }
  }
  t = if_keep4_1_0(q_12, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm q_19 = NULL;
  t = pass_verbose_0_0(t);
  q_19 = t;
  t = (ATerm) ATinsert(CheckATermList(q_19), term_h_35);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm r_19 = NULL;
  t = pass_verbose_0_0(t);
  r_19 = t;
  t = (ATerm) ATinsert(CheckATermList(r_19), term_h_35);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm a_20 = NULL;
  t = pass_verbose_0_0(t);
  a_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), term_h_35);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm b_20 = NULL;
  t = pass_verbose_0_0(t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), term_h_35);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_h_35);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_h_35);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = save_as_1_0(c_13, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  o_20 = t;
  {
    ATerm h_41 = t;
    int j_41 = stack_ptr;
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
        LocalPopChoice(j_41);
        t = xtc_transform_file_2_0(a_14, b_14, t);
      }
    else
      {
        t = h_41;
        t = xtc_transform_term_2_0(d_14, e_14, t);
      }
  }
  n_20 = t;
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
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
        LocalPopChoice(m_41);
        t = xtc_transform_file_2_0(f_14, h_14, t);
      }
    else
      {
        t = l_41;
        t = xtc_transform_term_2_0(i_14, j_14, t);
      }
  }
  t = if_keep2_1_0(l_14, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm g_21 = NULL;
  t = pass_verbose_0_0(t);
  g_21 = t;
  t = (ATerm) ATinsert(CheckATermList(g_21), term_h_35);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm h_21 = NULL;
  t = pass_verbose_0_0(t);
  h_21 = t;
  t = (ATerm) ATinsert(CheckATermList(h_21), term_h_35);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm u_21 = NULL;
  t = pass_verbose_0_0(t);
  u_21 = t;
  t = (ATerm) ATinsert(CheckATermList(u_21), term_h_35);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm v_21 = NULL;
  t = pass_verbose_0_0(t);
  v_21 = t;
  t = (ATerm) ATinsert(CheckATermList(v_21), term_h_35);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = save_as_1_0(m_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_r_41;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_22 = ATgetArgument(t, 0);
            {
              ATerm w_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(x_21);
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
            t = x_21;
          }
        LocalPopChoice(t_41);
        t = xtc_transform_file_2_0(q_14, r_14, t);
      }
    else
      {
        t = s_41;
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
  t = term_z_39;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_h_35);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm i_22 = NULL;
  t = pass_verbose_0_0(t);
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(i_22), term_h_35);
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
  t = term_a_36;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL;
  m_22 = t;
  {
    ATerm y_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_22 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(m_22);
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
            t = m_22;
          }
        LocalPopChoice(a_42);
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
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_23 = ATgetArgument(t, 0);
            {
              ATerm e_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(l_22);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_23);
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
        LocalPopChoice(d_42);
        t = xtc_transform_file_2_0(l_15, n_15, t);
      }
    else
      {
        t = c_42;
        t = xtc_transform_term_2_0(o_15, p_15, t);
      }
  }
  t = if_keep3_1_0(r_15, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(t_15, t);
  j_22 = t;
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
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
        LocalPopChoice(f_42);
        t = xtc_transform_file_2_0(w_15, x_15, t);
      }
    else
      {
        t = e_42;
        t = xtc_transform_term_2_0(y_15, z_15, t);
      }
  }
  t = if_keep3_1_0(a_16, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_h_35);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm z_22 = NULL;
  t = pass_verbose_0_0(t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_22), term_h_35);
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
  t = term_q_40;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm l_23 = NULL;
  t = pass_verbose_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_h_35);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_q_40;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm m_23 = NULL;
  t = pass_verbose_0_0(t);
  m_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), term_h_35);
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
  t = term_s_40;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm b_24 = NULL;
  t = pass_verbose_0_0(t);
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(b_24), term_h_35);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_s_40;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm c_24 = NULL;
  t = pass_verbose_0_0(t);
  c_24 = t;
  t = (ATerm) ATinsert(CheckATermList(c_24), term_h_35);
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
  t = term_k_35;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL;
  e_24 = t;
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_24 = ATgetArgument(t, 0);
            {
              ATerm m_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(e_24);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, m_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_24;
          }
        LocalPopChoice(p_42);
        t = xtc_transform_file_2_0(p_16, q_16, t);
      }
    else
      {
        t = o_42;
        t = xtc_transform_term_2_0(s_16, v_16, t);
      }
  }
  t = if_keep1_1_0(y_16, t);
  d_24 = t;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
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
        LocalPopChoice(s_42);
        t = xtc_transform_file_2_0(b_17, c_17, t);
      }
    else
      {
        t = r_42;
        t = xtc_transform_term_2_0(d_17, f_17, t);
      }
  }
  t = if_keep1_1_0(h_17, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm u_24 = NULL;
  t = pass_verbose_0_0(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), term_h_35);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm w_24 = NULL;
  t = pass_verbose_0_0(t);
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(w_24), term_h_35);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = save_as_1_0(z_16, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm e_25 = NULL;
  t = pass_verbose_0_0(t);
  e_25 = t;
  t = (ATerm) ATinsert(CheckATermList(e_25), term_h_35);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm f_25 = NULL;
  t = pass_verbose_0_0(t);
  f_25 = t;
  t = (ATerm) ATinsert(CheckATermList(f_25), term_h_35);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_a_43;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  t = profile_p__2_0(x_7, j_8, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm y_26 = NULL;
  t = pass_verbose_0_0(t);
  y_26 = t;
  t = (ATerm) ATinsert(CheckATermList(y_26), term_o_36);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm z_26 = NULL;
  t = pass_verbose_0_0(t);
  z_26 = t;
  t = (ATerm) ATinsert(CheckATermList(z_26), term_o_36);
  return(t);
}
ATerm save_as_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  {
    static ATerm k_17 (ATerm t)
    {
      t = get_outfile_1_0(b_79, t);
      if(((l_26 != NULL) && (l_26 != t)))
        _fail(t);
      else
        l_26 = t;
      return(t);
    }
    t = copy_to_1_0(k_17, t);
  }
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
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
        LocalPopChoice(c_43);
        t = xtc_transform_file_2_0(l_17, n_17, t);
      }
    else
      {
        t = b_43;
        t = xtc_transform_term_2_0(p_17, v_17, t);
      }
  }
  {
    static ATerm y_17 (ATerm t)
    {
      ATerm a_27 = NULL;
      t = term_d_43;
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), term_d_43);
      t = z_13(not_null(l_26), a_27, t);
      if(((n_26 != NULL) && (n_26 != t)))
        _fail(t);
      else
        n_26 = t;
      return(t);
    }
    t = copy_to_1_0(y_17, t);
  }
  t = term_l_32;
  p_26 = t;
  t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_26)), term_k_37), not_null(l_26)), term_j_37));
  q_26 = t;
  t = SSL_printnl(p_26, q_26);
  t = o_26;
  return(t);
}
ATerm if_keep2_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm d_27 = NULL;
  d_27 = t;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_27, term_k_32);
        t = geq_0_0(t);
        t = d_27;
        t = l_103(t);
        LocalPopChoice(f_43);
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
  t = term_j_32;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = term_k_35;
      }
  }
  i_27 = t;
  t = term_k_35;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_27, term_k_35);
  t = f_13(i_27, k_27, t);
  j_27 = t;
  t = SSL_int_to_string(j_27);
  h_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_27), term_j_32);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(a_112, b_112, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm x_12 (ATerm q_47, ATerm r_47, ATerm t)
{
  t = SSL_execvp(q_47, r_47);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_28 = ATgetArgument(t, 0);
      {
        ATerm f_16 = NULL,k_16 = NULL;
        t = SSL_int_to_string(f_28);
        f_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_43), f_16), term_j_43);
        k_16 = t;
        t = SSL_concat_strings(k_16);
      }
    }
  else
    {
      ATerm t_17 = NULL,u_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_28 = ATgetArgument(t, 0);
          g_28 = ATgetArgument(t, 1);
          h_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_28);
      t_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_28), term_m_43), t_17), term_l_43), f_28);
      u_17 = t;
      t = SSL_concat_strings(u_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm n_28 = NULL;
  static ATerm b_18 (ATerm t)
  {
    t = f_88(t);
    if(((n_28 != NULL) && (n_28 != t)))
      _fail(t);
    else
      n_28 = t;
    return(t);
  }
  t = fetch_1_0(b_18, t);
  t = not_null(n_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_18 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_43 = ATgetArgument(t, 0);
              if((p_28 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_43 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_49), term_p_48), term_f_48), term_b_48), term_y_47), term_u_47), term_o_47), term_k_47), term_g_47), term_c_47), term_y_46), term_m_46), term_i_46), term_e_46), term_a_46), term_w_45), term_s_45), term_p_45), term_k_45), term_e_45), term_z_44), term_v_44), term_p_44), term_i_44), term_d_44), term_a_44), term_x_43), term_u_43);
        t = fetch_elem_1_0(c_18, t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_28);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_28 = NULL,i_29 = NULL;
  w_28 = t;
  {
    ATerm k_49 = t;
    int l_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_49 = ATgetArgument(t, 0);
            i_29 = ATgetArgument(t, 1);
            {
              ATerm n_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_49);
        {
          ATerm p_49 = t;
          int r_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_18 = NULL,c_19 = NULL,d_19 = NULL;
              t = i_29;
              {
                ATerm s_49 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_49;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_18 = t;
              t = term_l_32;
              c_19 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_18), term_u_49);
              d_19 = t;
              t = SSL_printnl(c_19, d_19);
              t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, u_18), term_u_49));
              LocalPopChoice(r_49);
            }
          else
            {
              t = p_49;
              t = w_28;
            }
        }
      }
    else
      {
        t = k_49;
        t = w_28;
      }
  }
  t = w_28;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  z_29 = t;
  t = fork_0_0(t);
  y_29 = t;
  {
    ATerm v_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_29;
        t = v_103(t);
        LocalPopChoice(w_49);
      }
    else
      {
        t = v_49;
        t = SSL_waitpid(y_29);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_49 = ATgetArgument(t, 0);
            if(((ATgetType(x_49) != AT_INT) || (ATgetInt((ATermInt) x_49) != 0)))
              _fail(t);
            {
              ATerm y_49 = ATgetArgument(t, 1);
            }
            {
              ATerm z_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_29;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,h_30 = NULL;
  h_30 = t;
  t = r_111(t);
  t = xtc_find_0_0(t);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_30, h_30);
  {
    static ATerm e_18 (ATerm t)
    {
      ATerm i_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_30, h_30);
      t = x_12(e_30, h_30, t);
      t = term_u_32;
      i_30 = t;
      t = SSL_exit(i_30);
      return(t);
    }
    t = fork_and_wait_1_0(e_18, t);
  }
  t = h_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_19 = NULL,w_19 = NULL;
      t = d_31;
      t = xtc_new_file_0_0(t);
      p_19 = t;
      t = t_0(t);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_19, (ATerm) ATinsert(ATinsert(ATempty, p_19), term_q_32));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(p_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_19);
    }
  else
    {
      ATerm l_20 = NULL,m_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_31;
      t = xtc_new_file_0_0(t);
      l_20 = t;
      t = t_0(t);
      m_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_20), term_q_32), e_31), term_b_50));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(l_20);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
    }
  return(t);
}
ATerm comp_0_2 (ATerm x_20, ATerm y_20, ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_40 = NULL,f_40 = NULL;
      f_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm g_26 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(f_40);
            g_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, e_40);
            m_8 = t;
            t = SSLsetAnnotations(m_8, g_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_40;
        }
      LocalPopChoice(d_50);
      {
        static ATerm f_18 (ATerm t)
        {
          t = x_20;
          return(t);
        }
        static ATerm g_18 (ATerm t)
        {
          ATerm g_40 = NULL;
          t = pass_verbose_0_0(t);
          g_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_20), g_40), (ATerm) ATinsert(ATempty, term_h_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(f_18, g_18, t);
      }
    }
  else
    {
      t = c_50;
      {
        static ATerm i_18 (ATerm t)
        {
          t = x_20;
          return(t);
        }
        static ATerm m_18 (ATerm t)
        {
          ATerm h_40 = NULL;
          t = pass_verbose_0_0(t);
          h_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_20), h_40), (ATerm) ATinsert(ATempty, term_h_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(i_18, m_18, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,n_31 = NULL,o_31 = NULL;
  k_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_31;
      t = y_93(t);
    }
  else
    {
      ATerm u_31 = NULL,v_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_31 = ATgetFirst((ATermList) t);
          o_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_31;
      t = a_94(t);
      u_31 = t;
      t = o_31;
      t = foldr_3_0(y_93, z_93, a_94, t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_31, v_31);
      t = z_93(t);
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_31), term_e_50);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_e_50;
  t = get_config_0_0(t);
  t = foldr_3_0(n_18, conc_0_0, p_18, t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_h_35);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_h_35);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = get_outfile_1_0(a_19, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_i_50;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  {
    ATerm j_50 = t;
    int k_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL,l_21 = NULL,m_21 = NULL;
        t = term_l_50;
        t = get_config_0_0(t);
        t = d_33;
        {
          ATerm n_50 = t;
          int o_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_33;
              {
                ATerm p_50 = t;
                int s_50 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        y_21 = ATgetArgument(t, 0);
                        {
                          ATerm h_23 = NULL,o_8 = NULL;
                          t = SSLgetAnnotations(d_33);
                          h_23 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, y_21);
                          o_8 = t;
                          t = SSLsetAnnotations(o_8, h_23);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = d_33;
                      }
                    LocalPopChoice(s_50);
                    t = xtc_transform_file_2_0(r_18, v_18, t);
                  }
                else
                  {
                    t = p_50;
                    t = xtc_transform_term_2_0(w_18, x_18, t);
                  }
              }
              LocalPopChoice(o_50);
            }
          else
            {
              t = n_50;
              {
                ATerm k_22 = NULL,p_22 = NULL,q_22 = NULL;
                t = term_l_32;
                p_22 = t;
                t = (ATerm) ATinsert(ATempty, term_t_50);
                q_22 = t;
                t = SSL_printnl(p_22, q_22);
                t = term_k_35;
                k_22 = t;
                t = SSL_exit(k_22);
                t = (ATerm) ATinsert(ATempty, term_t_50);
              }
            }
        }
        t = copy_to_1_0(y_18, t);
        j_21 = t;
        t = term_l_32;
        l_21 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_50));
        m_21 = t;
        t = SSL_printnl(l_21, m_21);
        t = j_21;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(k_50);
      }
    else
      {
        t = j_50;
        t = d_33;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_50;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_50);
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
      t = (ATerm) ATinsert(ATempty, term_y_50);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL;
        t = term_q_37;
        t = get_config_0_0(t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_33, term_a_36);
        t = geq_0_0(t);
        t = n_33;
        t = m_103(t);
        LocalPopChoice(a_51);
      }
    else
      {
        t = z_50;
        t = n_33;
      }
  }
  return(t);
}
static ATerm u_12 (ATerm a_79 (ATerm), ATerm d_21, ATerm t)
{
  ATerm u_33 = NULL;
  t = term_f_33;
  t = a_79(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(d_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_51, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_33), (ATerm) ATempty))))));
  return(t);
}
static ATerm v_12 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm v_33 = NULL;
  t = SSL_write_term_to_stream_baf(x_22, y_22);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_33);
  return(t);
}
static ATerm w_12 (ATerm k_87 (ATerm), ATerm c_188, ATerm f_23, ATerm t)
{
  ATerm w_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_188, term_d_51);
  t = q_13(t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, f_23);
  t = k_87(t);
  t = fclose_0_0(t);
  t = f_23;
  return(t);
}
static ATerm z_12 (ATerm g_100 (ATerm), ATerm b_42, ATerm z_41, ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,g_34 = NULL;
  c_34 = t;
  t = g_100(t);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_33, b_42, z_41);
  t = w_13(z_33, b_42, z_41, t);
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL;
        t = term_i_51;
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, term_i_51);
        t = v_13(z_33, h_34, t);
        LocalPopChoice(h_51);
      }
    else
      {
        t = g_51;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_34 = ATgetFirst((ATermList) t);
      b_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_51;
  d_34 = t;
  t = (ATerm) ATinsert(CheckATermList(b_34), (ATerm) ATinsert(CheckATermList(a_34), b_42));
  g_34 = t;
  t = SSL_table_put(z_33, d_34, g_34);
  t = c_34;
  return(t);
}
static ATerm a_35 (ATerm m_34, ATerm t)
{
  t = m_34;
  {
    ATerm k_51 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_51 = ATgetArgument(t, 0);
            ATerm m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_51;
      }
  }
  t = term_s_51;
  t = debug_1_0(i_19, t);
  t = (ATerm) ATmakeAppl(sym__2, m_34, term_d_51);
  t = open_file_0_0(t);
  return(t);
}
static ATerm c_35 (ATerm o_34, ATerm p_34, ATerm q_34, ATerm t)
{
  t = SSL_open_file(o_34, p_34);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_v_51;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,z_34 = NULL;
  v_34 = t;
  if(match_cons(t, sym__2))
    {
      w_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      {
        ATerm w_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_35(v_34, t);
            LocalPopChoice(x_51);
          }
        else
          {
            t = w_51;
            t = c_35(w_34, z_34, v_34, t);
          }
      }
    }
  else
    {
      t = a_35(v_34, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  t = term_f_33;
  t = new_0_0(t);
  e_35 = t;
  t = term_z_51;
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_35, term_z_51);
  t = z_13(e_35, f_35, t);
  g_35 = t;
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_35 = NULL;
        t = (ATerm) ATinsert(ATempty, term_e_52);
        i_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_35, (ATerm) ATinsert(ATempty, term_e_52));
        t = r_13(g_35, i_35, t);
        t = new_file_0_0(t);
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
        t = g_35;
      }
  }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = term_g_52;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_35 = NULL,q_35 = NULL;
  t = new_file_0_0(t);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_d_51);
  t = open_file_0_0(t);
  t = term_f_33;
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_35, term_f_33);
  t = z_12(j_19, n_35, q_35, t);
  t = n_35;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_52 = ATgetArgument(t, 0);
      if(match_cons(o_52, sym_Stream_1))
        {
          u_35 = ATgetArgument(o_52, 0);
        }
      else
        _fail(t);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12(u_35, v_35, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm r_35 = NULL,t_35 = NULL;
  r_35 = t;
  t = xtc_new_file_0_0(t);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_35, r_35);
  t = w_12(k_19, t_35, r_35, t);
  t = SSL_close_file(t_35);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_35);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_p_52;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_36 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_52);
      c_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_35, (ATerm) ATinsert(ATempty, term_e_52));
      t = r_13(y_35, c_36, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = c_112(t);
  t = write_to_0_0(t);
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
static ATerm t_19 (ATerm t)
{
  t = save_as_1_0(u_19, t);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  t = term_r_52;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm j_36 = NULL,q_36 = NULL;
  q_36 = t;
  {
    ATerm s_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_52;
        t = get_config_0_0(t);
        j_36 = t;
        t = if_verbose2_1_0(l_19, t);
        t = q_36;
        {
          ATerm y_52 = t;
          int c_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_l_34;
              t = get_config_0_0(t);
              t = q_36;
              LocalPopChoice(c_53);
            }
          else
            {
              t = y_52;
              {
                static ATerm o_19 (ATerm t)
                {
                  ATerm q_23 = NULL;
                  static ATerm s_19 (ATerm t)
                  {
                    t = j_36;
                    return(t);
                  }
                  if(match_cons(t, sym_Specification_1))
                    {
                      q_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = u_12(s_19, q_23, t);
                  return(t);
                }
                t = xtc_io_transform_1_0(o_19, t);
              }
            }
        }
        LocalPopChoice(w_52);
      }
    else
      {
        t = s_52;
        t = q_36;
      }
  }
  t = if_keep3_1_0(t_19, t);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  {
    ATerm d_53 = t;
    int e_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(o_37);
        LocalPopChoice(e_53);
      }
    else
      {
        t = d_53;
        t = o_37;
      }
  }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = term_g_52;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm d_37 = NULL,f_37 = NULL;
  static ATerm x_19 (ATerm t)
  {
    ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
    g_37 = t;
    t = term_g_52;
    h_37 = t;
    t = term_i_51;
    i_37 = t;
    t = term_i_53;
    t = v_13(h_37, i_37, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_37 != NULL) && (d_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_37 = ATgetFirst((ATermList) t);
        {
          ATerm l_53 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_37;
    t = map_1_0(y_19, t);
    t = g_37;
    t = end_scope_1_0(z_19, t);
    return(t);
  }
  t = repeat_2_0(x_19, _id, t);
  f_37 = t;
  t = SSL_exit(f_37);
  return(t);
}
static ATerm c_20 (ATerm t)
{
  ATerm m_53 = t;
  int n_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_32;
      t = get_config_0_0(t);
      LocalPopChoice(n_53);
    }
  else
    {
      t = m_53;
      t = term_j_33;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(c_20, t);
  t = term_e_32;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  t = z_78(t);
  y_37 = t;
  t = term_y_36;
  t = get_config_0_0(t);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_37, y_37);
  t = z_13(z_37, y_37, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  w_38 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        t = w_38;
        t = v_0(t);
        j_24 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_24;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_24;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_38, j_24);
        t = h_13(x_38, j_24, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_38);
        LocalPopChoice(s_53);
      }
    else
      {
        t = p_53;
        {
          ATerm t_53 = t;
          int u_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_24 = NULL;
              t = w_38;
              t = v_0(t);
              t_24 = t;
              {
                ATerm w_53 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_24 = NULL;
                    v_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = v_24;
                          }
                        else
                          {
                            t = v_24;
                            if((x_38 != t))
                              {
                                _fail(t);
                              }
                            t = v_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_53;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, x_38, t_24);
              t = h_13(x_38, t_24, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_38);
              LocalPopChoice(u_53);
            }
          else
            {
              t = t_53;
              t = w_38;
              t = v_0(t);
              if((x_38 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_38);
            }
        }
      }
  }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  t = get_outfile_1_0(e_20, t);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = term_z_53;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  {
    ATerm a_54 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,r_25 = NULL,t_25 = NULL;
        t = term_c_54;
        t = get_config_0_0(t);
        t = l_39;
        t = copy_to_1_0(d_20, t);
        o_25 = t;
        t = term_l_32;
        r_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_54));
        t_25 = t;
        t = SSL_printnl(r_25, t_25);
        t = o_25;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(b_54);
      }
    else
      {
        t = a_54;
        t = l_39;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm p_40 = NULL,r_40 = NULL,v_40 = NULL,w_40 = NULL;
  t = term_q_37;
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
        t = term_k_35;
      }
  }
  r_40 = t;
  t = term_k_35;
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_40, term_k_35);
  t = f_13(r_40, w_40, t);
  v_40 = t;
  t = SSL_int_to_string(v_40);
  p_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_40), term_q_37);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,a_41 = NULL,c_41 = NULL,e_41 = NULL,i_41 = NULL,k_41 = NULL;
  i_41 = t;
  t = term_g_54;
  x_40 = t;
  t = i_41;
  {
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_32;
        t = get_config_0_0(t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        t = term_y_36;
        t = get_config_0_0(t);
      }
  }
  k_41 = t;
  t = i_41;
  t = pass_keep_0_0(t);
  a_41 = t;
  t = term_j_54;
  t = get_config_0_0(t);
  c_41 = t;
  t = term_k_54;
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(m_54);
        t = (ATerm) ATinsert(ATempty, term_k_54);
      }
    else
      {
        t = l_54;
        t = (ATerm) ATempty;
      }
  }
  e_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_41), a_41), c_41), (ATerm) ATinsert(ATinsert(ATempty, k_41), term_n_54));
  t = concat_0_0(t);
  y_40 = t;
  t = i_41;
  t = comp_0_2(x_40, y_40, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_41, term_a_36);
        t = geq_0_0(t);
        t = o_41;
        t = k_102(t);
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
        t = o_41;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,q_42 = NULL;
  q_42 = t;
  t = SSL_explode_string(q_42);
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_44 (ATerm t)
        {
          ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
          l_44 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_44 = ATgetFirst((ATermList) t);
              n_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm t_54 = t;
            int u_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_27 = NULL,b_28 = NULL,c_9 = NULL;
                t = SSLgetAnnotations(l_44);
                m_27 = t;
                t = n_44;
                t = s_44(t);
                b_28 = t;
                t = (ATerm) ATinsert(CheckATermList(b_28), m_44);
                c_9 = t;
                t = SSLsetAnnotations(c_9, m_27);
                LocalPopChoice(u_54);
              }
            else
              {
                t = t_54;
                {
                  ATerm v_54 = t;
                  int z_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_28 = NULL,e_9 = NULL;
                      t = SSLgetAnnotations(l_44);
                      v_28 = t;
                      t = m_44;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(n_44), m_44);
                      e_9 = t;
                      t = SSLsetAnnotations(e_9, v_28);
                      LocalPopChoice(z_54);
                    }
                  else
                    {
                      t = v_54;
                      {
                        ATerm u_29 = NULL,x_29 = NULL,f_9 = NULL;
                        t = SSLgetAnnotations(l_44);
                        u_29 = t;
                        t = m_44;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = n_44;
                        t = v_97(t);
                        x_29 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_29), m_44);
                        f_9 = t;
                        t = SSLsetAnnotations(f_9, u_29);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = s_44(t);
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
      }
  }
  n_42 = t;
  t = SSL_implode_string(n_42);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  t = debug_1_0(g_20, t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_a_55;
  return(t);
}
static ATerm i_20 (ATerm t)
{
  t = debug_1_0(p_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_b_55;
  return(t);
}
static ATerm a_13 (ATerm z_20, ATerm t)
{
  ATerm c_45 = NULL,g_45 = NULL,i_45 = NULL,l_45 = NULL;
  t = z_20;
  t = basename_1_0(_id, t);
  c_45 = t;
  t = if_verbose3_1_0(f_20, t);
  t = term_z_36;
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, c_45);
  t = y_13(l_45, c_45, t);
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_32;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = e_55;
        t = c_45;
      }
  }
  g_45 = t;
  t = if_verbose3_1_0(i_20, t);
  t = term_y_36;
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_36, g_45);
  t = y_13(i_45, g_45, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_45);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = debug_1_0(r_20, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = if_verbose1_1_0(u_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,n_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,q_33 = NULL,r_33 = NULL,x_33 = NULL,x_30 = NULL,h_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_13(e_49, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm h_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_49 = NULL;
        h_49 = t;
        t = term_l_34;
        t = get_config_0_0(t);
        t = h_49;
        LocalPopChoice(j_55);
      }
    else
      {
        t = h_55;
        t = add_main_0_0(t);
      }
  }
  d_49 = t;
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_49 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_49 = ATgetArgument(t, 0);
            {
              ATerm j_30 = NULL,z_9 = NULL;
              t = SSLgetAnnotations(d_49);
              j_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_49);
              z_9 = t;
              t = SSLsetAnnotations(z_9, j_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_49;
          }
        LocalPopChoice(o_55);
        t = xtc_transform_file_2_0(w_20, a_21, t);
      }
    else
      {
        t = n_55;
        t = xtc_transform_term_2_0(b_21, c_21, t);
      }
  }
  c_49 = t;
  {
    ATerm p_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_50 = ATgetArgument(t, 0);
            {
              ATerm n_30 = NULL,b_10 = NULL;
              t = SSLgetAnnotations(c_49);
              n_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_50);
              b_10 = t;
              t = SSLsetAnnotations(b_10, n_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_49;
          }
        LocalPopChoice(v_55);
        t = xtc_transform_file_2_0(e_21, f_21, t);
      }
    else
      {
        t = p_55;
        t = xtc_transform_term_2_0(n_21, o_21, t);
      }
  }
  b_49 = t;
  {
    ATerm w_55 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_50 = ATgetArgument(t, 0);
            {
              ATerm t_30 = NULL,d_10 = NULL;
              t = SSLgetAnnotations(b_49);
              t_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_50);
              d_10 = t;
              t = SSLsetAnnotations(d_10, t_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_49;
          }
        LocalPopChoice(b_56);
        t = xtc_transform_file_2_0(p_21, q_21, t);
      }
    else
      {
        t = w_55;
        t = xtc_transform_term_2_0(r_21, t_21, t);
      }
  }
  i_31 = t;
  t = term_c_56;
  x_30 = t;
  t = i_31;
  t = pass_maybe_unbound_warnings_0_0(t);
  h_31 = t;
  t = i_31;
  t = comp_0_2(x_30, h_31, t);
  a_49 = t;
  {
    ATerm d_56 = t;
    int f_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_51 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_51 = ATgetArgument(t, 0);
            {
              ATerm l_31 = NULL,g_10 = NULL;
              t = SSLgetAnnotations(a_49);
              l_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_51);
              g_10 = t;
              t = SSLsetAnnotations(g_10, l_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_49;
          }
        LocalPopChoice(f_56);
        t = xtc_transform_file_2_0(w_21, z_21, t);
      }
    else
      {
        t = d_56;
        t = xtc_transform_term_2_0(a_22, b_22, t);
      }
  }
  z_48 = t;
  {
    ATerm j_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_51 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_51 = ATgetArgument(t, 0);
            {
              ATerm r_31 = NULL,j_10 = NULL;
              t = SSLgetAnnotations(z_48);
              r_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_51);
              j_10 = t;
              t = SSLsetAnnotations(j_10, r_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_48;
          }
        LocalPopChoice(l_56);
        t = xtc_transform_file_2_0(c_22, g_22, t);
      }
    else
      {
        t = j_56;
        t = xtc_transform_term_2_0(n_22, o_22, t);
      }
  }
  y_48 = t;
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_51 = ATgetArgument(t, 0);
            {
              ATerm d_32 = NULL,k_10 = NULL;
              t = SSLgetAnnotations(y_48);
              d_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_51);
              k_10 = t;
              t = SSLsetAnnotations(k_10, d_32);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_48;
          }
        LocalPopChoice(n_56);
        t = xtc_transform_file_2_0(r_22, s_22, t);
      }
    else
      {
        t = m_56;
        t = xtc_transform_term_2_0(t_22, v_22, t);
      }
  }
  n_48 = t;
  {
    ATerm o_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_52 = ATgetArgument(t, 0);
            {
              ATerm h_32 = NULL,l_10 = NULL;
              t = SSLgetAnnotations(n_48);
              h_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_52);
              l_10 = t;
              t = SSLsetAnnotations(l_10, h_32);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_48;
          }
        LocalPopChoice(q_56);
        t = xtc_transform_file_2_0(a_23, b_23, t);
      }
    else
      {
        t = o_56;
        t = xtc_transform_term_2_0(c_23, e_23, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL;
        j_52 = t;
        t = term_l_34;
        t = get_config_0_0(t);
        t = j_52;
        LocalPopChoice(s_56);
        {
          ATerm k_52 = NULL;
          k_52 = t;
          {
            ATerm t_56 = t;
            int u_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_52 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    t_52 = ATgetArgument(t, 0);
                    {
                      ATerm s_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(k_52);
                      s_32 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, t_52);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, s_32);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = k_52;
                  }
                LocalPopChoice(u_56);
                t = xtc_transform_file_2_0(i_23, j_23, t);
              }
            else
              {
                t = t_56;
                t = xtc_transform_term_2_0(k_23, n_23, t);
              }
          }
        }
      }
    else
      {
        t = r_56;
        {
          ATerm b_53 = NULL;
          b_53 = t;
          {
            ATerm v_56 = t;
            int w_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_53 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    h_53 = ATgetArgument(t, 0);
                    {
                      ATerm i_33 = NULL,p_10 = NULL;
                      t = SSLgetAnnotations(b_53);
                      i_33 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, h_53);
                      p_10 = t;
                      t = SSLsetAnnotations(p_10, i_33);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = b_53;
                  }
                LocalPopChoice(w_56);
                t = xtc_transform_file_2_0(o_23, p_23, t);
              }
            else
              {
                t = v_56;
                t = xtc_transform_term_2_0(r_23, s_23, t);
              }
          }
          t = if_keep2_1_0(t_23, t);
        }
      }
  }
  x_33 = t;
  t = term_x_56;
  q_33 = t;
  t = x_33;
  t = pass_warnings_0_0(t);
  r_33 = t;
  t = x_33;
  t = comp_0_2(q_33, r_33, t);
  k_48 = t;
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_53 = ATgetArgument(t, 0);
            {
              ATerm e_34 = NULL,q_10 = NULL;
              t = SSLgetAnnotations(k_48);
              e_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_53);
              q_10 = t;
              t = SSLsetAnnotations(q_10, e_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_48;
          }
        LocalPopChoice(z_56);
        t = xtc_transform_file_2_0(v_23, w_23, t);
      }
    else
      {
        t = y_56;
        t = xtc_transform_term_2_0(y_23, z_23, t);
      }
  }
  j_48 = t;
  {
    ATerm a_57 = t;
    int b_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_53 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_53 = ATgetArgument(t, 0);
            {
              ATerm k_34 = NULL,r_10 = NULL;
              t = SSLgetAnnotations(j_48);
              k_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_53);
              r_10 = t;
              t = SSLsetAnnotations(r_10, k_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_48;
          }
        LocalPopChoice(b_57);
        t = xtc_transform_file_2_0(a_24, f_24, t);
      }
    else
      {
        t = a_57;
        t = xtc_transform_term_2_0(g_24, h_24, t);
      }
  }
  t = if_keep2_1_0(i_24, t);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  t = term_l_32;
  h_48 = t;
  t = (ATerm) ATinsert(CheckATermList(g_48), term_c_57);
  i_48 = t;
  t = SSL_printnl(h_48, i_48);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(g_48), term_c_57));
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm q_49 = NULL;
  t = pass_verbose_0_0(t);
  q_49 = t;
  t = (ATerm) ATinsert(CheckATermList(q_49), term_h_35);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = term_d_57;
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm t_49 = NULL;
  t = pass_verbose_0_0(t);
  t_49 = t;
  t = (ATerm) ATinsert(CheckATermList(t_49), term_h_35);
  return(t);
}
static ATerm e_21 (ATerm t)
{
  t = term_g_57;
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm f_50 = NULL;
  t = pass_verbose_0_0(t);
  f_50 = t;
  t = (ATerm) ATinsert(CheckATermList(f_50), term_h_35);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_g_57;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  ATerm h_50 = NULL;
  t = pass_verbose_0_0(t);
  h_50 = t;
  t = (ATerm) ATinsert(CheckATermList(h_50), term_h_35);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm q_50 = NULL;
  t = pass_verbose_0_0(t);
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(q_50), term_h_35);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  t = term_h_57;
  return(t);
}
static ATerm t_21 (ATerm t)
{
  ATerm r_50 = NULL;
  t = pass_verbose_0_0(t);
  r_50 = t;
  t = (ATerm) ATinsert(CheckATermList(r_50), term_h_35);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_i_57;
  return(t);
}
static ATerm z_21 (ATerm t)
{
  ATerm e_51 = NULL;
  t = pass_verbose_0_0(t);
  e_51 = t;
  t = (ATerm) ATinsert(CheckATermList(e_51), term_h_35);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_i_57;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm f_51 = NULL;
  t = pass_verbose_0_0(t);
  f_51 = t;
  t = (ATerm) ATinsert(CheckATermList(f_51), term_h_35);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_j_57;
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm q_51 = NULL;
  t = pass_verbose_0_0(t);
  q_51 = t;
  t = (ATerm) ATinsert(CheckATermList(q_51), term_h_35);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_j_57;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  ATerm r_51 = NULL;
  t = pass_verbose_0_0(t);
  r_51 = t;
  t = (ATerm) ATinsert(CheckATermList(r_51), term_h_35);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_l_57;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm a_52 = NULL;
  t = pass_verbose_0_0(t);
  a_52 = t;
  t = (ATerm) ATinsert(CheckATermList(a_52), term_h_35);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_l_57;
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm b_52 = NULL;
  t = pass_verbose_0_0(t);
  b_52 = t;
  t = (ATerm) ATinsert(CheckATermList(b_52), term_h_35);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  t = term_n_57;
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm h_52 = NULL;
  t = pass_verbose_0_0(t);
  h_52 = t;
  t = (ATerm) ATinsert(CheckATermList(h_52), term_h_35);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_n_57;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm i_52 = NULL;
  t = pass_verbose_0_0(t);
  i_52 = t;
  t = (ATerm) ATinsert(CheckATermList(i_52), term_h_35);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm z_52 = NULL;
  t = pass_verbose_0_0(t);
  z_52 = t;
  t = (ATerm) ATinsert(CheckATermList(z_52), term_h_35);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm a_53 = NULL;
  t = pass_verbose_0_0(t);
  a_53 = t;
  t = (ATerm) ATinsert(CheckATermList(a_53), term_h_35);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm j_53 = NULL;
  t = pass_verbose_0_0(t);
  j_53 = t;
  t = (ATerm) ATinsert(CheckATermList(j_53), term_h_35);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_o_57;
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm k_53 = NULL;
  t = pass_verbose_0_0(t);
  k_53 = t;
  t = (ATerm) ATinsert(CheckATermList(k_53), term_h_35);
  return(t);
}
static ATerm t_23 (ATerm t)
{
  t = save_as_1_0(u_23, t);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_p_57;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = term_q_57;
  return(t);
}
static ATerm w_23 (ATerm t)
{
  ATerm q_53 = NULL;
  t = pass_verbose_0_0(t);
  q_53 = t;
  t = (ATerm) ATinsert(CheckATermList(q_53), term_h_35);
  return(t);
}
static ATerm y_23 (ATerm t)
{
  t = term_q_57;
  return(t);
}
static ATerm z_23 (ATerm t)
{
  ATerm r_53 = NULL;
  t = pass_verbose_0_0(t);
  r_53 = t;
  t = (ATerm) ATinsert(CheckATermList(r_53), term_h_35);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  t = term_r_57;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm x_53 = NULL;
  t = pass_verbose_0_0(t);
  x_53 = t;
  t = (ATerm) ATinsert(CheckATermList(x_53), term_h_35);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_r_57;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm y_53 = NULL;
  t = pass_verbose_0_0(t);
  y_53 = t;
  t = (ATerm) ATinsert(CheckATermList(y_53), term_h_35);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = save_as_1_0(k_24, t);
  return(t);
}
static ATerm k_24 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(q_20, t);
  t = profile_p__2_0(s_20, t_20, t);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
    }
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_v_57;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_57 = t;
  int y_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_54 = NULL;
      q_54 = t;
      t = SSL_is_string(q_54);
      LocalPopChoice(y_57);
    }
  else
    {
      t = x_57;
      {
        ATerm z_57 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_24, t);
            LocalPopChoice(b_58);
          }
        else
          {
            t = z_57;
            {
              ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
              w_54 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_54 = ATgetArgument(t, 0);
                  t = x_54;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_54 = ATgetArgument(t, 0);
                      t = x_54;
                      {
                        ATerm d_58 = t;
                        int k_58 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_58);
                          }
                        else
                          {
                            t = d_58;
                            t = debug_1_0(m_24, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_55 = NULL,d_55 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_54 = ATgetArgument(t, 0);
                          y_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_54;
                      t = eval_config_0_0(t);
                      c_55 = t;
                      t = y_54;
                      t = eval_config_0_0(t);
                      d_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_55, d_55);
                      t = z_13(c_55, d_55, t);
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
  ATerm i_55 = NULL,k_55 = NULL;
  i_55 = t;
  t = term_n_58;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_58, i_55);
  t = v_13(k_55, i_55, t);
  {
    ATerm o_58 = t;
    int v_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_55 = NULL,m_55 = NULL;
        t = eval_config_0_0(t);
        l_55 = t;
        t = term_n_58;
        m_55 = t;
        t = SSL_table_put(m_55, i_55, l_55);
        t = l_55;
        LocalPopChoice(v_58);
      }
    else
      {
        t = o_58;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t_51, ATerm u_51, ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  r_55 = t;
  {
    ATerm w_58 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
        t = v_13(t_51, u_51, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_59 = ATgetFirst((ATermList) t);
            q_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_59);
        t = SSL_table_put(t_51, u_51, q_55);
        t = (ATerm) ATmakeAppl(sym__3, t_51, u_51, q_55);
      }
    else
      {
        t = w_58;
        t = SSL_table_remove(t_51, u_51);
        t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
      }
  }
  t = r_55;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,x_55 = NULL,y_55 = NULL;
  x_55 = t;
  t = d_100(t);
  u_55 = t;
  {
    ATerm g_59 = t;
    int h_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_55 = NULL;
        t = term_i_51;
        z_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_55, term_i_51);
        t = v_13(u_55, z_55, t);
        LocalPopChoice(h_59);
      }
    else
      {
        t = g_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      s_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_51;
  y_55 = t;
  t = SSL_table_put(u_55, y_55, s_55);
  t = t_55;
  {
    static ATerm n_24 (ATerm t)
    {
      ATerm a_56 = NULL;
      a_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_55, a_56);
      t = b_13(u_55, a_56, t);
      return(t);
    }
    t = map_1_0(n_24, t);
  }
  t = x_55;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm j_59 = t;
  int n_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      LocalPopChoice(n_59);
    }
  else
    {
      t = j_59;
      t = e_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm e_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,k_56 = NULL;
  g_56 = t;
  t = c_100(t);
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_56, term_i_51);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_56 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_59 = ATgetArgument(t, 0);
            ATerm s_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_51;
        p_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_56, term_i_51);
        t = v_13(e_56, p_56, t);
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        t = (ATerm) ATempty;
      }
  }
  h_56 = t;
  t = term_i_51;
  i_56 = t;
  t = (ATerm) ATinsert(CheckATermList(h_56), (ATerm) ATempty);
  k_56 = t;
  t = SSL_table_put(e_56, i_56, k_56);
  t = g_56;
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = term_g_52;
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  {
    ATerm u_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_57);
        LocalPopChoice(x_59);
      }
    else
      {
        t = u_59;
        t = w_57;
      }
  }
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_g_52;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm e_57 = NULL;
  static ATerm p_24 (ATerm t)
  {
    ATerm f_57 = NULL;
    f_57 = t;
    {
      ATerm y_59 = t;
      int b_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_57 = NULL,m_57 = NULL;
          t = term_g_52;
          k_57 = t;
          t = term_i_51;
          m_57 = t;
          t = term_i_53;
          t = v_13(k_57, m_57, t);
          LocalPopChoice(b_60);
        }
      else
        {
          t = y_59;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_57 != NULL) && (e_57 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_57 = ATgetFirst((ATermList) t);
        {
          ATerm c_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_57;
    t = map_1_0(q_24, t);
    t = f_57;
    t = end_scope_1_0(s_24, t);
    return(t);
  }
  t = begin_scope_1_0(o_24, t);
  t = restore_always_2_0(d_111, p_24, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  {
    ATerm g_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_58 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        c_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_58, term_k_35);
        t = geq_0_0(t);
        t = a_58;
        t = i_102(t);
        LocalPopChoice(h_60);
      }
    else
      {
        t = g_60;
        t = a_58;
      }
  }
  return(t);
}
static ATerm d_13 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm m_60 = t;
  int o_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_40, o_40);
      LocalPopChoice(o_60);
    }
  else
    {
      t = m_60;
      t = SSL_addr(n_40, o_40);
    }
  return(t);
}
static ATerm f_13 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(t_40, u_40);
      LocalPopChoice(r_60);
    }
  else
    {
      t = q_60;
      t = SSL_subtr(t_40, u_40);
    }
  return(t);
}
static ATerm g_13 (ATerm q_48, ATerm s_48, ATerm u_48, ATerm w_48, ATerm r_48, ATerm t_48, ATerm v_48, ATerm x_48, ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
  t = f_13(q_48, r_48, t);
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
  t = f_13(s_48, t_48, t);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, v_48);
  t = f_13(u_48, v_48, t);
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_48, x_48);
  t = f_13(w_48, x_48, t);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym__4, e_58, f_58, g_58, h_58);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_60 = ATgetArgument(t, 0);
      if(match_cons(t_60, sym__4))
        {
          l_58 = ATgetArgument(t_60, 0);
          m_58 = ATgetArgument(t_60, 1);
          p_58 = ATgetArgument(t_60, 2);
          q_58 = ATgetArgument(t_60, 3);
        }
      else
        _fail(t);
      {
        ATerm v_60 = ATgetArgument(t, 1);
        if(match_cons(v_60, sym__4))
          {
            r_58 = ATgetArgument(v_60, 0);
            s_58 = ATgetArgument(v_60, 1);
            t_58 = ATgetArgument(v_60, 2);
            u_58 = ATgetArgument(v_60, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_13(l_58, m_58, p_58, q_58, r_58, s_58, t_58, u_58, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,q_59 = NULL,t_59 = NULL;
  f_59 = t;
  t = times_0_0(t);
  x_58 = t;
  t = f_59;
  t = w_105(t);
  y_58 = t;
  t = times_0_0(t);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_59, x_58);
  t = diff_times_0_0(t);
  d_59 = t;
  if(match_cons(t, sym__4))
    {
      m_59 = ATgetArgument(t, 0);
      {
        ATerm w_60 = ATgetArgument(t, 1);
      }
      q_59 = ATgetArgument(t, 2);
      {
        ATerm x_60 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_59, q_59);
  t = d_13(m_59, q_59, t);
  t_59 = t;
  t = SSL_TicksToSeconds(t_59);
  z_58 = t;
  t = d_59;
  if(match_cons(t, sym__4))
    {
      ATerm y_60 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
      {
        ATerm z_60 = ATgetArgument(t, 2);
      }
      k_59 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_59, k_59);
  t = d_13(i_59, k_59, t);
  l_59 = t;
  t = SSL_TicksToSeconds(l_59);
  a_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_59), term_b_61), z_58), term_a_61);
  t = v_105(t);
  t = y_58;
  return(t);
}
ATerm debug_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,z_59 = NULL,a_60 = NULL;
  v_59 = t;
  t = i_87(t);
  w_59 = t;
  t = term_l_32;
  z_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_59), w_59);
  a_60 = t;
  t = SSL_printnl(z_59, a_60);
  t = v_59;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,i_60 = NULL;
  d_60 = t;
  t = term_c_61;
  t = get_config_0_0(t);
  e_60 = t;
  t = term_j_33;
  f_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_61), term_p_61), term_n_61), term_l_61), term_j_61), term_i_61), term_h_61), e_60), term_d_61);
  i_60 = t;
  t = SSL_printnl(f_60, i_60);
  t = d_60;
  return(t);
}
static ATerm h_13 (ATerm v_42, ATerm w_42, ATerm t)
{
  t = SSL_copy(v_42, w_42);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_60 = NULL;
  static ATerm x_24 (ATerm t)
  {
    ATerm k_60 = NULL,l_60 = NULL;
    k_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_60), k_60);
    t = v_13(not_null(j_60), k_60, t);
    l_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_60, l_60);
    return(t);
  }
  if(((j_60 != NULL) && (j_60 != t)))
    _fail(t);
  else
    j_60 = t;
  t = SSL_table_keys(j_60);
  t = map_1_0(x_24, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm n_60 = NULL;
  n_60 = t;
  {
    ATerm r_61 = t;
    int s_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_60 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        p_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_60, term_i_38);
        t = geq_0_0(t);
        t = n_60;
        t = m_102(t);
        LocalPopChoice(s_61);
      }
    else
      {
        t = r_61;
        t = n_60;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm s_60 = NULL;
  s_60 = t;
  {
    ATerm t_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_60 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        u_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_60, term_q_38);
        t = geq_0_0(t);
        t = s_60;
        t = l_102(t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = t_61;
        t = s_60;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  e_61 = t;
  if(match_cons(t, sym__2))
    {
      f_61 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_61 = t;
    int w_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_61;
        if((f_61 != t))
          {
            _fail(t);
          }
        t = e_61;
        LocalPopChoice(w_61);
      }
    else
      {
        t = v_61;
        t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
        {
          ATerm x_61 = t;
          int y_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_61, g_61);
              LocalPopChoice(y_61);
            }
          else
            {
              t = x_61;
              t = SSL_gtr(f_61, g_61);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm k_61 = NULL;
  k_61 = t;
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_61 = NULL;
        t = term_j_32;
        t = get_config_0_0(t);
        m_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_61, term_u_38);
        t = geq_0_0(t);
        t = k_61;
        t = n_102(t);
        LocalPopChoice(a_62);
      }
    else
      {
        t = z_61;
        t = k_61;
      }
  }
  return(t);
}
static ATerm k_13 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm y_28, ATerm x_28, ATerm t)
{
  t = b_92(t);
  {
    static ATerm y_24 (ATerm t)
    {
      ATerm o_61 = NULL;
      o_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, o_61);
      t = a_92(t);
      return(t);
    }
    t = fetch_1_0(y_24, t);
  }
  t = x_28;
  return(t);
}
static ATerm l_13 (ATerm x_91 (ATerm), ATerm u_28, ATerm t_28, ATerm t)
{
  static ATerm l_62 (ATerm t)
  {
    ATerm d_62 = NULL,e_62 = NULL,g_62 = NULL;
    d_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_62 = ATgetFirst((ATermList) t);
            g_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_62 = t;
          int c_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_62;
              {
                static ATerm z_24 (ATerm t)
                {
                  t = t_28;
                  return(t);
                }
                t = k_13(x_91, z_24, e_62, g_62, t);
              }
              t = l_62(t);
              LocalPopChoice(c_62);
            }
          else
            {
              t = b_62;
              {
                ATerm x_36 = NULL,a_37 = NULL,h_11 = NULL;
                t = SSLgetAnnotations(d_62);
                x_36 = t;
                t = g_62;
                t = l_62(t);
                a_37 = t;
                t = (ATerm) ATinsert(CheckATermList(a_37), e_62);
                h_11 = t;
                t = SSLsetAnnotations(h_11, x_36);
              }
            }
        }
      }
    return(t);
  }
  t = u_28;
  t = l_62(t);
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm x_62 = NULL;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      if((x_62 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_13 (ATerm l_52, ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
  {
    ATerm f_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_62 = ATgetArgument(t, 0);
            ATerm j_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
        t = v_13(l_52, m_52, t);
        LocalPopChoice(h_62);
      }
    else
      {
        t = f_62;
        t = (ATerm) ATempty;
      }
  }
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_62, n_52);
  t = l_13(b_25, r_62, n_52, t);
  q_62 = t;
  t = SSL_table_put(l_52, m_52, q_62);
  t = p_62;
  return(t);
}
static ATerm n_13 (ATerm e_107 (ATerm), ATerm v_52, ATerm u_52, ATerm t)
{
  static ATerm c_25 (ATerm t)
  {
    ATerm b_63 = NULL,c_63 = NULL;
    if(match_cons(t, sym__2))
      {
        b_63 = ATgetArgument(t, 0);
        c_63 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_52, b_63, c_63);
    t = e_107(t);
    return(t);
  }
  t = u_52;
  t = map_1_0(c_25, t);
  return(t);
}
static ATerm r_13 (ATerm m_37, ATerm n_37, ATerm t)
{
  t = SSL_access(m_37, n_37);
  return(t);
}
static ATerm z_63 (ATerm o_63, ATerm t)
{
  t = SSL_fclose(o_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL;
  v_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_63 = ATgetArgument(t, 0);
      {
        ATerm k_62 = t;
        int m_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_63);
            LocalPopChoice(m_62);
          }
        else
          {
            t = k_62;
            t = z_63(v_63, t);
          }
      }
    }
  else
    {
      t = z_63(v_63, t);
    }
  return(t);
}
static ATerm o_13 (ATerm d_23, ATerm t)
{
  t = SSL_read_term_from_stream(d_23);
  return(t);
}
static ATerm p_13 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm a_64 = NULL;
  t = SSL_fopen(u_37, v_37);
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_64);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_64 = NULL;
  t = SSL_stdin_stream();
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_64);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_64 = NULL;
  t = SSL_stdout_stream();
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_64);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_64 = NULL;
  t = SSL_stderr_stream();
  g_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_64);
  return(t);
}
static ATerm x_65 (ATerm n_64, ATerm t)
{
  ATerm p_64 = NULL;
  t = SSL_explode_term(n_64);
  if(match_cons(t, sym__2))
    {
      ATerm n_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_62 = ATgetArgument(t, 1);
        if(((ATgetType(o_62) == AT_LIST) && !(ATisEmpty(o_62))))
          {
            p_64 = ATgetFirst((ATermList) o_62);
            {
              ATerm s_62 = (ATerm) ATgetNext((ATermList) o_62);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_64;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_64;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_64;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_64;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_65 (ATerm t_64, ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,z_64 = NULL,e_65 = NULL,k_11 = NULL;
  t = SSLgetAnnotations(v_64);
  z_64 = t;
  t = t_64;
  if(match_cons(t, sym_Path_1))
    {
      e_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_65, u_64);
  k_11 = t;
  t = SSLsetAnnotations(k_11, z_64);
  if(match_cons(t, sym__2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(w_64, x_64, t);
  return(t);
}
static ATerm a_66 (ATerm g_65, ATerm h_65, ATerm i_65, ATerm t)
{
  ATerm j_65 = NULL,l_65 = NULL,n_65 = NULL,r_65 = NULL,l_11 = NULL;
  t = SSLgetAnnotations(i_65);
  n_65 = t;
  t = SSL_is_string(g_65);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_65, h_65);
  l_11 = t;
  t = SSLsetAnnotations(l_11, n_65);
  if(match_cons(t, sym__2))
    {
      j_65 = ATgetArgument(t, 0);
      l_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(j_65, l_65, t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  if(match_cons(t, sym__2))
    {
      u_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
      {
        ATerm t_62 = t;
        int u_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_65(t_65, t);
            LocalPopChoice(u_62);
          }
        else
          {
            t = t_62;
            {
              ATerm v_62 = t;
              int w_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_65(u_65, v_65, t_65, t);
                  LocalPopChoice(w_62);
                }
              else
                {
                  t = v_62;
                  t = a_66(u_65, v_65, t_65, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_65(t_65, t);
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
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  ATerm z_62 = t;
  int a_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_66 = NULL;
      f_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_66, term_d_63);
      t = q_13(t);
      LocalPopChoice(a_63);
    }
  else
    {
      t = z_62;
      t = debug_1_0(d_25, t);
      _fail(t);
    }
  d_66 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_13(e_66, t);
  c_66 = t;
  t = d_66;
  t = fclose_0_0(t);
  t = c_66;
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
      ATerm h_66 = NULL,j_66 = NULL;
      h_66 = t;
      t = (ATerm) ATinsert(ATempty, term_i_63);
      j_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_66, (ATerm) ATinsert(ATempty, term_i_63));
      t = r_13(h_66, j_66, t);
      LocalPopChoice(h_63);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_63;
      {
        ATerm j_63 = t;
        int k_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_63 = t;
            if((PushChoice() == 0))
              {
                ATerm l_66 = NULL,m_66 = NULL;
                l_66 = t;
                t = (ATerm) ATinsert(ATempty, term_e_52);
                m_66 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_66, (ATerm) ATinsert(ATempty, term_e_52));
                t = r_13(l_66, m_66, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_63;
              }
            t = debug_1_0(g_25, t);
            LocalPopChoice(k_63);
          }
        else
          {
            t = j_63;
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
  t = term_m_63;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = debug_1_0(l_25, t);
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm m_25 (ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  d_67 = t;
  t = term_l_32;
  e_67 = t;
  t = (ATerm) ATinsert(ATempty, term_p_63);
  f_67 = t;
  t = SSL_printnl(e_67, f_67);
  t = d_67;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm h_67 = NULL,j_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__3))
    {
      h_67 = ATgetArgument(t, 0);
      j_67 = ATgetArgument(t, 1);
      l_67 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_13(h_67, j_67, l_67, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,p_67 = NULL;
  m_67 = t;
  t = term_l_32;
  n_67 = t;
  t = (ATerm) ATinsert(ATempty, term_q_63);
  p_67 = t;
  t = SSL_printnl(n_67, p_67);
  t = m_67;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  t = term_l_32;
  r_67 = t;
  t = (ATerm) ATinsert(ATempty, term_p_63);
  s_67 = t;
  t = SSL_printnl(r_67, s_67);
  t = q_67;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,v_66 = NULL,x_66 = NULL,y_66 = NULL,a_67 = NULL;
  o_66 = t;
  t = if_verbose5_1_0(i_25, t);
  {
    ATerm r_63 = t;
    if((PushChoice() == 0))
      {
        ATerm b_67 = NULL,c_67 = NULL;
        t = term_s_63;
        b_67 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_66);
        c_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_63, (ATerm) ATmakeAppl(sym_Imported_1, o_66));
        t = v_13(b_67, c_67, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_63;
      }
  }
  q_66 = t;
  t = term_s_63;
  x_66 = t;
  t = term_t_63;
  y_66 = t;
  t = (ATerm) ATinsert(ATempty, o_66);
  a_67 = t;
  t = SSL_table_put(x_66, y_66, a_67);
  t = q_66;
  t = if_verbose4_1_0(k_25, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_25, t);
  p_66 = t;
  t = term_s_63;
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_63, p_66);
  t = n_13(n_25, v_66, p_66, t);
  t = if_verbose6_1_0(p_25, t);
  t = term_s_63;
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, o_66);
  s_66 = t;
  t = (ATerm) ATempty;
  t_66 = t;
  t = SSL_table_put(r_66, s_66, t_66);
  t = (ATerm) ATmakeAppl(sym__3, term_s_63, (ATerm)ATmakeAppl(sym_Imported_1, o_66), (ATerm) ATempty);
  t = if_verbose4_1_0(q_25, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm i_68 = NULL,k_68 = NULL,l_68 = NULL;
  i_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_68;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_68 = ATgetFirst((ATermList) t);
          l_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_38 = NULL,m_38 = NULL,t_38 = NULL,t_11 = NULL;
            t = SSLgetAnnotations(i_68);
            g_38 = t;
            t = k_68;
            t = a_95(t);
            m_38 = t;
            t = l_68;
            t = filter_1_0(a_95, t);
            t_38 = t;
            t = (ATerm) ATinsert(CheckATermList(t_38), m_38);
            t_11 = t;
            t = SSLsetAnnotations(t_11, g_38);
            LocalPopChoice(x_63);
          }
        else
          {
            t = w_63;
            t = l_68;
            t = filter_1_0(a_95, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  static ATerm p_68 (ATerm t)
  {
    ATerm y_63 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        t = p_68(t);
        LocalPopChoice(b_64);
      }
    else
      {
        t = y_63;
        t = i_80(t);
      }
    return(t);
  }
  t = p_68(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_64 = t;
  int f_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_64;
      t = get_config_0_0(t);
      LocalPopChoice(f_64);
    }
  else
    {
      t = c_64;
      {
        ATerm i_64 = t;
        int j_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_68 = NULL;
            t = term_k_64;
            q_68 = t;
            t = SSL_getenv(q_68);
            LocalPopChoice(j_64);
          }
        else
          {
            t = i_64;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = debug_1_0(u_25, t);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_l_64;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm y_68 = NULL,a_69 = NULL;
  t = term_s_63;
  y_68 = t;
  t = term_m_64;
  a_69 = t;
  t = term_o_64;
  t = v_13(y_68, a_69, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_64 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_64;
      }
  }
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = debug_1_0(x_25, t);
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_r_64;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_68 = NULL;
  t = if_verbose5_1_0(s_25, t);
  s_68 = t;
  {
    ATerm s_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_68 = NULL,v_68 = NULL;
        t = term_s_63;
        t_68 = t;
        t = term_t_63;
        v_68 = t;
        t = term_a_65;
        t = v_13(t_68, v_68, t);
        LocalPopChoice(y_64);
      }
    else
      {
        t = s_64;
        {
          ATerm x_68 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_68 = t;
          t = repeat_2_0(v_25, _id, t);
          t = x_68;
        }
      }
  }
  t = s_68;
  t = if_verbose5_1_0(w_25, t);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = debug_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm b_70 (ATerm f_69, ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  t = term_s_63;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_69);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_63, (ATerm) ATmakeAppl(sym_Tool_1, f_69));
  t = v_13(k_69, l_69, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_65 = ATgetFirst((ATermList) t);
      if(match_cons(c_65, sym__2))
        {
          ATerm f_65 = ATgetArgument(c_65, 0);
          j_69 = ATgetArgument(c_65, 1);
        }
      else
        _fail(t);
      {
        ATerm d_65 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_69;
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = debug_1_0(c_26, t);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_s_63;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_26, t);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_k_65;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_65 = t;
  int o_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
      t = if_verbose5_1_0(y_25, t);
      t = xtc_load_0_0(t);
      o_69 = t;
      if(match_cons(t, sym__2))
        {
          m_69 = ATgetArgument(t, 0);
          n_69 = ATgetArgument(t, 1);
          {
            ATerm p_65 = t;
            int q_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
                t = term_s_63;
                s_69 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_69);
                t_69 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_63, (ATerm) ATmakeAppl(sym_Tool_1, m_69));
                t = v_13(s_69, t_69, t);
                {
                  static ATerm a_26 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_69 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_69 != NULL) && (r_69 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_69 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(a_26, t);
                }
                t = not_null(r_69);
                LocalPopChoice(q_65);
              }
            else
              {
                t = p_65;
                t = b_70(o_69, t);
              }
          }
        }
      else
        {
          t = b_70(o_69, t);
        }
      t = if_verbose5_1_0(b_26, t);
      LocalPopChoice(o_65);
    }
  else
    {
      t = m_65;
      {
        ATerm a_70 = NULL,m_39 = NULL,p_39 = NULL;
        a_70 = t;
        t = term_l_32;
        m_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_65), a_70), term_s_65);
        p_39 = t;
        t = SSL_printnl(m_39, p_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_65), a_70), term_s_65);
        t = if_verbose5_1_0(d_26, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_13 (ATerm u_46, ATerm t_46, ATerm t)
{
  ATerm e_70 = NULL,h_70 = NULL,k_70 = NULL;
  t = u_46;
  {
    ATerm y_65 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(b_66);
      }
    else
      {
        t = y_65;
        t = (ATerm) ATempty;
      }
  }
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, h_70);
  t = conc_0_0(t);
  e_70 = t;
  t = term_n_58;
  k_70 = t;
  t = SSL_table_put(k_70, u_46, e_70);
  t = (ATerm) ATmakeAppl(sym__3, term_n_58, u_46, e_70);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
      t = term_f_33;
      t = p_0(t);
      v_70 = t;
      t = term_g_66;
      w_70 = t;
      t = term_i_66;
      x_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_66, term_i_66, v_70);
      t = w_13(w_70, x_70, v_70, t);
      _fail(t);
    }
  else
    {
      ATerm b_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_70 = ATgetFirst((ATermList) t);
          q_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_70 = ATgetFirst((ATermList) t);
          s_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_70;
      t = n_0(t);
      t = r_70;
      t = o_0(t);
      b_71 = t;
      t = (ATerm) ATinsert(CheckATermList(s_70), b_71);
    }
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm d_71 = NULL;
  d_71 = t;
  if(match_string(t, "-S"))
    {
      t = d_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_71;
    }
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  t = term_j_32;
  e_71 = t;
  t = term_e_32;
  f_71 = t;
  t = term_k_66;
  t = y_13(e_71, f_71, t);
  t = term_n_66;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  t = term_u_66;
  return(t);
}
static ATerm j_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  t = SSL_string_to_int(g_71);
  h_71 = t;
  t = term_j_32;
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_32, h_71);
  t = y_13(i_71, h_71, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_71);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  t = term_w_66;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_26 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  t = term_z_66;
  j_71 = t;
  t = term_f_33;
  k_71 = t;
  t = term_g_67;
  t = y_13(j_71, k_71, t);
  t = term_i_67;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  t = term_k_67;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_67 = t;
  int t_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_26, h_26, i_26, t);
      LocalPopChoice(t_67);
    }
  else
    {
      t = o_67;
      {
        ATerm u_67 = t;
        int v_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_26, k_26, m_26, t);
            LocalPopChoice(v_67);
          }
        else
          {
            t = u_67;
            t = Option_3_0(r_26, s_26, t_26, t);
          }
      }
    }
  return(t);
}
static ATerm t_13 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm w_67 = t;
  int x_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_71 = NULL;
      t = r_46;
      t = get_config_0_0(t);
      t = term_n_58;
      l_71 = t;
      t = SSL_table_remove(l_71, r_46);
      t = (ATerm) ATmakeAppl(sym__2, term_n_58, r_46);
      LocalPopChoice(x_67);
    }
  else
    {
      t = w_67;
      t = (ATerm) ATmakeAppl(sym__2, r_46, s_46);
      t = y_13(r_46, s_46, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  static ATerm k_72 (ATerm t)
  {
    ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
    f_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_72 = ATgetFirst((ATermList) t);
        e_72 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_39 = NULL,b_40 = NULL,r_16 = NULL;
          t = SSLgetAnnotations(f_72);
          v_39 = t;
          t = e_72;
          t = k_72(t);
          b_40 = t;
          t = (ATerm) ATinsert(CheckATermList(b_40), d_72);
          r_16 = t;
          t = SSLsetAnnotations(r_16, v_39);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_72;
        t = j_88(t);
      }
    return(t);
  }
  t = k_72(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL;
  n_71 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_71;
    }
  else
    {
      static ATerm u_26 (ATerm t)
      {
        t = not_null(p_71);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_71 = ATgetFirst((ATermList) t);
          if(((p_71 != NULL) && (p_71 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_71;
      t = at_end_1_0(u_26, t);
    }
  return(t);
}
static ATerm b_73 (ATerm p_72, ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_explode_term(p_72);
  if(match_cons(t, sym__2))
    {
      ATerm y_67 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_67) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  u_72 = t;
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
      {
        ATerm z_67 = t;
        int a_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_26 (ATerm t)
            {
              t = t_72;
              return(t);
            }
            t = s_72;
            t = at_end_1_0(v_26, t);
            LocalPopChoice(a_68);
          }
        else
          {
            t = z_67;
            t = b_73(u_72, t);
          }
      }
    }
  else
    {
      t = b_73(u_72, t);
    }
  return(t);
}
static ATerm u_13 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
  t = v_46;
  {
    ATerm b_68 = t;
    int c_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(c_68);
      }
    else
      {
        t = b_68;
        t = (ATerm) ATempty;
      }
  }
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_73, w_46);
  t = conc_0_0(t);
  c_73 = t;
  t = term_n_58;
  e_73 = t;
  t = SSL_table_put(e_73, v_46, c_73);
  t = (ATerm) ATmakeAppl(sym__3, term_n_58, v_46, c_73);
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm h_73 = NULL;
  h_73 = t;
  if(match_string(t, "-o"))
    {
      t = h_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_73;
    }
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL;
  i_73 = t;
  t = term_q_32;
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, i_73);
  t = y_13(j_73, i_73, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_73);
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_d_68;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_27, c_27, e_27, t);
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm l_73 = NULL;
  l_73 = t;
  if(match_string(t, "-i"))
    {
      t = l_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_73;
    }
  return(t);
}
static ATerm l_27 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL;
  m_73 = t;
  t = term_b_50;
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_50, m_73);
  t = y_13(n_73, m_73, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_73);
  return(t);
}
static ATerm n_27 (ATerm t)
{
  t = term_e_68;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_27, l_27, n_27, t);
  return(t);
}
static ATerm o_27 (ATerm t)
{
  ATerm x_73 = NULL;
  x_73 = t;
  if(match_string(t, "-I"))
    {
      t = x_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_73;
    }
  return(t);
}
static ATerm p_27 (ATerm t)
{
  ATerm y_73 = NULL,a_74 = NULL,b_74 = NULL;
  y_73 = t;
  t = term_j_54;
  a_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_73), term_j_54);
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_54, (ATerm) ATinsert(ATinsert(ATempty, y_73), term_j_54));
  t = s_13(a_74, b_74, t);
  t = term_f_33;
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm r_27 (ATerm t)
{
  ATerm d_74 = NULL;
  d_74 = t;
  if(match_string(t, "--main"))
    {
      t = d_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = d_74;
    }
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm e_74 = NULL,g_74 = NULL;
  e_74 = t;
  t = term_x_52;
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_52, e_74);
  t = y_13(g_74, e_74, t);
  t = term_f_33;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  t = term_g_68;
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm h_74 = NULL;
  h_74 = t;
  if(match_string(t, "--library"))
    {
      t = h_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = h_74;
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL;
  t = term_l_34;
  i_74 = t;
  t = term_f_33;
  j_74 = t;
  t = term_h_68;
  t = y_13(i_74, j_74, t);
  t = term_f_33;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm x_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL;
  k_74 = t;
  t = term_y_33;
  l_74 = t;
  t = (ATerm) ATinsert(ATempty, k_74);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_33, (ATerm) ATinsert(ATempty, k_74));
  t = u_13(l_74, m_74, t);
  t = term_f_33;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  t = term_m_68;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  n_74 = t;
  t = term_x_32;
  o_74 = t;
  t = (ATerm) ATinsert(ATempty, n_74);
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_32, (ATerm) ATinsert(ATempty, n_74));
  t = s_13(o_74, p_74, t);
  t = term_f_33;
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_n_68;
  return(t);
}
static ATerm i_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  t = term_r_32;
  r_74 = t;
  t = (ATerm) ATinsert(ATempty, q_74);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, (ATerm) ATinsert(ATempty, q_74));
  t = s_13(r_74, s_74, t);
  t = term_f_33;
  return(t);
}
static ATerm k_28 (ATerm t)
{
  t = term_o_68;
  return(t);
}
static ATerm l_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_28 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_y_32;
  t_74 = t;
  t = term_f_33;
  u_74 = t;
  t = term_r_68;
  t = y_13(t_74, u_74, t);
  t = term_f_33;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_u_68;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_28 (ATerm t)
{
  ATerm v_74 = NULL,y_74 = NULL;
  t = term_c_54;
  v_74 = t;
  t = term_f_33;
  y_74 = t;
  t = term_w_68;
  t = y_13(v_74, y_74, t);
  t = term_f_33;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm z_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL;
  t = term_l_50;
  z_74 = t;
  t = term_f_33;
  a_75 = t;
  t = term_b_69;
  t = y_13(z_74, a_75, t);
  t = term_f_33;
  return(t);
}
static ATerm b_29 (ATerm t)
{
  t = term_c_69;
  return(t);
}
static ATerm c_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
  b_75 = t;
  t = SSL_string_to_int(b_75);
  c_75 = t;
  t = term_q_37;
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, c_75);
  t = y_13(d_75, c_75, t);
  t = term_f_33;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  t = term_d_69;
  return(t);
}
static ATerm f_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_29 (ATerm t)
{
  ATerm e_75 = NULL,h_75 = NULL,i_75 = NULL;
  e_75 = t;
  t = SSL_string_to_int(e_75);
  h_75 = t;
  t = term_t_37;
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_37, h_75);
  t = y_13(i_75, h_75, t);
  t = term_f_33;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = term_e_69;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_29 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_i_39;
  j_75 = t;
  t = term_f_33;
  k_75 = t;
  t = term_g_69;
  t = t_13(j_75, k_75, t);
  t = term_f_33;
  return(t);
}
static ATerm l_29 (ATerm t)
{
  t = term_h_69;
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm l_75 = NULL;
  l_75 = t;
  if(match_string(t, "-h"))
    {
      t = l_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = l_75;
    }
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL;
  t = term_i_69;
  m_75 = t;
  t = term_f_33;
  n_75 = t;
  t = term_p_69;
  t = y_13(m_75, n_75, t);
  t = term_f_33;
  return(t);
}
static ATerm o_29 (ATerm t)
{
  t = term_q_69;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_29 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  t = term_u_69;
  o_75 = t;
  t = term_f_33;
  p_75 = t;
  t = term_v_69;
  t = y_13(o_75, p_75, t);
  t = term_f_33;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = term_w_69;
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm q_75 = NULL;
  q_75 = t;
  if(match_string(t, "-v"))
    {
      t = q_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = q_75;
    }
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  t = term_x_69;
  r_75 = t;
  t = term_f_33;
  s_75 = t;
  t = term_y_69;
  t = y_13(r_75, s_75, t);
  t = term_f_33;
  return(t);
}
static ATerm v_29 (ATerm t)
{
  t = term_z_69;
  return(t);
}
static ATerm w_29 (ATerm t)
{
  ATerm t_75 = NULL;
  t_75 = t;
  if(match_string(t, "--warning"))
    {
      t = t_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = t_75;
    }
  return(t);
}
static ATerm a_30 (ATerm t)
{
  ATerm u_75 = NULL;
  u_75 = t;
  {
    ATerm c_70 = t;
    int d_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,t_16 = NULL;
        t = term_e_50;
        t = get_config_0_0(t);
        a_76 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_75 = ATgetFirst((ATermList) t);
            z_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_76);
        x_75 = t;
        t = y_75;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = z_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_75), y_75);
        t_16 = t;
        t = SSLsetAnnotations(t_16, x_75);
        t = term_e_50;
        v_75 = t;
        t = (ATerm) ATinsert(ATempty, u_75);
        w_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_50, (ATerm) ATinsert(ATempty, u_75));
        t = y_13(v_75, w_75, t);
        LocalPopChoice(d_70);
      }
    else
      {
        t = c_70;
        {
          ATerm b_76 = NULL,c_76 = NULL;
          t = term_e_50;
          b_76 = t;
          t = (ATerm) ATinsert(ATempty, u_75);
          c_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_50, (ATerm) ATinsert(ATempty, u_75));
          t = s_13(b_76, c_76, t);
        }
      }
  }
  t = term_f_33;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = term_f_70;
  return(t);
}
static ATerm c_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_30 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  t = term_x_50;
  e_76 = t;
  t = term_k_35;
  f_76 = t;
  t = term_g_70;
  t = y_13(e_76, f_76, t);
  t = d_76;
  return(t);
}
static ATerm f_30 (ATerm t)
{
  t = term_x_50;
  return(t);
}
static ATerm g_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_30 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  t = term_y_50;
  h_76 = t;
  t = term_e_32;
  i_76 = t;
  t = term_i_70;
  t = y_13(h_76, i_76, t);
  t = g_76;
  return(t);
}
static ATerm l_30 (ATerm t)
{
  t = term_y_50;
  return(t);
}
static ATerm m_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL;
  t = term_k_54;
  j_76 = t;
  t = term_f_33;
  k_76 = t;
  t = term_j_70;
  t = y_13(j_76, k_76, t);
  t = term_f_33;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_l_70;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm m_70 = t;
  int n_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_70);
    }
  else
    {
      t = m_70;
      {
        ATerm o_70 = t;
        int t_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(t_70);
          }
        else
          {
            t = o_70;
            {
              ATerm u_70 = t;
              int y_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(o_27, p_27, q_27, t);
                  LocalPopChoice(y_70);
                }
              else
                {
                  t = u_70;
                  {
                    ATerm z_70 = t;
                    int a_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(r_27, s_27, t_27, t);
                        LocalPopChoice(a_71);
                      }
                    else
                      {
                        t = z_70;
                        {
                          ATerm c_71 = t;
                          int m_71 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(u_27, v_27, w_27, t);
                              LocalPopChoice(m_71);
                            }
                          else
                            {
                              t = c_71;
                              {
                                ATerm q_71 = t;
                                int r_71 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(x_27, y_27, z_27, t);
                                    LocalPopChoice(r_71);
                                  }
                                else
                                  {
                                    t = q_71;
                                    {
                                      ATerm s_71 = t;
                                      int t_71 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(a_28, c_28, d_28, t);
                                          LocalPopChoice(t_71);
                                        }
                                      else
                                        {
                                          t = s_71;
                                          {
                                            ATerm u_71 = t;
                                            int v_71 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(i_28, j_28, k_28, t);
                                                LocalPopChoice(v_71);
                                              }
                                            else
                                              {
                                                t = u_71;
                                                {
                                                  ATerm w_71 = t;
                                                  int x_71 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(l_28, m_28, o_28, t);
                                                      LocalPopChoice(x_71);
                                                    }
                                                  else
                                                    {
                                                      t = w_71;
                                                      {
                                                        ATerm y_71 = t;
                                                        int z_71 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(q_28, r_28, s_28, t);
                                                            LocalPopChoice(z_71);
                                                          }
                                                        else
                                                          {
                                                            t = y_71;
                                                            {
                                                              ATerm a_72 = t;
                                                              int b_72 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(z_28, a_29, b_29, t);
                                                                  LocalPopChoice(b_72);
                                                                }
                                                              else
                                                                {
                                                                  t = a_72;
                                                                  {
                                                                    ATerm c_72 = t;
                                                                    int g_72 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(c_29, d_29, e_29, t);
                                                                        LocalPopChoice(g_72);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_72;
                                                                        {
                                                                          ATerm h_72 = t;
                                                                          int i_72 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(f_29, g_29, h_29, t);
                                                                              LocalPopChoice(i_72);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_72;
                                                                              {
                                                                                ATerm j_72 = t;
                                                                                int l_72 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(j_29, k_29, l_29, t);
                                                                                    LocalPopChoice(l_72);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_72;
                                                                                    {
                                                                                      ATerm m_72 = t;
                                                                                      int n_72 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(n_72);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_72;
                                                                                          {
                                                                                            ATerm o_72 = t;
                                                                                            int r_72 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(m_29, n_29, o_29, t);
                                                                                                LocalPopChoice(r_72);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_72;
                                                                                                {
                                                                                                  ATerm v_72 = t;
                                                                                                  int w_72 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(p_29, q_29, r_29, t);
                                                                                                      LocalPopChoice(w_72);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_72;
                                                                                                      {
                                                                                                        ATerm x_72 = t;
                                                                                                        int y_72 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(s_29, t_29, v_29, t);
                                                                                                            LocalPopChoice(y_72);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_72;
                                                                                                            {
                                                                                                              ATerm z_72 = t;
                                                                                                              int a_73 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(w_29, a_30, b_30, t);
                                                                                                                  LocalPopChoice(a_73);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_72;
                                                                                                                  {
                                                                                                                    ATerm f_73 = t;
                                                                                                                    int g_73 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(c_30, d_30, f_30, t);
                                                                                                                        LocalPopChoice(g_73);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = f_73;
                                                                                                                        {
                                                                                                                          ATerm k_73 = t;
                                                                                                                          int o_73 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(g_30, k_30, l_30, t);
                                                                                                                              LocalPopChoice(o_73);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_73;
                                                                                                                              t = Option_3_0(m_30, o_30, p_30, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_74), term_j_61), term_w_74), term_f_74), term_c_74), term_j_61), term_z_73), term_w_73), term_v_73), term_u_73), term_t_73), term_s_73), term_r_73), term_q_73), term_p_73);
  return(t);
}
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  static ATerm b_77 (ATerm t)
  {
    ATerm w_76 = NULL,x_76 = NULL,a_77 = NULL;
    w_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_76;
      }
    else
      {
        ATerm z_40 = NULL,f_41 = NULL,g_41 = NULL,a_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_76 = ATgetFirst((ATermList) t);
            a_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_76);
        z_40 = t;
        t = x_76;
        t = t_87(t);
        f_41 = t;
        t = a_77;
        t = b_77(t);
        g_41 = t;
        t = (ATerm) ATinsert(CheckATermList(g_41), f_41);
        a_17 = t;
        t = SSLsetAnnotations(a_17, z_40);
      }
    return(t);
  }
  t = b_77(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_77 = ATgetFirst((ATermList) t);
      f_77 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_77 = NULL,m_77 = NULL;
        static ATerm q_30 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_77)), not_null(m_77));
          return(t);
        }
        t = f_77;
        t = k_0(t);
        if(((l_77 != NULL) && (l_77 != t)))
          _fail(t);
        else
          l_77 = t;
        t = e_77;
        t = i_0(t);
        if(((m_77 != NULL) && (m_77 != t)))
          _fail(t);
        else
          m_77 = t;
        t = f_77;
        t = reverse_acc_2_0(i_0, q_30, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_33;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_77 = NULL;
  t = term_f_33;
  t = g_0(t);
  n_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_76), n_77), term_n_76), term_j_61), term_m_76), term_j_61), term_l_76), term_g_75), term_j_61), term_f_75);
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_30 (ATerm t)
{
  ATerm e_78 = NULL;
  e_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_78), term_p_76);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,x_77 = NULL;
  ATerm q_76 = t;
  int r_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_76;
      t = get_config_0_0(t);
      t_77 = t;
      LocalPopChoice(r_76);
    }
  else
    {
      t = q_76;
      {
        static ATerm r_30 (ATerm t)
        {
          ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,e_17 = NULL;
          a_78 = t;
          if(match_cons(t, sym_Program_1))
            {
              z_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_78);
          y_77 = t;
          t = z_77;
          if(((t_77 != NULL) && (t_77 != t)))
            _fail(t);
          else
            t_77 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, z_77);
          e_17 = t;
          t = SSLsetAnnotations(e_17, y_77);
          return(t);
        }
        t = fetch_1_0(r_30, t);
      }
    }
  {
    ATerm t_76 = t;
    int u_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_30 (ATerm t)
        {
          t = not_null(t_77);
          return(t);
        }
        t = short_description_1_0(s_30, t);
        t = echo_0_0(t);
        LocalPopChoice(u_76);
      }
    else
      {
        t = t_76;
      }
  }
  t = term_v_76;
  t = echo_0_0(t);
  t = term_g_66;
  u_77 = t;
  t = term_i_66;
  x_77 = t;
  t = term_y_76;
  t = v_13(u_77, x_77, t);
  t = reverse_acc_2_0(_id, u_30, t);
  t = map_1_0(v_30, t);
  {
    ATerm z_76 = t;
    int c_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_78 = NULL;
        static ATerm w_30 (ATerm t)
        {
          t = not_null(t_77);
          return(t);
        }
        t = long_description_1_0(w_30, t);
        f_78 = t;
        t = (ATerm) ATinsert(CheckATermList(f_78), term_j_61);
        t = echo_0_0(t);
        LocalPopChoice(c_77);
      }
    else
      {
        t = z_76;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  static ATerm m_79 (ATerm t)
  {
    ATerm h_79 = NULL,k_79 = NULL,l_79 = NULL;
    h_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_79 = ATgetFirst((ATermList) t);
        l_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_77 = t;
      int g_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = NULL,x_41 = NULL,g_17 = NULL;
          t = SSLgetAnnotations(h_79);
          u_41 = t;
          t = k_79;
          t = d_88(t);
          x_41 = t;
          t = (ATerm) ATinsert(CheckATermList(l_79), x_41);
          g_17 = t;
          t = SSLsetAnnotations(g_17, u_41);
          LocalPopChoice(g_77);
        }
      else
        {
          t = d_77;
          {
            ATerm h_42 = NULL,k_42 = NULL,j_17 = NULL;
            t = SSLgetAnnotations(h_79);
            h_42 = t;
            t = l_79;
            t = m_79(t);
            k_42 = t;
            t = (ATerm) ATinsert(CheckATermList(k_42), k_79);
            j_17 = t;
            t = SSLsetAnnotations(j_17, h_42);
          }
        }
    }
    return(t);
  }
  t = m_79(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,w_79 = NULL;
  r_79 = t;
  {
    ATerm h_77 = t;
    int i_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_77 = ATgetFirst((ATermList) t);
                ATerm k_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_79;
          }
        LocalPopChoice(i_77);
      }
    else
      {
        t = h_77;
        t = (ATerm) ATinsert(ATempty, r_79);
      }
  }
  s_79 = t;
  t = term_j_33;
  w_79 = t;
  t = SSL_printnl(w_79, s_79);
  t = r_79;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_76;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  ATerm c_80 = NULL,g_80 = NULL;
  t = term_o_77;
  c_80 = t;
  t = term_f_33;
  g_80 = t;
  t = term_p_77;
  t = y_13(c_80, g_80, t);
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_q_77;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_31 (ATerm t)
{
  ATerm k_80 = NULL,r_80 = NULL,t_80 = NULL,u_80 = NULL;
  t = term_o_77;
  t_80 = t;
  t = term_f_33;
  u_80 = t;
  t = term_p_77;
  t = y_13(t_80, u_80, t);
  t = term_x_69;
  k_80 = t;
  t = term_f_33;
  r_80 = t;
  t = term_y_69;
  t = y_13(k_80, r_80, t);
  t = term_r_77;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_s_77;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_77 = t;
  int w_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_30, z_30, a_31, t);
      LocalPopChoice(w_77);
    }
  else
    {
      t = v_77;
      t = Option_3_0(b_31, c_31, f_31, t);
    }
  return(t);
}
static ATerm v_13 (ATerm f_53, ATerm g_53, ATerm t)
{
  t = SSL_table_get(f_53, g_53);
  return(t);
}
static ATerm w_13 (ATerm o_51, ATerm p_51, ATerm n_51, ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
  {
    ATerm b_78 = t;
    int c_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_78 = ATgetArgument(t, 0);
            ATerm g_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
        t = v_13(o_51, p_51, t);
        LocalPopChoice(c_78);
      }
    else
      {
        t = b_78;
        t = (ATerm) ATempty;
      }
  }
  x_80 = t;
  t = (ATerm) ATinsert(CheckATermList(x_80), n_51);
  y_80 = t;
  t = SSL_table_put(o_51, p_51, y_80);
  t = w_80;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL;
      t = term_f_33;
      t = e_0(t);
      n_81 = t;
      t = term_g_66;
      o_81 = t;
      t = term_i_66;
      p_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_66, term_i_66, n_81);
      t = w_13(o_81, p_81, n_81, t);
      _fail(t);
    }
  else
    {
      ATerm u_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_81 = ATgetFirst((ATermList) t);
          m_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_81;
      t = c_0(t);
      t = term_f_33;
      t = d_0(t);
      u_81 = t;
      t = (ATerm) ATinsert(CheckATermList(m_81), u_81);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,z_81 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,s_17 = NULL;
  e_82 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_81 = ATgetFirst((ATermList) t);
      b_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_82);
  v_81 = t;
  t = z_81;
  t = i_58(t);
  c_82 = t;
  t = b_82;
  t = j_58(t);
  d_82 = t;
  t = (ATerm) ATinsert(CheckATermList(d_82), c_82);
  s_17 = t;
  t = SSLsetAnnotations(s_17, v_81);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm l_82 = NULL,q_82 = NULL,v_82 = NULL,w_82 = NULL,z_82 = NULL,a_83 = NULL,w_17 = NULL;
  l_82 = t;
  {
    ATerm h_78 = t;
    int i_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_78;
        t = b_107(t);
        LocalPopChoice(i_78);
      }
    else
      {
        t = h_78;
      }
  }
  t = l_82;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_82 = ATgetFirst((ATermList) t);
      w_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_82);
  q_82 = t;
  t = term_s_76;
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_76, v_82);
  t = y_13(a_83, v_82, t);
  t = w_82;
  {
    static ATerm s_83 (ATerm t)
    {
      ATerm k_78 = t;
      int l_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_78 = t;
          int n_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_83 = NULL;
              j_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_83;
              LocalPopChoice(n_78);
            }
          else
            {
              t = m_78;
              t = b_107(t);
              t = Cons_2_0(_id, s_83, t);
            }
          LocalPopChoice(l_78);
        }
      else
        {
          t = k_78;
          {
            ATerm m_83 = NULL,n_83 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_83 = ATgetFirst((ATermList) t);
                n_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_83), (ATerm) ATmakeAppl(sym_Undefined_1, m_83));
          }
        }
      return(t);
    }
    t = s_83(t);
  }
  z_82 = t;
  t = (ATerm) ATinsert(CheckATermList(z_82), (ATerm) ATmakeAppl(sym_Program_1, v_82));
  w_17 = t;
  t = SSLsetAnnotations(w_17, q_82);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  ATerm o_84 = NULL;
  o_84 = t;
  if(match_string(t, "--help"))
    {
      t = o_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_84;
        }
    }
  return(t);
}
static ATerm m_31 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL;
  t = term_i_69;
  p_84 = t;
  t = term_f_33;
  q_84 = t;
  t = term_p_69;
  t = y_13(p_84, q_84, t);
  t = term_o_78;
  return(t);
}
static ATerm p_31 (ATerm t)
{
  t = term_p_78;
  return(t);
}
static ATerm q_31 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm z_83 = NULL,c_84 = NULL,f_84 = NULL,h_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  f_84 = t;
  t = term_g_66;
  l_84 = t;
  t = term_i_66;
  m_84 = t;
  t = (ATerm) ATempty;
  n_84 = t;
  t = SSL_table_put(l_84, m_84, n_84);
  t = f_84;
  {
    static ATerm g_31 (ATerm t)
    {
      ATerm q_78 = t;
      int r_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_107(t);
          LocalPopChoice(r_78);
        }
      else
        {
          t = q_78;
          {
            ATerm s_78 = t;
            int t_78 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_31, m_31, p_31, t);
                LocalPopChoice(t_78);
              }
            else
              {
                t = s_78;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_31, t);
  }
  {
    ATerm u_78 = t;
    int v_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_85 = NULL;
        r_85 = t;
        {
          ATerm w_78 = t;
          int x_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_42 = NULL;
              t = r_85;
              {
                ATerm y_78 = t;
                int c_79 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_69;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_79);
                  }
                else
                  {
                    t = y_78;
                    t = fetch_1_0(q_31, t);
                  }
              }
              t = r_85;
              t = default_system_usage_0_0(t);
              t = term_e_32;
              x_42 = t;
              t = SSL_exit(x_42);
              LocalPopChoice(x_78);
            }
          else
            {
              t = w_78;
              {
                ATerm i_43 = NULL;
                t = term_o_77;
                t = get_config_0_0(t);
                t = r_85;
                t = default_system_about_0_0(t);
                t = term_e_32;
                i_43 = t;
                t = SSL_exit(i_43);
              }
            }
        }
        LocalPopChoice(v_78);
      }
    else
      {
        t = u_78;
        {
          ATerm d_79 = t;
          int e_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_85 = NULL,u_85 = NULL,w_85 = NULL;
              static ATerm s_31 (ATerm t)
              {
                ATerm f_86 = NULL,g_86 = NULL,r_86 = NULL,d_18 = NULL;
                r_86 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_86);
                f_86 = t;
                t = g_86;
                if(((z_83 != NULL) && (z_83 != t)))
                  _fail(t);
                else
                  z_83 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_86);
                d_18 = t;
                t = SSLsetAnnotations(d_18, f_86);
                return(t);
              }
              t = fetch_1_0(s_31, t);
              t = term_l_32;
              u_85 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), term_f_79);
              w_85 = t;
              t = SSL_printnl(u_85, w_85);
              t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), term_f_79));
              t = default_system_usage_0_0(t);
              t = term_k_35;
              t_85 = t;
              t = SSL_exit(t_85);
              LocalPopChoice(e_79);
            }
          else
            {
              t = d_79;
            }
        }
      }
  }
  c_84 = t;
  t = term_g_66;
  h_84 = t;
  t = SSL_table_destroy(h_84);
  t = c_84;
  return(t);
}
static ATerm y_13 (ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm w_86 = NULL;
  t = term_n_58;
  w_86 = t;
  t = SSL_table_put(w_86, o_46, p_46);
  t = (ATerm) ATmakeAppl(sym__3, term_n_58, o_46, p_46);
  return(t);
}
static ATerm z_13 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL;
  e_87 = t;
  t = SSL_explode_string(e_87);
  {
    ATerm g_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_88 (ATerm t)
        {
          ATerm l_88 = NULL,m_88 = NULL,o_88 = NULL;
          l_88 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_88 = ATgetFirst((ATermList) t);
              o_88 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm j_79 = t;
            int n_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_43 = NULL,e_44 = NULL,l_18 = NULL;
                t = SSLgetAnnotations(l_88);
                r_43 = t;
                t = o_88;
                t = p_88(t);
                e_44 = t;
                t = (ATerm) ATinsert(CheckATermList(e_44), m_88);
                l_18 = t;
                t = SSLsetAnnotations(l_18, r_43);
                LocalPopChoice(n_79);
              }
            else
              {
                t = j_79;
                {
                  ATerm t_44 = NULL,o_18 = NULL;
                  t = SSLgetAnnotations(l_88);
                  t_44 = t;
                  t = m_88;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, m_88);
                  o_18 = t;
                  t = SSLsetAnnotations(o_18, t_44);
                }
              }
          }
          return(t);
        }
        t = p_88(t);
        LocalPopChoice(i_79);
      }
    else
      {
        t = g_79;
        t = (ATerm) ATempty;
      }
  }
  d_87 = t;
  t = SSL_implode_string(d_87);
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
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,g_89 = NULL,j_89 = NULL,m_89 = NULL,n_89 = NULL,p_89 = NULL,t_89 = NULL,w_89 = NULL,z_89 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,l_91 = NULL,n_91 = NULL,p_91 = NULL;
  u_88 = t;
  t = term_c_61;
  n_91 = t;
  t = term_o_79;
  p_91 = t;
  t = term_p_79;
  t = y_13(n_91, p_91, t);
  t = term_j_32;
  x_90 = t;
  t = term_k_35;
  l_91 = t;
  t = term_q_79;
  t = y_13(x_90, l_91, t);
  t = term_q_37;
  v_90 = t;
  t = term_e_32;
  w_90 = t;
  t = term_t_79;
  t = y_13(v_90, w_90, t);
  t = term_t_37;
  s_90 = t;
  t = term_u_38;
  u_90 = t;
  t = term_u_79;
  t = y_13(s_90, u_90, t);
  t = term_v_79;
  t = xtc_find_path_0_0(t);
  j_89 = t;
  t = term_x_79;
  t = xtc_find_path_0_0(t);
  m_89 = t;
  t = term_y_79;
  t = xtc_find_path_0_0(t);
  n_89 = t;
  t = term_j_54;
  q_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_89), term_j_54), m_89), term_j_54), j_89), term_j_54);
  r_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_54, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_89), term_j_54), m_89), term_j_54), j_89), term_j_54));
  t = y_13(q_90, r_90, t);
  t = term_y_33;
  o_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_80), term_z_79);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_80), term_z_79));
  t = y_13(o_90, p_90, t);
  t = term_b_80;
  t = xtc_find_path_0_0(t);
  g_89 = t;
  t = term_f_80;
  k_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_89, term_f_80);
  t = z_13(g_89, k_90, t);
  a_89 = t;
  t = term_b_80;
  t = xtc_find_path_0_0(t);
  e_89 = t;
  t = term_f_80;
  j_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_89, term_f_80);
  t = z_13(e_89, j_90, t);
  b_89 = t;
  t = term_j_80;
  t = xtc_find_path_0_0(t);
  d_89 = t;
  t = term_f_80;
  i_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_89, term_f_80);
  t = z_13(d_89, i_90, t);
  c_89 = t;
  t = term_x_32;
  e_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_89), term_j_54), b_89), term_j_54), a_89), term_j_54);
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_89), term_j_54), b_89), term_j_54), a_89), term_j_54));
  t = y_13(e_90, f_90, t);
  t = term_b_80;
  t = xtc_find_path_0_0(t);
  z_88 = t;
  t = term_l_80;
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_88, term_l_80);
  t = z_13(z_88, d_90, t);
  v_88 = t;
  t = term_j_80;
  t = xtc_find_path_0_0(t);
  x_88 = t;
  t = term_m_80;
  c_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_88, term_m_80);
  t = z_13(x_88, c_90, t);
  w_88 = t;
  t = term_r_32;
  w_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_80), term_q_80), w_88), term_n_80), term_p_80), term_o_80), v_88), term_n_80);
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_80), term_q_80), w_88), term_n_80), term_p_80), term_o_80), v_88), term_n_80));
  t = y_13(w_89, z_89, t);
  t = term_e_50;
  p_89 = t;
  t = (ATerm) ATinsert(ATempty, term_v_80);
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_50, (ATerm) ATinsert(ATempty, term_v_80));
  t = y_13(p_89, t_89, t);
  t = u_88;
  return(t);
}
static ATerm t_31 (ATerm t)
{
  ATerm z_92 = NULL;
  z_92 = t;
  t = term_b_50;
  t = get_config_0_0(t);
  t = debug_1_0(x_31, t);
  t = z_92;
  return(t);
}
static ATerm x_31 (ATerm t)
{
  t = term_z_80;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm a_81 = t;
    int b_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_92 = NULL,h_92 = NULL,i_92 = NULL;
        t = term_u_69;
        t = get_config_0_0(t);
        t = term_c_81;
        t = xtc_find_0_0(t);
        f_92 = t;
        t = term_j_33;
        i_92 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_92, term_j_33);
        t = h_13(f_92, i_92, t);
        t = term_e_32;
        h_92 = t;
        t = SSL_exit(h_92);
        LocalPopChoice(b_81);
      }
    else
      {
        t = a_81;
      }
  }
  {
    ATerm d_81 = t;
    int e_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_92 = NULL;
        t = term_x_69;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = term_e_32;
        o_92 = t;
        t = SSL_exit(o_92);
        LocalPopChoice(e_81);
      }
    else
      {
        t = d_81;
      }
  }
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_92 = NULL;
        r_92 = t;
        t = term_b_50;
        t = get_config_0_0(t);
        t = r_92;
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
        {
          ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL;
          t = term_l_32;
          w_92 = t;
          t = (ATerm) ATinsert(ATempty, term_h_81);
          x_92 = t;
          t = SSL_printnl(w_92, x_92);
          t = term_k_35;
          v_92 = t;
          t = SSL_exit(v_92);
          t = (ATerm) ATinsert(ATempty, term_h_81);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(t_31, t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  t = if_verbose1_1_0(a_32, t);
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = xtc_temp_files_1_0(b_32, t);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  d_93 = t;
  t = term_l_32;
  e_93 = t;
  t = (ATerm) ATinsert(CheckATermList(d_93), term_i_81);
  f_93 = t;
  t = SSL_printnl(e_93, f_93);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(CheckATermList(d_93), term_i_81));
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm j_81 = t;
  int k_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_93 = NULL;
      t = term_b_50;
      t = get_config_0_0(t);
      h_93 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_93);
      LocalPopChoice(k_81);
    }
  else
    {
      t = j_81;
      t = term_p_52;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm i_93 = NULL,j_93 = NULL,k_93 = NULL;
  t = run_time_0_0(t);
  i_93 = t;
  t = term_l_32;
  j_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_81), i_93), term_q_81);
  k_93 = t;
  t = SSL_printnl(j_93, k_93);
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_81), i_93), term_q_81));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm s_81 = t;
  int t_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_93 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(y_31, z_31, t);
      t = if_verbose2_1_0(c_32, t);
      t = term_e_32;
      a_93 = t;
      t = SSL_exit(a_93);
      LocalPopChoice(t_81);
    }
  else
    {
      t = s_81;
      {
        ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,r_93 = NULL;
        t = run_time_0_0(t);
        n_93 = t;
        t = term_l_32;
        p_93 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_81), n_93), term_w_81);
        r_93 = t;
        t = SSL_printnl(p_93, r_93);
        t = term_k_35;
        o_93 = t;
        t = SSL_exit(o_93);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
