#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  init_constant_terms();
}
ATerm term_p_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_g_79;
ATerm term_f_79;
ATerm term_x_78;
ATerm term_u_78;
ATerm term_t_78;
ATerm term_q_78;
ATerm term_p_78;
ATerm term_n_78;
ATerm term_i_78;
ATerm term_h_78;
ATerm term_g_78;
ATerm term_f_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_a_78;
ATerm term_z_77;
ATerm term_y_77;
ATerm term_x_77;
ATerm term_t_77;
ATerm term_s_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_h_77;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_m_76;
ATerm term_d_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_f_75;
ATerm term_d_75;
ATerm term_y_74;
ATerm term_t_74;
ATerm term_s_74;
ATerm term_q_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_j_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_h_72;
ATerm term_g_72;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_c_69;
ATerm term_y_68;
ATerm term_o_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_b_68;
ATerm term_a_68;
ATerm term_w_67;
ATerm term_v_67;
ATerm term_u_67;
ATerm term_r_67;
ATerm term_q_67;
ATerm term_p_67;
ATerm term_o_67;
ATerm term_n_67;
ATerm term_m_67;
ATerm term_l_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_h_67;
ATerm term_e_67;
ATerm term_d_67;
ATerm term_b_67;
ATerm term_z_66;
ATerm term_u_66;
ATerm term_s_66;
ATerm term_r_66;
ATerm term_q_66;
ATerm term_m_66;
ATerm term_k_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_b_65;
ATerm term_y_64;
ATerm term_l_64;
ATerm term_j_64;
ATerm term_u_63;
ATerm term_g_63;
ATerm term_e_63;
ATerm term_z_62;
ATerm term_t_62;
ATerm term_r_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_g_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_s_61;
ATerm term_p_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_f_61;
ATerm term_c_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_x_60;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_a_59;
ATerm term_w_56;
ATerm term_b_56;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_q_55;
ATerm term_o_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_u_54;
ATerm term_a_54;
ATerm term_n_53;
ATerm term_i_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_n_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_d_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_p_51;
ATerm term_l_51;
ATerm term_f_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_x_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_i_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_q_49;
ATerm term_l_49;
ATerm term_j_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_m_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_d_48;
ATerm term_x_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_h_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_p_46;
ATerm term_n_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_r_45;
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
ATerm term_b_45;
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
ATerm term_c_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_c_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_s_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_p_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_r_36;
ATerm term_l_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_z_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_h_32;
ATerm term_z_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_k_30;
void init_constant_terms (void)
{
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_41, term_f_34, term_i_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_41, term_q_30, term_m_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_41, term_u_34, term_r_41);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_41, term_e_36, term_v_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_41, term_z_41, term_a_42);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_42, term_h_42, term_k_42);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_42, term_n_42, term_o_42);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_42, term_s_42, term_w_42);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_42, term_a_43, term_c_43);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_43, term_g_43, term_h_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_43, term_k_43, term_l_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_43, term_b_36, term_o_43);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_43, term_r_43, term_s_43);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_43, term_v_43, term_w_43);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_43, term_z_43, term_c_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_44, term_l_44, term_m_44);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_44, term_p_44, term_q_44);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_44, term_t_44, term_u_44);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_44, term_x_44, term_y_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_45, term_e_45, term_f_45);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_45, term_i_45, term_j_45);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_45, term_m_45, term_n_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_45, term_t_45, term_u_45);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_45, term_n_46, term_p_46);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_46, term_r_35, term_t_46);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_46, term_y_46, term_z_46);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_47, term_d_47, term_e_47);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_47, term_k_47, term_l_47);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_s_50, term_q_49);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(sym__2, term_w_61, term_r_62);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(sym__2, term_w_61, term_x_61);
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_k_30);
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_30);
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym__2, term_l_65, term_z_31);
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_z_31);
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib    Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_r_66));
  term_r_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_z_31);
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(sym__2, term_y_51, term_z_31);
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym__2, term_m_48, term_z_31);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_z_31);
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(sym__2, term_o_67, term_z_31);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(sym__2, term_r_67, term_z_31);
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(sym__2, term_w_67, term_z_31);
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(sym__2, term_b_49, term_f_34);
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(sym__2, term_c_49, term_k_30);
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(sym__2, term_h_52, term_z_31);
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(sym__2, term_y_64, term_b_65);
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym__2, term_z_75, term_z_31);
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(sym__2, term_d_59, term_n_77);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_f_34);
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_k_30);
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(sym__2, term_g_35, term_e_36);
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_77));
  term_x_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_n_78));
  term_n_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_t_78));
  term_t_78 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_u_78));
  term_u_78 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_96 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_12 (ATerm l_19, ATerm);
ATerm k_1 (ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm k_12 (ATerm j_19, ATerm);
ATerm a_2 (ATerm);
ATerm f_2 (ATerm);
ATerm j_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm EXDEV_0_0 (ATerm);
ATerm get_errno_0_0 (ATerm);
ATerm l_12 (ATerm u_39, ATerm t_39, ATerm);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm d_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm t_97 (ATerm), ATerm);
ATerm dead_def_elim_0_0 (ATerm);
ATerm if_keep4_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm if_keep6_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm g_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm z_9 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm q_12 (ATerm);
ATerm u_12 (ATerm);
ATerm w_12 (ATerm);
ATerm b_13 (ATerm);
ATerm p_13 (ATerm);
ATerm s_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm m_14 (ATerm);
ATerm q_14 (ATerm);
ATerm s_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm g_15 (ATerm);
ATerm i_15 (ATerm);
ATerm k_15 (ATerm);
ATerm n_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm h_16 (ATerm);
ATerm save_as_1_0 (ATerm i_74 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm p_12 (ATerm c_45, ATerm d_45, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm v_104 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm comp_0_2 (ATerm y_18, ATerm z_18, ATerm);
ATerm foldr_3_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm pass_warnings_0_0 (ATerm);
ATerm d_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm n_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm m_12 (ATerm h_74 (ATerm), ATerm e_19, ATerm);
ATerm n_12 (ATerm t_42, ATerm u_42, ATerm);
ATerm o_12 (ATerm d_95 (ATerm), ATerm t_447, ATerm b_43, ATerm);
ATerm r_12 (ATerm k_93 (ATerm), ATerm x_37, ATerm v_37, ATerm);
ATerm p_32 (ATerm a_32, ATerm);
ATerm q_32 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm);
ATerm t_17 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm x_17 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm y_17 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm g_105 (ATerm), ATerm);
ATerm z_17 (ATerm);
ATerm b_18 (ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm m_18 (ATerm);
ATerm r_18 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm t_18 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm g_74 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm basename_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm x_18 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm f_19 (ATerm);
ATerm s_12 (ATerm a_19, ATerm);
ATerm g_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm t_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm t_20 (ATerm);
ATerm w_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm f_21 (ATerm);
ATerm h_21 (ATerm);
ATerm m_21 (ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm s_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm l_22 (ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm v_22 (ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm y_22 (ATerm);
ATerm a_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm t_12 (ATerm d_49, ATerm e_49, ATerm);
ATerm end_scope_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm c_23 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_104 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm v_12 (ATerm j_36, ATerm k_36, ATerm);
ATerm x_12 (ATerm p_36, ATerm q_36, ATerm);
ATerm y_12 (ATerm a_46, ATerm c_46, ATerm e_46, ATerm g_46, ATerm b_46, ATerm d_46, ATerm f_46, ATerm h_46, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm debug_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm z_12 (ATerm v_39, ATerm w_39, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm c_13 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm j_26, ATerm i_26, ATerm);
ATerm d_13 (ATerm k_86 (ATerm), ATerm f_26, ATerm e_26, ATerm);
ATerm j_23 (ATerm);
ATerm e_13 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm);
ATerm f_13 (ATerm j_101 (ATerm), ATerm f_50, ATerm e_50, ATerm);
ATerm j_13 (ATerm d_39, ATerm e_39, ATerm);
ATerm o_61 (ATerm h_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_13 (ATerm z_42, ATerm);
ATerm h_13 (ATerm l_39, ATerm m_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_63 (ATerm c_62, ATerm);
ATerm n_63 (ATerm h_62, ATerm i_62, ATerm j_62, ATerm);
ATerm p_63 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm);
ATerm i_13 (ATerm);
ATerm l_23 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_23 (ATerm);
ATerm n_23 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm u_23 (ATerm);
ATerm v_23 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm n_89 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm t_67 (ATerm t_66, ATerm);
ATerm q_24 (ATerm);
ATerm s_24 (ATerm);
ATerm u_24 (ATerm);
ATerm z_24 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm k_13 (ATerm g_44, ATerm f_44, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm j_25 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_13 (ATerm d_44, ATerm e_44, ATerm);
ATerm at_end_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm o_70 (ATerm f_70, ATerm);
ATerm conc_0_0 (ATerm);
ATerm m_13 (ATerm h_44, ATerm i_44, ATerm);
ATerm o_25 (ATerm);
ATerm p_25 (ATerm);
ATerm q_25 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm y_25 (ATerm);
ATerm z_25 (ATerm);
ATerm b_26 (ATerm);
ATerm d_26 (ATerm);
ATerm h_26 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm o_26 (ATerm);
ATerm p_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm x_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm e_27 (ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm l_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm r_27 (ATerm);
ATerm s_27 (ATerm);
ATerm t_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm m_28 (ATerm);
ATerm n_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm y_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm r_29 (ATerm);
ATerm s_29 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm n_13 (ATerm p_50, ATerm q_50, ATerm);
ATerm o_13 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_101 (ATerm), ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm a_30 (ATerm);
ATerm b_30 (ATerm);
ATerm parse_options_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm q_13 (ATerm a_44, ATerm b_44, ATerm);
ATerm r_13 (ATerm y_33, ATerm z_33, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm d_30 (ATerm);
ATerm e_30 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm f_30 (ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm i_30 (ATerm);
ATerm j_30 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,o_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = j_88(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          o_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_0;
      t = foldr_2_0(j_88, k_88, t);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_0, u_0);
      t = k_88(t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12(d_1, g_1, t);
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
      ATerm l_30 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(q_0, s_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm m_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_q_30);
        t = geq_0_0(t);
        t = e_1;
        t = o_96(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = m_30;
        t = e_1;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
  p_1 = t;
  t = term_r_30;
  q_1 = t;
  t = (ATerm) ATinsert(ATempty, term_t_30);
  r_1 = t;
  t = SSL_printnl(q_1, r_1);
  t = p_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm s_1 = NULL,u_1 = NULL,v_1 = NULL;
  s_1 = t;
  t = term_r_30;
  u_1 = t;
  t = (ATerm) ATinsert(ATempty, s_1);
  v_1 = t;
  t = SSL_printnl(u_1, v_1);
  t = s_1;
  return(t);
}
ATerm j_12 (ATerm l_19, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = get_outfile_1_0(f_1, t);
      }
    l_1 = t;
    t = term_y_30;
    t = get_config_0_0(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_30, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_1), l_1), term_x_30), l_19));
    t = if_verbose3_1_0(h_1, t);
    if(match_cons(t, sym__2))
      {
        n_1 = ATgetArgument(t, 0);
        o_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm y_1 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        t = p_12(n_1, o_1, t);
        t = term_a_31;
        y_1 = t;
        t = SSL_exit(y_1);
        return(t);
      }
      t = fork_and_wait_1_0(j_1, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
    }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,l_2 = NULL;
  h_2 = t;
  t = term_r_30;
  i_2 = t;
  t = (ATerm) ATinsert(ATempty, term_d_31);
  l_2 = t;
  t = SSL_printnl(i_2, l_2);
  t = h_2;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  m_2 = t;
  t = term_r_30;
  n_2 = t;
  t = (ATerm) ATinsert(ATempty, m_2);
  o_2 = t;
  t = SSL_printnl(n_2, o_2);
  t = m_2;
  return(t);
}
ATerm k_12 (ATerm j_19, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(t_1, t);
  b_2 = t;
  t = term_f_31;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_x_30), j_19), term_h_31));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, c_2);
  t = if_verbose3_1_0(x_1, t);
  if(match_cons(t, sym__2))
    {
      e_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_2, g_2);
  {
    ATerm z_1 (ATerm t)
    {
      ATerm p_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_2, g_2);
      t = p_12(e_2, g_2, t);
      t = term_a_31;
      p_2 = t;
      t = SSL_exit(p_2);
      return(t);
    }
    t = fork_and_wait_1_0(z_1, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = if_verbose1_1_0(j_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      a_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(a_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(z_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,y_2 = NULL;
  u_2 = t;
  t = term_r_30;
  v_2 = t;
  t = (ATerm) ATinsert(CheckATermList(u_2), term_l_31);
  y_2 = t;
  t = SSL_printnl(v_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(CheckATermList(u_2), term_l_31));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL;
      q_2 = t;
      t = term_h_31;
      t = get_config_0_0(t);
      t = q_2;
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      t = profile_p__2_0(a_2, f_2, t);
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
ATerm l_12 (ATerm u_39, ATerm t_39, ATerm t)
{
  ATerm u_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(u_39, t_39);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = u_31;
      t = get_errno_0_0(t);
      t = term_z_31;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, u_39, t_39);
      t = z_12(u_39, t_39, t);
      t = SSL_remove(u_39);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = r_3;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_h_32;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_3, term_h_32);
        t = z_12(t_3, w_1, t);
        t = SSL_remove(t_3);
        t = term_h_32;
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL;
              t = r_3;
              t = t_0(t);
              k_2 = t;
              {
                ATerm k_32 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_2 = NULL;
                    r_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_2;
                      }
                    else
                      {
                        t = r_2;
                        if((t_3 != t))
                          {
                            _fail(t);
                          }
                        t = r_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_32;
                  }
                t = (ATerm) ATmakeAppl(sym__2, t_3, k_2);
                t = l_12(t_3, k_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
              }
              ;
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = r_3;
              t = t_0(t);
              if((t_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_3);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL;
  b_4 = t;
  t = term_w_32;
  x_3 = t;
  t = term_x_32;
  t = xtc_find_0_0(t);
  z_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_3), term_z_32);
  y_3 = t;
  t = b_4;
  t = comp_0_2(x_3, y_3, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm k_4 = NULL;
  k_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_4), term_b_33);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  j_4 = t;
  t = term_c_33;
  c_4 = t;
  t = j_4;
  {
    ATerm d_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = get_config_0_0(t);
        t = j_4;
        LocalPopChoice(g_33);
        t = (ATerm) ATinsert(ATempty, term_m_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
    h_4 = t;
    t = term_b_33;
    t = get_config_0_0(t);
    t = foldr_3_0(s_2, conc_0_0, t_2, t);
    i_4 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, h_4), i_4);
    t = concat_0_0(t);
    d_4 = t;
    t = j_4;
    t = comp_0_2(c_4, d_4, t);
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm y_4 = NULL,b_5 = NULL,c_5 = NULL;
  y_4 = t;
  t = term_r_30;
  b_5 = t;
  t = (ATerm) ATinsert(ATempty, term_n_33);
  c_5 = t;
  t = SSL_printnl(b_5, c_5);
  t = y_4;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
  j_5 = t;
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_5 = ATgetArgument(t, 0);
            {
              ATerm b_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(j_5);
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_5);
              v_0 = t;
              t = SSLsetAnnotations(v_0, b_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_5;
          }
        LocalPopChoice(q_33);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = p_33;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
    t = if_keep1_1_0(j_3, t);
    t = olevel_2_0(l_3, o_3, t);
    t = olevel_2_0(o_5, p_5, t);
    i_5 = t;
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              x_6 = ATgetArgument(t, 0);
              {
                ATerm l_4 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(i_5);
                l_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_6);
                z_0 = t;
                t = SSLsetAnnotations(z_0, l_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = i_5;
            }
          LocalPopChoice(s_33);
          t = xtc_transform_file_2_0(a_6, c_6, t);
        }
      else
        {
          t = r_33;
          t = xtc_transform_term_2_0(f_6, i_6, t);
        }
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      h_5 = t;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                e_7 = ATgetArgument(t, 0);
                {
                  ATerm p_4 = NULL,b_1 = NULL;
                  t = SSLgetAnnotations(h_5);
                  p_4 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, e_7);
                  b_1 = t;
                  t = SSLsetAnnotations(b_1, p_4);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_5;
              }
            LocalPopChoice(v_33);
            t = xtc_transform_file_2_0(j_6, pass_verbose_0_0, t);
          }
        else
          {
            t = u_33;
            t = xtc_transform_term_2_0(k_6, pass_verbose_0_0, t);
          }
        t = rename_to_1_0(l_6, t);
      }
    }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  t = term_r_30;
  f_5 = t;
  t = (ATerm) ATinsert(CheckATermList(e_5), term_a_34);
  g_5 = t;
  t = SSL_printnl(f_5, g_5);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(CheckATermList(e_5), term_a_34));
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm q_5 = NULL;
  t = pass_verbose_0_0(t);
  q_5 = t;
  t = (ATerm) ATinsert(CheckATermList(q_5), term_d_34);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_5 = NULL;
  t = pass_verbose_0_0(t);
  r_5 = t;
  t = (ATerm) ATinsert(CheckATermList(r_5), term_d_34);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  t_5 = t;
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_5 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(t_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
              w_0 = t;
              t = SSLsetAnnotations(w_0, f_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_5;
          }
        LocalPopChoice(h_34);
        t = xtc_transform_file_2_0(p_3, s_3, t);
      }
    else
      {
        t = g_34;
        t = xtc_transform_term_2_0(u_3, e_4, t);
      }
    t = if_keep1_1_0(f_4, t);
    s_5 = t;
    {
      ATerm i_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              m_6 = ATgetArgument(t, 0);
              {
                ATerm a_4 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(s_5);
                a_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
                y_0 = t;
                t = SSLsetAnnotations(y_0, a_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = s_5;
            }
          LocalPopChoice(k_34);
          t = xtc_transform_file_2_0(m_4, n_4, t);
        }
      else
        {
          t = i_34;
          t = xtc_transform_term_2_0(o_4, q_4, t);
        }
      t = if_keep1_1_0(r_4, t);
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm b_6 = NULL;
  t = pass_verbose_0_0(t);
  b_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_d_34);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_d_34);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = save_as_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_d_34);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_d_34);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = save_as_1_0(d_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(y_5, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = save_as_1_0(z_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_d_34);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm a_7 = NULL;
  t = pass_verbose_0_0(t);
  a_7 = t;
  t = (ATerm) ATinsert(CheckATermList(a_7), term_d_34);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = get_outfile_1_0(n_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(w_2, t);
  t = profile_p__2_0(x_2, c_3, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm p_7 = NULL;
  p_7 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_7, term_f_34);
        t = geq_0_0(t);
        t = p_7;
        t = p_97(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = p_7;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL,z_7 = NULL;
        t = w_7;
        t = l_105(t);
        y_7 = t;
        t = term_g_35;
        t = get_config_0_0(t);
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_7, y_7);
        t = geq_0_0(t);
        t = w_7;
        t = m_105(t);
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = w_7;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm g_6 = NULL;
  t = pass_verbose_0_0(t);
  g_6 = t;
  t = (ATerm) ATinsert(CheckATermList(g_6), term_d_34);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm h_6 = NULL;
  t = pass_verbose_0_0(t);
  h_6 = t;
  t = (ATerm) ATinsert(CheckATermList(h_6), term_d_34);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_d_34);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_d_34);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_9;
        {
          ATerm k_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_6 = ATgetArgument(t, 0);
                  {
                    ATerm t_6 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(p_9);
                    t_6 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, e_6);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, t_6);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_9;
                }
              LocalPopChoice(m_35);
              t = xtc_transform_file_2_0(p_6, r_6, t);
            }
          else
            {
              t = k_35;
              t = xtc_transform_term_2_0(s_6, u_6, t);
            }
        }
        ;
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = p_9;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  v_7 = ATgetArgument(t, 0);
                  {
                    ATerm h_8 = NULL,n_3 = NULL;
                    t = SSLgetAnnotations(p_9);
                    h_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, v_7);
                    n_3 = t;
                    t = SSLsetAnnotations(n_3, h_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_9;
                }
              LocalPopChoice(o_35);
              t = xtc_transform_file_2_0(v_6, w_6, t);
            }
          else
            {
              t = n_35;
              t = xtc_transform_term_2_0(y_6, b_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_10, term_r_35);
        t = geq_0_0(t);
        t = y_9;
        t = t_97(t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = y_9;
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  g_10 = t;
  t = term_s_35;
  e_10 = t;
  t = g_10;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = get_config_0_0(t);
        t = g_10;
        LocalPopChoice(u_35);
        t = (ATerm) ATinsert(ATempty, term_w_35);
      }
    else
      {
        t = t_35;
        t = (ATerm) ATempty;
      }
    f_10 = t;
    t = g_10;
    t = comp_0_2(e_10, f_10, t);
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm i_10 = NULL;
  i_10 = t;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, term_b_36);
        t = geq_0_0(t);
        t = i_10;
        t = s_97(t);
        ;
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = i_10;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, term_e_36);
        t = geq_0_0(t);
        t = q_10;
        t = u_97(t);
        ;
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = q_10;
      }
  }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  t = term_r_30;
  h_14 = t;
  t = (ATerm) ATinsert(ATempty, term_f_36);
  i_14 = t;
  t = SSL_printnl(h_14, i_14);
  t = g_14;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm o_14 = NULL;
  t = if_verbose3_1_0(h_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = olevel_2_0(x_7, a_8, t);
  t = olevel_2_0(m_8, n_8, t);
  o_14 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_17 = ATgetArgument(t, 0);
            {
              ATerm g_11 = NULL,u_4 = NULL;
              t = SSLgetAnnotations(o_14);
              g_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_17);
              u_4 = t;
              t = SSLsetAnnotations(u_4, g_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_14;
          }
        LocalPopChoice(h_36);
        t = xtc_transform_file_2_0(u_9, w_9, t);
      }
    else
      {
        t = g_36;
        t = xtc_transform_term_2_0(z_9, c_10, t);
      }
    t = olevel_2_0(d_10, h_10, t);
    t = olevel_2_0(e_11, f_11, t);
    t = olevel_2_0(u_11, v_11, t);
    t = olevel_2_0(h_12, q_12, t);
    t = olevel_2_0(y_14, a_15, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL;
  j_14 = t;
  t = term_r_30;
  k_14 = t;
  t = (ATerm) ATinsert(CheckATermList(j_14), term_i_36);
  n_14 = t;
  t = SSL_printnl(k_14, n_14);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(CheckATermList(j_14), term_i_36));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = term_g_35;
  t = get_config_0_0(t);
  t = debug_1_0(i_7, t);
  t = p_14;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_14 = ATgetArgument(t, 0);
            {
              ATerm l_8 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(r_14);
              l_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_14);
              q_3 = t;
              t = SSLsetAnnotations(q_3, l_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_14;
          }
        LocalPopChoice(o_36);
        t = xtc_transform_file_2_0(l_7, m_7, t);
      }
    else
      {
        t = n_36;
        t = xtc_transform_term_2_0(o_7, q_7, t);
      }
    t = if_keep1_1_0(s_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm z_14 = NULL;
  t = pass_verbose_0_0(t);
  z_14 = t;
  t = (ATerm) ATinsert(CheckATermList(z_14), term_d_34);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm c_15 = NULL;
  t = pass_verbose_0_0(t);
  c_15 = t;
  t = (ATerm) ATinsert(CheckATermList(c_15), term_d_34);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = save_as_1_0(u_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_15;
        {
          ATerm u_36 = t;
          if((PushChoice() == 0))
            {
              t = term_v_36;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_36;
            }
          t = p_15;
          {
            ATerm w_36 = t;
            int x_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_9 = ATgetArgument(t, 0);
                    {
                      ATerm k_10 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(p_15);
                      k_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_9);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, k_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_15;
                  }
                LocalPopChoice(x_36);
                t = xtc_transform_file_2_0(b_8, f_8, t);
              }
            else
              {
                t = w_36;
                t = xtc_transform_term_2_0(g_8, i_8, t);
              }
            t = if_keep2_1_0(j_8, t);
          }
        }
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = p_15;
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm v_9 = NULL;
  t = pass_verbose_0_0(t);
  v_9 = t;
  t = (ATerm) ATinsert(CheckATermList(v_9), term_d_34);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm x_9 = NULL;
  t = pass_verbose_0_0(t);
  x_9 = t;
  t = (ATerm) ATinsert(CheckATermList(x_9), term_d_34);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = save_as_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL;
  v_15 = t;
  {
    ATerm a_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_16 = ATgetArgument(t, 0);
            {
              ATerm u_10 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(v_15);
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_16);
              w_3 = t;
              t = SSLsetAnnotations(w_3, u_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_15;
          }
        LocalPopChoice(e_37);
        t = xtc_transform_file_2_0(o_8, s_8, t);
      }
    else
      {
        t = a_37;
        t = xtc_transform_term_2_0(t_8, u_8, t);
      }
    t = if_keep6_1_0(v_8, t);
    u_15 = t;
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_16 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              m_16 = ATgetArgument(t, 0);
              {
                ATerm y_10 = NULL,s_4 = NULL;
                t = SSLgetAnnotations(u_15);
                y_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_16);
                s_4 = t;
                t = SSLsetAnnotations(s_4, y_10);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = u_15;
            }
          LocalPopChoice(h_37);
          t = xtc_transform_file_2_0(i_9, j_9, t);
        }
      else
        {
          t = g_37;
          t = xtc_transform_term_2_0(k_9, l_9, t);
        }
      t = dead_def_elim_0_0(t);
      t = if_keep4_1_0(m_9, t);
      r_15 = t;
      {
        ATerm m_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_16 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                w_16 = ATgetArgument(t, 0);
                {
                  ATerm c_11 = NULL,t_4 = NULL;
                  t = SSLgetAnnotations(r_15);
                  c_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, w_16);
                  t_4 = t;
                  t = SSLsetAnnotations(t_4, c_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_15;
              }
            LocalPopChoice(o_37);
            t = xtc_transform_file_2_0(o_9, q_9, t);
          }
        else
          {
            t = m_37;
            t = xtc_transform_term_2_0(s_9, t_9, t);
          }
      }
    }
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm e_16 = NULL;
  t = pass_verbose_0_0(t);
  e_16 = t;
  t = (ATerm) ATinsert(CheckATermList(e_16), term_d_34);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm f_16 = NULL;
  t = pass_verbose_0_0(t);
  f_16 = t;
  t = (ATerm) ATinsert(CheckATermList(f_16), term_d_34);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = save_as_1_0(g_9, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm o_16 = NULL;
  t = pass_verbose_0_0(t);
  o_16 = t;
  t = (ATerm) ATinsert(CheckATermList(o_16), term_d_34);
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm p_16 = NULL;
  t = pass_verbose_0_0(t);
  p_16 = t;
  t = (ATerm) ATinsert(CheckATermList(p_16), term_d_34);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = save_as_1_0(n_9, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm y_16 = NULL;
  t = pass_verbose_0_0(t);
  y_16 = t;
  t = (ATerm) ATinsert(CheckATermList(y_16), term_d_34);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm b_17 = NULL;
  t = pass_verbose_0_0(t);
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(b_17), term_d_34);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm i_17 = NULL;
  t = pass_verbose_0_0(t);
  i_17 = t;
  t = (ATerm) ATinsert(CheckATermList(i_17), term_d_34);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm j_17 = NULL;
  t = pass_verbose_0_0(t);
  j_17 = t;
  t = (ATerm) ATinsert(CheckATermList(j_17), term_d_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_17 = ATgetArgument(t, 0);
            {
              ATerm k_11 = NULL,v_4 = NULL;
              t = SSLgetAnnotations(m_17);
              k_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_17);
              v_4 = t;
              t = SSLsetAnnotations(v_4, k_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_17;
          }
        LocalPopChoice(a_38);
        t = xtc_transform_file_2_0(j_10, l_10, t);
      }
    else
      {
        t = z_37;
        t = xtc_transform_term_2_0(m_10, o_10, t);
      }
    t = bound_unbound_vars_0_0(t);
    l_17 = t;
    {
      ATerm c_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              a_18 = ATgetArgument(t, 0);
              {
                ATerm o_11 = NULL,w_4 = NULL;
                t = SSLgetAnnotations(l_17);
                o_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_18);
                w_4 = t;
                t = SSLsetAnnotations(w_4, o_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_17;
            }
          LocalPopChoice(e_38);
          t = xtc_transform_file_2_0(p_10, r_10, t);
        }
      else
        {
          t = c_38;
          t = xtc_transform_term_2_0(t_10, v_10, t);
        }
      k_17 = t;
      {
        ATerm j_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_18 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                l_18 = ATgetArgument(t, 0);
                {
                  ATerm s_11 = NULL,x_4 = NULL;
                  t = SSLgetAnnotations(k_17);
                  s_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, l_18);
                  x_4 = t;
                  t = SSLsetAnnotations(x_4, s_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_17;
              }
            LocalPopChoice(m_38);
            t = xtc_transform_file_2_0(w_10, x_10, t);
          }
        else
          {
            t = j_38;
            t = xtc_transform_term_2_0(z_10, a_11, t);
          }
        t = if_keep4_1_0(b_11, t);
      }
    }
  }
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm u_17 = NULL;
  t = pass_verbose_0_0(t);
  u_17 = t;
  t = (ATerm) ATinsert(CheckATermList(u_17), term_d_34);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm w_17 = NULL;
  t = pass_verbose_0_0(t);
  w_17 = t;
  t = (ATerm) ATinsert(CheckATermList(w_17), term_d_34);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm e_18 = NULL;
  t = pass_verbose_0_0(t);
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(e_18), term_d_34);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm f_18 = NULL;
  t = pass_verbose_0_0(t);
  f_18 = t;
  t = (ATerm) ATinsert(CheckATermList(f_18), term_d_34);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm n_18 = NULL;
  t = pass_verbose_0_0(t);
  n_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_d_34);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm o_18 = NULL;
  t = pass_verbose_0_0(t);
  o_18 = t;
  t = (ATerm) ATinsert(CheckATermList(o_18), term_d_34);
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  q_18 = t;
  {
    ATerm t_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_18 = ATgetArgument(t, 0);
            {
              ATerm w_11 = NULL,z_4 = NULL;
              t = SSLgetAnnotations(q_18);
              w_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
              z_4 = t;
              t = SSLsetAnnotations(z_4, w_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_18;
          }
        LocalPopChoice(w_38);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = t_38;
        t = xtc_transform_term_2_0(j_11, l_11, t);
      }
    p_18 = t;
    {
      ATerm x_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_19 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              s_19 = ATgetArgument(t, 0);
              {
                ATerm a_12 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(p_18);
                a_12 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_19);
                a_5 = t;
                t = SSLsetAnnotations(a_5, a_12);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_18;
            }
          LocalPopChoice(y_38);
          t = xtc_transform_file_2_0(m_11, n_11, t);
        }
      else
        {
          t = x_38;
          t = xtc_transform_term_2_0(p_11, q_11, t);
        }
      t = if_keep2_1_0(r_11, t);
    }
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm h_19 = NULL;
  t = pass_verbose_0_0(t);
  h_19 = t;
  t = (ATerm) ATinsert(CheckATermList(h_19), term_d_34);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm i_19 = NULL;
  t = pass_verbose_0_0(t);
  i_19 = t;
  t = (ATerm) ATinsert(CheckATermList(i_19), term_d_34);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm u_19 = NULL;
  t = pass_verbose_0_0(t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), term_d_34);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm v_19 = NULL;
  t = pass_verbose_0_0(t);
  v_19 = t;
  t = (ATerm) ATinsert(CheckATermList(v_19), term_d_34);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm y_19 = NULL;
  y_19 = t;
  {
    ATerm c_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_20 = ATgetArgument(t, 0);
            {
              ATerm e_12 = NULL,k_5 = NULL;
              t = SSLgetAnnotations(y_19);
              e_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_20);
              k_5 = t;
              t = SSLsetAnnotations(k_5, e_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_19;
          }
        LocalPopChoice(f_39);
        t = xtc_transform_file_2_0(x_11, y_11, t);
      }
    else
      {
        t = c_39;
        t = xtc_transform_term_2_0(z_11, b_12, t);
      }
    t = if_keep5_1_0(c_12, t);
    t = dead_def_elim_0_0(t);
    t = if_keep5_1_0(f_12, t);
  }
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm g_20 = NULL;
  t = pass_verbose_0_0(t);
  g_20 = t;
  t = (ATerm) ATinsert(CheckATermList(g_20), term_d_34);
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_d_34);
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = save_as_1_0(d_12, t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,m_20 = NULL;
  m_20 = t;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            r_20 = ATgetArgument(t, 0);
            {
              ATerm i_12 = NULL,l_5 = NULL;
              t = SSLgetAnnotations(m_20);
              i_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_20);
              l_5 = t;
              t = SSLsetAnnotations(l_5, i_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_20;
          }
        LocalPopChoice(p_39);
        t = xtc_transform_file_2_0(u_12, w_12, t);
      }
    else
      {
        t = o_39;
        t = xtc_transform_term_2_0(b_13, p_13, t);
      }
    t = if_keep3_1_0(s_13, t);
    j_20 = t;
    {
      ATerm r_39 = t;
      int s_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              g_21 = ATgetArgument(t, 0);
              {
                ATerm a_13 = NULL,m_5 = NULL;
                t = SSLgetAnnotations(j_20);
                a_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_21);
                m_5 = t;
                t = SSLsetAnnotations(m_5, a_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = j_20;
            }
          LocalPopChoice(s_39);
          t = xtc_transform_file_2_0(v_13, w_13, t);
        }
      else
        {
          t = r_39;
          t = xtc_transform_term_2_0(y_13, z_13, t);
        }
      t = if_keep3_1_0(a_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(d_14, t);
      i_20 = t;
      {
        ATerm x_39 = t;
        int y_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                t_21 = ATgetArgument(t, 0);
                {
                  ATerm t_13 = NULL,u_5 = NULL;
                  t = SSLgetAnnotations(i_20);
                  t_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, t_21);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, t_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_20;
              }
            LocalPopChoice(y_39);
            t = xtc_transform_file_2_0(f_14, m_14, t);
          }
        else
          {
            t = x_39;
            t = xtc_transform_term_2_0(q_14, s_14, t);
          }
        t = if_keep3_1_0(v_14, t);
      }
    }
  }
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm u_20 = NULL;
  t = pass_verbose_0_0(t);
  u_20 = t;
  t = (ATerm) ATinsert(CheckATermList(u_20), term_d_34);
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_d_34);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = save_as_1_0(u_13, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm i_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(i_21), term_d_34);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_d_34);
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = save_as_1_0(c_14, t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = save_as_1_0(e_14, t);
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm w_21 = NULL;
  t = pass_verbose_0_0(t);
  w_21 = t;
  t = (ATerm) ATinsert(CheckATermList(w_21), term_d_34);
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_d_34);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = save_as_1_0(w_14, t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_d_40;
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  a_22 = t;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_22 = ATgetArgument(t, 0);
            {
              ATerm x_13 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(a_22);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
              v_5 = t;
              t = SSLsetAnnotations(v_5, x_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_22;
          }
        LocalPopChoice(f_40);
        t = xtc_transform_file_2_0(b_15, d_15, t);
      }
    else
      {
        t = e_40;
        t = xtc_transform_term_2_0(e_15, g_15, t);
      }
    t = if_keep1_1_0(i_15, t);
    z_21 = t;
    {
      ATerm h_40 = t;
      int i_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              q_22 = ATgetArgument(t, 0);
              {
                ATerm b_14 = NULL,w_5 = NULL;
                t = SSLgetAnnotations(z_21);
                b_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_22);
                w_5 = t;
                t = SSLsetAnnotations(w_5, b_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = z_21;
            }
          LocalPopChoice(i_40);
          t = xtc_transform_file_2_0(n_15, q_15, t);
        }
      else
        {
          t = h_40;
          t = xtc_transform_term_2_0(s_15, t_15, t);
        }
      t = if_keep1_1_0(w_15, t);
    }
  }
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_d_34);
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_d_34);
  return(t);
}
ATerm i_15 (ATerm t)
{
  t = save_as_1_0(k_15, t);
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm t_22 = NULL;
  t = pass_verbose_0_0(t);
  t_22 = t;
  t = (ATerm) ATinsert(CheckATermList(t_22), term_d_34);
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm u_22 = NULL;
  t = pass_verbose_0_0(t);
  u_22 = t;
  t = (ATerm) ATinsert(CheckATermList(u_22), term_d_34);
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = save_as_1_0(x_15, t);
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_l_40;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(c_7, t);
  t = profile_p__2_0(d_7, f_7, t);
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm m_24 = NULL;
  t = pass_verbose_0_0(t);
  m_24 = t;
  t = (ATerm) ATinsert(CheckATermList(m_24), term_n_40);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm n_24 = NULL;
  t = pass_verbose_0_0(t);
  n_24 = t;
  t = (ATerm) ATinsert(CheckATermList(n_24), term_n_40);
  return(t);
}
ATerm save_as_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  {
    ATerm z_15 (ATerm t)
    {
      t = get_outfile_1_0(i_74, t);
      if(((a_24 != NULL) && (a_24 != t)))
        _fail(t);
      else
        a_24 = t;
      return(t);
    }
    t = copy_to_1_0(z_15, t);
    {
      ATerm o_40 = t;
      int q_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_24 = NULL,l_24 = NULL;
          l_24 = t;
          if(match_cons(t, sym_FILE_1))
            {
              k_24 = ATgetArgument(t, 0);
              {
                ATerm l_14 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(l_24);
                l_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_24);
                n_7 = t;
                t = SSLsetAnnotations(n_7, l_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_24;
            }
          LocalPopChoice(q_40);
          t = xtc_transform_file_2_0(b_16, c_16, t);
        }
      else
        {
          t = o_40;
          t = xtc_transform_term_2_0(d_16, h_16, t);
        }
      {
        ATerm i_16 (ATerm t)
        {
          ATerm o_24 = NULL;
          t = term_r_40;
          o_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_24), term_r_40);
          t = r_13(not_null(a_24), o_24, t);
          if(((b_24 != NULL) && (b_24 != t)))
            _fail(t);
          else
            b_24 = t;
          return(t);
        }
        t = copy_to_1_0(i_16, t);
        t = term_r_30;
        d_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_24)), term_t_40), not_null(a_24)), term_s_40));
        e_24 = t;
        t = SSL_printnl(d_24, e_24);
        t = c_24;
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        t_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, term_q_30);
        t = geq_0_0(t);
        t = r_24;
        t = q_97(t);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        t = r_24;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  t = term_p_30;
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
        t = term_f_34;
      }
    w_24 = t;
    t = term_f_34;
    y_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_24, term_f_34);
    t = x_12(w_24, y_24, t);
    x_24 = t;
    t = SSL_int_to_string(x_24);
    v_24 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, v_24), term_p_30);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(e_105, f_105, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm p_12 (ATerm c_45, ATerm d_45, ATerm t)
{
  t = SSL_execvp(c_45, d_45);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_25 = ATgetArgument(t, 0);
      {
        ATerm l_15 = NULL,m_15 = NULL;
        t = SSL_int_to_string(v_25);
        l_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_40), l_15), term_y_40);
        m_15 = t;
        t = SSL_concat_strings(m_15);
      }
    }
  else
    {
      ATerm u_16 = NULL,v_16 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_25 = ATgetArgument(t, 0);
          w_25 = ATgetArgument(t, 1);
          x_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_25);
      u_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_25), term_b_41), u_16), term_a_41), v_25);
      v_16 = t;
      t = SSL_concat_strings(v_16);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm c_26 = NULL;
  ATerm j_16 (ATerm t)
  {
    t = s_82(t);
    if(((c_26 != NULL) && (c_26 != t)))
      _fail(t);
    else
      c_26 = t;
    return(t);
  }
  t = fetch_1_0(j_16, t);
  t = not_null(c_26);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_41 = ATgetArgument(t, 0);
              if((g_26 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_41 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_47), term_f_47), term_b_47), term_u_46), term_r_46), term_v_45), term_r_45), term_k_45), term_g_45), term_z_44), term_v_44), term_r_44), term_n_44), term_j_44), term_x_43), term_t_43), term_p_43), term_m_43), term_i_43), term_d_43), term_x_42), term_p_42), term_l_42), term_c_42), term_x_41), term_t_41), term_p_41), term_j_41);
        t = fetch_elem_1_0(l_16, t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_26);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_26 = NULL,y_26 = NULL;
  n_26 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_47 = ATgetArgument(t, 0);
            y_26 = ATgetArgument(t, 1);
            {
              ATerm r_47 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_47);
        {
          ATerm t_47 = t;
          int u_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_17 = NULL,c_18 = NULL,j_18 = NULL;
              t = y_26;
              {
                ATerm v_47 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_47;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                v_17 = t;
                t = term_r_30;
                c_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, v_17), term_x_47);
                j_18 = t;
                t = SSL_printnl(c_18, j_18);
                t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATempty, v_17), term_x_47));
              }
              ;
              LocalPopChoice(u_47);
            }
          else
            {
              t = t_47;
              t = n_26;
            }
        }
      }
    else
      {
        t = n_47;
        t = n_26;
      }
    t = n_26;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  n_27 = t;
  t = fork_0_0(t);
  m_27 = t;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_27;
        t = a_98(t);
        ;
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
        t = SSL_waitpid(m_27);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_48 = ATgetArgument(t, 0);
            if(((ATgetType(a_48) != AT_INT) || (ATgetInt((ATermInt) a_48) != 0)))
              _fail(t);
            {
              ATerm b_48 = ATgetArgument(t, 1);
            }
            {
              ATerm c_48 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_27;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  v_27 = t;
  t = v_104(t);
  t = xtc_find_0_0(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
  {
    ATerm n_16 (ATerm t)
    {
      ATerm w_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
      t = p_12(u_27, v_27, t);
      t = term_a_31;
      w_27 = t;
      t = SSL_exit(w_27);
      return(t);
    }
    t = fork_and_wait_1_0(n_16, t);
    t = v_27;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_18 = NULL,b_19 = NULL;
      t = w_28;
      t = xtc_new_file_0_0(t);
      s_18 = t;
      t = p_0(t);
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_19, (ATerm) ATinsert(ATinsert(ATempty, s_18), term_x_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(s_18);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_18);
    }
  else
    {
      ATerm k_19 = NULL,m_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_28;
      t = xtc_new_file_0_0(t);
      k_19 = t;
      t = p_0(t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_19), term_x_30), x_28), term_d_48));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(k_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_19);
    }
  return(t);
}
ATerm comp_0_2 (ATerm y_18, ATerm z_18, ATerm t)
{
  ATerm e_48 = t;
  int g_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_37 = NULL,c_37 = NULL;
      c_37 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_37 = ATgetArgument(t, 0);
          {
            ATerm a_26 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(c_37);
            a_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_37);
            t_7 = t;
            t = SSLsetAnnotations(t_7, a_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_37;
        }
      LocalPopChoice(g_48);
      {
        ATerm q_16 (ATerm t)
        {
          t = y_18;
          return(t);
        }
        ATerm r_16 (ATerm t)
        {
          ATerm d_37 = NULL;
          t = pass_verbose_0_0(t);
          d_37 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_18), d_37), (ATerm) ATinsert(ATempty, term_d_34));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(q_16, r_16, t);
      }
    }
  else
    {
      t = e_48;
      {
        ATerm t_16 (ATerm t)
        {
          t = y_18;
          return(t);
        }
        ATerm x_16 (ATerm t)
        {
          ATerm f_37 = NULL;
          t = pass_verbose_0_0(t);
          f_37 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_18), f_37), (ATerm) ATinsert(ATempty, term_d_34));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_16, x_16, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,f_29 = NULL;
  b_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_29;
      t = l_88(t);
    }
  else
    {
      ATerm i_29 = NULL,j_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          f_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      t = n_88(t);
      i_29 = t;
      t = f_29;
      t = foldr_3_0(l_88, m_88, n_88, t);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_29, j_29);
      t = m_88(t);
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_29), term_h_48);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_h_48;
  t = get_config_0_0(t);
  t = foldr_3_0(z_16, conc_0_0, a_17, t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_d_34);
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm j_21 = NULL;
  t = pass_verbose_0_0(t);
  j_21 = t;
  t = (ATerm) ATinsert(CheckATermList(j_21), term_d_34);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = get_outfile_1_0(s_17, t);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = term_j_48;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  {
    ATerm k_48 = t;
    int l_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL,s_20 = NULL,x_20 = NULL;
        t = term_m_48;
        t = get_config_0_0(t);
        t = s_30;
        {
          ATerm n_48 = t;
          int p_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_30;
              {
                ATerm q_48 = t;
                int s_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        b_21 = ATgetArgument(t, 0);
                        {
                          ATerm x_21 = NULL,e_8 = NULL;
                          t = SSLgetAnnotations(s_30);
                          x_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
                          e_8 = t;
                          t = SSLsetAnnotations(e_8, x_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = s_30;
                      }
                    LocalPopChoice(s_48);
                    t = xtc_transform_file_2_0(d_17, g_17, t);
                  }
                else
                  {
                    t = q_48;
                    t = xtc_transform_term_2_0(h_17, n_17, t);
                  }
              }
              ;
              LocalPopChoice(p_48);
            }
          else
            {
              t = n_48;
              {
                ATerm l_21 = NULL,n_21 = NULL,o_21 = NULL;
                t = term_r_30;
                n_21 = t;
                t = (ATerm) ATinsert(ATempty, term_t_48);
                o_21 = t;
                t = SSL_printnl(n_21, o_21);
                t = term_f_34;
                l_21 = t;
                t = SSL_exit(l_21);
                t = (ATerm) ATinsert(ATempty, term_t_48);
              }
            }
          t = copy_to_1_0(r_17, t);
          q_20 = t;
          t = term_r_30;
          s_20 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_48));
          x_20 = t;
          t = SSL_printnl(s_20, x_20);
          t = q_20;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(l_48);
      }
    else
      {
        t = k_48;
        t = s_30;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_49;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_49);
      ;
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      t = (ATerm) ATinsert(ATempty, term_c_49);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL;
        t = term_d_35;
        t = get_config_0_0(t);
        g_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_31, term_u_34);
        t = geq_0_0(t);
        t = c_31;
        t = r_97(t);
        ;
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = c_31;
      }
  }
  return(t);
}
ATerm m_12 (ATerm h_74 (ATerm), ATerm e_19, ATerm t)
{
  ATerm i_31 = NULL;
  t = term_z_31;
  t = h_74(t);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(e_19), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_j_49, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_31), (ATerm) ATempty))))));
  return(t);
}
ATerm n_12 (ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm j_31 = NULL;
  t = SSL_write_term_to_stream_baf(t_42, u_42);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_31);
  return(t);
}
ATerm o_12 (ATerm d_95 (ATerm), ATerm t_447, ATerm b_43, ATerm t)
{
  ATerm k_31 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_447, term_l_49);
  t = i_13(t);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_31, b_43);
  t = d_95(t);
  t = fclose_0_0(t);
  t = b_43;
  return(t);
}
ATerm r_12 (ATerm k_93 (ATerm), ATerm x_37, ATerm v_37, ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,t_31 = NULL,v_31 = NULL;
  p_31 = t;
  t = k_93(t);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_31, x_37, v_37);
  t = o_13(m_31, x_37, v_37, t);
  {
    ATerm o_49 = t;
    int p_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_31 = NULL;
        t = term_q_49;
        w_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_31, term_q_49);
        t = n_13(m_31, w_31, t);
        ;
        LocalPopChoice(p_49);
      }
    else
      {
        t = o_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_31 = ATgetFirst((ATermList) t);
        o_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_49;
    t_31 = t;
    t = (ATerm) ATinsert(CheckATermList(o_31), (ATerm) ATinsert(CheckATermList(n_31), x_37));
    v_31 = t;
    t = SSL_table_put(m_31, t_31, v_31);
    t = p_31;
  }
  return(t);
}
ATerm p_32 (ATerm a_32, ATerm t)
{
  t = a_32;
  {
    ATerm s_49 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_49 = ATgetArgument(t, 0);
            ATerm z_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_49;
      }
    t = term_c_50;
    t = debug_1_0(t_17, t);
    t = (ATerm) ATmakeAppl(sym__2, a_32, term_l_49);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_32 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm t)
{
  t = SSL_open_file(d_32, e_32);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_d_50;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_32 = NULL,n_32 = NULL,o_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
      {
        ATerm g_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_32(l_32, t);
            ;
            LocalPopChoice(h_50);
          }
        else
          {
            t = g_50;
            t = q_32(n_32, o_32, l_32, t);
          }
      }
    }
  else
    {
      t = p_32(l_32, t);
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
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t = term_z_31;
  t = new_0_0(t);
  t_32 = t;
  t = term_i_50;
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_32, term_i_50);
  t = r_13(t_32, u_32, t);
  v_32 = t;
  {
    ATerm k_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_50);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_32, (ATerm) ATinsert(ATempty, term_r_50));
        t = j_13(v_32, a_33, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = k_50;
        t = v_32;
      }
  }
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL;
  t = new_file_0_0(t);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, term_l_49);
  t = open_file_0_0(t);
  t = term_z_31;
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, term_z_31);
  t = r_12(x_17, e_33, f_33, t);
  t = e_33;
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_50 = ATgetArgument(t, 0);
      if(match_cons(u_50, sym_Stream_1))
        {
          j_33 = ATgetArgument(u_50, 0);
        }
      else
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(j_33, k_33, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  h_33 = t;
  t = xtc_new_file_0_0(t);
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_33, h_33);
  t = o_12(y_17, i_33, h_33, t);
  t = SSL_close_file(i_33);
  t = (ATerm) ATmakeAppl(sym_FILE_1, i_33);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_33 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_50;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          o_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_50);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATinsert(ATempty, term_r_50));
      t = j_13(o_33, t_33, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = g_105(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = debug_1_0(b_18, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = term_y_50;
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = save_as_1_0(i_18, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  x_33 = t;
  {
    ATerm b_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 (ATerm t)
        {
          ATerm b_34 = NULL;
          ATerm g_18 (ATerm t)
          {
            t = not_null(w_33);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              b_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_12(g_18, b_34, t);
          return(t);
        }
        t = term_f_51;
        t = get_config_0_0(t);
        if(((w_33 != NULL) && (w_33 != t)))
          _fail(t);
        else
          w_33 = t;
        t = if_verbose2_1_0(z_17, t);
        t = x_33;
        t = xtc_io_transform_1_0(d_18, t);
        ;
        LocalPopChoice(e_51);
      }
    else
      {
        t = b_51;
        t = x_33;
      }
    t = if_keep3_1_0(h_18, t);
  }
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  {
    ATerm g_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_34);
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = g_51;
        t = s_34;
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm j_34 = NULL,l_34 = NULL;
  ATerm k_18 (ATerm t)
  {
    ATerm m_34 = NULL,n_34 = NULL,p_34 = NULL;
    m_34 = t;
    t = term_s_50;
    n_34 = t;
    t = term_q_49;
    p_34 = t;
    t = term_l_51;
    t = n_13(n_34, p_34, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_34 != NULL) && (j_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_34 = ATgetFirst((ATermList) t);
        {
          ATerm m_51 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_34;
    t = map_1_0(m_18, t);
    t = m_34;
    t = end_scope_1_0(r_18, t);
    return(t);
  }
  t = repeat_1_0(k_18, t);
  l_34 = t;
  t = SSL_exit(l_34);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      t = term_h_32;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(t_18, t);
  t = term_k_30;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  ATerm w_34 = NULL,y_34 = NULL;
  t = g_74(t);
  w_34 = t;
  t = term_p_51;
  t = get_config_0_0(t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, w_34);
  t = r_13(y_34, w_34, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,x_35 = NULL;
  v_35 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_22 = NULL;
        t = v_35;
        t = r_0(t);
        z_22 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = z_22;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = z_22;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_35, z_22);
        t = z_12(x_35, z_22, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_35);
        ;
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        {
          ATerm s_51 = t;
          int t_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_23 = NULL;
              t = v_35;
              t = r_0(t);
              w_23 = t;
              {
                ATerm u_51 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_23 = NULL;
                    x_23 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_23;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_23;
                          }
                        else
                          {
                            t = x_23;
                            if((x_35 != t))
                              {
                                _fail(t);
                              }
                            t = x_23;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_51;
                  }
                t = (ATerm) ATmakeAppl(sym__2, x_35, w_23);
                t = z_12(x_35, w_23, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_35);
              }
              ;
              LocalPopChoice(t_51);
            }
          else
            {
              t = s_51;
              t = v_35;
              t = r_0(t);
              if((x_35 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_35);
            }
        }
      }
  }
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = get_outfile_1_0(v_18, t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_v_51;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
        t = term_y_51;
        t = get_config_0_0(t);
        t = m_36;
        t = copy_to_1_0(u_18, t);
        a_25 = t;
        t = term_r_30;
        b_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_51));
        c_25 = t;
        t = SSL_printnl(b_25, c_25);
        t = a_25;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        t = m_36;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  t = term_d_35;
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_52);
      }
    else
      {
        t = a_52;
        t = term_f_34;
      }
    j_37 = t;
    t = term_f_34;
    l_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_37, term_f_34);
    t = x_12(j_37, l_37, t);
    k_37 = t;
    t = SSL_int_to_string(k_37);
    i_37 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, i_37), term_d_35);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm n_37 = NULL,b_38 = NULL,d_38 = NULL,f_38 = NULL,h_38 = NULL,k_38 = NULL,l_38 = NULL;
  k_38 = t;
  t = term_d_52;
  n_37 = t;
  t = k_38;
  {
    ATerm e_52 = t;
    int f_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_52);
      }
    else
      {
        t = e_52;
        t = term_p_51;
        t = get_config_0_0(t);
      }
    l_38 = t;
    t = k_38;
    t = pass_keep_0_0(t);
    d_38 = t;
    t = term_g_52;
    t = get_config_0_0(t);
    f_38 = t;
    t = term_h_52;
    {
      ATerm l_52 = t;
      int m_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0_0(t);
          LocalPopChoice(m_52);
          t = (ATerm) ATinsert(ATempty, term_h_52);
        }
      else
        {
          t = l_52;
          t = (ATerm) ATempty;
        }
      h_38 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_38), d_38), f_38), (ATerm) ATinsert(ATinsert(ATempty, l_38), term_n_52));
      t = concat_0_0(t);
      b_38 = t;
      t = k_38;
      t = comp_0_2(n_37, b_38, t);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  {
    ATerm o_52 = t;
    int q_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_38 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        u_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_38, term_u_34);
        t = geq_0_0(t);
        t = o_38;
        t = p_96(t);
        ;
        LocalPopChoice(q_52);
      }
    else
      {
        t = o_52;
        t = o_38;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm j_39 = NULL,q_39 = NULL;
  q_39 = t;
  t = SSL_explode_string(q_39);
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_41 (ATerm t)
        {
          ATerm n_41 = NULL,o_41 = NULL,s_41 = NULL;
          n_41 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_41 = ATgetFirst((ATermList) t);
              s_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm u_52 = t;
            int v_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_26 = NULL,d_27 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(n_41);
                q_26 = t;
                t = s_41;
                t = w_41(t);
                d_27 = t;
                t = (ATerm) ATinsert(CheckATermList(d_27), o_41);
                p_8 = t;
                t = SSLsetAnnotations(p_8, q_26);
                ;
                LocalPopChoice(v_52);
              }
            else
              {
                t = u_52;
                {
                  ATerm a_53 = t;
                  int b_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_27 = NULL,q_8 = NULL;
                      t = SSLgetAnnotations(n_41);
                      o_27 = t;
                      t = o_41;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(s_41), o_41);
                      q_8 = t;
                      t = SSLsetAnnotations(q_8, o_27);
                      ;
                      LocalPopChoice(b_53);
                    }
                  else
                    {
                      t = a_53;
                      {
                        ATerm c_28 = NULL,g_28 = NULL,r_8 = NULL;
                        t = SSLgetAnnotations(n_41);
                        c_28 = t;
                        t = o_41;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = s_41;
                        t = g_91(t);
                        g_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_28), o_41);
                        r_8 = t;
                        t = SSLsetAnnotations(r_8, c_28);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = w_41(t);
        ;
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
      }
    j_39 = t;
    t = SSL_implode_string(j_39);
  }
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = debug_1_0(c_19, t);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_c_53;
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = debug_1_0(f_19, t);
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = term_d_53;
  return(t);
}
ATerm s_12 (ATerm a_19, ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,g_42 = NULL,i_42 = NULL;
  t = a_19;
  t = basename_1_0(_id, t);
  d_42 = t;
  t = if_verbose3_1_0(x_18, t);
  t = term_i_53;
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_53, d_42);
  t = q_13(i_42, d_42, t);
  {
    ATerm j_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_30;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = j_53;
        t = d_42;
      }
    e_42 = t;
    t = if_verbose3_1_0(d_19, t);
    t = term_p_51;
    g_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_51, e_42);
    t = q_13(g_42, e_42, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, d_42);
  }
  return(t);
}
ATerm g_19 (ATerm t)
{
  t = debug_1_0(n_19, t);
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = if_verbose1_1_0(q_19, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm q_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,o_46 = NULL,m_32 = NULL,r_32 = NULL,s_32 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      o_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(o_46, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm p_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 = NULL;
        q_46 = t;
        t = term_m_33;
        t = get_config_0_0(t);
        t = q_46;
        LocalPopChoice(s_53);
      }
    else
      {
        t = p_53;
        t = add_main_0_0(t);
      }
    m_46 = t;
    {
      ATerm u_53 = t;
      int v_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_46 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              v_46 = ATgetArgument(t, 0);
              {
                ATerm o_28 = NULL,w_8 = NULL;
                t = SSLgetAnnotations(m_46);
                o_28 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_46);
                w_8 = t;
                t = SSLsetAnnotations(w_8, o_28);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = m_46;
            }
          LocalPopChoice(v_53);
          t = xtc_transform_file_2_0(r_19, t_19, t);
        }
      else
        {
          t = u_53;
          t = xtc_transform_term_2_0(w_19, x_19, t);
        }
      l_46 = t;
      {
        ATerm w_53 = t;
        int x_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_47 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                g_47 = ATgetArgument(t, 0);
                {
                  ATerm d_29 = NULL,x_8 = NULL;
                  t = SSLgetAnnotations(l_46);
                  d_29 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, g_47);
                  x_8 = t;
                  t = SSLsetAnnotations(x_8, d_29);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_46;
              }
            LocalPopChoice(x_53);
            t = xtc_transform_file_2_0(z_19, a_20, t);
          }
        else
          {
            t = w_53;
            t = xtc_transform_term_2_0(b_20, d_20, t);
          }
        k_46 = t;
        {
          ATerm y_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_47 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  q_47 = ATgetArgument(t, 0);
                  {
                    ATerm q_29 = NULL,y_8 = NULL;
                    t = SSLgetAnnotations(k_46);
                    q_29 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_47);
                    y_8 = t;
                    t = SSLsetAnnotations(y_8, q_29);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = k_46;
                }
              LocalPopChoice(z_53);
              t = xtc_transform_file_2_0(e_20, f_20, t);
            }
          else
            {
              t = y_53;
              t = xtc_transform_term_2_0(k_20, l_20, t);
            }
          v_29 = t;
          t = term_a_54;
          t_29 = t;
          t = v_29;
          t = pass_maybe_unbound_warnings_0_0(t);
          u_29 = t;
          t = v_29;
          t = comp_0_2(t_29, u_29, t);
          j_46 = t;
          {
            ATerm b_54 = t;
            int c_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_48 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    f_48 = ATgetArgument(t, 0);
                    {
                      ATerm x_29 = NULL,z_8 = NULL;
                      t = SSLgetAnnotations(j_46);
                      x_29 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, f_48);
                      z_8 = t;
                      t = SSLsetAnnotations(z_8, x_29);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = j_46;
                  }
                LocalPopChoice(c_54);
                t = xtc_transform_file_2_0(n_20, o_20, t);
              }
            else
              {
                t = b_54;
                t = xtc_transform_term_2_0(p_20, t_20, t);
              }
            i_46 = t;
            {
              ATerm d_54 = t;
              int e_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_49 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      a_49 = ATgetArgument(t, 0);
                      {
                        ATerm n_30 = NULL,a_9 = NULL;
                        t = SSLgetAnnotations(i_46);
                        n_30 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, a_49);
                        a_9 = t;
                        t = SSLsetAnnotations(a_9, n_30);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = i_46;
                    }
                  LocalPopChoice(e_54);
                  t = xtc_transform_file_2_0(w_20, y_20, t);
                }
              else
                {
                  t = d_54;
                  t = xtc_transform_term_2_0(z_20, a_21, t);
                }
              y_45 = t;
              {
                ATerm f_54 = t;
                int i_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_49 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        k_49 = ATgetArgument(t, 0);
                        {
                          ATerm b_31 = NULL,b_9 = NULL;
                          t = SSLgetAnnotations(y_45);
                          b_31 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, k_49);
                          b_9 = t;
                          t = SSLsetAnnotations(b_9, b_31);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = y_45;
                      }
                    LocalPopChoice(i_54);
                    t = xtc_transform_file_2_0(c_21, d_21, t);
                  }
                else
                  {
                    t = f_54;
                    t = xtc_transform_term_2_0(f_21, h_21, t);
                  }
                x_45 = t;
                {
                  ATerm j_54 = t;
                  int l_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_49 = NULL;
                      if(match_cons(t, sym_FILE_1))
                        {
                          r_49 = ATgetArgument(t, 0);
                          {
                            ATerm q_31 = NULL,c_9 = NULL;
                            t = SSLgetAnnotations(x_45);
                            q_31 = t;
                            t = (ATerm) ATmakeAppl(sym_FILE_1, r_49);
                            c_9 = t;
                            t = SSLsetAnnotations(c_9, q_31);
                          }
                        }
                      else
                        {
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                          t = x_45;
                        }
                      LocalPopChoice(l_54);
                      t = xtc_transform_file_2_0(m_21, p_21, t);
                    }
                  else
                    {
                      t = j_54;
                      t = xtc_transform_term_2_0(q_21, r_21, t);
                    }
                  t = output_frontend_0_0(t);
                  {
                    ATerm m_54 = t;
                    int o_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_50 = NULL;
                        a_50 = t;
                        t = term_m_33;
                        t = get_config_0_0(t);
                        t = a_50;
                        LocalPopChoice(o_54);
                        {
                          ATerm b_50 = NULL;
                          b_50 = t;
                          {
                            ATerm p_54 = t;
                            int q_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_50 = NULL;
                                if(match_cons(t, sym_FILE_1))
                                  {
                                    j_50 = ATgetArgument(t, 0);
                                    {
                                      ATerm x_31 = NULL,d_9 = NULL;
                                      t = SSLgetAnnotations(b_50);
                                      x_31 = t;
                                      t = (ATerm) ATmakeAppl(sym_FILE_1, j_50);
                                      d_9 = t;
                                      t = SSLsetAnnotations(d_9, x_31);
                                    }
                                  }
                                else
                                  {
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                    t = b_50;
                                  }
                                LocalPopChoice(q_54);
                                t = xtc_transform_file_2_0(s_21, u_21, t);
                              }
                            else
                              {
                                t = p_54;
                                t = xtc_transform_term_2_0(v_21, b_22, t);
                              }
                          }
                        }
                      }
                    else
                      {
                        t = m_54;
                        {
                          ATerm n_50 = NULL;
                          n_50 = t;
                          {
                            ATerm r_54 = t;
                            int s_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm t_50 = NULL;
                                if(match_cons(t, sym_FILE_1))
                                  {
                                    t_50 = ATgetArgument(t, 0);
                                    {
                                      ATerm g_32 = NULL,e_9 = NULL;
                                      t = SSLgetAnnotations(n_50);
                                      g_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_FILE_1, t_50);
                                      e_9 = t;
                                      t = SSLsetAnnotations(e_9, g_32);
                                    }
                                  }
                                else
                                  {
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                    t = n_50;
                                  }
                                LocalPopChoice(s_54);
                                t = xtc_transform_file_2_0(c_22, d_22, t);
                              }
                            else
                              {
                                t = r_54;
                                t = xtc_transform_term_2_0(e_22, g_22, t);
                              }
                            t = if_keep2_1_0(h_22, t);
                          }
                        }
                      }
                    s_32 = t;
                    t = term_u_54;
                    m_32 = t;
                    t = s_32;
                    t = pass_warnings_0_0(t);
                    r_32 = t;
                    t = s_32;
                    t = comp_0_2(m_32, r_32, t);
                    w_45 = t;
                    {
                      ATerm v_54 = t;
                      int w_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_51 = NULL;
                          if(match_cons(t, sym_FILE_1))
                            {
                              a_51 = ATgetArgument(t, 0);
                              {
                                ATerm y_32 = NULL,f_9 = NULL;
                                t = SSLgetAnnotations(w_45);
                                y_32 = t;
                                t = (ATerm) ATmakeAppl(sym_FILE_1, a_51);
                                f_9 = t;
                                t = SSLsetAnnotations(f_9, y_32);
                              }
                            }
                          else
                            {
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                              t = w_45;
                            }
                          LocalPopChoice(w_54);
                          t = xtc_transform_file_2_0(j_22, l_22, t);
                        }
                      else
                        {
                          t = v_54;
                          t = xtc_transform_term_2_0(n_22, o_22, t);
                        }
                      q_45 = t;
                      {
                        ATerm x_54 = t;
                        int z_54 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_51 = NULL;
                            if(match_cons(t, sym_FILE_1))
                              {
                                h_51 = ATgetArgument(t, 0);
                                {
                                  ATerm l_33 = NULL,h_9 = NULL;
                                  t = SSLgetAnnotations(q_45);
                                  l_33 = t;
                                  t = (ATerm) ATmakeAppl(sym_FILE_1, h_51);
                                  h_9 = t;
                                  t = SSLsetAnnotations(h_9, l_33);
                                }
                              }
                            else
                              {
                                if(!(match_cons(t, sym_stdin_0)))
                                  _fail(t);
                                t = q_45;
                              }
                            LocalPopChoice(z_54);
                            t = xtc_transform_file_2_0(p_22, r_22, t);
                          }
                        else
                          {
                            t = x_54;
                            t = xtc_transform_term_2_0(s_22, v_22, t);
                          }
                        t = if_keep2_1_0(w_22, t);
                      }
                    }
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
ATerm q_19 (ATerm t)
{
  ATerm a_45 = NULL,o_45 = NULL,p_45 = NULL;
  a_45 = t;
  t = term_r_30;
  o_45 = t;
  t = (ATerm) ATinsert(CheckATermList(a_45), term_a_55);
  p_45 = t;
  t = SSL_printnl(o_45, p_45);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(CheckATermList(a_45), term_a_55));
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = term_b_55;
  return(t);
}
ATerm t_19 (ATerm t)
{
  ATerm x_46 = NULL;
  t = pass_verbose_0_0(t);
  x_46 = t;
  t = (ATerm) ATinsert(CheckATermList(x_46), term_d_34);
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = term_b_55;
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm a_47 = NULL;
  t = pass_verbose_0_0(t);
  a_47 = t;
  t = (ATerm) ATinsert(CheckATermList(a_47), term_d_34);
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm i_47 = NULL;
  t = pass_verbose_0_0(t);
  i_47 = t;
  t = (ATerm) ATinsert(CheckATermList(i_47), term_d_34);
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm j_47 = NULL;
  t = pass_verbose_0_0(t);
  j_47 = t;
  t = (ATerm) ATinsert(CheckATermList(j_47), term_d_34);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm s_47 = NULL;
  t = pass_verbose_0_0(t);
  s_47 = t;
  t = (ATerm) ATinsert(CheckATermList(s_47), term_d_34);
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = term_g_55;
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm w_47 = NULL;
  t = pass_verbose_0_0(t);
  w_47 = t;
  t = (ATerm) ATinsert(CheckATermList(w_47), term_d_34);
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm o_48 = NULL;
  t = pass_verbose_0_0(t);
  o_48 = t;
  t = (ATerm) ATinsert(CheckATermList(o_48), term_d_34);
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm r_48 = NULL;
  t = pass_verbose_0_0(t);
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), term_d_34);
  return(t);
}
ATerm w_20 (ATerm t)
{
  t = term_j_55;
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm f_49 = NULL;
  t = pass_verbose_0_0(t);
  f_49 = t;
  t = (ATerm) ATinsert(CheckATermList(f_49), term_d_34);
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = term_j_55;
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm g_49 = NULL;
  t = pass_verbose_0_0(t);
  g_49 = t;
  t = (ATerm) ATinsert(CheckATermList(g_49), term_d_34);
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_k_55;
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm m_49 = NULL;
  t = pass_verbose_0_0(t);
  m_49 = t;
  t = (ATerm) ATinsert(CheckATermList(m_49), term_d_34);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_k_55;
  return(t);
}
ATerm h_21 (ATerm t)
{
  ATerm n_49 = NULL;
  t = pass_verbose_0_0(t);
  n_49 = t;
  t = (ATerm) ATinsert(CheckATermList(n_49), term_d_34);
  return(t);
}
ATerm m_21 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm p_21 (ATerm t)
{
  ATerm t_49 = NULL;
  t = pass_verbose_0_0(t);
  t_49 = t;
  t = (ATerm) ATinsert(CheckATermList(t_49), term_d_34);
  return(t);
}
ATerm q_21 (ATerm t)
{
  t = term_l_55;
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm u_49 = NULL;
  t = pass_verbose_0_0(t);
  u_49 = t;
  t = (ATerm) ATinsert(CheckATermList(u_49), term_d_34);
  return(t);
}
ATerm s_21 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm u_21 (ATerm t)
{
  ATerm l_50 = NULL;
  t = pass_verbose_0_0(t);
  l_50 = t;
  t = (ATerm) ATinsert(CheckATermList(l_50), term_d_34);
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm m_50 = NULL;
  t = pass_verbose_0_0(t);
  m_50 = t;
  t = (ATerm) ATinsert(CheckATermList(m_50), term_d_34);
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = term_m_55;
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm v_50 = NULL;
  t = pass_verbose_0_0(t);
  v_50 = t;
  t = (ATerm) ATinsert(CheckATermList(v_50), term_d_34);
  return(t);
}
ATerm e_22 (ATerm t)
{
  t = term_m_55;
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm w_50 = NULL;
  t = pass_verbose_0_0(t);
  w_50 = t;
  t = (ATerm) ATinsert(CheckATermList(w_50), term_d_34);
  return(t);
}
ATerm h_22 (ATerm t)
{
  t = save_as_1_0(i_22, t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  t = term_o_55;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm c_51 = NULL;
  t = pass_verbose_0_0(t);
  c_51 = t;
  t = (ATerm) ATinsert(CheckATermList(c_51), term_d_34);
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm d_51 = NULL;
  t = pass_verbose_0_0(t);
  d_51 = t;
  t = (ATerm) ATinsert(CheckATermList(d_51), term_d_34);
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = term_u_55;
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm j_51 = NULL;
  t = pass_verbose_0_0(t);
  j_51 = t;
  t = (ATerm) ATinsert(CheckATermList(j_51), term_d_34);
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = term_u_55;
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm k_51 = NULL;
  t = pass_verbose_0_0(t);
  k_51 = t;
  t = (ATerm) ATinsert(CheckATermList(k_51), term_d_34);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = save_as_1_0(x_22, t);
  return(t);
}
ATerm x_22 (ATerm t)
{
  t = term_v_55;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(g_19, t);
  t = profile_p__2_0(o_19, p_19, t);
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm x_55 = t;
  int a_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_56);
    }
  else
    {
      t = x_55;
    }
  return(t);
}
ATerm a_23 (ATerm t)
{
  t = term_b_56;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_52 = NULL;
      c_52 = t;
      t = SSL_is_string(c_52);
      ;
      LocalPopChoice(n_56);
    }
  else
    {
      t = f_56;
      {
        ATerm o_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_22, t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = o_56;
            {
              ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
              i_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_52 = ATgetArgument(t, 0);
                  t = j_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_52 = ATgetArgument(t, 0);
                      t = j_52;
                      {
                        ATerm t_56 = t;
                        int u_56 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_56);
                          }
                        else
                          {
                            t = t_56;
                            t = debug_1_0(a_23, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_52 = NULL,r_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_52 = ATgetArgument(t, 0);
                          k_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_52;
                      t = eval_config_0_0(t);
                      p_52 = t;
                      t = k_52;
                      t = eval_config_0_0(t);
                      r_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_52, r_52);
                      t = r_13(p_52, r_52, t);
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
  ATerm w_52 = NULL,x_52 = NULL;
  w_52 = t;
  t = term_w_56;
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_56, w_52);
  t = n_13(x_52, w_52, t);
  {
    ATerm x_56 = t;
    int y_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_52 = NULL,z_52 = NULL;
        t = eval_config_0_0(t);
        y_52 = t;
        t = term_w_56;
        z_52 = t;
        t = SSL_table_put(z_52, w_52, y_52);
        t = y_52;
        ;
        LocalPopChoice(y_56);
      }
    else
      {
        t = x_56;
      }
  }
  return(t);
}
ATerm t_12 (ATerm d_49, ATerm e_49, ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  f_53 = t;
  {
    ATerm a_57 = t;
    int b_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        t = n_13(d_49, e_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_57 = ATgetFirst((ATermList) t);
            e_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_57);
        t = SSL_table_put(d_49, e_49, e_53);
        t = (ATerm) ATmakeAppl(sym__3, d_49, e_49, e_53);
      }
    else
      {
        t = a_57;
        t = SSL_table_remove(d_49, e_49);
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
      }
    t = f_53;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,k_53 = NULL,l_53 = NULL,o_53 = NULL;
  l_53 = t;
  t = h_93(t);
  k_53 = t;
  {
    ATerm f_57 = t;
    int g_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_53 = NULL;
        t = term_q_49;
        q_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_53, term_q_49);
        t = n_13(k_53, q_53, t);
        ;
        LocalPopChoice(g_57);
      }
    else
      {
        t = f_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_53 = ATgetFirst((ATermList) t);
        g_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_49;
    o_53 = t;
    t = SSL_table_put(k_53, o_53, g_53);
    t = h_53;
    {
      ATerm b_23 (ATerm t)
      {
        ATerm r_53 = NULL;
        r_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_53, r_53);
        t = t_12(k_53, r_53, t);
        return(t);
      }
      t = map_1_0(b_23, t);
      t = l_53;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm t)
{
  ATerm i_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_75(t);
      t = l_75(t);
      ;
      LocalPopChoice(v_57);
    }
  else
    {
      t = i_57;
      t = l_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,g_54 = NULL,h_54 = NULL,k_54 = NULL,n_54 = NULL;
  g_54 = t;
  t = g_93(t);
  t_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, term_q_49);
  {
    ATerm x_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_58 = ATgetArgument(t, 0);
            ATerm c_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_49;
        t_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_53, term_q_49);
        t = n_13(t_53, t_54, t);
        ;
        LocalPopChoice(z_57);
      }
    else
      {
        t = x_57;
        t = (ATerm) ATempty;
      }
    h_54 = t;
    t = term_q_49;
    k_54 = t;
    t = (ATerm) ATinsert(CheckATermList(h_54), (ATerm) ATempty);
    n_54 = t;
    t = SSL_table_put(t_53, k_54, n_54);
    t = g_54;
  }
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  {
    ATerm e_58 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_55);
        ;
        LocalPopChoice(f_58);
      }
    else
      {
        t = e_58;
        t = h_55;
      }
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm y_54 = NULL;
  ATerm d_23 (ATerm t)
  {
    ATerm c_55 = NULL;
    c_55 = t;
    {
      ATerm g_58 = t;
      int h_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_55 = NULL,e_55 = NULL;
          t = term_s_50;
          d_55 = t;
          t = term_q_49;
          e_55 = t;
          t = term_l_51;
          t = n_13(d_55, e_55, t);
          ;
          LocalPopChoice(h_58);
        }
      else
        {
          t = g_58;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_54 != NULL) && (y_54 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_54 = ATgetFirst((ATermList) t);
          {
            ATerm i_58 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_54;
      t = map_1_0(e_23, t);
      t = c_55;
      t = end_scope_1_0(f_23, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_23, t);
  t = restore_always_2_0(h_104, d_23, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm n_55 = NULL;
  n_55 = t;
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_55 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        p_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_55, term_f_34);
        t = geq_0_0(t);
        t = n_55;
        t = n_96(t);
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = n_55;
      }
  }
  return(t);
}
ATerm v_12 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_36, k_36);
      ;
      LocalPopChoice(m_58);
    }
  else
    {
      t = l_58;
      t = SSL_addr(j_36, k_36);
    }
  return(t);
}
ATerm x_12 (ATerm p_36, ATerm q_36, ATerm t)
{
  ATerm q_58 = t;
  int r_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_36, q_36);
      ;
      LocalPopChoice(r_58);
    }
  else
    {
      t = q_58;
      t = SSL_subtr(p_36, q_36);
    }
  return(t);
}
ATerm y_12 (ATerm a_46, ATerm c_46, ATerm e_46, ATerm g_46, ATerm b_46, ATerm d_46, ATerm f_46, ATerm h_46, ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,w_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_46, b_46);
  t = x_12(a_46, b_46, t);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
  t = x_12(c_46, d_46, t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  t = x_12(e_46, f_46, t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_46, h_46);
  t = x_12(g_46, h_46, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__4, r_55, s_55, t_55, w_55);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_58 = ATgetArgument(t, 0);
      if(match_cons(s_58, sym__4))
        {
          y_55 = ATgetArgument(s_58, 0);
          z_55 = ATgetArgument(s_58, 1);
          c_56 = ATgetArgument(s_58, 2);
          d_56 = ATgetArgument(s_58, 3);
        }
      else
        _fail(t);
      {
        ATerm t_58 = ATgetArgument(t, 1);
        if(match_cons(t_58, sym__4))
          {
            e_56 = ATgetArgument(t_58, 0);
            g_56 = ATgetArgument(t_58, 1);
            h_56 = ATgetArgument(t_58, 2);
            i_56 = ATgetArgument(t_58, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_12(y_55, z_55, c_56, d_56, e_56, g_56, h_56, i_56, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,p_56 = NULL,q_56 = NULL,s_56 = NULL,v_56 = NULL,z_56 = NULL,c_57 = NULL,d_57 = NULL,h_57 = NULL,j_57 = NULL;
  s_56 = t;
  t = times_0_0(t);
  j_56 = t;
  t = s_56;
  t = b_100(t);
  k_56 = t;
  t = times_0_0(t);
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_56, j_56);
  t = diff_times_0_0(t);
  p_56 = t;
  if(match_cons(t, sym__4))
    {
      d_57 = ATgetArgument(t, 0);
      {
        ATerm v_58 = ATgetArgument(t, 1);
      }
      h_57 = ATgetArgument(t, 2);
      {
        ATerm w_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_57, h_57);
  t = v_12(d_57, h_57, t);
  j_57 = t;
  t = SSL_TicksToSeconds(j_57);
  l_56 = t;
  t = p_56;
  if(match_cons(t, sym__4))
    {
      ATerm y_58 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
      {
        ATerm z_58 = ATgetArgument(t, 2);
      }
      z_56 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_56, z_56);
  t = v_12(v_56, z_56, t);
  c_57 = t;
  t = SSL_TicksToSeconds(c_57);
  m_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_56), term_c_59), l_56), term_a_59);
  t = a_100(t);
  t = k_56;
  return(t);
}
ATerm debug_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  k_57 = t;
  t = b_95(t);
  l_57 = t;
  t = term_r_30;
  m_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_57), l_57);
  n_57 = t;
  t = SSL_printnl(m_57, n_57);
  t = k_57;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
  o_57 = t;
  t = term_d_59;
  t = get_config_0_0(t);
  p_57 = t;
  t = term_h_32;
  q_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_59), term_k_59), term_j_59), term_i_59), term_h_59), term_g_59), term_f_59), p_57), term_e_59);
  r_57 = t;
  t = SSL_printnl(q_57, r_57);
  t = o_57;
  return(t);
}
ATerm z_12 (ATerm v_39, ATerm w_39, ATerm t)
{
  t = SSL_copy(v_39, w_39);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_57 = NULL;
  ATerm g_23 (ATerm t)
  {
    ATerm t_57 = NULL,u_57 = NULL;
    t_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_57), t_57);
    t = n_13(not_null(s_57), t_57, t);
    u_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_57, u_57);
    return(t);
  }
  if(((s_57 != NULL) && (s_57 != t)))
    _fail(t);
  else
    s_57 = t;
  t = SSL_table_keys(s_57);
  t = map_1_0(g_23, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  {
    ATerm m_59 = t;
    int n_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_57 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        y_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_57, term_r_35);
        t = geq_0_0(t);
        t = w_57;
        t = r_96(t);
        ;
        LocalPopChoice(n_59);
      }
    else
      {
        t = m_59;
        t = w_57;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_58 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        d_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_58, term_b_36);
        t = geq_0_0(t);
        t = b_58;
        t = q_96(t);
        ;
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        t = b_58;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
  n_58 = t;
  if(match_cons(t, sym__2))
    {
      o_58 = ATgetArgument(t, 0);
      p_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_58;
        if((o_58 != t))
          {
            _fail(t);
          }
        t = n_58;
        ;
        LocalPopChoice(u_59);
      }
    else
      {
        t = s_59;
        t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
        {
          ATerm v_59 = t;
          int w_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_58, p_58);
              ;
              LocalPopChoice(w_59);
            }
          else
            {
              t = v_59;
              t = SSL_gtr(o_58, p_58);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_58, p_58);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_58 = NULL;
        t = term_p_30;
        t = get_config_0_0(t);
        x_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_58, term_e_36);
        t = geq_0_0(t);
        t = u_58;
        t = s_96(t);
        ;
        LocalPopChoice(y_59);
      }
    else
      {
        t = x_59;
        t = u_58;
      }
  }
  return(t);
}
ATerm c_13 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm j_26, ATerm i_26, ATerm t)
{
  t = o_86(t);
  {
    ATerm h_23 (ATerm t)
    {
      ATerm b_59 = NULL;
      b_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_26, b_59);
      t = n_86(t);
      return(t);
    }
    t = fetch_1_0(h_23, t);
    t = i_26;
  }
  return(t);
}
ATerm d_13 (ATerm k_86 (ATerm), ATerm f_26, ATerm e_26, ATerm t)
{
  ATerm a_60 (ATerm t)
  {
    ATerm q_59 = NULL,r_59 = NULL,t_59 = NULL;
    q_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_26;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_59 = ATgetFirst((ATermList) t);
            t_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_59 = t;
          int b_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_59;
              {
                ATerm i_23 (ATerm t)
                {
                  t = e_26;
                  return(t);
                }
                t = c_13(k_86, i_23, r_59, t_59, t);
                t = a_60(t);
              }
              ;
              LocalPopChoice(b_60);
            }
          else
            {
              t = z_59;
              {
                ATerm l_35 = NULL,y_35 = NULL,a_10 = NULL;
                t = SSLgetAnnotations(q_59);
                l_35 = t;
                t = t_59;
                t = a_60(t);
                y_35 = t;
                t = (ATerm) ATinsert(CheckATermList(y_35), r_59);
                a_10 = t;
                t = SSLsetAnnotations(a_10, l_35);
              }
            }
        }
      }
    return(t);
  }
  t = f_26;
  t = a_60(t);
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm p_60 = NULL;
  if(match_cons(t, sym__2))
    {
      p_60 = ATgetArgument(t, 0);
      if((p_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_13 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm i_60 = NULL,k_60 = NULL,l_60 = NULL;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_60 = ATgetArgument(t, 0);
            ATerm h_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_49, w_49);
        t = n_13(v_49, w_49, t);
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = (ATerm) ATempty;
      }
    l_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_60, x_49);
    t = d_13(j_23, l_60, x_49, t);
    k_60 = t;
    t = SSL_table_put(v_49, w_49, k_60);
    t = i_60;
  }
  return(t);
}
ATerm f_13 (ATerm j_101 (ATerm), ATerm f_50, ATerm e_50, ATerm t)
{
  ATerm k_23 (ATerm t)
  {
    ATerm s_60 = NULL,u_60 = NULL;
    if(match_cons(t, sym__2))
      {
        s_60 = ATgetArgument(t, 0);
        u_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, f_50, s_60, u_60);
    t = j_101(t);
    return(t);
  }
  t = e_50;
  t = map_1_0(k_23, t);
  return(t);
}
ATerm j_13 (ATerm d_39, ATerm e_39, ATerm t)
{
  t = SSL_access(d_39, e_39);
  return(t);
}
ATerm o_61 (ATerm h_61, ATerm t)
{
  t = SSL_fclose(h_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL;
  l_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_61 = ATgetArgument(t, 0);
      {
        ATerm j_60 = t;
        int m_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_61);
            ;
            LocalPopChoice(m_60);
          }
        else
          {
            t = j_60;
            t = o_61(l_61, t);
          }
      }
    }
  else
    {
      t = o_61(l_61, t);
    }
  return(t);
}
ATerm g_13 (ATerm z_42, ATerm t)
{
  t = SSL_read_term_from_stream(z_42);
  return(t);
}
ATerm h_13 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_fopen(l_39, m_39);
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_61 = NULL;
  t = SSL_stdin_stream();
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_61 = NULL;
  t = SSL_stdout_stream();
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_stderr_stream();
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm m_63 (ATerm c_62, ATerm t)
{
  ATerm d_62 = NULL;
  t = SSL_explode_term(c_62);
  if(match_cons(t, sym__2))
    {
      ATerm n_60 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_60) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_60 = ATgetArgument(t, 1);
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            d_62 = ATgetFirst((ATermList) o_60);
            {
              ATerm q_60 = (ATerm) ATgetNext((ATermList) o_60);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_62;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_62;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_62;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_62;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm n_63 (ATerm h_62, ATerm i_62, ATerm j_62, ATerm t)
{
  ATerm k_62 = NULL,m_62 = NULL,o_62 = NULL,s_62 = NULL,t_14 = NULL;
  t = SSLgetAnnotations(j_62);
  o_62 = t;
  t = h_62;
  if(match_cons(t, sym_Path_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_62, i_62);
  t_14 = t;
  t = SSLsetAnnotations(t_14, o_62);
  if(match_cons(t, sym__2))
    {
      k_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_13(k_62, m_62, t);
  return(t);
}
ATerm p_63 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm t)
{
  ATerm y_62 = NULL,a_63 = NULL,b_63 = NULL,f_63 = NULL,u_14 = NULL;
  t = SSLgetAnnotations(w_62);
  b_63 = t;
  t = SSL_is_string(u_62);
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_63, v_62);
  u_14 = t;
  t = SSLsetAnnotations(u_14, b_63);
  if(match_cons(t, sym__2))
    {
      y_62 = ATgetArgument(t, 0);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_13(y_62, a_63, t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,k_63 = NULL;
  h_63 = t;
  if(match_cons(t, sym__2))
    {
      i_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
      {
        ATerm r_60 = t;
        int t_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_63(h_63, t);
            ;
            LocalPopChoice(t_60);
          }
        else
          {
            t = r_60;
            {
              ATerm v_60 = t;
              int w_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_63(i_63, k_63, h_63, t);
                  ;
                  LocalPopChoice(w_60);
                }
              else
                {
                  t = v_60;
                  t = p_63(i_63, k_63, h_63, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_63(h_63, t);
    }
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_x_60;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  ATerm y_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_63 = NULL;
      t_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_63, term_a_61);
      t = i_13(t);
      ;
      LocalPopChoice(z_60);
    }
  else
    {
      t = y_60;
      t = debug_1_0(l_23, t);
      _fail(t);
    }
  r_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_13(s_63, t);
  q_63 = t;
  t = r_63;
  t = fclose_0_0(t);
  t = q_63;
  return(t);
}
ATerm m_23 (ATerm t)
{
  t = term_b_61;
  return(t);
}
ATerm n_23 (ATerm t)
{
  t = term_c_61;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL,y_63 = NULL;
      w_63 = t;
      t = (ATerm) ATinsert(ATempty, term_f_61);
      y_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_63, (ATerm) ATinsert(ATempty, term_f_61));
      t = j_13(w_63, y_63, t);
      LocalPopChoice(e_61);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_61;
      {
        ATerm g_61 = t;
        int i_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_61 = t;
            if((PushChoice() == 0))
              {
                ATerm z_63 = NULL,b_64 = NULL;
                z_63 = t;
                t = (ATerm) ATinsert(ATempty, term_r_50);
                b_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_63, (ATerm) ATinsert(ATempty, term_r_50));
                t = j_13(z_63, b_64, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_61;
              }
            t = debug_1_0(m_23, t);
            ;
            LocalPopChoice(i_61);
          }
        else
          {
            t = g_61;
            t = debug_1_0(n_23, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_23 (ATerm t)
{
  t = debug_1_0(p_23, t);
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = term_m_61;
  return(t);
}
ATerm q_23 (ATerm t)
{
  t = debug_1_0(r_23, t);
  return(t);
}
ATerm r_23 (ATerm t)
{
  t = term_n_61;
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  t = term_r_30;
  t_64 = t;
  t = (ATerm) ATinsert(ATempty, term_p_61);
  u_64 = t;
  t = SSL_printnl(t_64, u_64);
  t = s_64;
  return(t);
}
ATerm t_23 (ATerm t)
{
  ATerm v_64 = NULL,x_64 = NULL,z_64 = NULL;
  if(match_cons(t, sym__3))
    {
      v_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      z_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_13(v_64, x_64, z_64, t);
  return(t);
}
ATerm u_23 (ATerm t)
{
  ATerm a_65 = NULL,c_65 = NULL,d_65 = NULL;
  a_65 = t;
  t = term_r_30;
  c_65 = t;
  t = (ATerm) ATinsert(ATempty, term_s_61);
  d_65 = t;
  t = SSL_printnl(c_65, d_65);
  t = a_65;
  return(t);
}
ATerm v_23 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  t = term_r_30;
  f_65 = t;
  t = (ATerm) ATinsert(ATempty, term_p_61);
  g_65 = t;
  t = SSL_printnl(f_65, g_65);
  t = e_65;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,i_64 = NULL,k_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  c_64 = t;
  t = if_verbose5_1_0(o_23, t);
  {
    ATerm v_61 = t;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL,r_64 = NULL;
        t = term_w_61;
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_64);
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_61, (ATerm) ATmakeAppl(sym_Imported_1, c_64));
        t = n_13(q_64, r_64, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_61;
      }
    e_64 = t;
    t = term_w_61;
    m_64 = t;
    t = term_x_61;
    n_64 = t;
    t = (ATerm) ATinsert(ATempty, c_64);
    o_64 = t;
    t = SSL_table_put(m_64, n_64, o_64);
    t = e_64;
    t = if_verbose4_1_0(q_23, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_23, t);
    d_64 = t;
    t = term_w_61;
    k_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_61, d_64);
    t = f_13(t_23, k_64, d_64, t);
    t = if_verbose6_1_0(u_23, t);
    t = term_w_61;
    f_64 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, c_64);
    g_64 = t;
    t = (ATerm) ATempty;
    i_64 = t;
    t = SSL_table_put(f_64, g_64, i_64);
    t = (ATerm) ATmakeAppl(sym__3, term_w_61, (ATerm)ATmakeAppl(sym_Imported_1, c_64), (ATerm) ATempty);
    t = if_verbose4_1_0(v_23, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,y_65 = NULL;
  v_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_65 = ATgetFirst((ATermList) t);
          y_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_61 = t;
        int z_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_37 = NULL,t_37 = NULL,u_37 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(v_65);
            q_37 = t;
            t = w_65;
            t = n_89(t);
            t_37 = t;
            t = y_65;
            t = filter_1_0(n_89, t);
            u_37 = t;
            t = (ATerm) ATinsert(CheckATermList(u_37), t_37);
            f_15 = t;
            t = SSLsetAnnotations(f_15, q_37);
            ;
            LocalPopChoice(z_61);
          }
        else
          {
            t = y_61;
            t = y_65;
            t = filter_1_0(n_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm g_66 (ATerm t)
  {
    ATerm a_62 = t;
    int b_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_75(t);
        t = g_66(t);
        ;
        LocalPopChoice(b_62);
      }
    else
      {
        t = a_62;
      }
    return(t);
  }
  t = g_66(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_62 = t;
  int f_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_62;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_62);
    }
  else
    {
      t = e_62;
      {
        ATerm l_62 = t;
        int n_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_66 = NULL;
            t = term_p_62;
            h_66 = t;
            t = SSL_getenv(h_66);
            ;
            LocalPopChoice(n_62);
          }
        else
          {
            t = l_62;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm y_23 (ATerm t)
{
  t = debug_1_0(z_23, t);
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_q_62;
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  t = term_w_61;
  o_66 = t;
  t = term_r_62;
  p_66 = t;
  t = term_t_62;
  t = n_13(o_66, p_66, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_62 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_62;
      }
  }
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = debug_1_0(h_24, t);
  return(t);
}
ATerm h_24 (ATerm t)
{
  t = term_z_62;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_66 = NULL;
  t = if_verbose5_1_0(y_23, t);
  i_66 = t;
  {
    ATerm c_63 = t;
    int d_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_66 = NULL,l_66 = NULL;
        t = term_w_61;
        j_66 = t;
        t = term_x_61;
        l_66 = t;
        t = term_e_63;
        t = n_13(j_66, l_66, t);
        ;
        LocalPopChoice(d_63);
      }
    else
      {
        t = c_63;
        {
          ATerm n_66 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_66 = t;
          t = repeat_1_0(f_24, t);
          t = n_66;
        }
      }
    t = i_66;
    t = if_verbose5_1_0(g_24, t);
  }
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = debug_1_0(j_24, t);
  return(t);
}
ATerm j_24 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm t_67 (ATerm t_66, ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  t = term_w_61;
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_66);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_61, (ATerm) ATmakeAppl(sym_Tool_1, t_66));
  t = n_13(w_66, x_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_63 = ATgetFirst((ATermList) t);
      if(match_cons(j_63, sym__2))
        {
          ATerm o_63 = ATgetArgument(j_63, 0);
          v_66 = ATgetArgument(j_63, 1);
        }
      else
        _fail(t);
      {
        ATerm l_63 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_66;
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = debug_1_0(s_24, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm u_24 (ATerm t)
{
  t = term_w_61;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_24, t);
  return(t);
}
ATerm z_24 (ATerm t)
{
  t = term_u_63;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_63 = t;
  int x_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_66 = NULL,a_67 = NULL,c_67 = NULL;
      t = if_verbose5_1_0(i_24, t);
      t = xtc_load_0_0(t);
      c_67 = t;
      if(match_cons(t, sym__2))
        {
          y_66 = ATgetArgument(t, 0);
          a_67 = ATgetArgument(t, 1);
          {
            ATerm a_64 = t;
            int h_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_67 = NULL,g_67 = NULL,i_67 = NULL;
                t = term_w_61;
                g_67 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_66);
                i_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_61, (ATerm) ATmakeAppl(sym_Tool_1, y_66));
                t = n_13(g_67, i_67, t);
                {
                  ATerm p_24 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_67 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_67 != NULL) && (f_67 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_67 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_24, t);
                  t = not_null(f_67);
                }
                ;
                LocalPopChoice(h_64);
              }
            else
              {
                t = a_64;
                t = t_67(c_67, t);
              }
          }
        }
      else
        {
          t = t_67(c_67, t);
        }
      t = if_verbose5_1_0(q_24, t);
      ;
      LocalPopChoice(x_63);
    }
  else
    {
      t = v_63;
      {
        ATerm s_67 = NULL,g_38 = NULL,i_38 = NULL;
        s_67 = t;
        t = term_r_30;
        g_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_64), s_67), term_j_64);
        i_38 = t;
        t = SSL_printnl(g_38, i_38);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_64), s_67), term_j_64);
        t = if_verbose5_1_0(u_24, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm k_13 (ATerm g_44, ATerm f_44, ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  t = g_44;
  {
    ATerm p_64 = t;
    int w_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_64);
      }
    else
      {
        t = p_64;
        t = (ATerm) ATempty;
      }
    y_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_44, y_67);
    t = conc_0_0(t);
    x_67 = t;
    t = term_w_56;
    z_67 = t;
    t = SSL_table_put(z_67, g_44, x_67);
    t = (ATerm) ATmakeAppl(sym__3, term_w_56, g_44, x_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
      t = term_z_31;
      t = m_0(t);
      h_68 = t;
      t = term_y_64;
      i_68 = t;
      t = term_b_65;
      j_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_64, term_b_65, h_68);
      t = o_13(i_68, j_68, h_68, t);
      _fail(t);
    }
  else
    {
      ATerm n_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_68 = ATgetFirst((ATermList) t);
          e_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_68 = ATgetFirst((ATermList) t);
          g_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_68;
      t = k_0(t);
      t = f_68;
      t = l_0(t);
      n_68 = t;
      t = (ATerm) ATinsert(CheckATermList(g_68), n_68);
    }
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm p_68 = NULL;
  p_68 = t;
  if(match_string(t, "-S"))
    {
      t = p_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_68;
    }
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL;
  t = term_p_30;
  q_68 = t;
  t = term_k_30;
  r_68 = t;
  t = term_h_65;
  t = q_13(q_68, r_68, t);
  t = term_i_65;
  return(t);
}
ATerm f_25 (ATerm t)
{
  t = term_j_65;
  return(t);
}
ATerm g_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_25 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
  s_68 = t;
  t = SSL_string_to_int(s_68);
  t_68 = t;
  t = term_p_30;
  u_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, t_68);
  t = q_13(u_68, t_68, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_68);
  return(t);
}
ATerm i_25 (ATerm t)
{
  t = term_k_65;
  return(t);
}
ATerm j_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_25 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  t = term_l_65;
  v_68 = t;
  t = term_z_31;
  w_68 = t;
  t = term_m_65;
  t = q_13(v_68, w_68, t);
  t = term_n_65;
  return(t);
}
ATerm l_25 (ATerm t)
{
  t = term_o_65;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_65 = t;
  int q_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_25, e_25, f_25, t);
      ;
      LocalPopChoice(q_65);
    }
  else
    {
      t = p_65;
      {
        ATerm r_65 = t;
        int s_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_25, h_25, i_25, t);
            ;
            LocalPopChoice(s_65);
          }
        else
          {
            t = r_65;
            t = Option_3_0(j_25, k_25, l_25, t);
          }
      }
    }
  return(t);
}
ATerm l_13 (ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm t_65 = t;
  int u_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_68 = NULL;
      t = d_44;
      t = get_config_0_0(t);
      t = term_w_56;
      x_68 = t;
      t = SSL_table_remove(x_68, d_44);
      t = (ATerm) ATmakeAppl(sym__2, term_w_56, d_44);
      ;
      LocalPopChoice(u_65);
    }
  else
    {
      t = t_65;
      t = (ATerm) ATmakeAppl(sym__2, d_44, e_44);
      t = q_13(d_44, e_44, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm x_69 (ATerm t)
  {
    ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
    w_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_69 = ATgetFirst((ATermList) t);
        v_69 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_38 = NULL,v_38 = NULL,h_15 = NULL;
          t = SSLgetAnnotations(w_69);
          r_38 = t;
          t = v_69;
          t = x_69(t);
          v_38 = t;
          t = (ATerm) ATinsert(CheckATermList(v_38), u_69);
          h_15 = t;
          t = SSLsetAnnotations(h_15, r_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_69;
        t = w_82(t);
      }
    return(t);
  }
  t = x_69(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  z_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_68;
    }
  else
    {
      ATerm m_25 (ATerm t)
      {
        t = not_null(b_69);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_69 = ATgetFirst((ATermList) t);
          if(((b_69 != NULL) && (b_69 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_69;
      t = at_end_1_0(m_25, t);
    }
  return(t);
}
ATerm o_70 (ATerm f_70, ATerm t)
{
  ATerm h_70 = NULL;
  t = SSL_explode_term(f_70);
  if(match_cons(t, sym__2))
    {
      ATerm x_65 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_65) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_70;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym__2))
    {
      j_70 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
      {
        ATerm z_65 = t;
        int a_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 (ATerm t)
            {
              t = k_70;
              return(t);
            }
            t = j_70;
            t = at_end_1_0(n_25, t);
            ;
            LocalPopChoice(a_66);
          }
        else
          {
            t = z_65;
            t = o_70(l_70, t);
          }
      }
    }
  else
    {
      t = o_70(l_70, t);
    }
  return(t);
}
ATerm m_13 (ATerm h_44, ATerm i_44, ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,t_70 = NULL;
  t = h_44;
  {
    ATerm b_66 = t;
    int c_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_66);
      }
    else
      {
        t = b_66;
        t = (ATerm) ATempty;
      }
    q_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_70, i_44);
    t = conc_0_0(t);
    p_70 = t;
    t = term_w_56;
    t_70 = t;
    t = SSL_table_put(t_70, h_44, p_70);
    t = (ATerm) ATmakeAppl(sym__3, term_w_56, h_44, p_70);
  }
  return(t);
}
ATerm o_25 (ATerm t)
{
  ATerm v_70 = NULL;
  v_70 = t;
  if(match_string(t, "-o"))
    {
      t = v_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_70;
    }
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  t = term_x_30;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, x_70);
  t = q_13(y_70, x_70, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_70);
  return(t);
}
ATerm q_25 (ATerm t)
{
  t = term_d_66;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_25, p_25, q_25, t);
  return(t);
}
ATerm r_25 (ATerm t)
{
  ATerm b_71 = NULL;
  b_71 = t;
  if(match_string(t, "-i"))
    {
      t = b_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_71;
    }
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm c_71 = NULL,e_71 = NULL;
  c_71 = t;
  t = term_d_48;
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_48, c_71);
  t = q_13(e_71, c_71, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_71);
  return(t);
}
ATerm t_25 (ATerm t)
{
  t = term_e_66;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_25, s_25, t_25, t);
  return(t);
}
ATerm y_25 (ATerm t)
{
  ATerm m_71 = NULL;
  m_71 = t;
  if(match_string(t, "-I"))
    {
      t = m_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = m_71;
    }
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL;
  n_71 = t;
  t = term_g_52;
  o_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_71), term_g_52);
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_52, (ATerm) ATinsert(ATinsert(ATempty, n_71), term_g_52));
  t = k_13(o_71, p_71, t);
  t = term_z_31;
  return(t);
}
ATerm b_26 (ATerm t)
{
  t = term_f_66;
  return(t);
}
ATerm d_26 (ATerm t)
{
  ATerm q_71 = NULL;
  q_71 = t;
  if(match_string(t, "--main"))
    {
      t = q_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = q_71;
    }
  return(t);
}
ATerm h_26 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL;
  r_71 = t;
  t = term_f_51;
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_51, r_71);
  t = q_13(s_71, r_71, t);
  t = term_z_31;
  return(t);
}
ATerm k_26 (ATerm t)
{
  t = term_k_66;
  return(t);
}
ATerm l_26 (ATerm t)
{
  ATerm t_71 = NULL;
  t_71 = t;
  if(match_string(t, "--library"))
    {
      t = t_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = t_71;
    }
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  t = term_m_33;
  u_71 = t;
  t = term_z_31;
  v_71 = t;
  t = term_m_66;
  t = q_13(u_71, v_71, t);
  t = term_z_31;
  return(t);
}
ATerm o_26 (ATerm t)
{
  t = term_q_66;
  return(t);
}
ATerm p_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_26 (ATerm t)
{
  ATerm w_71 = NULL,z_71 = NULL,a_72 = NULL;
  w_71 = t;
  t = term_b_33;
  z_71 = t;
  t = (ATerm) ATinsert(ATempty, w_71);
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATempty, w_71));
  t = m_13(z_71, a_72, t);
  t = term_z_31;
  return(t);
}
ATerm s_26 (ATerm t)
{
  t = term_r_66;
  return(t);
}
ATerm t_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_26 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  t = term_f_31;
  c_72 = t;
  t = (ATerm) ATinsert(ATempty, b_72);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATempty, b_72));
  t = k_13(c_72, d_72, t);
  t = term_z_31;
  return(t);
}
ATerm v_26 (ATerm t)
{
  t = term_s_66;
  return(t);
}
ATerm w_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_26 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,i_72 = NULL;
  e_72 = t;
  t = term_y_30;
  f_72 = t;
  t = (ATerm) ATinsert(ATempty, e_72);
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, (ATerm) ATinsert(ATempty, e_72));
  t = k_13(f_72, i_72, t);
  t = term_z_31;
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = term_u_66;
  return(t);
}
ATerm a_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL;
  t = term_h_31;
  j_72 = t;
  t = term_z_31;
  k_72 = t;
  t = term_z_66;
  t = q_13(j_72, k_72, t);
  t = term_z_31;
  return(t);
}
ATerm c_27 (ATerm t)
{
  t = term_b_67;
  return(t);
}
ATerm e_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_27 (ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL;
  t = term_y_51;
  l_72 = t;
  t = term_z_31;
  m_72 = t;
  t = term_d_67;
  t = q_13(l_72, m_72, t);
  t = term_z_31;
  return(t);
}
ATerm g_27 (ATerm t)
{
  t = term_e_67;
  return(t);
}
ATerm h_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_27 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  t = term_m_48;
  n_72 = t;
  t = term_z_31;
  o_72 = t;
  t = term_h_67;
  t = q_13(n_72, o_72, t);
  t = term_z_31;
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = term_j_67;
  return(t);
}
ATerm k_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_27 (ATerm t)
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  p_72 = t;
  t = SSL_string_to_int(p_72);
  q_72 = t;
  t = term_d_35;
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, q_72);
  t = q_13(r_72, q_72, t);
  t = term_z_31;
  return(t);
}
ATerm p_27 (ATerm t)
{
  t = term_k_67;
  return(t);
}
ATerm q_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_27 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL;
  s_72 = t;
  t = SSL_string_to_int(s_72);
  t_72 = t;
  t = term_g_35;
  u_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_35, t_72);
  t = q_13(u_72, t_72, t);
  t = term_z_31;
  return(t);
}
ATerm s_27 (ATerm t)
{
  t = term_l_67;
  return(t);
}
ATerm t_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  t = term_v_36;
  v_72 = t;
  t = term_z_31;
  w_72 = t;
  t = term_m_67;
  t = l_13(v_72, w_72, t);
  t = term_z_31;
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = term_n_67;
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  if(match_string(t, "-h"))
    {
      t = x_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = x_72;
    }
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  t = term_o_67;
  y_72 = t;
  t = term_z_31;
  z_72 = t;
  t = term_p_67;
  t = q_13(y_72, z_72, t);
  t = term_z_31;
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = term_q_67;
  return(t);
}
ATerm d_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL;
  t = term_r_67;
  a_73 = t;
  t = term_z_31;
  b_73 = t;
  t = term_u_67;
  t = q_13(a_73, b_73, t);
  t = term_z_31;
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = term_v_67;
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  if(match_string(t, "-v"))
    {
      t = c_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = c_73;
    }
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL;
  t = term_w_67;
  d_73 = t;
  t = term_z_31;
  e_73 = t;
  t = term_a_68;
  t = q_13(d_73, e_73, t);
  t = term_z_31;
  return(t);
}
ATerm j_28 (ATerm t)
{
  t = term_b_68;
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm f_73 = NULL;
  f_73 = t;
  if(match_string(t, "--warning"))
    {
      t = f_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = f_73;
    }
  return(t);
}
ATerm l_28 (ATerm t)
{
  ATerm g_73 = NULL;
  g_73 = t;
  {
    ATerm c_68 = t;
    int k_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,j_15 = NULL;
        t = term_h_48;
        t = get_config_0_0(t);
        m_73 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_73 = ATgetFirst((ATermList) t);
            l_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_73);
        j_73 = t;
        t = k_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = l_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_73), k_73);
        j_15 = t;
        t = SSLsetAnnotations(j_15, j_73);
        t = term_h_48;
        h_73 = t;
        t = (ATerm) ATinsert(ATempty, g_73);
        i_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_48, (ATerm) ATinsert(ATempty, g_73));
        t = q_13(h_73, i_73, t);
        ;
        LocalPopChoice(k_68);
      }
    else
      {
        t = c_68;
        {
          ATerm n_73 = NULL,o_73 = NULL;
          t = term_h_48;
          n_73 = t;
          t = (ATerm) ATinsert(ATempty, g_73);
          o_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_48, (ATerm) ATinsert(ATempty, g_73));
          t = k_13(n_73, o_73, t);
        }
      }
    t = term_z_31;
  }
  return(t);
}
ATerm m_28 (ATerm t)
{
  t = term_l_68;
  return(t);
}
ATerm n_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_28 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL;
  p_73 = t;
  t = term_b_49;
  q_73 = t;
  t = term_f_34;
  r_73 = t;
  t = term_m_68;
  t = q_13(q_73, r_73, t);
  t = p_73;
  return(t);
}
ATerm q_28 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm r_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  t = term_c_49;
  t_73 = t;
  t = term_k_30;
  u_73 = t;
  t = term_o_68;
  t = q_13(t_73, u_73, t);
  t = s_73;
  return(t);
}
ATerm t_28 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm u_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL;
  t = term_h_52;
  v_73 = t;
  t = term_z_31;
  w_73 = t;
  t = term_y_68;
  t = q_13(v_73, w_73, t);
  t = term_z_31;
  return(t);
}
ATerm y_28 (ATerm t)
{
  t = term_c_69;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
      {
        ATerm f_69 = t;
        int g_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(g_69);
          }
        else
          {
            t = f_69;
            {
              ATerm h_69 = t;
              int i_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(y_25, z_25, b_26, t);
                  ;
                  LocalPopChoice(i_69);
                }
              else
                {
                  t = h_69;
                  {
                    ATerm j_69 = t;
                    int k_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(d_26, h_26, k_26, t);
                        ;
                        LocalPopChoice(k_69);
                      }
                    else
                      {
                        t = j_69;
                        {
                          ATerm l_69 = t;
                          int m_69 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(l_26, m_26, o_26, t);
                              ;
                              LocalPopChoice(m_69);
                            }
                          else
                            {
                              t = l_69;
                              {
                                ATerm n_69 = t;
                                int o_69 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(p_26, r_26, s_26, t);
                                    ;
                                    LocalPopChoice(o_69);
                                  }
                                else
                                  {
                                    t = n_69;
                                    {
                                      ATerm p_69 = t;
                                      int q_69 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(t_26, u_26, v_26, t);
                                          ;
                                          LocalPopChoice(q_69);
                                        }
                                      else
                                        {
                                          t = p_69;
                                          {
                                            ATerm r_69 = t;
                                            int s_69 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(w_26, x_26, z_26, t);
                                                ;
                                                LocalPopChoice(s_69);
                                              }
                                            else
                                              {
                                                t = r_69;
                                                {
                                                  ATerm t_69 = t;
                                                  int y_69 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(a_27, b_27, c_27, t);
                                                      ;
                                                      LocalPopChoice(y_69);
                                                    }
                                                  else
                                                    {
                                                      t = t_69;
                                                      {
                                                        ATerm z_69 = t;
                                                        int a_70 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(e_27, f_27, g_27, t);
                                                            ;
                                                            LocalPopChoice(a_70);
                                                          }
                                                        else
                                                          {
                                                            t = z_69;
                                                            {
                                                              ATerm b_70 = t;
                                                              int c_70 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Option_3_0(h_27, i_27, j_27, t);
                                                                  ;
                                                                  LocalPopChoice(c_70);
                                                                }
                                                              else
                                                                {
                                                                  t = b_70;
                                                                  {
                                                                    ATerm d_70 = t;
                                                                    int e_70 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(k_27, l_27, p_27, t);
                                                                        ;
                                                                        LocalPopChoice(e_70);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_70;
                                                                        {
                                                                          ATerm g_70 = t;
                                                                          int i_70 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = ArgOption_3_0(q_27, r_27, s_27, t);
                                                                              ;
                                                                              LocalPopChoice(i_70);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_70;
                                                                              {
                                                                                ATerm m_70 = t;
                                                                                int n_70 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(t_27, x_27, y_27, t);
                                                                                    ;
                                                                                    LocalPopChoice(n_70);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_70;
                                                                                    {
                                                                                      ATerm r_70 = t;
                                                                                      int s_70 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = verbose_option_0_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(s_70);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_70;
                                                                                          {
                                                                                            ATerm u_70 = t;
                                                                                            int w_70 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(z_27, a_28, b_28, t);
                                                                                                ;
                                                                                                LocalPopChoice(w_70);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_70;
                                                                                                {
                                                                                                  ATerm z_70 = t;
                                                                                                  int a_71 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(d_28, e_28, f_28, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(a_71);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_70;
                                                                                                      {
                                                                                                        ATerm d_71 = t;
                                                                                                        int f_71 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(h_28, i_28, j_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_71);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = d_71;
                                                                                                            {
                                                                                                              ATerm g_71 = t;
                                                                                                              int h_71 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(k_28, l_28, m_28, t);
                                                                                                                  ;
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
                                                                                                                        t = Option_3_0(n_28, p_28, q_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(j_71);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = i_71;
                                                                                                                        {
                                                                                                                          ATerm k_71 = t;
                                                                                                                          int l_71 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(r_28, s_28, t_28, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(l_71);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = k_71;
                                                                                                                              t = Option_3_0(u_28, v_28, y_28, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm long_description_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_74), term_h_59), term_e_74), term_d_74), term_c_74), term_h_59), term_b_74), term_a_74), term_z_73), term_y_73), term_x_73), term_h_72), term_g_72), term_y_71), term_x_71);
  return(t);
}
ATerm map_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm r_74 (ATerm t)
  {
    ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
    n_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_74;
      }
    else
      {
        ATerm g_39 = NULL,k_39 = NULL,n_39 = NULL,o_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_74 = ATgetFirst((ATermList) t);
            p_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_74);
        g_39 = t;
        t = o_74;
        t = g_82(t);
        k_39 = t;
        t = p_74;
        t = r_74(t);
        n_39 = t;
        t = (ATerm) ATinsert(CheckATermList(n_39), k_39);
        o_15 = t;
        t = SSLsetAnnotations(o_15, g_39);
      }
    return(t);
  }
  t = r_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_74 = ATgetFirst((ATermList) t);
      w_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_75 = NULL,b_75 = NULL;
        ATerm z_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_75)), not_null(b_75));
          return(t);
        }
        t = w_74;
        t = i_0(t);
        if(((a_75 != NULL) && (a_75 != t)))
          _fail(t);
        else
          a_75 = t;
        t = v_74;
        t = h_0(t);
        if(((b_75 != NULL) && (b_75 != t)))
          _fail(t);
        else
          b_75 = t;
        t = w_74;
        t = reverse_acc_2_0(h_0, z_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_31;
      t = i_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_75 = NULL;
  t = term_z_31;
  t = g_0(t);
  e_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_74), e_75), term_q_74), term_h_59), term_m_74), term_h_59), term_l_74), term_k_74), term_h_59), term_j_74);
  return(t);
}
ATerm g_29 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_75), term_t_74);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_75 = NULL,n_75 = NULL,o_75 = NULL;
  ATerm u_74 = t;
  int x_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_74;
      t = get_config_0_0(t);
      i_75 = t;
      ;
      LocalPopChoice(x_74);
    }
  else
    {
      t = u_74;
      {
        ATerm a_29 (ATerm t)
        {
          ATerm p_75 = NULL,q_75 = NULL,t_75 = NULL,y_15 = NULL;
          t_75 = t;
          if(match_cons(t, sym_Program_1))
            {
              q_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_75);
          p_75 = t;
          t = q_75;
          if(((i_75 != NULL) && (i_75 != t)))
            _fail(t);
          else
            i_75 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, q_75);
          y_15 = t;
          t = SSLsetAnnotations(y_15, p_75);
          return(t);
        }
        t = fetch_1_0(a_29, t);
      }
    }
  {
    ATerm z_74 = t;
    int c_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 (ATerm t)
        {
          t = not_null(i_75);
          return(t);
        }
        t = short_description_1_0(e_29, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(c_75);
      }
    else
      {
        t = z_74;
      }
    t = term_d_75;
    t = echo_0_0(t);
    t = term_y_64;
    n_75 = t;
    t = term_b_65;
    o_75 = t;
    t = term_f_75;
    t = n_13(n_75, o_75, t);
    t = reverse_acc_2_0(_id, g_29, t);
    t = map_1_0(h_29, t);
    {
      ATerm g_75 = t;
      int h_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_75 = NULL;
          ATerm l_29 (ATerm t)
          {
            t = not_null(i_75);
            return(t);
          }
          t = long_description_1_0(l_29, t);
          y_75 = t;
          t = (ATerm) ATinsert(CheckATermList(y_75), term_h_59);
          t = echo_0_0(t);
          ;
          LocalPopChoice(h_75);
        }
      else
        {
          t = g_75;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  ATerm p_77 (ATerm t)
  {
    ATerm e_77 = NULL,g_77 = NULL,i_77 = NULL;
    e_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_77 = ATgetFirst((ATermList) t);
        i_77 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_75 = t;
      int m_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_40 = NULL,p_40 = NULL,g_16 = NULL;
          t = SSLgetAnnotations(e_77);
          g_40 = t;
          t = g_77;
          t = q_82(t);
          p_40 = t;
          t = (ATerm) ATinsert(CheckATermList(i_77), p_40);
          g_16 = t;
          t = SSLsetAnnotations(g_16, g_40);
          ;
          LocalPopChoice(m_75);
        }
      else
        {
          t = j_75;
          {
            ATerm e_41 = NULL,k_41 = NULL,k_16 = NULL;
            t = SSLgetAnnotations(e_77);
            e_41 = t;
            t = i_77;
            t = p_77(t);
            k_41 = t;
            t = (ATerm) ATinsert(CheckATermList(k_41), g_77);
            k_16 = t;
            t = SSLsetAnnotations(k_16, e_41);
          }
        }
    }
    return(t);
  }
  t = p_77(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  u_77 = t;
  {
    ATerm s_75 = t;
    int u_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_77;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_75 = ATgetFirst((ATermList) t);
                ATerm w_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_77;
          }
        ;
        LocalPopChoice(u_75);
      }
    else
      {
        t = s_75;
        t = (ATerm) ATinsert(ATempty, u_77);
      }
    v_77 = t;
    t = term_h_32;
    w_77 = t;
    t = SSL_printnl(w_77, v_77);
    t = u_77;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_74;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm m_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  t = term_z_75;
  d_78 = t;
  t = term_z_31;
  e_78 = t;
  t = term_a_76;
  t = q_13(d_78, e_78, t);
  return(t);
}
ATerm o_29 (ATerm t)
{
  t = term_b_76;
  return(t);
}
ATerm p_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_29 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  t = term_z_75;
  l_78 = t;
  t = term_z_31;
  m_78 = t;
  t = term_a_76;
  t = q_13(l_78, m_78, t);
  t = term_w_67;
  j_78 = t;
  t = term_z_31;
  k_78 = t;
  t = term_a_68;
  t = q_13(j_78, k_78, t);
  t = term_c_76;
  return(t);
}
ATerm s_29 (ATerm t)
{
  t = term_d_76;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_76 = t;
  int f_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_29, n_29, o_29, t);
      ;
      LocalPopChoice(f_76);
    }
  else
    {
      t = e_76;
      t = Option_3_0(p_29, r_29, s_29, t);
    }
  return(t);
}
ATerm n_13 (ATerm p_50, ATerm q_50, ATerm t)
{
  t = SSL_table_get(p_50, q_50);
  return(t);
}
ATerm o_13 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm t)
{
  ATerm o_78 = NULL,r_78 = NULL,s_78 = NULL;
  o_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm g_76 = t;
    int h_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_76 = ATgetArgument(t, 0);
            ATerm j_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        t = n_13(y_48, z_48, t);
        ;
        LocalPopChoice(h_76);
      }
    else
      {
        t = g_76;
        t = (ATerm) ATempty;
      }
    r_78 = t;
    t = (ATerm) ATinsert(CheckATermList(r_78), x_48);
    s_78 = t;
    t = SSL_table_put(y_48, z_48, s_78);
    t = o_78;
  }
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_79 = NULL,h_79 = NULL,i_79 = NULL;
      t = term_z_31;
      t = e_0(t);
      e_79 = t;
      t = term_y_64;
      h_79 = t;
      t = term_b_65;
      i_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_64, term_b_65, e_79);
      t = o_13(h_79, i_79, e_79, t);
      _fail(t);
    }
  else
    {
      ATerm t_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_79 = ATgetFirst((ATermList) t);
          d_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_79;
      t = c_0(t);
      t = term_z_31;
      t = d_0(t);
      t_79 = t;
      t = (ATerm) ATinsert(CheckATermList(d_79), t_79);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_60 (ATerm), ATerm f_60 (ATerm), ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,b_80 = NULL,d_80 = NULL,g_80 = NULL,s_16 = NULL;
  g_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_79 = ATgetFirst((ATermList) t);
      x_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_80);
  v_79 = t;
  t = w_79;
  t = e_60(t);
  b_80 = t;
  t = x_79;
  t = f_60(t);
  d_80 = t;
  t = (ATerm) ATinsert(CheckATermList(d_80), b_80);
  s_16 = t;
  t = SSLsetAnnotations(s_16, v_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,r_80 = NULL,t_80 = NULL,v_80 = NULL,c_17 = NULL;
  n_80 = t;
  {
    ATerm k_76 = t;
    int l_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_76;
        t = g_101(t);
        ;
        LocalPopChoice(l_76);
      }
    else
      {
        t = k_76;
      }
    t = n_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_80 = ATgetFirst((ATermList) t);
        r_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_80);
    o_80 = t;
    t = term_y_74;
    v_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_74, p_80);
    t = q_13(v_80, p_80, t);
    t = r_80;
    {
      ATerm n_81 (ATerm t)
      {
        ATerm n_76 = t;
        int o_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_76 = t;
            int q_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_81 = NULL;
                c_81 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_81;
                ;
                LocalPopChoice(q_76);
              }
            else
              {
                t = p_76;
                t = g_101(t);
                t = Cons_2_0(_id, n_81, t);
              }
            ;
            LocalPopChoice(o_76);
          }
        else
          {
            t = n_76;
            {
              ATerm j_81 = NULL,k_81 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_81 = ATgetFirst((ATermList) t);
                  k_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_81), (ATerm) ATmakeAppl(sym_Undefined_1, j_81));
            }
          }
        return(t);
      }
      t = n_81(t);
      t_80 = t;
      t = (ATerm) ATinsert(CheckATermList(t_80), (ATerm) ATmakeAppl(sym_Program_1, p_80));
      c_17 = t;
      t = SSLsetAnnotations(c_17, o_80);
    }
  }
  return(t);
}
ATerm y_29 (ATerm t)
{
  ATerm l_83 = NULL;
  l_83 = t;
  if(match_string(t, "--help"))
    {
      t = l_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_83;
        }
    }
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL;
  t = term_o_67;
  w_83 = t;
  t = term_z_31;
  x_83 = t;
  t = term_p_67;
  t = q_13(w_83, x_83, t);
  t = term_r_76;
  return(t);
}
ATerm a_30 (ATerm t)
{
  t = term_s_76;
  return(t);
}
ATerm b_30 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm v_81 = NULL,z_81 = NULL,u_82 = NULL,y_82 = NULL,z_82 = NULL,b_83 = NULL,k_83 = NULL;
  u_82 = t;
  t = term_y_64;
  z_82 = t;
  t = term_b_65;
  b_83 = t;
  t = (ATerm) ATempty;
  k_83 = t;
  t = SSL_table_put(z_82, b_83, k_83);
  t = u_82;
  {
    ATerm w_29 (ATerm t)
    {
      ATerm t_76 = t;
      int u_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_101(t);
          ;
          LocalPopChoice(u_76);
        }
      else
        {
          t = t_76;
          {
            ATerm v_76 = t;
            int w_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_29, z_29, a_30, t);
                ;
                LocalPopChoice(w_76);
              }
            else
              {
                t = v_76;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_29, t);
    {
      ATerm x_76 = t;
      int y_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_84 = NULL;
          h_84 = t;
          {
            ATerm z_76 = t;
            int a_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_42 = NULL;
                t = h_84;
                {
                  ATerm b_77 = t;
                  int c_77 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_67;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_77);
                    }
                  else
                    {
                      t = b_77;
                      t = fetch_1_0(b_30, t);
                    }
                  t = h_84;
                  t = default_system_usage_0_0(t);
                  t = term_k_30;
                  b_42 = t;
                  t = SSL_exit(b_42);
                }
                ;
                LocalPopChoice(a_77);
              }
            else
              {
                t = z_76;
                {
                  ATerm j_42 = NULL;
                  t = term_z_75;
                  t = get_config_0_0(t);
                  t = h_84;
                  t = default_system_about_0_0(t);
                  t = term_k_30;
                  j_42 = t;
                  t = SSL_exit(j_42);
                }
              }
          }
          ;
          LocalPopChoice(y_76);
        }
      else
        {
          t = x_76;
          {
            ATerm d_77 = t;
            int f_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL;
                ATerm c_30 (ATerm t)
                {
                  ATerm l_84 = NULL,n_84 = NULL,o_84 = NULL,e_17 = NULL;
                  o_84 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_84 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_84);
                  l_84 = t;
                  t = n_84;
                  if(((v_81 != NULL) && (v_81 != t)))
                    _fail(t);
                  else
                    v_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_84);
                  e_17 = t;
                  t = SSLsetAnnotations(e_17, l_84);
                  return(t);
                }
                t = fetch_1_0(c_30, t);
                t = term_r_30;
                j_84 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_81)), term_h_77);
                k_84 = t;
                t = SSL_printnl(j_84, k_84);
                t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_81)), term_h_77));
                t = default_system_usage_0_0(t);
                t = term_f_34;
                i_84 = t;
                t = SSL_exit(i_84);
                ;
                LocalPopChoice(f_77);
              }
            else
              {
                t = d_77;
              }
          }
        }
      z_81 = t;
      t = term_y_64;
      y_82 = t;
      t = SSL_table_destroy(y_82);
      t = z_81;
    }
  }
  return(t);
}
ATerm q_13 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm z_84 = NULL;
  t = term_w_56;
  z_84 = t;
  t = SSL_table_put(z_84, a_44, b_44);
  t = (ATerm) ATmakeAppl(sym__3, term_w_56, a_44, b_44);
  return(t);
}
ATerm r_13 (ATerm y_33, ATerm z_33, ATerm t)
{
  t = SSL_strcat(y_33, z_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL;
  f_85 = t;
  t = SSL_explode_string(f_85);
  {
    ATerm j_77 = t;
    int k_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_86 (ATerm t)
        {
          ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
          x_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_85 = ATgetFirst((ATermList) t);
              z_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm l_77 = t;
            int m_77 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_42 = NULL,v_42 = NULL,o_17 = NULL;
                t = SSLgetAnnotations(x_85);
                q_42 = t;
                t = z_85;
                t = c_86(t);
                v_42 = t;
                t = (ATerm) ATinsert(CheckATermList(v_42), y_85);
                o_17 = t;
                t = SSLsetAnnotations(o_17, q_42);
                ;
                LocalPopChoice(m_77);
              }
            else
              {
                t = l_77;
                {
                  ATerm e_43 = NULL,p_17 = NULL;
                  t = SSLgetAnnotations(x_85);
                  e_43 = t;
                  t = y_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, y_85);
                  p_17 = t;
                  t = SSLsetAnnotations(p_17, e_43);
                }
              }
          }
          return(t);
        }
        t = c_86(t);
        ;
        LocalPopChoice(k_77);
      }
    else
      {
        t = j_77;
        t = (ATerm) ATempty;
      }
    e_85 = t;
    t = SSL_implode_string(e_85);
  }
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
  ATerm h_86 = NULL,i_86 = NULL,q_86 = NULL,t_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,f_87 = NULL,g_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,i_88 = NULL,p_88 = NULL,r_88 = NULL,v_88 = NULL,x_88 = NULL,y_88 = NULL,e_89 = NULL,g_89 = NULL,h_89 = NULL,k_89 = NULL,m_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,s_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  h_86 = t;
  t = term_d_59;
  w_89 = t;
  t = term_n_77;
  x_89 = t;
  t = term_o_77;
  t = q_13(w_89, x_89, t);
  t = term_p_30;
  s_89 = t;
  t = term_f_34;
  v_89 = t;
  t = term_q_77;
  t = q_13(s_89, v_89, t);
  t = term_d_35;
  q_89 = t;
  t = term_k_30;
  r_89 = t;
  t = term_r_77;
  t = q_13(q_89, r_89, t);
  t = term_g_35;
  o_89 = t;
  t = term_e_36;
  p_89 = t;
  t = term_s_77;
  t = q_13(o_89, p_89, t);
  t = term_t_77;
  t = xtc_find_path_0_0(t);
  m_87 = t;
  t = term_x_77;
  t = xtc_find_path_0_0(t);
  n_87 = t;
  t = term_y_77;
  t = xtc_find_path_0_0(t);
  o_87 = t;
  t = term_g_52;
  k_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_87), term_g_52), n_87), term_g_52), m_87), term_g_52);
  m_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_87), term_g_52), n_87), term_g_52), m_87), term_g_52));
  t = q_13(k_89, m_89, t);
  t = term_b_33;
  g_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_78), term_z_77);
  h_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, term_a_78), term_z_77));
  t = q_13(g_89, h_89, t);
  t = term_b_78;
  t = xtc_find_path_0_0(t);
  l_87 = t;
  t = term_c_78;
  e_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_87, term_c_78);
  t = r_13(l_87, e_89, t);
  a_87 = t;
  t = term_b_78;
  t = xtc_find_path_0_0(t);
  g_87 = t;
  t = term_c_78;
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_87, term_c_78);
  t = r_13(g_87, y_88, t);
  b_87 = t;
  t = term_f_78;
  t = xtc_find_path_0_0(t);
  f_87 = t;
  t = term_c_78;
  x_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_87, term_c_78);
  t = r_13(f_87, x_88, t);
  c_87 = t;
  t = term_f_31;
  r_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_87), term_g_52), b_87), term_g_52), a_87), term_g_52);
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_87), term_g_52), b_87), term_g_52), a_87), term_g_52));
  t = q_13(r_88, v_88, t);
  t = term_b_78;
  t = xtc_find_path_0_0(t);
  z_86 = t;
  t = term_g_78;
  p_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, term_g_78);
  t = r_13(z_86, p_88, t);
  i_86 = t;
  t = term_f_78;
  t = xtc_find_path_0_0(t);
  t_86 = t;
  t = term_g_78;
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_86, term_g_78);
  t = r_13(t_86, i_88, t);
  q_86 = t;
  t = term_y_30;
  t_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_78), term_p_78), q_86), term_h_78), term_n_78), term_i_78), i_86), term_h_78);
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_78), term_p_78), q_86), term_h_78), term_n_78), term_i_78), i_86), term_h_78));
  t = q_13(t_87, u_87, t);
  t = term_h_48;
  r_87 = t;
  t = (ATerm) ATinsert(ATempty, term_t_78);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_48, (ATerm) ATinsert(ATempty, term_t_78));
  t = q_13(r_87, s_87, t);
  t = h_86;
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm w_90 = NULL;
  w_90 = t;
  t = term_d_48;
  t = get_config_0_0(t);
  t = debug_1_0(e_30, t);
  t = w_90;
  return(t);
}
ATerm e_30 (ATerm t)
{
  t = term_u_78;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm v_78 = t;
    int w_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
        t = term_r_67;
        t = get_config_0_0(t);
        t = term_x_78;
        t = xtc_find_0_0(t);
        d_90 = t;
        t = term_h_32;
        f_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_90, term_h_32);
        t = z_12(d_90, f_90, t);
        t = term_k_30;
        e_90 = t;
        t = SSL_exit(e_90);
        ;
        LocalPopChoice(w_78);
      }
    else
      {
        t = v_78;
      }
    {
      ATerm y_78 = t;
      int z_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_90 = NULL;
          t = term_w_67;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_k_30;
          j_90 = t;
          t = SSL_exit(j_90);
          ;
          LocalPopChoice(z_78);
        }
      else
        {
          t = y_78;
        }
      {
        ATerm a_79 = t;
        int b_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_90 = NULL;
            o_90 = t;
            t = term_d_48;
            t = get_config_0_0(t);
            t = o_90;
            ;
            LocalPopChoice(b_79);
          }
        else
          {
            t = a_79;
            {
              ATerm r_90 = NULL,s_90 = NULL,v_90 = NULL;
              t = term_r_30;
              s_90 = t;
              t = (ATerm) ATinsert(ATempty, term_f_79);
              v_90 = t;
              t = SSL_printnl(s_90, v_90);
              t = term_f_34;
              r_90 = t;
              t = SSL_exit(r_90);
              t = (ATerm) ATinsert(ATempty, term_f_79);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(d_30, t);
      }
    }
  }
  return(t);
}
ATerm f_30 (ATerm t)
{
  t = if_verbose1_1_0(h_30, t);
  return(t);
}
ATerm g_30 (ATerm t)
{
  t = xtc_temp_files_1_0(i_30, t);
  return(t);
}
ATerm h_30 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  t = term_r_30;
  a_91 = t;
  t = (ATerm) ATinsert(CheckATermList(z_90), term_g_79);
  b_91 = t;
  t = SSL_printnl(a_91, b_91);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(CheckATermList(z_90), term_g_79));
  return(t);
}
ATerm i_30 (ATerm t)
{
  ATerm j_79 = t;
  int k_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_91 = NULL;
      t = term_d_48;
      t = get_config_0_0(t);
      c_91 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_91);
      ;
      LocalPopChoice(k_79);
    }
  else
    {
      t = j_79;
      t = term_x_50;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm j_30 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = run_time_0_0(t);
  d_91 = t;
  t = term_r_30;
  e_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_79), d_91), term_l_79);
  f_91 = t;
  t = SSL_printnl(e_91, f_91);
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_79), d_91), term_l_79));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm n_79 = t;
  int o_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_90 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(f_30, g_30, t);
      t = if_verbose2_1_0(j_30, t);
      t = term_k_30;
      x_90 = t;
      t = SSL_exit(x_90);
      ;
      LocalPopChoice(o_79);
    }
  else
    {
      t = n_79;
      {
        ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,l_91 = NULL;
        t = run_time_0_0(t);
        h_91 = t;
        t = term_r_30;
        j_91 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_79), h_91), term_p_79);
        l_91 = t;
        t = SSL_printnl(j_91, l_91);
        t = term_f_34;
        i_91 = t;
        t = SSL_exit(i_91);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
