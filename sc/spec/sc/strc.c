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
ATerm term_w_76;
ATerm term_t_76;
ATerm term_p_76;
ATerm term_i_76;
ATerm term_h_76;
ATerm term_c_76;
ATerm term_z_75;
ATerm term_y_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_v_75;
ATerm term_u_75;
ATerm term_t_75;
ATerm term_s_75;
ATerm term_r_75;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_o_75;
ATerm term_n_75;
ATerm term_m_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_j_75;
ATerm term_i_75;
ATerm term_h_75;
ATerm term_g_75;
ATerm term_d_75;
ATerm term_r_74;
ATerm term_t_73;
ATerm term_s_73;
ATerm term_a_73;
ATerm term_a_71;
ATerm term_v_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_e_70;
ATerm term_d_70;
ATerm term_z_69;
ATerm term_r_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_u_68;
ATerm term_r_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_a_66;
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
ATerm term_f_65;
ATerm term_b_65;
ATerm term_z_64;
ATerm term_s_64;
ATerm term_o_64;
ATerm term_m_64;
ATerm term_f_64;
ATerm term_b_64;
ATerm term_z_63;
ATerm term_x_63;
ATerm term_s_63;
ATerm term_o_63;
ATerm term_m_63;
ATerm term_j_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_m_62;
ATerm term_j_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_y_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_i_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_a_61;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_j_60;
ATerm term_h_60;
ATerm term_c_60;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_s_59;
ATerm term_p_59;
ATerm term_e_58;
ATerm term_c_58;
ATerm term_t_57;
ATerm term_s_57;
ATerm term_o_57;
ATerm term_n_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_x_54;
ATerm term_m_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_n_51;
ATerm term_k_51;
ATerm term_g_51;
ATerm term_w_50;
ATerm term_u_50;
ATerm term_p_50;
ATerm term_d_50;
ATerm term_w_49;
ATerm term_r_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_z_48;
ATerm term_u_48;
ATerm term_r_48;
ATerm term_k_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_t_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_b_47;
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
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_d_43;
ATerm term_b_43;
ATerm term_x_42;
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
ATerm term_g_42;
ATerm term_f_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_t_39;
ATerm term_h_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_u_38;
ATerm term_p_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_w_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_x_34;
ATerm term_r_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_w_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_c_32;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_i_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_x_29;
void init_constant_terms (void)
{
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_40, term_s_32, term_x_40);
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_40, term_g_30, term_a_41);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_41, term_f_33, term_d_41);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_41, term_c_35, term_h_41);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_41, term_k_41, term_l_41);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_41, term_o_41, term_p_41);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_41, term_t_41, term_u_41);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_41, term_x_41, term_y_41);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_42, term_f_42, term_g_42);
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
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_42, term_x_34, term_x_42);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_43, term_f_43, term_g_43);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_43, term_j_43, term_k_43);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_43, term_n_43, term_o_43);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_43, term_z_43, term_a_44);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_44, term_d_44, term_e_44);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_44, term_h_44, term_i_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_44, term_l_44, term_m_44);
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_44, term_p_44, term_q_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_44, term_v_44, term_w_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_44, term_z_44, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_45, term_d_45, term_e_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_45, term_h_45, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_45, term_r_34, term_l_45);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_45, term_o_45, term_x_45);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_45, term_a_46, term_b_46);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_46, term_e_46, term_f_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym__2, term_e_49, term_k_48);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_n_57));
  term_n_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_e_58));
  term_e_58 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(sym__2, term_p_60, term_f_61);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(sym__2, term_p_60, term_q_60);
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_d_48);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(sym__2, term_u_50, term_d_48);
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(sym__2, term_t_47, term_d_48);
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(sym__2, term_x_35, term_d_48);
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_x_29);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(sym__2, term_m_65, term_d_48);
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_d_48);
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_d_48);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(sym__2, term_j_62, term_m_62);
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(sym__2, term_s_70, term_d_48);
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(sym__2, term_j_57, term_d_75);
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_g_30);
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_x_29);
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_c_35);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm t_11 (ATerm d_19, ATerm);
ATerm k_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm u_11 (ATerm b_19, ATerm);
ATerm x_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm v_11 (ATerm i_39, ATerm j_39, ATerm);
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
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm d_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm s_96 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
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
ATerm m_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
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
ATerm z_8 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
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
ATerm a_12 (ATerm);
ATerm e_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm y_12 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
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
ATerm f_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm o_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm e_15 (ATerm);
ATerm g_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm s_15 (ATerm);
ATerm x_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm o_16 (ATerm);
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm);
ATerm z_11 (ATerm r_44, ATerm s_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm z_16 (ATerm);
ATerm b_17 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm c_17 (ATerm);
ATerm h_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm o_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm w_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm);
ATerm x_11 (ATerm i_42, ATerm j_42, ATerm);
ATerm y_11 (ATerm g_94 (ATerm), ATerm o_439, ATerm q_42, ATerm);
ATerm b_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm);
ATerm l_33 (ATerm w_32, ATerm);
ATerm m_33 (ATerm y_32, ATerm z_32, ATerm d_33, ATerm);
ATerm q_17 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm t_17 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm u_17 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm z_17 (ATerm);
ATerm b_18 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm a_19 (ATerm);
ATerm c_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm k_19 (ATerm);
ATerm p_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm c_12 (ATerm s_18, ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm w_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm j_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm h_21 (ATerm);
ATerm l_21 (ATerm);
ATerm p_21 (ATerm);
ATerm t_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm y_21 (ATerm);
ATerm a_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm v_22 (ATerm);
ATerm a_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm e_23 (ATerm);
ATerm g_23 (ATerm);
ATerm i_23 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm j_23 (ATerm);
ATerm l_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_12 (ATerm s_48, ATerm t_48, ATerm);
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm n_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm f_12 (ATerm y_35, ATerm z_35, ATerm);
ATerm h_12 (ATerm e_36, ATerm f_36, ATerm);
ATerm i_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm j_12 (ATerm k_39, ATerm l_39, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm m_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm);
ATerm n_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm);
ATerm x_23 (ATerm);
ATerm o_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm);
ATerm p_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm);
ATerm s_12 (ATerm s_38, ATerm t_38, ATerm);
ATerm t_61 (ATerm j_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_12 (ATerm o_42, ATerm);
ATerm r_12 (ATerm a_39, ATerm b_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_63 (ATerm g_62, ATerm);
ATerm q_63 (ATerm k_62, ATerm l_62, ATerm n_62, ATerm);
ATerm r_63 (ATerm x_62, ATerm y_62, ATerm a_63, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_23 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm p_24 (ATerm);
ATerm s_24 (ATerm);
ATerm q_67 (ATerm v_66, ATerm);
ATerm z_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm t_12 (ATerm v_43, ATerm u_43, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm u_12 (ATerm s_43, ATerm t_43, ATerm);
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_70 (ATerm s_69, ATerm);
ATerm conc_0_0 (ATerm);
ATerm v_12 (ATerm w_43, ATerm x_43, ATerm);
ATerm k_25 (ATerm);
ATerm m_25 (ATerm);
ATerm o_25 (ATerm);
ATerm t_25 (ATerm);
ATerm v_25 (ATerm);
ATerm y_25 (ATerm);
ATerm z_25 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm j_26 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm p_26 (ATerm);
ATerm q_26 (ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm x_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm f_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm q_27 (ATerm);
ATerm r_27 (ATerm);
ATerm s_27 (ATerm);
ATerm t_27 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_28 (ATerm);
ATerm x_28 (ATerm);
ATerm y_28 (ATerm);
ATerm z_28 (ATerm);
ATerm e_29 (ATerm);
ATerm f_29 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm w_12 (ATerm e_50, ATerm f_50, ATerm);
ATerm x_12 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm l_29 (ATerm);
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm z_12 (ATerm p_43, ATerm q_43, ATerm);
ATerm a_13 (ATerm o_33, ATerm p_33, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm p_29 (ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm t_29 (ATerm);
ATerm w_29 (ATerm);
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
  t = term_x_29;
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
  t = f_12(f_1, g_1, t);
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
      ATerm y_29 = ATgetArgument(t, 0);
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
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_g_30);
        t = geq_0_0(t);
        t = d_1;
        t = r_95(t);
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = d_1;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = term_m_30;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_n_30);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = p_1;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_1 = NULL,y_1 = NULL,z_1 = NULL;
  t_1 = t;
  t = term_m_30;
  y_1 = t;
  t = (ATerm) ATinsert(ATempty, t_1);
  z_1 = t;
  t = SSL_printnl(y_1, z_1);
  t = t_1;
  return(t);
}
ATerm t_11 (ATerm d_19, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = get_outfile_1_0(e_1, t);
      }
    l_1 = t;
    t = term_v_30;
    t = get_config_0_0(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_30, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_1), l_1), term_t_30), d_19));
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
        t = z_11(n_1, o_1, t);
        t = term_x_30;
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
  t = term_m_30;
  j_2 = t;
  t = (ATerm) ATinsert(ATempty, term_y_30);
  k_2 = t;
  t = SSL_printnl(j_2, k_2);
  t = i_2;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  t = term_m_30;
  o_2 = t;
  t = (ATerm) ATinsert(ATempty, l_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = l_2;
  return(t);
}
ATerm u_11 (ATerm b_19, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(q_1, t);
  b_2 = t;
  t = term_a_31;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_t_30), b_19), term_b_31));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, c_2);
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
      t = z_11(g_2, h_2, t);
      t = term_x_30;
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
  t = u_11(b_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      y_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(y_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_m_30;
  w_2 = t;
  t = (ATerm) ATinsert(CheckATermList(v_2), term_c_31);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(CheckATermList(v_2), term_c_31));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL;
      t_2 = t;
      t = term_b_31;
      t = get_config_0_0(t);
      t = t_2;
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = profile_p__2_0(x_1, e_2, t);
    }
  return(t);
}
ATerm v_11 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSL_rename(i_39, j_39);
  return(t);
}
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = q_3;
        t = v_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_i_31;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_3, term_i_31);
        t = j_12(r_3, u_1, t);
        t = SSL_remove(r_3);
        t = term_i_31;
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm j_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL;
              t = q_3;
              t = v_0(t);
              m_2 = t;
              {
                ATerm l_31 = t;
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
                        if((r_3 != t))
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
                    t = l_31;
                  }
                t = (ATerm) ATmakeAppl(sym__2, r_3, m_2);
                t = v_11(r_3, m_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
              }
              ;
              LocalPopChoice(k_31);
            }
          else
            {
              t = j_31;
              t = q_3;
              t = v_0(t);
              if((r_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  t = term_m_31;
  z_3 = t;
  t = term_n_31;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_o_31);
  a_4 = t;
  t = c_4;
  t = comp_0_2(z_3, a_4, t);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), term_p_31);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = term_q_31;
  e_4 = t;
  t = term_p_31;
  t = get_config_0_0(t);
  t = foldr_3_0(r_2, conc_0_0, s_2, t);
  f_4 = t;
  t = g_4;
  t = comp_0_2(e_4, f_4, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  t = term_m_30;
  y_4 = t;
  t = (ATerm) ATinsert(ATempty, term_s_31);
  z_4 = t;
  t = SSL_printnl(y_4, z_4);
  t = x_4;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  f_5 = t;
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_5 = ATgetArgument(t, 0);
            {
              ATerm a_3 = NULL,u_0 = NULL;
              t = SSLgetAnnotations(f_5);
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
              u_0 = t;
              t = SSLsetAnnotations(u_0, a_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_5;
          }
        LocalPopChoice(v_31);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = t_31;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
    t = if_keep1_1_0(j_3, t);
    t = olevel_2_0(n_3, o_3, t);
    t = olevel_2_0(p_5, r_5, t);
    e_5 = t;
    {
      ATerm w_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              t_6 = ATgetArgument(t, 0);
              {
                ATerm j_4 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(e_5);
                j_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_6);
                z_0 = t;
                t = SSLsetAnnotations(z_0, j_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = e_5;
            }
          LocalPopChoice(y_31);
          t = xtc_transform_file_2_0(b_6, f_6, t);
        }
      else
        {
          t = w_31;
          t = xtc_transform_term_2_0(g_6, i_6, t);
        }
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      d_5 = t;
      {
        ATerm z_31 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                b_7 = ATgetArgument(t, 0);
                {
                  ATerm n_4 = NULL,b_1 = NULL;
                  t = SSLgetAnnotations(d_5);
                  n_4 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, b_7);
                  b_1 = t;
                  t = SSLsetAnnotations(b_1, n_4);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_5;
              }
            LocalPopChoice(b_32);
            t = xtc_transform_file_2_0(j_6, pass_verbose_0_0, t);
          }
        else
          {
            t = z_31;
            t = xtc_transform_term_2_0(l_6, pass_verbose_0_0, t);
          }
        t = rename_to_1_0(m_6, t);
      }
    }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_m_30;
  b_5 = t;
  t = (ATerm) ATinsert(CheckATermList(a_5), term_c_32);
  c_5 = t;
  t = SSL_printnl(b_5, c_5);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(CheckATermList(a_5), term_c_32));
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm m_5 = NULL;
  t = pass_verbose_0_0(t);
  m_5 = t;
  t = (ATerm) ATinsert(CheckATermList(m_5), term_k_32);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm n_5 = NULL;
  t = pass_verbose_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(n_5), term_k_32);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL;
  q_5 = t;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_6 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(q_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_6);
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
        LocalPopChoice(u_32);
        t = xtc_transform_file_2_0(s_3, t_3, t);
      }
    else
      {
        t = t_32;
        t = xtc_transform_term_2_0(w_3, y_3, t);
      }
    t = if_keep1_1_0(d_4, t);
    o_5 = t;
    {
      ATerm v_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              k_6 = ATgetArgument(t, 0);
              {
                ATerm x_3 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(o_5);
                x_3 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, k_6);
                y_0 = t;
                t = SSLsetAnnotations(y_0, x_3);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = o_5;
            }
          LocalPopChoice(x_32);
          t = xtc_transform_file_2_0(k_4, l_4, t);
        }
      else
        {
          t = v_32;
          t = xtc_transform_term_2_0(m_4, o_4, t);
        }
      t = if_keep1_1_0(p_4, t);
    }
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm c_6 = NULL;
  t = pass_verbose_0_0(t);
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(c_6), term_k_32);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_k_32);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_6 = NULL;
  t = pass_verbose_0_0(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_6), term_k_32);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_k_32);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = save_as_1_0(l_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm r_5 (ATerm t)
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
  t = term_g_33;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm v_6 = NULL;
  t = pass_verbose_0_0(t);
  v_6 = t;
  t = (ATerm) ATinsert(CheckATermList(v_6), term_k_32);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_k_32);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = get_outfile_1_0(o_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_s_33;
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
  ATerm n_7 = NULL;
  n_7 = t;
  {
    ATerm t_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_7, term_s_32);
        t = geq_0_0(t);
        t = n_7;
        t = s_96(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = t_33;
        t = n_7;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL,c_8 = NULL;
        t = s_7;
        t = o_104(t);
        z_7 = t;
        t = term_a_34;
        t = get_config_0_0(t);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, z_7);
        t = geq_0_0(t);
        t = s_7;
        t = p_104(t);
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = s_7;
      }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_k_32);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm h_6 = NULL;
  t = pass_verbose_0_0(t);
  h_6 = t;
  t = (ATerm) ATinsert(CheckATermList(h_6), term_k_32);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_k_32);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_k_32);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm d_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_9;
        {
          ATerm k_34 = t;
          int l_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_5 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  x_5 = ATgetArgument(t, 0);
                  {
                    ATerm x_6 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(q_9);
                    x_6 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, x_6);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_9;
                }
              LocalPopChoice(l_34);
              t = xtc_transform_file_2_0(q_6, r_6, t);
            }
          else
            {
              t = k_34;
              t = xtc_transform_term_2_0(s_6, u_6, t);
            }
        }
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = d_34;
        t = q_9;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  v_7 = ATgetArgument(t, 0);
                  {
                    ATerm e_8 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(q_9);
                    e_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, v_7);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, e_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_9;
                }
              LocalPopChoice(n_34);
              t = xtc_transform_file_2_0(y_6, z_6, t);
            }
          else
            {
              t = m_34;
              t = xtc_transform_term_2_0(a_7, c_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm o_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_r_34);
        t = geq_0_0(t);
        t = w_9;
        t = w_96(t);
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = o_34;
        t = w_9;
      }
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  {
    ATerm t_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, term_x_34);
        t = geq_0_0(t);
        t = c_10;
        t = v_96(t);
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = t_34;
        t = c_10;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm k_10 = NULL;
  k_10 = t;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        o_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_10, term_c_35);
        t = geq_0_0(t);
        t = k_10;
        t = x_96(t);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = k_10;
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm d_14 = NULL,g_14 = NULL,h_14 = NULL;
  d_14 = t;
  t = term_m_30;
  g_14 = t;
  t = (ATerm) ATinsert(ATempty, term_e_35);
  h_14 = t;
  t = SSL_printnl(g_14, h_14);
  t = d_14;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm n_14 = NULL;
  t = if_verbose3_1_0(h_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = olevel_2_0(u_7, w_7, t);
  t = olevel_2_0(k_8, l_8, t);
  n_14 = t;
  {
    ATerm h_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_17 = ATgetArgument(t, 0);
            {
              ATerm f_11 = NULL,t_4 = NULL;
              t = SSLgetAnnotations(n_14);
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_17);
              t_4 = t;
              t = SSLsetAnnotations(t_4, f_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_14;
          }
        LocalPopChoice(l_35);
        t = xtc_transform_file_2_0(d_10, e_10, t);
      }
    else
      {
        t = h_35;
        t = xtc_transform_term_2_0(h_10, i_10, t);
      }
    t = olevel_2_0(j_10, l_10, t);
    t = olevel_2_0(g_11, h_11, t);
    t = olevel_2_0(k_12, l_12, t);
    t = olevel_2_0(q_13, s_13, t);
    t = olevel_2_0(e_15, g_15, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm i_14 = NULL,l_14 = NULL,m_14 = NULL;
  i_14 = t;
  t = term_m_30;
  l_14 = t;
  t = (ATerm) ATinsert(CheckATermList(i_14), term_m_35);
  m_14 = t;
  t = SSL_printnl(l_14, m_14);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(CheckATermList(i_14), term_m_35));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = term_a_34;
  t = get_config_0_0(t);
  t = debug_1_0(i_7, t);
  t = p_14;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm o_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_14 = ATgetArgument(t, 0);
            {
              ATerm j_8 = NULL,p_3 = NULL;
              t = SSLgetAnnotations(q_14);
              j_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_14);
              p_3 = t;
              t = SSLsetAnnotations(p_3, j_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_14;
          }
        LocalPopChoice(q_35);
        t = xtc_transform_file_2_0(l_7, m_7, t);
      }
    else
      {
        t = o_35;
        t = xtc_transform_term_2_0(o_7, q_7, t);
      }
    t = if_keep1_1_0(r_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm z_14 = NULL;
  t = pass_verbose_0_0(t);
  z_14 = t;
  t = (ATerm) ATinsert(CheckATermList(z_14), term_k_32);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm a_15 = NULL;
  t = pass_verbose_0_0(t);
  a_15 = t;
  t = (ATerm) ATinsert(CheckATermList(a_15), term_k_32);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = save_as_1_0(t_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  {
    ATerm s_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_15;
        {
          ATerm w_35 = t;
          if((PushChoice() == 0))
            {
              t = term_x_35;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_35;
            }
          t = p_15;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    k_9 = ATgetArgument(t, 0);
                    {
                      ATerm f_10 = NULL,u_3 = NULL;
                      t = SSLgetAnnotations(p_15);
                      f_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
                      u_3 = t;
                      t = SSLsetAnnotations(u_3, f_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = p_15;
                  }
                LocalPopChoice(b_36);
                t = xtc_transform_file_2_0(b_8, d_8, t);
              }
            else
              {
                t = a_36;
                t = xtc_transform_term_2_0(f_8, g_8, t);
              }
            t = if_keep2_1_0(h_8, t);
          }
        }
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = s_35;
        t = p_15;
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm p_9 = NULL;
  t = pass_verbose_0_0(t);
  p_9 = t;
  t = (ATerm) ATinsert(CheckATermList(p_9), term_k_32);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm v_9 = NULL;
  t = pass_verbose_0_0(t);
  v_9 = t;
  t = (ATerm) ATinsert(CheckATermList(v_9), term_k_32);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = save_as_1_0(i_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  w_15 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_16 = ATgetArgument(t, 0);
            {
              ATerm m_10 = NULL,v_3 = NULL;
              t = SSLgetAnnotations(w_15);
              m_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_16);
              v_3 = t;
              t = SSLsetAnnotations(v_3, m_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_15;
          }
        LocalPopChoice(h_36);
        t = xtc_transform_file_2_0(m_8, o_8, t);
      }
    else
      {
        t = g_36;
        t = xtc_transform_term_2_0(q_8, u_8, t);
      }
    t = if_keep6_1_0(v_8, t);
    v_15 = t;
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_16 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              n_16 = ATgetArgument(t, 0);
              {
                ATerm t_10 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(v_15);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, n_16);
                q_4 = t;
                t = SSLsetAnnotations(q_4, t_10);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = v_15;
            }
          LocalPopChoice(j_36);
          t = xtc_transform_file_2_0(x_8, z_8, t);
        }
      else
        {
          t = i_36;
          t = xtc_transform_term_2_0(l_9, m_9, t);
        }
      u_15 = t;
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_16 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                w_16 = ATgetArgument(t, 0);
                {
                  ATerm x_10 = NULL,r_4 = NULL;
                  t = SSLgetAnnotations(u_15);
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, w_16);
                  r_4 = t;
                  t = SSLsetAnnotations(r_4, x_10);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_15;
              }
            LocalPopChoice(l_36);
            t = xtc_transform_file_2_0(n_9, o_9, t);
          }
        else
          {
            t = k_36;
            t = xtc_transform_term_2_0(r_9, s_9, t);
          }
        t = if_keep4_1_0(t_9, t);
        t_15 = t;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_17 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  g_17 = ATgetArgument(t, 0);
                  {
                    ATerm b_11 = NULL,s_4 = NULL;
                    t = SSLgetAnnotations(t_15);
                    b_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, g_17);
                    s_4 = t;
                    t = SSLsetAnnotations(s_4, b_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = t_15;
                }
              LocalPopChoice(n_36);
              t = xtc_transform_file_2_0(x_9, y_9, t);
            }
          else
            {
              t = m_36;
              t = xtc_transform_term_2_0(a_10, b_10, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm f_16 = NULL;
  t = pass_verbose_0_0(t);
  f_16 = t;
  t = (ATerm) ATinsert(CheckATermList(f_16), term_k_32);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm g_16 = NULL;
  t = pass_verbose_0_0(t);
  g_16 = t;
  t = (ATerm) ATinsert(CheckATermList(g_16), term_k_32);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = save_as_1_0(w_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm p_16 = NULL;
  t = pass_verbose_0_0(t);
  p_16 = t;
  t = (ATerm) ATinsert(CheckATermList(p_16), term_k_32);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm q_16 = NULL;
  t = pass_verbose_0_0(t);
  q_16 = t;
  t = (ATerm) ATinsert(CheckATermList(q_16), term_k_32);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm y_16 = NULL;
  t = pass_verbose_0_0(t);
  y_16 = t;
  t = (ATerm) ATinsert(CheckATermList(y_16), term_k_32);
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm a_17 = NULL;
  t = pass_verbose_0_0(t);
  a_17 = t;
  t = (ATerm) ATinsert(CheckATermList(a_17), term_k_32);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = save_as_1_0(u_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm i_17 = NULL;
  t = pass_verbose_0_0(t);
  i_17 = t;
  t = (ATerm) ATinsert(CheckATermList(i_17), term_k_32);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm j_17 = NULL;
  t = pass_verbose_0_0(t);
  j_17 = t;
  t = (ATerm) ATinsert(CheckATermList(j_17), term_k_32);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm r_17 = NULL;
  t = pass_verbose_0_0(t);
  r_17 = t;
  t = (ATerm) ATinsert(CheckATermList(r_17), term_k_32);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm s_17 = NULL;
  t = pass_verbose_0_0(t);
  s_17 = t;
  t = (ATerm) ATinsert(CheckATermList(s_17), term_k_32);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            d_18 = ATgetArgument(t, 0);
            {
              ATerm j_11 = NULL,u_4 = NULL;
              t = SSLgetAnnotations(x_17);
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_18);
              u_4 = t;
              t = SSLsetAnnotations(u_4, j_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_17;
          }
        LocalPopChoice(y_36);
        t = xtc_transform_file_2_0(n_10, p_10, t);
      }
    else
      {
        t = x_36;
        t = xtc_transform_term_2_0(q_10, r_10, t);
      }
    t = bound_unbound_vars_0_0(t);
    w_17 = t;
    {
      ATerm z_36 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              l_18 = ATgetArgument(t, 0);
              {
                ATerm n_11 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(w_17);
                n_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_18);
                v_4 = t;
                t = SSLsetAnnotations(v_4, n_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = w_17;
            }
          LocalPopChoice(b_37);
          t = xtc_transform_file_2_0(s_10, u_10, t);
        }
      else
        {
          t = z_36;
          t = xtc_transform_term_2_0(v_10, w_10, t);
        }
      v_17 = t;
      {
        ATerm d_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                j_19 = ATgetArgument(t, 0);
                {
                  ATerm r_11 = NULL,w_4 = NULL;
                  t = SSLgetAnnotations(v_17);
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
                t = v_17;
              }
            LocalPopChoice(g_37);
            t = xtc_transform_file_2_0(y_10, z_10, t);
          }
        else
          {
            t = d_37;
            t = xtc_transform_term_2_0(a_11, c_11, t);
          }
        t = if_keep4_1_0(d_11, t);
      }
    }
  }
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm f_18 = NULL;
  t = pass_verbose_0_0(t);
  f_18 = t;
  t = (ATerm) ATinsert(CheckATermList(f_18), term_k_32);
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm g_18 = NULL;
  t = pass_verbose_0_0(t);
  g_18 = t;
  t = (ATerm) ATinsert(CheckATermList(g_18), term_k_32);
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm n_18 = NULL;
  t = pass_verbose_0_0(t);
  n_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_k_32);
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm z_18 = NULL;
  t = pass_verbose_0_0(t);
  z_18 = t;
  t = (ATerm) ATinsert(CheckATermList(z_18), term_k_32);
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm l_19 = NULL;
  t = pass_verbose_0_0(t);
  l_19 = t;
  t = (ATerm) ATinsert(CheckATermList(l_19), term_k_32);
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm m_19 = NULL;
  t = pass_verbose_0_0(t);
  m_19 = t;
  t = (ATerm) ATinsert(CheckATermList(m_19), term_k_32);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = save_as_1_0(e_11, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm n_19 = NULL,q_19 = NULL;
  q_19 = t;
  {
    ATerm n_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_19 = ATgetArgument(t, 0);
            {
              ATerm g_12 = NULL,g_5 = NULL;
              t = SSLgetAnnotations(q_19);
              g_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
              g_5 = t;
              t = SSLsetAnnotations(g_5, g_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(p_37);
        t = xtc_transform_file_2_0(i_11, k_11, t);
      }
    else
      {
        t = n_37;
        t = xtc_transform_term_2_0(l_11, m_11, t);
      }
    n_19 = t;
    {
      ATerm r_37 = t;
      int s_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_20 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              e_20 = ATgetArgument(t, 0);
              {
                ATerm b_13 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(n_19);
                b_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_20);
                h_5 = t;
                t = SSLsetAnnotations(h_5, b_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = n_19;
            }
          LocalPopChoice(s_37);
          t = xtc_transform_file_2_0(o_11, p_11, t);
        }
      else
        {
          t = r_37;
          t = xtc_transform_term_2_0(q_11, s_11, t);
        }
      t = if_keep2_1_0(a_12, t);
    }
  }
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm x_19 = NULL;
  t = pass_verbose_0_0(t);
  x_19 = t;
  t = (ATerm) ATinsert(CheckATermList(x_19), term_k_32);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm y_19 = NULL;
  t = pass_verbose_0_0(t);
  y_19 = t;
  t = (ATerm) ATinsert(CheckATermList(y_19), term_k_32);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_k_32);
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_k_32);
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = save_as_1_0(e_12, t);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  m_20 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_20 = ATgetArgument(t, 0);
            {
              ATerm f_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(m_20);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_20);
              i_5 = t;
              t = SSLsetAnnotations(i_5, f_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_20;
          }
        LocalPopChoice(x_37);
        t = xtc_transform_file_2_0(y_12, c_13, t);
      }
    else
      {
        t = w_37;
        t = xtc_transform_term_2_0(d_13, e_13, t);
      }
    t = if_keep5_1_0(g_13, t);
    l_20 = t;
    {
      ATerm y_37 = t;
      int z_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              i_21 = ATgetArgument(t, 0);
              {
                ATerm j_13 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(l_20);
                j_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_21);
                j_5 = t;
                t = SSLsetAnnotations(j_5, j_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_20;
            }
          LocalPopChoice(z_37);
          t = xtc_transform_file_2_0(i_13, k_13, t);
        }
      else
        {
          t = y_37;
          t = xtc_transform_term_2_0(l_13, m_13, t);
        }
      t = if_keep5_1_0(o_13, t);
    }
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_k_32);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm a_21 = NULL;
  t = pass_verbose_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), term_k_32);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = save_as_1_0(h_13, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm m_21 = NULL;
  t = pass_verbose_0_0(t);
  m_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), term_k_32);
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_k_32);
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = save_as_1_0(p_13, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  s_21 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_21 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,s_5 = NULL;
              t = SSLgetAnnotations(s_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_21);
              s_5 = t;
              t = SSLsetAnnotations(s_5, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(i_38);
        t = xtc_transform_file_2_0(t_13, u_13, t);
      }
    else
      {
        t = h_38;
        t = xtc_transform_term_2_0(w_13, x_13, t);
      }
    t = if_keep3_1_0(y_13, t);
    r_21 = t;
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              i_22 = ATgetArgument(t, 0);
              {
                ATerm r_13 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(r_21);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_22);
                t_5 = t;
                t = SSLsetAnnotations(t_5, r_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = r_21;
            }
          LocalPopChoice(l_38);
          t = xtc_transform_file_2_0(b_14, c_14, t);
        }
      else
        {
          t = k_38;
          t = xtc_transform_term_2_0(f_14, j_14, t);
        }
      t = if_keep3_1_0(k_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(r_14, t);
      q_21 = t;
      {
        ATerm m_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                u_22 = ATgetArgument(t, 0);
                {
                  ATerm v_13 = NULL,u_5 = NULL;
                  t = SSLgetAnnotations(q_21);
                  v_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, v_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_21;
              }
            LocalPopChoice(o_38);
            t = xtc_transform_file_2_0(u_14, v_14, t);
          }
        else
          {
            t = m_38;
            t = xtc_transform_term_2_0(w_14, y_14, t);
          }
        t = if_keep3_1_0(b_15, t);
      }
    }
  }
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm b_22 = NULL;
  t = pass_verbose_0_0(t);
  b_22 = t;
  t = (ATerm) ATinsert(CheckATermList(b_22), term_k_32);
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_k_32);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = save_as_1_0(a_14, t);
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm l_22 = NULL;
  t = pass_verbose_0_0(t);
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), term_k_32);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_k_32);
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = save_as_1_0(o_14, t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_c_39;
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = save_as_1_0(s_14, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_k_32);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm y_14 (ATerm t)
{
  ATerm x_22 = NULL;
  t = pass_verbose_0_0(t);
  x_22 = t;
  t = (ATerm) ATinsert(CheckATermList(x_22), term_k_32);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = save_as_1_0(c_15, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  {
    ATerm n_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_23 = ATgetArgument(t, 0);
            {
              ATerm z_13 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(z_22);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
              v_5 = t;
              t = SSLsetAnnotations(v_5, z_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_22;
          }
        LocalPopChoice(p_39);
        t = xtc_transform_file_2_0(i_15, j_15, t);
      }
    else
      {
        t = n_39;
        t = xtc_transform_term_2_0(l_15, m_15, t);
      }
    t = if_keep1_1_0(n_15, t);
    y_22 = t;
    {
      ATerm r_39 = t;
      int s_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_23 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              o_23 = ATgetArgument(t, 0);
              {
                ATerm e_14 = NULL,w_5 = NULL;
                t = SSLgetAnnotations(y_22);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
                w_5 = t;
                t = SSLsetAnnotations(w_5, e_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = y_22;
            }
          LocalPopChoice(s_39);
          t = xtc_transform_file_2_0(x_15, z_15, t);
        }
      else
        {
          t = r_39;
          t = xtc_transform_term_2_0(a_16, c_16, t);
        }
      t = if_keep1_1_0(d_16, t);
    }
  }
  return(t);
}
ATerm i_15 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm h_23 = NULL;
  t = pass_verbose_0_0(t);
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(h_23), term_k_32);
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm k_23 = NULL;
  t = pass_verbose_0_0(t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), term_k_32);
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = save_as_1_0(s_15, t);
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_k_32);
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm t_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), term_k_32);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = save_as_1_0(e_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  t = profile_p__2_0(e_7, f_7, t);
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm g_25 = NULL;
  t = pass_verbose_0_0(t);
  g_25 = t;
  t = (ATerm) ATinsert(CheckATermList(g_25), term_z_39);
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_z_39);
  return(t);
}
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  {
    ATerm i_16 (ATerm t)
    {
      t = get_outfile_1_0(p_73, t);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      return(t);
    }
    t = copy_to_1_0(i_16, t);
    {
      ATerm a_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_25 = NULL,f_25 = NULL;
          f_25 = t;
          if(match_cons(t, sym_FILE_1))
            {
              e_25 = ATgetArgument(t, 0);
              {
                ATerm t_14 = NULL,a_8 = NULL;
                t = SSLgetAnnotations(f_25);
                t_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_25);
                a_8 = t;
                t = SSLsetAnnotations(a_8, t_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = f_25;
            }
          LocalPopChoice(c_40);
          t = xtc_transform_file_2_0(j_16, k_16, t);
        }
      else
        {
          t = a_40;
          t = xtc_transform_term_2_0(l_16, o_16, t);
        }
      {
        ATerm r_16 (ATerm t)
        {
          ATerm i_25 = NULL;
          t = term_d_40;
          i_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), term_d_40);
          t = a_13(not_null(u_24), i_25, t);
          if(((v_24 != NULL) && (v_24 != t)))
            _fail(t);
          else
            v_24 = t;
          return(t);
        }
        t = copy_to_1_0(r_16, t);
        t = term_m_30;
        if(((x_24 != NULL) && (x_24 != t)))
          _fail(t);
        else
          x_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_24)), term_f_40), not_null(u_24)), term_e_40));
        if(((y_24 != NULL) && (y_24 != t)))
          _fail(t);
        else
          y_24 = t;
        t = SSL_printnl(x_24, y_24);
        t = w_24;
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_25, term_g_30);
        t = geq_0_0(t);
        t = l_25;
        t = t_96(t);
        ;
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = l_25;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  t = term_e_30;
  {
    ATerm i_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = i_40;
        t = term_s_32;
      }
    q_25 = t;
    t = term_s_32;
    s_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_25, term_s_32);
    t = h_12(q_25, s_25, t);
    r_25 = t;
    t = SSL_int_to_string(r_25);
    p_25 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_25), term_e_30);
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
ATerm z_11 (ATerm r_44, ATerm s_44, ATerm t)
{
  t = SSL_execvp(r_44, s_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_26 = NULL,b_27 = NULL,e_27 = NULL,g_27 = NULL;
  w_26 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_27 = ATgetArgument(t, 0);
      {
        ATerm q_15 = NULL,r_15 = NULL;
        t = SSL_int_to_string(b_27);
        q_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_40), q_15), term_m_40);
        r_15 = t;
        t = SSL_concat_strings(r_15);
      }
    }
  else
    {
      ATerm d_17 = NULL,e_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_27 = ATgetArgument(t, 0);
          e_27 = ATgetArgument(t, 1);
          g_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_27);
      d_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_27), term_q_40), d_17), term_p_40), b_27);
      e_17 = t;
      t = SSL_concat_strings(e_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm m_27 = NULL;
  ATerm t_16 (ATerm t)
  {
    t = v_81(t);
    if(((m_27 != NULL) && (m_27 != t)))
      _fail(t);
    else
      m_27 = t;
    return(t);
  }
  t = fetch_1_0(t_16, t);
  t = not_null(m_27);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_16 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_40 = ATgetArgument(t, 0);
              if((p_27 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_40 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_46), term_c_46), term_y_45), term_m_45), term_j_45), term_f_45), term_b_45), term_x_44), term_t_44), term_n_44), term_j_44), term_f_44), term_b_44), term_r_43), term_l_43), term_h_43), term_b_43), term_v_42), term_r_42), term_k_42), term_a_42), term_v_41), term_r_41), term_m_41), term_i_41), term_e_41), term_b_41), term_y_40);
        t = fetch_elem_1_0(u_16, t);
        ;
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_27);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_27 = NULL,o_28 = NULL;
  w_27 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_46 = ATgetArgument(t, 0);
            o_28 = ATgetArgument(t, 1);
            {
              ATerm n_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_46);
        {
          ATerm o_46 = t;
          int t_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_18 = NULL,o_18 = NULL,p_18 = NULL;
              t = o_28;
              {
                ATerm a_47 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_47;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                c_18 = t;
                t = term_m_30;
                o_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_18), term_b_47);
                p_18 = t;
                t = SSL_printnl(o_18, p_18);
                t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(ATinsert(ATempty, c_18), term_b_47));
              }
              ;
              LocalPopChoice(t_46);
            }
          else
            {
              t = o_46;
              t = w_27;
            }
        }
      }
    else
      {
        t = k_46;
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
  ATerm v_28 = NULL,w_28 = NULL;
  w_28 = t;
  t = fork_0_0(t);
  v_28 = t;
  {
    ATerm d_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_28;
        t = d_97(t);
        ;
        LocalPopChoice(f_47);
      }
    else
      {
        t = d_47;
        t = SSL_waitpid(v_28);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_47 = ATgetArgument(t, 0);
            if(((ATgetType(g_47) != AT_INT) || (ATgetInt((ATermInt) g_47) != 0)))
              _fail(t);
            {
              ATerm h_47 = ATgetArgument(t, 1);
            }
            {
              ATerm i_47 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_28;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  b_29 = t;
  t = y_103(t);
  t = xtc_find_0_0(t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
  {
    ATerm x_16 (ATerm t)
    {
      ATerm c_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_29, b_29);
      t = z_11(a_29, b_29, t);
      t = term_x_30;
      c_29 = t;
      t = SSL_exit(c_29);
      return(t);
    }
    t = fork_and_wait_1_0(x_16, t);
    t = b_29;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_18 = NULL,x_18 = NULL;
      t = u_29;
      t = xtc_new_file_0_0(t);
      v_18 = t;
      t = s_0(t);
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_18, (ATerm) ATinsert(ATinsert(ATempty, v_18), term_t_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(v_18);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_18);
    }
  else
    {
      ATerm i_19 = NULL,o_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_29;
      t = xtc_new_file_0_0(t);
      i_19 = t;
      t = s_0(t);
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_19), term_t_30), v_29), term_j_47));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(i_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_19);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_30;
      t = o_87(t);
    }
  else
    {
      ATerm h_30 = NULL,i_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_30 = ATgetFirst((ATermList) t);
          d_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_30;
      t = q_87(t);
      h_30 = t;
      t = d_30;
      t = foldr_3_0(o_87, p_87, q_87, t);
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
      t = p_87(t);
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_30), term_k_47);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  l_30 = t;
  t = term_l_47;
  j_30 = t;
  t = term_k_47;
  t = get_config_0_0(t);
  t = foldr_3_0(z_16, conc_0_0, b_17, t);
  k_30 = t;
  t = l_30;
  t = comp_0_2(j_30, k_30, t);
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm f_21 = NULL;
  t = pass_verbose_0_0(t);
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), term_k_32);
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm g_21 = NULL;
  t = pass_verbose_0_0(t);
  g_21 = t;
  t = (ATerm) ATinsert(CheckATermList(g_21), term_k_32);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = get_outfile_1_0(o_17, t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  {
    ATerm p_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
        t = term_t_47;
        t = get_config_0_0(t);
        t = r_31;
        {
          ATerm u_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_31;
              {
                ATerm w_47 = t;
                int x_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        b_21 = ATgetArgument(t, 0);
                        {
                          ATerm z_21 = NULL,n_8 = NULL;
                          t = SSLgetAnnotations(r_31);
                          z_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, b_21);
                          n_8 = t;
                          t = SSLsetAnnotations(n_8, z_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = r_31;
                      }
                    LocalPopChoice(x_47);
                    t = xtc_transform_file_2_0(c_17, h_17, t);
                  }
                else
                  {
                    t = w_47;
                    t = xtc_transform_term_2_0(k_17, l_17, t);
                  }
              }
              ;
              LocalPopChoice(v_47);
            }
          else
            {
              t = u_47;
              {
                ATerm j_21 = NULL,k_21 = NULL,n_21 = NULL;
                t = term_m_30;
                k_21 = t;
                t = (ATerm) ATinsert(ATempty, term_y_47);
                n_21 = t;
                t = SSL_printnl(k_21, n_21);
                t = term_s_32;
                j_21 = t;
                t = SSL_exit(j_21);
                t = (ATerm) ATinsert(ATempty, term_y_47);
              }
            }
          t = copy_to_1_0(m_17, t);
          r_20 = t;
          t = term_m_30;
          s_20 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_47));
          t_20 = t;
          t = SSL_printnl(s_20, t_20);
          t = r_20;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(s_47);
      }
    else
      {
        t = p_47;
        t = r_31;
      }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_32 = NULL;
        t = term_w_33;
        t = get_config_0_0(t);
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_32, term_f_33);
        t = geq_0_0(t);
        t = x_31;
        t = u_96(t);
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = x_31;
      }
  }
  return(t);
}
ATerm w_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm t)
{
  ATerm d_32 = NULL;
  t = term_d_48;
  t = o_73(t);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(w_18), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_48, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_32), (ATerm) ATempty))))));
  return(t);
}
ATerm x_11 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_32);
  return(t);
}
ATerm y_11 (ATerm g_94 (ATerm), ATerm o_439, ATerm q_42, ATerm t)
{
  ATerm f_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_439, term_h_48);
  t = open_stream_0_0(t);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_32, q_42);
  t = g_94(t);
  t = fclose_0_0(t);
  t = q_42;
  return(t);
}
ATerm b_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm t)
{
  ATerm g_32 = NULL,i_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,p_32 = NULL;
  m_32 = t;
  t = n_92(t);
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_32, m_37, k_37);
  t = x_12(g_32, m_37, k_37, t);
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL;
        t = term_k_48;
        r_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_32, term_k_48);
        t = w_12(g_32, r_32, t);
        ;
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_32 = ATgetFirst((ATermList) t);
        l_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_48;
    n_32 = t;
    t = (ATerm) ATinsert(CheckATermList(l_32), (ATerm) ATinsert(CheckATermList(i_32), m_37));
    p_32 = t;
    t = SSL_table_put(g_32, n_32, p_32);
    t = m_32;
  }
  return(t);
}
ATerm l_33 (ATerm w_32, ATerm t)
{
  t = w_32;
  {
    ATerm l_48 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_48 = ATgetArgument(t, 0);
            ATerm q_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_48;
      }
    t = term_r_48;
    t = debug_1_0(q_17, t);
    t = (ATerm) ATmakeAppl(sym__2, w_32, term_h_48);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm m_33 (ATerm y_32, ATerm z_32, ATerm d_33, ATerm t)
{
  t = SSL_open_file(y_32, z_32);
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_33 = NULL,j_33 = NULL,k_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      {
        ATerm w_48 = t;
        int y_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_33(h_33, t);
            ;
            LocalPopChoice(y_48);
          }
        else
          {
            t = w_48;
            t = m_33(j_33, k_33, h_33, t);
          }
      }
    }
  else
    {
      t = l_33(h_33, t);
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
  ATerm q_33 = NULL,r_33 = NULL,u_33 = NULL;
  t = term_d_48;
  t = new_0_0(t);
  q_33 = t;
  t = term_z_48;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_33, term_z_48);
  t = a_13(q_33, r_33, t);
  u_33 = t;
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_49);
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, (ATerm) ATinsert(ATempty, term_d_49));
        t = s_12(u_33, z_33, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
        t = u_33;
      }
  }
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_34 = NULL,e_34 = NULL;
  t = new_file_0_0(t);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, term_h_48);
  t = open_file_0_0(t);
  t = term_d_48;
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, term_d_48);
  t = b_12(t_17, c_34, e_34, t);
  t = c_34;
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      if(match_cons(g_49, sym_Stream_1))
        {
          h_34 = ATgetArgument(g_49, 0);
        }
      else
        _fail(t);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_11(h_34, i_34, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  t = xtc_new_file_0_0(t);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_34, f_34);
  t = y_11(u_17, g_34, f_34, t);
  t = SSL_close_file(g_34);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_49;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_49);
      s_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, (ATerm) ATinsert(ATempty, term_d_49));
      t = s_12(p_34, s_34, t);
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
ATerm z_17 (ATerm t)
{
  t = debug_1_0(b_18, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = term_i_49;
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = save_as_1_0(k_18, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_j_49;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL;
  v_34 = t;
  {
    ATerm n_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_18 (ATerm t)
        {
          ATerm y_34 = NULL;
          ATerm h_18 (ATerm t)
          {
            t = not_null(u_34);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              if(((y_34 != NULL) && (y_34 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_11(h_18, y_34, t);
          return(t);
        }
        t = term_r_49;
        t = get_config_0_0(t);
        if(((u_34 != NULL) && (u_34 != t)))
          _fail(t);
        else
          u_34 = t;
        t = if_verbose2_1_0(z_17, t);
        t = v_34;
        t = xtc_io_transform_1_0(e_18, t);
        ;
        LocalPopChoice(o_49);
      }
    else
      {
        t = n_49;
        t = v_34;
      }
    t = if_keep3_1_0(j_18, t);
  }
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  {
    ATerm s_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(p_35);
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = s_49;
        t = p_35;
      }
  }
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm d_35 = NULL,f_35 = NULL;
  ATerm m_18 (ATerm t)
  {
    ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
    i_35 = t;
    t = term_e_49;
    j_35 = t;
    t = term_k_48;
    k_35 = t;
    t = term_w_49;
    t = w_12(j_35, k_35, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_35 != NULL) && (d_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_35 = ATgetFirst((ATermList) t);
        {
          ATerm x_49 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_35;
    t = map_1_0(t_18, t);
    t = i_35;
    t = end_scope_1_0(u_18, t);
    return(t);
  }
  t = repeat_1_0(m_18, t);
  if(((f_35 != NULL) && (f_35 != t)))
    _fail(t);
  else
    f_35 = t;
  t = SSL_exit(f_35);
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm z_49 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_50);
    }
  else
    {
      t = z_49;
      t = term_i_31;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(y_18, t);
  t = term_x_29;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  t = n_73(t);
  t_35 = t;
  t = term_d_50;
  t = get_config_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, t_35);
  t = a_13(u_35, t_35, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_23 = NULL;
        t = u_36;
        t = t_0(t);
        b_23 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_23;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_23;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_36, b_23);
        t = j_12(v_36, b_23, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_36);
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = g_50;
        {
          ATerm l_50 = t;
          int m_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_24 = NULL;
              t = u_36;
              t = t_0(t);
              q_24 = t;
              {
                ATerm n_50 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_24 = NULL;
                    r_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = r_24;
                          }
                        else
                          {
                            t = r_24;
                            if((v_36 != t))
                              {
                                _fail(t);
                              }
                            t = r_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_50;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_36, q_24);
                t = j_12(v_36, q_24, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_36);
              }
              ;
              LocalPopChoice(m_50);
            }
          else
            {
              t = l_50;
              t = u_36;
              t = t_0(t);
              if((v_36 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_36);
            }
        }
      }
  }
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = get_outfile_1_0(c_19, t);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_p_50;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  {
    ATerm s_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL;
        t = term_u_50;
        t = get_config_0_0(t);
        t = a_37;
        t = copy_to_1_0(a_19, t);
        c_37 = t;
        t = (ATerm) ATinsert(ATempty, term_w_50);
        t = echo_0_0(t);
        t = c_37;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(t_50);
      }
    else
      {
        t = s_50;
        t = a_37;
      }
  }
  return(t);
}
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = NULL,b_38 = NULL;
      b_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          a_38 = ATgetArgument(t, 0);
          {
            ATerm u_25 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(b_38);
            u_25 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, a_38);
            p_8 = t;
            t = SSLsetAnnotations(p_8, u_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_38;
        }
      LocalPopChoice(a_51);
      {
        ATerm e_19 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm f_19 (ATerm t)
        {
          ATerm d_38 = NULL;
          t = pass_verbose_0_0(t);
          d_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), d_38), (ATerm) ATinsert(ATempty, term_k_32));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(e_19, f_19, t);
      }
    }
  else
    {
      t = z_50;
      {
        ATerm g_19 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm h_19 (ATerm t)
        {
          ATerm j_38 = NULL;
          t = pass_verbose_0_0(t);
          j_38 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), j_38), (ATerm) ATinsert(ATempty, term_k_32));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(g_19, h_19, t);
      }
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm n_38 = NULL,q_38 = NULL,r_38 = NULL,v_38 = NULL;
  t = term_w_33;
  {
    ATerm b_51 = t;
    int d_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_51);
      }
    else
      {
        t = b_51;
        t = term_s_32;
      }
    q_38 = t;
    t = term_s_32;
    v_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_38, term_s_32);
    t = h_12(q_38, v_38, t);
    r_38 = t;
    t = SSL_int_to_string(r_38);
    n_38 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, n_38), term_w_33);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,g_39 = NULL,m_39 = NULL,o_39 = NULL;
  m_39 = t;
  t = term_g_51;
  w_38 = t;
  t = m_39;
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = term_d_50;
        t = get_config_0_0(t);
      }
    o_39 = t;
    t = m_39;
    t = pass_keep_0_0(t);
    y_38 = t;
    t = term_k_51;
    t = get_config_0_0(t);
    g_39 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_38), g_39), (ATerm) ATinsert(ATinsert(ATempty, o_39), term_n_51));
    t = concat_0_0(t);
    x_38 = t;
    t = m_39;
    t = comp_0_2(w_38, x_38, t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  {
    ATerm o_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_39 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_39, term_f_33);
        t = geq_0_0(t);
        t = q_39;
        t = s_95(t);
        ;
        LocalPopChoice(p_51);
      }
    else
      {
        t = o_51;
        t = q_39;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  k_40 = t;
  t = SSL_explode_string(k_40);
  {
    ATerm r_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 (ATerm t)
        {
          ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
          c_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_42 = ATgetFirst((ATermList) t);
              e_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_51 = t;
            int w_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_26 = NULL,y_26 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(c_42);
                o_26 = t;
                t = e_42;
                t = h_42(t);
                y_26 = t;
                t = (ATerm) ATinsert(CheckATermList(y_26), d_42);
                r_8 = t;
                t = SSLsetAnnotations(r_8, o_26);
                ;
                LocalPopChoice(w_51);
              }
            else
              {
                t = v_51;
                {
                  ATerm x_51 = t;
                  int y_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_27 = NULL,s_8 = NULL;
                      t = SSLgetAnnotations(c_42);
                      l_27 = t;
                      t = d_42;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(e_42), d_42);
                      s_8 = t;
                      t = SSLsetAnnotations(s_8, l_27);
                      ;
                      LocalPopChoice(y_51);
                    }
                  else
                    {
                      t = x_51;
                      {
                        ATerm z_27 = NULL,d_28 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(c_42);
                        z_27 = t;
                        t = d_42;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = e_42;
                        t = j_90(t);
                        d_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_28), d_42);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, z_27);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = h_42(t);
        ;
        LocalPopChoice(u_51);
      }
    else
      {
        t = r_51;
      }
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = SSL_implode_string(j_40);
  }
  return(t);
}
ATerm k_19 (ATerm t)
{
  t = debug_1_0(p_19, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = term_z_51;
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = debug_1_0(s_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = term_a_52;
  return(t);
}
ATerm c_12 (ATerm s_18, ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,c_43 = NULL,e_43 = NULL;
  t = s_18;
  t = basename_1_0(_id, t);
  y_42 = t;
  t = if_verbose3_1_0(k_19, t);
  t = term_b_52;
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_52, y_42);
  t = z_12(e_43, y_42, t);
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_30;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
        t = y_42;
      }
    z_42 = t;
    t = if_verbose3_1_0(r_19, t);
    t = term_d_50;
    c_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_50, z_42);
    t = z_12(c_43, z_42, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, y_42);
  }
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = debug_1_0(u_19, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = term_e_52;
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = if_verbose1_1_0(a_20, t);
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,c_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12(e_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  c_47 = t;
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_47 = ATgetArgument(t, 0);
            {
              ATerm n_28 = NULL,y_8 = NULL;
              t = SSLgetAnnotations(c_47);
              n_28 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
              y_8 = t;
              t = SSLsetAnnotations(y_8, n_28);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_47;
          }
        LocalPopChoice(g_52);
        t = xtc_transform_file_2_0(b_20, c_20, t);
      }
    else
      {
        t = f_52;
        t = xtc_transform_term_2_0(d_20, f_20, t);
      }
    z_46 = t;
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_48 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              a_48 = ATgetArgument(t, 0);
              {
                ATerm d_29 = NULL,a_9 = NULL;
                t = SSLgetAnnotations(z_46);
                d_29 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, a_48);
                a_9 = t;
                t = SSLsetAnnotations(a_9, d_29);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = z_46;
            }
          LocalPopChoice(i_52);
          t = xtc_transform_file_2_0(g_20, h_20, t);
        }
      else
        {
          t = h_52;
          t = xtc_transform_term_2_0(j_20, n_20, t);
        }
      y_46 = t;
      {
        ATerm j_52 = t;
        int k_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_48 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                v_48 = ATgetArgument(t, 0);
                {
                  ATerm h_29 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(y_46);
                  h_29 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, v_48);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, h_29);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_46;
              }
            LocalPopChoice(k_52);
            t = xtc_transform_file_2_0(o_20, p_20, t);
          }
        else
          {
            t = j_52;
            t = xtc_transform_term_2_0(q_20, u_20, t);
          }
        x_46 = t;
        {
          ATerm m_52 = t;
          int n_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_49 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  f_49 = ATgetArgument(t, 0);
                  {
                    ATerm s_29 = NULL,c_9 = NULL;
                    t = SSLgetAnnotations(x_46);
                    s_29 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, f_49);
                    c_9 = t;
                    t = SSLsetAnnotations(c_9, s_29);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = x_46;
                }
              LocalPopChoice(n_52);
              t = xtc_transform_file_2_0(v_20, x_20, t);
            }
          else
            {
              t = m_52;
              t = xtc_transform_term_2_0(y_20, c_21, t);
            }
          w_46 = t;
          {
            ATerm o_52 = t;
            int p_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_49 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_49 = ATgetArgument(t, 0);
                    {
                      ATerm f_30 = NULL,d_9 = NULL;
                      t = SSLgetAnnotations(w_46);
                      f_30 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_49);
                      d_9 = t;
                      t = SSLsetAnnotations(d_9, f_30);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = w_46;
                  }
                LocalPopChoice(p_52);
                t = xtc_transform_file_2_0(d_21, e_21, t);
              }
            else
              {
                t = o_52;
                t = xtc_transform_term_2_0(h_21, l_21, t);
              }
            v_46 = t;
            {
              ATerm q_52 = t;
              int u_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_50 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      h_50 = ATgetArgument(t, 0);
                      {
                        ATerm q_30 = NULL,e_9 = NULL;
                        t = SSLgetAnnotations(v_46);
                        q_30 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, h_50);
                        e_9 = t;
                        t = SSLsetAnnotations(e_9, q_30);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = v_46;
                    }
                  LocalPopChoice(u_52);
                  t = xtc_transform_file_2_0(p_21, t_21, t);
                }
              else
                {
                  t = q_52;
                  t = xtc_transform_term_2_0(u_21, v_21, t);
                }
              u_46 = t;
              {
                ATerm v_52 = t;
                int w_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_50 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        o_50 = ATgetArgument(t, 0);
                        {
                          ATerm u_30 = NULL,f_9 = NULL;
                          t = SSLgetAnnotations(u_46);
                          u_30 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, o_50);
                          f_9 = t;
                          t = SSLsetAnnotations(f_9, u_30);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = u_46;
                      }
                    LocalPopChoice(w_52);
                    t = xtc_transform_file_2_0(w_21, y_21, t);
                  }
                else
                  {
                    t = v_52;
                    t = xtc_transform_term_2_0(a_22, d_22, t);
                  }
                s_46 = t;
                {
                  ATerm z_52 = t;
                  int a_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_50 = NULL;
                      if(match_cons(t, sym_FILE_1))
                        {
                          v_50 = ATgetArgument(t, 0);
                          {
                            ATerm h_31 = NULL,g_9 = NULL;
                            t = SSLgetAnnotations(s_46);
                            h_31 = t;
                            t = (ATerm) ATmakeAppl(sym_FILE_1, v_50);
                            g_9 = t;
                            t = SSLsetAnnotations(g_9, h_31);
                          }
                        }
                      else
                        {
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                          t = s_46;
                        }
                      LocalPopChoice(a_53);
                      t = xtc_transform_file_2_0(e_22, f_22, t);
                    }
                  else
                    {
                      t = z_52;
                      t = xtc_transform_term_2_0(g_22, h_22, t);
                    }
                  t = output_frontend_0_0(t);
                  r_46 = t;
                  {
                    ATerm b_53 = t;
                    int e_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_51 = NULL;
                        if(match_cons(t, sym_FILE_1))
                          {
                            c_51 = ATgetArgument(t, 0);
                            {
                              ATerm u_31 = NULL,h_9 = NULL;
                              t = SSLgetAnnotations(r_46);
                              u_31 = t;
                              t = (ATerm) ATmakeAppl(sym_FILE_1, c_51);
                              h_9 = t;
                              t = SSLsetAnnotations(h_9, u_31);
                            }
                          }
                        else
                          {
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                            t = r_46;
                          }
                        LocalPopChoice(e_53);
                        t = xtc_transform_file_2_0(j_22, k_22, t);
                      }
                    else
                      {
                        t = b_53;
                        t = xtc_transform_term_2_0(n_22, o_22, t);
                      }
                    t = if_keep2_1_0(p_22, t);
                    t = warnings_0_0(t);
                    q_46 = t;
                    {
                      ATerm h_53 = t;
                      int i_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_51 = NULL;
                          if(match_cons(t, sym_FILE_1))
                            {
                              j_51 = ATgetArgument(t, 0);
                              {
                                ATerm h_32 = NULL,i_9 = NULL;
                                t = SSLgetAnnotations(q_46);
                                h_32 = t;
                                t = (ATerm) ATmakeAppl(sym_FILE_1, j_51);
                                i_9 = t;
                                t = SSLsetAnnotations(i_9, h_32);
                              }
                            }
                          else
                            {
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                              t = q_46;
                            }
                          LocalPopChoice(i_53);
                          t = xtc_transform_file_2_0(r_22, s_22, t);
                        }
                      else
                        {
                          t = h_53;
                          t = xtc_transform_term_2_0(t_22, v_22, t);
                        }
                      p_46 = t;
                      {
                        ATerm l_53 = t;
                        int m_53 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_51 = NULL;
                            if(match_cons(t, sym_FILE_1))
                              {
                                q_51 = ATgetArgument(t, 0);
                                {
                                  ATerm q_32 = NULL,j_9 = NULL;
                                  t = SSLgetAnnotations(p_46);
                                  q_32 = t;
                                  t = (ATerm) ATmakeAppl(sym_FILE_1, q_51);
                                  j_9 = t;
                                  t = SSLsetAnnotations(j_9, q_32);
                                }
                              }
                            else
                              {
                                if(!(match_cons(t, sym_stdin_0)))
                                  _fail(t);
                                t = p_46;
                              }
                            LocalPopChoice(m_53);
                            t = xtc_transform_file_2_0(a_23, c_23, t);
                          }
                        else
                          {
                            t = l_53;
                            t = xtc_transform_term_2_0(d_23, e_23, t);
                          }
                        t = if_keep2_1_0(g_23, t);
                      }
                    }
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
ATerm a_20 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  t = term_m_30;
  i_46 = t;
  t = (ATerm) ATinsert(CheckATermList(h_46), term_n_53);
  j_46 = t;
  t = SSL_printnl(i_46, j_46);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(CheckATermList(h_46), term_n_53));
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm q_47 = NULL;
  t = pass_verbose_0_0(t);
  q_47 = t;
  t = (ATerm) ATinsert(CheckATermList(q_47), term_k_32);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm r_47 = NULL;
  t = pass_verbose_0_0(t);
  r_47 = t;
  t = (ATerm) ATinsert(CheckATermList(r_47), term_k_32);
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm e_48 = NULL;
  t = pass_verbose_0_0(t);
  e_48 = t;
  t = (ATerm) ATinsert(CheckATermList(e_48), term_k_32);
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm f_48 = NULL;
  t = pass_verbose_0_0(t);
  f_48 = t;
  t = (ATerm) ATinsert(CheckATermList(f_48), term_k_32);
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm x_48 = NULL;
  t = pass_verbose_0_0(t);
  x_48 = t;
  t = (ATerm) ATinsert(CheckATermList(x_48), term_k_32);
  return(t);
}
ATerm q_20 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm a_49 = NULL;
  t = pass_verbose_0_0(t);
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), term_k_32);
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = term_r_53;
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm p_49 = NULL;
  t = pass_verbose_0_0(t);
  p_49 = t;
  t = (ATerm) ATinsert(CheckATermList(p_49), term_k_32);
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = term_r_53;
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm q_49 = NULL;
  t = pass_verbose_0_0(t);
  q_49 = t;
  t = (ATerm) ATinsert(CheckATermList(q_49), term_k_32);
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm a_50 = NULL;
  t = pass_verbose_0_0(t);
  a_50 = t;
  t = (ATerm) ATinsert(CheckATermList(a_50), term_k_32);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm b_50 = NULL;
  t = pass_verbose_0_0(t);
  b_50 = t;
  t = (ATerm) ATinsert(CheckATermList(b_50), term_k_32);
  return(t);
}
ATerm p_21 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm j_50 = NULL;
  t = pass_verbose_0_0(t);
  j_50 = t;
  t = (ATerm) ATinsert(CheckATermList(j_50), term_k_32);
  return(t);
}
ATerm u_21 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm k_50 = NULL;
  t = pass_verbose_0_0(t);
  k_50 = t;
  t = (ATerm) ATinsert(CheckATermList(k_50), term_k_32);
  return(t);
}
ATerm w_21 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm q_50 = NULL;
  t = pass_verbose_0_0(t);
  q_50 = t;
  t = (ATerm) ATinsert(CheckATermList(q_50), term_k_32);
  return(t);
}
ATerm a_22 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm r_50 = NULL;
  t = pass_verbose_0_0(t);
  r_50 = t;
  t = (ATerm) ATinsert(CheckATermList(r_50), term_k_32);
  return(t);
}
ATerm e_22 (ATerm t)
{
  t = term_x_53;
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm x_50 = NULL;
  t = pass_verbose_0_0(t);
  x_50 = t;
  t = (ATerm) ATinsert(CheckATermList(x_50), term_k_32);
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_x_53;
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm y_50 = NULL;
  t = pass_verbose_0_0(t);
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), term_k_32);
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm e_51 = NULL;
  t = pass_verbose_0_0(t);
  e_51 = t;
  t = (ATerm) ATinsert(CheckATermList(e_51), term_k_32);
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_y_53;
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm f_51 = NULL;
  t = pass_verbose_0_0(t);
  f_51 = t;
  t = (ATerm) ATinsert(CheckATermList(f_51), term_k_32);
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = save_as_1_0(q_22, t);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_d_54;
  return(t);
}
ATerm r_22 (ATerm t)
{
  t = term_e_54;
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm l_51 = NULL;
  t = pass_verbose_0_0(t);
  l_51 = t;
  t = (ATerm) ATinsert(CheckATermList(l_51), term_k_32);
  return(t);
}
ATerm t_22 (ATerm t)
{
  t = term_e_54;
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm m_51 = NULL;
  t = pass_verbose_0_0(t);
  m_51 = t;
  t = (ATerm) ATinsert(CheckATermList(m_51), term_k_32);
  return(t);
}
ATerm a_23 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm s_51 = NULL;
  t = pass_verbose_0_0(t);
  s_51 = t;
  t = (ATerm) ATinsert(CheckATermList(s_51), term_k_32);
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm t_51 = NULL;
  t = pass_verbose_0_0(t);
  t_51 = t;
  t = (ATerm) ATinsert(CheckATermList(t_51), term_k_32);
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = save_as_1_0(i_23, t);
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(t_19, t);
  t = profile_p__2_0(w_19, z_19, t);
  return(t);
}
ATerm j_23 (ATerm t)
{
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_54);
    }
  else
    {
      t = j_54;
    }
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_m_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_54 = t;
  int p_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = NULL;
      l_52 = t;
      t = SSL_is_string(l_52);
      ;
      LocalPopChoice(p_54);
    }
  else
    {
      t = o_54;
      {
        ATerm q_54 = t;
        int t_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_23, t);
            ;
            LocalPopChoice(t_54);
          }
        else
          {
            t = q_54;
            {
              ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
              r_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_52 = ATgetArgument(t, 0);
                  t = s_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_52 = ATgetArgument(t, 0);
                      t = s_52;
                      {
                        ATerm u_54 = t;
                        int v_54 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_54);
                          }
                        else
                          {
                            t = u_54;
                            t = debug_1_0(l_23, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_52 = NULL,y_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_52 = ATgetArgument(t, 0);
                          t_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_52;
                      t = eval_config_0_0(t);
                      x_52 = t;
                      t = t_52;
                      t = eval_config_0_0(t);
                      y_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_52, y_52);
                      t = a_13(x_52, y_52, t);
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
  ATerm c_53 = NULL,d_53 = NULL;
  c_53 = t;
  t = term_x_54;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_54, c_53);
  t = w_12(d_53, c_53, t);
  {
    ATerm y_54 = t;
    int z_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_53 = NULL,g_53 = NULL;
        t = eval_config_0_0(t);
        f_53 = t;
        t = term_x_54;
        g_53 = t;
        t = SSL_table_put(g_53, c_53, f_53);
        t = f_53;
        ;
        LocalPopChoice(z_54);
      }
    else
      {
        t = y_54;
      }
  }
  return(t);
}
ATerm d_12 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  k_53 = t;
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
        t = w_12(s_48, t_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_55 = ATgetFirst((ATermList) t);
            j_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_55);
        t = SSL_table_put(s_48, t_48, j_53);
        t = (ATerm) ATmakeAppl(sym__3, s_48, t_48, j_53);
      }
    else
      {
        t = e_55;
        t = SSL_table_remove(s_48, t_48);
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
      }
    t = k_53;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  a_54 = t;
  t = k_92(t);
  z_53 = t;
  {
    ATerm i_55 = t;
    int j_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_54 = NULL;
        t = term_k_48;
        c_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_53, term_k_48);
        t = w_12(z_53, c_54, t);
        ;
        LocalPopChoice(j_55);
      }
    else
      {
        t = i_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_53 = ATgetFirst((ATermList) t);
        v_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_48;
    b_54 = t;
    t = SSL_table_put(z_53, b_54, v_53);
    t = w_53;
    {
      ATerm m_23 (ATerm t)
      {
        ATerm f_54 = NULL;
        f_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_53, f_54);
        t = d_12(z_53, f_54, t);
        return(t);
      }
      t = map_1_0(m_23, t);
      t = a_54;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm k_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      t = o_74(t);
      ;
      LocalPopChoice(l_55);
    }
  else
    {
      t = k_55;
      t = o_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,l_54 = NULL,n_54 = NULL,r_54 = NULL,s_54 = NULL;
  l_54 = t;
  t = j_92(t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, term_k_48);
  {
    ATerm n_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_55 = ATgetArgument(t, 0);
            ATerm r_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_48;
        w_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_54, term_k_48);
        t = w_12(i_54, w_54, t);
        ;
        LocalPopChoice(p_55);
      }
    else
      {
        t = n_55;
        t = (ATerm) ATempty;
      }
    n_54 = t;
    t = term_k_48;
    r_54 = t;
    t = (ATerm) ATinsert(CheckATermList(n_54), (ATerm) ATempty);
    s_54 = t;
    t = SSL_table_put(i_54, r_54, s_54);
    t = l_54;
  }
  return(t);
}
ATerm n_23 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm q_23 (ATerm t)
{
  ATerm g_55 = NULL;
  g_55 = t;
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_55);
        ;
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = g_55;
      }
  }
  return(t);
}
ATerm r_23 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm a_55 = NULL;
  ATerm p_23 (ATerm t)
  {
    ATerm b_55 = NULL;
    b_55 = t;
    {
      ATerm x_55 = t;
      int y_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_55 = NULL,d_55 = NULL;
          t = term_e_49;
          c_55 = t;
          t = term_k_48;
          d_55 = t;
          t = term_w_49;
          t = w_12(c_55, d_55, t);
          ;
          LocalPopChoice(y_55);
        }
      else
        {
          t = x_55;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((a_55 != NULL) && (a_55 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_55 = ATgetFirst((ATermList) t);
          {
            ATerm a_56 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = a_55;
      t = map_1_0(q_23, t);
      t = b_55;
      t = end_scope_1_0(r_23, t);
    }
    return(t);
  }
  t = begin_scope_1_0(n_23, t);
  t = restore_always_2_0(k_103, p_23, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_55, term_s_32);
        t = geq_0_0(t);
        t = m_55;
        t = q_95(t);
        ;
        LocalPopChoice(c_56);
      }
    else
      {
        t = b_56;
        t = m_55;
      }
  }
  return(t);
}
ATerm f_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_35, z_35);
      ;
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      t = SSL_addr(y_35, z_35);
    }
  return(t);
}
ATerm h_12 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_36, f_36);
      ;
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      t = SSL_subtr(e_36, f_36);
    }
  return(t);
}
ATerm i_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm t)
{
  ATerm s_55 = NULL,v_55 = NULL,w_55 = NULL,z_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  t = h_12(p_45, q_45, t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  t = h_12(r_45, s_45, t);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = h_12(t_45, u_45, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
  t = h_12(v_45, w_45, t);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__4, s_55, v_55, w_55, z_55);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,l_56 = NULL,o_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_56 = ATgetArgument(t, 0);
      if(match_cons(r_56, sym__4))
        {
          d_56 = ATgetArgument(r_56, 0);
          e_56 = ATgetArgument(r_56, 1);
          f_56 = ATgetArgument(r_56, 2);
          g_56 = ATgetArgument(r_56, 3);
        }
      else
        _fail(t);
      {
        ATerm x_56 = ATgetArgument(t, 1);
        if(match_cons(x_56, sym__4))
          {
            h_56 = ATgetArgument(x_56, 0);
            i_56 = ATgetArgument(x_56, 1);
            l_56 = ATgetArgument(x_56, 2);
            o_56 = ATgetArgument(x_56, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_12(d_56, e_56, f_56, g_56, h_56, i_56, l_56, o_56, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,y_56 = NULL,c_57 = NULL,d_57 = NULL,f_57 = NULL,i_57 = NULL,m_57 = NULL;
  w_56 = t;
  t = times_0_0(t);
  p_56 = t;
  t = w_56;
  t = e_99(t);
  q_56 = t;
  t = times_0_0(t);
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_56, p_56);
  t = diff_times_0_0(t);
  u_56 = t;
  if(match_cons(t, sym__4))
    {
      f_57 = ATgetArgument(t, 0);
      {
        ATerm z_56 = ATgetArgument(t, 1);
      }
      i_57 = ATgetArgument(t, 2);
      {
        ATerm a_57 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_57, i_57);
  t = f_12(f_57, i_57, t);
  m_57 = t;
  t = SSL_TicksToSeconds(m_57);
  s_56 = t;
  t = u_56;
  if(match_cons(t, sym__4))
    {
      ATerm b_57 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
      {
        ATerm e_57 = ATgetArgument(t, 2);
      }
      c_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_56, c_57);
  t = f_12(y_56, c_57, t);
  d_57 = t;
  t = SSL_TicksToSeconds(d_57);
  t_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_56), term_h_57), s_56), term_g_57);
  t = d_99(t);
  t = q_56;
  return(t);
}
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,u_57 = NULL;
  p_57 = t;
  t = e_94(t);
  q_57 = t;
  t = term_m_30;
  r_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_57), q_57);
  u_57 = t;
  t = SSL_printnl(r_57, u_57);
  t = p_57;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  v_57 = t;
  t = term_j_57;
  t = get_config_0_0(t);
  w_57 = t;
  t = term_i_31;
  x_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_58), term_c_58), term_t_57), term_s_57), term_o_57), term_n_57), term_l_57), w_57), term_k_57);
  y_57 = t;
  t = SSL_printnl(x_57, y_57);
  t = v_57;
  return(t);
}
ATerm j_12 (ATerm k_39, ATerm l_39, ATerm t)
{
  t = SSL_copy(k_39, l_39);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_57 = NULL;
  ATerm u_23 (ATerm t)
  {
    ATerm a_58 = NULL,b_58 = NULL;
    a_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), a_58);
    t = w_12(not_null(z_57), a_58, t);
    b_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
    return(t);
  }
  if(((z_57 != NULL) && (z_57 != t)))
    _fail(t);
  else
    z_57 = t;
  t = SSL_table_keys(z_57);
  t = map_1_0(u_23, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  {
    ATerm g_58 = t;
    int h_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_58 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_58, term_r_34);
        t = geq_0_0(t);
        t = d_58;
        t = u_95(t);
        ;
        LocalPopChoice(h_58);
      }
    else
      {
        t = g_58;
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
    ATerm j_58 = t;
    int l_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_58 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        k_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_58, term_x_34);
        t = geq_0_0(t);
        t = i_58;
        t = t_95(t);
        ;
        LocalPopChoice(l_58);
      }
    else
      {
        t = j_58;
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
    ATerm m_58 = t;
    int n_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_58;
        if((v_58 != t))
          {
            _fail(t);
          }
        t = u_58;
        ;
        LocalPopChoice(n_58);
      }
    else
      {
        t = m_58;
        t = (ATerm) ATmakeAppl(sym__2, v_58, w_58);
        {
          ATerm o_58 = t;
          int p_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_58, w_58);
              ;
              LocalPopChoice(p_58);
            }
          else
            {
              t = o_58;
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
    ATerm q_58 = t;
    int r_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_59 = NULL;
        t = term_e_30;
        t = get_config_0_0(t);
        c_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_59, term_c_35);
        t = geq_0_0(t);
        t = a_59;
        t = v_95(t);
        ;
        LocalPopChoice(r_58);
      }
    else
      {
        t = q_58;
        t = a_59;
      }
  }
  return(t);
}
ATerm m_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm t)
{
  t = r_85(t);
  {
    ATerm v_23 (ATerm t)
    {
      ATerm f_59 = NULL;
      f_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, f_59);
      t = q_85(t);
      return(t);
    }
    t = fetch_1_0(v_23, t);
    t = a_26;
  }
  return(t);
}
ATerm n_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm t)
{
  ATerm e_60 (ATerm t)
  {
    ATerm x_59 = NULL,z_59 = NULL,b_60 = NULL;
    x_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_59 = ATgetFirst((ATermList) t);
            b_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_58 = t;
          int t_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_59;
              {
                ATerm w_23 (ATerm t)
                {
                  t = w_25;
                  return(t);
                }
                t = m_12(n_85, w_23, z_59, b_60, t);
                t = e_60(t);
              }
              ;
              LocalPopChoice(t_58);
            }
          else
            {
              t = s_58;
              {
                ATerm b_35 = NULL,g_35 = NULL,d_15 = NULL;
                t = SSLgetAnnotations(x_59);
                b_35 = t;
                t = b_60;
                t = e_60(t);
                g_35 = t;
                t = (ATerm) ATinsert(CheckATermList(g_35), z_59);
                d_15 = t;
                t = SSLsetAnnotations(d_15, b_35);
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
ATerm x_23 (ATerm t)
{
  ATerm u_60 = NULL;
  if(match_cons(t, sym__2))
    {
      u_60 = ATgetArgument(t, 0);
      if((u_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm i_60 = NULL,k_60 = NULL,l_60 = NULL;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
  {
    ATerm x_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_58 = ATgetArgument(t, 0);
            ATerm b_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        t = w_12(k_49, l_49, t);
        ;
        LocalPopChoice(y_58);
      }
    else
      {
        t = x_58;
        t = (ATerm) ATempty;
      }
    l_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_60, m_49);
    t = n_12(x_23, l_60, m_49, t);
    k_60 = t;
    t = SSL_table_put(k_49, l_49, k_60);
    t = i_60;
  }
  return(t);
}
ATerm p_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm t)
{
  ATerm y_23 (ATerm t)
  {
    ATerm w_60 = NULL,y_60 = NULL;
    if(match_cons(t, sym__2))
      {
        w_60 = ATgetArgument(t, 0);
        y_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_49, w_60, y_60);
    t = m_100(t);
    return(t);
  }
  t = t_49;
  t = map_1_0(y_23, t);
  return(t);
}
ATerm s_12 (ATerm s_38, ATerm t_38, ATerm t)
{
  t = SSL_access(s_38, t_38);
  return(t);
}
ATerm t_61 (ATerm j_61, ATerm t)
{
  t = SSL_fclose(j_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL;
  p_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_61 = ATgetArgument(t, 0);
      {
        ATerm d_59 = t;
        int e_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_61);
            ;
            LocalPopChoice(e_59);
          }
        else
          {
            t = d_59;
            t = t_61(p_61, t);
          }
      }
    }
  else
    {
      t = t_61(p_61, t);
    }
  return(t);
}
ATerm q_12 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
ATerm r_12 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_fopen(a_39, b_39);
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_61 = NULL;
  t = SSL_stdin_stream();
  v_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_61);
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
ATerm p_63 (ATerm g_62, ATerm t)
{
  ATerm h_62 = NULL;
  t = SSL_explode_term(g_62);
  if(match_cons(t, sym__2))
    {
      ATerm g_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_59 = ATgetArgument(t, 1);
        if(((ATgetType(h_59) == AT_LIST) && !(ATisEmpty(h_59))))
          {
            h_62 = ATgetFirst((ATermList) h_59);
            {
              ATerm i_59 = (ATerm) ATgetNext((ATermList) h_59);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_62;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_62;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_62;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_62;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_63 (ATerm k_62, ATerm l_62, ATerm n_62, ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,v_62 = NULL,f_15 = NULL;
  t = SSLgetAnnotations(n_62);
  r_62 = t;
  t = k_62;
  if(match_cons(t, sym_Path_1))
    {
      v_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_62, l_62);
  f_15 = t;
  t = SSLsetAnnotations(f_15, r_62);
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(p_62, q_62, t);
  return(t);
}
ATerm r_63 (ATerm x_62, ATerm y_62, ATerm a_63, ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL,i_63 = NULL,h_15 = NULL;
  t = SSLgetAnnotations(a_63);
  e_63 = t;
  t = SSL_is_string(x_62);
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_63, y_62);
  h_15 = t;
  t = SSLsetAnnotations(h_15, e_63);
  if(match_cons(t, sym__2))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(c_63, d_63, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,n_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_59 = ATgetArgument(t, 0);
      ATerm k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_63 = t;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      n_63 = ATgetArgument(t, 1);
      {
        ATerm l_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_63(k_63, t);
            ;
            LocalPopChoice(m_59);
          }
        else
          {
            t = l_59;
            {
              ATerm n_59 = t;
              int o_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_63(l_63, n_63, k_63, t);
                  ;
                  LocalPopChoice(o_59);
                }
              else
                {
                  t = n_59;
                  t = r_63(l_63, n_63, k_63, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_63(k_63, t);
    }
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_p_59;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL;
  ATerm q_59 = t;
  int r_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL;
      w_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_63, term_s_59);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_59);
    }
  else
    {
      t = q_59;
      t = debug_1_0(z_23, t);
      _fail(t);
    }
  u_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_12(v_63, t);
  t_63 = t;
  t = u_63;
  t = fclose_0_0(t);
  t = t_63;
  return(t);
}
ATerm a_24 (ATerm t)
{
  t = term_v_59;
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = term_w_59;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm y_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_63 = NULL,a_64 = NULL;
      y_63 = t;
      t = (ATerm) ATinsert(ATempty, term_c_60);
      a_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_63, (ATerm) ATinsert(ATempty, term_c_60));
      t = s_12(y_63, a_64, t);
      LocalPopChoice(a_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = y_59;
      {
        ATerm d_60 = t;
        int f_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_60 = t;
            if((PushChoice() == 0))
              {
                ATerm c_64 = NULL,d_64 = NULL;
                c_64 = t;
                t = (ATerm) ATinsert(ATempty, term_d_49);
                d_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_64, (ATerm) ATinsert(ATempty, term_d_49));
                t = s_12(c_64, d_64, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_60;
              }
            t = debug_1_0(a_24, t);
            ;
            LocalPopChoice(f_60);
          }
        else
          {
            t = d_60;
            t = debug_1_0(b_24, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = debug_1_0(d_24, t);
  return(t);
}
ATerm d_24 (ATerm t)
{
  t = term_h_60;
  return(t);
}
ATerm e_24 (ATerm t)
{
  t = debug_1_0(f_24, t);
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = term_j_60;
  return(t);
}
ATerm g_24 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  t = term_m_30;
  v_64 = t;
  t = (ATerm) ATinsert(ATempty, term_m_60);
  w_64 = t;
  t = SSL_printnl(v_64, w_64);
  t = u_64;
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,a_65 = NULL;
  if(match_cons(t, sym__3))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      a_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_12(x_64, y_64, a_65, t);
  return(t);
}
ATerm i_24 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  t = term_m_30;
  d_65 = t;
  t = (ATerm) ATinsert(ATempty, term_n_60);
  e_65 = t;
  t = SSL_printnl(d_65, e_65);
  t = c_65;
  return(t);
}
ATerm j_24 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  t = term_m_30;
  h_65 = t;
  t = (ATerm) ATinsert(ATempty, term_m_60);
  i_65 = t;
  t = SSL_printnl(h_65, i_65);
  t = g_65;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,n_64 = NULL,p_64 = NULL,q_64 = NULL;
  e_64 = t;
  t = if_verbose5_1_0(c_24, t);
  {
    ATerm o_60 = t;
    if((PushChoice() == 0))
      {
        ATerm r_64 = NULL,t_64 = NULL;
        t = term_p_60;
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_64);
        t_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_60, (ATerm) ATmakeAppl(sym_Imported_1, e_64));
        t = w_12(r_64, t_64, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_60;
      }
    h_64 = t;
    t = term_p_60;
    n_64 = t;
    t = term_q_60;
    p_64 = t;
    t = (ATerm) ATinsert(ATempty, e_64);
    q_64 = t;
    t = SSL_table_put(n_64, p_64, q_64);
    t = h_64;
    t = if_verbose4_1_0(e_24, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_24, t);
    g_64 = t;
    t = term_p_60;
    l_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_60, g_64);
    t = p_12(h_24, l_64, g_64, t);
    t = if_verbose6_1_0(i_24, t);
    t = term_p_60;
    i_64 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, e_64);
    j_64 = t;
    t = (ATerm) ATempty;
    k_64 = t;
    t = SSL_table_put(i_64, j_64, k_64);
    t = (ATerm) ATmakeAppl(sym__3, term_p_60, (ATerm)ATmakeAppl(sym_Imported_1, e_64), (ATerm) ATempty);
    t = if_verbose4_1_0(j_24, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_65 = ATgetFirst((ATermList) t);
          z_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_60 = t;
        int s_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_36 = NULL,e_37 = NULL,f_37 = NULL,k_15 = NULL;
            t = SSLgetAnnotations(x_65);
            t_36 = t;
            t = y_65;
            t = q_88(t);
            e_37 = t;
            t = z_65;
            t = filter_1_0(q_88, t);
            f_37 = t;
            t = (ATerm) ATinsert(CheckATermList(f_37), e_37);
            k_15 = t;
            t = SSLsetAnnotations(k_15, t_36);
            ;
            LocalPopChoice(s_60);
          }
        else
          {
            t = r_60;
            t = z_65;
            t = filter_1_0(q_88, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm t)
{
  ATerm h_66 (ATerm t)
  {
    ATerm t_60 = t;
    int v_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_74(t);
        t = h_66(t);
        ;
        LocalPopChoice(v_60);
      }
    else
      {
        t = t_60;
      }
    return(t);
  }
  t = h_66(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_61;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_60);
    }
  else
    {
      t = x_60;
      {
        ATerm b_61 = t;
        int c_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_66 = NULL;
            t = term_d_61;
            i_66 = t;
            t = SSL_getenv(i_66);
            ;
            LocalPopChoice(c_61);
          }
        else
          {
            t = b_61;
            t = XTC_REPOSITORY();
          }
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
  t = term_e_61;
  return(t);
}
ATerm m_24 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL;
  t = term_p_60;
  o_66 = t;
  t = term_f_61;
  p_66 = t;
  t = term_g_61;
  t = w_12(o_66, p_66, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_61 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_61;
      }
  }
  return(t);
}
ATerm n_24 (ATerm t)
{
  t = debug_1_0(o_24, t);
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_66 = NULL;
  t = if_verbose5_1_0(k_24, t);
  k_66 = t;
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_66 = NULL,m_66 = NULL;
        t = term_p_60;
        l_66 = t;
        t = term_q_60;
        m_66 = t;
        t = term_m_61;
        t = w_12(l_66, m_66, t);
        ;
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        {
          ATerm n_66 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_66 = t;
          t = repeat_1_0(m_24, t);
          t = n_66;
        }
      }
    t = k_66;
    t = if_verbose5_1_0(n_24, t);
  }
  return(t);
}
ATerm p_24 (ATerm t)
{
  t = debug_1_0(s_24, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = term_n_61;
  return(t);
}
ATerm q_67 (ATerm v_66, ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  t = term_p_60;
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_66);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_60, (ATerm) ATmakeAppl(sym_Tool_1, v_66));
  t = w_12(z_66, a_67, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_61 = ATgetFirst((ATermList) t);
      if(match_cons(q_61, sym__2))
        {
          ATerm s_61 = ATgetArgument(q_61, 0);
          y_66 = ATgetArgument(q_61, 1);
        }
      else
        _fail(t);
      {
        ATerm r_61 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_66;
  return(t);
}
ATerm z_24 (ATerm t)
{
  t = debug_1_0(a_25, t);
  return(t);
}
ATerm a_25 (ATerm t)
{
  t = term_n_61;
  return(t);
}
ATerm b_25 (ATerm t)
{
  t = term_p_60;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_25, t);
  return(t);
}
ATerm c_25 (ATerm t)
{
  t = term_y_61;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_61 = t;
  int a_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_67 = NULL,c_67 = NULL,e_67 = NULL;
      t = if_verbose5_1_0(p_24, t);
      t = xtc_load_0_0(t);
      e_67 = t;
      if(match_cons(t, sym__2))
        {
          b_67 = ATgetArgument(t, 0);
          c_67 = ATgetArgument(t, 1);
          {
            ATerm b_62 = t;
            int c_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL;
                t = term_p_60;
                j_67 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_67);
                k_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_60, (ATerm) ATmakeAppl(sym_Tool_1, b_67));
                t = w_12(j_67, k_67, t);
                {
                  ATerm t_24 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_67 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_67 != NULL) && (i_67 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_67 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_24, t);
                  t = not_null(i_67);
                }
                ;
                LocalPopChoice(c_62);
              }
            else
              {
                t = b_62;
                t = q_67(e_67, t);
              }
          }
        }
      else
        {
          t = q_67(e_67, t);
        }
      t = if_verbose5_1_0(z_24, t);
      ;
      LocalPopChoice(a_62);
    }
  else
    {
      t = z_61;
      {
        ATerm p_67 = NULL,o_37 = NULL,q_37 = NULL;
        p_67 = t;
        t = term_m_30;
        o_37 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_62), p_67), term_d_62);
        q_37 = t;
        t = SSL_printnl(o_37, q_37);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_62), p_67), term_d_62);
        t = if_verbose5_1_0(b_25, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm t_12 (ATerm v_43, ATerm u_43, ATerm t)
{
  ATerm s_67 = NULL,u_67 = NULL,w_67 = NULL;
  t = v_43;
  {
    ATerm f_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_62);
      }
    else
      {
        t = f_62;
        t = (ATerm) ATempty;
      }
    u_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_43, u_67);
    t = conc_0_0(t);
    s_67 = t;
    t = term_x_54;
    w_67 = t;
    t = SSL_table_put(w_67, v_43, s_67);
    t = (ATerm) ATmakeAppl(sym__3, term_x_54, v_43, s_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_68 = NULL,c_68 = NULL,f_68 = NULL,i_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
      t = term_d_48;
      t = p_0(t);
      k_68 = t;
      t = term_j_62;
      l_68 = t;
      t = term_m_62;
      m_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_62, term_m_62, k_68);
      t = x_12(l_68, m_68, k_68, t);
      _fail(t);
    }
  else
    {
      ATerm s_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_68 = ATgetFirst((ATermList) t);
          c_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_68 = ATgetFirst((ATermList) t);
          i_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_68;
      t = m_0(t);
      t = f_68;
      t = n_0(t);
      s_68 = t;
      t = (ATerm) ATinsert(CheckATermList(i_68), s_68);
    }
  return(t);
}
ATerm u_12 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm o_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_68 = NULL;
      t = s_43;
      t = get_config_0_0(t);
      t = term_x_54;
      t_68 = t;
      t = SSL_table_remove(t_68, s_43);
      t = (ATerm) ATmakeAppl(sym__2, term_x_54, s_43);
      ;
      LocalPopChoice(s_62);
    }
  else
    {
      t = o_62;
      t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
      t = z_12(s_43, t_43, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm o_69 (ATerm t)
  {
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
    n_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_69 = ATgetFirst((ATermList) t);
        m_69 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_38 = NULL,g_38 = NULL,o_15 = NULL;
          t = SSLgetAnnotations(n_69);
          c_38 = t;
          t = m_69;
          t = o_69(t);
          g_38 = t;
          t = (ATerm) ATinsert(CheckATermList(g_38), l_69);
          o_15 = t;
          t = SSLsetAnnotations(o_15, c_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_69;
        t = z_81(t);
      }
    return(t);
  }
  t = o_69(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  v_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_68;
    }
  else
    {
      ATerm d_25 (ATerm t)
      {
        t = not_null(x_68);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_68 != NULL) && (w_68 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_68 = ATgetFirst((ATermList) t);
          if(((x_68 != NULL) && (x_68 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_68;
      t = at_end_1_0(d_25, t);
    }
  return(t);
}
ATerm a_70 (ATerm s_69, ATerm t)
{
  ATerm t_69 = NULL;
  t = SSL_explode_term(s_69);
  if(match_cons(t, sym__2))
    {
      ATerm t_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_69;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  x_69 = t;
  if(match_cons(t, sym__2))
    {
      v_69 = ATgetArgument(t, 0);
      w_69 = ATgetArgument(t, 1);
      {
        ATerm u_62 = t;
        int w_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25 (ATerm t)
            {
              t = w_69;
              return(t);
            }
            t = v_69;
            t = at_end_1_0(j_25, t);
            ;
            LocalPopChoice(w_62);
          }
        else
          {
            t = u_62;
            t = a_70(x_69, t);
          }
      }
    }
  else
    {
      t = a_70(x_69, t);
    }
  return(t);
}
ATerm v_12 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  t = w_43;
  {
    ATerm z_62 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(b_63);
      }
    else
      {
        t = z_62;
        t = (ATerm) ATempty;
      }
    g_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_70, x_43);
    t = conc_0_0(t);
    f_70 = t;
    t = term_x_54;
    h_70 = t;
    t = SSL_table_put(h_70, w_43, f_70);
    t = (ATerm) ATmakeAppl(sym__3, term_x_54, w_43, f_70);
  }
  return(t);
}
ATerm k_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  q_70 = t;
  t = term_j_47;
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_47, q_70);
  t = z_12(r_70, q_70, t);
  t = term_d_48;
  return(t);
}
ATerm o_25 (ATerm t)
{
  t = term_f_63;
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm w_70 = NULL;
  w_70 = t;
  if(match_string(t, "-o"))
    {
      t = w_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_70;
    }
  return(t);
}
ATerm v_25 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL;
  x_70 = t;
  t = term_t_30;
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, x_70);
  t = z_12(y_70, x_70, t);
  t = term_d_48;
  return(t);
}
ATerm y_25 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm z_70 = NULL;
  z_70 = t;
  if(match_string(t, "-I"))
    {
      t = z_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = z_70;
    }
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
  b_71 = t;
  t = term_k_51;
  c_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_71), term_k_51);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_51, (ATerm) ATinsert(ATinsert(ATempty, b_71), term_k_51));
  t = t_12(c_71, d_71, t);
  t = term_d_48;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = term_h_63;
  return(t);
}
ATerm e_26 (ATerm t)
{
  ATerm e_71 = NULL;
  e_71 = t;
  if(match_string(t, "--main"))
    {
      t = e_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = e_71;
    }
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL;
  f_71 = t;
  t = term_r_49;
  g_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_49, f_71);
  t = z_12(g_71, f_71, t);
  t = term_d_48;
  return(t);
}
ATerm g_26 (ATerm t)
{
  t = term_j_63;
  return(t);
}
ATerm h_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_26 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  t = term_p_31;
  i_71 = t;
  t = (ATerm) ATinsert(ATempty, h_71);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_31, (ATerm) ATinsert(ATempty, h_71));
  t = v_12(i_71, j_71, t);
  t = term_d_48;
  return(t);
}
ATerm j_26 (ATerm t)
{
  t = term_m_63;
  return(t);
}
ATerm k_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_26 (ATerm t)
{
  ATerm k_71 = NULL,n_71 = NULL,o_71 = NULL;
  k_71 = t;
  t = term_a_31;
  n_71 = t;
  t = (ATerm) ATinsert(ATempty, k_71);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, (ATerm) ATinsert(ATempty, k_71));
  t = t_12(n_71, o_71, t);
  t = term_d_48;
  return(t);
}
ATerm m_26 (ATerm t)
{
  t = term_o_63;
  return(t);
}
ATerm n_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_26 (ATerm t)
{
  ATerm p_71 = NULL,r_71 = NULL,s_71 = NULL;
  p_71 = t;
  t = term_v_30;
  r_71 = t;
  t = (ATerm) ATinsert(ATempty, p_71);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATempty, p_71));
  t = t_12(r_71, s_71, t);
  t = term_d_48;
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm r_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_26 (ATerm t)
{
  ATerm t_71 = NULL,v_71 = NULL;
  t = term_b_31;
  t_71 = t;
  t = term_d_48;
  v_71 = t;
  t = term_x_63;
  t = z_12(t_71, v_71, t);
  t = term_d_48;
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = term_z_63;
  return(t);
}
ATerm u_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm w_71 = NULL,y_71 = NULL;
  t = term_u_50;
  w_71 = t;
  t = term_d_48;
  y_71 = t;
  t = term_b_64;
  t = z_12(w_71, y_71, t);
  t = term_d_48;
  return(t);
}
ATerm x_26 (ATerm t)
{
  t = term_f_64;
  return(t);
}
ATerm z_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm z_71 = NULL,b_72 = NULL;
  t = term_t_47;
  z_71 = t;
  t = term_d_48;
  b_72 = t;
  t = term_m_64;
  t = z_12(z_71, b_72, t);
  t = term_d_48;
  return(t);
}
ATerm c_27 (ATerm t)
{
  t = term_o_64;
  return(t);
}
ATerm d_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_27 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  c_72 = t;
  t = SSL_string_to_int(c_72);
  d_72 = t;
  t = term_w_33;
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_33, d_72);
  t = z_12(e_72, d_72, t);
  t = term_d_48;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = term_s_64;
  return(t);
}
ATerm i_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_27 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
  f_72 = t;
  t = SSL_string_to_int(f_72);
  g_72 = t;
  t = term_a_34;
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_34, g_72);
  t = z_12(h_72, g_72, t);
  t = term_d_48;
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = term_z_64;
  return(t);
}
ATerm n_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL;
  t = term_x_35;
  i_72 = t;
  t = term_d_48;
  j_72 = t;
  t = term_b_65;
  t = u_12(i_72, j_72, t);
  t = term_d_48;
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = term_f_65;
  return(t);
}
ATerm r_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  t = SSL_string_to_int(k_72);
  l_72 = t;
  t = term_e_30;
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, l_72);
  t = z_12(m_72, l_72, t);
  t = term_d_48;
  return(t);
}
ATerm t_27 (ATerm t)
{
  t = term_j_65;
  return(t);
}
ATerm u_27 (ATerm t)
{
  ATerm n_72 = NULL;
  n_72 = t;
  if(match_string(t, "-S"))
    {
      t = n_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_72;
    }
  return(t);
}
ATerm v_27 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL;
  t = term_e_30;
  o_72 = t;
  t = term_x_29;
  p_72 = t;
  t = term_k_65;
  t = z_12(o_72, p_72, t);
  t = term_d_48;
  return(t);
}
ATerm x_27 (ATerm t)
{
  t = term_l_65;
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm q_72 = NULL;
  q_72 = t;
  if(match_string(t, "-h"))
    {
      t = q_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = q_72;
    }
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL;
  t = term_m_65;
  t_72 = t;
  t = term_d_48;
  u_72 = t;
  t = term_n_65;
  t = z_12(t_72, u_72, t);
  t = term_d_48;
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = term_o_65;
  return(t);
}
ATerm c_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  t = term_p_65;
  v_72 = t;
  t = term_d_48;
  w_72 = t;
  t = term_q_65;
  t = z_12(v_72, w_72, t);
  t = term_d_48;
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = term_r_65;
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  if(match_string(t, "-v"))
    {
      t = x_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = x_72;
    }
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm y_72 = NULL,z_72 = NULL;
  t = term_s_65;
  y_72 = t;
  t = term_d_48;
  z_72 = t;
  t = term_t_65;
  t = z_12(y_72, z_72, t);
  t = term_d_48;
  return(t);
}
ATerm i_28 (ATerm t)
{
  t = term_u_65;
  return(t);
}
ATerm j_28 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  if(match_string(t, "--warning"))
    {
      t = c_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = c_73;
    }
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm d_73 = NULL;
  d_73 = t;
  {
    ATerm v_65 = t;
    int w_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,y_15 = NULL;
        t = term_k_47;
        t = get_config_0_0(t);
        j_73 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_73 = ATgetFirst((ATermList) t);
            i_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_73);
        g_73 = t;
        t = h_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = i_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_73), h_73);
        y_15 = t;
        t = SSLsetAnnotations(y_15, g_73);
        t = term_k_47;
        e_73 = t;
        t = (ATerm) ATinsert(ATempty, d_73);
        f_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_47, (ATerm) ATinsert(ATempty, d_73));
        t = z_12(e_73, f_73, t);
        ;
        LocalPopChoice(w_65);
      }
    else
      {
        t = v_65;
        {
          ATerm k_73 = NULL,l_73 = NULL;
          t = term_k_47;
          k_73 = t;
          t = (ATerm) ATinsert(ATempty, d_73);
          l_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_47, (ATerm) ATinsert(ATempty, d_73));
          t = t_12(k_73, l_73, t);
        }
      }
    t = term_d_48;
  }
  return(t);
}
ATerm l_28 (ATerm t)
{
  t = term_a_66;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm b_66 = t;
  int c_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(k_25, m_25, o_25, t);
      ;
      LocalPopChoice(c_66);
    }
  else
    {
      t = b_66;
      {
        ATerm d_66 = t;
        int e_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_25, v_25, y_25, t);
            ;
            LocalPopChoice(e_66);
          }
        else
          {
            t = d_66;
            {
              ATerm f_66 = t;
              int g_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(z_25, c_26, d_26, t);
                  ;
                  LocalPopChoice(g_66);
                }
              else
                {
                  t = f_66;
                  {
                    ATerm j_66 = t;
                    int q_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(e_26, f_26, g_26, t);
                        ;
                        LocalPopChoice(q_66);
                      }
                    else
                      {
                        t = j_66;
                        {
                          ATerm r_66 = t;
                          int s_66 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(h_26, i_26, j_26, t);
                              ;
                              LocalPopChoice(s_66);
                            }
                          else
                            {
                              t = r_66;
                              {
                                ATerm t_66 = t;
                                int u_66 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(k_26, l_26, m_26, t);
                                    ;
                                    LocalPopChoice(u_66);
                                  }
                                else
                                  {
                                    t = t_66;
                                    {
                                      ATerm w_66 = t;
                                      int x_66 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(n_26, p_26, q_26, t);
                                          ;
                                          LocalPopChoice(x_66);
                                        }
                                      else
                                        {
                                          t = w_66;
                                          {
                                            ATerm d_67 = t;
                                            int f_67 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(r_26, s_26, t_26, t);
                                                ;
                                                LocalPopChoice(f_67);
                                              }
                                            else
                                              {
                                                t = d_67;
                                                {
                                                  ATerm g_67 = t;
                                                  int h_67 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(u_26, v_26, x_26, t);
                                                      ;
                                                      LocalPopChoice(h_67);
                                                    }
                                                  else
                                                    {
                                                      t = g_67;
                                                      {
                                                        ATerm l_67 = t;
                                                        int m_67 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(z_26, a_27, c_27, t);
                                                            ;
                                                            LocalPopChoice(m_67);
                                                          }
                                                        else
                                                          {
                                                            t = l_67;
                                                            {
                                                              ATerm n_67 = t;
                                                              int o_67 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(d_27, f_27, h_27, t);
                                                                  ;
                                                                  LocalPopChoice(o_67);
                                                                }
                                                              else
                                                                {
                                                                  t = n_67;
                                                                  {
                                                                    ATerm r_67 = t;
                                                                    int t_67 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(i_27, j_27, k_27, t);
                                                                        ;
                                                                        LocalPopChoice(t_67);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_67;
                                                                        {
                                                                          ATerm v_67 = t;
                                                                          int x_67 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(n_27, o_27, q_27, t);
                                                                              ;
                                                                              LocalPopChoice(x_67);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_67;
                                                                              {
                                                                                ATerm y_67 = t;
                                                                                int z_67 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = ArgOption_3_0(r_27, s_27, t_27, t);
                                                                                    ;
                                                                                    LocalPopChoice(z_67);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_67;
                                                                                    {
                                                                                      ATerm b_68 = t;
                                                                                      int d_68 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(u_27, v_27, x_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(d_68);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_68;
                                                                                          {
                                                                                            ATerm e_68 = t;
                                                                                            int g_68 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(y_27, a_28, b_28, t);
                                                                                                ;
                                                                                                LocalPopChoice(g_68);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_68;
                                                                                                {
                                                                                                  ATerm h_68 = t;
                                                                                                  int j_68 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(c_28, e_28, f_28, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_68);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_68;
                                                                                                      {
                                                                                                        ATerm n_68 = t;
                                                                                                        int o_68 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(g_28, h_28, i_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(o_68);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = n_68;
                                                                                                            t = ArgOption_3_0(j_28, k_28, l_28, t);
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_69), term_o_57), term_f_69), term_e_69), term_d_69), term_o_57), term_c_69), term_b_69), term_a_69), term_z_68), term_y_68), term_u_68), term_r_68), term_q_68), term_p_68);
  return(t);
}
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm d_74 (ATerm t)
  {
    ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL;
    a_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_74;
      }
    else
      {
        ATerm z_38 = NULL,e_39 = NULL,f_39 = NULL,h_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_74 = ATgetFirst((ATermList) t);
            c_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_74);
        z_38 = t;
        t = b_74;
        t = j_81(t);
        e_39 = t;
        t = c_74;
        t = d_74(t);
        f_39 = t;
        t = (ATerm) ATinsert(CheckATermList(f_39), e_39);
        h_16 = t;
        t = SSLsetAnnotations(h_16, z_38);
      }
    return(t);
  }
  t = d_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_74 = ATgetFirst((ATermList) t);
      h_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_74 = NULL,m_74 = NULL;
        ATerm m_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_74)), not_null(m_74));
          return(t);
        }
        t = h_74;
        t = k_0(t);
        if(((l_74 != NULL) && (l_74 != t)))
          _fail(t);
        else
          l_74 = t;
        t = g_74;
        t = j_0(t);
        if(((m_74 != NULL) && (m_74 != t)))
          _fail(t);
        else
          m_74 = t;
        t = h_74;
        t = reverse_acc_2_0(j_0, m_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_48;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_74 = NULL;
  t = term_d_48;
  t = i_0(t);
  p_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_69), p_74), term_p_69), term_o_57), term_k_69), term_o_57), term_j_69), term_i_69), term_o_57), term_h_69);
  return(t);
}
ATerm r_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm e_75 = NULL;
  e_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_75), term_r_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_74 = NULL,w_74 = NULL,x_74 = NULL;
  ATerm u_69 = t;
  int y_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_69;
      t = get_config_0_0(t);
      t_74 = t;
      ;
      LocalPopChoice(y_69);
    }
  else
    {
      t = u_69;
      {
        ATerm p_28 (ATerm t)
        {
          ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,m_16 = NULL;
          a_75 = t;
          if(match_cons(t, sym_Program_1))
            {
              z_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_75);
          y_74 = t;
          t = z_74;
          if(((t_74 != NULL) && (t_74 != t)))
            _fail(t);
          else
            t_74 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, z_74);
          m_16 = t;
          t = SSLsetAnnotations(m_16, y_74);
          return(t);
        }
        t = fetch_1_0(p_28, t);
      }
    }
  {
    ATerm b_70 = t;
    int c_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 (ATerm t)
        {
          t = not_null(t_74);
          return(t);
        }
        t = short_description_1_0(q_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(c_70);
      }
    else
      {
        t = b_70;
      }
    t = term_d_70;
    t = echo_0_0(t);
    t = term_j_62;
    if(((w_74 != NULL) && (w_74 != t)))
      _fail(t);
    else
      w_74 = t;
    t = term_m_62;
    if(((x_74 != NULL) && (x_74 != t)))
      _fail(t);
    else
      x_74 = t;
    t = term_e_70;
    t = w_12(w_74, x_74, t);
    t = reverse_acc_2_0(_id, r_28, t);
    t = map_1_0(s_28, t);
    {
      ATerm i_70 = t;
      int j_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_75 = NULL;
          ATerm t_28 (ATerm t)
          {
            t = not_null(t_74);
            return(t);
          }
          t = long_description_1_0(t_28, t);
          if(((f_75 != NULL) && (f_75 != t)))
            _fail(t);
          else
            f_75 = t;
          t = (ATerm) ATinsert(CheckATermList(f_75), term_o_57);
          t = echo_0_0(t);
          ;
          LocalPopChoice(j_70);
        }
      else
        {
          t = i_70;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm m_76 (ATerm t)
  {
    ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
    j_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_76 = ATgetFirst((ATermList) t);
        l_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_70 = t;
      int l_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_39 = NULL,b_40 = NULL,s_16 = NULL;
          t = SSLgetAnnotations(j_76);
          y_39 = t;
          t = k_76;
          t = t_81(t);
          b_40 = t;
          t = (ATerm) ATinsert(CheckATermList(l_76), b_40);
          s_16 = t;
          t = SSLsetAnnotations(s_16, y_39);
          ;
          LocalPopChoice(l_70);
        }
      else
        {
          t = k_70;
          {
            ATerm o_40 = NULL,v_40 = NULL,v_16 = NULL;
            t = SSLgetAnnotations(j_76);
            o_40 = t;
            t = l_76;
            t = m_76(t);
            v_40 = t;
            t = (ATerm) ATinsert(CheckATermList(v_40), k_76);
            v_16 = t;
            t = SSLsetAnnotations(v_16, o_40);
          }
        }
    }
    return(t);
  }
  t = m_76(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  {
    ATerm m_70 = t;
    int n_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_70 = ATgetFirst((ATermList) t);
                ATerm p_70 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_76;
          }
        ;
        LocalPopChoice(n_70);
      }
    else
      {
        t = m_70;
        t = (ATerm) ATinsert(ATempty, q_76);
      }
    r_76 = t;
    t = term_i_31;
    s_76 = t;
    t = SSL_printnl(s_76, r_76);
    t = q_76;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_69;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_28 (ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL;
  t = term_s_70;
  x_76 = t;
  t = term_d_48;
  y_76 = t;
  t = term_t_70;
  t = z_12(x_76, y_76, t);
  return(t);
}
ATerm y_28 (ATerm t)
{
  t = term_u_70;
  return(t);
}
ATerm z_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  t = term_s_70;
  b_77 = t;
  t = term_d_48;
  c_77 = t;
  t = term_t_70;
  t = z_12(b_77, c_77, t);
  t = term_s_65;
  z_76 = t;
  t = term_d_48;
  a_77 = t;
  t = term_t_65;
  t = z_12(z_76, a_77, t);
  t = term_v_70;
  return(t);
}
ATerm f_29 (ATerm t)
{
  t = term_a_71;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_71 = t;
  int m_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_28, x_28, y_28, t);
      ;
      LocalPopChoice(m_71);
    }
  else
    {
      t = l_71;
      t = Option_3_0(z_28, e_29, f_29, t);
    }
  return(t);
}
ATerm w_12 (ATerm e_50, ATerm f_50, ATerm t)
{
  t = SSL_table_get(e_50, f_50);
  return(t);
}
ATerm x_12 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
  {
    ATerm q_71 = t;
    int u_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_71 = ATgetArgument(t, 0);
            ATerm a_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
        t = w_12(n_48, o_48, t);
        ;
        LocalPopChoice(u_71);
      }
    else
      {
        t = q_71;
        t = (ATerm) ATempty;
      }
    h_77 = t;
    t = (ATerm) ATinsert(CheckATermList(h_77), m_48);
    i_77 = t;
    t = SSL_table_put(n_48, o_48, i_77);
    t = g_77;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_77 = NULL,w_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_77 = NULL,a_78 = NULL,h_78 = NULL;
      t = term_d_48;
      t = h_0(t);
      y_77 = t;
      t = term_j_62;
      a_78 = t;
      t = term_m_62;
      h_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_62, term_m_62, y_77);
      t = x_12(a_78, h_78, y_77, t);
      _fail(t);
    }
  else
    {
      ATerm l_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_77 = ATgetFirst((ATermList) t);
          w_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_77;
      t = d_0(t);
      t = term_d_48;
      t = g_0(t);
      l_78 = t;
      t = (ATerm) ATinsert(CheckATermList(w_77), l_78);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,f_17 = NULL;
  t_78 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_78 = ATgetFirst((ATermList) t);
      o_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_78);
  m_78 = t;
  t = n_78;
  t = t_59(t);
  r_78 = t;
  t = o_78;
  t = u_59(t);
  s_78 = t;
  t = (ATerm) ATinsert(CheckATermList(s_78), r_78);
  f_17 = t;
  t = SSLsetAnnotations(f_17, m_78);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,k_79 = NULL,l_79 = NULL,n_17 = NULL;
  d_79 = t;
  {
    ATerm r_72 = t;
    int s_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_73;
        t = j_100(t);
        ;
        LocalPopChoice(s_72);
      }
    else
      {
        t = r_72;
      }
    t = d_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_79 = ATgetFirst((ATermList) t);
        g_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_79);
    e_79 = t;
    t = term_z_69;
    l_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_69, f_79);
    t = z_12(l_79, f_79, t);
    t = g_79;
    {
      ATerm b_80 (ATerm t)
      {
        ATerm b_73 = t;
        int m_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_73 = t;
            int r_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_79 = NULL;
                s_79 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_79;
                ;
                LocalPopChoice(r_73);
              }
            else
              {
                t = q_73;
                t = j_100(t);
                t = Cons_2_0(_id, b_80, t);
              }
            ;
            LocalPopChoice(m_73);
          }
        else
          {
            t = b_73;
            {
              ATerm v_79 = NULL,w_79 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_79 = ATgetFirst((ATermList) t);
                  w_79 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_79), (ATerm) ATmakeAppl(sym_Undefined_1, v_79));
            }
          }
        return(t);
      }
      t = b_80(t);
      if(((k_79 != NULL) && (k_79 != t)))
        _fail(t);
      else
        k_79 = t;
      t = (ATerm) ATinsert(CheckATermList(k_79), (ATerm) ATmakeAppl(sym_Program_1, f_79));
      if(((n_17 != NULL) && (n_17 != t)))
        _fail(t);
      else
        n_17 = t;
      t = SSLsetAnnotations(n_17, e_79);
    }
  }
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm c_81 = NULL;
  c_81 = t;
  if(match_string(t, "--help"))
    {
      t = c_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_81;
        }
    }
  return(t);
}
ATerm j_29 (ATerm t)
{
  ATerm f_81 = NULL,g_81 = NULL;
  t = term_m_65;
  f_81 = t;
  t = term_d_48;
  g_81 = t;
  t = term_n_65;
  t = z_12(f_81, g_81, t);
  t = term_s_73;
  return(t);
}
ATerm k_29 (ATerm t)
{
  t = term_t_73;
  return(t);
}
ATerm l_29 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm p_80 = NULL,t_80 = NULL,v_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  v_80 = t;
  t = term_j_62;
  z_80 = t;
  t = term_m_62;
  a_81 = t;
  t = (ATerm) ATempty;
  b_81 = t;
  t = SSL_table_put(z_80, a_81, b_81);
  t = v_80;
  {
    ATerm g_29 (ATerm t)
    {
      ATerm u_73 = t;
      int v_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_100(t);
          ;
          LocalPopChoice(v_73);
        }
      else
        {
          t = u_73;
          {
            ATerm w_73 = t;
            int x_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_29, j_29, k_29, t);
                ;
                LocalPopChoice(x_73);
              }
            else
              {
                t = w_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_29, t);
    {
      ATerm y_73 = t;
      int z_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_81 = NULL;
          x_81 = t;
          {
            ATerm e_74 = t;
            int f_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_41 = NULL;
                t = x_81;
                {
                  ATerm i_74 = t;
                  int j_74 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_65;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_74);
                    }
                  else
                    {
                      t = i_74;
                      t = fetch_1_0(l_29, t);
                    }
                  t = x_81;
                  t = default_system_usage_0_0(t);
                  t = term_x_29;
                  g_41 = t;
                  t = SSL_exit(g_41);
                }
                ;
                LocalPopChoice(f_74);
              }
            else
              {
                t = e_74;
                {
                  ATerm q_41 = NULL;
                  t = term_s_70;
                  t = get_config_0_0(t);
                  t = x_81;
                  t = default_system_about_0_0(t);
                  t = term_x_29;
                  q_41 = t;
                  t = SSL_exit(q_41);
                }
              }
          }
          ;
          LocalPopChoice(z_73);
        }
      else
        {
          t = y_73;
          {
            ATerm k_74 = t;
            int q_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL;
                ATerm m_29 (ATerm t)
                {
                  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,y_17 = NULL;
                  g_82 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      f_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_82);
                  e_82 = t;
                  t = f_82;
                  if(((p_80 != NULL) && (p_80 != t)))
                    _fail(t);
                  else
                    p_80 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_82);
                  y_17 = t;
                  t = SSLsetAnnotations(y_17, e_82);
                  return(t);
                }
                t = fetch_1_0(m_29, t);
                t = term_m_30;
                if(((c_82 != NULL) && (c_82 != t)))
                  _fail(t);
                else
                  c_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_80)), term_r_74);
                if(((d_82 != NULL) && (d_82 != t)))
                  _fail(t);
                else
                  d_82 = t;
                t = SSL_printnl(c_82, d_82);
                t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_80)), term_r_74));
                t = default_system_usage_0_0(t);
                t = term_s_32;
                if(((b_82 != NULL) && (b_82 != t)))
                  _fail(t);
                else
                  b_82 = t;
                t = SSL_exit(b_82);
                ;
                LocalPopChoice(q_74);
              }
            else
              {
                t = k_74;
              }
          }
        }
      if(((t_80 != NULL) && (t_80 != t)))
        _fail(t);
      else
        t_80 = t;
      t = term_j_62;
      if(((y_80 != NULL) && (y_80 != t)))
        _fail(t);
      else
        y_80 = t;
      t = SSL_table_destroy(y_80);
      t = t_80;
    }
  }
  return(t);
}
ATerm z_12 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm o_82 = NULL;
  t = term_x_54;
  o_82 = t;
  t = SSL_table_put(o_82, p_43, q_43);
  t = (ATerm) ATmakeAppl(sym__3, term_x_54, p_43, q_43);
  return(t);
}
ATerm a_13 (ATerm o_33, ATerm p_33, ATerm t)
{
  t = SSL_strcat(o_33, p_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm i_83 = NULL,k_83 = NULL;
  k_83 = t;
  t = SSL_explode_string(k_83);
  {
    ATerm s_74 = t;
    int v_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_84 (ATerm t)
        {
          ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL;
          r_84 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_84 = ATgetFirst((ATermList) t);
              t_84 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_75 = t;
            int c_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_41 = NULL,p_42 = NULL,a_18 = NULL;
                t = SSLgetAnnotations(r_84);
                z_41 = t;
                t = t_84;
                t = v_84(t);
                p_42 = t;
                t = (ATerm) ATinsert(CheckATermList(p_42), s_84);
                a_18 = t;
                t = SSLsetAnnotations(a_18, z_41);
                ;
                LocalPopChoice(c_75);
              }
            else
              {
                t = b_75;
                {
                  ATerm a_43 = NULL,i_18 = NULL;
                  t = SSLgetAnnotations(r_84);
                  a_43 = t;
                  t = s_84;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, s_84);
                  i_18 = t;
                  t = SSLsetAnnotations(i_18, a_43);
                }
              }
          }
          return(t);
        }
        t = v_84(t);
        ;
        LocalPopChoice(v_74);
      }
    else
      {
        t = s_74;
        t = (ATerm) ATempty;
      }
    if(((i_83 != NULL) && (i_83 != t)))
      _fail(t);
    else
      i_83 = t;
    t = SSL_implode_string(i_83);
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
  ATerm y_84 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,p_85 = NULL,t_85 = NULL,u_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,o_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,y_86 = NULL,b_87 = NULL,e_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,s_87 = NULL,t_87 = NULL;
  y_84 = t;
  t = term_j_57;
  s_87 = t;
  t = term_d_75;
  t_87 = t;
  t = term_g_75;
  t = z_12(s_87, t_87, t);
  t = term_e_30;
  j_87 = t;
  t = term_g_30;
  k_87 = t;
  t = term_h_75;
  t = z_12(j_87, k_87, t);
  t = term_w_33;
  h_87 = t;
  t = term_x_29;
  i_87 = t;
  t = term_i_75;
  t = z_12(h_87, i_87, t);
  t = term_a_34;
  b_87 = t;
  t = term_c_35;
  e_87 = t;
  t = term_j_75;
  t = z_12(b_87, e_87, t);
  t = term_k_75;
  t = xtc_find_path_0_0(t);
  z_85 = t;
  t = term_l_75;
  t = xtc_find_path_0_0(t);
  a_86 = t;
  t = term_m_75;
  t = xtc_find_path_0_0(t);
  b_86 = t;
  t = term_k_51;
  u_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_86), term_k_51), a_86), term_k_51), z_85), term_k_51);
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_86), term_k_51), a_86), term_k_51), z_85), term_k_51));
  t = z_12(u_86, y_86, t);
  t = term_p_31;
  s_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_75), term_n_75);
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_31, (ATerm) ATinsert(ATinsert(ATempty, term_o_75), term_n_75));
  t = z_12(s_86, t_86, t);
  t = term_p_75;
  t = xtc_find_path_0_0(t);
  y_85 = t;
  t = term_q_75;
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_85, term_q_75);
  t = a_13(y_85, r_86, t);
  l_85 = t;
  t = term_p_75;
  t = xtc_find_path_0_0(t);
  u_85 = t;
  t = term_q_75;
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_85, term_q_75);
  t = a_13(u_85, o_86, t);
  m_85 = t;
  t = term_r_75;
  t = xtc_find_path_0_0(t);
  t_85 = t;
  t = term_q_75;
  l_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_85, term_q_75);
  t = a_13(t_85, l_86, t);
  p_85 = t;
  t = term_a_31;
  j_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_85), term_k_51), m_85), term_k_51), l_85), term_k_51);
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_85), term_k_51), m_85), term_k_51), l_85), term_k_51));
  t = z_12(j_86, k_86, t);
  t = term_p_75;
  t = xtc_find_path_0_0(t);
  k_85 = t;
  t = term_s_75;
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_85, term_s_75);
  t = a_13(k_85, i_86, t);
  f_85 = t;
  t = term_r_75;
  t = xtc_find_path_0_0(t);
  h_85 = t;
  t = term_s_75;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_85, term_s_75);
  t = a_13(h_85, h_86, t);
  g_85 = t;
  t = term_v_30;
  f_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_75), term_w_75), g_85), term_t_75), term_v_75), term_u_75), f_85), term_t_75);
  g_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_75), term_w_75), g_85), term_t_75), term_v_75), term_u_75), f_85), term_t_75));
  t = z_12(f_86, g_86, t);
  t = term_k_47;
  d_86 = t;
  t = (ATerm) ATinsert(ATempty, term_y_75);
  e_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_47, (ATerm) ATinsert(ATempty, term_y_75));
  t = z_12(d_86, e_86, t);
  t = y_84;
  return(t);
}
ATerm n_29 (ATerm t)
{
  ATerm h_89 = NULL;
  h_89 = t;
  t = term_j_47;
  t = get_config_0_0(t);
  t = debug_1_0(o_29, t);
  t = h_89;
  return(t);
}
ATerm o_29 (ATerm t)
{
  t = term_z_75;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm a_76 = t;
    int b_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
        t = term_p_65;
        t = get_config_0_0(t);
        t = term_c_76;
        t = xtc_find_0_0(t);
        z_87 = t;
        t = term_i_31;
        b_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_87, term_i_31);
        t = j_12(z_87, b_88, t);
        t = term_x_29;
        a_88 = t;
        t = SSL_exit(a_88);
        ;
        LocalPopChoice(b_76);
      }
    else
      {
        t = a_76;
      }
    {
      ATerm d_76 = t;
      int e_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_88 = NULL;
          t = term_s_65;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_x_29;
          f_88 = t;
          t = SSL_exit(f_88);
          ;
          LocalPopChoice(e_76);
        }
      else
        {
          t = d_76;
        }
      {
        ATerm f_76 = t;
        int g_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_88 = NULL;
            i_88 = t;
            t = term_j_47;
            t = get_config_0_0(t);
            t = i_88;
            ;
            LocalPopChoice(g_76);
          }
        else
          {
            t = f_76;
            {
              ATerm z_88 = NULL,b_89 = NULL,f_89 = NULL;
              t = term_m_30;
              b_89 = t;
              t = (ATerm) ATinsert(ATempty, term_h_76);
              f_89 = t;
              t = SSL_printnl(b_89, f_89);
              t = term_s_32;
              z_88 = t;
              t = SSL_exit(z_88);
              t = (ATerm) ATinsert(ATempty, term_h_76);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(n_29, t);
      }
    }
  }
  return(t);
}
ATerm p_29 (ATerm t)
{
  t = if_verbose1_1_0(r_29, t);
  return(t);
}
ATerm q_29 (ATerm t)
{
  t = xtc_temp_files_1_0(t_29, t);
  return(t);
}
ATerm r_29 (ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL,t_89 = NULL;
  p_89 = t;
  t = term_m_30;
  q_89 = t;
  t = (ATerm) ATinsert(CheckATermList(p_89), term_i_76);
  t_89 = t;
  t = SSL_printnl(q_89, t_89);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(CheckATermList(p_89), term_i_76));
  return(t);
}
ATerm t_29 (ATerm t)
{
  ATerm n_76 = t;
  int o_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_89 = NULL;
      t = term_j_47;
      t = get_config_0_0(t);
      v_89 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_89);
      ;
      LocalPopChoice(o_76);
    }
  else
    {
      t = n_76;
      t = term_h_49;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  t = run_time_0_0(t);
  w_89 = t;
  t = term_m_30;
  x_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_76), w_89), term_p_76);
  y_89 = t;
  t = SSL_printnl(x_89, y_89);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_76), w_89), term_p_76));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm u_76 = t;
  int v_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_89 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(p_29, q_29, t);
      t = if_verbose2_1_0(w_29, t);
      t = term_x_29;
      n_89 = t;
      t = SSL_exit(n_89);
      ;
      LocalPopChoice(v_76);
    }
  else
    {
      t = u_76;
      {
        ATerm z_89 = NULL,a_90 = NULL,d_90 = NULL,e_90 = NULL;
        t = run_time_0_0(t);
        z_89 = t;
        t = term_m_30;
        d_90 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_76), z_89), term_w_76);
        e_90 = t;
        t = SSL_printnl(d_90, e_90);
        t = term_s_32;
        a_90 = t;
        t = SSL_exit(a_90);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
