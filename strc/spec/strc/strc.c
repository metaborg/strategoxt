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
ATerm term_s_82;
ATerm term_l_82;
ATerm term_k_82;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_a_82;
ATerm term_v_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_p_81;
ATerm term_o_81;
ATerm term_m_81;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_f_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_z_80;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_q_80;
ATerm term_p_80;
ATerm term_z_79;
ATerm term_w_78;
ATerm term_v_78;
ATerm term_o_78;
ATerm term_d_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_a_78;
ATerm term_z_77;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_k_77;
ATerm term_b_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_k_76;
ATerm term_j_76;
ATerm term_i_76;
ATerm term_h_76;
ATerm term_g_76;
ATerm term_f_76;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_i_71;
ATerm term_h_71;
ATerm term_g_71;
ATerm term_f_71;
ATerm term_e_71;
ATerm term_b_71;
ATerm term_a_71;
ATerm term_z_70;
ATerm term_y_70;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_r_70;
ATerm term_i_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_z_69;
ATerm term_w_69;
ATerm term_u_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_z_67;
ATerm term_w_67;
ATerm term_u_67;
ATerm term_t_67;
ATerm term_q_67;
ATerm term_p_67;
ATerm term_n_67;
ATerm term_i_67;
ATerm term_h_67;
ATerm term_c_67;
ATerm term_y_66;
ATerm term_x_66;
ATerm term_o_66;
ATerm term_i_66;
ATerm term_b_66;
ATerm term_x_65;
ATerm term_v_65;
ATerm term_k_65;
ATerm term_t_64;
ATerm term_r_64;
ATerm term_p_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_g_64;
ATerm term_b_64;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_n_63;
ATerm term_d_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_t_61;
ATerm term_s_61;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_y_59;
ATerm term_o_59;
ATerm term_g_59;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_m_58;
ATerm term_i_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_e_58;
ATerm term_d_58;
ATerm term_c_58;
ATerm term_x_57;
ATerm term_p_56;
ATerm term_e_56;
ATerm term_a_56;
ATerm term_z_55;
ATerm term_l_55;
ATerm term_g_55;
ATerm term_c_55;
ATerm term_m_54;
ATerm term_h_54;
ATerm term_e_54;
ATerm term_y_53;
ATerm term_j_53;
ATerm term_e_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_c_52;
ATerm term_a_52;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_m_51;
ATerm term_j_51;
ATerm term_f_51;
ATerm term_d_51;
ATerm term_w_50;
ATerm term_m_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_f_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
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
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_x_43;
ATerm term_k_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_g_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_c_39;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_d_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_b_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_s_32;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in ", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(", concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_44, term_d_36, term_j_44);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_44, term_a_33, term_m_44);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_44, term_u_36, term_p_44);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_44, term_j_39, term_s_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_44, term_v_44, term_w_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_44, term_z_44, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_45, term_d_45, term_e_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_45, term_h_45, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_45, term_l_45, term_m_45);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_45, term_p_45, term_q_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_45, term_t_45, term_u_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_c_39, term_y_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_c_46, term_d_46);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_46, term_i_46, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_46, term_y_46, term_z_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_e_47, term_f_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_47, term_i_47, term_k_47);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_47, term_x_47, term_y_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_48, term_b_48, term_c_48);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_48, term_f_48, term_g_48);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_48, term_m_48, term_n_48);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_48, term_s_48, term_t_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_48, term_x_48, term_y_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_49, term_z_41, term_d_49);
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_49, term_g_49, term_h_49);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_49, term_l_49, term_o_49);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_49, term_z_49, term_a_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym__2, term_s_52, term_r_52);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_56));
  term_a_56 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(sym__2, term_r_64, term_b_66);
  ATprotect(&(term_o_66));
  term_o_66 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(sym__2, term_r_64, term_t_64);
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_s_32);
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_32);
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(sym__2, term_z_67, term_r_34);
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_r_34);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_r_34);
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(sym__2, term_e_54, term_r_34);
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(sym__2, term_m_51, term_r_34);
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_r_34);
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(sym__2, term_i_70, term_r_34);
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym__2, term_w_70, term_r_34);
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(sym__2, term_z_70, term_r_34);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_d_36);
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_c_52, term_s_32);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(sym__2, term_g_55, term_r_34);
  ATprotect(&(term_i_71));
  term_i_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(sym__2, term_n_67, term_p_67);
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(sym__2, term_z_77, term_r_34);
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_78));
  term_d_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_78));
  term_v_78 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(sym__2, term_l_61, term_p_80);
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_d_36);
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_s_32);
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_j_39);
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_k_82));
  term_k_82 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_82));
  term_s_82 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_103 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm s_12 (ATerm m_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm t_12 (ATerm k_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm u_12 (ATerm u_43, ATerm t_43, ATerm t);
ATerm rename_to_1_0 (ATerm b_1 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
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
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
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
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm s_10 (ATerm t);
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
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm y_13 (ATerm t);
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
static ATerm q_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm save_as_1_0 (ATerm e_80 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t);
static ATerm y_12 (ATerm q_48, ATerm r_48, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm l_113 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm z_20 (ATerm), ATerm a_21 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm w_104 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm u_104 (ATerm), ATerm t);
static ATerm v_12 (ATerm d_80 (ATerm), ATerm f_21, ATerm t);
static ATerm w_12 (ATerm z_22, ATerm a_23, ATerm t);
static ATerm x_12 (ATerm n_88 (ATerm), ATerm u_189, ATerm h_23, ATerm t);
static ATerm a_13 (ATerm j_101 (ATerm), ATerm f_42, ATerm d_42, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm j_19 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm m_112 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm s_19 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm x_19 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm c_80 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm s_103 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm y_98 (ATerm), ATerm t);
static ATerm c_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm b_13 (ATerm b_21, ATerm t);
static ATerm l_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm e_22 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm u_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm c_13 (ATerm t_52, ATerm u_52, ATerm t);
ATerm end_scope_1_0 (ATerm g_101 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_101 (ATerm), ATerm t);
static ATerm a_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_112 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm q_103 (ATerm), ATerm t);
static ATerm e_13 (ATerm r_40, ATerm s_40, ATerm t);
static ATerm g_13 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm h_13 (ATerm q_49, ATerm s_49, ATerm u_49, ATerm w_49, ATerm r_49, ATerm t_49, ATerm v_49, ATerm x_49, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm i_13 (ATerm v_43, ATerm w_43, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm v_103 (ATerm), ATerm t);
static ATerm l_13 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm a_29, ATerm z_28, ATerm t);
static ATerm m_13 (ATerm a_93 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm h_25 (ATerm t);
static ATerm n_13 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t);
static ATerm o_13 (ATerm m_108 (ATerm), ATerm v_53, ATerm u_53, ATerm t);
static ATerm s_13 (ATerm q_37, ATerm r_37, ATerm t);
static ATerm u_62 (ATerm l_62, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_13 (ATerm f_23, ATerm t);
static ATerm q_13 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_65 (ATerm j_63, ATerm t);
static ATerm d_65 (ATerm o_63, ATerm p_63, ATerm r_63, ATerm t);
static ATerm e_65 (ATerm h_64, ATerm i_64, ATerm j_64, ATerm t);
static ATerm r_13 (ATerm t);
static ATerm j_25 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm t_25 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm g_69 (ATerm j_68, ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm t_13 (ATerm u_47, ATerm t_47, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm p_26 (ATerm t);
static ATerm q_26 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_13 (ATerm r_47, ATerm s_47, ATerm t);
ATerm at_end_1_0 (ATerm m_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_72 (ATerm z_71, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_13 (ATerm v_47, ATerm w_47, ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_27 (ATerm t);
static ATerm u_27 (ATerm t);
static ATerm v_27 (ATerm t);
ATerm input_option_0_0 (ATerm t);
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
static ATerm h_28 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm y_28 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
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
static ATerm x_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm a_30 (ATerm t);
static ATerm b_30 (ATerm t);
static ATerm f_30 (ATerm t);
static ATerm h_30 (ATerm t);
static ATerm i_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm s_30 (ATerm t);
static ATerm t_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm e_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm l_31 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_88 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t);
static ATerm s_31 (ATerm t);
static ATerm u_31 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm z_31 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm w_13 (ATerm f_54, ATerm g_54, ATerm t);
static ATerm x_13 (ATerm o_52, ATerm p_52, ATerm n_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_108 (ATerm), ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
ATerm parse_options_1_0 (ATerm i_108 (ATerm), ATerm t);
static ATerm z_13 (ATerm o_47, ATerm p_47, ATerm t);
static ATerm a_14 (ATerm q_36, ATerm r_36, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm l_32 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm q_32 (ATerm t);
static ATerm r_32 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = z_94(t);
    }
  else
    {
      ATerm q_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_0;
      t = foldr_2_0(z_94, a_95, t);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, q_0);
      t = a_95(t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_13(c_1, d_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_0 = NULL,a_0 = NULL,h_0 = NULL;
  t = times_0_0(t);
  h_0 = t;
  t = SSL_explode_term(h_0);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(f_0, j_0, t);
  w_0 = t;
  t = SSL_TicksToSeconds(w_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm g_1 = NULL;
  g_1 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_a_33);
        t = geq_0_0(t);
        t = g_1;
        t = r_103(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = g_1;
      }
  }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  t = term_c_33;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_e_33);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = q_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL;
  t_1 = t;
  t = term_c_33;
  w_1 = t;
  t = (ATerm) ATinsert(ATempty, t_1);
  x_1 = t;
  t = SSL_printnl(w_1, x_1);
  t = t_1;
  return(t);
}
static ATerm s_12 (ATerm m_21, ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
  t = if_verbose2_1_0(e_1, t);
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_33;
        t = get_config_0_0(t);
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
        t = get_outfile_1_0(f_1, t);
      }
  }
  m_1 = t;
  t = term_k_33;
  t = get_config_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_1), m_1), term_j_33), m_21));
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
      t = y_12(o_1, p_1, t);
      t = term_n_33;
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
  ATerm k_2 = NULL,l_2 = NULL,n_2 = NULL;
  k_2 = t;
  t = term_c_33;
  l_2 = t;
  t = (ATerm) ATinsert(ATempty, term_p_33);
  n_2 = t;
  t = SSL_printnl(l_2, n_2);
  t = k_2;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_r_33;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  t = term_c_33;
  p_2 = t;
  t = (ATerm) ATinsert(ATempty, o_2);
  q_2 = t;
  t = SSL_printnl(p_2, q_2);
  t = o_2;
  return(t);
}
static ATerm t_12 (ATerm k_21, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(l_1, t);
  b_2 = t;
  t = term_u_33;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_j_33), k_21), term_v_33));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, c_2);
  t = if_verbose3_1_0(v_1, t);
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
      t = y_12(e_2, f_2, t);
      t = term_n_33;
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
  t = t_12(a_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(z_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = term_c_33;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_2), term_b_34);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(w_2), term_b_34));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm c_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      s_2 = t;
      t = term_v_33;
      t = get_config_0_0(t);
      t = s_2;
      LocalPopChoice(i_34);
    }
  else
    {
      t = c_34;
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
static ATerm u_12 (ATerm u_43, ATerm t_43, ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(u_43, t_43);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = get_errno_0_0(t);
      t = term_r_34;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, u_43, t_43);
      t = i_13(u_43, t_43, t);
      t = SSL_remove(u_43);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm b_1 (ATerm), ATerm t)
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
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = t_3;
        t = b_1(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_u_34;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, term_u_34);
        t = i_13(u_3, u_1, t);
        t = SSL_remove(u_3);
        t = term_u_34;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm w_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = t_3;
              t = b_1(t);
              i_2 = t;
              {
                ATerm d_35 = t;
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
                    t = d_35;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_3, i_2);
              t = u_12(u_3, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(y_34);
            }
          else
            {
              t = w_34;
              t = t_3;
              t = b_1(t);
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
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = term_e_35;
  y_3 = t;
  t = term_f_35;
  t = xtc_find_0_0(t);
  a_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_g_35);
  z_3 = t;
  t = c_4;
  t = comp_0_2(y_3, z_3, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_4 = NULL;
  m_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_h_35);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = term_j_35;
  d_4 = t;
  t = l_4;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_35;
        t = get_config_0_0(t);
        t = l_4;
        LocalPopChoice(l_35);
        t = (ATerm) ATinsert(ATempty, term_m_35);
      }
    else
      {
        t = k_35;
        t = (ATerm) ATempty;
      }
  }
  i_4 = t;
  t = term_h_35;
  t = get_config_0_0(t);
  t = foldr_3_0(m_2, conc_0_0, t_2, t);
  k_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_4), k_4);
  t = concat_0_0(t);
  g_4 = t;
  t = l_4;
  t = comp_0_2(d_4, g_4, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_4 = NULL,a_5 = NULL,d_5 = NULL;
  y_4 = t;
  t = term_c_33;
  a_5 = t;
  t = (ATerm) ATinsert(ATempty, term_n_35);
  d_5 = t;
  t = SSL_printnl(a_5, d_5);
  t = y_4;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,n_5 = NULL;
  n_5 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_5 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,m_0 = NULL;
              t = SSLgetAnnotations(n_5);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_5);
              m_0 = t;
              t = SSLsetAnnotations(m_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_5;
          }
        LocalPopChoice(p_35);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = o_35;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
  }
  t = if_keep1_1_0(j_3, t);
  t = olevel_2_0(l_3, n_3, t);
  t = olevel_2_0(v_4, w_4, t);
  l_5 = t;
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_6 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(l_5);
              h_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_6);
              y_0 = t;
              t = SSLsetAnnotations(y_0, h_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_5;
          }
        LocalPopChoice(s_35);
        t = xtc_transform_file_2_0(c_5, h_5, t);
      }
    else
      {
        t = r_35;
        t = xtc_transform_term_2_0(s_5, c_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  k_5 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_7 = ATgetArgument(t, 0);
            {
              ATerm p_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(k_5);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_7);
              a_1 = t;
              t = SSLsetAnnotations(a_1, p_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_5;
          }
        LocalPopChoice(u_35);
        t = xtc_transform_file_2_0(m_6, pass_verbose_0_0, t);
      }
    else
      {
        t = t_35;
        t = xtc_transform_term_2_0(n_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(o_6, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  t = term_c_33;
  f_5 = t;
  t = (ATerm) ATinsert(CheckATermList(e_5), term_v_35);
  g_5 = t;
  t = SSL_printnl(f_5, g_5);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(e_5), term_v_35));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_5 = NULL;
  t = pass_verbose_0_0(t);
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(t_5), term_y_35);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_5 = NULL;
  t = pass_verbose_0_0(t);
  u_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_5), term_y_35);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  w_5 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_6 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,s_0 = NULL;
              t = SSLgetAnnotations(w_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_6);
              s_0 = t;
              t = SSLsetAnnotations(s_0, f_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_5;
          }
        LocalPopChoice(h_36);
        t = xtc_transform_file_2_0(p_3, s_3, t);
      }
    else
      {
        t = g_36;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(b_4, t);
  v_5 = t;
  {
    ATerm j_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_6 = ATgetArgument(t, 0);
            {
              ATerm m_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(v_5);
              m_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_6);
              u_0 = t;
              t = SSLsetAnnotations(u_0, m_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_5;
          }
        LocalPopChoice(l_36);
        t = xtc_transform_file_2_0(f_4, j_4, t);
      }
    else
      {
        t = j_36;
        t = xtc_transform_term_2_0(n_4, o_4, t);
      }
  }
  t = if_keep1_1_0(q_4, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_m_36;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_y_35);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_m_36;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_y_35);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = save_as_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_n_36;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm r_6 = NULL;
  t = pass_verbose_0_0(t);
  r_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), term_y_35);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm s_6 = NULL;
  t = pass_verbose_0_0(t);
  s_6 = t;
  t = (ATerm) ATinsert(CheckATermList(s_6), term_y_35);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = save_as_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_t_36;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(z_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = save_as_1_0(b_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_v_36;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_y_35);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_y_35);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = get_outfile_1_0(p_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_y_36;
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
  t = term_c_33;
  f_8 = t;
  t = (ATerm) ATinsert(ATempty, term_z_36);
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
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  t = term_c_33;
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(h_8), term_a_37);
  j_8 = t;
  t = SSL_printnl(i_8, j_8);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(h_8), term_a_37));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_b_37;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm k_9 = NULL;
  t = pass_verbose_0_0(t);
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), term_e_37);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm l_9 = NULL;
  t = pass_verbose_0_0(t);
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(l_9), term_e_37);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8 = NULL;
      a_8 = t;
      t = term_m_35;
      t = get_config_0_0(t);
      t = a_8;
      LocalPopChoice(h_37);
      {
        ATerm b_8 = NULL;
        b_8 = t;
        t = if_verbose2_1_0(q_6, t);
        {
          static ATerm u_6 (ATerm t)
          {
            ATerm l_8 = NULL,q_8 = NULL,t_8 = NULL,y_8 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
            u_4 = t;
            t = term_i_37;
            s_4 = t;
            t = (ATerm) ATinsert(ATempty, term_j_37);
            t_4 = t;
            t = u_4;
            t = comp_0_2(s_4, t_4, t);
            l_8 = t;
            {
              ATerm k_37 = t;
              int l_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_8 = NULL,a_9 = NULL;
                  t = term_m_37;
                  t = get_config_0_0(t);
                  z_8 = t;
                  t = term_n_37;
                  t = get_config_0_0(t);
                  a_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
                  {
                    ATerm s_37 = t;
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
                        t = s_37;
                      }
                  }
                  LocalPopChoice(l_37);
                }
              else
                {
                  t = k_37;
                  t = term_m_37;
                  t = get_config_0_0(t);
                  t = debug_1_0(w_6, t);
                  _fail(t);
                }
            }
            t = l_8;
            {
              static ATerm y_6 (ATerm t)
              {
                t = get_outfile_1_0(z_6, t);
                if(((y_7 != NULL) && (y_7 != t)))
                  _fail(t);
                else
                  y_7 = t;
                return(t);
              }
              t = copy_to_1_0(y_6, t);
            }
            {
              ATerm t_37 = t;
              int u_37 = stack_ptr;
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
                  LocalPopChoice(u_37);
                  t = xtc_transform_file_2_0(c_7, e_7, t);
                }
              else
                {
                  t = t_37;
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
            q_8 = t;
            t = term_c_33;
            t_8 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_7)), term_x_37), not_null(y_7)), term_v_37));
            y_8 = t;
            t = SSL_printnl(t_8, y_8);
            t = q_8;
            return(t);
          }
          t = profile_p__2_0(t_6, u_6, t);
        }
        t = b_8;
      }
    }
  else
    {
      t = g_37;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm a_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_d_36);
        t = geq_0_0(t);
        t = q_9;
        t = s_104(t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = a_38;
        t = q_9;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL,d_10 = NULL;
        t = y_9;
        t = p_113(t);
        b_10 = t;
        t = term_h_38;
        t = get_config_0_0(t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, b_10);
        t = geq_0_0(t);
        t = y_9;
        t = q_113(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = y_9;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_y_35);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm o_7 = NULL;
  t = pass_verbose_0_0(t);
  o_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), term_y_35);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_8 = NULL;
  t = pass_verbose_0_0(t);
  s_8 = t;
  t = (ATerm) ATinsert(CheckATermList(s_8), term_y_35);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_i_38;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_y_35);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  {
    ATerm j_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_11;
        {
          ATerm m_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  a_7 = ATgetArgument(t, 0);
                  {
                    ATerm w_7 = NULL,q_3 = NULL;
                    t = SSLgetAnnotations(n_11);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
                    q_3 = t;
                    t = SSLsetAnnotations(q_3, w_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = n_11;
                }
              LocalPopChoice(n_38);
              t = xtc_transform_file_2_0(l_7, m_7, t);
            }
          else
            {
              t = m_38;
              t = xtc_transform_term_2_0(n_7, p_7, t);
            }
        }
        LocalPopChoice(l_38);
      }
    else
      {
        t = j_38;
        t = n_11;
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  p_8 = ATgetArgument(t, 0);
                  {
                    ATerm e_9 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(n_11);
                    e_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, e_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = n_11;
                }
              LocalPopChoice(p_38);
              t = xtc_transform_file_2_0(q_7, r_7, t);
            }
          else
            {
              t = o_38;
              t = xtc_transform_term_2_0(t_7, u_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm w_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  t = term_q_38;
  w_11 = t;
  t = z_11;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_35;
        t = get_config_0_0(t);
        t = z_11;
        LocalPopChoice(s_38);
        t = (ATerm) ATinsert(ATempty, term_t_38);
      }
    else
      {
        t = r_38;
        t = (ATerm) ATempty;
      }
  }
  y_11 = t;
  t = z_11;
  t = comp_0_2(w_11, y_11, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, term_c_39);
        t = geq_0_0(t);
        t = c_12;
        t = v_104(t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = c_12;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm d_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_12, term_j_39);
        t = geq_0_0(t);
        t = i_12;
        t = x_104(t);
        LocalPopChoice(h_39);
      }
    else
      {
        t = d_39;
        t = i_12;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  t = term_c_33;
  y_15 = t;
  t = (ATerm) ATinsert(ATempty, term_k_39);
  z_15 = t;
  t = SSL_printnl(y_15, z_15);
  t = x_15;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_16 = NULL;
  t = if_verbose3_1_0(k_8, t);
  t = olevel_2_0(r_8, v_8, t);
  t = olevel_2_0(o_9, p_9, t);
  t = olevel_2_0(f_10, h_10, t);
  f_16 = t;
  {
    ATerm o_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_18 = ATgetArgument(t, 0);
            {
              ATerm r_12 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(f_16);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_18);
              p_5 = t;
              t = SSLsetAnnotations(p_5, r_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_16;
          }
        LocalPopChoice(q_39);
        t = xtc_transform_file_2_0(l_11, o_11, t);
      }
    else
      {
        t = o_39;
        t = xtc_transform_term_2_0(p_11, q_11, t);
      }
  }
  t = olevel_2_0(r_11, u_11, t);
  t = olevel_2_0(d_13, f_13, t);
  t = olevel_2_0(m_14, n_14, t);
  t = olevel_2_0(z_14, b_15, t);
  t = olevel_2_0(m_16, p_16, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm a_16 = NULL,d_16 = NULL,e_16 = NULL;
  a_16 = t;
  t = term_c_33;
  d_16 = t;
  t = (ATerm) ATinsert(CheckATermList(a_16), term_t_39);
  e_16 = t;
  t = SSL_printnl(d_16, e_16);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(a_16), term_t_39));
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = term_h_38;
  t = get_config_0_0(t);
  t = debug_1_0(n_8, t);
  t = h_16;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_w_39;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  {
    ATerm y_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_16 = ATgetArgument(t, 0);
            {
              ATerm v_9 = NULL,x_3 = NULL;
              t = SSLgetAnnotations(i_16);
              v_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_16);
              x_3 = t;
              t = SSLsetAnnotations(x_3, v_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_16;
          }
        LocalPopChoice(a_40);
        t = xtc_transform_file_2_0(w_8, x_8, t);
      }
    else
      {
        t = y_39;
        t = xtc_transform_term_2_0(g_9, h_9, t);
      }
  }
  t = if_keep1_1_0(m_9, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm t_16 = NULL;
  t = pass_verbose_0_0(t);
  t_16 = t;
  t = (ATerm) ATinsert(CheckATermList(t_16), term_y_35);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm u_16 = NULL;
  t = pass_verbose_0_0(t);
  u_16 = t;
  t = (ATerm) ATinsert(CheckATermList(u_16), term_y_35);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = save_as_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_b_40;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm h_17 = NULL;
  h_17 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_17;
        {
          ATerm f_40 = t;
          if((PushChoice() == 0))
            {
              t = term_g_40;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_40;
            }
        }
        t = h_17;
        {
          ATerm i_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_10 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  m_10 = ATgetArgument(t, 0);
                  {
                    ATerm k_11 = NULL,i_5 = NULL;
                    t = SSLgetAnnotations(h_17);
                    k_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
                    i_5 = t;
                    t = SSLsetAnnotations(i_5, k_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = h_17;
                }
              LocalPopChoice(j_40);
              t = xtc_transform_file_2_0(r_9, s_9, t);
            }
          else
            {
              t = i_40;
              t = xtc_transform_term_2_0(u_9, w_9, t);
            }
        }
        t = if_keep2_1_0(x_9, t);
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = h_17;
      }
  }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm t_10 = NULL;
  t = pass_verbose_0_0(t);
  t_10 = t;
  t = (ATerm) ATinsert(CheckATermList(t_10), term_y_35);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm u_10 = NULL;
  t = pass_verbose_0_0(t);
  u_10 = t;
  t = (ATerm) ATinsert(CheckATermList(u_10), term_y_35);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = save_as_1_0(z_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  n_17 = t;
  {
    ATerm o_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_17 = ATgetArgument(t, 0);
            {
              ATerm s_11 = NULL,j_5 = NULL;
              t = SSLgetAnnotations(n_17);
              s_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
              j_5 = t;
              t = SSLsetAnnotations(j_5, s_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_17;
          }
        LocalPopChoice(q_40);
        t = xtc_transform_file_2_0(i_10, n_10, t);
      }
    else
      {
        t = o_40;
        t = xtc_transform_term_2_0(s_10, v_10, t);
      }
  }
  t = if_keep6_1_0(w_10, t);
  m_17 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_18 = ATgetArgument(t, 0);
            {
              ATerm b_12 = NULL,m_5 = NULL;
              t = SSLgetAnnotations(m_17);
              b_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
              m_5 = t;
              t = SSLsetAnnotations(m_5, b_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_17;
          }
        LocalPopChoice(u_40);
        t = xtc_transform_file_2_0(y_10, z_10, t);
      }
    else
      {
        t = t_40;
        t = xtc_transform_term_2_0(a_11, b_11, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(c_11, t);
  l_17 = t;
  {
    ATerm w_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_18 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,o_5 = NULL;
              t = SSLgetAnnotations(l_17);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_18);
              o_5 = t;
              t = SSLsetAnnotations(o_5, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_17;
          }
        LocalPopChoice(z_40);
        t = xtc_transform_file_2_0(e_11, f_11, t);
      }
    else
      {
        t = w_40;
        t = xtc_transform_term_2_0(h_11, i_11, t);
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm u_17 = NULL;
  t = pass_verbose_0_0(t);
  u_17 = t;
  t = (ATerm) ATinsert(CheckATermList(u_17), term_y_35);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_b_41;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm v_17 = NULL;
  t = pass_verbose_0_0(t);
  v_17 = t;
  t = (ATerm) ATinsert(CheckATermList(v_17), term_y_35);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = save_as_1_0(x_10, t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm d_18 = NULL;
  t = pass_verbose_0_0(t);
  d_18 = t;
  t = (ATerm) ATinsert(CheckATermList(d_18), term_y_35);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm e_18 = NULL;
  t = pass_verbose_0_0(t);
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(e_18), term_y_35);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm n_18 = NULL;
  t = pass_verbose_0_0(t);
  n_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_y_35);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_s_36;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm o_18 = NULL;
  t = pass_verbose_0_0(t);
  o_18 = t;
  t = (ATerm) ATinsert(CheckATermList(o_18), term_y_35);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm w_18 = NULL;
  t = pass_verbose_0_0(t);
  w_18 = t;
  t = (ATerm) ATinsert(CheckATermList(w_18), term_y_35);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm x_18 = NULL;
  t = pass_verbose_0_0(t);
  x_18 = t;
  t = (ATerm) ATinsert(CheckATermList(x_18), term_y_35);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_c_39;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,c_19 = NULL;
  c_19 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_19 = ATgetArgument(t, 0);
            {
              ATerm j_13 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(c_19);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_19);
              q_5 = t;
              t = SSLsetAnnotations(q_5, j_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_19;
          }
        LocalPopChoice(i_41);
        t = xtc_transform_file_2_0(v_11, x_11, t);
      }
    else
      {
        t = h_41;
        t = xtc_transform_term_2_0(a_12, d_12, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  z_18 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_19 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_18);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_19);
              x_5 = t;
              t = SSLsetAnnotations(x_5, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_18;
          }
        LocalPopChoice(k_41);
        t = xtc_transform_file_2_0(f_12, g_12, t);
      }
    else
      {
        t = j_41;
        t = xtc_transform_term_2_0(h_12, j_12, t);
      }
  }
  y_18 = t;
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_20 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(y_18);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_20);
              y_5 = t;
              t = SSLsetAnnotations(y_5, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_18;
          }
        LocalPopChoice(m_41);
        t = xtc_transform_file_2_0(k_12, n_12, t);
      }
    else
      {
        t = l_41;
        t = xtc_transform_term_2_0(o_12, p_12, t);
      }
  }
  t = if_keep4_1_0(q_12, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm k_19 = NULL;
  t = pass_verbose_0_0(t);
  k_19 = t;
  t = (ATerm) ATinsert(CheckATermList(k_19), term_y_35);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm l_19 = NULL;
  t = pass_verbose_0_0(t);
  l_19 = t;
  t = (ATerm) ATinsert(CheckATermList(l_19), term_y_35);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm t_19 = NULL;
  t = pass_verbose_0_0(t);
  t_19 = t;
  t = (ATerm) ATinsert(CheckATermList(t_19), term_y_35);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm u_19 = NULL;
  t = pass_verbose_0_0(t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), term_y_35);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm d_20 = NULL;
  t = pass_verbose_0_0(t);
  d_20 = t;
  t = (ATerm) ATinsert(CheckATermList(d_20), term_y_35);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_20 = NULL;
  t = pass_verbose_0_0(t);
  e_20 = t;
  t = (ATerm) ATinsert(CheckATermList(e_20), term_y_35);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = save_as_1_0(z_12, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm f_20 = NULL,i_20 = NULL;
  i_20 = t;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_20 = ATgetArgument(t, 0);
            {
              ATerm k_14 = NULL,z_5 = NULL;
              t = SSLgetAnnotations(i_20);
              k_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_20);
              z_5 = t;
              t = SSLsetAnnotations(z_5, k_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_20;
          }
        LocalPopChoice(s_41);
        t = xtc_transform_file_2_0(k_13, y_13, t);
      }
    else
      {
        t = r_41;
        t = xtc_transform_term_2_0(b_14, d_14, t);
      }
  }
  f_20 = t;
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_20 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,a_6 = NULL;
              t = SSLgetAnnotations(f_20);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_20);
              a_6 = t;
              t = SSLsetAnnotations(a_6, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_20;
          }
        LocalPopChoice(u_41);
        t = xtc_transform_file_2_0(e_14, f_14, t);
      }
    else
      {
        t = t_41;
        t = xtc_transform_term_2_0(h_14, i_14, t);
      }
  }
  t = if_keep2_1_0(j_14, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_y_35);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_y_35);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm j_21 = NULL;
  t = pass_verbose_0_0(t);
  j_21 = t;
  t = (ATerm) ATinsert(CheckATermList(j_21), term_y_35);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm r_21 = NULL;
  t = pass_verbose_0_0(t);
  r_21 = t;
  t = (ATerm) ATinsert(CheckATermList(r_21), term_y_35);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = save_as_1_0(l_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_z_41;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_21 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,f_6 = NULL;
              t = SSLgetAnnotations(s_21);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_21);
              f_6 = t;
              t = SSLsetAnnotations(f_6, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(c_42);
        t = xtc_transform_file_2_0(p_14, q_14, t);
      }
    else
      {
        t = b_42;
        t = xtc_transform_term_2_0(r_14, t_14, t);
      }
  }
  t = if_keep5_1_0(u_14, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(x_14, t);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm b_22 = NULL;
  t = pass_verbose_0_0(t);
  b_22 = t;
  t = (ATerm) ATinsert(CheckATermList(b_22), term_y_35);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = term_d_41;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_y_35);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = save_as_1_0(v_14, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = save_as_1_0(y_14, t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm d_22 = NULL,f_22 = NULL,h_22 = NULL;
  h_22 = t;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_22 = ATgetArgument(t, 0);
            {
              ATerm w_14 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(h_22);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, w_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_22;
          }
        LocalPopChoice(i_42);
        t = xtc_transform_file_2_0(c_15, d_15, t);
      }
    else
      {
        t = h_42;
        t = xtc_transform_term_2_0(f_15, g_15, t);
      }
  }
  t = if_keep3_1_0(h_15, t);
  f_22 = t;
  {
    ATerm j_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_22 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(f_22);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
              h_6 = t;
              t = SSLsetAnnotations(h_6, a_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_22;
          }
        LocalPopChoice(l_42);
        t = xtc_transform_file_2_0(k_15, l_15, t);
      }
    else
      {
        t = j_42;
        t = xtc_transform_term_2_0(n_15, o_15, t);
      }
  }
  t = if_keep3_1_0(p_15, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(s_15, t);
  d_22 = t;
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_23 = ATgetArgument(t, 0);
            {
              ATerm e_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(d_22);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, e_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_22;
          }
        LocalPopChoice(n_42);
        t = xtc_transform_file_2_0(u_15, v_15, t);
      }
    else
      {
        t = m_42;
        t = xtc_transform_term_2_0(w_15, b_16, t);
      }
  }
  t = if_keep3_1_0(c_16, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm q_22 = NULL;
  t = pass_verbose_0_0(t);
  q_22 = t;
  t = (ATerm) ATinsert(CheckATermList(q_22), term_y_35);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_o_42;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm r_22 = NULL;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(r_22), term_y_35);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = save_as_1_0(j_15, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = term_p_42;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm b_23 = NULL;
  t = pass_verbose_0_0(t);
  b_23 = t;
  t = (ATerm) ATinsert(CheckATermList(b_23), term_y_35);
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm e_23 = NULL;
  t = pass_verbose_0_0(t);
  e_23 = t;
  t = (ATerm) ATinsert(CheckATermList(e_23), term_y_35);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = save_as_1_0(q_15, t);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = save_as_1_0(t_15, t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_r_42;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm o_23 = NULL;
  t = pass_verbose_0_0(t);
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(o_23), term_y_35);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm v_23 = NULL;
  t = pass_verbose_0_0(t);
  v_23 = t;
  t = (ATerm) ATinsert(CheckATermList(v_23), term_y_35);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = save_as_1_0(k_16, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_s_42;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_d_36;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  y_23 = t;
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_24 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(y_23);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_23;
          }
        LocalPopChoice(u_42);
        t = xtc_transform_file_2_0(q_16, r_16, t);
      }
    else
      {
        t = t_42;
        t = xtc_transform_term_2_0(s_16, v_16, t);
      }
  }
  t = if_keep1_1_0(x_16, t);
  x_23 = t;
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_24 = ATgetArgument(t, 0);
            {
              ATerm m_15 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(x_23);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, m_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_23;
          }
        LocalPopChoice(x_42);
        t = xtc_transform_file_2_0(a_17, d_17, t);
      }
    else
      {
        t = w_42;
        t = xtc_transform_term_2_0(e_17, f_17, t);
      }
  }
  t = if_keep1_1_0(g_17, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm l_24 = NULL;
  t = pass_verbose_0_0(t);
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(l_24), term_y_35);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_y_35);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(z_16, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_y_35);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_z_42;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm z_24 = NULL;
  t = pass_verbose_0_0(t);
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), term_y_35);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  t = profile_p__2_0(x_7, c_8, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm w_26 = NULL;
  t = pass_verbose_0_0(t);
  w_26 = t;
  t = (ATerm) ATinsert(CheckATermList(w_26), term_e_37);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm x_26 = NULL;
  t = pass_verbose_0_0(t);
  x_26 = t;
  t = (ATerm) ATinsert(CheckATermList(x_26), term_e_37);
  return(t);
}
ATerm save_as_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  i_26 = t;
  {
    static ATerm j_17 (ATerm t)
    {
      t = get_outfile_1_0(e_80, t);
      if(((g_26 != NULL) && (g_26 != t)))
        _fail(t);
      else
        g_26 = t;
      return(t);
    }
    t = copy_to_1_0(j_17, t);
  }
  {
    ATerm c_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,v_26 = NULL;
        v_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_26 = ATgetArgument(t, 0);
            {
              ATerm r_15 = NULL,s_7 = NULL;
              t = SSLgetAnnotations(v_26);
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_26);
              s_7 = t;
              t = SSLsetAnnotations(s_7, r_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_26;
          }
        LocalPopChoice(g_43);
        t = xtc_transform_file_2_0(k_17, p_17, t);
      }
    else
      {
        t = c_43;
        t = xtc_transform_term_2_0(t_17, w_17, t);
      }
  }
  {
    static ATerm y_17 (ATerm t)
    {
      ATerm y_26 = NULL;
      t = term_h_43;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), term_h_43);
      t = a_14(not_null(g_26), y_26, t);
      if(((h_26 != NULL) && (h_26 != t)))
        _fail(t);
      else
        h_26 = t;
      return(t);
    }
    t = copy_to_1_0(y_17, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_26)), term_k_43), not_null(g_26)), term_i_43);
  o_26 = t;
  t = SSL_concat_strings(o_26);
  j_26 = t;
  t = term_c_33;
  m_26 = t;
  t = (ATerm) ATinsert(ATempty, j_26);
  n_26 = t;
  t = SSL_printnl(m_26, n_26);
  t = i_26;
  return(t);
}
ATerm if_keep2_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_27, term_a_33);
        t = geq_0_0(t);
        t = b_27;
        t = t_104(t);
        LocalPopChoice(m_43);
      }
    else
      {
        t = l_43;
        t = b_27;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  t = term_z_32;
  {
    ATerm n_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_43);
      }
    else
      {
        t = n_43;
        t = term_d_36;
      }
  }
  g_27 = t;
  t = term_d_36;
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, term_d_36);
  t = g_13(g_27, i_27, t);
  h_27 = t;
  t = SSL_int_to_string(h_27);
  f_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_27), term_z_32);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_43 = ATgetArgument(t, 0);
      if(match_cons(r_43, sym_Stream_1))
        {
          l_27 = ATgetArgument(r_43, 0);
        }
      else
        _fail(t);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(l_27, m_27, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  k_27 = t;
  t = xtc_new_file_0_0(t);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_27, k_27);
  t = x_12(a_18, j_27, k_27, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
  t = xtc_transform_file_2_0(k_112, l_112, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_12 (ATerm q_48, ATerm r_48, ATerm t)
{
  t = SSL_execvp(q_48, r_48);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_28 = NULL,i_28 = NULL,k_28 = NULL,m_28 = NULL;
  g_28 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_28 = ATgetArgument(t, 0);
      {
        ATerm g_16 = NULL,l_16 = NULL;
        t = SSL_int_to_string(i_28);
        g_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_43), g_16), term_x_43);
        l_16 = t;
        t = SSL_concat_strings(l_16);
      }
    }
  else
    {
      ATerm q_17 = NULL,z_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_28 = ATgetArgument(t, 0);
          k_28 = ATgetArgument(t, 1);
          m_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_28);
      q_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_28), term_b_44), q_17), term_a_44), i_28);
      z_17 = t;
      t = SSL_concat_strings(z_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  static ATerm c_18 (ATerm t)
  {
    t = i_89(t);
    if(((r_28 != NULL) && (r_28 != t)))
      _fail(t);
    else
      r_28 = t;
    return(t);
  }
  t = fetch_1_0(c_18, t);
  t = not_null(r_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_18 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_44 = ATgetArgument(t, 0);
              if((s_28 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_50), term_p_49), term_i_49), term_e_49), term_z_48), term_u_48), term_o_48), term_i_48), term_d_48), term_z_47), term_n_47), term_g_47), term_a_47), term_t_46), term_p_46), term_f_46), term_z_45), term_v_45), term_r_45), term_n_45), term_j_45), term_f_45), term_b_45), term_x_44), term_t_44), term_q_44), term_n_44), term_k_44);
        t = fetch_elem_1_0(f_18, t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_28);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_29 = NULL,k_29 = NULL;
  d_29 = t;
  {
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_50 = ATgetArgument(t, 0);
            k_29 = ATgetArgument(t, 1);
            {
              ATerm i_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_50);
        {
          ATerm j_50 = t;
          int k_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_18 = NULL,b_19 = NULL,i_19 = NULL;
              t = k_29;
              {
                ATerm l_50 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_50;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              t_18 = t;
              t = term_c_33;
              b_19 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_18), term_m_50);
              i_19 = t;
              t = SSL_printnl(b_19, i_19);
              t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(ATinsert(ATempty, t_18), term_m_50));
              LocalPopChoice(k_50);
            }
          else
            {
              t = j_50;
              t = d_29;
            }
        }
      }
    else
      {
        t = d_50;
        t = d_29;
      }
  }
  t = d_29;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  e_30 = t;
  t = fork_0_0(t);
  d_30 = t;
  {
    ATerm n_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_30;
        t = d_105(t);
        LocalPopChoice(p_50);
      }
    else
      {
        t = n_50;
        t = SSL_waitpid(d_30);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_50 = ATgetArgument(t, 0);
            if(((ATgetType(s_50) != AT_INT) || (ATgetInt((ATermInt) s_50) != 0)))
              _fail(t);
            {
              ATerm t_50 = ATgetArgument(t, 1);
            }
            {
              ATerm u_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_30;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,k_30 = NULL;
  k_30 = t;
  t = l_113(t);
  t = xtc_find_0_0(t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, k_30);
  {
    static ATerm i_18 (ATerm t)
    {
      ATerm l_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_30, k_30);
      t = y_12(g_30, k_30, t);
      t = term_n_33;
      l_30 = t;
      t = SSL_exit(l_30);
      return(t);
    }
    t = fork_and_wait_1_0(i_18, t);
  }
  t = k_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,u_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_30 = NULL,w_30 = NULL;
      t = r_30;
      t = xtc_new_file_0_0(t);
      v_30 = t;
      t = x_0(t);
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, (ATerm) ATinsert(ATinsert(ATempty, v_30), term_j_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_30);
    }
  else
    {
      ATerm y_30 = NULL,z_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_30;
      t = xtc_new_file_0_0(t);
      y_30 = t;
      t = x_0(t);
      z_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_30), term_j_33), u_30), term_w_50));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_30);
    }
  return(t);
}
ATerm comp_0_2 (ATerm z_20 (ATerm), ATerm a_21 (ATerm), ATerm t)
{
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,y_38 = NULL;
      y_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_38 = ATgetArgument(t, 0);
          {
            ATerm w_24 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(y_38);
            w_24 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_38);
            m_8 = t;
            t = SSLsetAnnotations(m_8, w_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_38;
        }
      LocalPopChoice(c_51);
      {
        static ATerm k_18 (ATerm t)
        {
          t = z_20;
          return(t);
        }
        static ATerm l_18 (ATerm t)
        {
          ATerm z_38 = NULL;
          t = pass_verbose_0_0(t);
          z_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_21), z_38), (ATerm) ATinsert(ATempty, term_y_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(k_18, l_18, t);
      }
    }
  else
    {
      t = b_51;
      {
        static ATerm m_18 (ATerm t)
        {
          t = z_20;
          return(t);
        }
        static ATerm p_18 (ATerm t)
        {
          ATerm a_39 = NULL;
          t = pass_verbose_0_0(t);
          a_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_21), a_39), (ATerm) ATinsert(ATempty, term_y_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(m_18, p_18, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_31;
      t = b_95(t);
    }
  else
    {
      ATerm n_31 = NULL,o_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_31 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_31;
      t = d_95(t);
      n_31 = t;
      t = d_31;
      t = foldr_3_0(b_95, c_95, d_95, t);
      o_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
      t = c_95(t);
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_31), term_d_51);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_d_51;
  t = get_config_0_0(t);
  t = foldr_3_0(q_18, conc_0_0, r_18, t);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_y_35);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm g_21 = NULL;
  t = pass_verbose_0_0(t);
  g_21 = t;
  t = (ATerm) ATinsert(CheckATermList(g_21), term_y_35);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = get_outfile_1_0(f_19, t);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = term_j_51;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  {
    ATerm k_51 = t;
    int l_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,m_20 = NULL,n_20 = NULL;
        t = term_m_51;
        t = get_config_0_0(t);
        t = u_32;
        {
          ATerm n_51 = t;
          int o_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_32;
              {
                ATerm q_51 = t;
                int t_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        c_21 = ATgetArgument(t, 0);
                        {
                          ATerm u_21 = NULL,o_8 = NULL;
                          t = SSLgetAnnotations(u_32);
                          u_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
                          o_8 = t;
                          t = SSLsetAnnotations(o_8, u_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = u_32;
                      }
                    LocalPopChoice(t_51);
                    t = xtc_transform_file_2_0(s_18, v_18, t);
                  }
                else
                  {
                    t = q_51;
                    t = xtc_transform_term_2_0(a_19, d_19, t);
                  }
              }
              LocalPopChoice(o_51);
            }
          else
            {
              t = n_51;
              {
                ATerm h_21 = NULL,l_21 = NULL,n_21 = NULL;
                t = term_c_33;
                l_21 = t;
                t = (ATerm) ATinsert(ATempty, term_u_51);
                n_21 = t;
                t = SSL_printnl(l_21, n_21);
                t = term_d_36;
                h_21 = t;
                t = SSL_exit(h_21);
                t = (ATerm) ATinsert(ATempty, term_u_51);
              }
            }
        }
        t = copy_to_1_0(e_19, t);
        h_20 = t;
        t = term_c_33;
        m_20 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_51));
        n_20 = t;
        t = SSL_printnl(m_20, n_20);
        t = h_20;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(l_51);
      }
    else
      {
        t = k_51;
        t = u_32;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_z_41);
        t = geq_0_0(t);
        t = b_33;
        t = w_104(t);
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        t = b_33;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_52;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_52);
      LocalPopChoice(z_51);
    }
  else
    {
      t = y_51;
      t = (ATerm) ATinsert(ATempty, term_c_52);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL;
        t = term_e_38;
        t = get_config_0_0(t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_33, term_u_36);
        t = geq_0_0(t);
        t = o_33;
        t = u_104(t);
        LocalPopChoice(g_52);
      }
    else
      {
        t = f_52;
        t = o_33;
      }
  }
  return(t);
}
static ATerm v_12 (ATerm d_80 (ATerm), ATerm f_21, ATerm t)
{
  ATerm s_33 = NULL;
  t = term_r_34;
  t = d_80(t);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(f_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_h_52, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_33), (ATerm) ATempty))))));
  return(t);
}
static ATerm w_12 (ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm t_33 = NULL;
  t = SSL_write_term_to_stream_baf(z_22, a_23);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_33);
  return(t);
}
static ATerm x_12 (ATerm n_88 (ATerm), ATerm u_189, ATerm h_23, ATerm t)
{
  ATerm w_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_189, term_j_52);
  t = r_13(t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, h_23);
  t = n_88(t);
  t = fclose_0_0(t);
  t = h_23;
  return(t);
}
static ATerm a_13 (ATerm j_101 (ATerm), ATerm f_42, ATerm d_42, ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,d_34 = NULL,e_34 = NULL;
  a_34 = t;
  t = j_101(t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_33, f_42, d_42);
  t = x_13(x_33, f_42, d_42, t);
  {
    ATerm l_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL;
        t = term_r_52;
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_r_52);
        t = w_13(x_33, f_34, t);
        LocalPopChoice(m_52);
      }
    else
      {
        t = l_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_52;
  d_34 = t;
  t = (ATerm) ATinsert(CheckATermList(z_33), (ATerm) ATinsert(CheckATermList(y_33), f_42));
  e_34 = t;
  t = SSL_table_put(x_33, d_34, e_34);
  t = a_34;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  t = P__tmpdir_0_0(t);
  k_34 = t;
  t = term_v_52;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_34, term_v_52);
  t = a_14(k_34, o_34, t);
  m_34 = t;
  t = term_w_52;
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_34, term_w_52);
  t = a_14(m_34, n_34, t);
  l_34 = t;
  t = SSL_mkstemp(l_34);
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_34;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, term_r_34);
  t = a_13(h_19, h_34, j_34, t);
  t = SSL_close(g_34);
  t = h_34;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_52;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_52);
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_34, (ATerm) ATinsert(ATempty, term_y_52));
      t = s_13(v_34, x_34, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_52 = ATgetArgument(t, 0);
      if(match_cons(z_52, sym_Stream_1))
        {
          b_35 = ATgetArgument(z_52, 0);
        }
      else
        _fail(t);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(b_35, c_35, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = read_from_0_0(t);
  t = m_112(t);
  a_35 = t;
  t = xtc_new_file_0_0(t);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, a_35);
  t = x_12(j_19, z_34, a_35, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_34);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = debug_1_0(n_19, t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = term_a_53;
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = save_as_1_0(s_19, t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  t = term_b_53;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm i_35 = NULL,q_35 = NULL;
  q_35 = t;
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_53;
        t = get_config_0_0(t);
        i_35 = t;
        t = if_verbose2_1_0(m_19, t);
        t = q_35;
        {
          ATerm f_53 = t;
          int g_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_m_35;
              t = get_config_0_0(t);
              t = q_35;
              LocalPopChoice(g_53);
            }
          else
            {
              t = f_53;
              {
                static ATerm o_19 (ATerm t)
                {
                  ATerm n_22 = NULL;
                  static ATerm p_19 (ATerm t)
                  {
                    t = i_35;
                    return(t);
                  }
                  if(match_cons(t, sym_Specification_1))
                    {
                      n_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_12(p_19, n_22, t);
                  return(t);
                }
                t = xtc_io_transform_1_0(o_19, t);
              }
            }
        }
        LocalPopChoice(d_53);
      }
    else
      {
        t = c_53;
        t = q_35;
      }
  }
  t = if_keep3_1_0(r_19, t);
  return(t);
}
static ATerm w_19 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  {
    ATerm h_53 = t;
    int i_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_36);
        LocalPopChoice(i_53);
      }
    else
      {
        t = h_53;
        t = i_36;
      }
  }
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm x_35 = NULL,z_35 = NULL;
  static ATerm v_19 (ATerm t)
  {
    ATerm c_36 = NULL,e_36 = NULL,f_36 = NULL;
    c_36 = t;
    t = term_s_52;
    e_36 = t;
    t = term_r_52;
    f_36 = t;
    t = term_j_53;
    t = w_13(e_36, f_36, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_35 != NULL) && (x_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_35 = ATgetFirst((ATermList) t);
        {
          ATerm k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = x_35;
    t = map_1_0(w_19, t);
    t = c_36;
    t = end_scope_1_0(x_19, t);
    return(t);
  }
  t = repeat_2_0(v_19, _id, t);
  z_35 = t;
  t = SSL_exit(z_35);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_33;
      t = get_config_0_0(t);
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
      t = term_u_34;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(y_19, t);
  t = term_s_32;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  t = c_80(t);
  o_36 = t;
  t = term_m_37;
  t = get_config_0_0(t);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, o_36);
  t = a_14(p_36, o_36, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm z_0 (ATerm), ATerm t)
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
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        t = o_37;
        t = z_0(t);
        p_23 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_23;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_23;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_37, p_23);
        t = i_13(p_37, p_23, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_37);
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm t_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_24 = NULL;
              t = o_37;
              t = z_0(t);
              a_24 = t;
              {
                ATerm x_53 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_24 = NULL;
                    b_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_24;
                          }
                        else
                          {
                            t = b_24;
                            if((p_37 != t))
                              {
                                _fail(t);
                              }
                            t = b_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_53;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_37, a_24);
              t = i_13(p_37, a_24, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_37);
              LocalPopChoice(w_53);
            }
          else
            {
              t = t_53;
              t = o_37;
              t = z_0(t);
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
  t = get_outfile_1_0(a_20, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  {
    ATerm z_53 = t;
    int d_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL,m_24 = NULL,o_24 = NULL;
        t = term_e_54;
        t = get_config_0_0(t);
        t = k_38;
        t = copy_to_1_0(z_19, t);
        j_24 = t;
        t = term_c_33;
        m_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_54));
        o_24 = t;
        t = SSL_printnl(m_24, o_24);
        t = j_24;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(d_54);
      }
    else
      {
        t = z_53;
        t = k_38;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,i_39 = NULL;
  t = term_e_38;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        t = term_d_36;
      }
  }
  f_39 = t;
  t = term_d_36;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_39, term_d_36);
  t = g_13(f_39, i_39, t);
  g_39 = t;
  t = SSL_int_to_string(g_39);
  e_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_39), term_e_38);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm l_39 = NULL,n_39 = NULL,p_39 = NULL,r_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL;
  v_39 = t;
  t = term_m_54;
  l_39 = t;
  t = v_39;
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_33;
        t = get_config_0_0(t);
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
        t = term_m_37;
        t = get_config_0_0(t);
      }
  }
  x_39 = t;
  t = v_39;
  t = pass_keep_0_0(t);
  p_39 = t;
  t = term_c_55;
  t = get_config_0_0(t);
  r_39 = t;
  t = term_g_55;
  {
    ATerm i_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(k_55);
        t = (ATerm) ATinsert(ATempty, term_g_55);
      }
    else
      {
        t = i_55;
        t = (ATerm) ATempty;
      }
  }
  u_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_39), p_39), r_39), (ATerm) ATinsert(ATinsert(ATempty, x_39), term_l_55));
  t = concat_0_0(t);
  n_39 = t;
  t = v_39;
  t = comp_0_2(l_39, n_39, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  {
    ATerm m_55 = t;
    int n_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_40 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        e_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_40, term_u_36);
        t = geq_0_0(t);
        t = z_39;
        t = s_103(t);
        LocalPopChoice(n_55);
      }
    else
      {
        t = m_55;
        t = z_39;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,v_40 = NULL;
  v_40 = t;
  t = SSL_explode_string(v_40);
  {
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_43 (ATerm t)
        {
          ATerm a_43 = NULL,d_43 = NULL,f_43 = NULL;
          a_43 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_43 = ATgetFirst((ATermList) t);
              f_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm r_55 = t;
            int s_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_25 = NULL,c_26 = NULL,c_9 = NULL;
                t = SSLgetAnnotations(a_43);
                w_25 = t;
                t = f_43;
                t = j_43(t);
                c_26 = t;
                t = (ATerm) ATinsert(CheckATermList(c_26), d_43);
                c_9 = t;
                t = SSLsetAnnotations(c_9, w_25);
                LocalPopChoice(s_55);
              }
            else
              {
                t = r_55;
                {
                  ATerm v_55 = t;
                  int w_55 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_27 = NULL,d_9 = NULL;
                      t = SSLgetAnnotations(a_43);
                      o_27 = t;
                      t = d_43;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(f_43), d_43);
                      d_9 = t;
                      t = SSLsetAnnotations(d_9, o_27);
                      LocalPopChoice(w_55);
                    }
                  else
                    {
                      t = v_55;
                      {
                        ATerm u_28 = NULL,b_29 = NULL,f_9 = NULL;
                        t = SSLgetAnnotations(a_43);
                        u_28 = t;
                        t = d_43;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = f_43;
                        t = y_98(t);
                        b_29 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_29), d_43);
                        f_9 = t;
                        t = SSLsetAnnotations(f_9, u_28);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = j_43(t);
        LocalPopChoice(q_55);
      }
    else
      {
        t = p_55;
      }
  }
  p_40 = t;
  t = SSL_implode_string(p_40);
  return(t);
}
static ATerm c_20 (ATerm t)
{
  t = debug_1_0(g_20, t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_z_55;
  return(t);
}
static ATerm j_20 (ATerm t)
{
  t = debug_1_0(k_20, t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  t = term_a_56;
  return(t);
}
static ATerm b_13 (ATerm b_21, ATerm t)
{
  ATerm q_43 = NULL,s_43 = NULL,y_43 = NULL,c_44 = NULL;
  t = b_21;
  t = basename_1_0(_id, t);
  q_43 = t;
  t = if_verbose3_1_0(c_20, t);
  t = term_n_37;
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_37, q_43);
  t = z_13(c_44, q_43, t);
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_33;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        t = q_43;
      }
  }
  s_43 = t;
  t = if_verbose3_1_0(j_20, t);
  t = term_m_37;
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_37, s_43);
  t = z_13(y_43, s_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_43);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = debug_1_0(p_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_e_56;
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = if_verbose1_1_0(u_20, t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm g_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,c_47 = NULL,p_32 = NULL,v_32 = NULL,w_32 = NULL,j_30 = NULL,m_30 = NULL,n_30 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(c_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm f_56 = t;
    int g_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_47 = NULL;
        d_47 = t;
        t = term_m_35;
        t = get_config_0_0(t);
        t = d_47;
        LocalPopChoice(g_56);
      }
    else
      {
        t = f_56;
        t = add_main_0_0(t);
      }
  }
  w_46 = t;
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_47 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_47 = ATgetArgument(t, 0);
            {
              ATerm u_29 = NULL,a_10 = NULL;
              t = SSLgetAnnotations(w_46);
              u_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
              a_10 = t;
              t = SSLsetAnnotations(a_10, u_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_46;
          }
        LocalPopChoice(i_56);
        t = xtc_transform_file_2_0(v_20, w_20, t);
      }
    else
      {
        t = h_56;
        t = xtc_transform_term_2_0(x_20, d_21, t);
      }
  }
  v_46 = t;
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_48 = ATgetArgument(t, 0);
            {
              ATerm y_29 = NULL,c_10 = NULL;
              t = SSLgetAnnotations(v_46);
              y_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_48);
              c_10 = t;
              t = SSLsetAnnotations(c_10, y_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_46;
          }
        LocalPopChoice(l_56);
        t = xtc_transform_file_2_0(i_21, o_21, t);
      }
    else
      {
        t = k_56;
        t = xtc_transform_term_2_0(p_21, q_21, t);
      }
  }
  t = if_keep5_1_0(t_21, t);
  u_46 = t;
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_48 = ATgetArgument(t, 0);
            {
              ATerm c_30 = NULL,e_10 = NULL;
              t = SSLgetAnnotations(u_46);
              c_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_48);
              e_10 = t;
              t = SSLsetAnnotations(e_10, c_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_46;
          }
        LocalPopChoice(n_56);
        t = xtc_transform_file_2_0(w_21, x_21, t);
      }
    else
      {
        t = m_56;
        t = xtc_transform_term_2_0(y_21, a_22, t);
      }
  }
  t = if_keep5_1_0(e_22, t);
  n_30 = t;
  t = term_p_56;
  j_30 = t;
  t = n_30;
  t = pass_maybe_unbound_warnings_0_0(t);
  m_30 = t;
  t = n_30;
  t = comp_0_2(j_30, m_30, t);
  n_46 = t;
  {
    ATerm s_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_49 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_49 = ATgetArgument(t, 0);
            {
              ATerm p_30 = NULL,g_10 = NULL;
              t = SSLgetAnnotations(n_46);
              p_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_49);
              g_10 = t;
              t = SSLsetAnnotations(g_10, p_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_46;
          }
        LocalPopChoice(v_56);
        t = xtc_transform_file_2_0(i_22, j_22, t);
      }
    else
      {
        t = s_56;
        t = xtc_transform_term_2_0(k_22, l_22, t);
      }
  }
  m_46 = t;
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_50 = ATgetArgument(t, 0);
            {
              ATerm a_31 = NULL,j_10 = NULL;
              t = SSLgetAnnotations(m_46);
              a_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_50);
              j_10 = t;
              t = SSLsetAnnotations(j_10, a_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_46;
          }
        LocalPopChoice(a_57);
        t = xtc_transform_file_2_0(o_22, p_22, t);
      }
    else
      {
        t = z_56;
        t = xtc_transform_term_2_0(s_22, t_22, t);
      }
  }
  t = if_keep5_1_0(u_22, t);
  l_46 = t;
  {
    ATerm b_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_50 = ATgetArgument(t, 0);
            {
              ATerm h_31 = NULL,k_10 = NULL;
              t = SSLgetAnnotations(l_46);
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
            t = l_46;
          }
        LocalPopChoice(d_57);
        t = xtc_transform_file_2_0(w_22, y_22, t);
      }
    else
      {
        t = b_57;
        t = xtc_transform_term_2_0(c_23, d_23, t);
      }
  }
  k_46 = t;
  {
    ATerm e_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_50 = ATgetArgument(t, 0);
            {
              ATerm t_31 = NULL,l_10 = NULL;
              t = SSLgetAnnotations(k_46);
              t_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_50);
              l_10 = t;
              t = SSLsetAnnotations(l_10, t_31);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_46;
          }
        LocalPopChoice(j_57);
        t = xtc_transform_file_2_0(g_23, i_23, t);
      }
    else
      {
        t = e_57;
        t = xtc_transform_term_2_0(j_23, k_23, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm n_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_50 = NULL;
        z_50 = t;
        t = term_m_35;
        t = get_config_0_0(t);
        t = z_50;
        LocalPopChoice(o_57);
        {
          ATerm a_51 = NULL;
          a_51 = t;
          {
            ATerm t_57 = t;
            int u_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_51 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    e_51 = ATgetArgument(t, 0);
                    {
                      ATerm x_31 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(a_51);
                      x_31 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, e_51);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, x_31);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = a_51;
                  }
                LocalPopChoice(u_57);
                t = xtc_transform_file_2_0(l_23, n_23, t);
              }
            else
              {
                t = t_57;
                t = xtc_transform_term_2_0(q_23, r_23, t);
              }
          }
        }
      }
    else
      {
        t = n_57;
        {
          ATerm i_51 = NULL;
          i_51 = t;
          {
            ATerm v_57 = t;
            int w_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_51 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    p_51 = ATgetArgument(t, 0);
                    {
                      ATerm k_32 = NULL,p_10 = NULL;
                      t = SSLgetAnnotations(i_51);
                      k_32 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, p_51);
                      p_10 = t;
                      t = SSLsetAnnotations(p_10, k_32);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = i_51;
                  }
                LocalPopChoice(w_57);
                t = xtc_transform_file_2_0(s_23, t_23, t);
              }
            else
              {
                t = v_57;
                t = xtc_transform_term_2_0(u_23, w_23, t);
              }
          }
          t = if_keep2_1_0(z_23, t);
        }
      }
  }
  w_32 = t;
  t = term_x_57;
  p_32 = t;
  t = w_32;
  t = pass_warnings_0_0(t);
  v_32 = t;
  t = w_32;
  t = comp_0_2(p_32, v_32, t);
  j_46 = t;
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_52 = ATgetArgument(t, 0);
            {
              ATerm d_33 = NULL,q_10 = NULL;
              t = SSLgetAnnotations(j_46);
              d_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_52);
              q_10 = t;
              t = SSLsetAnnotations(q_10, d_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_46;
          }
        LocalPopChoice(z_57);
        t = xtc_transform_file_2_0(d_24, f_24, t);
      }
    else
      {
        t = y_57;
        t = xtc_transform_term_2_0(g_24, h_24, t);
      }
  }
  g_46 = t;
  {
    ATerm a_58 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_52 = ATgetArgument(t, 0);
            {
              ATerm m_33 = NULL,r_10 = NULL;
              t = SSLgetAnnotations(g_46);
              m_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_52);
              r_10 = t;
              t = SSLsetAnnotations(r_10, m_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_46;
          }
        LocalPopChoice(b_58);
        t = xtc_transform_file_2_0(i_24, k_24, t);
      }
    else
      {
        t = a_58;
        t = xtc_transform_term_2_0(p_24, q_24, t);
      }
  }
  t = if_keep2_1_0(r_24, t);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm x_45 = NULL,b_46 = NULL,e_46 = NULL;
  x_45 = t;
  t = term_c_33;
  b_46 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), term_c_58);
  e_46 = t;
  t = SSL_printnl(b_46, e_46);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(x_45), term_c_58));
  return(t);
}
static ATerm v_20 (ATerm t)
{
  t = term_d_58;
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm l_47 = NULL;
  t = pass_verbose_0_0(t);
  l_47 = t;
  t = (ATerm) ATinsert(CheckATermList(l_47), term_y_35);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  t = term_d_58;
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm m_47 = NULL;
  t = pass_verbose_0_0(t);
  m_47 = t;
  t = (ATerm) ATinsert(CheckATermList(m_47), term_y_35);
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = term_e_58;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  ATerm k_48 = NULL;
  t = pass_verbose_0_0(t);
  k_48 = t;
  t = (ATerm) ATinsert(CheckATermList(k_48), term_y_35);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_e_58;
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm l_48 = NULL;
  t = pass_verbose_0_0(t);
  l_48 = t;
  t = (ATerm) ATinsert(CheckATermList(l_48), term_y_35);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = save_as_1_0(v_21, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_f_58;
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_g_58;
  return(t);
}
static ATerm x_21 (ATerm t)
{
  ATerm b_49 = NULL;
  t = pass_verbose_0_0(t);
  b_49 = t;
  t = (ATerm) ATinsert(CheckATermList(b_49), term_y_35);
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = term_g_58;
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm c_49 = NULL;
  t = pass_verbose_0_0(t);
  c_49 = t;
  t = (ATerm) ATinsert(CheckATermList(c_49), term_y_35);
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = save_as_1_0(g_22, t);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = term_i_58;
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_m_58;
  return(t);
}
static ATerm j_22 (ATerm t)
{
  ATerm m_49 = NULL;
  t = pass_verbose_0_0(t);
  m_49 = t;
  t = (ATerm) ATinsert(CheckATermList(m_49), term_y_35);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = term_m_58;
  return(t);
}
static ATerm l_22 (ATerm t)
{
  ATerm n_49 = NULL;
  t = pass_verbose_0_0(t);
  n_49 = t;
  t = (ATerm) ATinsert(CheckATermList(n_49), term_y_35);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm f_50 = NULL;
  t = pass_verbose_0_0(t);
  f_50 = t;
  t = (ATerm) ATinsert(CheckATermList(f_50), term_y_35);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm h_50 = NULL;
  t = pass_verbose_0_0(t);
  h_50 = t;
  t = (ATerm) ATinsert(CheckATermList(h_50), term_y_35);
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = save_as_1_0(v_22, t);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = term_o_58;
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm q_50 = NULL;
  t = pass_verbose_0_0(t);
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(q_50), term_y_35);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm r_50 = NULL;
  t = pass_verbose_0_0(t);
  r_50 = t;
  t = (ATerm) ATinsert(CheckATermList(r_50), term_y_35);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = term_q_58;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm x_50 = NULL;
  t = pass_verbose_0_0(t);
  x_50 = t;
  t = (ATerm) ATinsert(CheckATermList(x_50), term_y_35);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = term_q_58;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm y_50 = NULL;
  t = pass_verbose_0_0(t);
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), term_y_35);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm g_51 = NULL;
  t = pass_verbose_0_0(t);
  g_51 = t;
  t = (ATerm) ATinsert(CheckATermList(g_51), term_y_35);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm h_51 = NULL;
  t = pass_verbose_0_0(t);
  h_51 = t;
  t = (ATerm) ATinsert(CheckATermList(h_51), term_y_35);
  return(t);
}
static ATerm s_23 (ATerm t)
{
  t = term_s_58;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm r_51 = NULL;
  t = pass_verbose_0_0(t);
  r_51 = t;
  t = (ATerm) ATinsert(CheckATermList(r_51), term_y_35);
  return(t);
}
static ATerm u_23 (ATerm t)
{
  t = term_s_58;
  return(t);
}
static ATerm w_23 (ATerm t)
{
  ATerm s_51 = NULL;
  t = pass_verbose_0_0(t);
  s_51 = t;
  t = (ATerm) ATinsert(CheckATermList(s_51), term_y_35);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = save_as_1_0(c_24, t);
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_t_58;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  t = term_w_58;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm d_52 = NULL;
  t = pass_verbose_0_0(t);
  d_52 = t;
  t = (ATerm) ATinsert(CheckATermList(d_52), term_y_35);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_w_58;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm e_52 = NULL;
  t = pass_verbose_0_0(t);
  e_52 = t;
  t = (ATerm) ATinsert(CheckATermList(e_52), term_y_35);
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm k_52 = NULL;
  t = pass_verbose_0_0(t);
  k_52 = t;
  t = (ATerm) ATinsert(CheckATermList(k_52), term_y_35);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm q_52 = NULL;
  t = pass_verbose_0_0(t);
  q_52 = t;
  t = (ATerm) ATinsert(CheckATermList(q_52), term_y_35);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = save_as_1_0(s_24, t);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  t = term_g_59;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(l_20, t);
  t = profile_p__2_0(q_20, t_20, t);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm h_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_59);
    }
  else
    {
      t = h_59;
    }
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_59 = t;
  int r_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_53 = NULL;
      q_53 = t;
      t = SSL_is_string(q_53);
      LocalPopChoice(r_59);
    }
  else
    {
      t = p_59;
      {
        ATerm s_59 = t;
        int u_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_24, t);
            LocalPopChoice(u_59);
          }
        else
          {
            t = s_59;
            {
              ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
              a_54 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_54 = ATgetArgument(t, 0);
                  t = b_54;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_54 = ATgetArgument(t, 0);
                      t = b_54;
                      {
                        ATerm w_59 = t;
                        int x_59 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_59);
                          }
                        else
                          {
                            t = w_59;
                            t = debug_1_0(u_24, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_54 = NULL,j_54 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_54 = ATgetArgument(t, 0);
                          c_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_54;
                      t = eval_config_0_0(t);
                      i_54 = t;
                      t = c_54;
                      t = eval_config_0_0(t);
                      j_54 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_54, j_54);
                      t = a_14(i_54, j_54, t);
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
  ATerm n_54 = NULL,o_54 = NULL;
  n_54 = t;
  t = term_y_59;
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_59, n_54);
  t = w_13(o_54, n_54, t);
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_54 = NULL,q_54 = NULL;
        t = eval_config_0_0(t);
        p_54 = t;
        t = term_y_59;
        q_54 = t;
        t = SSL_table_put(q_54, n_54, p_54);
        t = p_54;
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL;
  u_54 = t;
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = w_13(t_52, u_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_60 = ATgetFirst((ATermList) t);
            t_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_60);
        t = SSL_table_put(t_52, u_52, t_54);
        t = (ATerm) ATmakeAppl(sym__3, t_52, u_52, t_54);
      }
    else
      {
        t = b_60;
        t = SSL_table_remove(t_52, u_52);
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
      }
  }
  t = u_54;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  y_54 = t;
  t = g_101(t);
  x_54 = t;
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL;
        t = term_r_52;
        a_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_54, term_r_52);
        t = w_13(x_54, a_55, t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_54 = ATgetFirst((ATermList) t);
      v_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_52;
  z_54 = t;
  t = SSL_table_put(x_54, z_54, v_54);
  t = w_54;
  {
    static ATerm x_24 (ATerm t)
    {
      ATerm b_55 = NULL;
      b_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_54, b_55);
      t = c_13(x_54, b_55, t);
      return(t);
    }
    t = map_1_0(x_24, t);
  }
  t = y_54;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm g_60 = t;
  int h_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      t = h_81(t);
      LocalPopChoice(h_60);
    }
  else
    {
      t = g_60;
      t = h_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL,h_55 = NULL,j_55 = NULL;
  e_55 = t;
  t = f_101(t);
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, term_r_52);
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_60 = ATgetArgument(t, 0);
            ATerm m_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_52;
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_55, term_r_52);
        t = w_13(d_55, o_55, t);
        LocalPopChoice(j_60);
      }
    else
      {
        t = i_60;
        t = (ATerm) ATempty;
      }
  }
  f_55 = t;
  t = term_r_52;
  h_55 = t;
  t = (ATerm) ATinsert(CheckATermList(f_55), (ATerm) ATempty);
  j_55 = t;
  t = SSL_table_put(d_55, h_55, j_55);
  t = e_55;
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_s_52;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  {
    ATerm n_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_56);
        LocalPopChoice(q_60);
      }
    else
      {
        t = n_60;
        t = d_56;
      }
  }
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm t_55 = NULL;
  static ATerm b_25 (ATerm t)
  {
    ATerm u_55 = NULL;
    u_55 = t;
    {
      ATerm r_60 = t;
      int s_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_55 = NULL,y_55 = NULL;
          t = term_s_52;
          x_55 = t;
          t = term_r_52;
          y_55 = t;
          t = term_j_53;
          t = w_13(x_55, y_55, t);
          LocalPopChoice(s_60);
        }
      else
        {
          t = r_60;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_55 != NULL) && (t_55 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_55 = ATgetFirst((ATermList) t);
        {
          ATerm t_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_55;
    t = map_1_0(c_25, t);
    t = u_55;
    t = end_scope_1_0(d_25, t);
    return(t);
  }
  t = begin_scope_1_0(a_25, t);
  t = restore_always_2_0(x_112, b_25, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm j_56 = NULL;
  j_56 = t;
  {
    ATerm u_60 = t;
    int v_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_56 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        o_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_56, term_d_36);
        t = geq_0_0(t);
        t = j_56;
        t = q_103(t);
        LocalPopChoice(v_60);
      }
    else
      {
        t = u_60;
        t = j_56;
      }
  }
  return(t);
}
static ATerm e_13 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm w_60 = t;
  int y_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_40, s_40);
      LocalPopChoice(y_60);
    }
  else
    {
      t = w_60;
      t = SSL_addr(r_40, s_40);
    }
  return(t);
}
static ATerm g_13 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm a_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(x_40, y_40);
      LocalPopChoice(c_61);
    }
  else
    {
      t = a_61;
      t = SSL_subtr(x_40, y_40);
    }
  return(t);
}
static ATerm h_13 (ATerm q_49, ATerm s_49, ATerm u_49, ATerm w_49, ATerm r_49, ATerm t_49, ATerm v_49, ATerm x_49, ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,t_56 = NULL,u_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
  t = g_13(q_49, r_49, t);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_49, t_49);
  t = g_13(s_49, t_49, t);
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_49, v_49);
  t = g_13(u_49, v_49, t);
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_49, x_49);
  t = g_13(w_49, x_49, t);
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__4, q_56, r_56, t_56, u_56);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,c_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_61 = ATgetArgument(t, 0);
      if(match_cons(d_61, sym__4))
        {
          w_56 = ATgetArgument(d_61, 0);
          x_56 = ATgetArgument(d_61, 1);
          y_56 = ATgetArgument(d_61, 2);
          c_57 = ATgetArgument(d_61, 3);
        }
      else
        _fail(t);
      {
        ATerm e_61 = ATgetArgument(t, 1);
        if(match_cons(e_61, sym__4))
          {
            f_57 = ATgetArgument(e_61, 0);
            g_57 = ATgetArgument(e_61, 1);
            h_57 = ATgetArgument(e_61, 2);
            i_57 = ATgetArgument(e_61, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_13(w_56, x_56, y_56, c_57, f_57, g_57, h_57, i_57, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,h_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,r_58 = NULL,u_58 = NULL;
  s_57 = t;
  t = times_0_0(t);
  k_57 = t;
  t = s_57;
  t = e_107(t);
  l_57 = t;
  t = times_0_0(t);
  r_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_57, k_57);
  t = diff_times_0_0(t);
  q_57 = t;
  if(match_cons(t, sym__4))
    {
      l_58 = ATgetArgument(t, 0);
      {
        ATerm f_61 = ATgetArgument(t, 1);
      }
      r_58 = ATgetArgument(t, 2);
      {
        ATerm g_61 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_58, r_58);
  t = e_13(l_58, r_58, t);
  u_58 = t;
  t = SSL_TicksToSeconds(u_58);
  m_57 = t;
  t = q_57;
  if(match_cons(t, sym__4))
    {
      ATerm h_61 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
      {
        ATerm i_61 = ATgetArgument(t, 2);
      }
      j_58 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_58, j_58);
  t = e_13(h_58, j_58, t);
  k_58 = t;
  t = SSL_TicksToSeconds(k_58);
  p_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_57), term_k_61), m_57), term_j_61);
  t = d_107(t);
  t = l_57;
  return(t);
}
ATerm debug_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL;
  v_58 = t;
  t = l_88(t);
  y_58 = t;
  t = term_c_33;
  z_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_58), y_58);
  a_59 = t;
  t = SSL_printnl(z_58, a_59);
  t = v_58;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  b_59 = t;
  t = term_l_61;
  t = get_config_0_0(t);
  c_59 = t;
  t = term_u_34;
  d_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_62), term_z_61), term_y_61), term_x_61), term_t_61), term_s_61), term_q_61), c_59), term_p_61);
  e_59 = t;
  t = SSL_printnl(d_59, e_59);
  t = b_59;
  return(t);
}
static ATerm i_13 (ATerm v_43, ATerm w_43, ATerm t)
{
  t = SSL_copy(v_43, w_43);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_59 = NULL;
  static ATerm e_25 (ATerm t)
  {
    ATerm i_59 = NULL,l_59 = NULL;
    i_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_59), i_59);
    t = w_13(not_null(f_59), i_59, t);
    l_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_59, l_59);
    return(t);
  }
  if(((f_59 != NULL) && (f_59 != t)))
    _fail(t);
  else
    f_59 = t;
  t = SSL_table_keys(f_59);
  t = map_1_0(e_25, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  {
    ATerm e_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_59, term_z_41);
        t = geq_0_0(t);
        t = n_59;
        t = u_103(t);
        LocalPopChoice(f_62);
      }
    else
      {
        t = e_62;
        t = n_59;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm t_59 = NULL;
  t_59 = t;
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_59 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        v_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_59, term_c_39);
        t = geq_0_0(t);
        t = t_59;
        t = t_103(t);
        LocalPopChoice(h_62);
      }
    else
      {
        t = g_62;
        t = t_59;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_60 = NULL,o_60 = NULL,p_60 = NULL;
  l_60 = t;
  if(match_cons(t, sym__2))
    {
      o_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_62 = t;
    int j_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_60;
        if((o_60 != t))
          {
            _fail(t);
          }
        t = l_60;
        LocalPopChoice(j_62);
      }
    else
      {
        t = i_62;
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        {
          ATerm k_62 = t;
          int m_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_60, p_60);
              LocalPopChoice(m_62);
            }
          else
            {
              t = k_62;
              t = SSL_gtr(o_60, p_60);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm x_60 = NULL;
  x_60 = t;
  {
    ATerm n_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_60 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        z_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_60, term_j_39);
        t = geq_0_0(t);
        t = x_60;
        t = v_103(t);
        LocalPopChoice(o_62);
      }
    else
      {
        t = n_62;
        t = x_60;
      }
  }
  return(t);
}
static ATerm l_13 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm a_29, ATerm z_28, ATerm t)
{
  t = e_93(t);
  {
    static ATerm f_25 (ATerm t)
    {
      ATerm b_61 = NULL;
      b_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, b_61);
      t = d_93(t);
      return(t);
    }
    t = fetch_1_0(f_25, t);
  }
  t = z_28;
  return(t);
}
static ATerm m_13 (ATerm a_93 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  static ATerm r_61 (ATerm t)
  {
    ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
    m_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_61 = ATgetFirst((ATermList) t);
            o_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_62 = t;
          int q_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_61;
              {
                static ATerm g_25 (ATerm t)
                {
                  t = v_28;
                  return(t);
                }
                t = l_13(a_93, g_25, n_61, o_61, t);
              }
              t = r_61(t);
              LocalPopChoice(q_62);
            }
          else
            {
              t = p_62;
              {
                ATerm a_36 = NULL,k_36 = NULL,g_11 = NULL;
                t = SSLgetAnnotations(m_61);
                a_36 = t;
                t = o_61;
                t = r_61(t);
                k_36 = t;
                t = (ATerm) ATinsert(CheckATermList(k_36), n_61);
                g_11 = t;
                t = SSLsetAnnotations(g_11, a_36);
              }
            }
        }
      }
    return(t);
  }
  t = w_28;
  t = r_61(t);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  ATerm a_62 = NULL;
  if(match_cons(t, sym__2))
    {
      a_62 = ATgetArgument(t, 0);
      if((a_62 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  {
    ATerm t_62 = t;
    int z_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_63 = ATgetArgument(t, 0);
            ATerm b_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
        t = w_13(l_53, m_53, t);
        LocalPopChoice(z_62);
      }
    else
      {
        t = t_62;
        t = (ATerm) ATempty;
      }
  }
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_61, n_53);
  t = m_13(h_25, w_61, n_53, t);
  v_61 = t;
  t = SSL_table_put(l_53, m_53, v_61);
  t = u_61;
  return(t);
}
static ATerm o_13 (ATerm m_108 (ATerm), ATerm v_53, ATerm u_53, ATerm t)
{
  static ATerm i_25 (ATerm t)
  {
    ATerm b_62 = NULL,c_62 = NULL;
    if(match_cons(t, sym__2))
      {
        b_62 = ATgetArgument(t, 0);
        c_62 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_53, b_62, c_62);
    t = m_108(t);
    return(t);
  }
  t = u_53;
  t = map_1_0(i_25, t);
  return(t);
}
static ATerm s_13 (ATerm q_37, ATerm r_37, ATerm t)
{
  t = SSL_access(q_37, r_37);
  return(t);
}
static ATerm u_62 (ATerm l_62, ATerm t)
{
  t = SSL_fclose(l_62);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  s_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_62 = ATgetArgument(t, 0);
      {
        ATerm c_63 = t;
        int d_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_62);
            LocalPopChoice(d_63);
          }
        else
          {
            t = c_63;
            t = u_62(s_62, t);
          }
      }
    }
  else
    {
      t = u_62(s_62, t);
    }
  return(t);
}
static ATerm p_13 (ATerm f_23, ATerm t)
{
  t = SSL_read_term_from_stream(f_23);
  return(t);
}
static ATerm q_13 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm v_62 = NULL;
  t = SSL_fopen(y_37, z_37);
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_62);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_62 = NULL;
  t = SSL_stdin_stream();
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_62);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_62 = NULL;
  t = SSL_stdout_stream();
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_62);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_62 = NULL;
  t = SSL_stderr_stream();
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_62);
  return(t);
}
static ATerm b_65 (ATerm j_63, ATerm t)
{
  ATerm l_63 = NULL;
  t = SSL_explode_term(j_63);
  if(match_cons(t, sym__2))
    {
      ATerm e_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_63 = ATgetArgument(t, 1);
        if(((ATgetType(f_63) == AT_LIST) && !(ATisEmpty(f_63))))
          {
            l_63 = ATgetFirst((ATermList) f_63);
            {
              ATerm g_63 = (ATerm) ATgetNext((ATermList) f_63);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_63;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_63;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_63;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_63;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_65 (ATerm o_63, ATerm p_63, ATerm r_63, ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,y_63 = NULL,e_64 = NULL,j_11 = NULL;
  t = SSLgetAnnotations(r_63);
  y_63 = t;
  t = o_63;
  if(match_cons(t, sym_Path_1))
    {
      e_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_64, p_63);
  j_11 = t;
  t = SSLsetAnnotations(j_11, y_63);
  if(match_cons(t, sym__2))
    {
      t_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(t_63, u_63, t);
  return(t);
}
static ATerm e_65 (ATerm h_64, ATerm i_64, ATerm j_64, ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,o_64 = NULL,s_64 = NULL,m_11 = NULL;
  t = SSLgetAnnotations(j_64);
  o_64 = t;
  t = SSL_is_string(h_64);
  s_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_64, i_64);
  m_11 = t;
  t = SSLsetAnnotations(m_11, o_64);
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(k_64, l_64, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,a_65 = NULL;
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      x_64 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
      {
        ATerm h_63 = t;
        int i_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_65(w_64, t);
            LocalPopChoice(i_63);
          }
        else
          {
            t = h_63;
            {
              ATerm k_63 = t;
              int m_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_65(x_64, a_65, w_64, t);
                  LocalPopChoice(m_63);
                }
              else
                {
                  t = k_63;
                  t = e_65(x_64, a_65, w_64, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_65(w_64, t);
    }
  return(t);
}
static ATerm j_25 (ATerm t)
{
  t = term_n_63;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  ATerm q_63 = t;
  int s_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_65 = NULL;
      i_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_65, term_v_63);
      t = r_13(t);
      LocalPopChoice(s_63);
    }
  else
    {
      t = q_63;
      t = debug_1_0(j_25, t);
      _fail(t);
    }
  g_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_13(h_65, t);
  f_65 = t;
  t = g_65;
  t = fclose_0_0(t);
  t = f_65;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  t = term_w_63;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_x_63;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm z_63 = t;
  int a_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_65 = NULL,n_65 = NULL;
      m_65 = t;
      t = (ATerm) ATinsert(ATempty, term_b_64);
      n_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_65, (ATerm) ATinsert(ATempty, term_b_64));
      t = s_13(m_65, n_65, t);
      LocalPopChoice(a_64);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = z_63;
      {
        ATerm c_64 = t;
        int d_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_64 = t;
            if((PushChoice() == 0))
              {
                ATerm p_65 = NULL,q_65 = NULL;
                p_65 = t;
                t = (ATerm) ATinsert(ATempty, term_y_52);
                q_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_65, (ATerm) ATinsert(ATempty, term_y_52));
                t = s_13(p_65, q_65, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_64;
              }
            t = debug_1_0(k_25, t);
            LocalPopChoice(d_64);
          }
        else
          {
            t = c_64;
            t = debug_1_0(l_25, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = debug_1_0(n_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_g_64;
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = debug_1_0(p_25, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_m_64;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,j_66 = NULL;
  g_66 = t;
  t = term_c_33;
  h_66 = t;
  t = (ATerm) ATinsert(ATempty, term_n_64);
  j_66 = t;
  t = SSL_printnl(h_66, j_66);
  t = g_66;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL;
  if(match_cons(t, sym__3))
    {
      l_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
      n_66 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_13(l_66, m_66, n_66, t);
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL;
  p_66 = t;
  t = term_c_33;
  q_66 = t;
  t = (ATerm) ATinsert(ATempty, term_p_64);
  r_66 = t;
  t = SSL_printnl(q_66, r_66);
  t = p_66;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  t = term_c_33;
  t_66 = t;
  t = (ATerm) ATinsert(ATempty, term_n_64);
  u_66 = t;
  t = SSL_printnl(t_66, u_66);
  t = s_66;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,w_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,c_66 = NULL,d_66 = NULL;
  r_65 = t;
  t = if_verbose5_1_0(m_25, t);
  {
    ATerm q_64 = t;
    if((PushChoice() == 0))
      {
        ATerm e_66 = NULL,f_66 = NULL;
        t = term_r_64;
        e_66 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_65);
        f_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_64, (ATerm) ATmakeAppl(sym_Imported_1, r_65));
        t = w_13(e_66, f_66, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_64;
      }
  }
  t_65 = t;
  t = term_r_64;
  a_66 = t;
  t = term_t_64;
  c_66 = t;
  t = (ATerm) ATinsert(ATempty, r_65);
  d_66 = t;
  t = SSL_table_put(a_66, c_66, d_66);
  t = t_65;
  t = if_verbose4_1_0(o_25, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_25, t);
  s_65 = t;
  t = term_r_64;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_64, s_65);
  t = o_13(r_25, z_65, s_65, t);
  t = if_verbose6_1_0(s_25, t);
  t = term_r_64;
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_65);
  w_65 = t;
  t = (ATerm) ATempty;
  y_65 = t;
  t = SSL_table_put(u_65, w_65, y_65);
  t = (ATerm) ATmakeAppl(sym__3, term_r_64, (ATerm)ATmakeAppl(sym_Imported_1, r_65), (ATerm) ATempty);
  t = if_verbose4_1_0(t_25, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL,o_67 = NULL;
  l_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_67;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_67 = ATgetFirst((ATermList) t);
          o_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_64 = t;
        int v_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_37 = NULL,b_38 = NULL,c_38 = NULL,t_11 = NULL;
            t = SSLgetAnnotations(l_67);
            w_37 = t;
            t = m_67;
            t = d_96(t);
            b_38 = t;
            t = o_67;
            t = filter_1_0(d_96, t);
            c_38 = t;
            t = (ATerm) ATinsert(CheckATermList(c_38), b_38);
            t_11 = t;
            t = SSLsetAnnotations(t_11, w_37);
            LocalPopChoice(v_64);
          }
        else
          {
            t = u_64;
            t = o_67;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t)
{
  static ATerm r_67 (ATerm t)
  {
    ATerm y_64 = t;
    int z_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_81(t);
        t = r_67(t);
        LocalPopChoice(z_64);
      }
    else
      {
        t = y_64;
        t = l_81(t);
      }
    return(t);
  }
  t = r_67(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_65 = t;
  int j_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_65;
      t = get_config_0_0(t);
      LocalPopChoice(j_65);
    }
  else
    {
      t = c_65;
      {
        ATerm l_65 = t;
        int o_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_67 = NULL;
            t = term_v_65;
            s_67 = t;
            t = SSL_getenv(s_67);
            LocalPopChoice(o_65);
          }
        else
          {
            t = l_65;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = debug_1_0(v_25, t);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = term_x_65;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  t = term_r_64;
  b_68 = t;
  t = term_b_66;
  c_68 = t;
  t = term_i_66;
  t = w_13(b_68, c_68, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_66 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_66;
      }
  }
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = debug_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_o_66;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_67 = NULL;
  t = if_verbose5_1_0(u_25, t);
  v_67 = t;
  {
    ATerm v_66 = t;
    int w_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_67 = NULL,y_67 = NULL;
        t = term_r_64;
        x_67 = t;
        t = term_t_64;
        y_67 = t;
        t = term_x_66;
        t = w_13(x_67, y_67, t);
        LocalPopChoice(w_66);
      }
    else
      {
        t = v_66;
        {
          ATerm a_68 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_68 = t;
          t = repeat_2_0(x_25, _id, t);
          t = a_68;
        }
      }
  }
  t = v_67;
  t = if_verbose5_1_0(y_25, t);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = debug_1_0(b_26, t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = term_y_66;
  return(t);
}
static ATerm g_69 (ATerm j_68, ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,p_68 = NULL;
  t = term_r_64;
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_68);
  p_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_64, (ATerm) ATmakeAppl(sym_Tool_1, j_68));
  t = w_13(n_68, p_68, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_66 = ATgetFirst((ATermList) t);
      if(match_cons(z_66, sym__2))
        {
          ATerm b_67 = ATgetArgument(z_66, 0);
          m_68 = ATgetArgument(z_66, 1);
        }
      else
        _fail(t);
      {
        ATerm a_67 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_68;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = debug_1_0(f_26, t);
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_y_66;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  t = term_r_64;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_26, t);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_c_67;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_67 = t;
  int e_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
      t = if_verbose5_1_0(a_26, t);
      t = xtc_load_0_0(t);
      s_68 = t;
      if(match_cons(t, sym__2))
        {
          q_68 = ATgetArgument(t, 0);
          r_68 = ATgetArgument(t, 1);
          {
            ATerm f_67 = t;
            int g_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_68 = NULL,y_68 = NULL,z_68 = NULL;
                t = term_r_64;
                y_68 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_68);
                z_68 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_64, (ATerm) ATmakeAppl(sym_Tool_1, q_68));
                t = w_13(y_68, z_68, t);
                {
                  static ATerm d_26 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_68 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_68 != NULL) && (w_68 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_68 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_26, t);
                }
                t = not_null(w_68);
                LocalPopChoice(g_67);
              }
            else
              {
                t = f_67;
                t = g_69(s_68, t);
              }
          }
        }
      else
        {
          t = g_69(s_68, t);
        }
      t = if_verbose5_1_0(e_26, t);
      LocalPopChoice(e_67);
    }
  else
    {
      t = d_67;
      {
        ATerm f_69 = NULL,u_38 = NULL,b_39 = NULL;
        f_69 = t;
        t = term_c_33;
        u_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_67), f_69), term_h_67);
        b_39 = t;
        t = SSL_printnl(u_38, b_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_67), f_69), term_h_67);
        t = if_verbose5_1_0(k_26, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_13 (ATerm u_47, ATerm t_47, ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  t = u_47;
  {
    ATerm j_67 = t;
    int k_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(k_67);
      }
    else
      {
        t = j_67;
        t = (ATerm) ATempty;
      }
  }
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_47, l_69);
  t = conc_0_0(t);
  k_69 = t;
  t = term_y_59;
  m_69 = t;
  t = SSL_table_put(m_69, u_47, k_69);
  t = (ATerm) ATmakeAppl(sym__3, term_y_59, u_47, k_69);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,v_69 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_69 = NULL,y_69 = NULL,a_70 = NULL;
      t = term_r_34;
      t = t_0(t);
      x_69 = t;
      t = term_n_67;
      y_69 = t;
      t = term_p_67;
      a_70 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_67, term_p_67, x_69);
      t = x_13(y_69, a_70, x_69, t);
      _fail(t);
    }
  else
    {
      ATerm e_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_69 = ATgetFirst((ATermList) t);
          s_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_69 = ATgetFirst((ATermList) t);
          v_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_69;
      t = p_0(t);
      t = t_69;
      t = r_0(t);
      e_70 = t;
      t = (ATerm) ATinsert(CheckATermList(v_69), e_70);
    }
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm h_70 = NULL;
  h_70 = t;
  if(match_string(t, "-S"))
    {
      t = h_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_70;
    }
  return(t);
}
static ATerm q_26 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL;
  t = term_z_32;
  j_70 = t;
  t = term_s_32;
  k_70 = t;
  t = term_q_67;
  t = z_13(j_70, k_70, t);
  t = term_t_67;
  return(t);
}
static ATerm r_26 (ATerm t)
{
  t = term_u_67;
  return(t);
}
static ATerm s_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_26 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  t = SSL_string_to_int(l_70);
  m_70 = t;
  t = term_z_32;
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, m_70);
  t = z_13(n_70, m_70, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_70);
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_w_67;
  return(t);
}
static ATerm a_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  t = term_z_67;
  o_70 = t;
  t = term_r_34;
  p_70 = t;
  t = term_d_68;
  t = z_13(o_70, p_70, t);
  t = term_e_68;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_f_68;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_26, q_26, r_26, t);
      LocalPopChoice(h_68);
    }
  else
    {
      t = g_68;
      {
        ATerm i_68 = t;
        int k_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_26, t_26, z_26, t);
            LocalPopChoice(k_68);
          }
        else
          {
            t = i_68;
            t = Option_3_0(a_27, c_27, e_27, t);
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm l_68 = t;
  int o_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_70 = NULL;
      t = r_47;
      t = get_config_0_0(t);
      t = term_y_59;
      q_70 = t;
      t = SSL_table_remove(q_70, r_47);
      t = (ATerm) ATmakeAppl(sym__2, term_y_59, r_47);
      LocalPopChoice(o_68);
    }
  else
    {
      t = l_68;
      t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
      t = z_13(r_47, s_47, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_89 (ATerm), ATerm t)
{
  static ATerm v_71 (ATerm t)
  {
    ATerm q_71 = NULL,r_71 = NULL,t_71 = NULL;
    t_71 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_71 = ATgetFirst((ATermList) t);
        r_71 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_39 = NULL,s_39 = NULL,j_16 = NULL;
          t = SSLgetAnnotations(t_71);
          m_39 = t;
          t = r_71;
          t = v_71(t);
          s_39 = t;
          t = (ATerm) ATinsert(CheckATermList(s_39), q_71);
          j_16 = t;
          t = SSLsetAnnotations(j_16, m_39);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_71;
        t = m_89(t);
      }
    return(t);
  }
  t = v_71(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_70;
    }
  else
    {
      static ATerm n_27 (ATerm t)
      {
        t = not_null(u_70);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_70 = ATgetFirst((ATermList) t);
          if(((u_70 != NULL) && (u_70 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_70;
      t = at_end_1_0(n_27, t);
    }
  return(t);
}
static ATerm h_72 (ATerm z_71, ATerm t)
{
  ATerm a_72 = NULL;
  t = SSL_explode_term(z_71);
  if(match_cons(t, sym__2))
    {
      ATerm t_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_72;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  e_72 = t;
  if(match_cons(t, sym__2))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
      {
        ATerm u_68 = t;
        int v_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_27 (ATerm t)
            {
              t = d_72;
              return(t);
            }
            t = c_72;
            t = at_end_1_0(p_27, t);
            LocalPopChoice(v_68);
          }
        else
          {
            t = u_68;
            t = h_72(e_72, t);
          }
      }
    }
  else
    {
      t = h_72(e_72, t);
    }
  return(t);
}
static ATerm v_13 (ATerm v_47, ATerm w_47, ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL;
  t = v_47;
  {
    ATerm x_68 = t;
    int a_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_69);
      }
    else
      {
        t = x_68;
        t = (ATerm) ATempty;
      }
  }
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_72, w_47);
  t = conc_0_0(t);
  i_72 = t;
  t = term_y_59;
  k_72 = t;
  t = SSL_table_put(k_72, v_47, i_72);
  t = (ATerm) ATmakeAppl(sym__3, term_y_59, v_47, i_72);
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  if(match_string(t, "-o"))
    {
      t = m_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_72;
    }
  return(t);
}
static ATerm r_27 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  n_72 = t;
  t = term_j_33;
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_33, n_72);
  t = z_13(o_72, n_72, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_72);
  return(t);
}
static ATerm s_27 (ATerm t)
{
  t = term_b_69;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_27, r_27, s_27, t);
  return(t);
}
static ATerm t_27 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  if(match_string(t, "-i"))
    {
      t = q_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_72;
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  r_72 = t;
  t = term_w_50;
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_50, r_72);
  t = z_13(s_72, r_72, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_72);
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = term_c_69;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_27, u_27, v_27, t);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm z_72 = NULL;
  z_72 = t;
  if(match_string(t, "-I"))
    {
      t = z_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_72;
    }
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  a_73 = t;
  t = term_c_55;
  b_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_73), term_c_55);
  c_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_55, (ATerm) ATinsert(ATinsert(ATempty, a_73), term_c_55));
  t = t_13(b_73, c_73, t);
  t = term_r_34;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_d_69;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  if(match_string(t, "--main"))
    {
      t = d_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = d_73;
    }
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL;
  e_73 = t;
  t = term_e_53;
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_53, e_73);
  t = z_13(f_73, e_73, t);
  t = term_r_34;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_e_69;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm k_73 = NULL;
  k_73 = t;
  if(match_string(t, "--library"))
    {
      t = k_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = k_73;
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL;
  t = term_m_35;
  l_73 = t;
  t = term_r_34;
  m_73 = t;
  t = term_h_69;
  t = z_13(l_73, m_73, t);
  t = term_r_34;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_i_69;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm n_73 = NULL,p_73 = NULL,q_73 = NULL;
  n_73 = t;
  t = term_h_35;
  p_73 = t;
  t = (ATerm) ATinsert(ATempty, n_73);
  q_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATinsert(ATempty, n_73));
  t = v_13(p_73, q_73, t);
  t = term_r_34;
  return(t);
}
static ATerm j_28 (ATerm t)
{
  t = term_j_69;
  return(t);
}
static ATerm l_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  t = term_u_33;
  s_73 = t;
  t = (ATerm) ATinsert(ATempty, r_73);
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_33, (ATerm) ATinsert(ATempty, r_73));
  t = t_13(s_73, t_73, t);
  t = term_r_34;
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_n_69;
  return(t);
}
static ATerm p_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  u_73 = t;
  t = term_k_33;
  v_73 = t;
  t = (ATerm) ATinsert(ATempty, u_73);
  w_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATempty, u_73));
  t = t_13(v_73, w_73, t);
  t = term_r_34;
  return(t);
}
static ATerm t_28 (ATerm t)
{
  t = term_o_69;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  t = term_v_33;
  b_74 = t;
  t = term_r_34;
  c_74 = t;
  t = term_p_69;
  t = z_13(b_74, c_74, t);
  t = term_r_34;
  return(t);
}
static ATerm c_29 (ATerm t)
{
  t = term_q_69;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL;
  t = term_e_54;
  d_74 = t;
  t = term_r_34;
  e_74 = t;
  t = term_u_69;
  t = z_13(d_74, e_74, t);
  t = term_r_34;
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_w_69;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  t = term_m_51;
  g_74 = t;
  t = term_r_34;
  h_74 = t;
  t = term_z_69;
  t = z_13(g_74, h_74, t);
  t = term_r_34;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_b_70;
  return(t);
}
static ATerm l_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  i_74 = t;
  t = SSL_string_to_int(i_74);
  j_74 = t;
  t = term_e_38;
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_38, j_74);
  t = z_13(k_74, j_74, t);
  t = term_r_34;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  t = term_c_70;
  return(t);
}
static ATerm o_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  l_74 = t;
  t = SSL_string_to_int(l_74);
  m_74 = t;
  t = term_h_38;
  n_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_38, m_74);
  t = z_13(n_74, m_74, t);
  t = term_r_34;
  return(t);
}
static ATerm q_29 (ATerm t)
{
  t = term_d_70;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_29 (ATerm t)
{
  ATerm o_74 = NULL,p_74 = NULL;
  t = term_g_40;
  o_74 = t;
  t = term_r_34;
  p_74 = t;
  t = term_f_70;
  t = u_13(o_74, p_74, t);
  t = term_r_34;
  return(t);
}
static ATerm t_29 (ATerm t)
{
  t = term_g_70;
  return(t);
}
static ATerm v_29 (ATerm t)
{
  ATerm s_74 = NULL;
  s_74 = t;
  if(match_string(t, "-h"))
    {
      t = s_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = s_74;
    }
  return(t);
}
static ATerm w_29 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  t = term_i_70;
  t_74 = t;
  t = term_r_34;
  u_74 = t;
  t = term_r_70;
  t = z_13(t_74, u_74, t);
  t = term_r_34;
  return(t);
}
static ATerm x_29 (ATerm t)
{
  t = term_v_70;
  return(t);
}
static ATerm z_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_30 (ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL;
  t = term_w_70;
  w_74 = t;
  t = term_r_34;
  x_74 = t;
  t = term_x_70;
  t = z_13(w_74, x_74, t);
  t = term_r_34;
  return(t);
}
static ATerm b_30 (ATerm t)
{
  t = term_y_70;
  return(t);
}
static ATerm f_30 (ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  if(match_string(t, "-v"))
    {
      t = y_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = y_74;
    }
  return(t);
}
static ATerm h_30 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL;
  t = term_z_70;
  a_75 = t;
  t = term_r_34;
  b_75 = t;
  t = term_a_71;
  t = z_13(a_75, b_75, t);
  t = term_r_34;
  return(t);
}
static ATerm i_30 (ATerm t)
{
  t = term_b_71;
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm d_75 = NULL;
  d_75 = t;
  if(match_string(t, "--warning"))
    {
      t = d_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = d_75;
    }
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  {
    ATerm c_71 = t;
    int d_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,n_16 = NULL;
        t = term_d_51;
        t = get_config_0_0(t);
        l_75 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_75 = ATgetFirst((ATermList) t);
            k_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_75);
        i_75 = t;
        t = j_75;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = k_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_75), j_75);
        n_16 = t;
        t = SSLsetAnnotations(n_16, i_75);
        t = term_d_51;
        g_75 = t;
        t = (ATerm) ATinsert(ATempty, e_75);
        h_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_51, (ATerm) ATinsert(ATempty, e_75));
        t = z_13(g_75, h_75, t);
        LocalPopChoice(d_71);
      }
    else
      {
        t = c_71;
        {
          ATerm m_75 = NULL,n_75 = NULL;
          t = term_d_51;
          m_75 = t;
          t = (ATerm) ATinsert(ATempty, e_75);
          n_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_51, (ATerm) ATinsert(ATempty, e_75));
          t = t_13(m_75, n_75, t);
        }
      }
  }
  t = term_r_34;
  return(t);
}
static ATerm s_30 (ATerm t)
{
  t = term_e_71;
  return(t);
}
static ATerm t_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
  o_75 = t;
  t = term_a_52;
  p_75 = t;
  t = term_d_36;
  q_75 = t;
  t = term_f_71;
  t = z_13(p_75, q_75, t);
  t = o_75;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  t = term_a_52;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  t = term_c_52;
  s_75 = t;
  t = term_s_32;
  t_75 = t;
  t = term_g_71;
  t = z_13(s_75, t_75, t);
  t = r_75;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = term_c_52;
  return(t);
}
static ATerm j_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_31 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL;
  t = term_g_55;
  u_75 = t;
  t = term_r_34;
  v_75 = t;
  t = term_h_71;
  t = z_13(u_75, v_75, t);
  t = term_r_34;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = term_i_71;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm j_71 = t;
  int k_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_71);
    }
  else
    {
      t = j_71;
      {
        ATerm l_71 = t;
        int m_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_71);
          }
        else
          {
            t = l_71;
            {
              ATerm n_71 = t;
              int o_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_27, x_27, y_27, t);
                  LocalPopChoice(o_71);
                }
              else
                {
                  t = n_71;
                  {
                    ATerm p_71 = t;
                    int s_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(z_27, a_28, b_28, t);
                        LocalPopChoice(s_71);
                      }
                    else
                      {
                        t = p_71;
                        {
                          ATerm u_71 = t;
                          int w_71 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(c_28, d_28, e_28, t);
                              LocalPopChoice(w_71);
                            }
                          else
                            {
                              t = u_71;
                              {
                                ATerm x_71 = t;
                                int y_71 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(f_28, h_28, j_28, t);
                                    LocalPopChoice(y_71);
                                  }
                                else
                                  {
                                    t = x_71;
                                    {
                                      ATerm b_72 = t;
                                      int f_72 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(l_28, n_28, o_28, t);
                                          LocalPopChoice(f_72);
                                        }
                                      else
                                        {
                                          t = b_72;
                                          {
                                            ATerm g_72 = t;
                                            int l_72 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(p_28, q_28, t_28, t);
                                                LocalPopChoice(l_72);
                                              }
                                            else
                                              {
                                                t = g_72;
                                                {
                                                  ATerm p_72 = t;
                                                  int t_72 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(x_28, y_28, c_29, t);
                                                      LocalPopChoice(t_72);
                                                    }
                                                  else
                                                    {
                                                      t = p_72;
                                                      {
                                                        ATerm u_72 = t;
                                                        int v_72 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(e_29, f_29, g_29, t);
                                                            LocalPopChoice(v_72);
                                                          }
                                                        else
                                                          {
                                                            t = u_72;
                                                            {
                                                              ATerm w_72 = t;
                                                              int x_72 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(h_29, i_29, j_29, t);
                                                                  LocalPopChoice(x_72);
                                                                }
                                                              else
                                                                {
                                                                  t = w_72;
                                                                  {
                                                                    ATerm y_72 = t;
                                                                    int g_73 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(l_29, m_29, n_29, t);
                                                                        LocalPopChoice(g_73);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_72;
                                                                        {
                                                                          ATerm h_73 = t;
                                                                          int i_73 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(o_29, p_29, q_29, t);
                                                                              LocalPopChoice(i_73);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_73;
                                                                              {
                                                                                ATerm j_73 = t;
                                                                                int o_73 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(r_29, s_29, t_29, t);
                                                                                    LocalPopChoice(o_73);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_73;
                                                                                    {
                                                                                      ATerm x_73 = t;
                                                                                      int y_73 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(y_73);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = x_73;
                                                                                          {
                                                                                            ATerm z_73 = t;
                                                                                            int a_74 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(v_29, w_29, x_29, t);
                                                                                                LocalPopChoice(a_74);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = z_73;
                                                                                                {
                                                                                                  ATerm f_74 = t;
                                                                                                  int q_74 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(z_29, a_30, b_30, t);
                                                                                                      LocalPopChoice(q_74);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = f_74;
                                                                                                      {
                                                                                                        ATerm r_74 = t;
                                                                                                        int v_74 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(f_30, h_30, i_30, t);
                                                                                                            LocalPopChoice(v_74);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = r_74;
                                                                                                            {
                                                                                                              ATerm z_74 = t;
                                                                                                              int c_75 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(o_30, q_30, s_30, t);
                                                                                                                  LocalPopChoice(c_75);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_74;
                                                                                                                  {
                                                                                                                    ATerm f_75 = t;
                                                                                                                    int w_75 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(t_30, x_30, e_31, t);
                                                                                                                        LocalPopChoice(w_75);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = f_75;
                                                                                                                        {
                                                                                                                          ATerm x_75 = t;
                                                                                                                          int y_75 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(f_31, g_31, i_31, t);
                                                                                                                              LocalPopChoice(y_75);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = x_75;
                                                                                                                              t = Option_3_0(j_31, k_31, l_31, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_76), term_t_61), term_k_76), term_j_76), term_i_76), term_t_61), term_h_76), term_g_76), term_f_76), term_e_76), term_d_76), term_c_76), term_b_76), term_a_76), term_z_75);
  return(t);
}
ATerm map_1_0 (ATerm w_88 (ATerm), ATerm t)
{
  static ATerm o_76 (ATerm t)
  {
    ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
    l_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_76;
      }
    else
      {
        ATerm h_40 = NULL,k_40 = NULL,l_40 = NULL,w_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_76 = ATgetFirst((ATermList) t);
            n_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_76);
        h_40 = t;
        t = m_76;
        t = w_88(t);
        k_40 = t;
        t = n_76;
        t = o_76(t);
        l_40 = t;
        t = (ATerm) ATinsert(CheckATermList(l_40), k_40);
        w_16 = t;
        t = SSLsetAnnotations(w_16, h_40);
      }
    return(t);
  }
  t = o_76(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_76 = ATgetFirst((ATermList) t);
      s_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_76 = NULL,x_76 = NULL;
        static ATerm m_31 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_76)), not_null(x_76));
          return(t);
        }
        t = s_76;
        t = n_0(t);
        if(((w_76 != NULL) && (w_76 != t)))
          _fail(t);
        else
          w_76 = t;
        t = r_76;
        t = l_0(t);
        if(((x_76 != NULL) && (x_76 != t)))
          _fail(t);
        else
          x_76 = t;
        t = s_76;
        t = reverse_acc_2_0(l_0, m_31, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_34;
      t = n_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_76 = NULL;
  t = term_r_34;
  t = k_0(t);
  y_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_77), y_76), term_z_76), term_t_61), term_v_76), term_t_61), term_u_76), term_t_76), term_t_61), term_q_76);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_31 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_77), term_b_77);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  ATerm i_77 = t;
  int j_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_77;
      t = get_config_0_0(t);
      c_77 = t;
      LocalPopChoice(j_77);
    }
  else
    {
      t = i_77;
      {
        static ATerm q_31 (ATerm t)
        {
          ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,y_16 = NULL;
          h_77 = t;
          if(match_cons(t, sym_Program_1))
            {
              g_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_77);
          f_77 = t;
          t = g_77;
          if(((c_77 != NULL) && (c_77 != t)))
            _fail(t);
          else
            c_77 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_77);
          y_16 = t;
          t = SSLsetAnnotations(y_16, f_77);
          return(t);
        }
        t = fetch_1_0(q_31, t);
      }
    }
  {
    ATerm n_77 = t;
    int o_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_31 (ATerm t)
        {
          t = not_null(c_77);
          return(t);
        }
        t = short_description_1_0(r_31, t);
        t = echo_0_0(t);
        LocalPopChoice(o_77);
      }
    else
      {
        t = n_77;
      }
  }
  t = term_p_77;
  t = echo_0_0(t);
  t = term_n_67;
  d_77 = t;
  t = term_p_67;
  e_77 = t;
  t = term_q_77;
  t = w_13(d_77, e_77, t);
  t = reverse_acc_2_0(_id, s_31, t);
  t = map_1_0(u_31, t);
  {
    ATerm r_77 = t;
    int s_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_77 = NULL;
        static ATerm v_31 (ATerm t)
        {
          t = not_null(c_77);
          return(t);
        }
        t = long_description_1_0(v_31, t);
        m_77 = t;
        t = (ATerm) ATinsert(CheckATermList(m_77), term_t_61);
        t = echo_0_0(t);
        LocalPopChoice(s_77);
      }
    else
      {
        t = r_77;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  static ATerm r_78 (ATerm t)
  {
    ATerm m_78 = NULL,n_78 = NULL,q_78 = NULL;
    m_78 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_78 = ATgetFirst((ATermList) t);
        q_78 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_77 = t;
      int u_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_41 = NULL,g_41 = NULL,b_17 = NULL;
          t = SSLgetAnnotations(m_78);
          a_41 = t;
          t = n_78;
          t = g_89(t);
          g_41 = t;
          t = (ATerm) ATinsert(CheckATermList(q_78), g_41);
          b_17 = t;
          t = SSLsetAnnotations(b_17, a_41);
          LocalPopChoice(u_77);
        }
      else
        {
          t = t_77;
          {
            ATerm x_41 = NULL,a_42 = NULL,c_17 = NULL;
            t = SSLgetAnnotations(m_78);
            x_41 = t;
            t = q_78;
            t = r_78(t);
            a_42 = t;
            t = (ATerm) ATinsert(CheckATermList(a_42), n_78);
            c_17 = t;
            t = SSLsetAnnotations(c_17, x_41);
          }
        }
    }
    return(t);
  }
  t = r_78(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL;
  x_78 = t;
  {
    ATerm v_77 = t;
    int w_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_77 = ATgetFirst((ATermList) t);
                ATerm y_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_78;
          }
        LocalPopChoice(w_77);
      }
    else
      {
        t = v_77;
        t = (ATerm) ATinsert(ATempty, x_78);
      }
  }
  y_78 = t;
  t = term_u_34;
  z_78 = t;
  t = SSL_printnl(z_78, y_78);
  t = x_78;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_77;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL;
  t = term_z_77;
  d_79 = t;
  t = term_r_34;
  e_79 = t;
  t = term_a_78;
  t = z_13(d_79, e_79, t);
  return(t);
}
static ATerm z_31 (ATerm t)
{
  t = term_b_78;
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL;
  t = term_z_77;
  h_79 = t;
  t = term_r_34;
  i_79 = t;
  t = term_a_78;
  t = z_13(h_79, i_79, t);
  t = term_z_70;
  f_79 = t;
  t = term_r_34;
  g_79 = t;
  t = term_a_71;
  t = z_13(f_79, g_79, t);
  t = term_c_78;
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_d_78;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_78 = t;
  int f_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_31, y_31, z_31, t);
      LocalPopChoice(f_78);
    }
  else
    {
      t = e_78;
      t = Option_3_0(a_32, b_32, c_32, t);
    }
  return(t);
}
static ATerm w_13 (ATerm f_54, ATerm g_54, ATerm t)
{
  t = SSL_table_get(f_54, g_54);
  return(t);
}
static ATerm x_13 (ATerm o_52, ATerm p_52, ATerm n_52, ATerm t)
{
  ATerm k_79 = NULL,m_79 = NULL,n_79 = NULL;
  k_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
  {
    ATerm g_78 = t;
    int h_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_78 = ATgetArgument(t, 0);
            ATerm j_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
        t = w_13(o_52, p_52, t);
        LocalPopChoice(h_78);
      }
    else
      {
        t = g_78;
        t = (ATerm) ATempty;
      }
  }
  m_79 = t;
  t = (ATerm) ATinsert(CheckATermList(m_79), n_52);
  n_79 = t;
  t = SSL_table_put(o_52, p_52, n_79);
  t = k_79;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_79 = NULL,y_79 = NULL,f_80 = NULL;
      t = term_r_34;
      t = i_0(t);
      x_79 = t;
      t = term_n_67;
      y_79 = t;
      t = term_p_67;
      f_80 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_67, term_p_67, x_79);
      t = x_13(y_79, f_80, x_79, t);
      _fail(t);
    }
  else
    {
      ATerm i_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_79 = ATgetFirst((ATermList) t);
          w_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_79;
      t = d_0(t);
      t = term_r_34;
      t = g_0(t);
      i_80 = t;
      t = (ATerm) ATinsert(CheckATermList(w_79), i_80);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_59 (ATerm), ATerm k_59 (ATerm), ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,o_17 = NULL;
  o_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_80 = ATgetFirst((ATermList) t);
      l_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_80);
  j_80 = t;
  t = k_80;
  t = j_59(t);
  m_80 = t;
  t = l_80;
  t = k_59(t);
  n_80 = t;
  t = (ATerm) ATinsert(CheckATermList(n_80), m_80);
  o_17 = t;
  t = SSLsetAnnotations(o_17, j_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,a_81 = NULL,e_81 = NULL,n_81 = NULL,r_17 = NULL;
  w_80 = t;
  {
    ATerm k_78 = t;
    int l_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_78;
        t = j_108(t);
        LocalPopChoice(l_78);
      }
    else
      {
        t = k_78;
      }
  }
  t = w_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_80 = ATgetFirst((ATermList) t);
      a_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_80);
  x_80 = t;
  t = term_k_77;
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_77, y_80);
  t = z_13(n_81, y_80, t);
  t = a_81;
  {
    static ATerm d_82 (ATerm t)
    {
      ATerm p_78 = t;
      int s_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_78 = t;
          int u_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_81 = NULL;
              u_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_81;
              LocalPopChoice(u_78);
            }
          else
            {
              t = t_78;
              t = j_108(t);
              t = Cons_2_0(_id, d_82, t);
            }
          LocalPopChoice(s_78);
        }
      else
        {
          t = p_78;
          {
            ATerm x_81 = NULL,y_81 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_81 = ATgetFirst((ATermList) t);
                y_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_81), (ATerm) ATmakeAppl(sym_Undefined_1, x_81));
          }
        }
      return(t);
    }
    t = d_82(t);
  }
  e_81 = t;
  t = (ATerm) ATinsert(CheckATermList(e_81), (ATerm) ATmakeAppl(sym_Program_1, y_80));
  r_17 = t;
  t = SSLsetAnnotations(r_17, x_80);
  return(t);
}
static ATerm e_32 (ATerm t)
{
  ATerm z_82 = NULL;
  z_82 = t;
  if(match_string(t, "--help"))
    {
      t = z_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_82;
        }
    }
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL;
  t = term_i_70;
  b_83 = t;
  t = term_r_34;
  c_83 = t;
  t = term_r_70;
  t = z_13(b_83, c_83, t);
  t = term_v_78;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_w_78;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  p_82 = t;
  t = term_n_67;
  t_82 = t;
  t = term_p_67;
  u_82 = t;
  t = (ATerm) ATempty;
  v_82 = t;
  t = SSL_table_put(t_82, u_82, v_82);
  t = p_82;
  {
    static ATerm d_32 (ATerm t)
    {
      ATerm a_79 = t;
      int b_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_108(t);
          LocalPopChoice(b_79);
        }
      else
        {
          t = a_79;
          {
            ATerm c_79 = t;
            int j_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_32, f_32, g_32, t);
                LocalPopChoice(j_79);
              }
            else
              {
                t = c_79;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_32, t);
  }
  {
    ATerm l_79 = t;
    int o_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_83 = NULL;
        l_83 = t;
        {
          ATerm p_79 = t;
          int q_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_42 = NULL;
              t = l_83;
              {
                ATerm r_79 = t;
                int s_79 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_70;
                    t = get_config_0_0(t);
                    LocalPopChoice(s_79);
                  }
                else
                  {
                    t = r_79;
                    t = fetch_1_0(h_32, t);
                  }
              }
              t = l_83;
              t = default_system_usage_0_0(t);
              t = term_s_32;
              k_42 = t;
              t = SSL_exit(k_42);
              LocalPopChoice(q_79);
            }
          else
            {
              t = p_79;
              {
                ATerm v_42 = NULL;
                t = term_z_77;
                t = get_config_0_0(t);
                t = l_83;
                t = default_system_about_0_0(t);
                t = term_s_32;
                v_42 = t;
                t = SSL_exit(v_42);
              }
            }
        }
        LocalPopChoice(o_79);
      }
    else
      {
        t = l_79;
        {
          ATerm t_79 = t;
          int u_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_83 = NULL,v_83 = NULL,w_83 = NULL;
              static ATerm i_32 (ATerm t)
              {
                ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,x_17 = NULL;
                a_84 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_84);
                y_83 = t;
                t = z_83;
                if(((n_82 != NULL) && (n_82 != t)))
                  _fail(t);
                else
                  n_82 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_83);
                x_17 = t;
                t = SSLsetAnnotations(x_17, y_83);
                return(t);
              }
              t = fetch_1_0(i_32, t);
              t = term_c_33;
              v_83 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_82)), term_z_79);
              w_83 = t;
              t = SSL_printnl(v_83, w_83);
              t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_82)), term_z_79));
              t = default_system_usage_0_0(t);
              t = term_d_36;
              q_83 = t;
              t = SSL_exit(q_83);
              LocalPopChoice(u_79);
            }
          else
            {
              t = t_79;
            }
        }
      }
  }
  o_82 = t;
  t = term_n_67;
  q_82 = t;
  t = SSL_table_destroy(q_82);
  t = o_82;
  return(t);
}
static ATerm z_13 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm l_84 = NULL;
  t = term_y_59;
  l_84 = t;
  t = SSL_table_put(l_84, o_47, p_47);
  t = (ATerm) ATmakeAppl(sym__3, term_y_59, o_47, p_47);
  return(t);
}
static ATerm a_14 (ATerm q_36, ATerm r_36, ATerm t)
{
  t = SSL_strcat(q_36, r_36);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL;
  s_84 = t;
  t = SSL_explode_string(s_84);
  {
    ATerm a_80 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_85 (ATerm t)
        {
          ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
          s_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_85 = ATgetFirst((ATermList) t);
              u_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_80 = t;
            int h_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_43 = NULL,o_43 = NULL,g_18 = NULL;
                t = SSLgetAnnotations(s_85);
                e_43 = t;
                t = u_85;
                t = w_85(t);
                o_43 = t;
                t = (ATerm) ATinsert(CheckATermList(o_43), t_85);
                g_18 = t;
                t = SSLsetAnnotations(g_18, e_43);
                LocalPopChoice(h_80);
              }
            else
              {
                t = g_80;
                {
                  ATerm f_44 = NULL,h_18 = NULL;
                  t = SSLgetAnnotations(s_85);
                  f_44 = t;
                  t = t_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, t_85);
                  h_18 = t;
                  t = SSLsetAnnotations(h_18, f_44);
                }
              }
          }
          return(t);
        }
        t = w_85(t);
        LocalPopChoice(b_80);
      }
    else
      {
        t = a_80;
        t = (ATerm) ATempty;
      }
  }
  r_84 = t;
  t = SSL_implode_string(r_84);
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
  ATerm r_86 = NULL,t_86 = NULL,u_86 = NULL,w_86 = NULL,g_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,z_87 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,j_88 = NULL,k_88 = NULL,m_88 = NULL,o_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,j_89 = NULL,l_89 = NULL,o_89 = NULL,r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
  r_86 = t;
  t = term_l_61;
  v_89 = t;
  t = term_p_80;
  w_89 = t;
  t = term_q_80;
  t = z_13(v_89, w_89, t);
  t = term_z_32;
  t_89 = t;
  t = term_d_36;
  u_89 = t;
  t = term_r_80;
  t = z_13(t_89, u_89, t);
  t = term_e_38;
  r_89 = t;
  t = term_s_32;
  s_89 = t;
  t = term_s_80;
  t = z_13(r_89, s_89, t);
  t = term_h_38;
  l_89 = t;
  t = term_j_39;
  o_89 = t;
  t = term_t_80;
  t = z_13(l_89, o_89, t);
  t = term_u_80;
  t = xtc_find_path_0_0(t);
  b_88 = t;
  t = term_v_80;
  t = xtc_find_path_0_0(t);
  c_88 = t;
  t = term_z_80;
  t = xtc_find_path_0_0(t);
  d_88 = t;
  t = term_c_55;
  f_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_88), term_c_55), c_88), term_c_55), b_88), term_c_55);
  j_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_55, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_88), term_c_55), c_88), term_c_55), b_88), term_c_55));
  t = z_13(f_89, j_89, t);
  t = term_h_35;
  d_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_81), term_b_81);
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_35, (ATerm) ATinsert(ATinsert(ATempty, term_c_81), term_b_81));
  t = z_13(d_89, e_89, t);
  t = term_d_81;
  t = xtc_find_path_0_0(t);
  z_87 = t;
  t = term_f_81;
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_87, term_f_81);
  t = a_14(z_87, b_89, t);
  r_87 = t;
  t = term_d_81;
  t = xtc_find_path_0_0(t);
  v_87 = t;
  t = term_f_81;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_87, term_f_81);
  t = a_14(v_87, a_89, t);
  s_87 = t;
  t = term_i_81;
  t = xtc_find_path_0_0(t);
  u_87 = t;
  t = term_f_81;
  z_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_87, term_f_81);
  t = a_14(u_87, z_88, t);
  t_87 = t;
  t = term_u_33;
  o_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_87), term_c_55), s_87), term_c_55), r_87), term_c_55);
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_87), term_c_55), s_87), term_c_55), r_87), term_c_55));
  t = z_13(o_88, y_88, t);
  t = term_d_81;
  t = xtc_find_path_0_0(t);
  g_87 = t;
  t = term_j_81;
  m_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_87, term_j_81);
  t = a_14(g_87, m_88, t);
  t_86 = t;
  t = term_i_81;
  t = xtc_find_path_0_0(t);
  w_86 = t;
  t = term_m_81;
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_86, term_m_81);
  t = a_14(w_86, k_88, t);
  u_86 = t;
  t = term_k_33;
  h_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_81), term_r_81), u_86), term_o_81), term_q_81), term_p_81), t_86), term_o_81);
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_81), term_r_81), u_86), term_o_81), term_q_81), term_p_81), t_86), term_o_81));
  t = z_13(h_88, j_88, t);
  t = term_d_51;
  f_88 = t;
  t = (ATerm) ATinsert(ATempty, term_t_81);
  g_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_51, (ATerm) ATinsert(ATempty, term_t_81));
  t = z_13(f_88, g_88, t);
  t = r_86;
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm v_90 = NULL;
  v_90 = t;
  t = term_w_50;
  t = get_config_0_0(t);
  t = debug_1_0(l_32, t);
  t = v_90;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  t = term_v_81;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm w_81 = t;
    int z_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
        t = term_w_70;
        t = get_config_0_0(t);
        t = term_a_82;
        t = xtc_find_0_0(t);
        z_89 = t;
        t = term_u_34;
        b_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_89, term_u_34);
        t = i_13(z_89, b_90, t);
        t = term_s_32;
        a_90 = t;
        t = SSL_exit(a_90);
        LocalPopChoice(z_81);
      }
    else
      {
        t = w_81;
      }
  }
  {
    ATerm b_82 = t;
    int c_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_90 = NULL;
        t = term_z_70;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = term_s_32;
        e_90 = t;
        t = SSL_exit(e_90);
        LocalPopChoice(c_82);
      }
    else
      {
        t = b_82;
      }
  }
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_90 = NULL;
        l_90 = t;
        t = term_w_50;
        t = get_config_0_0(t);
        t = l_90;
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
        {
          ATerm n_90 = NULL,o_90 = NULL,s_90 = NULL;
          t = term_c_33;
          o_90 = t;
          t = (ATerm) ATinsert(ATempty, term_g_82);
          s_90 = t;
          t = SSL_printnl(o_90, s_90);
          t = term_d_36;
          n_90 = t;
          t = SSL_exit(n_90);
          t = (ATerm) ATinsert(ATempty, term_g_82);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(j_32, t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  t = if_verbose1_1_0(o_32, t);
  return(t);
}
static ATerm n_32 (ATerm t)
{
  t = xtc_temp_files_1_0(q_32, t);
  return(t);
}
static ATerm o_32 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL;
  b_91 = t;
  t = term_c_33;
  c_91 = t;
  t = (ATerm) ATinsert(CheckATermList(b_91), term_h_82);
  d_91 = t;
  t = SSL_printnl(c_91, d_91);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(CheckATermList(b_91), term_h_82));
  return(t);
}
static ATerm q_32 (ATerm t)
{
  ATerm i_82 = t;
  int j_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_91 = NULL;
      t = term_w_50;
      t = get_config_0_0(t);
      e_91 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_91);
      LocalPopChoice(j_82);
    }
  else
    {
      t = i_82;
      t = term_x_52;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL;
  t = run_time_0_0(t);
  h_91 = t;
  t = term_c_33;
  i_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_82), h_91), term_k_82);
  j_91 = t;
  t = SSL_printnl(i_91, j_91);
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_82), h_91), term_k_82));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm m_82 = t;
  int r_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_90 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_32, n_32, t);
      t = if_verbose2_1_0(r_32, t);
      t = term_s_32;
      y_90 = t;
      t = SSL_exit(y_90);
      LocalPopChoice(r_82);
    }
  else
    {
      t = m_82;
      {
        ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL;
        t = run_time_0_0(t);
        n_91 = t;
        t = term_c_33;
        p_91 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_82), n_91), term_s_82);
        q_91 = t;
        t = SSL_printnl(p_91, q_91);
        t = term_d_36;
        o_91 = t;
        t = SSL_exit(o_91);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
