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
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
ATerm term_l_82;
ATerm term_g_82;
ATerm term_f_82;
ATerm term_c_82;
ATerm term_b_82;
ATerm term_w_81;
ATerm term_t_81;
ATerm term_s_81;
ATerm term_r_81;
ATerm term_q_81;
ATerm term_p_81;
ATerm term_o_81;
ATerm term_n_81;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_d_81;
ATerm term_c_81;
ATerm term_b_81;
ATerm term_a_81;
ATerm term_x_80;
ATerm term_w_80;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_n_80;
ATerm term_r_79;
ATerm term_m_79;
ATerm term_h_79;
ATerm term_y_78;
ATerm term_t_78;
ATerm term_s_78;
ATerm term_l_78;
ATerm term_k_78;
ATerm term_e_76;
ATerm term_d_76;
ATerm term_r_75;
ATerm term_n_75;
ATerm term_l_75;
ATerm term_i_75;
ATerm term_h_75;
ATerm term_e_75;
ATerm term_d_75;
ATerm term_c_75;
ATerm term_b_75;
ATerm term_a_75;
ATerm term_v_74;
ATerm term_u_74;
ATerm term_t_74;
ATerm term_s_74;
ATerm term_r_74;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_f_71;
ATerm term_c_71;
ATerm term_b_71;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_j_70;
ATerm term_g_70;
ATerm term_e_70;
ATerm term_x_69;
ATerm term_t_69;
ATerm term_r_69;
ATerm term_k_69;
ATerm term_h_69;
ATerm term_f_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_x_68;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_t_68;
ATerm term_s_68;
ATerm term_r_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_m_67;
ATerm term_l_67;
ATerm term_k_67;
ATerm term_h_67;
ATerm term_f_67;
ATerm term_b_67;
ATerm term_a_67;
ATerm term_y_66;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_s_66;
ATerm term_r_66;
ATerm term_f_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_w_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_o_65;
ATerm term_l_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_n_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_i_64;
ATerm term_h_64;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_v_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_q_62;
ATerm term_o_62;
ATerm term_b_62;
ATerm term_z_61;
ATerm term_v_61;
ATerm term_m_59;
ATerm term_f_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_b_58;
ATerm term_a_58;
ATerm term_x_57;
ATerm term_q_57;
ATerm term_w_56;
ATerm term_m_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_q_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_g_55;
ATerm term_n_54;
ATerm term_x_53;
ATerm term_t_53;
ATerm term_q_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_j_53;
ATerm term_g_53;
ATerm term_e_53;
ATerm term_a_53;
ATerm term_x_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_l_52;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_v_50;
ATerm term_r_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_c_50;
ATerm term_w_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_v_48;
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
ATerm term_e_48;
ATerm term_b_48;
ATerm term_y_47;
ATerm term_w_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
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
ATerm term_u_45;
ATerm term_t_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_g_44;
ATerm term_t_43;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_q_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_s_41;
ATerm term_q_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_e_41;
ATerm term_c_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_c_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_q_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_v_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_f_34;
ATerm term_x_33;
ATerm term_v_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_v_32;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in ", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(", concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_44, term_p_35, term_l_44);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_44, term_a_33, term_r_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_44, term_z_35, term_v_44);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_44, term_d_39, term_y_44);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_45, term_e_45, term_f_45);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_45, term_j_45, term_k_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_45, term_n_45, term_o_45);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_45, term_r_45, term_t_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_x_45, term_y_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_b_46, term_c_46);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_46, term_f_46, term_g_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_a_39, term_j_46);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_46, term_m_46, term_n_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_46, term_v_46, term_w_46);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_46, term_z_46, term_a_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_47, term_g_47, term_h_47);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_47, term_k_47, term_l_47);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_47, term_p_47, term_q_47);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_47, term_t_47, term_u_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_47, term_b_48, term_e_48);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_48, term_n_48, term_o_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_48, term_r_48, term_s_48);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_48, term_v_48, term_w_48);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_48, term_s_41, term_z_48);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_49, term_c_49, term_d_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_49, term_i_49, term_j_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_49, term_m_49, term_n_49);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym__2, term_g_53, term_x_52);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym__2, term_z_64, term_t_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_z_64, term_a_65);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_66));
  term_r_66 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_v_32);
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_32);
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(sym__2, term_h_67, term_f_34);
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_f_34);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_f_34);
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym__2, term_l_55, term_f_34);
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(sym__2, term_v_50, term_f_34);
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym__2, term_w_39, term_f_34);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(sym__2, term_l_70, term_f_34);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(sym__2, term_o_70, term_f_34);
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(sym__2, term_r_70, term_f_34);
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym__2, term_r_51, term_p_35);
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(sym__2, term_t_51, term_v_32);
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(sym__2, term_w_55, term_f_34);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(sym__2, term_v_66, term_w_66);
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(sym__2, term_k_78, term_f_34);
  ATprotect(&(term_s_78));
  term_s_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(sym__2, term_b_62, term_u_80);
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_p_35);
  ATprotect(&(term_x_80));
  term_x_80 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_v_32);
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(sym__2, term_z_37, term_d_39);
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_c_81));
  term_c_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_d_81));
  term_d_81 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_p_81));
  term_p_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_q_81));
  term_q_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_r_81));
  term_r_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_s_81));
  term_s_81 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_f_82));
  term_f_82 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_82));
  term_l_82 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm s_12 (ATerm n_21, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm t_12 (ATerm l_21, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm u_12 (ATerm i_44, ATerm h_44, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
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
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
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
static ATerm t_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm h_106 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm j_106 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm r_12 (ATerm t);
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
static ATerm x_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm h_17 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
ATerm save_as_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm f_106 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t);
static ATerm y_12 (ATerm e_49, ATerm f_49, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_106 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm e_115 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm z_20 (ATerm), ATerm a_21 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t);
static ATerm o_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm i_106 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm l_90 (ATerm), ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm o_19 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm v_12 (ATerm f_21 (ATerm), ATerm g_21, ATerm t);
static ATerm w_12 (ATerm a_23, ATerm b_23, ATerm t);
static ATerm x_12 (ATerm q_89 (ATerm), ATerm l_192, ATerm k_23, ATerm t);
static ATerm a_13 (ATerm v_102 (ATerm), ATerm t_42, ATerm r_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm p_19 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm f_114 (ATerm), ATerm t);
static ATerm r_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm d_20 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm g_81 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm k_20 (ATerm t);
static ATerm m_20 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm e_105 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm k_100 (ATerm), ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm b_13 (ATerm b_21, ATerm t);
static ATerm t_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm r_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm d_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm j_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm l_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm y_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm g_25 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm c_13 (ATerm h_53, ATerm i_53, ATerm t);
ATerm end_scope_1_0 (ATerm s_102 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_102 (ATerm), ATerm t);
static ATerm i_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_114 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm c_105 (ATerm), ATerm t);
static ATerm e_13 (ATerm f_41, ATerm g_41, ATerm t);
static ATerm g_13 (ATerm l_41, ATerm m_41, ATerm t);
static ATerm h_13 (ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm l_50, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
static ATerm i_13 (ATerm j_44, ATerm k_44, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm h_105 (ATerm), ATerm t);
static ATerm l_13 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm m_29, ATerm l_29, ATerm t);
static ATerm m_13 (ATerm j_94 (ATerm), ATerm i_29, ATerm h_29, ATerm t);
static ATerm p_25 (ATerm t);
static ATerm n_13 (ATerm z_53, ATerm a_54, ATerm b_54, ATerm t);
static ATerm o_13 (ATerm y_109 (ATerm), ATerm j_54, ATerm i_54, ATerm t);
static ATerm s_13 (ATerm c_38, ATerm d_38, ATerm t);
static ATerm k_66 (ATerm c_66, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_13 (ATerm g_23, ATerm t);
static ATerm q_13 (ATerm l_38, ATerm m_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_68 (ATerm x_66, ATerm t);
static ATerm i_68 (ATerm c_67, ATerm d_67, ATerm e_67, ATerm t);
static ATerm k_68 (ATerm p_67, ATerm q_67, ATerm s_67, ATerm t);
static ATerm r_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm g_26 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm s_72 (ATerm y_71, ATerm t);
static ATerm n_26 (ATerm t);
static ATerm s_26 (ATerm t);
static ATerm t_26 (ATerm t);
static ATerm u_26 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm t_13 (ATerm i_48, ATerm h_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm d_27 (ATerm t);
static ATerm f_27 (ATerm t);
static ATerm h_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
static ATerm t_27 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_13 (ATerm f_48, ATerm g_48, ATerm t);
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_75 (ATerm f_75, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_13 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
static ATerm i_28 (ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm r_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm t_28 (ATerm t);
static ATerm v_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm q_29 (ATerm t);
static ATerm r_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm u_29 (ATerm t);
static ATerm v_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm x_29 (ATerm t);
static ATerm y_29 (ATerm t);
static ATerm z_29 (ATerm t);
static ATerm a_30 (ATerm t);
static ATerm d_30 (ATerm t);
static ATerm e_30 (ATerm t);
static ATerm f_30 (ATerm t);
static ATerm i_30 (ATerm t);
static ATerm j_30 (ATerm t);
static ATerm l_30 (ATerm t);
static ATerm o_30 (ATerm t);
static ATerm p_30 (ATerm t);
static ATerm q_30 (ATerm t);
static ATerm r_30 (ATerm t);
static ATerm s_30 (ATerm t);
static ATerm t_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
static ATerm k_31 (ATerm t);
static ATerm n_31 (ATerm t);
ATerm sc_options_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t);
static ATerm u_31 (ATerm t);
static ATerm y_31 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_90 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_32 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm d_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm g_32 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm w_13 (ATerm t_54, ATerm u_54, ATerm t);
static ATerm x_13 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_109 (ATerm), ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
ATerm parse_options_1_0 (ATerm u_109 (ATerm), ATerm t);
static ATerm z_13 (ATerm c_48, ATerm d_48, ATerm t);
static ATerm a_14 (ATerm c_37, ATerm d_37, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
ATerm init_sc_config_0_0 (ATerm t);
static ATerm n_32 (ATerm t);
static ATerm o_32 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = l_96(t);
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
      t = foldr_2_0(l_96, m_96, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, s_0);
      t = m_96(t);
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_v_32;
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
  t = e_13(c_1, e_1, t);
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
      ATerm w_32 = ATgetArgument(t, 0);
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
ATerm if_verbose2_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
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
        t = f_1;
        t = d_105(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = f_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  t = term_b_33;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_d_33);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = q_1;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  t = term_b_33;
  w_1 = t;
  t = (ATerm) ATinsert(ATempty, v_1);
  x_1 = t;
  t = SSL_printnl(w_1, x_1);
  t = v_1;
  return(t);
}
static ATerm s_12 (ATerm n_21, ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = get_config_0_0(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = get_outfile_1_0(g_1, t);
      }
  }
  m_1 = t;
  t = term_k_33;
  t = get_config_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_1), m_1), term_i_33), n_21));
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
      t = term_q_33;
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
  ATerm k_2 = NULL,m_2 = NULL,n_2 = NULL;
  k_2 = t;
  t = term_b_33;
  m_2 = t;
  t = (ATerm) ATinsert(ATempty, term_r_33);
  n_2 = t;
  t = SSL_printnl(m_2, n_2);
  t = k_2;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_s_33;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,q_2 = NULL;
  o_2 = t;
  t = term_b_33;
  p_2 = t;
  t = (ATerm) ATinsert(ATempty, o_2);
  q_2 = t;
  t = SSL_printnl(p_2, q_2);
  t = o_2;
  return(t);
}
static ATerm t_12 (ATerm l_21, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(l_1, t);
  b_2 = t;
  t = term_t_33;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_i_33), l_21), term_v_33));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, c_2);
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
      t = y_12(e_2, f_2, t);
      t = term_q_33;
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
  t = term_b_33;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_2), term_x_33);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(w_2), term_x_33));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm z_33 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      s_2 = t;
      t = term_v_33;
      t = get_config_0_0(t);
      t = s_2;
      LocalPopChoice(b_34);
    }
  else
    {
      t = z_33;
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
static ATerm u_12 (ATerm i_44, ATerm h_44, ATerm t)
{
  ATerm c_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(i_44, h_44);
      LocalPopChoice(e_34);
    }
  else
    {
      t = c_34;
      t = get_errno_0_0(t);
      t = term_f_34;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, i_44, h_44);
      t = i_13(i_44, h_44, t);
      t = SSL_remove(i_44);
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
    ATerm g_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = t_3;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_j_34;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, term_j_34);
        t = i_13(u_3, t_1, t);
        t = SSL_remove(u_3);
        t = term_j_34;
        LocalPopChoice(i_34);
      }
    else
      {
        t = g_34;
        {
          ATerm k_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_2 = NULL;
              t = t_3;
              t = x_0(t);
              i_2 = t;
              {
                ATerm n_34 = t;
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
                    t = n_34;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, u_3, i_2);
              t = u_12(u_3, i_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_2);
              LocalPopChoice(m_34);
            }
          else
            {
              t = k_34;
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
  t = term_o_34;
  y_3 = t;
  t = term_q_34;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_r_34);
  z_3 = t;
  t = c_4;
  t = comp_0_2(y_3, z_3, t);
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
  ATerm m_4 = NULL;
  m_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_s_34);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  l_4 = t;
  t = term_v_34;
  d_4 = t;
  t = l_4;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_35;
        t = get_config_0_0(t);
        t = l_4;
        LocalPopChoice(z_34);
        t = (ATerm) ATinsert(ATempty, term_a_35);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATempty;
      }
  }
  j_4 = t;
  t = term_s_34;
  t = get_config_0_0(t);
  t = foldr_3_0(l_2, conc_0_0, t_2, t);
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
  t = term_b_33;
  b_5 = t;
  t = (ATerm) ATinsert(ATempty, term_b_35);
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
  ATerm j_5 = NULL,k_5 = NULL,o_5 = NULL;
  o_5 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_5 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(o_5);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
              u_0 = t;
              t = SSLsetAnnotations(u_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_5;
          }
        LocalPopChoice(d_35);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = c_35;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
  }
  t = if_keep1_1_0(j_3, t);
  t = olevel_2_0(m_3, n_3, t);
  t = olevel_2_0(v_4, w_4, t);
  k_5 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm h_4 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(k_5);
              h_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
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
        LocalPopChoice(f_35);
        t = xtc_transform_file_2_0(g_5, h_5, t);
      }
    else
      {
        t = e_35;
        t = xtc_transform_term_2_0(t_5, d_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  j_5 = t;
  {
    ATerm g_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_7 = ATgetArgument(t, 0);
            {
              ATerm p_4 = NULL,b_1 = NULL;
              t = SSLgetAnnotations(j_5);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_7);
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
        LocalPopChoice(k_35);
        t = xtc_transform_file_2_0(l_6, pass_verbose_0_0, t);
      }
    else
      {
        t = g_35;
        t = xtc_transform_term_2_0(m_6, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(n_6, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  t = term_b_33;
  e_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_l_35);
  f_5 = t;
  t = SSL_printnl(e_5, f_5);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(d_5), term_l_35));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm u_5 = NULL;
  t = pass_verbose_0_0(t);
  u_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_5), term_n_35);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm v_5 = NULL;
  t = pass_verbose_0_0(t);
  v_5 = t;
  t = (ATerm) ATinsert(CheckATermList(v_5), term_n_35);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL;
  y_5 = t;
  {
    ATerm q_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_6 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(y_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_6);
              w_0 = t;
              t = SSLsetAnnotations(w_0, f_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_5;
          }
        LocalPopChoice(s_35);
        t = xtc_transform_file_2_0(p_3, s_3, t);
      }
    else
      {
        t = q_35;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(a_4, t);
  w_5 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_6 = ATgetArgument(t, 0);
            {
              ATerm l_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(w_5);
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_6);
              z_0 = t;
              t = SSLsetAnnotations(z_0, l_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_5;
          }
        LocalPopChoice(u_35);
        t = xtc_transform_file_2_0(f_4, i_4, t);
      }
    else
      {
        t = t_35;
        t = xtc_transform_term_2_0(n_4, o_4, t);
      }
  }
  t = if_keep1_1_0(q_4, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_n_35);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_v_35;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_6 = NULL;
  t = pass_verbose_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_6), term_n_35);
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
  ATerm s_6 = NULL;
  t = pass_verbose_0_0(t);
  s_6 = t;
  t = (ATerm) ATinsert(CheckATermList(s_6), term_n_35);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm u_6 = NULL;
  t = pass_verbose_0_0(t);
  u_6 = t;
  t = (ATerm) ATinsert(CheckATermList(u_6), term_n_35);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = save_as_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_y_35;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_z_35;
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
  t = term_a_36;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_n_35);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_n_35);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = get_outfile_1_0(p_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_g_36;
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
  t = term_b_33;
  f_8 = t;
  t = (ATerm) ATinsert(ATempty, term_h_36);
  g_8 = t;
  t = SSL_printnl(f_8, g_8);
  t = e_8;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,p_8 = NULL;
  h_8 = t;
  t = term_b_33;
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(h_8), term_i_36);
  p_8 = t;
  t = SSL_printnl(i_8, p_8);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(h_8), term_i_36));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm m_9 = NULL;
  t = pass_verbose_0_0(t);
  m_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_m_36);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm n_9 = NULL;
  t = pass_verbose_0_0(t);
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_9), term_m_36);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  ATerm o_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL;
      b_8 = t;
      t = term_a_35;
      t = get_config_0_0(t);
      t = b_8;
      LocalPopChoice(r_36);
      {
        ATerm c_8 = NULL;
        c_8 = t;
        t = if_verbose2_1_0(q_6, t);
        {
          static ATerm t_6 (ATerm t)
          {
            ATerm t_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
            u_4 = t;
            t = term_t_36;
            s_4 = t;
            t = (ATerm) ATinsert(ATempty, term_v_36);
            t_4 = t;
            t = u_4;
            t = comp_0_2(s_4, t_4, t);
            t_8 = t;
            {
              ATerm a_37 = t;
              int e_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_9 = NULL,c_9 = NULL;
                  t = term_g_37;
                  t = get_config_0_0(t);
                  b_9 = t;
                  t = term_h_37;
                  t = get_config_0_0(t);
                  c_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
                  {
                    ATerm i_37 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm d_9 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            d_9 = ATgetArgument(t, 0);
                            if((d_9 != ATgetArgument(t, 1)))
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
                        t = i_37;
                      }
                  }
                  LocalPopChoice(e_37);
                }
              else
                {
                  t = a_37;
                  t = term_g_37;
                  t = get_config_0_0(t);
                  t = debug_1_0(w_6, t);
                  _fail(t);
                }
            }
            t = t_8;
            {
              static ATerm y_6 (ATerm t)
              {
                t = get_outfile_1_0(z_6, t);
                if(((z_7 != NULL) && (z_7 != t)))
                  _fail(t);
                else
                  z_7 = t;
                return(t);
              }
              t = copy_to_1_0(y_6, t);
            }
            {
              ATerm j_37 = t;
              int k_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_9 = NULL,l_9 = NULL;
                  l_9 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      k_9 = ATgetArgument(t, 0);
                      {
                        ATerm x_4 = NULL,o_3 = NULL;
                        t = SSLgetAnnotations(l_9);
                        x_4 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, x_4);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = l_9;
                    }
                  LocalPopChoice(k_37);
                  t = xtc_transform_file_2_0(c_7, g_7, t);
                }
              else
                {
                  t = j_37;
                  t = xtc_transform_term_2_0(h_7, i_7, t);
                }
            }
            {
              static ATerm k_7 (ATerm t)
              {
                t = get_outfile_1_0(l_7, t);
                if(((a_8 != NULL) && (a_8 != t)))
                  _fail(t);
                else
                  a_8 = t;
                return(t);
              }
              t = copy_to_1_0(k_7, t);
            }
            y_8 = t;
            t = term_b_33;
            z_8 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_8)), term_m_37), not_null(z_7)), term_l_37));
            a_9 = t;
            t = SSL_printnl(z_8, a_9);
            t = y_8;
            return(t);
          }
          t = profile_p__2_0(r_6, t_6, t);
        }
        t = c_8;
      }
    }
  else
    {
      t = o_36;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  {
    ATerm p_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_9, term_p_35);
        t = geq_0_0(t);
        t = t_9;
        t = e_106(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = p_37;
        t = t_9;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,g_10 = NULL;
        t = b_10;
        t = i_115(t);
        f_10 = t;
        t = term_z_37;
        t = get_config_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, f_10);
        t = geq_0_0(t);
        t = b_10;
        t = j_115(t);
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = b_10;
      }
  }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_n_35);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_n_35);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm q_8 = NULL;
  t = pass_verbose_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(CheckATermList(q_8), term_n_35);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_a_38;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm r_8 = NULL;
  t = pass_verbose_0_0(t);
  r_8 = t;
  t = (ATerm) ATinsert(CheckATermList(r_8), term_n_35);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_11;
        {
          ATerm g_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  x_6 = ATgetArgument(t, 0);
                  {
                    ATerm w_7 = NULL,q_3 = NULL;
                    t = SSLgetAnnotations(p_11);
                    w_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, x_6);
                    q_3 = t;
                    t = SSLsetAnnotations(q_3, w_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_11;
                }
              LocalPopChoice(n_38);
              t = xtc_transform_file_2_0(m_7, n_7, t);
            }
          else
            {
              t = g_38;
              t = xtc_transform_term_2_0(o_7, p_7, t);
            }
        }
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = p_11;
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  n_8 = ATgetArgument(t, 0);
                  {
                    ATerm w_8 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(p_11);
                    w_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_8);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, w_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_11;
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
  ATerm z_11 = NULL,a_12 = NULL,c_12 = NULL;
  c_12 = t;
  t = term_r_38;
  z_11 = t;
  t = c_12;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_35;
        t = get_config_0_0(t);
        t = c_12;
        LocalPopChoice(u_38);
        t = (ATerm) ATinsert(ATempty, term_w_38);
      }
    else
      {
        t = t_38;
        t = (ATerm) ATempty;
      }
  }
  a_12 = t;
  t = c_12;
  t = comp_0_2(z_11, a_12, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm e_12 = NULL;
  e_12 = t;
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_12 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_a_39);
        t = geq_0_0(t);
        t = e_12;
        t = h_106(t);
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        t = e_12;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_12, term_d_39);
        t = geq_0_0(t);
        t = l_12;
        t = j_106(t);
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        t = l_12;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  t = term_b_33;
  z_15 = t;
  t = (ATerm) ATinsert(ATempty, term_f_39);
  a_16 = t;
  t = SSL_printnl(z_15, a_16);
  t = y_15;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = if_verbose1_1_0(d_8, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm h_16 = NULL;
  t = if_verbose3_1_0(j_8, t);
  t = olevel_2_0(o_8, s_8, t);
  t = olevel_2_0(o_9, p_9, t);
  t = olevel_2_0(c_10, d_10, t);
  h_16 = t;
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_18 = ATgetArgument(t, 0);
            {
              ATerm o_12 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(h_16);
              o_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
              p_5 = t;
              t = SSLsetAnnotations(p_5, o_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_16;
          }
        LocalPopChoice(h_39);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = g_39;
        t = xtc_transform_term_2_0(n_11, o_11, t);
      }
  }
  t = olevel_2_0(r_11, s_11, t);
  t = olevel_2_0(f_13, k_13, t);
  t = olevel_2_0(n_14, p_14, t);
  t = olevel_2_0(b_15, c_15, t);
  t = olevel_2_0(m_16, n_16, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  t = term_b_33;
  e_16 = t;
  t = (ATerm) ATinsert(CheckATermList(d_16), term_i_39);
  f_16 = t;
  t = SSL_printnl(e_16, f_16);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(d_16), term_i_39));
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = term_z_37;
  t = get_config_0_0(t);
  t = debug_1_0(l_8, t);
  t = i_16;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_16 = NULL;
  j_16 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_16 = ATgetArgument(t, 0);
            {
              ATerm r_9 = NULL,x_3 = NULL;
              t = SSLgetAnnotations(j_16);
              r_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_16);
              x_3 = t;
              t = SSLsetAnnotations(x_3, r_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_16;
          }
        LocalPopChoice(l_39);
        t = xtc_transform_file_2_0(u_8, v_8, t);
      }
    else
      {
        t = k_39;
        t = xtc_transform_term_2_0(x_8, e_9, t);
      }
  }
  t = if_keep1_1_0(h_9, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm t_16 = NULL;
  t = pass_verbose_0_0(t);
  t_16 = t;
  t = (ATerm) ATinsert(CheckATermList(t_16), term_n_35);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm u_16 = NULL;
  t = pass_verbose_0_0(t);
  u_16 = t;
  t = (ATerm) ATinsert(CheckATermList(u_16), term_n_35);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = save_as_1_0(i_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_q_39;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_17;
        {
          ATerm u_39 = t;
          if((PushChoice() == 0))
            {
              t = term_w_39;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_39;
            }
        }
        t = k_17;
        {
          ATerm x_39 = t;
          int y_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_10 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  m_10 = ATgetArgument(t, 0);
                  {
                    ATerm d_11 = NULL,i_5 = NULL;
                    t = SSLgetAnnotations(k_17);
                    d_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, m_10);
                    i_5 = t;
                    t = SSLsetAnnotations(i_5, d_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = k_17;
                }
              LocalPopChoice(y_39);
              t = xtc_transform_file_2_0(s_9, u_9, t);
            }
          else
            {
              t = x_39;
              t = xtc_transform_term_2_0(v_9, y_9, t);
            }
        }
        t = if_keep2_1_0(z_9, t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = k_17;
      }
  }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm o_10 = NULL;
  t = pass_verbose_0_0(t);
  o_10 = t;
  t = (ATerm) ATinsert(CheckATermList(o_10), term_n_35);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_z_39;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm p_10 = NULL;
  t = pass_verbose_0_0(t);
  p_10 = t;
  t = (ATerm) ATinsert(CheckATermList(p_10), term_n_35);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = save_as_1_0(a_10, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  o_17 = t;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_17 = ATgetArgument(t, 0);
            {
              ATerm q_11 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(o_17);
              q_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_17);
              l_5 = t;
              t = SSLsetAnnotations(l_5, q_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_17;
          }
        LocalPopChoice(e_40);
        t = xtc_transform_file_2_0(e_10, h_10, t);
      }
    else
      {
        t = d_40;
        t = xtc_transform_term_2_0(i_10, n_10, t);
      }
  }
  t = if_keep6_1_0(u_10, t);
  n_17 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_18 = ATgetArgument(t, 0);
            {
              ATerm x_11 = NULL,m_5 = NULL;
              t = SSLgetAnnotations(n_17);
              x_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_18);
              m_5 = t;
              t = SSLsetAnnotations(m_5, x_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_17;
          }
        LocalPopChoice(i_40);
        t = xtc_transform_file_2_0(a_11, b_11, t);
      }
    else
      {
        t = h_40;
        t = xtc_transform_term_2_0(c_11, e_11, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_11, t);
  m_17 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_18 = ATgetArgument(t, 0);
            {
              ATerm j_12 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(m_17);
              j_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_18);
              n_5 = t;
              t = SSLsetAnnotations(n_5, j_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_17;
          }
        LocalPopChoice(k_40);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = j_40;
        t = xtc_transform_term_2_0(j_11, k_11, t);
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_l_40;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm w_17 = NULL;
  t = pass_verbose_0_0(t);
  w_17 = t;
  t = (ATerm) ATinsert(CheckATermList(w_17), term_n_35);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_l_40;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm x_17 = NULL;
  t = pass_verbose_0_0(t);
  x_17 = t;
  t = (ATerm) ATinsert(CheckATermList(x_17), term_n_35);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = save_as_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm g_18 = NULL;
  t = pass_verbose_0_0(t);
  g_18 = t;
  t = (ATerm) ATinsert(CheckATermList(g_18), term_n_35);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_18 = NULL;
  t = pass_verbose_0_0(t);
  h_18 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), term_n_35);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = save_as_1_0(g_11, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_o_40;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm p_18 = NULL;
  t = pass_verbose_0_0(t);
  p_18 = t;
  t = (ATerm) ATinsert(CheckATermList(p_18), term_n_35);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm q_18 = NULL;
  t = pass_verbose_0_0(t);
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(q_18), term_n_35);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm y_18 = NULL;
  t = pass_verbose_0_0(t);
  y_18 = t;
  t = (ATerm) ATinsert(CheckATermList(y_18), term_n_35);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_n_35);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,e_19 = NULL;
  e_19 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_19 = ATgetArgument(t, 0);
            {
              ATerm j_13 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(e_19);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_19);
              q_5 = t;
              t = SSLsetAnnotations(q_5, j_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_19;
          }
        LocalPopChoice(r_40);
        t = xtc_transform_file_2_0(u_11, v_11, t);
      }
    else
      {
        t = q_40;
        t = xtc_transform_term_2_0(b_12, d_12, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  b_19 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_19 = ATgetArgument(t, 0);
            {
              ATerm c_14 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(b_19);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_19);
              r_5 = t;
              t = SSLsetAnnotations(r_5, c_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_19;
          }
        LocalPopChoice(u_40);
        t = xtc_transform_file_2_0(f_12, h_12, t);
      }
    else
      {
        t = t_40;
        t = xtc_transform_term_2_0(i_12, k_12, t);
      }
  }
  a_19 = t;
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_20 = ATgetArgument(t, 0);
            {
              ATerm g_14 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(a_19);
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_20);
              x_5 = t;
              t = SSLsetAnnotations(x_5, g_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_19;
          }
        LocalPopChoice(w_40);
        t = xtc_transform_file_2_0(m_12, n_12, t);
      }
    else
      {
        t = v_40;
        t = xtc_transform_term_2_0(p_12, r_12, t);
      }
  }
  t = if_keep4_1_0(z_12, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm m_19 = NULL;
  t = pass_verbose_0_0(t);
  m_19 = t;
  t = (ATerm) ATinsert(CheckATermList(m_19), term_n_35);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm n_19 = NULL;
  t = pass_verbose_0_0(t);
  n_19 = t;
  t = (ATerm) ATinsert(CheckATermList(n_19), term_n_35);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm u_19 = NULL;
  t = pass_verbose_0_0(t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), term_n_35);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm v_19 = NULL;
  t = pass_verbose_0_0(t);
  v_19 = t;
  t = (ATerm) ATinsert(CheckATermList(v_19), term_n_35);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm e_20 = NULL;
  t = pass_verbose_0_0(t);
  e_20 = t;
  t = (ATerm) ATinsert(CheckATermList(e_20), term_n_35);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm f_20 = NULL;
  t = pass_verbose_0_0(t);
  f_20 = t;
  t = (ATerm) ATinsert(CheckATermList(f_20), term_n_35);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = save_as_1_0(d_13, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  j_20 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_20 = ATgetArgument(t, 0);
            {
              ATerm k_14 = NULL,z_5 = NULL;
              t = SSLgetAnnotations(j_20);
              k_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_20);
              z_5 = t;
              t = SSLsetAnnotations(z_5, k_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_20;
          }
        LocalPopChoice(i_41);
        t = xtc_transform_file_2_0(y_13, b_14, t);
      }
    else
      {
        t = h_41;
        t = xtc_transform_term_2_0(d_14, e_14, t);
      }
  }
  i_20 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_21 = ATgetArgument(t, 0);
            {
              ATerm o_14 = NULL,a_6 = NULL;
              t = SSLgetAnnotations(i_20);
              o_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_21);
              a_6 = t;
              t = SSLsetAnnotations(a_6, o_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_20;
          }
        LocalPopChoice(k_41);
        t = xtc_transform_file_2_0(f_14, h_14, t);
      }
    else
      {
        t = j_41;
        t = xtc_transform_term_2_0(i_14, j_14, t);
      }
  }
  t = if_keep2_1_0(l_14, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_n_35);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_n_41;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_n_35);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm s_21 = NULL;
  t = pass_verbose_0_0(t);
  s_21 = t;
  t = (ATerm) ATinsert(CheckATermList(s_21), term_n_35);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm u_21 = NULL;
  t = pass_verbose_0_0(t);
  u_21 = t;
  t = (ATerm) ATinsert(CheckATermList(u_21), term_n_35);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = save_as_1_0(m_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_s_41;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_22 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,b_6 = NULL;
              t = SSLgetAnnotations(v_21);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
              b_6 = t;
              t = SSLsetAnnotations(b_6, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
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
  t = term_n_40;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm e_22 = NULL;
  t = pass_verbose_0_0(t);
  e_22 = t;
  t = (ATerm) ATinsert(CheckATermList(e_22), term_n_35);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm f_22 = NULL;
  t = pass_verbose_0_0(t);
  f_22 = t;
  t = (ATerm) ATinsert(CheckATermList(f_22), term_n_35);
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
  t = term_z_35;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm h_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm w_14 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(k_22);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, w_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_22;
          }
        LocalPopChoice(y_41);
        t = xtc_transform_file_2_0(d_15, f_15, t);
      }
    else
      {
        t = x_41;
        t = xtc_transform_term_2_0(g_15, h_15, t);
      }
  }
  t = if_keep3_1_0(j_15, t);
  j_22 = t;
  {
    ATerm z_41 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_23 = ATgetArgument(t, 0);
            {
              ATerm a_15 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(j_22);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_23);
              h_6 = t;
              t = SSLsetAnnotations(h_6, a_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_22;
          }
        LocalPopChoice(b_42);
        t = xtc_transform_file_2_0(l_15, n_15, t);
      }
    else
      {
        t = z_41;
        t = xtc_transform_term_2_0(o_15, p_15, t);
      }
  }
  t = if_keep3_1_0(q_15, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(t_15, t);
  h_22 = t;
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_23 = ATgetArgument(t, 0);
            {
              ATerm e_15 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(h_22);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              i_6 = t;
              t = SSLsetAnnotations(i_6, e_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_22;
          }
        LocalPopChoice(e_42);
        t = xtc_transform_file_2_0(v_15, w_15, t);
      }
    else
      {
        t = d_42;
        t = xtc_transform_term_2_0(x_15, b_16, t);
      }
  }
  t = if_keep3_1_0(k_16, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm t_22 = NULL;
  t = pass_verbose_0_0(t);
  t_22 = t;
  t = (ATerm) ATinsert(CheckATermList(t_22), term_n_35);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_f_42;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm v_22 = NULL;
  t = pass_verbose_0_0(t);
  v_22 = t;
  t = (ATerm) ATinsert(CheckATermList(v_22), term_n_35);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = save_as_1_0(k_15, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm e_23 = NULL;
  t = pass_verbose_0_0(t);
  e_23 = t;
  t = (ATerm) ATinsert(CheckATermList(e_23), term_n_35);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_z_40;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm h_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), term_n_35);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  t = save_as_1_0(s_15, t);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = save_as_1_0(u_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm x_23 = NULL;
  t = pass_verbose_0_0(t);
  x_23 = t;
  t = (ATerm) ATinsert(CheckATermList(x_23), term_n_35);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm z_23 = NULL;
  t = pass_verbose_0_0(t);
  z_23 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), term_n_35);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_k_42;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  b_24 = t;
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_24 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(b_24);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_24);
              j_6 = t;
              t = SSLsetAnnotations(j_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_24;
          }
        LocalPopChoice(m_42);
        t = xtc_transform_file_2_0(q_16, r_16, t);
      }
    else
      {
        t = l_42;
        t = xtc_transform_term_2_0(s_16, v_16, t);
      }
  }
  t = if_keep1_1_0(w_16, t);
  a_24 = t;
  {
    ATerm n_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_24 = ATgetArgument(t, 0);
            {
              ATerm m_15 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(a_24);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_24);
              k_6 = t;
              t = SSLsetAnnotations(k_6, m_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_24;
          }
        LocalPopChoice(p_42);
        t = xtc_transform_file_2_0(a_17, b_17, t);
      }
    else
      {
        t = n_42;
        t = xtc_transform_term_2_0(d_17, e_17, t);
      }
  }
  t = if_keep1_1_0(f_17, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm p_24 = NULL;
  t = pass_verbose_0_0(t);
  p_24 = t;
  t = (ATerm) ATinsert(CheckATermList(p_24), term_n_35);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm u_24 = NULL;
  t = pass_verbose_0_0(t);
  u_24 = t;
  t = (ATerm) ATinsert(CheckATermList(u_24), term_n_35);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm b_25 = NULL;
  t = pass_verbose_0_0(t);
  b_25 = t;
  t = (ATerm) ATinsert(CheckATermList(b_25), term_n_35);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm c_25 = NULL;
  t = pass_verbose_0_0(t);
  c_25 = t;
  t = (ATerm) ATinsert(CheckATermList(c_25), term_n_35);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  t = profile_p__2_0(x_7, y_7, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm z_26 = NULL;
  t = pass_verbose_0_0(t);
  z_26 = t;
  t = (ATerm) ATinsert(CheckATermList(z_26), term_m_36);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm a_27 = NULL;
  t = pass_verbose_0_0(t);
  a_27 = t;
  t = (ATerm) ATinsert(CheckATermList(a_27), term_m_36);
  return(t);
}
ATerm save_as_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  k_26 = t;
  {
    static ATerm i_17 (ATerm t)
    {
      t = get_outfile_1_0(h_81, t);
      if(((i_26 != NULL) && (i_26 != t)))
        _fail(t);
      else
        i_26 = t;
      return(t);
    }
    t = copy_to_1_0(i_17, t);
  }
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL,y_26 = NULL;
        y_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_26 = ATgetArgument(t, 0);
            {
              ATerm r_15 = NULL,s_7 = NULL;
              t = SSLgetAnnotations(y_26);
              r_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
              s_7 = t;
              t = SSLsetAnnotations(s_7, r_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_26;
          }
        LocalPopChoice(y_42);
        t = xtc_transform_file_2_0(l_17, s_17, t);
      }
    else
      {
        t = x_42;
        t = xtc_transform_term_2_0(u_17, v_17, t);
      }
  }
  {
    static ATerm y_17 (ATerm t)
    {
      ATerm b_27 = NULL;
      t = term_z_42;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), term_z_42);
      t = a_14(not_null(i_26), b_27, t);
      if(((j_26 != NULL) && (j_26 != t)))
        _fail(t);
      else
        j_26 = t;
      return(t);
    }
    t = copy_to_1_0(y_17, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_26)), term_b_43), not_null(i_26)), term_a_43);
  r_26 = t;
  t = SSL_concat_strings(r_26);
  o_26 = t;
  t = term_b_33;
  p_26 = t;
  t = (ATerm) ATinsert(ATempty, o_26);
  q_26 = t;
  t = SSL_printnl(p_26, q_26);
  t = k_26;
  return(t);
}
ATerm if_keep2_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  {
    ATerm c_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        g_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_27, term_a_33);
        t = geq_0_0(t);
        t = e_27;
        t = f_106(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = c_43;
        t = e_27;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  t = term_z_32;
  {
    ATerm g_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(j_43);
      }
    else
      {
        t = g_43;
        t = term_p_35;
      }
  }
  j_27 = t;
  t = term_p_35;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_27, term_p_35);
  t = g_13(j_27, l_27, t);
  k_27 = t;
  t = SSL_int_to_string(k_27);
  i_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_27), term_z_32);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_43 = ATgetArgument(t, 0);
      if(match_cons(k_43, sym_Stream_1))
        {
          o_27 = ATgetArgument(k_43, 0);
        }
      else
        _fail(t);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(o_27, p_27, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  n_27 = t;
  t = xtc_new_file_0_0(t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
  t = x_12(a_18, m_27, n_27, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
  t = xtc_transform_file_2_0(d_114, e_114, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_12 (ATerm e_49, ATerm f_49, ATerm t)
{
  t = SSL_execvp(e_49, f_49);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,o_28 = NULL,q_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_28 = ATgetArgument(t, 0);
      {
        ATerm c_16 = NULL,g_16 = NULL;
        t = SSL_int_to_string(k_28);
        c_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_43), c_16), term_m_43);
        g_16 = t;
        t = SSL_concat_strings(g_16);
      }
    }
  else
    {
      ATerm j_17 = NULL,q_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_28 = ATgetArgument(t, 0);
          o_28 = ATgetArgument(t, 1);
          q_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_28);
      j_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_28), term_t_43), j_17), term_r_43), k_28);
      q_17 = t;
      t = SSL_concat_strings(q_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  {
    ATerm v_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_18 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm b_44 = ATgetArgument(t, 0);
              if((u_28 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_49), term_k_49), term_g_49), term_a_49), term_x_48), term_t_48), term_p_48), term_l_48), term_w_47), term_r_47), term_m_47), term_i_47), term_b_47), term_x_46), term_t_46), term_p_46), term_k_46), term_h_46), term_d_46), term_z_45), term_u_45), term_p_45), term_l_45), term_g_45), term_z_44), term_w_44), term_s_44), term_n_44);
        t = fetch_elem_1_0(b_18, t);
        LocalPopChoice(x_43);
      }
    else
      {
        t = v_43;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_28);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_28 = NULL,t_29 = NULL;
  y_28 = t;
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_49 = ATgetArgument(t, 0);
            t_29 = ATgetArgument(t, 1);
            {
              ATerm s_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_49);
        {
          ATerm t_49 = t;
          int u_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_18 = NULL,v_18 = NULL,c_19 = NULL;
              t = t_29;
              {
                ATerm v_49 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_49;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              n_18 = t;
              t = term_b_33;
              v_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_18), term_w_49);
              c_19 = t;
              t = SSL_printnl(v_18, c_19);
              t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, n_18), term_w_49));
              LocalPopChoice(u_49);
            }
          else
            {
              t = t_49;
              t = y_28;
            }
        }
      }
    else
      {
        t = p_49;
        t = y_28;
      }
  }
  t = y_28;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  c_30 = t;
  t = fork_0_0(t);
  b_30 = t;
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_30;
        t = p_106(t);
        LocalPopChoice(y_49);
      }
    else
      {
        t = x_49;
        t = SSL_waitpid(b_30);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_49 = ATgetArgument(t, 0);
            if(((ATgetType(z_49) != AT_INT) || (ATgetInt((ATermInt) z_49) != 0)))
              _fail(t);
            {
              ATerm a_50 = ATgetArgument(t, 1);
            }
            {
              ATerm b_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_30;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,m_30 = NULL;
  m_30 = t;
  t = e_115(t);
  t = xtc_find_0_0(t);
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_30, m_30);
  {
    static ATerm d_18 (ATerm t)
    {
      ATerm n_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_30, m_30);
      t = y_12(h_30, m_30, t);
      t = term_q_33;
      n_30 = t;
      t = SSL_exit(n_30);
      return(t);
    }
    t = fork_and_wait_1_0(d_18, t);
  }
  t = m_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  u_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_30 = NULL,x_30 = NULL;
      t = u_30;
      t = xtc_new_file_0_0(t);
      w_30 = t;
      t = t_0(t);
      x_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_30, (ATerm) ATinsert(ATinsert(ATempty, w_30), term_i_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_30);
    }
  else
    {
      ATerm c_31 = NULL,e_31 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_30;
      t = xtc_new_file_0_0(t);
      c_31 = t;
      t = t_0(t);
      e_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_31), term_i_33), v_30), term_c_50));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_31);
    }
  return(t);
}
ATerm comp_0_2 (ATerm z_20 (ATerm), ATerm a_21 (ATerm), ATerm t)
{
  ATerm d_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_43 = NULL,f_43 = NULL;
      f_43 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_43 = ATgetArgument(t, 0);
          {
            ATerm o_29 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(f_43);
            o_29 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_43);
            k_8 = t;
            t = SSLsetAnnotations(k_8, o_29);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_43;
        }
      LocalPopChoice(m_50);
      {
        static ATerm e_18 (ATerm t)
        {
          t = z_20;
          return(t);
        }
        static ATerm f_18 (ATerm t)
        {
          ATerm h_43 = NULL;
          t = pass_verbose_0_0(t);
          h_43 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_21), h_43), (ATerm) ATinsert(ATempty, term_n_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(e_18, f_18, t);
      }
    }
  else
    {
      t = d_50;
      {
        static ATerm j_18 (ATerm t)
        {
          t = z_20;
          return(t);
        }
        static ATerm m_18 (ATerm t)
        {
          ATerm i_43 = NULL;
          t = pass_verbose_0_0(t);
          i_43 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_21), i_43), (ATerm) ATinsert(ATempty, term_n_35));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(j_18, m_18, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,p_31 = NULL,q_31 = NULL;
  l_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_31;
      t = n_96(t);
    }
  else
    {
      ATerm v_31 = NULL,w_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      t = p_96(t);
      v_31 = t;
      t = q_31;
      t = foldr_3_0(n_96, o_96, p_96, t);
      w_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_31, w_31);
      t = o_96(t);
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_31), term_n_50);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_n_50;
  t = get_config_0_0(t);
  t = foldr_3_0(o_18, conc_0_0, r_18, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_o_50;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_n_35);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_o_50;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm d_21 = NULL;
  t = pass_verbose_0_0(t);
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_n_35);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = get_outfile_1_0(h_19, t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL,h_20 = NULL,l_20 = NULL;
        t = term_v_50;
        t = get_config_0_0(t);
        t = c_33;
        {
          ATerm w_50 = t;
          int y_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_33;
              {
                ATerm a_51 = t;
                int c_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        u_20 = ATgetArgument(t, 0);
                        {
                          ATerm q_21 = NULL,m_8 = NULL;
                          t = SSLgetAnnotations(c_33);
                          q_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, u_20);
                          m_8 = t;
                          t = SSLsetAnnotations(m_8, q_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = c_33;
                      }
                    LocalPopChoice(c_51);
                    t = xtc_transform_file_2_0(u_18, x_18, t);
                  }
                else
                  {
                    t = a_51;
                    t = xtc_transform_term_2_0(d_19, f_19, t);
                  }
              }
              LocalPopChoice(y_50);
            }
          else
            {
              t = w_50;
              {
                ATerm e_21 = NULL,h_21 = NULL,i_21 = NULL;
                t = term_b_33;
                h_21 = t;
                t = (ATerm) ATinsert(ATempty, term_d_51);
                i_21 = t;
                t = SSL_printnl(h_21, i_21);
                t = term_p_35;
                e_21 = t;
                t = SSL_exit(e_21);
                t = (ATerm) ATinsert(ATempty, term_d_51);
              }
            }
        }
        t = copy_to_1_0(g_19, t);
        g_20 = t;
        t = term_b_33;
        h_20 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_51));
        l_20 = t;
        t = SSL_printnl(h_20, l_20);
        t = g_20;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
        t = c_33;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  {
    ATerm f_51 = t;
    int o_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        l_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_33, term_s_41);
        t = geq_0_0(t);
        t = j_33;
        t = i_106(t);
        LocalPopChoice(o_51);
      }
    else
      {
        t = f_51;
        t = j_33;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_51;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_51);
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      t = (ATerm) ATinsert(ATempty, term_t_51);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL;
        t = term_v_37;
        t = get_config_0_0(t);
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_33, term_z_35);
        t = geq_0_0(t);
        t = u_33;
        t = g_106(t);
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        t = u_33;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm a_34 = NULL;
  static ATerm j_19 (ATerm t)
  {
    t = l_90(t);
    if(((a_34 != NULL) && (a_34 != t)))
      _fail(t);
    else
      a_34 = t;
    return(t);
  }
  t = fetch_1_0(j_19, t);
  t = not_null(a_34);
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm b_36 = NULL,d_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_36 = ATgetArgument(t, 0);
      {
        ATerm g_22 = NULL,n_22 = NULL,f_9 = NULL;
        t = SSLgetAnnotations(b_36);
        g_22 = t;
        t = d_36;
        t = fetch_elem_1_0(l_19, t);
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, n_22);
        f_9 = t;
        t = SSLsetAnnotations(f_9, g_22);
      }
    }
  else
    {
      ATerm s_23 = NULL,u_23 = NULL,g_9 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          d_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_36);
      s_23 = t;
      t = d_36;
      t = fetch_elem_1_0(o_19, t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, u_23);
      g_9 = t;
      t = SSLsetAnnotations(g_9, s_23);
    }
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm s_22 = NULL,u_22 = NULL,w_22 = NULL;
  s_22 = t;
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            u_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
            {
              ATerm b_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_51);
        t = u_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_22;
      }
    else
      {
        t = y_51;
        if(match_cons(t, sym_RDef_3))
          {
            u_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
            {
              ATerm e_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = w_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_22;
      }
  }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm w_23 = NULL,y_23 = NULL,c_24 = NULL;
  w_23 = t;
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            y_23 = ATgetArgument(t, 0);
            c_24 = ATgetArgument(t, 1);
            {
              ATerm i_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_52);
        t = y_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = c_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_23;
      }
    else
      {
        t = f_52;
        if(match_cons(t, sym_RDef_3))
          {
            y_23 = ATgetArgument(t, 0);
            c_24 = ATgetArgument(t, 1);
            {
              ATerm k_52 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = c_24;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm u_34 = NULL,w_34 = NULL,x_34 = NULL;
  t = fetch_elem_1_0(k_19, t);
  u_34 = t;
  t = term_b_33;
  w_34 = t;
  t = (ATerm) ATinsert(ATempty, term_l_52);
  x_34 = t;
  t = SSL_printnl(w_34, x_34);
  t = u_34;
  return(t);
}
static ATerm v_12 (ATerm f_21 (ATerm), ATerm g_21, ATerm t)
{
  t = f_21;
  {
    ATerm m_52 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_52;
      }
  }
  t = g_21;
  {
    ATerm n_52 = t;
    int o_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(o_52);
      }
    else
      {
        t = n_52;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(g_21), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_q_52, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_21), (ATerm) ATempty))))));
  return(t);
}
static ATerm w_12 (ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_write_term_to_stream_baf(a_23, b_23);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
static ATerm x_12 (ATerm q_89 (ATerm), ATerm l_192, ATerm k_23, ATerm t)
{
  ATerm q_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_192, term_r_52);
  t = r_13(t);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_36, k_23);
  t = q_89(t);
  t = fclose_0_0(t);
  t = k_23;
  return(t);
}
static ATerm a_13 (ATerm v_102 (ATerm), ATerm t_42, ATerm r_42, ATerm t)
{
  ATerm s_36 = NULL,u_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  t = v_102(t);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_36, t_42, r_42);
  t = x_13(s_36, t_42, r_42, t);
  {
    ATerm s_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL;
        t = term_x_52;
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_x_52);
        t = w_13(s_36, b_37, t);
        LocalPopChoice(u_52);
      }
    else
      {
        t = s_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      w_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_52;
  y_36 = t;
  t = (ATerm) ATinsert(CheckATermList(w_36), (ATerm) ATinsert(CheckATermList(u_36), t_42));
  z_36 = t;
  t = SSL_table_put(s_36, y_36, z_36);
  t = x_36;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_37 = NULL,n_24 = NULL;
      n_37 = t;
      t = term_a_53;
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_37, term_a_53);
      t = a_14(n_37, n_24, t);
      f_37 = t;
      t = SSL_mkstemp(f_37);
      LocalPopChoice(z_52);
    }
  else
    {
      t = y_52;
      {
        ATerm o_37 = NULL;
        t = term_e_53;
        o_37 = t;
        t = SSL_perror(o_37);
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
static ATerm p_19 (ATerm t)
{
  t = term_g_53;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,u_37 = NULL,w_37 = NULL;
  t = P__tmpdir_0_0(t);
  u_37 = t;
  t = term_j_53;
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_37, term_j_53);
  t = a_14(u_37, w_37, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_34;
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, term_f_34);
  t = a_13(p_19, r_37, s_37, t);
  t = SSL_close(q_37);
  t = r_37;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_38 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_53;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_38 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_n_53);
      h_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_38, (ATerm) ATinsert(ATempty, term_n_53));
      t = s_13(b_38, h_38, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm k_38 = NULL,q_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_53 = ATgetArgument(t, 0);
      if(match_cons(o_53, sym_Stream_1))
        {
          k_38 = ATgetArgument(o_53, 0);
        }
      else
        _fail(t);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_12(k_38, q_38, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = read_from_0_0(t);
  t = f_114(t);
  j_38 = t;
  t = xtc_new_file_0_0(t);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
  t = x_12(q_19, i_38, j_38, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_38);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  t = debug_1_0(t_19, t);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  t = term_q_53;
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = save_as_1_0(y_19, t);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm x_38 = NULL,e_39 = NULL;
  e_39 = t;
  {
    ATerm u_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_53;
        t = get_config_0_0(t);
        x_38 = t;
        t = if_verbose2_1_0(r_19, t);
        t = e_39;
        {
          ATerm c_54 = t;
          int d_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_35;
              t = get_config_0_0(t);
              t = e_39;
              LocalPopChoice(d_54);
            }
          else
            {
              t = c_54;
              {
                static ATerm w_19 (ATerm t)
                {
                  ATerm h_54 = t;
                  int k_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          e_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_12(x_38, e_26, t);
                      LocalPopChoice(k_54);
                    }
                  else
                    {
                      t = h_54;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(w_19, t);
              }
            }
        }
        LocalPopChoice(v_53);
      }
    else
      {
        t = u_53;
        t = e_39;
      }
  }
  t = if_keep3_1_0(x_19, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(v_39);
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = v_39;
      }
  }
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_g_53;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  static ATerm z_19 (ATerm t)
  {
    ATerm o_39 = NULL,p_39 = NULL,r_39 = NULL;
    o_39 = t;
    t = term_g_53;
    p_39 = t;
    t = term_x_52;
    r_39 = t;
    t = term_n_54;
    t = w_13(p_39, r_39, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_39 != NULL) && (m_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_39 = ATgetFirst((ATermList) t);
        {
          ATerm p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = m_39;
    t = map_1_0(a_20, t);
    t = o_39;
    t = end_scope_1_0(b_20, t);
    return(t);
  }
  t = repeat_2_0(z_19, _id, t);
  n_39 = t;
  t = SSL_exit(n_39);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_33;
      t = get_config_0_0(t);
      LocalPopChoice(w_54);
    }
  else
    {
      t = v_54;
      t = term_j_34;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(d_20, t);
  t = term_v_32;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = g_81(t);
  a_40 = t;
  t = term_g_37;
  t = get_config_0_0(t);
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, a_40);
  t = a_14(b_40, a_40, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,d_41 = NULL;
  b_41 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        t = b_41;
        t = v_0(t);
        q_27 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = q_27;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = q_27;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_41, q_27);
        t = i_13(d_41, q_27, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_41);
        LocalPopChoice(z_54);
      }
    else
      {
        t = x_54;
        {
          ATerm c_55 = t;
          int d_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_28 = NULL;
              t = b_41;
              t = v_0(t);
              n_28 = t;
              {
                ATerm e_55 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_28 = NULL;
                    p_28 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_28;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_28;
                          }
                        else
                          {
                            t = p_28;
                            if((d_41 != t))
                              {
                                _fail(t);
                              }
                            t = p_28;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_55;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_41, n_28);
              t = i_13(d_41, n_28, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_41);
              LocalPopChoice(d_55);
            }
          else
            {
              t = c_55;
              t = b_41;
              t = v_0(t);
              if((d_41 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_41);
            }
        }
      }
  }
  return(t);
}
static ATerm k_20 (ATerm t)
{
  t = get_outfile_1_0(m_20, t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL,a_29 = NULL,g_29 = NULL;
        t = term_l_55;
        t = get_config_0_0(t);
        t = a_42;
        t = copy_to_1_0(k_20, t);
        z_28 = t;
        t = term_b_33;
        a_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_55));
        g_29 = t;
        t = SSL_printnl(a_29, g_29);
        t = z_28;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = a_42;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm l_43 = NULL,n_43 = NULL,q_43 = NULL,u_43 = NULL;
  t = term_v_37;
  {
    ATerm n_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(p_55);
      }
    else
      {
        t = n_55;
        t = term_p_35;
      }
  }
  n_43 = t;
  t = term_p_35;
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, term_p_35);
  t = g_13(n_43, u_43, t);
  q_43 = t;
  t = SSL_int_to_string(q_43);
  l_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_43), term_v_37);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm w_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL;
  d_44 = t;
  t = term_q_55;
  w_43 = t;
  t = d_44;
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = get_config_0_0(t);
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
        t = term_g_37;
        t = get_config_0_0(t);
      }
  }
  f_44 = t;
  t = d_44;
  t = pass_keep_0_0(t);
  z_43 = t;
  t = term_v_55;
  t = get_config_0_0(t);
  a_44 = t;
  t = term_w_55;
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_55);
        t = (ATerm) ATinsert(ATempty, term_w_55);
      }
    else
      {
        t = x_55;
        t = (ATerm) ATempty;
      }
  }
  c_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_44), z_43), a_44), (ATerm) ATinsert(ATinsert(ATempty, f_44), term_z_55));
  t = concat_0_0(t);
  y_43 = t;
  t = d_44;
  t = comp_0_2(w_43, y_43, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  {
    ATerm a_56 = t;
    int b_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_44 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        t_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_44, term_z_35);
        t = geq_0_0(t);
        t = p_44;
        t = e_105(t);
        LocalPopChoice(b_56);
      }
    else
      {
        t = a_56;
        t = p_44;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  c_45 = t;
  t = SSL_explode_string(c_45);
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_47 (ATerm t)
        {
          ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
          c_47 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_47 = ATgetFirst((ATermList) t);
              e_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm e_56 = t;
            int f_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_30 = NULL,k_30 = NULL,j_9 = NULL;
                t = SSLgetAnnotations(c_47);
                g_30 = t;
                t = e_47;
                t = n_47(t);
                k_30 = t;
                t = (ATerm) ATinsert(CheckATermList(k_30), d_47);
                j_9 = t;
                t = SSLsetAnnotations(j_9, g_30);
                LocalPopChoice(f_56);
              }
            else
              {
                t = e_56;
                {
                  ATerm g_56 = t;
                  int h_56 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_30 = NULL,q_9 = NULL;
                      t = SSLgetAnnotations(c_47);
                      y_30 = t;
                      t = d_47;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(e_47), d_47);
                      q_9 = t;
                      t = SSLsetAnnotations(q_9, y_30);
                      LocalPopChoice(h_56);
                    }
                  else
                    {
                      t = g_56;
                      {
                        ATerm m_31 = NULL,r_31 = NULL,x_9 = NULL;
                        t = SSLgetAnnotations(c_47);
                        m_31 = t;
                        t = d_47;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = e_47;
                        t = k_100(t);
                        r_31 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_31), d_47);
                        x_9 = t;
                        t = SSLsetAnnotations(x_9, m_31);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = n_47(t);
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
      }
  }
  b_45 = t;
  t = SSL_implode_string(b_45);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = debug_1_0(o_20, t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  t = term_i_56;
  return(t);
}
static ATerm q_20 (ATerm t)
{
  t = debug_1_0(r_20, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_j_56;
  return(t);
}
static ATerm b_13 (ATerm b_21, ATerm t)
{
  ATerm v_47 = NULL,x_47 = NULL,z_47 = NULL,a_48 = NULL;
  t = b_21;
  t = basename_1_0(_id, t);
  v_47 = t;
  t = if_verbose3_1_0(n_20, t);
  t = term_h_37;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_37, v_47);
  t = z_13(a_48, v_47, t);
  {
    ATerm k_56 = t;
    int l_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        LocalPopChoice(l_56);
      }
    else
      {
        t = k_56;
        t = v_47;
      }
  }
  x_47 = t;
  t = if_verbose3_1_0(q_20, t);
  t = term_g_37;
  z_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_37, x_47);
  t = z_13(z_47, x_47, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_47);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  t = debug_1_0(w_20, t);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = term_m_56;
  return(t);
}
static ATerm x_20 (ATerm t)
{
  t = if_verbose1_1_0(j_21, t);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm x_50 = NULL,z_50 = NULL,b_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,m_33 = NULL,n_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_13(m_51, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_51 = NULL;
        n_51 = t;
        t = term_a_35;
        t = get_config_0_0(t);
        t = n_51;
        LocalPopChoice(o_56);
      }
    else
      {
        t = n_56;
        t = add_main_0_0(t);
      }
  }
  l_51 = t;
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_51 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_51 = ATgetArgument(t, 0);
            {
              ATerm f_32 = NULL,j_10 = NULL;
              t = SSLgetAnnotations(l_51);
              f_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_51);
              j_10 = t;
              t = SSLsetAnnotations(j_10, f_32);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_51;
          }
        LocalPopChoice(q_56);
        t = xtc_transform_file_2_0(m_21, o_21, t);
      }
    else
      {
        t = p_56;
        t = xtc_transform_term_2_0(p_21, r_21, t);
      }
  }
  k_51 = t;
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_52 = ATgetArgument(t, 0);
            {
              ATerm q_32 = NULL,k_10 = NULL;
              t = SSLgetAnnotations(k_51);
              q_32 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_52);
              k_10 = t;
              t = SSLsetAnnotations(k_10, q_32);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_51;
          }
        LocalPopChoice(s_56);
        t = xtc_transform_file_2_0(t_21, w_21, t);
      }
    else
      {
        t = r_56;
        t = xtc_transform_term_2_0(x_21, y_21, t);
      }
  }
  t = if_keep5_1_0(z_21, t);
  j_51 = t;
  {
    ATerm u_56 = t;
    int v_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_52 = ATgetArgument(t, 0);
            {
              ATerm e_33 = NULL,l_10 = NULL;
              t = SSLgetAnnotations(j_51);
              e_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_52);
              l_10 = t;
              t = SSLsetAnnotations(l_10, e_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_51;
          }
        LocalPopChoice(v_56);
        t = xtc_transform_file_2_0(b_22, d_22, t);
      }
    else
      {
        t = u_56;
        t = xtc_transform_term_2_0(i_22, l_22, t);
      }
  }
  t = if_keep5_1_0(m_22, t);
  p_33 = t;
  t = term_w_56;
  m_33 = t;
  t = p_33;
  t = pass_maybe_unbound_warnings_0_0(t);
  n_33 = t;
  t = p_33;
  t = comp_0_2(m_33, n_33, t);
  i_51 = t;
  {
    ATerm x_56 = t;
    int y_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_52 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_52 = ATgetArgument(t, 0);
            {
              ATerm w_33 = NULL,q_10 = NULL;
              t = SSLgetAnnotations(i_51);
              w_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_52);
              q_10 = t;
              t = SSLsetAnnotations(q_10, w_33);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_51;
          }
        LocalPopChoice(y_56);
        t = xtc_transform_file_2_0(q_22, r_22, t);
      }
    else
      {
        t = x_56;
        t = xtc_transform_term_2_0(x_22, y_22, t);
      }
  }
  h_51 = t;
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_53 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_53 = ATgetArgument(t, 0);
            {
              ATerm d_34 = NULL,r_10 = NULL;
              t = SSLgetAnnotations(h_51);
              d_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_53);
              r_10 = t;
              t = SSLsetAnnotations(r_10, d_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_51;
          }
        LocalPopChoice(a_57);
        t = xtc_transform_file_2_0(z_22, d_23, t);
      }
    else
      {
        t = z_56;
        t = xtc_transform_term_2_0(f_23, i_23, t);
      }
  }
  t = if_keep5_1_0(j_23, t);
  g_51 = t;
  {
    ATerm c_57 = t;
    int d_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_53 = ATgetArgument(t, 0);
            {
              ATerm h_34 = NULL,s_10 = NULL;
              t = SSLgetAnnotations(g_51);
              h_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_53);
              s_10 = t;
              t = SSLsetAnnotations(s_10, h_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_51;
          }
        LocalPopChoice(d_57);
        t = xtc_transform_file_2_0(m_23, n_23, t);
      }
    else
      {
        t = c_57;
        t = xtc_transform_term_2_0(o_23, q_23, t);
      }
  }
  b_51 = t;
  {
    ATerm f_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_53 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_53 = ATgetArgument(t, 0);
            {
              ATerm l_34 = NULL,t_10 = NULL;
              t = SSLgetAnnotations(b_51);
              l_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_53);
              t_10 = t;
              t = SSLsetAnnotations(t_10, l_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_51;
          }
        LocalPopChoice(h_57);
        t = xtc_transform_file_2_0(r_23, t_23, t);
      }
    else
      {
        t = f_57;
        t = xtc_transform_term_2_0(v_23, d_24, t);
      }
  }
  t = output_frontend_0_0(t);
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_54 = NULL;
        f_54 = t;
        t = term_a_35;
        t = get_config_0_0(t);
        t = f_54;
        LocalPopChoice(j_57);
        {
          ATerm g_54 = NULL;
          g_54 = t;
          {
            ATerm l_57 = t;
            int m_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_54 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    o_54 = ATgetArgument(t, 0);
                    {
                      ATerm p_34 = NULL,w_10 = NULL;
                      t = SSLgetAnnotations(g_54);
                      p_34 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, o_54);
                      w_10 = t;
                      t = SSLsetAnnotations(w_10, p_34);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = g_54;
                  }
                LocalPopChoice(m_57);
                t = xtc_transform_file_2_0(e_24, f_24, t);
              }
            else
              {
                t = l_57;
                t = xtc_transform_term_2_0(g_24, i_24, t);
              }
          }
        }
      }
    else
      {
        t = i_57;
        {
          ATerm s_54 = NULL;
          s_54 = t;
          {
            ATerm o_57 = t;
            int p_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_54 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_54 = ATgetArgument(t, 0);
                    {
                      ATerm t_34 = NULL,x_10 = NULL;
                      t = SSLgetAnnotations(s_54);
                      t_34 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_54);
                      x_10 = t;
                      t = SSLsetAnnotations(x_10, t_34);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = s_54;
                  }
                LocalPopChoice(p_57);
                t = xtc_transform_file_2_0(j_24, k_24, t);
              }
            else
              {
                t = o_57;
                t = xtc_transform_term_2_0(l_24, m_24, t);
              }
          }
          t = if_keep2_1_0(o_24, t);
        }
      }
  }
  j_35 = t;
  t = term_q_57;
  h_35 = t;
  t = j_35;
  t = pass_warnings_0_0(t);
  i_35 = t;
  t = j_35;
  t = comp_0_2(h_35, i_35, t);
  z_50 = t;
  {
    ATerm s_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_55 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_55 = ATgetArgument(t, 0);
            {
              ATerm r_35 = NULL,y_10 = NULL;
              t = SSLgetAnnotations(z_50);
              r_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_55);
              y_10 = t;
              t = SSLsetAnnotations(y_10, r_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_50;
          }
        LocalPopChoice(t_57);
        t = xtc_transform_file_2_0(r_24, s_24, t);
      }
    else
      {
        t = s_57;
        t = xtc_transform_term_2_0(t_24, v_24, t);
      }
  }
  x_50 = t;
  {
    ATerm u_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            o_55 = ATgetArgument(t, 0);
            {
              ATerm c_36 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(x_50);
              c_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_55);
              z_10 = t;
              t = SSLsetAnnotations(z_10, c_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_50;
          }
        LocalPopChoice(w_57);
        t = xtc_transform_file_2_0(w_24, x_24, t);
      }
    else
      {
        t = u_57;
        t = xtc_transform_term_2_0(y_24, a_25, t);
      }
  }
  t = if_keep2_1_0(d_25, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,u_50 = NULL;
  p_50 = t;
  t = term_b_33;
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(p_50), term_x_57);
  u_50 = t;
  t = SSL_printnl(q_50, u_50);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(p_50), term_x_57));
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = term_a_58;
  return(t);
}
static ATerm o_21 (ATerm t)
{
  ATerm u_51 = NULL;
  t = pass_verbose_0_0(t);
  u_51 = t;
  t = (ATerm) ATinsert(CheckATermList(u_51), term_n_35);
  return(t);
}
static ATerm p_21 (ATerm t)
{
  t = term_a_58;
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm v_51 = NULL;
  t = pass_verbose_0_0(t);
  v_51 = t;
  t = (ATerm) ATinsert(CheckATermList(v_51), term_n_35);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm w_21 (ATerm t)
{
  ATerm c_52 = NULL;
  t = pass_verbose_0_0(t);
  c_52 = t;
  t = (ATerm) ATinsert(CheckATermList(c_52), term_n_35);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  ATerm d_52 = NULL;
  t = pass_verbose_0_0(t);
  d_52 = t;
  t = (ATerm) ATinsert(CheckATermList(d_52), term_n_35);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = save_as_1_0(a_22, t);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_f_58;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = term_g_58;
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm j_52 = NULL;
  t = pass_verbose_0_0(t);
  j_52 = t;
  t = (ATerm) ATinsert(CheckATermList(j_52), term_n_35);
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_g_58;
  return(t);
}
static ATerm l_22 (ATerm t)
{
  ATerm p_52 = NULL;
  t = pass_verbose_0_0(t);
  p_52 = t;
  t = (ATerm) ATinsert(CheckATermList(p_52), term_n_35);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  t = save_as_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_n_58;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_o_58;
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm v_52 = NULL;
  t = pass_verbose_0_0(t);
  v_52 = t;
  t = (ATerm) ATinsert(CheckATermList(v_52), term_n_35);
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = term_o_58;
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm w_52 = NULL;
  t = pass_verbose_0_0(t);
  w_52 = t;
  t = (ATerm) ATinsert(CheckATermList(w_52), term_n_35);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm k_53 = NULL;
  t = pass_verbose_0_0(t);
  k_53 = t;
  t = (ATerm) ATinsert(CheckATermList(k_53), term_n_35);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_p_58;
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm l_53 = NULL;
  t = pass_verbose_0_0(t);
  l_53 = t;
  t = (ATerm) ATinsert(CheckATermList(l_53), term_n_35);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = save_as_1_0(l_23, t);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_q_58;
  return(t);
}
static ATerm m_23 (ATerm t)
{
  t = term_u_58;
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm r_53 = NULL;
  t = pass_verbose_0_0(t);
  r_53 = t;
  t = (ATerm) ATinsert(CheckATermList(r_53), term_n_35);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  t = term_u_58;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm s_53 = NULL;
  t = pass_verbose_0_0(t);
  s_53 = t;
  t = (ATerm) ATinsert(CheckATermList(s_53), term_n_35);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_v_58;
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm y_53 = NULL;
  t = pass_verbose_0_0(t);
  y_53 = t;
  t = (ATerm) ATinsert(CheckATermList(y_53), term_n_35);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  t = term_v_58;
  return(t);
}
static ATerm d_24 (ATerm t)
{
  ATerm e_54 = NULL;
  t = pass_verbose_0_0(t);
  e_54 = t;
  t = (ATerm) ATinsert(CheckATermList(e_54), term_n_35);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = term_o_50;
  return(t);
}
static ATerm f_24 (ATerm t)
{
  ATerm q_54 = NULL;
  t = pass_verbose_0_0(t);
  q_54 = t;
  t = (ATerm) ATinsert(CheckATermList(q_54), term_n_35);
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = term_o_50;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm r_54 = NULL;
  t = pass_verbose_0_0(t);
  r_54 = t;
  t = (ATerm) ATinsert(CheckATermList(r_54), term_n_35);
  return(t);
}
static ATerm j_24 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm a_55 = NULL;
  t = pass_verbose_0_0(t);
  a_55 = t;
  t = (ATerm) ATinsert(CheckATermList(a_55), term_n_35);
  return(t);
}
static ATerm l_24 (ATerm t)
{
  t = term_x_58;
  return(t);
}
static ATerm m_24 (ATerm t)
{
  ATerm b_55 = NULL;
  t = pass_verbose_0_0(t);
  b_55 = t;
  t = (ATerm) ATinsert(CheckATermList(b_55), term_n_35);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  t = save_as_1_0(q_24, t);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = term_y_58;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_z_58;
  return(t);
}
static ATerm s_24 (ATerm t)
{
  ATerm h_55 = NULL;
  t = pass_verbose_0_0(t);
  h_55 = t;
  t = (ATerm) ATinsert(CheckATermList(h_55), term_n_35);
  return(t);
}
static ATerm t_24 (ATerm t)
{
  t = term_z_58;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm i_55 = NULL;
  t = pass_verbose_0_0(t);
  i_55 = t;
  t = (ATerm) ATinsert(CheckATermList(i_55), term_n_35);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = term_b_59;
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm r_55 = NULL;
  t = pass_verbose_0_0(t);
  r_55 = t;
  t = (ATerm) ATinsert(CheckATermList(r_55), term_n_35);
  return(t);
}
static ATerm y_24 (ATerm t)
{
  t = term_b_59;
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm u_55 = NULL;
  t = pass_verbose_0_0(t);
  u_55 = t;
  t = (ATerm) ATinsert(CheckATermList(u_55), term_n_35);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  t = save_as_1_0(e_25, t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_c_59;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(t_20, t);
  t = profile_p__2_0(x_20, y_20, t);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  ATerm d_59 = t;
  int e_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_59);
    }
  else
    {
      t = d_59;
    }
  return(t);
}
static ATerm g_25 (ATerm t)
{
  t = term_f_59;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_56 = NULL;
      t_56 = t;
      t = SSL_is_string(t_56);
      LocalPopChoice(h_59);
    }
  else
    {
      t = g_59;
      {
        ATerm i_59 = t;
        int j_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_25, t);
            LocalPopChoice(j_59);
          }
        else
          {
            t = i_59;
            {
              ATerm b_57 = NULL,e_57 = NULL,g_57 = NULL;
              b_57 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_57 = ATgetArgument(t, 0);
                  t = e_57;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_57 = ATgetArgument(t, 0);
                      t = e_57;
                      {
                        ATerm k_59 = t;
                        int l_59 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(l_59);
                          }
                        else
                          {
                            t = k_59;
                            t = debug_1_0(g_25, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_57 = NULL,n_57 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_57 = ATgetArgument(t, 0);
                          g_57 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_57;
                      t = eval_config_0_0(t);
                      k_57 = t;
                      t = g_57;
                      t = eval_config_0_0(t);
                      n_57 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_57, n_57);
                      t = a_14(k_57, n_57, t);
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
  ATerm r_57 = NULL,v_57 = NULL;
  r_57 = t;
  t = term_m_59;
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_59, r_57);
  t = w_13(v_57, r_57, t);
  {
    ATerm n_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_57 = NULL,z_57 = NULL;
        t = eval_config_0_0(t);
        y_57 = t;
        t = term_m_59;
        z_57 = t;
        t = SSL_table_put(z_57, r_57, y_57);
        t = y_57;
        LocalPopChoice(p_59);
      }
    else
      {
        t = n_59;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm h_53, ATerm i_53, ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL;
  d_58 = t;
  {
    ATerm q_59 = t;
    int r_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
        t = w_13(h_53, i_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_59 = ATgetFirst((ATermList) t);
            c_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_59);
        t = SSL_table_put(h_53, i_53, c_58);
        t = (ATerm) ATmakeAppl(sym__3, h_53, i_53, c_58);
      }
    else
      {
        t = q_59;
        t = SSL_table_remove(h_53, i_53);
        t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
      }
  }
  t = d_58;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm e_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  j_58 = t;
  t = s_102(t);
  i_58 = t;
  {
    ATerm u_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_58 = NULL;
        t = term_x_52;
        l_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_58, term_x_52);
        t = w_13(i_58, l_58, t);
        LocalPopChoice(x_59);
      }
    else
      {
        t = u_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_58 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_52;
  k_58 = t;
  t = SSL_table_put(i_58, k_58, e_58);
  t = h_58;
  {
    static ATerm h_25 (ATerm t)
    {
      ATerm m_58 = NULL;
      m_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_58, m_58);
      t = c_13(i_58, m_58, t);
      return(t);
    }
    t = map_1_0(h_25, t);
  }
  t = j_58;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm z_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(a_60);
    }
  else
    {
      t = z_59;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,w_58 = NULL,a_59 = NULL;
  s_58 = t;
  t = r_102(t);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_58, term_x_52);
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_59 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_60 = ATgetArgument(t, 0);
            ATerm f_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_52;
        o_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_58, term_x_52);
        t = w_13(r_58, o_59, t);
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
        t = (ATerm) ATempty;
      }
  }
  t_58 = t;
  t = term_x_52;
  w_58 = t;
  t = (ATerm) ATinsert(CheckATermList(t_58), (ATerm) ATempty);
  a_59 = t;
  t = SSL_table_put(r_58, w_58, a_59);
  t = s_58;
  return(t);
}
static ATerm i_25 (ATerm t)
{
  t = term_g_53;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  ATerm d_60 = NULL;
  d_60 = t;
  {
    ATerm g_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_60);
        LocalPopChoice(i_60);
      }
    else
      {
        t = g_60;
        t = d_60;
      }
  }
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_g_53;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm s_59 = NULL;
  static ATerm j_25 (ATerm t)
  {
    ATerm v_59 = NULL;
    v_59 = t;
    {
      ATerm k_60 = t;
      int r_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_59 = NULL,y_59 = NULL;
          t = term_g_53;
          w_59 = t;
          t = term_x_52;
          y_59 = t;
          t = term_n_54;
          t = w_13(w_59, y_59, t);
          LocalPopChoice(r_60);
        }
      else
        {
          t = k_60;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_59 != NULL) && (s_59 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_59 = ATgetFirst((ATermList) t);
        {
          ATerm s_60 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = s_59;
    t = map_1_0(k_25, t);
    t = v_59;
    t = end_scope_1_0(l_25, t);
    return(t);
  }
  t = begin_scope_1_0(i_25, t);
  t = restore_always_2_0(q_114, j_25, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  {
    ATerm t_60 = t;
    int x_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        j_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_60, term_p_35);
        t = geq_0_0(t);
        t = h_60;
        t = c_105(t);
        LocalPopChoice(x_60);
      }
    else
      {
        t = t_60;
        t = h_60;
      }
  }
  return(t);
}
static ATerm e_13 (ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm y_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_41, g_41);
      LocalPopChoice(a_61);
    }
  else
    {
      t = y_60;
      t = SSL_addr(f_41, g_41);
    }
  return(t);
}
static ATerm g_13 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm c_61 = t;
  int f_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_41, m_41);
      LocalPopChoice(f_61);
    }
  else
    {
      t = c_61;
      t = SSL_subtr(l_41, m_41);
    }
  return(t);
}
static ATerm h_13 (ATerm e_50, ATerm g_50, ATerm i_50, ATerm k_50, ATerm f_50, ATerm h_50, ATerm j_50, ATerm l_50, ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,p_60 = NULL,q_60 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
  t = g_13(e_50, f_50, t);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_50, h_50);
  t = g_13(g_50, h_50, t);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
  t = g_13(i_50, j_50, t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_50, l_50);
  t = g_13(k_50, l_50, t);
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym__4, l_60, m_60, p_60, q_60);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL,z_60 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_61 = ATgetArgument(t, 0);
      if(match_cons(g_61, sym__4))
        {
          u_60 = ATgetArgument(g_61, 0);
          v_60 = ATgetArgument(g_61, 1);
          w_60 = ATgetArgument(g_61, 2);
          z_60 = ATgetArgument(g_61, 3);
        }
      else
        _fail(t);
      {
        ATerm j_61 = ATgetArgument(t, 1);
        if(match_cons(j_61, sym__4))
          {
            b_61 = ATgetArgument(j_61, 0);
            d_61 = ATgetArgument(j_61, 1);
            e_61 = ATgetArgument(j_61, 2);
            h_61 = ATgetArgument(j_61, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_13(u_60, v_60, w_60, z_60, b_61, d_61, e_61, h_61, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,u_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,a_62 = NULL,c_62 = NULL;
  s_61 = t;
  t = times_0_0(t);
  i_61 = t;
  t = s_61;
  t = q_108(t);
  l_61 = t;
  t = times_0_0(t);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_61, i_61);
  t = diff_times_0_0(t);
  q_61 = t;
  if(match_cons(t, sym__4))
    {
      y_61 = ATgetArgument(t, 0);
      {
        ATerm k_61 = ATgetArgument(t, 1);
      }
      a_62 = ATgetArgument(t, 2);
      {
        ATerm o_61 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_61, a_62);
  t = e_13(y_61, a_62, t);
  c_62 = t;
  t = SSL_TicksToSeconds(c_62);
  m_61 = t;
  t = q_61;
  if(match_cons(t, sym__4))
    {
      ATerm p_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
      {
        ATerm t_61 = ATgetArgument(t, 2);
      }
      w_61 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_61, w_61);
  t = e_13(u_61, w_61, t);
  x_61 = t;
  t = SSL_TicksToSeconds(x_61);
  n_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_61), term_z_61), m_61), term_v_61);
  t = p_108(t);
  t = l_61;
  return(t);
}
ATerm debug_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  d_62 = t;
  t = o_89(t);
  e_62 = t;
  t = term_b_33;
  f_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_62), e_62);
  g_62 = t;
  t = SSL_printnl(f_62, g_62);
  t = d_62;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL;
  h_62 = t;
  t = term_b_62;
  t = get_config_0_0(t);
  i_62 = t;
  t = term_j_34;
  j_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_62), term_y_62), term_x_62), term_v_62), term_t_62), term_s_62), term_q_62), i_62), term_o_62);
  k_62 = t;
  t = SSL_printnl(j_62, k_62);
  t = h_62;
  return(t);
}
static ATerm i_13 (ATerm j_44, ATerm k_44, ATerm t)
{
  t = SSL_copy(j_44, k_44);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_62 = NULL;
  static ATerm m_25 (ATerm t)
  {
    ATerm m_62 = NULL,n_62 = NULL;
    m_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), m_62);
    t = w_13(not_null(l_62), m_62, t);
    n_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_62, n_62);
    return(t);
  }
  if(((l_62 != NULL) && (l_62 != t)))
    _fail(t);
  else
    l_62 = t;
  t = SSL_table_keys(l_62);
  t = map_1_0(m_25, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm p_62 = NULL;
  p_62 = t;
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_62 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        r_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_62, term_s_41);
        t = geq_0_0(t);
        t = p_62;
        t = g_105(t);
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
        t = p_62;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  ATerm u_62 = NULL;
  u_62 = t;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_62 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        w_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_62, term_a_39);
        t = geq_0_0(t);
        t = u_62;
        t = f_105(t);
        LocalPopChoice(d_63);
      }
    else
      {
        t = c_63;
        t = u_62;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_63 = NULL,n_63 = NULL,o_63 = NULL;
  k_63 = t;
  if(match_cons(t, sym__2))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_63;
        if((n_63 != t))
          {
            _fail(t);
          }
        t = k_63;
        LocalPopChoice(f_63);
      }
    else
      {
        t = e_63;
        t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
        {
          ATerm g_63 = t;
          int h_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_63, o_63);
              LocalPopChoice(h_63);
            }
          else
            {
              t = g_63;
              t = SSL_gtr(n_63, o_63);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  {
    ATerm i_63 = t;
    int j_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_63 = NULL;
        t = term_z_32;
        t = get_config_0_0(t);
        x_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_63, term_d_39);
        t = geq_0_0(t);
        t = v_63;
        t = h_105(t);
        LocalPopChoice(j_63);
      }
    else
      {
        t = i_63;
        t = v_63;
      }
  }
  return(t);
}
static ATerm l_13 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm m_29, ATerm l_29, ATerm t)
{
  t = n_94(t);
  {
    static ATerm n_25 (ATerm t)
    {
      ATerm z_63 = NULL;
      z_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_29, z_63);
      t = m_94(t);
      return(t);
    }
    t = fetch_1_0(n_25, t);
  }
  t = l_29;
  return(t);
}
static ATerm m_13 (ATerm j_94 (ATerm), ATerm i_29, ATerm h_29, ATerm t)
{
  static ATerm b_65 (ATerm t)
  {
    ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
    t_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_64 = ATgetFirst((ATermList) t);
            v_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_63 = t;
          int m_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_64;
              {
                static ATerm o_25 (ATerm t)
                {
                  t = h_29;
                  return(t);
                }
                t = l_13(j_94, o_25, u_64, v_64, t);
              }
              t = b_65(t);
              LocalPopChoice(m_63);
            }
          else
            {
              t = l_63;
              {
                ATerm s_38 = NULL,v_38 = NULL,t_11 = NULL;
                t = SSLgetAnnotations(t_64);
                s_38 = t;
                t = v_64;
                t = b_65(t);
                v_38 = t;
                t = (ATerm) ATinsert(CheckATermList(v_38), u_64);
                t_11 = t;
                t = SSLsetAnnotations(t_11, s_38);
              }
            }
        }
      }
    return(t);
  }
  t = i_29;
  t = b_65(t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm p_65 = NULL;
  if(match_cons(t, sym__2))
    {
      p_65 = ATgetArgument(t, 0);
      if((p_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm z_53, ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,k_65 = NULL;
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_53, a_54);
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_63 = ATgetArgument(t, 0);
            ATerm s_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_53, a_54);
        t = w_13(z_53, a_54, t);
        LocalPopChoice(q_63);
      }
    else
      {
        t = p_63;
        t = (ATerm) ATempty;
      }
  }
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_65, b_54);
  t = m_13(p_25, k_65, b_54, t);
  h_65 = t;
  t = SSL_table_put(z_53, a_54, h_65);
  t = g_65;
  return(t);
}
static ATerm o_13 (ATerm y_109 (ATerm), ATerm j_54, ATerm i_54, ATerm t)
{
  static ATerm q_25 (ATerm t)
  {
    ATerm q_65 = NULL,r_65 = NULL;
    if(match_cons(t, sym__2))
      {
        q_65 = ATgetArgument(t, 0);
        r_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, j_54, q_65, r_65);
    t = y_109(t);
    return(t);
  }
  t = i_54;
  t = map_1_0(q_25, t);
  return(t);
}
static ATerm s_13 (ATerm c_38, ATerm d_38, ATerm t)
{
  t = SSL_access(c_38, d_38);
  return(t);
}
static ATerm k_66 (ATerm c_66, ATerm t)
{
  t = SSL_fclose(c_66);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_66 = NULL,i_66 = NULL;
  i_66 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_66 = ATgetArgument(t, 0);
      {
        ATerm t_63 = t;
        int u_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_66);
            LocalPopChoice(u_63);
          }
        else
          {
            t = t_63;
            t = k_66(i_66, t);
          }
      }
    }
  else
    {
      t = k_66(i_66, t);
    }
  return(t);
}
static ATerm p_13 (ATerm g_23, ATerm t)
{
  t = SSL_read_term_from_stream(g_23);
  return(t);
}
static ATerm q_13 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm m_66 = NULL;
  t = SSL_fopen(l_38, m_38);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_66);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_66 = NULL;
  t = SSL_stdin_stream();
  n_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_66);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_66 = NULL;
  t = SSL_stdout_stream();
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_66);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_66 = NULL;
  t = SSL_stderr_stream();
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_66);
  return(t);
}
static ATerm h_68 (ATerm x_66, ATerm t)
{
  ATerm z_66 = NULL;
  t = SSL_explode_term(x_66);
  if(match_cons(t, sym__2))
    {
      ATerm w_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_63 = ATgetArgument(t, 1);
        if(((ATgetType(y_63) == AT_LIST) && !(ATisEmpty(y_63))))
          {
            z_66 = ATgetFirst((ATermList) y_63);
            {
              ATerm a_64 = (ATerm) ATgetNext((ATermList) y_63);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_66;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_66;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_66;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_66;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_68 (ATerm c_67, ATerm d_67, ATerm e_67, ATerm t)
{
  ATerm g_67 = NULL,i_67 = NULL,j_67 = NULL,n_67 = NULL,w_11 = NULL;
  t = SSLgetAnnotations(e_67);
  j_67 = t;
  t = c_67;
  if(match_cons(t, sym_Path_1))
    {
      n_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_67, d_67);
  w_11 = t;
  t = SSLsetAnnotations(w_11, j_67);
  if(match_cons(t, sym__2))
    {
      g_67 = ATgetArgument(t, 0);
      i_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(g_67, i_67, t);
  return(t);
}
static ATerm k_68 (ATerm p_67, ATerm q_67, ATerm s_67, ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,a_68 = NULL,y_11 = NULL;
  t = SSLgetAnnotations(s_67);
  w_67 = t;
  t = SSL_is_string(p_67);
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, q_67);
  y_11 = t;
  t = SSLsetAnnotations(y_11, w_67);
  if(match_cons(t, sym__2))
    {
      u_67 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(u_67, v_67, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,f_68 = NULL;
  c_68 = t;
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
      {
        ATerm b_64 = t;
        int c_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_68(c_68, t);
            LocalPopChoice(c_64);
          }
        else
          {
            t = b_64;
            {
              ATerm d_64 = t;
              int e_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_68(d_68, f_68, c_68, t);
                  LocalPopChoice(e_64);
                }
              else
                {
                  t = d_64;
                  t = k_68(d_68, f_68, c_68, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_68(c_68, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,w_68 = NULL;
  w_68 = t;
  {
    ATerm f_64 = t;
    int g_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_68, term_h_64);
        t = r_13(t);
        LocalPopChoice(g_64);
      }
    else
      {
        t = f_64;
        {
          ATerm f_40 = NULL,g_40 = NULL;
          t = term_i_64;
          g_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_64, w_68);
          t = a_14(g_40, w_68, t);
          f_40 = t;
          t = SSL_perror(f_40);
          _fail(t);
        }
      }
  }
  n_68 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_13(o_68, t);
  m_68 = t;
  t = n_68;
  t = fclose_0_0(t);
  t = m_68;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_j_64;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = term_k_64;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_64 = t;
  int m_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_69 = NULL,b_69 = NULL;
      a_69 = t;
      t = (ATerm) ATinsert(ATempty, term_n_64);
      b_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_69, (ATerm) ATinsert(ATempty, term_n_64));
      t = s_13(a_69, b_69, t);
      LocalPopChoice(m_64);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_64;
      {
        ATerm o_64 = t;
        int p_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_64 = t;
            if((PushChoice() == 0))
              {
                ATerm c_69 = NULL,d_69 = NULL;
                c_69 = t;
                t = (ATerm) ATinsert(ATempty, term_n_53);
                d_69 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_69, (ATerm) ATinsert(ATempty, term_n_53));
                t = s_13(c_69, d_69, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_64;
              }
            t = debug_1_0(r_25, t);
            LocalPopChoice(p_64);
          }
        else
          {
            t = o_64;
            t = debug_1_0(s_25, t);
          }
      }
      t = (ATerm) ATempty;
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
  t = term_r_64;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = debug_1_0(w_25, t);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_s_64;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,y_69 = NULL;
  v_69 = t;
  t = term_b_33;
  w_69 = t;
  t = (ATerm) ATinsert(ATempty, term_w_64);
  y_69 = t;
  t = SSL_printnl(w_69, y_69);
  t = v_69;
  return(t);
}
static ATerm y_25 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  if(match_cons(t, sym__3))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
      b_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_13(z_69, a_70, b_70, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,f_70 = NULL;
  c_70 = t;
  t = term_b_33;
  d_70 = t;
  t = (ATerm) ATinsert(ATempty, term_x_64);
  f_70 = t;
  t = SSL_printnl(d_70, f_70);
  t = c_70;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,k_70 = NULL;
  h_70 = t;
  t = term_b_33;
  i_70 = t;
  t = (ATerm) ATinsert(ATempty, term_w_64);
  k_70 = t;
  t = SSL_printnl(i_70, k_70);
  t = h_70;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_69 = NULL,g_69 = NULL,i_69 = NULL,j_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL;
  e_69 = t;
  t = if_verbose5_1_0(t_25, t);
  {
    ATerm y_64 = t;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,u_69 = NULL;
        t = term_z_64;
        s_69 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_69);
        u_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_64, (ATerm) ATmakeAppl(sym_Imported_1, e_69));
        t = w_13(s_69, u_69, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_64;
      }
  }
  i_69 = t;
  t = term_z_64;
  o_69 = t;
  t = term_a_65;
  p_69 = t;
  t = (ATerm) ATinsert(ATempty, e_69);
  q_69 = t;
  t = SSL_table_put(o_69, p_69, q_69);
  t = i_69;
  t = if_verbose4_1_0(v_25, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(x_25, t);
  g_69 = t;
  t = term_z_64;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_64, g_69);
  t = o_13(y_25, n_69, g_69, t);
  t = if_verbose6_1_0(z_25, t);
  t = term_z_64;
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, e_69);
  l_69 = t;
  t = (ATerm) ATempty;
  m_69 = t;
  t = SSL_table_put(j_69, l_69, m_69);
  t = (ATerm) ATmakeAppl(sym__3, term_z_64, (ATerm)ATmakeAppl(sym_Imported_1, e_69), (ATerm) ATempty);
  t = if_verbose4_1_0(a_26, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_70;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_70 = ATgetFirst((ATermList) t);
          a_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_65 = t;
        int d_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_40 = NULL,x_40 = NULL,y_40 = NULL,o_16 = NULL;
            t = SSLgetAnnotations(y_70);
            s_40 = t;
            t = z_70;
            t = p_97(t);
            x_40 = t;
            t = a_71;
            t = filter_1_0(p_97, t);
            y_40 = t;
            t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
            o_16 = t;
            t = SSLsetAnnotations(o_16, s_40);
            LocalPopChoice(d_65);
          }
        else
          {
            t = c_65;
            t = a_71;
            t = filter_1_0(p_97, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  static ATerm d_71 (ATerm t)
  {
    ATerm e_65 = t;
    int f_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_82(t);
        t = d_71(t);
        LocalPopChoice(f_65);
      }
    else
      {
        t = e_65;
        t = o_82(t);
      }
    return(t);
  }
  t = d_71(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_65 = t;
  int j_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_65;
      t = get_config_0_0(t);
      LocalPopChoice(j_65);
    }
  else
    {
      t = i_65;
      {
        ATerm m_65 = t;
        int n_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_71 = NULL;
            t = term_o_65;
            e_71 = t;
            t = SSL_getenv(e_71);
            LocalPopChoice(n_65);
          }
        else
          {
            t = m_65;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm b_26 (ATerm t)
{
  t = debug_1_0(c_26, t);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_s_65;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm m_71 = NULL,o_71 = NULL;
  t = term_z_64;
  m_71 = t;
  t = term_t_65;
  o_71 = t;
  t = term_u_65;
  t = w_13(m_71, o_71, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm v_65 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_65;
      }
  }
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = debug_1_0(g_26, t);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_w_65;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_71 = NULL;
  t = if_verbose5_1_0(b_26, t);
  i_71 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_71 = NULL,k_71 = NULL;
        t = term_z_64;
        j_71 = t;
        t = term_a_65;
        k_71 = t;
        t = term_z_65;
        t = w_13(j_71, k_71, t);
        LocalPopChoice(y_65);
      }
    else
      {
        t = x_65;
        {
          ATerm l_71 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_71 = t;
          t = repeat_2_0(d_26, _id, t);
          t = l_71;
        }
      }
  }
  t = i_71;
  t = if_verbose5_1_0(f_26, t);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = debug_1_0(l_26, t);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_a_66;
  return(t);
}
static ATerm s_72 (ATerm y_71, ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  t = term_z_64;
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_71);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_64, (ATerm) ATmakeAppl(sym_Tool_1, y_71));
  t = w_13(d_72, e_72, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_66 = ATgetFirst((ATermList) t);
      if(match_cons(b_66, sym__2))
        {
          ATerm e_66 = ATgetArgument(b_66, 0);
          c_72 = ATgetArgument(b_66, 1);
        }
      else
        _fail(t);
      {
        ATerm d_66 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_72;
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = debug_1_0(s_26, t);
  return(t);
}
static ATerm s_26 (ATerm t)
{
  t = term_a_66;
  return(t);
}
static ATerm t_26 (ATerm t)
{
  t = term_z_64;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_26, t);
  return(t);
}
static ATerm u_26 (ATerm t)
{
  t = term_f_66;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_66 = t;
  int j_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
      t = if_verbose5_1_0(h_26, t);
      t = xtc_load_0_0(t);
      h_72 = t;
      if(match_cons(t, sym__2))
        {
          f_72 = ATgetArgument(t, 0);
          g_72 = ATgetArgument(t, 1);
          {
            ATerm l_66 = t;
            int q_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
                t = term_z_64;
                l_72 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, f_72);
                m_72 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_64, (ATerm) ATmakeAppl(sym_Tool_1, f_72));
                t = w_13(l_72, m_72, t);
                {
                  static ATerm m_26 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_72 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_72 != NULL) && (k_72 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_72 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_26, t);
                }
                t = not_null(k_72);
                LocalPopChoice(q_66);
              }
            else
              {
                t = l_66;
                t = s_72(h_72, t);
              }
          }
        }
      else
        {
          t = s_72(h_72, t);
        }
      t = if_verbose5_1_0(n_26, t);
      LocalPopChoice(j_66);
    }
  else
    {
      t = h_66;
      {
        ATerm r_72 = NULL,p_41 = NULL,r_41 = NULL;
        r_72 = t;
        t = term_b_33;
        p_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_66), r_72), term_r_66);
        r_41 = t;
        t = SSL_printnl(p_41, r_41);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_66), r_72), term_r_66);
        t = if_verbose5_1_0(t_26, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_13 (ATerm i_48, ATerm h_48, ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL;
  t = i_48;
  {
    ATerm t_66 = t;
    int u_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_66);
      }
    else
      {
        t = t_66;
        t = (ATerm) ATempty;
      }
  }
  v_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_48, v_72);
  t = conc_0_0(t);
  u_72 = t;
  t = term_m_59;
  w_72 = t;
  t = SSL_table_put(w_72, i_48, u_72);
  t = (ATerm) ATmakeAppl(sym__3, term_m_59, i_48, u_72);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL;
      t = term_f_34;
      t = p_0(t);
      e_73 = t;
      t = term_v_66;
      f_73 = t;
      t = term_w_66;
      g_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_66, term_w_66, e_73);
      t = x_13(f_73, g_73, e_73, t);
      _fail(t);
    }
  else
    {
      ATerm k_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_73 = ATgetFirst((ATermList) t);
          b_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_73;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_73 = ATgetFirst((ATermList) t);
          d_73 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_73;
      t = n_0(t);
      t = c_73;
      t = o_0(t);
      k_73 = t;
      t = (ATerm) ATinsert(CheckATermList(d_73), k_73);
    }
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm m_73 = NULL;
  m_73 = t;
  if(match_string(t, "-S"))
    {
      t = m_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_73;
    }
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL;
  t = term_z_32;
  n_73 = t;
  t = term_v_32;
  o_73 = t;
  t = term_y_66;
  t = z_13(n_73, o_73, t);
  t = term_a_67;
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_b_67;
  return(t);
}
static ATerm d_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  t = SSL_string_to_int(p_73);
  q_73 = t;
  t = term_z_32;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, q_73);
  t = z_13(r_73, q_73, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_73);
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_f_67;
  return(t);
}
static ATerm r_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  t = term_h_67;
  w_73 = t;
  t = term_f_34;
  x_73 = t;
  t = term_k_67;
  t = z_13(w_73, x_73, t);
  t = term_l_67;
  return(t);
}
static ATerm t_27 (ATerm t)
{
  t = term_m_67;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_67 = t;
  int r_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_26, w_26, c_27, t);
      LocalPopChoice(r_67);
    }
  else
    {
      t = o_67;
      {
        ATerm t_67 = t;
        int x_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_27, f_27, h_27, t);
            LocalPopChoice(x_67);
          }
        else
          {
            t = t_67;
            t = Option_3_0(r_27, s_27, t_27, t);
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm y_67 = t;
  int z_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_73 = NULL;
      t = f_48;
      t = get_config_0_0(t);
      t = term_m_59;
      y_73 = t;
      t = SSL_table_remove(y_73, f_48);
      t = (ATerm) ATmakeAppl(sym__2, term_m_59, f_48);
      LocalPopChoice(z_67);
    }
  else
    {
      t = y_67;
      t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
      t = z_13(f_48, g_48, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  static ATerm z_74 (ATerm t)
  {
    ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
    y_74 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_74 = ATgetFirst((ATermList) t);
        x_74 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_42 = NULL,g_42 = NULL,x_16 = NULL;
          t = SSLgetAnnotations(y_74);
          c_42 = t;
          t = x_74;
          t = z_74(t);
          g_42 = t;
          t = (ATerm) ATinsert(CheckATermList(g_42), w_74);
          x_16 = t;
          t = SSLsetAnnotations(x_16, c_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_74;
        t = q_90(t);
      }
    return(t);
  }
  t = z_74(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  b_74 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_74;
    }
  else
    {
      static ATerm u_27 (ATerm t)
      {
        t = not_null(d_74);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_74 = ATgetFirst((ATermList) t);
          if(((d_74 != NULL) && (d_74 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_74;
      t = at_end_1_0(u_27, t);
    }
  return(t);
}
static ATerm q_75 (ATerm f_75, ATerm t)
{
  ATerm g_75 = NULL;
  t = SSL_explode_term(f_75);
  if(match_cons(t, sym__2))
    {
      ATerm b_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_75;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,m_75 = NULL;
  m_75 = t;
  if(match_cons(t, sym__2))
    {
      j_75 = ATgetArgument(t, 0);
      k_75 = ATgetArgument(t, 1);
      {
        ATerm e_68 = t;
        int g_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_27 (ATerm t)
            {
              t = k_75;
              return(t);
            }
            t = j_75;
            t = at_end_1_0(v_27, t);
            LocalPopChoice(g_68);
          }
        else
          {
            t = e_68;
            t = q_75(m_75, t);
          }
      }
    }
  else
    {
      t = q_75(m_75, t);
    }
  return(t);
}
static ATerm v_13 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL;
  t = j_48;
  {
    ATerm j_68 = t;
    int l_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(l_68);
      }
    else
      {
        t = j_68;
        t = (ATerm) ATempty;
      }
  }
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_75, k_48);
  t = conc_0_0(t);
  s_75 = t;
  t = term_m_59;
  u_75 = t;
  t = SSL_table_put(u_75, j_48, s_75);
  t = (ATerm) ATmakeAppl(sym__3, term_m_59, j_48, s_75);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm w_75 = NULL;
  w_75 = t;
  if(match_string(t, "-o"))
    {
      t = w_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_75;
    }
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL;
  x_75 = t;
  t = term_i_33;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_33, x_75);
  t = z_13(y_75, x_75, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_75);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_p_68;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_27, x_27, y_27, t);
  return(t);
}
static ATerm z_27 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  if(match_string(t, "-i"))
    {
      t = a_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_76;
    }
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  b_76 = t;
  t = term_c_50;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_50, b_76);
  t = z_13(c_76, b_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_76);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_q_68;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_27, a_28, b_28, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm l_76 = NULL;
  l_76 = t;
  if(match_string(t, "-I"))
    {
      t = l_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = l_76;
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  m_76 = t;
  t = term_v_55;
  n_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_76), term_v_55);
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_55, (ATerm) ATinsert(ATinsert(ATempty, m_76), term_v_55));
  t = t_13(n_76, o_76, t);
  t = term_f_34;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  t = term_r_68;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm p_76 = NULL;
  p_76 = t;
  if(match_string(t, "--main"))
    {
      t = p_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = p_76;
    }
  return(t);
}
static ATerm g_28 (ATerm t)
{
  ATerm q_76 = NULL,t_76 = NULL;
  q_76 = t;
  t = term_x_53;
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_53, q_76);
  t = z_13(t_76, q_76, t);
  t = term_f_34;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = term_s_68;
  return(t);
}
static ATerm i_28 (ATerm t)
{
  ATerm u_76 = NULL;
  u_76 = t;
  if(match_string(t, "--library"))
    {
      t = u_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = u_76;
    }
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL;
  t = term_a_35;
  v_76 = t;
  t = term_f_34;
  w_76 = t;
  t = term_t_68;
  t = z_13(v_76, w_76, t);
  t = term_f_34;
  return(t);
}
static ATerm m_28 (ATerm t)
{
  t = term_u_68;
  return(t);
}
static ATerm r_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_28 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
  x_76 = t;
  t = term_s_34;
  y_76 = t;
  t = (ATerm) ATinsert(ATempty, x_76);
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATempty, x_76));
  t = v_13(y_76, z_76, t);
  t = term_f_34;
  return(t);
}
static ATerm t_28 (ATerm t)
{
  t = term_v_68;
  return(t);
}
static ATerm v_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_28 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  t = term_t_33;
  b_77 = t;
  t = (ATerm) ATinsert(ATempty, a_77);
  c_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, (ATerm) ATinsert(ATempty, a_77));
  t = t_13(b_77, c_77, t);
  t = term_f_34;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  t = term_x_68;
  return(t);
}
static ATerm b_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_29 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
  d_77 = t;
  t = term_k_33;
  e_77 = t;
  t = (ATerm) ATinsert(ATempty, d_77);
  f_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATempty, d_77));
  t = t_13(e_77, f_77, t);
  t = term_f_34;
  return(t);
}
static ATerm d_29 (ATerm t)
{
  t = term_y_68;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  t = term_v_33;
  g_77 = t;
  t = term_f_34;
  h_77 = t;
  t = term_z_68;
  t = z_13(g_77, h_77, t);
  t = term_f_34;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_f_69;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_29 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL;
  t = term_l_55;
  i_77 = t;
  t = term_f_34;
  j_77 = t;
  t = term_h_69;
  t = z_13(i_77, j_77, t);
  t = term_f_34;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_k_69;
  return(t);
}
static ATerm q_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  t = term_v_50;
  k_77 = t;
  t = term_f_34;
  l_77 = t;
  t = term_r_69;
  t = z_13(k_77, l_77, t);
  t = term_f_34;
  return(t);
}
static ATerm s_29 (ATerm t)
{
  t = term_t_69;
  return(t);
}
static ATerm u_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_29 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
  m_77 = t;
  t = SSL_string_to_int(m_77);
  n_77 = t;
  t = term_v_37;
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_37, n_77);
  t = z_13(o_77, n_77, t);
  t = term_f_34;
  return(t);
}
static ATerm w_29 (ATerm t)
{
  t = term_x_69;
  return(t);
}
static ATerm x_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_29 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  t = SSL_string_to_int(p_77);
  q_77 = t;
  t = term_z_37;
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_37, q_77);
  t = z_13(r_77, q_77, t);
  t = term_f_34;
  return(t);
}
static ATerm z_29 (ATerm t)
{
  t = term_e_70;
  return(t);
}
static ATerm a_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_30 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL;
  t = term_w_39;
  s_77 = t;
  t = term_f_34;
  t_77 = t;
  t = term_g_70;
  t = u_13(s_77, t_77, t);
  t = term_f_34;
  return(t);
}
static ATerm e_30 (ATerm t)
{
  t = term_j_70;
  return(t);
}
static ATerm f_30 (ATerm t)
{
  ATerm u_77 = NULL;
  u_77 = t;
  if(match_string(t, "-h"))
    {
      t = u_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = u_77;
    }
  return(t);
}
static ATerm i_30 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  t = term_l_70;
  v_77 = t;
  t = term_f_34;
  w_77 = t;
  t = term_m_70;
  t = z_13(v_77, w_77, t);
  t = term_f_34;
  return(t);
}
static ATerm j_30 (ATerm t)
{
  t = term_n_70;
  return(t);
}
static ATerm l_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_30 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL;
  t = term_o_70;
  x_77 = t;
  t = term_f_34;
  y_77 = t;
  t = term_p_70;
  t = z_13(x_77, y_77, t);
  t = term_f_34;
  return(t);
}
static ATerm p_30 (ATerm t)
{
  t = term_q_70;
  return(t);
}
static ATerm q_30 (ATerm t)
{
  ATerm z_77 = NULL;
  z_77 = t;
  if(match_string(t, "-v"))
    {
      t = z_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = z_77;
    }
  return(t);
}
static ATerm r_30 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL;
  t = term_r_70;
  a_78 = t;
  t = term_f_34;
  b_78 = t;
  t = term_s_70;
  t = z_13(a_78, b_78, t);
  t = term_f_34;
  return(t);
}
static ATerm s_30 (ATerm t)
{
  t = term_t_70;
  return(t);
}
static ATerm t_30 (ATerm t)
{
  ATerm c_78 = NULL;
  c_78 = t;
  if(match_string(t, "--warning"))
    {
      t = c_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = c_78;
    }
  return(t);
}
static ATerm z_30 (ATerm t)
{
  ATerm d_78 = NULL;
  d_78 = t;
  {
    ATerm u_70 = t;
    int v_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,z_16 = NULL;
        t = term_n_50;
        t = get_config_0_0(t);
        j_78 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_78 = ATgetFirst((ATermList) t);
            i_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_78);
        g_78 = t;
        t = h_78;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = i_78;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_78), h_78);
        z_16 = t;
        t = SSLsetAnnotations(z_16, g_78);
        t = term_n_50;
        e_78 = t;
        t = (ATerm) ATinsert(ATempty, d_78);
        f_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, d_78));
        t = z_13(e_78, f_78, t);
        LocalPopChoice(v_70);
      }
    else
      {
        t = u_70;
        {
          ATerm m_78 = NULL,n_78 = NULL;
          t = term_n_50;
          m_78 = t;
          t = (ATerm) ATinsert(ATempty, d_78);
          n_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, d_78));
          t = t_13(m_78, n_78, t);
        }
      }
  }
  t = term_f_34;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  t = term_w_70;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  t = term_r_51;
  p_78 = t;
  t = term_p_35;
  q_78 = t;
  t = term_x_70;
  t = z_13(p_78, q_78, t);
  t = o_78;
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = term_r_51;
  return(t);
}
static ATerm g_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm r_78 = NULL,u_78 = NULL,v_78 = NULL;
  r_78 = t;
  t = term_t_51;
  u_78 = t;
  t = term_v_32;
  v_78 = t;
  t = term_b_71;
  t = z_13(u_78, v_78, t);
  t = r_78;
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = term_t_51;
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
  ATerm w_78 = NULL,x_78 = NULL;
  t = term_w_55;
  w_78 = t;
  t = term_f_34;
  x_78 = t;
  t = term_c_71;
  t = z_13(w_78, x_78, t);
  t = term_f_34;
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_f_71;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm g_71 = t;
  int h_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_71);
    }
  else
    {
      t = g_71;
      {
        ATerm n_71 = t;
        int p_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_71);
          }
        else
          {
            t = n_71;
            {
              ATerm q_71 = t;
              int r_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(c_28, d_28, e_28, t);
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
                        t = ArgOption_3_0(f_28, g_28, h_28, t);
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
                              t = Option_3_0(i_28, l_28, m_28, t);
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
                                    t = ArgOption_3_0(r_28, s_28, t_28, t);
                                    LocalPopChoice(x_71);
                                  }
                                else
                                  {
                                    t = w_71;
                                    {
                                      ATerm z_71 = t;
                                      int a_72 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(v_28, w_28, x_28, t);
                                          LocalPopChoice(a_72);
                                        }
                                      else
                                        {
                                          t = z_71;
                                          {
                                            ATerm b_72 = t;
                                            int i_72 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(b_29, c_29, d_29, t);
                                                LocalPopChoice(i_72);
                                              }
                                            else
                                              {
                                                t = b_72;
                                                {
                                                  ATerm j_72 = t;
                                                  int n_72 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(e_29, f_29, j_29, t);
                                                      LocalPopChoice(n_72);
                                                    }
                                                  else
                                                    {
                                                      t = j_72;
                                                      {
                                                        ATerm o_72 = t;
                                                        int p_72 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(k_29, n_29, p_29, t);
                                                            LocalPopChoice(p_72);
                                                          }
                                                        else
                                                          {
                                                            t = o_72;
                                                            {
                                                              ATerm q_72 = t;
                                                              int t_72 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(q_29, r_29, s_29, t);
                                                                  LocalPopChoice(t_72);
                                                                }
                                                              else
                                                                {
                                                                  t = q_72;
                                                                  {
                                                                    ATerm x_72 = t;
                                                                    int y_72 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(u_29, v_29, w_29, t);
                                                                        LocalPopChoice(y_72);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_72;
                                                                        {
                                                                          ATerm z_72 = t;
                                                                          int h_73 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(x_29, y_29, z_29, t);
                                                                              LocalPopChoice(h_73);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_72;
                                                                              {
                                                                                ATerm i_73 = t;
                                                                                int j_73 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(a_30, d_30, e_30, t);
                                                                                    LocalPopChoice(j_73);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_73;
                                                                                    {
                                                                                      ATerm l_73 = t;
                                                                                      int s_73 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          LocalPopChoice(s_73);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_73;
                                                                                          {
                                                                                            ATerm t_73 = t;
                                                                                            int u_73 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(f_30, i_30, j_30, t);
                                                                                                LocalPopChoice(u_73);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_73;
                                                                                                {
                                                                                                  ATerm v_73 = t;
                                                                                                  int z_73 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(l_30, o_30, p_30, t);
                                                                                                      LocalPopChoice(z_73);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_73;
                                                                                                      {
                                                                                                        ATerm a_74 = t;
                                                                                                        int e_74 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(q_30, r_30, s_30, t);
                                                                                                            LocalPopChoice(e_74);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = a_74;
                                                                                                            {
                                                                                                              ATerm f_74 = t;
                                                                                                              int g_74 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(t_30, z_30, a_31, t);
                                                                                                                  LocalPopChoice(g_74);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_74;
                                                                                                                  {
                                                                                                                    ATerm h_74 = t;
                                                                                                                    int i_74 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(b_31, d_31, f_31, t);
                                                                                                                        LocalPopChoice(i_74);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_74;
                                                                                                                        {
                                                                                                                          ATerm j_74 = t;
                                                                                                                          int k_74 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(g_31, h_31, i_31, t);
                                                                                                                              LocalPopChoice(k_74);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_74;
                                                                                                                              t = Option_3_0(j_31, k_31, n_31, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_75), term_t_62), term_a_75), term_v_74), term_u_74), term_t_62), term_t_74), term_s_74), term_r_74), term_q_74), term_p_74), term_o_74), term_n_74), term_m_74), term_l_74);
  return(t);
}
ATerm map_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  static ATerm q_79 (ATerm t)
  {
    ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL;
    n_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_79;
      }
    else
      {
        ATerm o_42 = NULL,s_42 = NULL,u_42 = NULL,c_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_79 = ATgetFirst((ATermList) t);
            p_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_79);
        o_42 = t;
        t = o_79;
        t = z_89(t);
        s_42 = t;
        t = p_79;
        t = q_79(t);
        u_42 = t;
        t = (ATerm) ATinsert(CheckATermList(u_42), s_42);
        c_17 = t;
        t = SSLsetAnnotations(c_17, o_42);
      }
    return(t);
  }
  t = q_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_79 = ATgetFirst((ATermList) t);
      u_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_79 = NULL,a_80 = NULL;
        static ATerm o_31 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_79)), not_null(a_80));
          return(t);
        }
        t = u_79;
        t = k_0(t);
        if(((z_79 != NULL) && (z_79 != t)))
          _fail(t);
        else
          z_79 = t;
        t = t_79;
        t = i_0(t);
        if(((a_80 != NULL) && (a_80 != t)))
          _fail(t);
        else
          a_80 = t;
        t = u_79;
        t = reverse_acc_2_0(i_0, o_31, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_34;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_80 = NULL;
  t = term_f_34;
  t = g_0(t);
  b_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_75), b_80), term_i_75), term_t_62), term_h_75), term_t_62), term_e_75), term_d_75), term_t_62), term_c_75);
  return(t);
}
static ATerm u_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm y_80 = NULL;
  y_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_80), term_n_75);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
  ATerm o_75 = t;
  int p_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_75;
      t = get_config_0_0(t);
      h_80 = t;
      LocalPopChoice(p_75);
    }
  else
    {
      t = o_75;
      {
        static ATerm s_31 (ATerm t)
        {
          ATerm k_80 = NULL,o_80 = NULL,p_80 = NULL,g_17 = NULL;
          p_80 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_80 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_80);
          k_80 = t;
          t = o_80;
          if(((h_80 != NULL) && (h_80 != t)))
            _fail(t);
          else
            h_80 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_80);
          g_17 = t;
          t = SSLsetAnnotations(g_17, k_80);
          return(t);
        }
        t = fetch_1_0(s_31, t);
      }
    }
  {
    ATerm v_75 = t;
    int z_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_31 (ATerm t)
        {
          t = not_null(h_80);
          return(t);
        }
        t = short_description_1_0(t_31, t);
        t = echo_0_0(t);
        LocalPopChoice(z_75);
      }
    else
      {
        t = v_75;
      }
  }
  t = term_d_76;
  t = echo_0_0(t);
  t = term_v_66;
  i_80 = t;
  t = term_w_66;
  j_80 = t;
  t = term_e_76;
  t = w_13(i_80, j_80, t);
  t = reverse_acc_2_0(_id, u_31, t);
  t = map_1_0(y_31, t);
  {
    ATerm f_76 = t;
    int g_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_80 = NULL;
        static ATerm z_31 (ATerm t)
        {
          t = not_null(h_80);
          return(t);
        }
        t = long_description_1_0(z_31, t);
        z_80 = t;
        t = (ATerm) ATinsert(CheckATermList(z_80), term_t_62);
        t = echo_0_0(t);
        LocalPopChoice(g_76);
      }
    else
      {
        t = f_76;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  static ATerm t_82 (ATerm t)
  {
    ATerm m_82 = NULL,q_82 = NULL,r_82 = NULL;
    m_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_82 = ATgetFirst((ATermList) t);
        r_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_76 = t;
      int i_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_43 = NULL,s_43 = NULL,p_17 = NULL;
          t = SSLgetAnnotations(m_82);
          o_43 = t;
          t = q_82;
          t = j_90(t);
          s_43 = t;
          t = (ATerm) ATinsert(CheckATermList(r_82), s_43);
          p_17 = t;
          t = SSLsetAnnotations(p_17, o_43);
          LocalPopChoice(i_76);
        }
      else
        {
          t = h_76;
          {
            ATerm m_44 = NULL,q_44 = NULL,r_17 = NULL;
            t = SSLgetAnnotations(m_82);
            m_44 = t;
            t = r_82;
            t = t_82(t);
            q_44 = t;
            t = (ATerm) ATinsert(CheckATermList(q_44), q_82);
            r_17 = t;
            t = SSLsetAnnotations(r_17, m_44);
          }
        }
    }
    return(t);
  }
  t = t_82(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  b_83 = t;
  {
    ATerm j_76 = t;
    int k_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_83;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_76 = ATgetFirst((ATermList) t);
                ATerm s_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_83;
          }
        LocalPopChoice(k_76);
      }
    else
      {
        t = j_76;
        t = (ATerm) ATinsert(ATempty, b_83);
      }
  }
  c_83 = t;
  t = term_j_34;
  d_83 = t;
  t = SSL_printnl(d_83, c_83);
  t = b_83;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_75;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm j_83 = NULL,n_83 = NULL;
  t = term_k_78;
  j_83 = t;
  t = term_f_34;
  n_83 = t;
  t = term_l_78;
  t = z_13(j_83, n_83, t);
  return(t);
}
static ATerm c_32 (ATerm t)
{
  t = term_s_78;
  return(t);
}
static ATerm d_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_32 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  t = term_k_78;
  r_83 = t;
  t = term_f_34;
  s_83 = t;
  t = term_l_78;
  t = z_13(r_83, s_83, t);
  t = term_r_70;
  p_83 = t;
  t = term_f_34;
  q_83 = t;
  t = term_s_70;
  t = z_13(p_83, q_83, t);
  t = term_t_78;
  return(t);
}
static ATerm g_32 (ATerm t)
{
  t = term_y_78;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_78 = t;
  int a_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_32, b_32, c_32, t);
      LocalPopChoice(a_79);
    }
  else
    {
      t = z_78;
      t = Option_3_0(d_32, e_32, g_32, t);
    }
  return(t);
}
static ATerm w_13 (ATerm t_54, ATerm u_54, ATerm t)
{
  t = SSL_table_get(t_54, u_54);
  return(t);
}
static ATerm x_13 (ATerm c_53, ATerm d_53, ATerm b_53, ATerm t)
{
  ATerm u_83 = NULL,x_83 = NULL,y_83 = NULL;
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
  {
    ATerm b_79 = t;
    int c_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_79 = ATgetArgument(t, 0);
            ATerm e_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_53, d_53);
        t = w_13(c_53, d_53, t);
        LocalPopChoice(c_79);
      }
    else
      {
        t = b_79;
        t = (ATerm) ATempty;
      }
  }
  x_83 = t;
  t = (ATerm) ATinsert(CheckATermList(x_83), b_53);
  y_83 = t;
  t = SSL_table_put(c_53, d_53, y_83);
  t = u_83;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_84 = NULL,u_84 = NULL,x_84 = NULL;
      t = term_f_34;
      t = e_0(t);
      s_84 = t;
      t = term_v_66;
      u_84 = t;
      t = term_w_66;
      x_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_66, term_w_66, s_84);
      t = x_13(u_84, x_84, s_84, t);
      _fail(t);
    }
  else
    {
      ATerm a_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_84 = ATgetFirst((ATermList) t);
          o_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_84;
      t = c_0(t);
      t = term_f_34;
      t = d_0(t);
      a_85 = t;
      t = (ATerm) ATinsert(CheckATermList(o_84), a_85);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_60 (ATerm), ATerm o_60 (ATerm), ATerm t)
{
  ATerm b_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,i_85 = NULL,j_85 = NULL,z_17 = NULL;
  j_85 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_85 = ATgetFirst((ATermList) t);
      f_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_85);
  b_85 = t;
  t = e_85;
  t = n_60(t);
  g_85 = t;
  t = f_85;
  t = o_60(t);
  i_85 = t;
  t = (ATerm) ATinsert(CheckATermList(i_85), g_85);
  z_17 = t;
  t = SSLsetAnnotations(z_17, b_85);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm t_85 = NULL,v_85 = NULL,z_85 = NULL,a_86 = NULL,c_86 = NULL,d_86 = NULL,i_18 = NULL;
  t_85 = t;
  {
    ATerm f_79 = t;
    int g_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_79;
        t = v_109(t);
        LocalPopChoice(g_79);
      }
    else
      {
        t = f_79;
      }
  }
  t = t_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_85 = ATgetFirst((ATermList) t);
      a_86 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_85);
  v_85 = t;
  t = term_r_75;
  d_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_75, z_85);
  t = z_13(d_86, z_85, t);
  t = a_86;
  {
    static ATerm i_87 (ATerm t)
    {
      ATerm i_79 = t;
      int j_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_79 = t;
          int l_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_86 = NULL;
              h_86 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_86;
              LocalPopChoice(l_79);
            }
          else
            {
              t = k_79;
              t = v_109(t);
              t = Cons_2_0(_id, i_87, t);
            }
          LocalPopChoice(j_79);
        }
      else
        {
          t = i_79;
          {
            ATerm m_86 = NULL,q_86 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_86 = ATgetFirst((ATermList) t);
                q_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_86), (ATerm) ATmakeAppl(sym_Undefined_1, m_86));
          }
        }
      return(t);
    }
    t = i_87(t);
  }
  c_86 = t;
  t = (ATerm) ATinsert(CheckATermList(c_86), (ATerm) ATmakeAppl(sym_Program_1, z_85));
  i_18 = t;
  t = SSLsetAnnotations(i_18, v_85);
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm q_88 = NULL;
  q_88 = t;
  if(match_string(t, "--help"))
    {
      t = q_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_88;
        }
    }
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm r_88 = NULL,s_88 = NULL;
  t = term_l_70;
  r_88 = t;
  t = term_f_34;
  s_88 = t;
  t = term_m_70;
  t = z_13(r_88, s_88, t);
  t = term_m_79;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_r_79;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,m_88 = NULL,o_88 = NULL,p_88 = NULL;
  i_88 = t;
  t = term_v_66;
  m_88 = t;
  t = term_w_66;
  o_88 = t;
  t = (ATerm) ATempty;
  p_88 = t;
  t = SSL_table_put(m_88, o_88, p_88);
  t = i_88;
  {
    static ATerm h_32 (ATerm t)
    {
      ATerm s_79 = t;
      int v_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_109(t);
          LocalPopChoice(v_79);
        }
      else
        {
          t = s_79;
          {
            ATerm w_79 = t;
            int x_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_32, j_32, k_32, t);
                LocalPopChoice(x_79);
              }
            else
              {
                t = w_79;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_32, t);
  }
  {
    ATerm y_79 = t;
    int c_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_89 = NULL;
        c_89 = t;
        {
          ATerm d_80 = t;
          int e_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_45 = NULL;
              t = c_89;
              {
                ATerm f_80 = t;
                int g_80 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_70;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_80);
                  }
                else
                  {
                    t = f_80;
                    t = fetch_1_0(l_32, t);
                  }
              }
              t = c_89;
              t = default_system_usage_0_0(t);
              t = term_v_32;
              a_45 = t;
              t = SSL_exit(a_45);
              LocalPopChoice(e_80);
            }
          else
            {
              t = d_80;
              {
                ATerm i_45 = NULL;
                t = term_k_78;
                t = get_config_0_0(t);
                t = c_89;
                t = default_system_about_0_0(t);
                t = term_v_32;
                i_45 = t;
                t = SSL_exit(i_45);
              }
            }
        }
        LocalPopChoice(c_80);
      }
    else
      {
        t = y_79;
        {
          ATerm l_80 = t;
          int m_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL;
              static ATerm m_32 (ATerm t)
              {
                ATerm k_89 = NULL,m_89 = NULL,n_89 = NULL,k_18 = NULL;
                n_89 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_89 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_89);
                k_89 = t;
                t = m_89;
                if(((g_88 != NULL) && (g_88 != t)))
                  _fail(t);
                else
                  g_88 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_89);
                k_18 = t;
                t = SSLsetAnnotations(k_18, k_89);
                return(t);
              }
              t = fetch_1_0(m_32, t);
              t = term_b_33;
              i_89 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_88)), term_n_80);
              j_89 = t;
              t = SSL_printnl(i_89, j_89);
              t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_88)), term_n_80));
              t = default_system_usage_0_0(t);
              t = term_p_35;
              h_89 = t;
              t = SSL_exit(h_89);
              LocalPopChoice(m_80);
            }
          else
            {
              t = l_80;
            }
        }
      }
  }
  h_88 = t;
  t = term_v_66;
  j_88 = t;
  t = SSL_table_destroy(j_88);
  t = h_88;
  return(t);
}
static ATerm z_13 (ATerm c_48, ATerm d_48, ATerm t)
{
  ATerm y_89 = NULL;
  t = term_m_59;
  y_89 = t;
  t = SSL_table_put(y_89, c_48, d_48);
  t = (ATerm) ATmakeAppl(sym__3, term_m_59, c_48, d_48);
  return(t);
}
static ATerm a_14 (ATerm c_37, ATerm d_37, ATerm t)
{
  t = SSL_strcat(c_37, d_37);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  f_90 = t;
  t = SSL_explode_string(f_90);
  {
    ATerm q_80 = t;
    int r_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_91 (ATerm t)
        {
          ATerm g_91 = NULL,j_91 = NULL,m_91 = NULL;
          g_91 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_91 = ATgetFirst((ATermList) t);
              m_91 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_80 = t;
            int t_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_45 = NULL,v_45 = NULL,s_18 = NULL;
                t = SSLgetAnnotations(g_91);
                s_45 = t;
                t = m_91;
                t = p_91(t);
                v_45 = t;
                t = (ATerm) ATinsert(CheckATermList(v_45), j_91);
                s_18 = t;
                t = SSLsetAnnotations(s_18, s_45);
                LocalPopChoice(t_80);
              }
            else
              {
                t = s_80;
                {
                  ATerm o_46 = NULL,t_18 = NULL;
                  t = SSLgetAnnotations(g_91);
                  o_46 = t;
                  t = j_91;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, j_91);
                  t_18 = t;
                  t = SSLsetAnnotations(t_18, o_46);
                }
              }
          }
          return(t);
        }
        t = p_91(t);
        LocalPopChoice(r_80);
      }
    else
      {
        t = q_80;
        t = (ATerm) ATempty;
      }
  }
  e_90 = t;
  t = SSL_implode_string(e_90);
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
  ATerm s_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,h_92 = NULL,i_92 = NULL,k_92 = NULL,y_92 = NULL,a_93 = NULL,c_93 = NULL,i_93 = NULL,o_93 = NULL,q_93 = NULL,r_93 = NULL,u_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,i_94 = NULL,l_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
  s_91 = t;
  t = term_b_62;
  w_94 = t;
  t = term_u_80;
  x_94 = t;
  t = term_v_80;
  t = z_13(w_94, x_94, t);
  t = term_z_32;
  u_94 = t;
  t = term_p_35;
  v_94 = t;
  t = term_w_80;
  t = z_13(u_94, v_94, t);
  t = term_v_37;
  r_94 = t;
  t = term_v_32;
  s_94 = t;
  t = term_x_80;
  t = z_13(r_94, s_94, t);
  t = term_z_37;
  l_94 = t;
  t = term_d_39;
  q_94 = t;
  t = term_a_81;
  t = z_13(l_94, q_94, t);
  t = term_b_81;
  t = xtc_find_path_0_0(t);
  y_92 = t;
  t = term_c_81;
  t = xtc_find_path_0_0(t);
  a_93 = t;
  t = term_d_81;
  t = xtc_find_path_0_0(t);
  c_93 = t;
  t = term_v_55;
  g_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_93), term_v_55), a_93), term_v_55), y_92), term_v_55);
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_55, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_93), term_v_55), a_93), term_v_55), y_92), term_v_55));
  t = z_13(g_94, i_94, t);
  t = term_s_34;
  e_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_81), term_e_81);
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_34, (ATerm) ATinsert(ATinsert(ATempty, term_f_81), term_e_81));
  t = z_13(e_94, f_94, t);
  t = term_i_81;
  t = xtc_find_path_0_0(t);
  k_92 = t;
  t = term_j_81;
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_92, term_j_81);
  t = a_14(k_92, b_94, t);
  d_92 = t;
  t = term_i_81;
  t = xtc_find_path_0_0(t);
  i_92 = t;
  t = term_j_81;
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_92, term_j_81);
  t = a_14(i_92, a_94, t);
  e_92 = t;
  t = term_k_81;
  t = xtc_find_path_0_0(t);
  h_92 = t;
  t = term_j_81;
  z_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_92, term_j_81);
  t = a_14(h_92, z_93, t);
  f_92 = t;
  t = term_t_33;
  x_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_92), term_v_55), e_92), term_v_55), d_92), term_v_55);
  y_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_92), term_v_55), e_92), term_v_55), d_92), term_v_55));
  t = z_13(x_93, y_93, t);
  t = term_i_81;
  t = xtc_find_path_0_0(t);
  c_92 = t;
  t = term_l_81;
  w_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_92, term_l_81);
  t = a_14(c_92, w_93, t);
  v_91 = t;
  t = term_k_81;
  t = xtc_find_path_0_0(t);
  x_91 = t;
  t = term_m_81;
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_91, term_m_81);
  t = a_14(x_91, u_93, t);
  w_91 = t;
  t = term_k_33;
  q_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_81), term_q_81), w_91), term_n_81), term_p_81), term_o_81), v_91), term_n_81);
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_81), term_q_81), w_91), term_n_81), term_p_81), term_o_81), v_91), term_n_81));
  t = z_13(q_93, r_93, t);
  t = term_n_50;
  i_93 = t;
  t = (ATerm) ATinsert(ATempty, term_s_81);
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_50, (ATerm) ATinsert(ATempty, term_s_81));
  t = z_13(i_93, o_93, t);
  t = s_91;
  return(t);
}
static ATerm n_32 (ATerm t)
{
  ATerm t_95 = NULL;
  t_95 = t;
  t = term_c_50;
  t = get_config_0_0(t);
  t = debug_1_0(o_32, t);
  t = t_95;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_t_81;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm u_81 = t;
    int v_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_95 = NULL,e_95 = NULL,f_95 = NULL;
        t = term_o_70;
        t = get_config_0_0(t);
        t = term_w_81;
        t = xtc_find_0_0(t);
        c_95 = t;
        t = term_j_34;
        f_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_95, term_j_34);
        t = i_13(c_95, f_95, t);
        t = term_v_32;
        e_95 = t;
        t = SSL_exit(e_95);
        LocalPopChoice(v_81);
      }
    else
      {
        t = u_81;
      }
  }
  {
    ATerm x_81 = t;
    int y_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL;
        t = term_r_70;
        t = get_config_0_0(t);
        t = strc_version_0_0(t);
        t = term_v_32;
        k_95 = t;
        t = SSL_exit(k_95);
        LocalPopChoice(y_81);
      }
    else
      {
        t = x_81;
      }
  }
  {
    ATerm z_81 = t;
    int a_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_95 = NULL;
        o_95 = t;
        t = term_c_50;
        t = get_config_0_0(t);
        t = o_95;
        LocalPopChoice(a_82);
      }
    else
      {
        t = z_81;
        {
          ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL;
          t = term_b_33;
          r_95 = t;
          t = (ATerm) ATinsert(ATempty, term_b_82);
          s_95 = t;
          t = SSL_printnl(r_95, s_95);
          t = term_p_35;
          q_95 = t;
          t = SSL_exit(q_95);
          t = (ATerm) ATinsert(ATempty, term_b_82);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(n_32, t);
  return(t);
}
static ATerm p_32 (ATerm t)
{
  t = if_verbose1_1_0(s_32, t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  t = xtc_temp_files_1_0(t_32, t);
  return(t);
}
static ATerm s_32 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  t = term_b_33;
  w_95 = t;
  t = (ATerm) ATinsert(CheckATermList(v_95), term_c_82);
  x_95 = t;
  t = SSL_printnl(w_95, x_95);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(CheckATermList(v_95), term_c_82));
  return(t);
}
static ATerm t_32 (ATerm t)
{
  ATerm d_82 = t;
  int e_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_95 = NULL;
      t = term_c_50;
      t = get_config_0_0(t);
      y_95 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_95);
      LocalPopChoice(e_82);
    }
  else
    {
      t = d_82;
      t = term_m_53;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
  t = run_time_0_0(t);
  z_95 = t;
  t = term_b_33;
  a_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_82), z_95), term_f_82);
  b_96 = t;
  t = SSL_printnl(a_96, b_96);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_82), z_95), term_f_82));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm h_82 = t;
  int i_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_95 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(p_32, r_32, t);
      t = if_verbose2_1_0(u_32, t);
      t = term_v_32;
      u_95 = t;
      t = SSL_exit(u_95);
      LocalPopChoice(i_82);
    }
  else
    {
      t = h_82;
      {
        ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
        t = run_time_0_0(t);
        c_96 = t;
        t = term_b_33;
        e_96 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_82), c_96), term_l_82);
        f_96 = t;
        t = SSL_printnl(e_96, f_96);
        t = term_p_35;
        d_96 = t;
        t = SSL_exit(d_96);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
