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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Version_0;
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
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_r_77;
ATerm term_l_77;
ATerm term_h_77;
ATerm term_e_77;
ATerm term_d_77;
ATerm term_v_76;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_m_76;
ATerm term_l_76;
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
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_p_75;
ATerm term_t_74;
ATerm term_p_74;
ATerm term_c_74;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_i_72;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_m_70;
ATerm term_j_70;
ATerm term_i_70;
ATerm term_h_70;
ATerm term_g_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_r_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_g_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_p_65;
ATerm term_o_65;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_e_65;
ATerm term_c_65;
ATerm term_v_64;
ATerm term_r_64;
ATerm term_p_64;
ATerm term_i_64;
ATerm term_e_64;
ATerm term_c_64;
ATerm term_x_63;
ATerm term_v_63;
ATerm term_r_63;
ATerm term_p_63;
ATerm term_j_63;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_b_62;
ATerm term_v_61;
ATerm term_t_61;
ATerm term_o_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_d_61;
ATerm term_w_60;
ATerm term_v_60;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_g_60;
ATerm term_c_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_s_59;
ATerm term_j_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_e_58;
ATerm term_c_58;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_n_57;
ATerm term_m_57;
ATerm term_e_55;
ATerm term_s_54;
ATerm term_o_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_d_54;
ATerm term_b_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_m_53;
ATerm term_t_52;
ATerm term_i_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_n_51;
ATerm term_h_51;
ATerm term_g_51;
ATerm term_a_51;
ATerm term_r_50;
ATerm term_k_50;
ATerm term_c_50;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_s_49;
ATerm term_q_49;
ATerm term_o_49;
ATerm term_g_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_v_48;
ATerm term_q_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_b_48;
ATerm term_a_48;
ATerm term_v_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_d_47;
ATerm term_t_46;
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
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_z_37;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_x_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_a_30;
void init_constant_terms (void)
{
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_40, term_k_32, term_z_40);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_41, term_o_30, term_d_41);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_41, term_l_33, term_i_41);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_41, term_h_35, term_l_41);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_41, term_p_41, term_q_41);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_41, term_t_41, term_u_41);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_41, term_x_41, term_y_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_42, term_c_42, term_d_42);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_42, term_g_42, term_h_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_42, term_m_42, term_n_42);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_42, term_t_42, term_u_42);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_42, term_c_35, term_z_42);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_43, term_d_43, term_e_43);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_43, term_j_43, term_l_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_43, term_o_43, term_r_43);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_43, term_a_44, term_b_44);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_44, term_e_44, term_f_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_44, term_l_44, term_n_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_44, term_q_44, term_t_44);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_44, term_w_44, term_x_44);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_44, term_a_45, term_b_45);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_45, term_e_45, term_f_45);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_45, term_i_45, term_j_45);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_45, term_m_45, term_n_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_45, term_x_34, term_y_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_b_46, term_c_46);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_46, term_f_46, term_g_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_j_46, term_k_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym__2, term_q_49, term_v_48);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym__2, term_v_60, term_j_61);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(sym__2, term_v_60, term_w_60);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_k_48);
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(sym__2, term_g_51, term_k_48);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(sym__2, term_v_47, term_k_48);
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym__2, term_h_36, term_k_48);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_a_30);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_k_48);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_k_48);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_v_65, term_k_48);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(sym__2, term_f_48, term_k_32);
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(sym__2, term_g_48, term_a_30);
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym__2, term_s_62, term_t_62);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(sym__2, term_i_72, term_k_48);
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(sym__2, term_q_57, term_u_75);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_k_32);
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_a_30);
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_h_35);
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_l_77));
  term_l_77 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm w_11 (ATerm d_19, ATerm);
ATerm k_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm x_11 (ATerm b_19, ATerm);
ATerm x_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm y_11 (ATerm i_39, ATerm j_39, ATerm);
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm a_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm s_5 (ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm w_96 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm if_keep6_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm q_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm d_12 (ATerm);
ATerm h_12 (ATerm);
ATerm j_12 (ATerm);
ATerm o_12 (ATerm);
ATerm b_13 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm n_14 (ATerm);
ATerm t_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm z_14 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm m_15 (ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm y_15 (ATerm);
ATerm a_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm);
ATerm c_12 (ATerm r_44, ATerm s_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm);
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm pass_warnings_0_0 (ATerm);
ATerm k_17 (ATerm);
ATerm n_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm t_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm z_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm);
ATerm a_12 (ATerm i_42, ATerm j_42, ATerm);
ATerm b_12 (ATerm g_94 (ATerm), ATerm e_440, ATerm q_42, ATerm);
ATerm e_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm);
ATerm t_33 (ATerm c_33, ATerm);
ATerm u_33 (ATerm e_33, ATerm g_33, ATerm i_33, ATerm);
ATerm z_17 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm d_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm f_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm p_18 (ATerm);
ATerm t_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm c_19 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm e_19 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm h_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm i_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm r_19 (ATerm);
ATerm f_12 (ATerm s_18, ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm i_20 (ATerm);
ATerm m_20 (ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm v_20 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm c_21 (ATerm);
ATerm f_21 (ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm m_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm b_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm u_22 (ATerm);
ATerm w_22 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm y_22 (ATerm);
ATerm d_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm g_12 (ATerm s_48, ATerm t_48, ATerm);
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm j_23 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm i_12 (ATerm y_35, ATerm z_35, ATerm);
ATerm k_12 (ATerm e_36, ATerm f_36, ATerm);
ATerm l_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm m_12 (ATerm k_39, ATerm l_39, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm p_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm);
ATerm q_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm);
ATerm p_23 (ATerm);
ATerm r_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm);
ATerm s_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm);
ATerm v_12 (ATerm s_38, ATerm t_38, ATerm);
ATerm r_61 (ATerm g_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm t_12 (ATerm o_42, ATerm);
ATerm u_12 (ATerm a_39, ATerm b_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_63 (ATerm f_62, ATerm);
ATerm o_63 (ATerm k_62, ATerm l_62, ATerm m_62, ATerm);
ATerm q_63 (ATerm x_62, ATerm y_62, ATerm z_62, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_23 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm v_23 (ATerm);
ATerm x_23 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm p_67 (ATerm u_66, ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm w_12 (ATerm v_43, ATerm u_43, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm x_12 (ATerm s_43, ATerm t_43, ATerm);
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_70 (ATerm p_69, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_12 (ATerm w_43, ATerm x_43, ATerm);
ATerm v_24 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm m_25 (ATerm);
ATerm p_25 (ATerm);
ATerm r_25 (ATerm);
ATerm z_25 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm j_26 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm p_26 (ATerm);
ATerm q_26 (ATerm);
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
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm l_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm r_27 (ATerm);
ATerm s_27 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm n_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_28 (ATerm);
ATerm a_29 (ATerm);
ATerm d_29 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm z_12 (ATerm e_50, ATerm f_50, ATerm);
ATerm a_13 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm);
ATerm l_29 (ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm c_13 (ATerm p_43, ATerm q_43, ATerm);
ATerm d_13 (ATerm o_33, ATerm p_33, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm s_29 (ATerm);
ATerm t_29 (ATerm);
ATerm u_29 (ATerm);
ATerm x_29 (ATerm);
ATerm z_29 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = m_87(t);
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
      t = foldr_2_0(m_87, n_87, t);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, q_0);
      t = n_87(t);
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(f_1, g_1, t);
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
      ATerm b_30 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(f_0, o_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm h_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_o_30);
        t = geq_0_0(t);
        t = d_1;
        t = r_95(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = h_30;
        t = d_1;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = term_p_30;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_r_30);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = p_1;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_s_30;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_1 = NULL,y_1 = NULL,z_1 = NULL;
  t_1 = t;
  t = term_p_30;
  y_1 = t;
  t = (ATerm) ATinsert(ATempty, t_1);
  z_1 = t;
  t = SSL_printnl(y_1, z_1);
  t = t_1;
  return(t);
}
ATerm w_11 (ATerm d_19, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = get_outfile_1_0(e_1, t);
      }
    l_1 = t;
    t = term_x_30;
    t = get_config_0_0(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_30, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_1), l_1), term_w_30), d_19));
    t = if_verbose3_1_0(i_1, t);
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
        ATerm a_2 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        t = c_12(n_1, o_1, t);
        t = term_z_30;
        a_2 = t;
        t = SSL_exit(a_2);
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
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL;
  i_2 = t;
  t = term_p_30;
  j_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_31);
  k_2 = t;
  t = SSL_printnl(j_2, k_2);
  t = i_2;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  t = term_p_30;
  o_2 = t;
  t = (ATerm) ATinsert(ATempty, l_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = l_2;
  return(t);
}
ATerm x_11 (ATerm b_19, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(q_1, t);
  b_2 = t;
  t = term_c_31;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_w_30), b_19), term_d_31));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, c_2);
  t = if_verbose3_1_0(v_1, t);
  if(match_cons(t, sym__2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
  {
    ATerm w_1 (ATerm t)
    {
      ATerm q_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
      t = c_12(g_2, h_2, t);
      t = term_z_30;
      q_2 = t;
      t = SSL_exit(q_2);
      return(t);
    }
    t = fork_and_wait_1_0(w_1, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = if_verbose1_1_0(f_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm y_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_11(b_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      y_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(y_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_p_30;
  w_2 = t;
  t = (ATerm) ATinsert(CheckATermList(v_2), term_e_31);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(CheckATermList(v_2), term_e_31));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL;
      t_2 = t;
      t = term_d_31;
      t = get_config_0_0(t);
      t = t_2;
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = profile_p__2_0(x_1, e_2, t);
    }
  return(t);
}
ATerm y_11 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSL_rename(i_39, j_39);
  return(t);
}
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = r_3;
        t = v_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_31;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_k_31);
        t = m_12(s_3, u_1, t);
        t = SSL_remove(s_3);
        t = term_k_31;
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = h_31;
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL;
              t = r_3;
              t = v_0(t);
              m_2 = t;
              {
                ATerm n_31 = t;
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
                        if((s_3 != t))
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
                    t = n_31;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_3, m_2);
                t = y_11(s_3, m_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
              }
              ;
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
              t = r_3;
              t = v_0(t);
              if((s_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = term_o_31;
  x_3 = t;
  t = term_p_31;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_q_31);
  y_3 = t;
  t = c_4;
  t = comp_0_2(x_3, y_3, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), term_r_31);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = term_u_31;
  d_4 = t;
  t = term_r_31;
  t = get_config_0_0(t);
  t = foldr_3_0(r_2, conc_0_0, s_2, t);
  e_4 = t;
  t = g_4;
  t = comp_0_2(d_4, e_4, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  t = term_p_30;
  z_4 = t;
  t = (ATerm) ATinsert(ATempty, term_v_31);
  a_5 = t;
  t = SSL_printnl(z_4, a_5);
  t = y_4;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_5 = ATgetArgument(t, 0);
            {
              ATerm a_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(g_5);
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_5);
              u_0 = t;
              t = SSLsetAnnotations(u_0, a_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_5;
          }
        LocalPopChoice(x_31);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = w_31;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
    t = if_keep1_1_0(j_3, t);
    t = olevel_2_0(m_3, o_3, t);
    t = olevel_2_0(m_5, s_5, t);
    f_5 = t;
    {
      ATerm y_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              u_6 = ATgetArgument(t, 0);
              {
                ATerm j_4 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(f_5);
                j_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_6);
                z_0 = t;
                t = SSLsetAnnotations(z_0, j_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = f_5;
            }
          LocalPopChoice(z_31);
          t = xtc_transform_file_2_0(c_6, g_6, t);
        }
      else
        {
          t = y_31;
          t = xtc_transform_term_2_0(h_6, i_6, t);
        }
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      e_5 = t;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                c_7 = ATgetArgument(t, 0);
                {
                  ATerm n_4 = NULL,b_1 = NULL;
                  t = SSLgetAnnotations(e_5);
                  n_4 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, c_7);
                  b_1 = t;
                  t = SSLsetAnnotations(b_1, n_4);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_5;
              }
            LocalPopChoice(b_32);
            t = xtc_transform_file_2_0(j_6, pass_verbose_0_0, t);
          }
        else
          {
            t = a_32;
            t = xtc_transform_term_2_0(k_6, pass_verbose_0_0, t);
          }
        t = rename_to_1_0(m_6, t);
      }
    }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  t = term_p_30;
  c_5 = t;
  t = (ATerm) ATinsert(CheckATermList(b_5), term_c_32);
  d_5 = t;
  t = SSL_printnl(c_5, d_5);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(CheckATermList(b_5), term_c_32));
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_5 = NULL;
  t = pass_verbose_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(n_5), term_g_32);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm o_5 = NULL;
  t = pass_verbose_0_0(t);
  o_5 = t;
  t = (ATerm) ATinsert(CheckATermList(o_5), term_g_32);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  q_5 = t;
  {
    ATerm t_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_5 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(q_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_5);
              w_0 = t;
              t = SSLsetAnnotations(w_0, f_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_5;
          }
        LocalPopChoice(z_32);
        t = xtc_transform_file_2_0(p_3, t_3, t);
      }
    else
      {
        t = t_32;
        t = xtc_transform_term_2_0(u_3, a_4, t);
      }
    t = if_keep1_1_0(f_4, t);
    p_5 = t;
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              l_6 = ATgetArgument(t, 0);
              {
                ATerm z_3 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(p_5);
                z_3 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_6);
                y_0 = t;
                t = SSLsetAnnotations(y_0, z_3);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_5;
            }
          LocalPopChoice(b_33);
          t = xtc_transform_file_2_0(k_4, l_4, t);
        }
      else
        {
          t = a_33;
          t = xtc_transform_term_2_0(m_4, o_4, t);
        }
      t = if_keep1_1_0(p_4, t);
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_g_32);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_6 = NULL;
  t = pass_verbose_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_6), term_g_32);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_g_32);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_g_32);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(x_5, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = save_as_1_0(a_6, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_g_32);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm x_6 = NULL;
  t = pass_verbose_0_0(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(x_6), term_g_32);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = get_outfile_1_0(n_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(z_2, c_3, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_k_32);
        t = geq_0_0(t);
        t = m_7;
        t = s_96(t);
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = m_7;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,d_8 = NULL;
        t = t_7;
        t = o_104(t);
        a_8 = t;
        t = term_g_34;
        t = get_config_0_0(t);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, a_8);
        t = geq_0_0(t);
        t = t_7;
        t = p_104(t);
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        t = t_7;
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_6 = NULL;
  t = pass_verbose_0_0(t);
  b_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_g_32);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_g_32);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_g_32);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_g_32);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  r_9 = t;
  {
    ATerm i_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        {
          ATerm p_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_5 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  y_5 = ATgetArgument(t, 0);
                  {
                    ATerm p_6 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(r_9);
                    p_6 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, y_5);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, p_6);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_9;
                }
              LocalPopChoice(r_34);
              t = xtc_transform_file_2_0(r_6, s_6, t);
            }
          else
            {
              t = p_34;
              t = xtc_transform_term_2_0(t_6, v_6, t);
            }
        }
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = i_34;
        t = r_9;
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  u_7 = ATgetArgument(t, 0);
                  {
                    ATerm e_8 = NULL,n_3 = NULL;
                    t = SSLgetAnnotations(r_9);
                    e_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, u_7);
                    n_3 = t;
                    t = SSLsetAnnotations(n_3, e_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = r_9;
                }
              LocalPopChoice(t_34);
              t = xtc_transform_file_2_0(y_6, z_6, t);
            }
          else
            {
              t = s_34;
              t = xtc_transform_term_2_0(a_7, b_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_x_34);
        t = geq_0_0(t);
        t = x_9;
        t = w_96(t);
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = x_9;
      }
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_10, term_c_35);
        t = geq_0_0(t);
        t = f_10;
        t = v_96(t);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = f_10;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  {
    ATerm e_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_10, term_h_35);
        t = geq_0_0(t);
        t = m_10;
        t = x_96(t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = e_35;
        t = m_10;
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL;
  g_14 = t;
  t = term_p_30;
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, term_i_35);
  k_14 = t;
  t = SSL_printnl(j_14, k_14);
  t = g_14;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm q_14 = NULL;
  t = if_verbose3_1_0(h_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = olevel_2_0(v_7, w_7, t);
  t = olevel_2_0(k_8, l_8, t);
  q_14 = t;
  {
    ATerm j_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_17 = ATgetArgument(t, 0);
            {
              ATerm f_11 = NULL,t_4 = NULL;
              t = SSLgetAnnotations(q_14);
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
              t_4 = t;
              t = SSLsetAnnotations(t_4, f_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_14;
          }
        LocalPopChoice(o_35);
        t = xtc_transform_file_2_0(b_10, d_10, t);
      }
    else
      {
        t = j_35;
        t = xtc_transform_term_2_0(e_10, g_10, t);
      }
    t = olevel_2_0(h_10, j_10, t);
    t = olevel_2_0(e_11, g_11, t);
    t = olevel_2_0(u_11, d_12, t);
    t = olevel_2_0(p_13, q_13, t);
    t = olevel_2_0(f_15, g_15, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm l_14 = NULL,o_14 = NULL,p_14 = NULL;
  l_14 = t;
  t = term_p_30;
  o_14 = t;
  t = (ATerm) ATinsert(CheckATermList(l_14), term_q_35);
  p_14 = t;
  t = SSL_printnl(o_14, p_14);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(CheckATermList(l_14), term_q_35));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = term_g_34;
  t = get_config_0_0(t);
  t = debug_1_0(i_7, t);
  t = r_14;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  {
    ATerm s_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_14 = ATgetArgument(t, 0);
            {
              ATerm j_8 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(s_14);
              j_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_14);
              q_3 = t;
              t = SSLsetAnnotations(q_3, j_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_14;
          }
        LocalPopChoice(u_35);
        t = xtc_transform_file_2_0(l_7, n_7, t);
      }
    else
      {
        t = s_35;
        t = xtc_transform_term_2_0(o_7, p_7, t);
      }
    t = if_keep1_1_0(r_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm a_15 = NULL;
  t = pass_verbose_0_0(t);
  a_15 = t;
  t = (ATerm) ATinsert(CheckATermList(a_15), term_g_32);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm b_15 = NULL;
  t = pass_verbose_0_0(t);
  b_15 = t;
  t = (ATerm) ATinsert(CheckATermList(b_15), term_g_32);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = save_as_1_0(s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_v_35;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_15;
        {
          ATerm d_36 = t;
          if((PushChoice() == 0))
            {
              t = term_h_36;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_36;
            }
          t = q_15;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_9 = ATgetArgument(t, 0);
                    {
                      ATerm a_10 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(q_15);
                      a_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, a_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = q_15;
                  }
                LocalPopChoice(j_36);
                t = xtc_transform_file_2_0(b_8, c_8, t);
              }
            else
              {
                t = i_36;
                t = xtc_transform_term_2_0(f_8, g_8, t);
              }
            t = if_keep2_1_0(h_8, t);
          }
        }
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = q_15;
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm n_9 = NULL;
  t = pass_verbose_0_0(t);
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_9), term_g_32);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm q_9 = NULL;
  t = pass_verbose_0_0(t);
  q_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_9), term_g_32);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = save_as_1_0(i_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm s_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL;
  z_15 = t;
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_16 = ATgetArgument(t, 0);
            {
              ATerm l_10 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(z_15);
              l_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_16);
              w_3 = t;
              t = SSLsetAnnotations(w_3, l_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_15;
          }
        LocalPopChoice(n_36);
        t = xtc_transform_file_2_0(m_8, o_8, t);
      }
    else
      {
        t = m_36;
        t = xtc_transform_term_2_0(q_8, u_8, t);
      }
    t = if_keep6_1_0(v_8, t);
    x_15 = t;
    {
      ATerm o_36 = t;
      int p_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_16 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              q_16 = ATgetArgument(t, 0);
              {
                ATerm t_10 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(x_15);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
                q_4 = t;
                t = SSLsetAnnotations(q_4, t_10);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = x_15;
            }
          LocalPopChoice(p_36);
          t = xtc_transform_file_2_0(x_8, y_8, t);
        }
      else
        {
          t = o_36;
          t = xtc_transform_term_2_0(k_9, l_9, t);
        }
      w_15 = t;
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_16 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                x_16 = ATgetArgument(t, 0);
                {
                  ATerm x_10 = NULL,r_4 = NULL;
                  t = SSLgetAnnotations(w_15);
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, x_16);
                  r_4 = t;
                  t = SSLsetAnnotations(r_4, x_10);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_15;
              }
            LocalPopChoice(r_36);
            t = xtc_transform_file_2_0(m_9, o_9, t);
          }
        else
          {
            t = q_36;
            t = xtc_transform_term_2_0(p_9, s_9, t);
          }
        t = if_keep4_1_0(t_9, t);
        s_15 = t;
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_17 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  h_17 = ATgetArgument(t, 0);
                  {
                    ATerm b_11 = NULL,s_4 = NULL;
                    t = SSLgetAnnotations(s_15);
                    b_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_17);
                    s_4 = t;
                    t = SSLsetAnnotations(s_4, b_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = s_15;
                }
              LocalPopChoice(t_36);
              t = xtc_transform_file_2_0(v_9, w_9, t);
            }
          else
            {
              t = s_36;
              t = xtc_transform_term_2_0(y_9, z_9, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm i_16 = NULL;
  t = pass_verbose_0_0(t);
  i_16 = t;
  t = (ATerm) ATinsert(CheckATermList(i_16), term_g_32);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm j_16 = NULL;
  t = pass_verbose_0_0(t);
  j_16 = t;
  t = (ATerm) ATinsert(CheckATermList(j_16), term_g_32);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = save_as_1_0(w_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm s_16 = NULL;
  t = pass_verbose_0_0(t);
  s_16 = t;
  t = (ATerm) ATinsert(CheckATermList(s_16), term_g_32);
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm t_16 = NULL;
  t = pass_verbose_0_0(t);
  t_16 = t;
  t = (ATerm) ATinsert(CheckATermList(t_16), term_g_32);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm b_17 = NULL;
  t = pass_verbose_0_0(t);
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(b_17), term_g_32);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm d_17 = NULL;
  t = pass_verbose_0_0(t);
  d_17 = t;
  t = (ATerm) ATinsert(CheckATermList(d_17), term_g_32);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = save_as_1_0(u_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm l_17 = NULL;
  t = pass_verbose_0_0(t);
  l_17 = t;
  t = (ATerm) ATinsert(CheckATermList(l_17), term_g_32);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm m_17 = NULL;
  t = pass_verbose_0_0(t);
  m_17 = t;
  t = (ATerm) ATinsert(CheckATermList(m_17), term_g_32);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm u_17 = NULL;
  t = pass_verbose_0_0(t);
  u_17 = t;
  t = (ATerm) ATinsert(CheckATermList(u_17), term_g_32);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_b_37;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm v_17 = NULL;
  t = pass_verbose_0_0(t);
  v_17 = t;
  t = (ATerm) ATinsert(CheckATermList(v_17), term_g_32);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,a_18 = NULL;
  a_18 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_18 = ATgetArgument(t, 0);
            {
              ATerm j_11 = NULL,u_4 = NULL;
              t = SSLgetAnnotations(a_18);
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_18);
              u_4 = t;
              t = SSLsetAnnotations(u_4, j_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_18;
          }
        LocalPopChoice(d_37);
        t = xtc_transform_file_2_0(k_10, n_10, t);
      }
    else
      {
        t = c_37;
        t = xtc_transform_term_2_0(o_10, q_10, t);
      }
    t = bound_unbound_vars_0_0(t);
    x_17 = t;
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              o_18 = ATgetArgument(t, 0);
              {
                ATerm n_11 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(x_17);
                n_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_18);
                v_4 = t;
                t = SSLsetAnnotations(v_4, n_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = x_17;
            }
          LocalPopChoice(f_37);
          t = xtc_transform_file_2_0(r_10, s_10, t);
        }
      else
        {
          t = e_37;
          t = xtc_transform_term_2_0(u_10, v_10, t);
        }
      w_17 = t;
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                j_19 = ATgetArgument(t, 0);
                {
                  ATerm r_11 = NULL,w_4 = NULL;
                  t = SSLgetAnnotations(w_17);
                  r_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, j_19);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, r_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_17;
              }
            LocalPopChoice(h_37);
            t = xtc_transform_file_2_0(w_10, y_10, t);
          }
        else
          {
            t = g_37;
            t = xtc_transform_term_2_0(z_10, a_11, t);
          }
        t = if_keep4_1_0(c_11, t);
      }
    }
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm i_18 = NULL;
  t = pass_verbose_0_0(t);
  i_18 = t;
  t = (ATerm) ATinsert(CheckATermList(i_18), term_g_32);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm j_18 = NULL;
  t = pass_verbose_0_0(t);
  j_18 = t;
  t = (ATerm) ATinsert(CheckATermList(j_18), term_g_32);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_g_32);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm a_19 = NULL;
  t = pass_verbose_0_0(t);
  a_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), term_g_32);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm n_19 = NULL;
  t = pass_verbose_0_0(t);
  n_19 = t;
  t = (ATerm) ATinsert(CheckATermList(n_19), term_g_32);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm o_19 = NULL;
  t = pass_verbose_0_0(t);
  o_19 = t;
  t = (ATerm) ATinsert(CheckATermList(o_19), term_g_32);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  q_19 = t;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_19 = ATgetArgument(t, 0);
            {
              ATerm v_11 = NULL,x_4 = NULL;
              t = SSLgetAnnotations(q_19);
              v_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_19);
              x_4 = t;
              t = SSLsetAnnotations(x_4, v_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(s_37);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = r_37;
        t = xtc_transform_term_2_0(k_11, l_11, t);
      }
    p_19 = t;
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_20 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              h_20 = ATgetArgument(t, 0);
              {
                ATerm n_12 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(p_19);
                n_12 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
                h_5 = t;
                t = SSLsetAnnotations(h_5, n_12);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_19;
            }
          LocalPopChoice(u_37);
          t = xtc_transform_file_2_0(m_11, o_11, t);
        }
      else
        {
          t = t_37;
          t = xtc_transform_term_2_0(p_11, q_11, t);
        }
      t = if_keep2_1_0(s_11, t);
    }
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm a_20 = NULL;
  t = pass_verbose_0_0(t);
  a_20 = t;
  t = (ATerm) ATinsert(CheckATermList(a_20), term_g_32);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm b_20 = NULL;
  t = pass_verbose_0_0(t);
  b_20 = t;
  t = (ATerm) ATinsert(CheckATermList(b_20), term_g_32);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_g_32);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_g_32);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL;
  n_20 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_20 = ATgetArgument(t, 0);
            {
              ATerm f_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(n_20);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_20);
              i_5 = t;
              t = SSLsetAnnotations(i_5, f_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_20;
          }
        LocalPopChoice(b_38);
        t = xtc_transform_file_2_0(h_12, j_12, t);
      }
    else
      {
        t = a_38;
        t = xtc_transform_term_2_0(o_12, b_13, t);
      }
    t = if_keep5_1_0(e_13, t);
    l_20 = t;
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              l_21 = ATgetArgument(t, 0);
              {
                ATerm j_13 = NULL,k_5 = NULL;
                t = SSLgetAnnotations(l_20);
                j_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_21);
                k_5 = t;
                t = SSLsetAnnotations(k_5, j_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_20;
            }
          LocalPopChoice(d_38);
          t = xtc_transform_file_2_0(h_13, i_13, t);
        }
      else
        {
          t = c_38;
          t = xtc_transform_term_2_0(k_13, l_13, t);
        }
      t = if_keep5_1_0(m_13, t);
    }
  }
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm d_21 = NULL;
  t = pass_verbose_0_0(t);
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_g_32);
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_g_32);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = save_as_1_0(g_13, t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm n_21 = NULL;
  t = pass_verbose_0_0(t);
  n_21 = t;
  t = (ATerm) ATinsert(CheckATermList(n_21), term_g_32);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm r_21 = NULL;
  t = pass_verbose_0_0(t);
  r_21 = t;
  t = (ATerm) ATinsert(CheckATermList(r_21), term_g_32);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = save_as_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  v_21 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_22 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(v_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_22);
              r_5 = t;
              t = SSLsetAnnotations(r_5, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(i_38);
        t = xtc_transform_file_2_0(s_13, t_13, t);
      }
    else
      {
        t = h_38;
        t = xtc_transform_term_2_0(u_13, w_13, t);
      }
    t = if_keep3_1_0(x_13, t);
    u_21 = t;
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              l_22 = ATgetArgument(t, 0);
              {
                ATerm r_13 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(u_21);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_22);
                t_5 = t;
                t = SSLsetAnnotations(t_5, r_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = u_21;
            }
          LocalPopChoice(l_38);
          t = xtc_transform_file_2_0(a_14, b_14, t);
        }
      else
        {
          t = k_38;
          t = xtc_transform_term_2_0(c_14, e_14, t);
        }
      t = if_keep3_1_0(f_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(i_14, t);
      t_21 = t;
      {
        ATerm m_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                v_22 = ATgetArgument(t, 0);
                {
                  ATerm v_13 = NULL,u_5 = NULL;
                  t = SSLgetAnnotations(t_21);
                  v_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, v_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_21;
              }
            LocalPopChoice(o_38);
            t = xtc_transform_file_2_0(t_14, v_14, t);
          }
        else
          {
            t = m_38;
            t = xtc_transform_term_2_0(w_14, x_14, t);
          }
        t = if_keep3_1_0(z_14, t);
      }
    }
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_g_32);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_g_32);
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = save_as_1_0(y_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm o_22 = NULL;
  t = pass_verbose_0_0(t);
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), term_g_32);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm p_22 = NULL;
  t = pass_verbose_0_0(t);
  p_22 = t;
  t = (ATerm) ATinsert(CheckATermList(p_22), term_g_32);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = save_as_1_0(h_14, t);
  return(t);
}
ATerm h_14 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = save_as_1_0(n_14, t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm z_22 = NULL;
  t = pass_verbose_0_0(t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_22), term_g_32);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm a_23 = NULL;
  t = pass_verbose_0_0(t);
  a_23 = t;
  t = (ATerm) ATinsert(CheckATermList(a_23), term_g_32);
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = save_as_1_0(e_15, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  c_23 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_23 = ATgetArgument(t, 0);
            {
              ATerm z_13 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(c_23);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
              v_5 = t;
              t = SSLsetAnnotations(v_5, z_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_23;
          }
        LocalPopChoice(x_38);
        t = xtc_transform_file_2_0(h_15, j_15, t);
      }
    else
      {
        t = w_38;
        t = xtc_transform_term_2_0(k_15, m_15, t);
      }
    t = if_keep1_1_0(o_15, t);
    b_23 = t;
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_23 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              r_23 = ATgetArgument(t, 0);
              {
                ATerm d_14 = NULL,w_5 = NULL;
                t = SSLgetAnnotations(b_23);
                d_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_23);
                w_5 = t;
                t = SSLsetAnnotations(w_5, d_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = b_23;
            }
          LocalPopChoice(z_38);
          t = xtc_transform_file_2_0(u_15, v_15, t);
        }
      else
        {
          t = y_38;
          t = xtc_transform_term_2_0(y_15, a_16, t);
        }
      t = if_keep1_1_0(c_16, t);
    }
  }
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm k_23 = NULL;
  t = pass_verbose_0_0(t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), term_g_32);
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm l_23 = NULL;
  t = pass_verbose_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_g_32);
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = save_as_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm t_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), term_g_32);
  return(t);
}
ATerm y_15 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm u_23 = NULL;
  t = pass_verbose_0_0(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), term_g_32);
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = save_as_1_0(d_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  t = profile_p__2_0(e_7, f_7, t);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm j_25 = NULL;
  t = pass_verbose_0_0(t);
  j_25 = t;
  t = (ATerm) ATinsert(CheckATermList(j_25), term_q_39);
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_q_39);
  return(t);
}
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  {
    ATerm f_16 (ATerm t)
    {
      t = get_outfile_1_0(p_73, t);
      if(((x_24 != NULL) && (x_24 != t)))
        _fail(t);
      else
        x_24 = t;
      return(t);
    }
    t = copy_to_1_0(f_16, t);
    {
      ATerm s_39 = t;
      int t_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_25 = NULL,i_25 = NULL;
          i_25 = t;
          if(match_cons(t, sym_FILE_1))
            {
              h_25 = ATgetArgument(t, 0);
              {
                ATerm m_14 = NULL,z_7 = NULL;
                t = SSLgetAnnotations(i_25);
                m_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_25);
                z_7 = t;
                t = SSLsetAnnotations(z_7, m_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = i_25;
            }
          LocalPopChoice(t_39);
          t = xtc_transform_file_2_0(g_16, h_16, t);
        }
      else
        {
          t = s_39;
          t = xtc_transform_term_2_0(l_16, m_16, t);
        }
      {
        ATerm n_16 (ATerm t)
        {
          ATerm l_25 = NULL;
          t = term_v_39;
          l_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), term_v_39);
          t = d_13(not_null(x_24), l_25, t);
          if(((y_24 != NULL) && (y_24 != t)))
            _fail(t);
          else
            y_24 = t;
          return(t);
        }
        t = copy_to_1_0(n_16, t);
        t = term_p_30;
        a_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_24)), term_e_40), not_null(x_24)), term_c_40));
        b_25 = t;
        t = SSL_printnl(a_25, b_25);
        t = z_24;
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_25, term_o_30);
        t = geq_0_0(t);
        t = o_25;
        t = t_96(t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = o_25;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = term_n_30;
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = term_k_32;
      }
    t_25 = t;
    t = term_k_32;
    v_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_25, term_k_32);
    t = k_12(t_25, v_25, t);
    u_25 = t;
    t = SSL_int_to_string(u_25);
    s_25 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, s_25), term_n_30);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(h_104, i_104, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm c_12 (ATerm r_44, ATerm s_44, ATerm t)
{
  t = SSL_execvp(r_44, s_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_27 = ATgetArgument(t, 0);
      {
        ATerm p_15 = NULL,t_15 = NULL;
        t = SSL_int_to_string(e_27);
        p_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_40), p_15), term_n_40);
        t_15 = t;
        t = SSL_concat_strings(t_15);
      }
    }
  else
    {
      ATerm y_16 = NULL,z_16 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_27 = ATgetArgument(t, 0);
          f_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_27);
      y_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_27), term_r_40), y_16), term_q_40), e_27);
      z_16 = t;
      t = SSL_concat_strings(z_16);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm m_27 = NULL;
  ATerm o_16 (ATerm t)
  {
    t = v_81(t);
    if(((m_27 != NULL) && (m_27 != t)))
      _fail(t);
    else
      m_27 = t;
    return(t);
  }
  t = fetch_1_0(o_16, t);
  t = not_null(m_27);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_40 = ATgetArgument(t, 0);
              if((n_27 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_40 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_46), term_h_46), term_d_46), term_z_45), term_o_45), term_k_45), term_g_45), term_c_45), term_y_44), term_u_44), term_o_44), term_j_44), term_c_44), term_y_43), term_m_43), term_g_43), term_a_43), term_v_42), term_r_42), term_k_42), term_e_42), term_z_41), term_v_41), term_r_41), term_m_41), term_j_41), term_f_41), term_a_41);
        t = fetch_elem_1_0(r_16, t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_27);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_27 = NULL,m_28 = NULL;
  w_27 = t;
  {
    ATerm m_46 = t;
    int n_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_46 = ATgetArgument(t, 0);
            m_28 = ATgetArgument(t, 1);
            {
              ATerm p_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_46);
        {
          ATerm q_46 = t;
          int r_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17 = NULL,g_18 = NULL,h_18 = NULL;
              t = m_28;
              {
                ATerm s_46 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_46;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                y_17 = t;
                t = term_p_30;
                g_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, y_17), term_t_46);
                h_18 = t;
                t = SSL_printnl(g_18, h_18);
                t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, y_17), term_t_46));
              }
              ;
              LocalPopChoice(r_46);
            }
          else
            {
              t = q_46;
              t = w_27;
            }
        }
      }
    else
      {
        t = m_46;
        t = w_27;
      }
    t = w_27;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  z_28 = t;
  t = fork_0_0(t);
  y_28 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_28;
        t = d_97(t);
        ;
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        t = SSL_waitpid(y_28);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_46 = ATgetArgument(t, 0);
            if(((ATgetType(w_46) != AT_INT) || (ATgetInt((ATermInt) w_46) != 0)))
              _fail(t);
            {
              ATerm b_47 = ATgetArgument(t, 1);
            }
            {
              ATerm c_47 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_28;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  c_29 = t;
  t = y_103(t);
  t = xtc_find_0_0(t);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
  {
    ATerm v_16 (ATerm t)
    {
      ATerm f_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
      t = c_12(b_29, c_29, t);
      t = term_z_30;
      f_29 = t;
      t = SSL_exit(f_29);
      return(t);
    }
    t = fork_and_wait_1_0(v_16, t);
    t = c_29;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,y_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_18 = NULL,v_18 = NULL;
      t = v_29;
      t = xtc_new_file_0_0(t);
      u_18 = t;
      t = s_0(t);
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_18, (ATerm) ATinsert(ATinsert(ATempty, u_18), term_w_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(u_18);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_18);
    }
  else
    {
      ATerm g_19 = NULL,k_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_29;
      t = xtc_new_file_0_0(t);
      g_19 = t;
      t = s_0(t);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_19), term_w_30), y_29), term_d_47));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(g_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_19);
    }
  return(t);
}
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm t)
{
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_39 = NULL,n_39 = NULL;
      n_39 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_39 = ATgetArgument(t, 0);
          {
            ATerm e_26 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(n_39);
            e_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_39);
            n_8 = t;
            t = SSLsetAnnotations(n_8, e_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_39;
        }
      LocalPopChoice(g_47);
      {
        ATerm w_16 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm a_17 (ATerm t)
        {
          ATerm p_39 = NULL;
          t = pass_verbose_0_0(t);
          p_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), p_39), (ATerm) ATinsert(ATempty, term_g_32));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(w_16, a_17, t);
      }
    }
  else
    {
      t = f_47;
      {
        ATerm c_17 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm f_17 (ATerm t)
        {
          ATerm r_39 = NULL;
          t = pass_verbose_0_0(t);
          r_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), r_39), (ATerm) ATinsert(ATempty, term_g_32));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(c_17, f_17, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL;
  c_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_30;
      t = o_87(t);
    }
  else
    {
      ATerm k_30 = NULL,l_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_30 = ATgetFirst((ATermList) t);
          g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_30;
      t = q_87(t);
      k_30 = t;
      t = g_30;
      t = foldr_3_0(o_87, p_87, q_87, t);
      l_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_30, l_30);
      t = p_87(t);
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_30), term_j_47);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_j_47;
  t = get_config_0_0(t);
  t = foldr_3_0(i_17, conc_0_0, j_17, t);
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_k_47;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm a_21 = NULL;
  t = pass_verbose_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), term_g_32);
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = term_k_47;
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm b_21 = NULL;
  t = pass_verbose_0_0(t);
  b_21 = t;
  t = (ATerm) ATinsert(CheckATermList(b_21), term_g_32);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = get_outfile_1_0(t_17, t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  {
    ATerm o_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
        t = term_v_47;
        t = get_config_0_0(t);
        t = s_31;
        {
          ATerm w_47 = t;
          int x_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_31;
              {
                ATerm y_47 = t;
                int z_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        u_20 = ATgetArgument(t, 0);
                        {
                          ATerm s_21 = NULL,p_8 = NULL;
                          t = SSLgetAnnotations(s_31);
                          s_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, u_20);
                          p_8 = t;
                          t = SSLsetAnnotations(p_8, s_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = s_31;
                      }
                    LocalPopChoice(z_47);
                    t = xtc_transform_file_2_0(k_17, n_17, t);
                  }
                else
                  {
                    t = y_47;
                    t = xtc_transform_term_2_0(p_17, q_17, t);
                  }
              }
              ;
              LocalPopChoice(x_47);
            }
          else
            {
              t = w_47;
              {
                ATerm g_21 = NULL,j_21 = NULL,k_21 = NULL;
                t = term_p_30;
                j_21 = t;
                t = (ATerm) ATinsert(ATempty, term_a_48);
                k_21 = t;
                t = SSL_printnl(j_21, k_21);
                t = term_k_32;
                g_21 = t;
                t = SSL_exit(g_21);
                t = (ATerm) ATinsert(ATempty, term_a_48);
              }
            }
          t = copy_to_1_0(r_17, t);
          o_20 = t;
          t = term_p_30;
          p_20 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_48));
          q_20 = t;
          t = SSL_printnl(p_20, q_20);
          t = o_20;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(q_47);
      }
    else
      {
        t = o_47;
        t = s_31;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm c_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_48;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_48);
      ;
      LocalPopChoice(e_48);
    }
  else
    {
      t = c_48;
      t = (ATerm) ATinsert(ATempty, term_g_48);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_32 = NULL;
        t = term_b_34;
        t = get_config_0_0(t);
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_32, term_l_33);
        t = geq_0_0(t);
        t = f_32;
        t = u_96(t);
        ;
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = f_32;
      }
  }
  return(t);
}
ATerm z_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm t)
{
  ATerm j_32 = NULL;
  t = term_k_48;
  t = o_73(t);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(w_18), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_l_48, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_32), (ATerm) ATempty))))));
  return(t);
}
ATerm a_12 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_32);
  return(t);
}
ATerm b_12 (ATerm g_94 (ATerm), ATerm e_440, ATerm q_42, ATerm t)
{
  ATerm m_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_440, term_q_48);
  t = open_stream_0_0(t);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_32, q_42);
  t = g_94(t);
  t = fclose_0_0(t);
  t = q_42;
  return(t);
}
ATerm e_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,s_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t = n_92(t);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_32, m_37, k_37);
  t = a_13(n_32, m_37, k_37, t);
  {
    ATerm r_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_32 = NULL;
        t = term_v_48;
        x_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_v_48);
        t = z_12(n_32, x_32, t);
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = r_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_32 = ATgetFirst((ATermList) t);
        s_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_48;
    v_32 = t;
    t = (ATerm) ATinsert(CheckATermList(s_32), (ATerm) ATinsert(CheckATermList(o_32), m_37));
    w_32 = t;
    t = SSL_table_put(n_32, v_32, w_32);
    t = u_32;
  }
  return(t);
}
ATerm t_33 (ATerm c_33, ATerm t)
{
  t = c_33;
  {
    ATerm w_48 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_48 = ATgetArgument(t, 0);
            ATerm z_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_48;
      }
    t = term_b_49;
    t = debug_1_0(z_17, t);
    t = (ATerm) ATmakeAppl(sym__2, c_33, term_q_48);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_33 (ATerm e_33, ATerm g_33, ATerm i_33, ATerm t)
{
  t = SSL_open_file(e_33, g_33);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym__2))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_33(q_33, t);
            ;
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            t = u_33(r_33, s_33, q_33, t);
          }
      }
    }
  else
    {
      t = t_33(q_33, t);
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
  ATerm x_33 = NULL,a_34 = NULL,c_34 = NULL;
  t = term_k_48;
  t = new_0_0(t);
  x_33 = t;
  t = term_g_49;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_33, term_g_49);
  t = d_13(x_33, a_34, t);
  c_34 = t;
  {
    ATerm i_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL;
        t = (ATerm) ATinsert(ATempty, term_o_49);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_34, (ATerm) ATinsert(ATempty, term_o_49));
        t = v_12(c_34, f_34, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_49);
      }
    else
      {
        t = i_49;
        t = c_34;
      }
  }
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_q_49;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  t = new_file_0_0(t);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, term_q_48);
  t = open_file_0_0(t);
  t = term_k_48;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_34, term_k_48);
  t = e_12(d_18, j_34, k_34, t);
  t = j_34;
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm o_34 = NULL,q_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      if(match_cons(r_49, sym_Stream_1))
        {
          o_34 = ATgetArgument(r_49, 0);
        }
      else
        _fail(t);
      q_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(o_34, q_34, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  t = xtc_new_file_0_0(t);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_34, l_34);
  t = b_12(f_18, m_34, l_34, t);
  t = SSL_close_file(m_34);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_49;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_49);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, (ATerm) ATinsert(ATempty, term_o_49));
      t = v_12(u_34, y_34, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = j_104(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = debug_1_0(l_18, t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = save_as_1_0(t_18, t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm b_35 = NULL,d_35 = NULL;
  d_35 = t;
  {
    ATerm y_49 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 (ATerm t)
        {
          ATerm f_35 = NULL;
          ATerm n_18 (ATerm t)
          {
            t = not_null(b_35);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              f_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(n_18, f_35, t);
          return(t);
        }
        t = term_c_50;
        t = get_config_0_0(t);
        if(((b_35 != NULL) && (b_35 != t)))
          _fail(t);
        else
          b_35 = t;
        t = if_verbose2_1_0(k_18, t);
        t = d_35;
        t = xtc_io_transform_1_0(m_18, t);
        ;
        LocalPopChoice(b_50);
      }
    else
      {
        t = y_49;
        t = d_35;
      }
    t = if_keep3_1_0(p_18, t);
  }
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  {
    ATerm d_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_35);
        ;
        LocalPopChoice(h_50);
      }
    else
      {
        t = d_50;
        t = t_35;
      }
  }
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_q_49;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  ATerm x_18 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL,p_35 = NULL;
    m_35 = t;
    t = term_q_49;
    n_35 = t;
    t = term_v_48;
    p_35 = t;
    t = term_k_50;
    t = z_12(n_35, p_35, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_35 != NULL) && (k_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_35 = ATgetFirst((ATermList) t);
        {
          ATerm l_50 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_35;
    t = map_1_0(y_18, t);
    t = m_35;
    t = end_scope_1_0(c_19, t);
    return(t);
  }
  t = repeat_1_0(x_18, t);
  l_35 = t;
  t = SSL_exit(l_35);
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm m_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_50);
    }
  else
    {
      t = m_50;
      t = term_k_31;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(e_19, t);
  t = term_a_30;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,a_36 = NULL;
  t = n_73(t);
  x_35 = t;
  t = term_r_50;
  t = get_config_0_0(t);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, x_35);
  t = d_13(a_36, x_35, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  y_36 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_22 = NULL;
        t = y_36;
        t = t_0(t);
        x_22 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = x_22;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = x_22;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_36, x_22);
        t = m_12(z_36, x_22, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_36);
        ;
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
        {
          ATerm v_50 = t;
          int y_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_23 = NULL;
              t = y_36;
              t = t_0(t);
              w_23 = t;
              {
                ATerm z_50 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_24 = NULL;
                    j_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = j_24;
                          }
                        else
                          {
                            t = j_24;
                            if((z_36 != t))
                              {
                                _fail(t);
                              }
                            t = j_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_50;
                  }
                t = (ATerm) ATmakeAppl(sym__2, z_36, w_23);
                t = m_12(z_36, w_23, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, z_36);
              }
              ;
              LocalPopChoice(y_50);
            }
          else
            {
              t = v_50;
              t = y_36;
              t = t_0(t);
              if((z_36 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_36);
            }
        }
      }
  }
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = get_outfile_1_0(h_19, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  {
    ATerm c_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL,n_25 = NULL,y_25 = NULL;
        t = term_g_51;
        t = get_config_0_0(t);
        t = e_38;
        t = copy_to_1_0(f_19, t);
        w_24 = t;
        t = term_p_30;
        n_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_51));
        y_25 = t;
        t = SSL_printnl(n_25, y_25);
        t = w_24;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = c_51;
        t = e_38;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm u_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  t = term_b_34;
  {
    ATerm j_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_51);
      }
    else
      {
        t = j_51;
        t = term_k_32;
      }
    w_39 = t;
    t = term_k_32;
    y_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_39, term_k_32);
    t = k_12(w_39, y_39, t);
    x_39 = t;
    t = SSL_int_to_string(x_39);
    u_39 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_39), term_b_34);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,d_40 = NULL,f_40 = NULL,j_40 = NULL;
  f_40 = t;
  t = term_n_51;
  z_39 = t;
  t = f_40;
  {
    ATerm o_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_51);
      }
    else
      {
        t = o_51;
        t = term_r_50;
        t = get_config_0_0(t);
      }
    j_40 = t;
    t = f_40;
    t = pass_keep_0_0(t);
    b_40 = t;
    t = term_t_51;
    t = get_config_0_0(t);
    d_40 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_40), d_40), (ATerm) ATinsert(ATinsert(ATempty, j_40), term_u_51));
    t = concat_0_0(t);
    a_40 = t;
    t = f_40;
    t = comp_0_2(z_39, a_40, t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        s_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_40, term_l_33);
        t = geq_0_0(t);
        t = o_40;
        t = s_95(t);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        t = o_40;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm e_41 = NULL,g_41 = NULL;
  g_41 = t;
  t = SSL_explode_string(g_41);
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_43 (ATerm t)
        {
          ATerm y_42 = NULL,b_43 = NULL,f_43 = NULL;
          y_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_43 = ATgetFirst((ATermList) t);
              f_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm z_51 = t;
            int a_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_26 = NULL,h_27 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(y_42);
                y_26 = t;
                t = f_43;
                t = k_43(t);
                h_27 = t;
                t = (ATerm) ATinsert(CheckATermList(h_27), b_43);
                r_8 = t;
                t = SSLsetAnnotations(r_8, y_26);
                ;
                LocalPopChoice(a_52);
              }
            else
              {
                t = z_51;
                {
                  ATerm b_52 = t;
                  int c_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_27 = NULL,s_8 = NULL;
                      t = SSLgetAnnotations(y_42);
                      t_27 = t;
                      t = b_43;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(f_43), b_43);
                      s_8 = t;
                      t = SSLsetAnnotations(s_8, t_27);
                      ;
                      LocalPopChoice(c_52);
                    }
                  else
                    {
                      t = b_52;
                      {
                        ATerm h_28 = NULL,o_28 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(y_42);
                        h_28 = t;
                        t = b_43;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = f_43;
                        t = j_90(t);
                        o_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_28), b_43);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, h_28);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = k_43(t);
        ;
        LocalPopChoice(y_51);
      }
    else
      {
        t = x_51;
      }
    e_41 = t;
    t = SSL_implode_string(e_41);
  }
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = debug_1_0(l_19, t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = debug_1_0(r_19, t);
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm f_12 (ATerm s_18, ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,m_44 = NULL;
  t = s_18;
  t = basename_1_0(_id, t);
  g_44 = t;
  t = if_verbose3_1_0(i_19, t);
  t = term_f_52;
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_52, g_44);
  t = c_13(m_44, g_44, t);
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_30;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
        t = g_44;
      }
    h_44 = t;
    t = if_verbose3_1_0(m_19, t);
    t = term_r_50;
    i_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_50, h_44);
    t = c_13(i_44, h_44, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, g_44);
  }
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = debug_1_0(t_19, t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = term_i_52;
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = if_verbose1_1_0(x_19, t);
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm a_47 = NULL,e_47 = NULL,h_47 = NULL,i_47 = NULL,l_47 = NULL,m_47 = NULL,p_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,e_30 = NULL,f_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_12(u_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  t_47 = t;
  {
    ATerm k_52 = t;
    int l_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_48 = ATgetArgument(t, 0);
            {
              ATerm e_29 = NULL,z_8 = NULL;
              t = SSLgetAnnotations(t_47);
              e_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_48);
              z_8 = t;
              t = SSLsetAnnotations(z_8, e_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_47;
          }
        LocalPopChoice(l_52);
        t = xtc_transform_file_2_0(y_19, z_19, t);
      }
    else
      {
        t = k_52;
        t = xtc_transform_term_2_0(c_20, d_20, t);
      }
    s_47 = t;
    {
      ATerm m_52 = t;
      int n_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_48 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              y_48 = ATgetArgument(t, 0);
              {
                ATerm j_29 = NULL,a_9 = NULL;
                t = SSLgetAnnotations(s_47);
                j_29 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_48);
                a_9 = t;
                t = SSLsetAnnotations(a_9, j_29);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = s_47;
            }
          LocalPopChoice(n_52);
          t = xtc_transform_file_2_0(e_20, f_20, t);
        }
      else
        {
          t = m_52;
          t = xtc_transform_term_2_0(g_20, i_20, t);
        }
      r_47 = t;
      {
        ATerm o_52 = t;
        int s_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_49 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                h_49 = ATgetArgument(t, 0);
                {
                  ATerm w_29 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(r_47);
                  w_29 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, h_49);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, w_29);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_47;
              }
            LocalPopChoice(s_52);
            t = xtc_transform_file_2_0(m_20, r_20, t);
          }
        else
          {
            t = o_52;
            t = xtc_transform_term_2_0(s_20, t_20, t);
          }
        i_30 = t;
        t = term_t_52;
        e_30 = t;
        t = i_30;
        t = pass_maybe_unbound_warnings_0_0(t);
        f_30 = t;
        t = i_30;
        t = comp_0_2(e_30, f_30, t);
        p_47 = t;
        {
          ATerm u_52 = t;
          int x_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_49 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  x_49 = ATgetArgument(t, 0);
                  {
                    ATerm q_30 = NULL,c_9 = NULL;
                    t = SSLgetAnnotations(p_47);
                    q_30 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, x_49);
                    c_9 = t;
                    t = SSLsetAnnotations(c_9, q_30);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = p_47;
                }
              LocalPopChoice(x_52);
              t = xtc_transform_file_2_0(v_20, w_20, t);
            }
          else
            {
              t = u_52;
              t = xtc_transform_term_2_0(x_20, y_20, t);
            }
          m_47 = t;
          {
            ATerm y_52 = t;
            int z_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_50 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_50 = ATgetArgument(t, 0);
                    {
                      ATerm v_30 = NULL,d_9 = NULL;
                      t = SSLgetAnnotations(m_47);
                      v_30 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_50);
                      d_9 = t;
                      t = SSLsetAnnotations(d_9, v_30);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = m_47;
                  }
                LocalPopChoice(z_52);
                t = xtc_transform_file_2_0(c_21, f_21, t);
              }
            else
              {
                t = y_52;
                t = xtc_transform_term_2_0(h_21, i_21, t);
              }
            l_47 = t;
            {
              ATerm e_53 = t;
              int f_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_50 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      n_50 = ATgetArgument(t, 0);
                      {
                        ATerm i_31 = NULL,e_9 = NULL;
                        t = SSLgetAnnotations(l_47);
                        i_31 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, n_50);
                        e_9 = t;
                        t = SSLsetAnnotations(e_9, i_31);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = l_47;
                    }
                  LocalPopChoice(f_53);
                  t = xtc_transform_file_2_0(m_21, o_21, t);
                }
              else
                {
                  t = e_53;
                  t = xtc_transform_term_2_0(p_21, q_21, t);
                }
              i_47 = t;
              {
                ATerm g_53 = t;
                int h_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_50 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        u_50 = ATgetArgument(t, 0);
                        {
                          ATerm t_31 = NULL,f_9 = NULL;
                          t = SSLgetAnnotations(i_47);
                          t_31 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, u_50);
                          f_9 = t;
                          t = SSLsetAnnotations(f_9, t_31);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = i_47;
                      }
                    LocalPopChoice(h_53);
                    t = xtc_transform_file_2_0(w_21, x_21, t);
                  }
                else
                  {
                    t = g_53;
                    t = xtc_transform_term_2_0(y_21, z_21, t);
                  }
                t = output_frontend_0_0(t);
                h_47 = t;
                {
                  ATerm j_53 = t;
                  int l_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_51 = NULL;
                      if(match_cons(t, sym_FILE_1))
                        {
                          b_51 = ATgetArgument(t, 0);
                          {
                            ATerm d_32 = NULL,h_9 = NULL;
                            t = SSLgetAnnotations(h_47);
                            d_32 = t;
                            t = (ATerm) ATmakeAppl(sym_FILE_1, b_51);
                            h_9 = t;
                            t = SSLsetAnnotations(h_9, d_32);
                          }
                        }
                      else
                        {
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                          t = h_47;
                        }
                      LocalPopChoice(l_53);
                      t = xtc_transform_file_2_0(b_22, e_22, t);
                    }
                  else
                    {
                      t = j_53;
                      t = xtc_transform_term_2_0(f_22, g_22, t);
                    }
                  t = if_keep2_1_0(h_22, t);
                  r_32 = t;
                  t = term_m_53;
                  p_32 = t;
                  t = r_32;
                  t = pass_warnings_0_0(t);
                  q_32 = t;
                  t = r_32;
                  t = comp_0_2(p_32, q_32, t);
                  e_47 = t;
                  {
                    ATerm n_53 = t;
                    int o_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_51 = NULL;
                        if(match_cons(t, sym_FILE_1))
                          {
                            i_51 = ATgetArgument(t, 0);
                            {
                              ATerm y_32 = NULL,i_9 = NULL;
                              t = SSLgetAnnotations(e_47);
                              y_32 = t;
                              t = (ATerm) ATmakeAppl(sym_FILE_1, i_51);
                              i_9 = t;
                              t = SSLsetAnnotations(i_9, y_32);
                            }
                          }
                        else
                          {
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                            t = e_47;
                          }
                        LocalPopChoice(o_53);
                        t = xtc_transform_file_2_0(j_22, k_22, t);
                      }
                    else
                      {
                        t = n_53;
                        t = xtc_transform_term_2_0(m_22, n_22, t);
                      }
                    a_47 = t;
                    {
                      ATerm p_53 = t;
                      int q_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_51 = NULL;
                          if(match_cons(t, sym_FILE_1))
                            {
                              p_51 = ATgetArgument(t, 0);
                              {
                                ATerm f_33 = NULL,j_9 = NULL;
                                t = SSLgetAnnotations(a_47);
                                f_33 = t;
                                t = (ATerm) ATmakeAppl(sym_FILE_1, p_51);
                                j_9 = t;
                                t = SSLsetAnnotations(j_9, f_33);
                              }
                            }
                          else
                            {
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                              t = a_47;
                            }
                          LocalPopChoice(q_53);
                          t = xtc_transform_file_2_0(q_22, r_22, t);
                        }
                      else
                        {
                          t = p_53;
                          t = xtc_transform_term_2_0(s_22, t_22, t);
                        }
                      t = if_keep2_1_0(u_22, t);
                    }
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
ATerm x_19 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  t = term_p_30;
  y_46 = t;
  t = (ATerm) ATinsert(CheckATermList(x_46), term_r_53);
  z_46 = t;
  t = SSL_printnl(y_46, z_46);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(CheckATermList(x_46), term_r_53));
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm h_48 = NULL;
  t = pass_verbose_0_0(t);
  h_48 = t;
  t = (ATerm) ATinsert(CheckATermList(h_48), term_g_32);
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm p_48 = NULL;
  t = pass_verbose_0_0(t);
  p_48 = t;
  t = (ATerm) ATinsert(CheckATermList(p_48), term_g_32);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm a_49 = NULL;
  t = pass_verbose_0_0(t);
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), term_g_32);
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm i_20 (ATerm t)
{
  ATerm d_49 = NULL;
  t = pass_verbose_0_0(t);
  d_49 = t;
  t = (ATerm) ATinsert(CheckATermList(d_49), term_g_32);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm j_49 = NULL;
  t = pass_verbose_0_0(t);
  j_49 = t;
  t = (ATerm) ATinsert(CheckATermList(j_49), term_g_32);
  return(t);
}
ATerm s_20 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm p_49 = NULL;
  t = pass_verbose_0_0(t);
  p_49 = t;
  t = (ATerm) ATinsert(CheckATermList(p_49), term_g_32);
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = term_x_53;
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm z_49 = NULL;
  t = pass_verbose_0_0(t);
  z_49 = t;
  t = (ATerm) ATinsert(CheckATermList(z_49), term_g_32);
  return(t);
}
ATerm x_20 (ATerm t)
{
  t = term_x_53;
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm a_50 = NULL;
  t = pass_verbose_0_0(t);
  a_50 = t;
  t = (ATerm) ATinsert(CheckATermList(a_50), term_g_32);
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm i_50 = NULL;
  t = pass_verbose_0_0(t);
  i_50 = t;
  t = (ATerm) ATinsert(CheckATermList(i_50), term_g_32);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm j_50 = NULL;
  t = pass_verbose_0_0(t);
  j_50 = t;
  t = (ATerm) ATinsert(CheckATermList(j_50), term_g_32);
  return(t);
}
ATerm m_21 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm p_50 = NULL;
  t = pass_verbose_0_0(t);
  p_50 = t;
  t = (ATerm) ATinsert(CheckATermList(p_50), term_g_32);
  return(t);
}
ATerm p_21 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm q_50 = NULL;
  t = pass_verbose_0_0(t);
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(q_50), term_g_32);
  return(t);
}
ATerm w_21 (ATerm t)
{
  t = term_d_54;
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm w_50 = NULL;
  t = pass_verbose_0_0(t);
  w_50 = t;
  t = (ATerm) ATinsert(CheckATermList(w_50), term_g_32);
  return(t);
}
ATerm y_21 (ATerm t)
{
  t = term_d_54;
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm x_50 = NULL;
  t = pass_verbose_0_0(t);
  x_50 = t;
  t = (ATerm) ATinsert(CheckATermList(x_50), term_g_32);
  return(t);
}
ATerm b_22 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm d_51 = NULL;
  t = pass_verbose_0_0(t);
  d_51 = t;
  t = (ATerm) ATinsert(CheckATermList(d_51), term_g_32);
  return(t);
}
ATerm f_22 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm e_51 = NULL;
  t = pass_verbose_0_0(t);
  e_51 = t;
  t = (ATerm) ATinsert(CheckATermList(e_51), term_g_32);
  return(t);
}
ATerm h_22 (ATerm t)
{
  t = save_as_1_0(i_22, t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_j_54;
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm k_51 = NULL;
  t = pass_verbose_0_0(t);
  k_51 = t;
  t = (ATerm) ATinsert(CheckATermList(k_51), term_g_32);
  return(t);
}
ATerm m_22 (ATerm t)
{
  t = term_j_54;
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm l_51 = NULL;
  t = pass_verbose_0_0(t);
  l_51 = t;
  t = (ATerm) ATinsert(CheckATermList(l_51), term_g_32);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_k_54;
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm r_51 = NULL;
  t = pass_verbose_0_0(t);
  r_51 = t;
  t = (ATerm) ATinsert(CheckATermList(r_51), term_g_32);
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = term_k_54;
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm s_51 = NULL;
  t = pass_verbose_0_0(t);
  s_51 = t;
  t = (ATerm) ATinsert(CheckATermList(s_51), term_g_32);
  return(t);
}
ATerm u_22 (ATerm t)
{
  t = save_as_1_0(w_22, t);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = term_o_54;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(s_19, t);
  t = profile_p__2_0(u_19, v_19, t);
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm p_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_54);
    }
  else
    {
      t = p_54;
    }
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_s_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_54 = t;
  int u_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_52 = NULL;
      j_52 = t;
      t = SSL_is_string(j_52);
      ;
      LocalPopChoice(u_54);
    }
  else
    {
      t = t_54;
      {
        ATerm w_54 = t;
        int x_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_22, t);
            ;
            LocalPopChoice(x_54);
          }
        else
          {
            t = w_54;
            {
              ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
              p_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_52 = ATgetArgument(t, 0);
                  t = q_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_52 = ATgetArgument(t, 0);
                      t = q_52;
                      {
                        ATerm z_54 = t;
                        int a_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_55);
                          }
                        else
                          {
                            t = z_54;
                            t = debug_1_0(d_23, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_52 = NULL,w_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_52 = ATgetArgument(t, 0);
                          r_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_52;
                      t = eval_config_0_0(t);
                      v_52 = t;
                      t = r_52;
                      t = eval_config_0_0(t);
                      w_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_52, w_52);
                      t = d_13(v_52, w_52, t);
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
  ATerm a_53 = NULL,b_53 = NULL;
  a_53 = t;
  t = term_e_55;
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_55, a_53);
  t = z_12(b_53, a_53, t);
  {
    ATerm f_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_53 = NULL,d_53 = NULL;
        t = eval_config_0_0(t);
        c_53 = t;
        t = term_e_55;
        d_53 = t;
        t = SSL_table_put(d_53, a_53, c_53);
        t = c_53;
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = f_55;
      }
  }
  return(t);
}
ATerm g_12 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm i_53 = NULL,k_53 = NULL;
  k_53 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
        t = z_12(s_48, t_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_55 = ATgetFirst((ATermList) t);
            i_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_55);
        t = SSL_table_put(s_48, t_48, i_53);
        t = (ATerm) ATmakeAppl(sym__3, s_48, t_48, i_53);
      }
    else
      {
        t = i_55;
        t = SSL_table_remove(s_48, t_48);
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
      }
    t = k_53;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,z_53 = NULL,a_54 = NULL,c_54 = NULL;
  a_54 = t;
  t = k_92(t);
  z_53 = t;
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL;
        t = term_v_48;
        e_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_53, term_v_48);
        t = z_12(z_53, e_54, t);
        ;
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_53 = ATgetFirst((ATermList) t);
        v_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_48;
    c_54 = t;
    t = SSL_table_put(z_53, c_54, v_53);
    t = w_53;
    {
      ATerm e_23 (ATerm t)
      {
        ATerm f_54 = NULL;
        f_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_53, f_54);
        t = g_12(z_53, f_54, t);
        return(t);
      }
      t = map_1_0(e_23, t);
      t = a_54;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm n_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      t = o_74(t);
      ;
      LocalPopChoice(p_55);
    }
  else
    {
      t = n_55;
      t = o_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,r_54 = NULL;
  l_54 = t;
  t = j_92(t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, term_v_48);
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_55 = ATgetArgument(t, 0);
            ATerm t_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_48;
        v_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_54, term_v_48);
        t = z_12(i_54, v_54, t);
        ;
        LocalPopChoice(r_55);
      }
    else
      {
        t = q_55;
        t = (ATerm) ATempty;
      }
    m_54 = t;
    t = term_v_48;
    n_54 = t;
    t = (ATerm) ATinsert(CheckATermList(m_54), (ATerm) ATempty);
    r_54 = t;
    t = SSL_table_put(i_54, n_54, r_54);
    t = l_54;
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = term_q_49;
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm g_55 = NULL;
  g_55 = t;
  {
    ATerm v_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_55);
        ;
        LocalPopChoice(a_56);
      }
    else
      {
        t = v_55;
        t = g_55;
      }
  }
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = term_q_49;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm y_54 = NULL;
  ATerm g_23 (ATerm t)
  {
    ATerm b_55 = NULL;
    b_55 = t;
    {
      ATerm b_56 = t;
      int c_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_55 = NULL,d_55 = NULL;
          t = term_q_49;
          c_55 = t;
          t = term_v_48;
          d_55 = t;
          t = term_k_50;
          t = z_12(c_55, d_55, t);
          ;
          LocalPopChoice(c_56);
        }
      else
        {
          t = b_56;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((y_54 != NULL) && (y_54 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            y_54 = ATgetFirst((ATermList) t);
          {
            ATerm j_56 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = y_54;
      t = map_1_0(h_23, t);
      t = b_55;
      t = end_scope_1_0(j_23, t);
    }
    return(t);
  }
  t = begin_scope_1_0(f_23, t);
  t = restore_always_2_0(k_103, g_23, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  {
    ATerm k_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_55 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        u_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_55, term_k_32);
        t = geq_0_0(t);
        t = o_55;
        t = q_95(t);
        ;
        LocalPopChoice(p_56);
      }
    else
      {
        t = k_56;
        t = o_55;
      }
  }
  return(t);
}
ATerm i_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm q_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_35, z_35);
      ;
      LocalPopChoice(u_56);
    }
  else
    {
      t = q_56;
      t = SSL_addr(y_35, z_35);
    }
  return(t);
}
ATerm k_12 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm x_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_36, f_36);
      ;
      LocalPopChoice(z_56);
    }
  else
    {
      t = x_56;
      t = SSL_subtr(e_36, f_36);
    }
  return(t);
}
ATerm l_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  t = k_12(p_45, q_45, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  t = k_12(r_45, s_45, t);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = k_12(t_45, u_45, t);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
  t = k_12(v_45, w_45, t);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__4, w_55, x_55, y_55, z_55);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,l_56 = NULL,m_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_57 = ATgetArgument(t, 0);
      if(match_cons(d_57, sym__4))
        {
          d_56 = ATgetArgument(d_57, 0);
          e_56 = ATgetArgument(d_57, 1);
          f_56 = ATgetArgument(d_57, 2);
          g_56 = ATgetArgument(d_57, 3);
        }
      else
        _fail(t);
      {
        ATerm e_57 = ATgetArgument(t, 1);
        if(match_cons(e_57, sym__4))
          {
            h_56 = ATgetArgument(e_57, 0);
            i_56 = ATgetArgument(e_57, 1);
            l_56 = ATgetArgument(e_57, 2);
            m_56 = ATgetArgument(e_57, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_12(d_56, e_56, f_56, g_56, h_56, i_56, l_56, m_56, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,v_56 = NULL,w_56 = NULL,y_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,g_57 = NULL,k_57 = NULL;
  w_56 = t;
  t = times_0_0(t);
  n_56 = t;
  t = w_56;
  t = e_99(t);
  o_56 = t;
  t = times_0_0(t);
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_56, n_56);
  t = diff_times_0_0(t);
  t_56 = t;
  if(match_cons(t, sym__4))
    {
      c_57 = ATgetArgument(t, 0);
      {
        ATerm f_57 = ATgetArgument(t, 1);
      }
      g_57 = ATgetArgument(t, 2);
      {
        ATerm h_57 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_57, g_57);
  t = i_12(c_57, g_57, t);
  k_57 = t;
  t = SSL_TicksToSeconds(k_57);
  r_56 = t;
  t = t_56;
  if(match_cons(t, sym__4))
    {
      ATerm i_57 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
      {
        ATerm j_57 = ATgetArgument(t, 2);
      }
      a_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_56, a_57);
  t = i_12(y_56, a_57, t);
  b_57 = t;
  t = SSL_TicksToSeconds(b_57);
  s_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_56), term_n_57), r_56), term_m_57);
  t = d_99(t);
  t = o_56;
  return(t);
}
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm l_57 = NULL,o_57 = NULL,p_57 = NULL,s_57 = NULL;
  l_57 = t;
  t = e_94(t);
  o_57 = t;
  t = term_p_30;
  p_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_57), o_57);
  s_57 = t;
  t = SSL_printnl(p_57, s_57);
  t = l_57;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,x_57 = NULL,y_57 = NULL;
  t_57 = t;
  t = term_q_57;
  t = get_config_0_0(t);
  u_57 = t;
  t = term_k_31;
  x_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_58), term_h_58), term_g_58), term_e_58), term_c_58), term_w_57), term_v_57), u_57), term_r_57);
  y_57 = t;
  t = SSL_printnl(x_57, y_57);
  t = t_57;
  return(t);
}
ATerm m_12 (ATerm k_39, ATerm l_39, ATerm t)
{
  t = SSL_copy(k_39, l_39);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_57 = NULL;
  ATerm m_23 (ATerm t)
  {
    ATerm a_58 = NULL,b_58 = NULL;
    a_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), a_58);
    t = z_12(not_null(z_57), a_58, t);
    b_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
    return(t);
  }
  if(((z_57 != NULL) && (z_57 != t)))
    _fail(t);
  else
    z_57 = t;
  t = SSL_table_keys(z_57);
  t = map_1_0(m_23, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  {
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_58 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_58, term_x_34);
        t = geq_0_0(t);
        t = d_58;
        t = u_95(t);
        ;
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
        t = d_58;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_58 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        k_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_58, term_c_35);
        t = geq_0_0(t);
        t = i_58;
        t = t_95(t);
        ;
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
        t = i_58;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_58;
        if((v_58 != t))
          {
            _fail(t);
          }
        t = u_58;
        ;
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
        {
          ATerm r_58 = t;
          int s_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_58, w_58);
              ;
              LocalPopChoice(s_58);
            }
          else
            {
              t = r_58;
              t = SSL_gtr(v_58, w_58);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm a_59 = NULL;
  a_59 = t;
  {
    ATerm t_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        t = term_n_30;
        t = get_config_0_0(t);
        c_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_59, term_h_35);
        t = geq_0_0(t);
        t = a_59;
        t = v_95(t);
        ;
        LocalPopChoice(x_58);
      }
    else
      {
        t = t_58;
        t = a_59;
      }
  }
  return(t);
}
ATerm p_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm t)
{
  t = r_85(t);
  {
    ATerm n_23 (ATerm t)
    {
      ATerm e_59 = NULL;
      e_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, e_59);
      t = q_85(t);
      return(t);
    }
    t = fetch_1_0(n_23, t);
    t = a_26;
  }
  return(t);
}
ATerm q_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm t)
{
  ATerm e_60 (ATerm t)
  {
    ATerm v_59 = NULL,x_59 = NULL,y_59 = NULL;
    v_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_59 = ATgetFirst((ATermList) t);
            y_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_58 = t;
          int z_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_59;
              {
                ATerm o_23 (ATerm t)
                {
                  t = w_25;
                  return(t);
                }
                t = p_12(n_85, o_23, x_59, y_59, t);
                t = e_60(t);
              }
              ;
              LocalPopChoice(z_58);
            }
          else
            {
              t = y_58;
              {
                ATerm w_35 = NULL,g_36 = NULL,u_14 = NULL;
                t = SSLgetAnnotations(v_59);
                w_35 = t;
                t = y_59;
                t = e_60(t);
                g_36 = t;
                t = (ATerm) ATinsert(CheckATermList(g_36), x_59);
                u_14 = t;
                t = SSLsetAnnotations(u_14, w_35);
              }
            }
        }
      }
    return(t);
  }
  t = x_25;
  t = e_60(t);
  return(t);
}
ATerm p_23 (ATerm t)
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
ATerm r_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  h_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
  {
    ATerm b_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_59 = ATgetArgument(t, 0);
            ATerm g_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        t = z_12(k_49, l_49, t);
        ;
        LocalPopChoice(d_59);
      }
    else
      {
        t = b_59;
        t = (ATerm) ATempty;
      }
    j_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_60, m_49);
    t = q_12(p_23, j_60, m_49, t);
    i_60 = t;
    t = SSL_table_put(k_49, l_49, i_60);
    t = h_60;
  }
  return(t);
}
ATerm s_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm t)
{
  ATerm q_23 (ATerm t)
  {
    ATerm t_60 = NULL,u_60 = NULL;
    if(match_cons(t, sym__2))
      {
        t_60 = ATgetArgument(t, 0);
        u_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_49, t_60, u_60);
    t = m_100(t);
    return(t);
  }
  t = t_49;
  t = map_1_0(q_23, t);
  return(t);
}
ATerm v_12 (ATerm s_38, ATerm t_38, ATerm t)
{
  t = SSL_access(s_38, t_38);
  return(t);
}
ATerm r_61 (ATerm g_61, ATerm t)
{
  t = SSL_fclose(g_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  n_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_61 = ATgetArgument(t, 0);
      {
        ATerm h_59 = t;
        int i_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_61);
            ;
            LocalPopChoice(i_59);
          }
        else
          {
            t = h_59;
            t = r_61(n_61, t);
          }
      }
    }
  else
    {
      t = r_61(n_61, t);
    }
  return(t);
}
ATerm t_12 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
ATerm u_12 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm s_61 = NULL;
  t = SSL_fopen(a_39, b_39);
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_stdin_stream();
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_61 = NULL;
  t = SSL_stdout_stream();
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_61 = NULL;
  t = SSL_stderr_stream();
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_61);
  return(t);
}
ATerm n_63 (ATerm f_62, ATerm t)
{
  ATerm g_62 = NULL;
  t = SSL_explode_term(f_62);
  if(match_cons(t, sym__2))
    {
      ATerm j_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_59 = ATgetArgument(t, 1);
        if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
          {
            g_62 = ATgetFirst((ATermList) k_59);
            {
              ATerm l_59 = (ATerm) ATgetNext((ATermList) k_59);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_62;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_62;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_62;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_62;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_63 (ATerm k_62, ATerm l_62, ATerm m_62, ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,q_62 = NULL,u_62 = NULL,c_15 = NULL;
  t = SSLgetAnnotations(m_62);
  q_62 = t;
  t = k_62;
  if(match_cons(t, sym_Path_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_62, l_62);
  c_15 = t;
  t = SSLsetAnnotations(c_15, q_62);
  if(match_cons(t, sym__2))
    {
      n_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(n_62, o_62, t);
  return(t);
}
ATerm q_63 (ATerm x_62, ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL,d_63 = NULL,h_63 = NULL,d_15 = NULL;
  t = SSLgetAnnotations(z_62);
  d_63 = t;
  t = SSL_is_string(x_62);
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_63, y_62);
  d_15 = t;
  t = SSLsetAnnotations(d_15, d_63);
  if(match_cons(t, sym__2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(a_63, b_63, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_59 = ATgetArgument(t, 0);
      ATerm n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_63 = t;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
      {
        ATerm o_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_63(k_63, t);
            ;
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
                  t = o_63(l_63, m_63, k_63, t);
                  ;
                  LocalPopChoice(r_59);
                }
              else
                {
                  t = q_59;
                  t = q_63(l_63, m_63, k_63, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_63(k_63, t);
    }
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = term_s_59;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  ATerm w_59 = t;
  int z_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL;
      w_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_63, term_a_60);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_59);
    }
  else
    {
      t = w_59;
      t = debug_1_0(s_23, t);
      _fail(t);
    }
  t_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_12(u_63, t);
  s_63 = t;
  t = t_63;
  t = fclose_0_0(t);
  t = s_63;
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = term_b_60;
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = term_c_60;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_63 = NULL,z_63 = NULL;
      y_63 = t;
      t = (ATerm) ATinsert(ATempty, term_g_60);
      z_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_63, (ATerm) ATinsert(ATempty, term_g_60));
      t = v_12(y_63, z_63, t);
      LocalPopChoice(f_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_60;
      {
        ATerm k_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_60 = t;
            if((PushChoice() == 0))
              {
                ATerm a_64 = NULL,b_64 = NULL;
                a_64 = t;
                t = (ATerm) ATinsert(ATempty, term_o_49);
                b_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_64, (ATerm) ATinsert(ATempty, term_o_49));
                t = v_12(a_64, b_64, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_60;
              }
            t = debug_1_0(v_23, t);
            ;
            LocalPopChoice(l_60);
          }
        else
          {
            t = k_60;
            t = debug_1_0(x_23, t);
          }
        t = (ATerm) ATempty;
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
  t = term_n_60;
  return(t);
}
ATerm a_24 (ATerm t)
{
  t = debug_1_0(b_24, t);
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = term_o_60;
  return(t);
}
ATerm c_24 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,w_64 = NULL;
  t_64 = t;
  t = term_p_30;
  u_64 = t;
  t = (ATerm) ATinsert(ATempty, term_q_60);
  w_64 = t;
  t = SSL_printnl(u_64, w_64);
  t = t_64;
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  if(match_cons(t, sym__3))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      z_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_12(x_64, y_64, z_64, t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,d_65 = NULL;
  a_65 = t;
  t = term_p_30;
  b_65 = t;
  t = (ATerm) ATinsert(ATempty, term_r_60);
  d_65 = t;
  t = SSL_printnl(b_65, d_65);
  t = a_65;
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  t = term_p_30;
  g_65 = t;
  t = (ATerm) ATinsert(ATempty, term_q_60);
  h_65 = t;
  t = SSL_printnl(g_65, h_65);
  t = f_65;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  d_64 = t;
  t = if_verbose5_1_0(y_23, t);
  {
    ATerm s_60 = t;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL,s_64 = NULL;
        t = term_v_60;
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_64);
        s_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_60, (ATerm) ATmakeAppl(sym_Imported_1, d_64));
        t = z_12(q_64, s_64, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_60;
      }
    g_64 = t;
    t = term_v_60;
    m_64 = t;
    t = term_w_60;
    n_64 = t;
    t = (ATerm) ATinsert(ATempty, d_64);
    o_64 = t;
    t = SSL_table_put(m_64, n_64, o_64);
    t = g_64;
    t = if_verbose4_1_0(a_24, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_24, t);
    f_64 = t;
    t = term_v_60;
    l_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_60, f_64);
    t = s_12(d_24, l_64, f_64, t);
    t = if_verbose6_1_0(e_24, t);
    t = term_v_60;
    h_64 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_64);
    j_64 = t;
    t = (ATerm) ATempty;
    k_64 = t;
    t = SSL_table_put(h_64, j_64, k_64);
    t = (ATerm) ATmakeAppl(sym__3, term_v_60, (ATerm)ATmakeAppl(sym_Imported_1, d_64), (ATerm) ATempty);
    t = if_verbose4_1_0(f_24, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL,y_65 = NULL;
  w_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_65 = ATgetFirst((ATermList) t);
          y_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_60 = t;
        int y_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_37 = NULL,n_37 = NULL,o_37 = NULL,i_15 = NULL;
            t = SSLgetAnnotations(w_65);
            i_37 = t;
            t = x_65;
            t = q_88(t);
            n_37 = t;
            t = y_65;
            t = filter_1_0(q_88, t);
            o_37 = t;
            t = (ATerm) ATinsert(CheckATermList(o_37), n_37);
            i_15 = t;
            t = SSLsetAnnotations(i_15, i_37);
            ;
            LocalPopChoice(y_60);
          }
        else
          {
            t = x_60;
            t = y_65;
            t = filter_1_0(q_88, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm t)
{
  ATerm f_66 (ATerm t)
  {
    ATerm z_60 = t;
    int a_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_74(t);
        t = f_66(t);
        ;
        LocalPopChoice(a_61);
      }
    else
      {
        t = z_60;
      }
    return(t);
  }
  t = f_66(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_61;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
      {
        ATerm e_61 = t;
        int f_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_66 = NULL;
            t = term_h_61;
            h_66 = t;
            t = SSL_getenv(h_66);
            ;
            LocalPopChoice(f_61);
          }
        else
          {
            t = e_61;
            t = XTC_REPOSITORY();
          }
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
  t = term_i_61;
  return(t);
}
ATerm i_24 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  t = term_v_60;
  o_66 = t;
  t = term_j_61;
  p_66 = t;
  t = term_k_61;
  t = z_12(o_66, p_66, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_61 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_61;
      }
  }
  return(t);
}
ATerm k_24 (ATerm t)
{
  t = debug_1_0(l_24, t);
  return(t);
}
ATerm l_24 (ATerm t)
{
  t = term_o_61;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_66 = NULL;
  t = if_verbose5_1_0(g_24, t);
  j_66 = t;
  {
    ATerm p_61 = t;
    int q_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_66 = NULL,l_66 = NULL;
        t = term_v_60;
        k_66 = t;
        t = term_w_60;
        l_66 = t;
        t = term_t_61;
        t = z_12(k_66, l_66, t);
        ;
        LocalPopChoice(q_61);
      }
    else
      {
        t = p_61;
        {
          ATerm n_66 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_66 = t;
          t = repeat_1_0(i_24, t);
          t = n_66;
        }
      }
    t = j_66;
    t = if_verbose5_1_0(k_24, t);
  }
  return(t);
}
ATerm m_24 (ATerm t)
{
  t = debug_1_0(n_24, t);
  return(t);
}
ATerm n_24 (ATerm t)
{
  t = term_v_61;
  return(t);
}
ATerm p_67 (ATerm u_66, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  t = term_v_60;
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_66);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_60, (ATerm) ATmakeAppl(sym_Tool_1, u_66));
  t = z_12(y_66, z_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_61 = ATgetFirst((ATermList) t);
      if(match_cons(y_61, sym__2))
        {
          ATerm a_62 = ATgetArgument(y_61, 0);
          x_66 = ATgetArgument(y_61, 1);
        }
      else
        _fail(t);
      {
        ATerm z_61 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_66;
  return(t);
}
ATerm p_24 (ATerm t)
{
  t = debug_1_0(q_24, t);
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = term_v_61;
  return(t);
}
ATerm r_24 (ATerm t)
{
  t = term_v_60;
  t = table_getlist_0_0(t);
  t = debug_1_0(s_24, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = term_b_62;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_62 = t;
  int d_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
      t = if_verbose5_1_0(m_24, t);
      t = xtc_load_0_0(t);
      c_67 = t;
      if(match_cons(t, sym__2))
        {
          a_67 = ATgetArgument(t, 0);
          b_67 = ATgetArgument(t, 1);
          {
            ATerm e_62 = t;
            int h_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
                t = term_v_60;
                g_67 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_67);
                h_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_60, (ATerm) ATmakeAppl(sym_Tool_1, a_67));
                t = z_12(g_67, h_67, t);
                {
                  ATerm o_24 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_67 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(o_24, t);
                  t = not_null(f_67);
                }
                ;
                LocalPopChoice(h_62);
              }
            else
              {
                t = e_62;
                t = p_67(c_67, t);
              }
          }
        }
      else
        {
          t = p_67(c_67, t);
        }
      t = if_verbose5_1_0(p_24, t);
      ;
      LocalPopChoice(d_62);
    }
  else
    {
      t = c_62;
      {
        ATerm o_67 = NULL,w_37 = NULL,y_37 = NULL;
        o_67 = t;
        t = term_p_30;
        w_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_62), o_67), term_i_62);
        y_37 = t;
        t = SSL_printnl(w_37, y_37);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_62), o_67), term_i_62);
        t = if_verbose5_1_0(r_24, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm w_12 (ATerm v_43, ATerm u_43, ATerm t)
{
  ATerm s_67 = NULL,v_67 = NULL,y_67 = NULL;
  t = v_43;
  {
    ATerm p_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_62);
      }
    else
      {
        t = p_62;
        t = (ATerm) ATempty;
      }
    v_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_43, v_67);
    t = conc_0_0(t);
    s_67 = t;
    t = term_e_55;
    y_67 = t;
    t = SSL_table_put(y_67, v_43, s_67);
    t = (ATerm) ATmakeAppl(sym__3, term_e_55, v_43, s_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
      t = term_k_48;
      t = p_0(t);
      j_68 = t;
      t = term_s_62;
      k_68 = t;
      t = term_t_62;
      l_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_62, term_t_62, j_68);
      t = a_13(k_68, l_68, j_68, t);
      _fail(t);
    }
  else
    {
      ATerm p_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_68 = ATgetFirst((ATermList) t);
          g_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_68 = ATgetFirst((ATermList) t);
          i_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_68;
      t = m_0(t);
      t = h_68;
      t = n_0(t);
      p_68 = t;
      t = (ATerm) ATinsert(CheckATermList(i_68), p_68);
    }
  return(t);
}
ATerm x_12 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm v_62 = t;
  int w_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_68 = NULL;
      t = s_43;
      t = get_config_0_0(t);
      t = term_e_55;
      q_68 = t;
      t = SSL_table_remove(q_68, s_43);
      t = (ATerm) ATmakeAppl(sym__2, term_e_55, s_43);
      ;
      LocalPopChoice(w_62);
    }
  else
    {
      t = v_62;
      t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
      t = c_13(s_43, t_43, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm l_69 (ATerm t)
  {
    ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
    k_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_69 = ATgetFirst((ATermList) t);
        j_69 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_38 = NULL,n_38 = NULL,l_15 = NULL;
          t = SSLgetAnnotations(k_69);
          j_38 = t;
          t = j_69;
          t = l_69(t);
          n_38 = t;
          t = (ATerm) ATinsert(CheckATermList(n_38), i_69);
          l_15 = t;
          t = SSLsetAnnotations(l_15, j_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_69;
        t = z_81(t);
      }
    return(t);
  }
  t = l_69(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
  s_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_68;
    }
  else
    {
      ATerm t_24 (ATerm t)
      {
        t = not_null(u_68);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_68 = ATgetFirst((ATermList) t);
          if(((u_68 != NULL) && (u_68 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_68;
      t = at_end_1_0(t_24, t);
    }
  return(t);
}
ATerm c_70 (ATerm p_69, ATerm t)
{
  ATerm q_69 = NULL;
  t = SSL_explode_term(p_69);
  if(match_cons(t, sym__2))
    {
      ATerm c_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_69;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  y_69 = t;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
      {
        ATerm e_63 = t;
        int f_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 (ATerm t)
            {
              t = x_69;
              return(t);
            }
            t = w_69;
            t = at_end_1_0(u_24, t);
            ;
            LocalPopChoice(f_63);
          }
        else
          {
            t = e_63;
            t = c_70(y_69, t);
          }
      }
    }
  else
    {
      t = c_70(y_69, t);
    }
  return(t);
}
ATerm y_12 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  t = w_43;
  {
    ATerm g_63 = t;
    int i_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_63);
      }
    else
      {
        t = g_63;
        t = (ATerm) ATempty;
      }
    e_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_70, x_43);
    t = conc_0_0(t);
    d_70 = t;
    t = term_e_55;
    f_70 = t;
    t = SSL_table_put(f_70, w_43, d_70);
    t = (ATerm) ATmakeAppl(sym__3, term_e_55, w_43, d_70);
  }
  return(t);
}
ATerm v_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_25 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  s_70 = t;
  t = term_d_47;
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_47, s_70);
  t = c_13(t_70, s_70, t);
  t = term_k_48;
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = term_j_63;
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm u_70 = NULL;
  u_70 = t;
  if(match_string(t, "-o"))
    {
      t = u_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_70;
    }
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
  v_70 = t;
  t = term_w_30;
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, v_70);
  t = c_13(w_70, v_70, t);
  t = term_k_48;
  return(t);
}
ATerm g_25 (ATerm t)
{
  t = term_p_63;
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm x_70 = NULL;
  x_70 = t;
  if(match_string(t, "-I"))
    {
      t = x_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = x_70;
    }
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
  y_70 = t;
  t = term_t_51;
  z_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_70), term_t_51);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_51, (ATerm) ATinsert(ATinsert(ATempty, y_70), term_t_51));
  t = w_12(z_70, a_71, t);
  t = term_k_48;
  return(t);
}
ATerm r_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm d_71 = NULL;
  d_71 = t;
  if(match_string(t, "--main"))
    {
      t = d_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = d_71;
    }
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  e_71 = t;
  t = term_c_50;
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_50, e_71);
  t = c_13(f_71, e_71, t);
  t = term_k_48;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm f_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_26 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  t = term_r_31;
  i_71 = t;
  t = (ATerm) ATinsert(ATempty, h_71);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATempty, h_71));
  t = y_12(i_71, j_71, t);
  t = term_k_48;
  return(t);
}
ATerm h_26 (ATerm t)
{
  t = term_x_63;
  return(t);
}
ATerm i_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_26 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,o_71 = NULL;
  l_71 = t;
  t = term_c_31;
  m_71 = t;
  t = (ATerm) ATinsert(ATempty, l_71);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, (ATerm) ATinsert(ATempty, l_71));
  t = w_12(m_71, o_71, t);
  t = term_k_48;
  return(t);
}
ATerm k_26 (ATerm t)
{
  t = term_c_64;
  return(t);
}
ATerm l_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm p_71 = NULL,r_71 = NULL,s_71 = NULL;
  p_71 = t;
  t = term_x_30;
  r_71 = t;
  t = (ATerm) ATinsert(ATempty, p_71);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATempty, p_71));
  t = w_12(r_71, s_71, t);
  t = term_k_48;
  return(t);
}
ATerm n_26 (ATerm t)
{
  t = term_e_64;
  return(t);
}
ATerm o_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_26 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  t = term_d_31;
  t_71 = t;
  t = term_k_48;
  u_71 = t;
  t = term_i_64;
  t = c_13(t_71, u_71, t);
  t = term_k_48;
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_p_64;
  return(t);
}
ATerm r_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_26 (ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL;
  t = term_g_51;
  v_71 = t;
  t = term_k_48;
  w_71 = t;
  t = term_r_64;
  t = c_13(v_71, w_71, t);
  t = term_k_48;
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = term_v_64;
  return(t);
}
ATerm u_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL;
  t = term_v_47;
  x_71 = t;
  t = term_k_48;
  y_71 = t;
  t = term_c_65;
  t = c_13(x_71, y_71, t);
  t = term_k_48;
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_e_65;
  return(t);
}
ATerm x_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
  z_71 = t;
  t = SSL_string_to_int(z_71);
  a_72 = t;
  t = term_b_34;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_34, a_72);
  t = c_13(b_72, a_72, t);
  t = term_k_48;
  return(t);
}
ATerm a_27 (ATerm t)
{
  t = term_i_65;
  return(t);
}
ATerm b_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_27 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  c_72 = t;
  t = SSL_string_to_int(c_72);
  d_72 = t;
  t = term_g_34;
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_34, d_72);
  t = c_13(e_72, d_72, t);
  t = term_k_48;
  return(t);
}
ATerm i_27 (ATerm t)
{
  t = term_j_65;
  return(t);
}
ATerm j_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_27 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  t = term_h_36;
  f_72 = t;
  t = term_k_48;
  g_72 = t;
  t = term_k_65;
  t = x_12(f_72, g_72, t);
  t = term_k_48;
  return(t);
}
ATerm l_27 (ATerm t)
{
  t = term_l_65;
  return(t);
}
ATerm o_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  t = SSL_string_to_int(j_72);
  k_72 = t;
  t = term_n_30;
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, k_72);
  t = c_13(l_72, k_72, t);
  t = term_k_48;
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = term_m_65;
  return(t);
}
ATerm r_27 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  if(match_string(t, "-S"))
    {
      t = m_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_72;
    }
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  t = term_n_30;
  n_72 = t;
  t = term_a_30;
  o_72 = t;
  t = term_n_65;
  t = c_13(n_72, o_72, t);
  t = term_k_48;
  return(t);
}
ATerm u_27 (ATerm t)
{
  t = term_o_65;
  return(t);
}
ATerm v_27 (ATerm t)
{
  ATerm p_72 = NULL;
  p_72 = t;
  if(match_string(t, "-h"))
    {
      t = p_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = p_72;
    }
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_p_65;
  s_72 = t;
  t = term_k_48;
  t_72 = t;
  t = term_q_65;
  t = c_13(s_72, t_72, t);
  t = term_k_48;
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = term_r_65;
  return(t);
}
ATerm z_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  t = term_s_65;
  u_72 = t;
  t = term_k_48;
  v_72 = t;
  t = term_t_65;
  t = c_13(u_72, v_72, t);
  t = term_k_48;
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = term_u_65;
  return(t);
}
ATerm c_28 (ATerm t)
{
  ATerm w_72 = NULL;
  w_72 = t;
  if(match_string(t, "-v"))
    {
      t = w_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = w_72;
    }
  return(t);
}
ATerm d_28 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL;
  t = term_v_65;
  x_72 = t;
  t = term_k_48;
  y_72 = t;
  t = term_z_65;
  t = c_13(x_72, y_72, t);
  t = term_k_48;
  return(t);
}
ATerm e_28 (ATerm t)
{
  t = term_a_66;
  return(t);
}
ATerm f_28 (ATerm t)
{
  ATerm z_72 = NULL;
  z_72 = t;
  if(match_string(t, "--warning"))
    {
      t = z_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = z_72;
    }
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  {
    ATerm b_66 = t;
    int c_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,n_15 = NULL;
        t = term_j_47;
        t = get_config_0_0(t);
        g_73 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_73 = ATgetFirst((ATermList) t);
            f_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_73);
        d_73 = t;
        t = e_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = f_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_73), e_73);
        n_15 = t;
        t = SSLsetAnnotations(n_15, d_73);
        t = term_j_47;
        b_73 = t;
        t = (ATerm) ATinsert(ATempty, a_73);
        c_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_47, (ATerm) ATinsert(ATempty, a_73));
        t = c_13(b_73, c_73, t);
        ;
        LocalPopChoice(c_66);
      }
    else
      {
        t = b_66;
        {
          ATerm h_73 = NULL,i_73 = NULL;
          t = term_j_47;
          h_73 = t;
          t = (ATerm) ATinsert(ATempty, a_73);
          i_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_47, (ATerm) ATinsert(ATempty, a_73));
          t = w_12(h_73, i_73, t);
        }
      }
    t = term_k_48;
  }
  return(t);
}
ATerm i_28 (ATerm t)
{
  t = term_d_66;
  return(t);
}
ATerm j_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
  j_73 = t;
  t = term_f_48;
  k_73 = t;
  t = term_k_32;
  l_73 = t;
  t = term_e_66;
  t = c_13(k_73, l_73, t);
  t = j_73;
  return(t);
}
ATerm l_28 (ATerm t)
{
  t = term_f_48;
  return(t);
}
ATerm n_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_28 (ATerm t)
{
  ATerm m_73 = NULL,q_73 = NULL,r_73 = NULL;
  m_73 = t;
  t = term_g_48;
  q_73 = t;
  t = term_a_30;
  r_73 = t;
  t = term_g_66;
  t = c_13(q_73, r_73, t);
  t = m_73;
  return(t);
}
ATerm q_28 (ATerm t)
{
  t = term_g_48;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm i_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(v_24, c_25, d_25, t);
      ;
      LocalPopChoice(m_66);
    }
  else
    {
      t = i_66;
      {
        ATerm q_66 = t;
        int r_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_25, f_25, g_25, t);
            ;
            LocalPopChoice(r_66);
          }
        else
          {
            t = q_66;
            {
              ATerm s_66 = t;
              int t_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(m_25, p_25, r_25, t);
                  ;
                  LocalPopChoice(t_66);
                }
              else
                {
                  t = s_66;
                  {
                    ATerm v_66 = t;
                    int w_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(z_25, c_26, d_26, t);
                        ;
                        LocalPopChoice(w_66);
                      }
                    else
                      {
                        t = v_66;
                        {
                          ATerm d_67 = t;
                          int e_67 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(f_26, g_26, h_26, t);
                              ;
                              LocalPopChoice(e_67);
                            }
                          else
                            {
                              t = d_67;
                              {
                                ATerm i_67 = t;
                                int j_67 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(i_26, j_26, k_26, t);
                                    ;
                                    LocalPopChoice(j_67);
                                  }
                                else
                                  {
                                    t = i_67;
                                    {
                                      ATerm k_67 = t;
                                      int l_67 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(l_26, m_26, n_26, t);
                                          ;
                                          LocalPopChoice(l_67);
                                        }
                                      else
                                        {
                                          t = k_67;
                                          {
                                            ATerm m_67 = t;
                                            int n_67 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(o_26, p_26, q_26, t);
                                                ;
                                                LocalPopChoice(n_67);
                                              }
                                            else
                                              {
                                                t = m_67;
                                                {
                                                  ATerm q_67 = t;
                                                  int r_67 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(r_26, s_26, t_26, t);
                                                      ;
                                                      LocalPopChoice(r_67);
                                                    }
                                                  else
                                                    {
                                                      t = q_67;
                                                      {
                                                        ATerm t_67 = t;
                                                        int u_67 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(u_26, v_26, w_26, t);
                                                            ;
                                                            LocalPopChoice(u_67);
                                                          }
                                                        else
                                                          {
                                                            t = t_67;
                                                            {
                                                              ATerm w_67 = t;
                                                              int x_67 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(x_26, z_26, a_27, t);
                                                                  ;
                                                                  LocalPopChoice(x_67);
                                                                }
                                                              else
                                                                {
                                                                  t = w_67;
                                                                  {
                                                                    ATerm z_67 = t;
                                                                    int a_68 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(b_27, c_27, i_27, t);
                                                                        ;
                                                                        LocalPopChoice(a_68);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_67;
                                                                        {
                                                                          ATerm b_68 = t;
                                                                          int c_68 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(j_27, k_27, l_27, t);
                                                                              ;
                                                                              LocalPopChoice(c_68);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_68;
                                                                              {
                                                                                ATerm e_68 = t;
                                                                                int f_68 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = ArgOption_3_0(o_27, p_27, q_27, t);
                                                                                    ;
                                                                                    LocalPopChoice(f_68);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_68;
                                                                                    {
                                                                                      ATerm m_68 = t;
                                                                                      int n_68 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(r_27, s_27, u_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(n_68);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_68;
                                                                                          {
                                                                                            ATerm o_68 = t;
                                                                                            int r_68 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(v_27, x_27, y_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(r_68);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_68;
                                                                                                {
                                                                                                  ATerm v_68 = t;
                                                                                                  int w_68 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(z_27, a_28, b_28, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(w_68);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_68;
                                                                                                      {
                                                                                                        ATerm x_68 = t;
                                                                                                        int y_68 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(c_28, d_28, e_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(y_68);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_68;
                                                                                                            {
                                                                                                              ATerm z_68 = t;
                                                                                                              int a_69 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(f_28, g_28, i_28, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(a_69);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = z_68;
                                                                                                                  {
                                                                                                                    ATerm b_69 = t;
                                                                                                                    int c_69 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(j_28, k_28, l_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(c_69);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = b_69;
                                                                                                                        t = Option_3_0(n_28, p_28, q_28, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_69), term_c_58), term_u_69), term_t_69), term_s_69), term_c_58), term_r_69), term_o_69), term_n_69), term_m_69), term_h_69), term_g_69), term_f_69), term_e_69), term_d_69);
  return(t);
}
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm g_74 (ATerm t)
  {
    ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
    d_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_74;
      }
    else
      {
        ATerm e_39 = NULL,m_39 = NULL,o_39 = NULL,b_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_74 = ATgetFirst((ATermList) t);
            f_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_74);
        e_39 = t;
        t = e_74;
        t = j_81(t);
        m_39 = t;
        t = f_74;
        t = g_74(t);
        o_39 = t;
        t = (ATerm) ATinsert(CheckATermList(o_39), m_39);
        b_16 = t;
        t = SSLsetAnnotations(b_16, e_39);
      }
    return(t);
  }
  t = g_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_74 = ATgetFirst((ATermList) t);
      k_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_74 = NULL,r_74 = NULL;
        ATerm r_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_74)), not_null(r_74));
          return(t);
        }
        t = k_74;
        t = k_0(t);
        if(((q_74 != NULL) && (q_74 != t)))
          _fail(t);
        else
          q_74 = t;
        t = j_74;
        t = j_0(t);
        if(((r_74 != NULL) && (r_74 != t)))
          _fail(t);
        else
          r_74 = t;
        t = k_74;
        t = reverse_acc_2_0(j_0, r_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_48;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_74 = NULL;
  t = term_k_48;
  t = i_0(t);
  s_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_70), s_74), term_h_70), term_c_58), term_g_70), term_c_58), term_b_70), term_a_70), term_c_58), term_z_69);
  return(t);
}
ATerm u_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm l_75 = NULL;
  l_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_75), term_j_70);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
  ATerm k_70 = t;
  int l_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_70;
      t = get_config_0_0(t);
      a_75 = t;
      ;
      LocalPopChoice(l_70);
    }
  else
    {
      t = k_70;
      {
        ATerm s_28 (ATerm t)
        {
          ATerm d_75 = NULL,e_75 = NULL,h_75 = NULL,k_16 = NULL;
          h_75 = t;
          if(match_cons(t, sym_Program_1))
            {
              e_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_75);
          d_75 = t;
          t = e_75;
          if(((a_75 != NULL) && (a_75 != t)))
            _fail(t);
          else
            a_75 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, e_75);
          k_16 = t;
          t = SSLsetAnnotations(k_16, d_75);
          return(t);
        }
        t = fetch_1_0(s_28, t);
      }
    }
  {
    ATerm n_70 = t;
    int o_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_28 (ATerm t)
        {
          t = not_null(a_75);
          return(t);
        }
        t = short_description_1_0(t_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(o_70);
      }
    else
      {
        t = n_70;
      }
    t = term_p_70;
    t = echo_0_0(t);
    t = term_s_62;
    b_75 = t;
    t = term_t_62;
    c_75 = t;
    t = term_q_70;
    t = z_12(b_75, c_75, t);
    t = reverse_acc_2_0(_id, u_28, t);
    t = map_1_0(v_28, t);
    {
      ATerm r_70 = t;
      int b_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_75 = NULL;
          ATerm w_28 (ATerm t)
          {
            t = not_null(a_75);
            return(t);
          }
          t = long_description_1_0(w_28, t);
          m_75 = t;
          t = (ATerm) ATinsert(CheckATermList(m_75), term_c_58);
          t = echo_0_0(t);
          ;
          LocalPopChoice(b_71);
        }
      else
        {
          t = r_70;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm q_76 (ATerm t)
  {
    ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
    n_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_76 = ATgetFirst((ATermList) t);
        p_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_71 = t;
      int g_71 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_40 = NULL,m_40 = NULL,p_16 = NULL;
          t = SSLgetAnnotations(n_76);
          i_40 = t;
          t = o_76;
          t = t_81(t);
          m_40 = t;
          t = (ATerm) ATinsert(CheckATermList(p_76), m_40);
          p_16 = t;
          t = SSLsetAnnotations(p_16, i_40);
          ;
          LocalPopChoice(g_71);
        }
      else
        {
          t = c_71;
          {
            ATerm y_40 = NULL,b_41 = NULL,u_16 = NULL;
            t = SSLgetAnnotations(n_76);
            y_40 = t;
            t = p_76;
            t = q_76(t);
            b_41 = t;
            t = (ATerm) ATinsert(CheckATermList(b_41), o_76);
            u_16 = t;
            t = SSLsetAnnotations(u_16, y_40);
          }
        }
    }
    return(t);
  }
  t = q_76(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
  w_76 = t;
  {
    ATerm k_71 = t;
    int n_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_71 = ATgetFirst((ATermList) t);
                ATerm h_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_76;
          }
        ;
        LocalPopChoice(n_71);
      }
    else
      {
        t = k_71;
        t = (ATerm) ATinsert(ATempty, w_76);
      }
    x_76 = t;
    t = term_k_31;
    y_76 = t;
    t = SSL_printnl(y_76, x_76);
    t = w_76;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_70;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_29 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL;
  t = term_i_72;
  i_77 = t;
  t = term_k_48;
  j_77 = t;
  t = term_q_72;
  t = c_13(i_77, j_77, t);
  return(t);
}
ATerm d_29 (ATerm t)
{
  t = term_r_72;
  return(t);
}
ATerm g_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm k_77 = NULL,m_77 = NULL,o_77 = NULL,q_77 = NULL;
  t = term_i_72;
  o_77 = t;
  t = term_k_48;
  q_77 = t;
  t = term_q_72;
  t = c_13(o_77, q_77, t);
  t = term_v_65;
  k_77 = t;
  t = term_k_48;
  m_77 = t;
  t = term_z_65;
  t = c_13(k_77, m_77, t);
  t = term_s_73;
  return(t);
}
ATerm i_29 (ATerm t)
{
  t = term_t_73;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_73 = t;
  int v_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_28, a_29, d_29, t);
      ;
      LocalPopChoice(v_73);
    }
  else
    {
      t = u_73;
      t = Option_3_0(g_29, h_29, i_29, t);
    }
  return(t);
}
ATerm z_12 (ATerm e_50, ATerm f_50, ATerm t)
{
  t = SSL_table_get(e_50, f_50);
  return(t);
}
ATerm a_13 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
  {
    ATerm w_73 = t;
    int x_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_73 = ATgetArgument(t, 0);
            ATerm z_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
        t = z_12(n_48, o_48, t);
        ;
        LocalPopChoice(x_73);
      }
    else
      {
        t = w_73;
        t = (ATerm) ATempty;
      }
    a_78 = t;
    t = (ATerm) ATinsert(CheckATermList(a_78), m_48);
    b_78 = t;
    t = SSL_table_put(n_48, o_48, b_78);
    t = z_77;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_78 = NULL,l_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_78 = NULL,r_78 = NULL,s_78 = NULL;
      t = term_k_48;
      t = h_0(t);
      m_78 = t;
      t = term_s_62;
      r_78 = t;
      t = term_t_62;
      s_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_62, term_t_62, m_78);
      t = a_13(r_78, s_78, m_78, t);
      _fail(t);
    }
  else
    {
      ATerm v_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_78 = ATgetFirst((ATermList) t);
          l_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_78;
      t = d_0(t);
      t = term_k_48;
      t = g_0(t);
      v_78 = t;
      t = (ATerm) ATinsert(CheckATermList(l_78), v_78);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm w_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,f_79 = NULL,h_79 = NULL,e_17 = NULL;
  h_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_78 = ATgetFirst((ATermList) t);
      a_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_79);
  w_78 = t;
  t = z_78;
  t = t_59(t);
  b_79 = t;
  t = a_79;
  t = u_59(t);
  f_79 = t;
  t = (ATerm) ATinsert(CheckATermList(f_79), b_79);
  e_17 = t;
  t = SSLsetAnnotations(e_17, w_78);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm m_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,b_80 = NULL,d_80 = NULL,g_17 = NULL;
  m_79 = t;
  {
    ATerm a_74 = t;
    int b_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_74;
        t = j_100(t);
        ;
        LocalPopChoice(b_74);
      }
    else
      {
        t = a_74;
      }
    t = m_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_79 = ATgetFirst((ATermList) t);
        r_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_79);
    p_79 = t;
    t = term_m_70;
    d_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_70, q_79);
    t = c_13(d_80, q_79, t);
    t = r_79;
    {
      ATerm v_80 (ATerm t)
      {
        ATerm h_74 = t;
        int i_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_74 = t;
            int m_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_80 = NULL;
                j_80 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_80;
                ;
                LocalPopChoice(m_74);
              }
            else
              {
                t = l_74;
                t = j_100(t);
                t = Cons_2_0(_id, v_80, t);
              }
            ;
            LocalPopChoice(i_74);
          }
        else
          {
            t = h_74;
            {
              ATerm p_80 = NULL,q_80 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_80 = ATgetFirst((ATermList) t);
                  q_80 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_80), (ATerm) ATmakeAppl(sym_Undefined_1, p_80));
            }
          }
        return(t);
      }
      t = v_80(t);
      b_80 = t;
      t = (ATerm) ATinsert(CheckATermList(b_80), (ATerm) ATmakeAppl(sym_Program_1, q_79));
      g_17 = t;
      t = SSLsetAnnotations(g_17, p_79);
    }
  }
  return(t);
}
ATerm l_29 (ATerm t)
{
  ATerm p_81 = NULL;
  p_81 = t;
  if(match_string(t, "--help"))
    {
      t = p_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_81;
        }
    }
  return(t);
}
ATerm m_29 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  t = term_p_65;
  q_81 = t;
  t = term_k_48;
  r_81 = t;
  t = term_q_65;
  t = c_13(q_81, r_81, t);
  t = term_p_74;
  return(t);
}
ATerm n_29 (ATerm t)
{
  t = term_t_74;
  return(t);
}
ATerm o_29 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm b_81 = NULL,d_81 = NULL,e_81 = NULL,i_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  e_81 = t;
  t = term_s_62;
  m_81 = t;
  t = term_t_62;
  n_81 = t;
  t = (ATerm) ATempty;
  o_81 = t;
  t = SSL_table_put(m_81, n_81, o_81);
  t = e_81;
  {
    ATerm k_29 (ATerm t)
    {
      ATerm v_74 = t;
      int w_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_100(t);
          ;
          LocalPopChoice(w_74);
        }
      else
        {
          t = v_74;
          {
            ATerm x_74 = t;
            int y_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_29, m_29, n_29, t);
                ;
                LocalPopChoice(y_74);
              }
            else
              {
                t = x_74;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_29, t);
    {
      ATerm z_74 = t;
      int f_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_82 = NULL;
          v_82 = t;
          {
            ATerm g_75 = t;
            int i_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_41 = NULL;
                t = v_82;
                {
                  ATerm j_75 = t;
                  int k_75 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_65;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_75);
                    }
                  else
                    {
                      t = j_75;
                      t = fetch_1_0(o_29, t);
                    }
                  t = v_82;
                  t = default_system_usage_0_0(t);
                  t = term_a_30;
                  n_41 = t;
                  t = SSL_exit(n_41);
                }
                ;
                LocalPopChoice(i_75);
              }
            else
              {
                t = g_75;
                {
                  ATerm a_42 = NULL;
                  t = term_i_72;
                  t = get_config_0_0(t);
                  t = v_82;
                  t = default_system_about_0_0(t);
                  t = term_a_30;
                  a_42 = t;
                  t = SSL_exit(a_42);
                }
              }
          }
          ;
          LocalPopChoice(f_75);
        }
      else
        {
          t = z_74;
          {
            ATerm n_75 = t;
            int o_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_82 = NULL,y_82 = NULL,a_83 = NULL;
                ATerm p_29 (ATerm t)
                {
                  ATerm d_83 = NULL,f_83 = NULL,o_83 = NULL,o_17 = NULL;
                  o_83 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      f_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_83);
                  d_83 = t;
                  t = f_83;
                  if(((b_81 != NULL) && (b_81 != t)))
                    _fail(t);
                  else
                    b_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_83);
                  o_17 = t;
                  t = SSLsetAnnotations(o_17, d_83);
                  return(t);
                }
                t = fetch_1_0(p_29, t);
                t = term_p_30;
                y_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_81)), term_p_75);
                a_83 = t;
                t = SSL_printnl(y_82, a_83);
                t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_81)), term_p_75));
                t = default_system_usage_0_0(t);
                t = term_k_32;
                x_82 = t;
                t = SSL_exit(x_82);
                ;
                LocalPopChoice(o_75);
              }
            else
              {
                t = n_75;
              }
          }
        }
      d_81 = t;
      t = term_s_62;
      i_81 = t;
      t = SSL_table_destroy(i_81);
      t = d_81;
    }
  }
  return(t);
}
ATerm c_13 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm b_84 = NULL;
  t = term_e_55;
  b_84 = t;
  t = SSL_table_put(b_84, p_43, q_43);
  t = (ATerm) ATmakeAppl(sym__3, term_e_55, p_43, q_43);
  return(t);
}
ATerm d_13 (ATerm o_33, ATerm p_33, ATerm t)
{
  t = SSL_strcat(o_33, p_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL;
  j_84 = t;
  t = SSL_explode_string(j_84);
  {
    ATerm q_75 = t;
    int r_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_85 (ATerm t)
        {
          ATerm g_85 = NULL,h_85 = NULL,j_85 = NULL;
          g_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_85 = ATgetFirst((ATermList) t);
              j_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_75 = t;
            int t_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_42 = NULL,x_42 = NULL,b_18 = NULL;
                t = SSLgetAnnotations(g_85);
                p_42 = t;
                t = j_85;
                t = k_85(t);
                x_42 = t;
                t = (ATerm) ATinsert(CheckATermList(x_42), h_85);
                b_18 = t;
                t = SSLsetAnnotations(b_18, p_42);
                ;
                LocalPopChoice(t_75);
              }
            else
              {
                t = s_75;
                {
                  ATerm i_43 = NULL,c_18 = NULL;
                  t = SSLgetAnnotations(g_85);
                  i_43 = t;
                  t = h_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, h_85);
                  c_18 = t;
                  t = SSLsetAnnotations(c_18, i_43);
                }
              }
          }
          return(t);
        }
        t = k_85(t);
        ;
        LocalPopChoice(r_75);
      }
    else
      {
        t = q_75;
        t = (ATerm) ATempty;
      }
    i_84 = t;
    t = SSL_implode_string(i_84);
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,f_86 = NULL,i_86 = NULL,l_86 = NULL,m_86 = NULL,o_86 = NULL,s_86 = NULL,v_86 = NULL,y_86 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,r_88 = NULL,t_88 = NULL;
  t_85 = t;
  t = term_q_57;
  r_88 = t;
  t = term_u_75;
  t_88 = t;
  t = term_v_75;
  t = c_13(r_88, t_88, t);
  t = term_n_30;
  b_88 = t;
  t = term_k_32;
  c_88 = t;
  t = term_w_75;
  t = c_13(b_88, c_88, t);
  t = term_b_34;
  z_87 = t;
  t = term_a_30;
  a_88 = t;
  t = term_x_75;
  t = c_13(z_87, a_88, t);
  t = term_g_34;
  w_87 = t;
  t = term_h_35;
  y_87 = t;
  t = term_y_75;
  t = c_13(w_87, y_87, t);
  t = term_z_75;
  t = xtc_find_path_0_0(t);
  i_86 = t;
  t = term_a_76;
  t = xtc_find_path_0_0(t);
  l_86 = t;
  t = term_b_76;
  t = xtc_find_path_0_0(t);
  m_86 = t;
  t = term_t_51;
  u_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_86), term_t_51), l_86), term_t_51), i_86), term_t_51);
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_86), term_t_51), l_86), term_t_51), i_86), term_t_51));
  t = c_13(u_87, v_87, t);
  t = term_r_31;
  s_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_76), term_c_76);
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, (ATerm) ATinsert(ATinsert(ATempty, term_d_76), term_c_76));
  t = c_13(s_87, t_87, t);
  t = term_e_76;
  t = xtc_find_path_0_0(t);
  f_86 = t;
  t = term_f_76;
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_86, term_f_76);
  t = d_13(f_86, j_87, t);
  z_85 = t;
  t = term_e_76;
  t = xtc_find_path_0_0(t);
  d_86 = t;
  t = term_f_76;
  i_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_86, term_f_76);
  t = d_13(d_86, i_87, t);
  a_86 = t;
  t = term_g_76;
  t = xtc_find_path_0_0(t);
  c_86 = t;
  t = term_f_76;
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, term_f_76);
  t = d_13(c_86, h_87, t);
  b_86 = t;
  t = term_c_31;
  d_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_86), term_t_51), a_86), term_t_51), z_85), term_t_51);
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_86), term_t_51), a_86), term_t_51), z_85), term_t_51));
  t = c_13(d_87, e_87, t);
  t = term_e_76;
  t = xtc_find_path_0_0(t);
  y_85 = t;
  t = term_h_76;
  c_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, term_h_76);
  t = d_13(y_85, c_87, t);
  u_85 = t;
  t = term_g_76;
  t = xtc_find_path_0_0(t);
  w_85 = t;
  t = term_h_76;
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_85, term_h_76);
  t = d_13(w_85, b_87, t);
  v_85 = t;
  t = term_x_30;
  v_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_76), term_l_76), v_85), term_i_76), term_k_76), term_j_76), u_85), term_i_76);
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_76), term_l_76), v_85), term_i_76), term_k_76), term_j_76), u_85), term_i_76));
  t = c_13(v_86, y_86, t);
  t = term_j_47;
  o_86 = t;
  t = (ATerm) ATinsert(ATempty, term_r_76);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_47, (ATerm) ATinsert(ATempty, term_r_76));
  t = c_13(o_86, s_86, t);
  t = t_85;
  return(t);
}
ATerm q_29 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  t = term_d_47;
  t = get_config_0_0(t);
  t = debug_1_0(r_29, t);
  t = z_89;
  return(t);
}
ATerm r_29 (ATerm t)
{
  t = term_s_76;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm t_76 = t;
    int u_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_89 = NULL,h_89 = NULL,j_89 = NULL;
        t = term_s_65;
        t = get_config_0_0(t);
        t = term_v_76;
        t = xtc_find_0_0(t);
        b_89 = t;
        t = term_k_31;
        j_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_89, term_k_31);
        t = m_12(b_89, j_89, t);
        t = term_a_30;
        h_89 = t;
        t = SSL_exit(h_89);
        ;
        LocalPopChoice(u_76);
      }
    else
      {
        t = t_76;
      }
    {
      ATerm z_76 = t;
      int a_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_89 = NULL;
          t = term_v_65;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_a_30;
          p_89 = t;
          t = SSL_exit(p_89);
          ;
          LocalPopChoice(a_77);
        }
      else
        {
          t = z_76;
        }
      {
        ATerm b_77 = t;
        int c_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_89 = NULL;
            s_89 = t;
            t = term_d_47;
            t = get_config_0_0(t);
            t = s_89;
            ;
            LocalPopChoice(c_77);
          }
        else
          {
            t = b_77;
            {
              ATerm u_89 = NULL,x_89 = NULL,y_89 = NULL;
              t = term_p_30;
              x_89 = t;
              t = (ATerm) ATinsert(ATempty, term_d_77);
              y_89 = t;
              t = SSL_printnl(x_89, y_89);
              t = term_k_32;
              u_89 = t;
              t = SSL_exit(u_89);
              t = (ATerm) ATinsert(ATempty, term_d_77);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(q_29, t);
      }
    }
  }
  return(t);
}
ATerm s_29 (ATerm t)
{
  t = if_verbose1_1_0(u_29, t);
  return(t);
}
ATerm t_29 (ATerm t)
{
  t = xtc_temp_files_1_0(x_29, t);
  return(t);
}
ATerm u_29 (ATerm t)
{
  ATerm c_90 = NULL,f_90 = NULL,g_90 = NULL;
  c_90 = t;
  t = term_p_30;
  f_90 = t;
  t = (ATerm) ATinsert(CheckATermList(c_90), term_e_77);
  g_90 = t;
  t = SSL_printnl(f_90, g_90);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(CheckATermList(c_90), term_e_77));
  return(t);
}
ATerm x_29 (ATerm t)
{
  ATerm f_77 = t;
  int g_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_90 = NULL;
      t = term_d_47;
      t = get_config_0_0(t);
      h_90 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_90);
      ;
      LocalPopChoice(g_77);
    }
  else
    {
      t = f_77;
      t = term_s_49;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
  t = run_time_0_0(t);
  k_90 = t;
  t = term_p_30;
  l_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_77), k_90), term_h_77);
  m_90 = t;
  t = SSL_printnl(l_90, m_90);
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_77), k_90), term_h_77));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm n_77 = t;
  int p_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_90 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(s_29, t_29, t);
      t = if_verbose2_1_0(z_29, t);
      t = term_a_30;
      b_90 = t;
      t = SSL_exit(b_90);
      ;
      LocalPopChoice(p_77);
    }
  else
    {
      t = n_77;
      {
        ATerm o_90 = NULL,p_90 = NULL,s_90 = NULL,t_90 = NULL;
        t = run_time_0_0(t);
        o_90 = t;
        t = term_p_30;
        s_90 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_77), o_90), term_r_77);
        t_90 = t;
        t = SSL_printnl(s_90, t_90);
        t = term_k_32;
        p_90 = t;
        t = SSL_exit(p_90);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
