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
ATerm term_p_76;
ATerm term_j_76;
ATerm term_i_76;
ATerm term_b_76;
ATerm term_a_76;
ATerm term_v_75;
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
ATerm term_f_75;
ATerm term_e_75;
ATerm term_d_75;
ATerm term_a_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_f_74;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_f_72;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_p_69;
ATerm term_k_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_x_68;
ATerm term_w_68;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_t_68;
ATerm term_p_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_k_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_q_65;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_c_65;
ATerm term_a_65;
ATerm term_t_64;
ATerm term_p_64;
ATerm term_n_64;
ATerm term_g_64;
ATerm term_c_64;
ATerm term_a_64;
ATerm term_v_63;
ATerm term_t_63;
ATerm term_p_63;
ATerm term_n_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_a_63;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_r_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_m_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_b_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_t_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_d_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_q_59;
ATerm term_n_59;
ATerm term_m_59;
ATerm term_l_59;
ATerm term_i_59;
ATerm term_o_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_v_56;
ATerm term_p_54;
ATerm term_d_54;
ATerm term_x_53;
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
ATerm term_h_53;
ATerm term_f_53;
ATerm term_w_52;
ATerm term_f_52;
ATerm term_y_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_x_50;
ATerm term_s_50;
ATerm term_q_50;
ATerm term_l_50;
ATerm term_z_49;
ATerm term_r_49;
ATerm term_n_49;
ATerm term_f_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_r_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_e_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_j_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_t_46;
ATerm term_n_46;
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
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_o_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_x_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_i_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_m_39;
ATerm term_g_39;
ATerm term_e_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_t_35;
ATerm term_o_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_t_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_z_32;
ATerm term_x_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_r_29;
void init_constant_terms (void)
{
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
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
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_40, term_a_32, term_s_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_40, term_y_29, term_v_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_40, term_b_33, term_z_40);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_41, term_y_34, term_f_41);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_41, term_i_41, term_j_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_41, term_m_41, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_41, term_q_41, term_r_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_41, term_v_41, term_w_41);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_41, term_z_41, term_a_42);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_42, term_e_42, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_42, term_k_42, term_l_42);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_42, term_u_34, term_p_42);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_42, term_u_42, term_v_42);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_43, term_b_43, term_c_43);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_43, term_g_43, term_h_43);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_43, term_l_43, term_m_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_43, term_y_43, term_z_43);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_44, term_c_44, term_d_44);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_44, term_j_44, term_k_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_44, term_o_44, term_p_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_44, term_u_44, term_v_44);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_44, term_y_44, term_z_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_45, term_c_45, term_d_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_45, term_g_45, term_h_45);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_45, term_q_34, term_k_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_45, term_n_45, term_o_45);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_45, term_z_45, term_a_46);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_46, term_d_46, term_e_46);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym__2, term_y_48, term_e_48);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_y_60);
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__2, term_i_60, term_j_60);
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_y_47);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(sym__2, term_q_50, term_y_47);
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(sym__2, term_j_47, term_y_47);
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_y_47);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_r_29);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(sym__2, term_c_65, term_y_47);
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(sym__2, term_i_65, term_y_47);
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym__2, term_l_65, term_y_47);
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_t_68));
  term_t_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(sym__2, term_a_62, term_b_62);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(sym__2, term_j_70, term_y_47);
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_72));
  term_f_72 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_v_74);
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_a_32);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_r_29);
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_y_34);
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_h_75));
  term_h_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm u_11 (ATerm d_19, ATerm);
ATerm k_1 (ATerm);
ATerm q_1 (ATerm);
ATerm v_1 (ATerm);
ATerm v_11 (ATerm b_19, ATerm);
ATerm x_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm w_11 (ATerm i_39, ATerm j_39, ATerm);
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm a_3 (ATerm);
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
ATerm c_10 (ATerm);
ATerm e_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
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
ATerm b_12 (ATerm);
ATerm h_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
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
ATerm g_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm r_14 (ATerm);
ATerm t_14 (ATerm);
ATerm v_14 (ATerm);
ATerm x_14 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm k_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm w_15 (ATerm);
ATerm y_15 (ATerm);
ATerm a_16 (ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm);
ATerm a_12 (ATerm r_44, ATerm s_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm);
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm i_17 (ATerm);
ATerm l_17 (ATerm);
ATerm pass_warnings_0_0 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm r_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm x_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm);
ATerm y_11 (ATerm i_42, ATerm j_42, ATerm);
ATerm z_11 (ATerm g_94 (ATerm), ATerm e_440, ATerm q_42, ATerm);
ATerm c_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm);
ATerm r_33 (ATerm a_33, ATerm);
ATerm s_33 (ATerm c_33, ATerm e_33, ATerm g_33, ATerm);
ATerm b_18 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm d_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm f_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm a_19 (ATerm);
ATerm c_19 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm e_19 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm i_19 (ATerm);
ATerm k_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm d_12 (ATerm s_18, ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm w_20 (ATerm);
ATerm z_20 (ATerm);
ATerm b_21 (ATerm);
ATerm d_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm i_21 (ATerm);
ATerm o_21 (ATerm);
ATerm q_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm z_21 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm w_22 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_12 (ATerm s_48, ATerm t_48, ATerm);
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm g_12 (ATerm y_35, ATerm z_35, ATerm);
ATerm i_12 (ATerm e_36, ATerm f_36, ATerm);
ATerm j_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm k_12 (ATerm k_39, ATerm l_39, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm n_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm);
ATerm o_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm);
ATerm q_23 (ATerm);
ATerm p_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm);
ATerm q_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm);
ATerm t_12 (ATerm s_38, ATerm t_38, ATerm);
ATerm p_61 (ATerm e_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_12 (ATerm o_42, ATerm);
ATerm s_12 (ATerm a_39, ATerm b_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_63 (ATerm d_62, ATerm);
ATerm m_63 (ATerm i_62, ATerm j_62, ATerm k_62, ATerm);
ATerm o_63 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_23 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm v_23 (ATerm);
ATerm w_23 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm k_24 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm l_24 (ATerm);
ATerm m_24 (ATerm);
ATerm n_67 (ATerm s_66, ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm s_24 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm u_12 (ATerm v_43, ATerm u_43, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_12 (ATerm s_43, ATerm t_43, ATerm);
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_70 (ATerm n_69, ATerm);
ATerm conc_0_0 (ATerm);
ATerm w_12 (ATerm w_43, ATerm x_43, ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm n_25 (ATerm);
ATerm p_25 (ATerm);
ATerm z_25 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
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
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm j_27 (ATerm);
ATerm m_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm r_27 (ATerm);
ATerm s_27 (ATerm);
ATerm v_27 (ATerm);
ATerm w_27 (ATerm);
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
ATerm h_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm j_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm);
ATerm n_28 (ATerm);
ATerm o_28 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm y_28 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm x_12 (ATerm e_50, ATerm f_50, ATerm);
ATerm y_12 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm);
ATerm c_29 (ATerm);
ATerm e_29 (ATerm);
ATerm g_29 (ATerm);
ATerm h_29 (ATerm);
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm a_13 (ATerm p_43, ATerm q_43, ATerm);
ATerm b_13 (ATerm o_33, ATerm p_33, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm l_29 (ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm q_29 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,o_0 = NULL;
  c_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_0;
      t = m_87(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_0 = ATgetFirst((ATermList) t);
          o_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_0;
      t = foldr_2_0(m_87, n_87, t);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_0, u_0);
      t = n_87(t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(f_1, g_1, t);
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
      ATerm s_29 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(q_0, t_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_y_29);
        t = geq_0_0(t);
        t = d_1;
        t = r_95(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = d_1;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL,r_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = term_z_29;
  r_1 = t;
  t = (ATerm) ATinsert(ATempty, term_a_30);
  s_1 = t;
  t = SSL_printnl(r_1, s_1);
  t = p_1;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_1 = NULL,y_1 = NULL,z_1 = NULL;
  t_1 = t;
  t = term_z_29;
  y_1 = t;
  t = (ATerm) ATinsert(ATempty, t_1);
  z_1 = t;
  t = SSL_printnl(y_1, z_1);
  t = t_1;
  return(t);
}
ATerm u_11 (ATerm d_19, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = get_outfile_1_0(e_1, t);
      }
    l_1 = t;
    t = term_j_30;
    t = get_config_0_0(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_30, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_1), l_1), term_i_30), d_19));
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
        t = a_12(n_1, o_1, t);
        t = term_l_30;
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
  t = term_z_29;
  j_2 = t;
  t = (ATerm) ATinsert(ATempty, term_m_30);
  k_2 = t;
  t = SSL_printnl(j_2, k_2);
  t = i_2;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  t = term_z_29;
  o_2 = t;
  t = (ATerm) ATinsert(ATempty, l_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = l_2;
  return(t);
}
ATerm v_11 (ATerm b_19, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(q_1, t);
  b_2 = t;
  t = term_p_30;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_i_30), b_19), term_q_30));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, c_2);
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
      t = a_12(g_2, h_2, t);
      t = term_l_30;
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
  ATerm b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(c_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(b_3, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  t = term_z_29;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(v_2), term_r_30);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(CheckATermList(v_2), term_r_30));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL;
      t_2 = t;
      t = term_q_30;
      t = get_config_0_0(t);
      t = t_2;
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      t = profile_p__2_0(x_1, e_2, t);
    }
  return(t);
}
ATerm w_11 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSL_rename(i_39, j_39);
  return(t);
}
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm t)
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
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = r_3;
        t = s_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_w_30;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_w_30);
        t = k_12(s_3, u_1, t);
        t = SSL_remove(s_3);
        t = term_w_30;
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL;
              t = r_3;
              t = s_0(t);
              m_2 = t;
              {
                ATerm z_30 = t;
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
                    t = z_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_3, m_2);
                t = w_11(s_3, m_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
              }
              ;
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
              t = r_3;
              t = s_0(t);
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
  t = term_a_31;
  x_3 = t;
  t = term_c_31;
  t = xtc_find_0_0(t);
  b_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_e_31);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, h_4), term_f_31);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL;
  g_4 = t;
  t = term_g_31;
  d_4 = t;
  t = term_f_31;
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
  t = term_z_29;
  z_4 = t;
  t = (ATerm) ATinsert(ATempty, term_h_31);
  a_5 = t;
  t = SSL_printnl(z_4, a_5);
  t = y_4;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            l_5 = ATgetArgument(t, 0);
            {
              ATerm z_2 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(g_5);
              z_2 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_5);
              v_0 = t;
              t = SSLsetAnnotations(v_0, z_2);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_5;
          }
        LocalPopChoice(j_31);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = i_31;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
    t = if_keep1_1_0(j_3, t);
    t = olevel_2_0(m_3, o_3, t);
    t = olevel_2_0(m_5, s_5, t);
    f_5 = t;
    {
      ATerm l_31 = t;
      int p_31 = stack_ptr;
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
          LocalPopChoice(p_31);
          t = xtc_transform_file_2_0(c_6, g_6, t);
        }
      else
        {
          t = l_31;
          t = xtc_transform_term_2_0(h_6, i_6, t);
        }
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      e_5 = t;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
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
            LocalPopChoice(r_31);
            t = xtc_transform_file_2_0(j_6, pass_verbose_0_0, t);
          }
        else
          {
            t = q_31;
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
  t = term_z_29;
  c_5 = t;
  t = (ATerm) ATinsert(CheckATermList(b_5), term_v_31);
  d_5 = t;
  t = SSL_printnl(c_5, d_5);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(CheckATermList(b_5), term_v_31));
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_5 = NULL;
  t = pass_verbose_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(n_5), term_x_31);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm o_5 = NULL;
  t = pass_verbose_0_0(t);
  o_5 = t;
  t = (ATerm) ATinsert(CheckATermList(o_5), term_x_31);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  q_5 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
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
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(p_3, t_3, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(u_3, a_4, t);
      }
    t = if_keep1_1_0(f_4, t);
    p_5 = t;
    {
      ATerm e_32 = t;
      int g_32 = stack_ptr;
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
          LocalPopChoice(g_32);
          t = xtc_transform_file_2_0(k_4, l_4, t);
        }
      else
        {
          t = e_32;
          t = xtc_transform_term_2_0(m_4, o_4, t);
        }
      t = if_keep1_1_0(p_4, t);
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_x_31);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm f_6 = NULL;
  t = pass_verbose_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_6), term_x_31);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = save_as_1_0(i_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_x_31);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_x_31);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_b_33;
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
  t = term_d_33;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_x_31);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm x_6 = NULL;
  t = pass_verbose_0_0(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(x_6), term_x_31);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = get_outfile_1_0(n_6, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(w_2, a_3, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_a_32);
        t = geq_0_0(t);
        t = m_7;
        t = s_96(t);
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
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
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,d_8 = NULL;
        t = t_7;
        t = o_104(t);
        a_8 = t;
        t = term_x_33;
        t = get_config_0_0(t);
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, a_8);
        t = geq_0_0(t);
        t = t_7;
        t = p_104(t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = t_7;
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_6 = NULL;
  t = pass_verbose_0_0(t);
  b_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_x_31);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_x_31);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_x_31);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_x_31);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  r_9 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
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
              LocalPopChoice(f_34);
              t = xtc_transform_file_2_0(r_6, s_6, t);
            }
          else
            {
              t = e_34;
              t = xtc_transform_term_2_0(t_6, v_6, t);
            }
        }
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = r_9;
        {
          ATerm g_34 = t;
          int l_34 = stack_ptr;
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
              LocalPopChoice(l_34);
              t = xtc_transform_file_2_0(y_6, z_6, t);
            }
          else
            {
              t = g_34;
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
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        a_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_10, term_q_34);
        t = geq_0_0(t);
        t = x_9;
        t = w_96(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = n_34;
        t = x_9;
      }
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  {
    ATerm r_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        g_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_10, term_u_34);
        t = geq_0_0(t);
        t = d_10;
        t = v_96(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = r_34;
        t = d_10;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm k_10 = NULL;
  k_10 = t;
  {
    ATerm v_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, term_y_34);
        t = geq_0_0(t);
        t = k_10;
        t = x_96(t);
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = v_34;
        t = k_10;
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm e_14 = NULL,h_14 = NULL,i_14 = NULL;
  e_14 = t;
  t = term_z_29;
  h_14 = t;
  t = (ATerm) ATinsert(ATempty, term_a_35);
  i_14 = t;
  t = SSL_printnl(h_14, i_14);
  t = e_14;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm o_14 = NULL;
  t = if_verbose3_1_0(h_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = olevel_2_0(v_7, w_7, t);
  t = olevel_2_0(k_8, l_8, t);
  o_14 = t;
  {
    ATerm c_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            q_17 = ATgetArgument(t, 0);
            {
              ATerm f_11 = NULL,t_4 = NULL;
              t = SSLgetAnnotations(o_14);
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_17);
              t_4 = t;
              t = SSLsetAnnotations(t_4, f_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_14;
          }
        LocalPopChoice(e_35);
        t = xtc_transform_file_2_0(b_10, c_10, t);
      }
    else
      {
        t = c_35;
        t = xtc_transform_term_2_0(e_10, h_10, t);
      }
    t = olevel_2_0(i_10, j_10, t);
    t = olevel_2_0(e_11, g_11, t);
    t = olevel_2_0(b_12, h_12, t);
    t = olevel_2_0(p_13, q_13, t);
    t = olevel_2_0(f_15, h_15, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_14 = NULL,m_14 = NULL,n_14 = NULL;
  j_14 = t;
  t = term_z_29;
  m_14 = t;
  t = (ATerm) ATinsert(CheckATermList(j_14), term_f_35);
  n_14 = t;
  t = SSL_printnl(m_14, n_14);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(CheckATermList(j_14), term_f_35));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = term_x_33;
  t = get_config_0_0(t);
  t = debug_1_0(i_7, t);
  t = p_14;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm h_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_14 = ATgetArgument(t, 0);
            {
              ATerm j_8 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(q_14);
              j_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_14);
              q_3 = t;
              t = SSLsetAnnotations(q_3, j_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_14;
          }
        LocalPopChoice(m_35);
        t = xtc_transform_file_2_0(l_7, n_7, t);
      }
    else
      {
        t = h_35;
        t = xtc_transform_term_2_0(o_7, p_7, t);
      }
    t = if_keep1_1_0(r_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm y_14 = NULL;
  t = pass_verbose_0_0(t);
  y_14 = t;
  t = (ATerm) ATinsert(CheckATermList(y_14), term_x_31);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm z_14 = NULL;
  t = pass_verbose_0_0(t);
  z_14 = t;
  t = (ATerm) ATinsert(CheckATermList(z_14), term_x_31);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = save_as_1_0(s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_o_35;
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_15;
        {
          ATerm s_35 = t;
          if((PushChoice() == 0))
            {
              t = term_t_35;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_35;
            }
          t = o_15;
          {
            ATerm u_35 = t;
            int x_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_9 = ATgetArgument(t, 0);
                    {
                      ATerm f_10 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(o_15);
                      f_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, f_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = o_15;
                  }
                LocalPopChoice(x_35);
                t = xtc_transform_file_2_0(b_8, c_8, t);
              }
            else
              {
                t = u_35;
                t = xtc_transform_term_2_0(f_8, g_8, t);
              }
            t = if_keep2_1_0(h_8, t);
          }
        }
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = o_15;
      }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm n_9 = NULL;
  t = pass_verbose_0_0(t);
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_9), term_x_31);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm q_9 = NULL;
  t = pass_verbose_0_0(t);
  q_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_9), term_x_31);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = save_as_1_0(i_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm q_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL;
  x_15 = t;
  {
    ATerm d_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_16 = ATgetArgument(t, 0);
            {
              ATerm p_10 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(x_15);
              p_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_16);
              w_3 = t;
              t = SSLsetAnnotations(w_3, p_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_15;
          }
        LocalPopChoice(h_36);
        t = xtc_transform_file_2_0(m_8, o_8, t);
      }
    else
      {
        t = d_36;
        t = xtc_transform_term_2_0(q_8, u_8, t);
      }
    t = if_keep6_1_0(v_8, t);
    v_15 = t;
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_16 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              o_16 = ATgetArgument(t, 0);
              {
                ATerm t_10 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(v_15);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, o_16);
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
          t = xtc_transform_file_2_0(x_8, y_8, t);
        }
      else
        {
          t = i_36;
          t = xtc_transform_term_2_0(k_9, l_9, t);
        }
      u_15 = t;
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                v_16 = ATgetArgument(t, 0);
                {
                  ATerm x_10 = NULL,r_4 = NULL;
                  t = SSLgetAnnotations(u_15);
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
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
            t = xtc_transform_file_2_0(m_9, o_9, t);
          }
        else
          {
            t = k_36;
            t = xtc_transform_term_2_0(p_9, s_9, t);
          }
        t = if_keep4_1_0(t_9, t);
        q_15 = t;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_17 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  f_17 = ATgetArgument(t, 0);
                  {
                    ATerm b_11 = NULL,s_4 = NULL;
                    t = SSLgetAnnotations(q_15);
                    b_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, f_17);
                    s_4 = t;
                    t = SSLsetAnnotations(s_4, b_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_15;
                }
              LocalPopChoice(n_36);
              t = xtc_transform_file_2_0(v_9, w_9, t);
            }
          else
            {
              t = m_36;
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
  t = term_o_36;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm g_16 = NULL;
  t = pass_verbose_0_0(t);
  g_16 = t;
  t = (ATerm) ATinsert(CheckATermList(g_16), term_x_31);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm h_16 = NULL;
  t = pass_verbose_0_0(t);
  h_16 = t;
  t = (ATerm) ATinsert(CheckATermList(h_16), term_x_31);
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
ATerm y_8 (ATerm t)
{
  ATerm q_16 = NULL;
  t = pass_verbose_0_0(t);
  q_16 = t;
  t = (ATerm) ATinsert(CheckATermList(q_16), term_x_31);
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm r_16 = NULL;
  t = pass_verbose_0_0(t);
  r_16 = t;
  t = (ATerm) ATinsert(CheckATermList(r_16), term_x_31);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm z_16 = NULL;
  t = pass_verbose_0_0(t);
  z_16 = t;
  t = (ATerm) ATinsert(CheckATermList(z_16), term_x_31);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm b_17 = NULL;
  t = pass_verbose_0_0(t);
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(b_17), term_x_31);
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
ATerm v_9 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm j_17 = NULL;
  t = pass_verbose_0_0(t);
  j_17 = t;
  t = (ATerm) ATinsert(CheckATermList(j_17), term_x_31);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm k_17 = NULL;
  t = pass_verbose_0_0(t);
  k_17 = t;
  t = (ATerm) ATinsert(CheckATermList(k_17), term_x_31);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm s_17 = NULL;
  t = pass_verbose_0_0(t);
  s_17 = t;
  t = (ATerm) ATinsert(CheckATermList(s_17), term_x_31);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm t_17 = NULL;
  t = pass_verbose_0_0(t);
  t_17 = t;
  t = (ATerm) ATinsert(CheckATermList(t_17), term_x_31);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,y_17 = NULL;
  y_17 = t;
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_18 = ATgetArgument(t, 0);
            {
              ATerm j_11 = NULL,u_4 = NULL;
              t = SSLgetAnnotations(y_17);
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_18);
              u_4 = t;
              t = SSLsetAnnotations(u_4, j_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_17;
          }
        LocalPopChoice(v_36);
        t = xtc_transform_file_2_0(l_10, m_10, t);
      }
    else
      {
        t = u_36;
        t = xtc_transform_term_2_0(o_10, q_10, t);
      }
    t = bound_unbound_vars_0_0(t);
    v_17 = t;
    {
      ATerm y_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              m_18 = ATgetArgument(t, 0);
              {
                ATerm n_11 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(v_17);
                n_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_18);
                v_4 = t;
                t = SSLsetAnnotations(v_4, n_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = v_17;
            }
          LocalPopChoice(z_36);
          t = xtc_transform_file_2_0(r_10, s_10, t);
        }
      else
        {
          t = y_36;
          t = xtc_transform_term_2_0(u_10, v_10, t);
        }
      u_17 = t;
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                h_19 = ATgetArgument(t, 0);
                {
                  ATerm r_11 = NULL,w_4 = NULL;
                  t = SSLgetAnnotations(u_17);
                  r_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, h_19);
                  w_4 = t;
                  t = SSLsetAnnotations(w_4, r_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_17;
              }
            LocalPopChoice(b_37);
            t = xtc_transform_file_2_0(w_10, y_10, t);
          }
        else
          {
            t = a_37;
            t = xtc_transform_term_2_0(z_10, a_11, t);
          }
        t = if_keep4_1_0(c_11, t);
      }
    }
  }
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm g_18 = NULL;
  t = pass_verbose_0_0(t);
  g_18 = t;
  t = (ATerm) ATinsert(CheckATermList(g_18), term_x_31);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm h_18 = NULL;
  t = pass_verbose_0_0(t);
  h_18 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), term_x_31);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm o_18 = NULL;
  t = pass_verbose_0_0(t);
  o_18 = t;
  t = (ATerm) ATinsert(CheckATermList(o_18), term_x_31);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm p_18 = NULL;
  t = pass_verbose_0_0(t);
  p_18 = t;
  t = (ATerm) ATinsert(CheckATermList(p_18), term_x_31);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm l_19 = NULL;
  t = pass_verbose_0_0(t);
  l_19 = t;
  t = (ATerm) ATinsert(CheckATermList(l_19), term_x_31);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm m_19 = NULL;
  t = pass_verbose_0_0(t);
  m_19 = t;
  t = (ATerm) ATinsert(CheckATermList(m_19), term_x_31);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  o_19 = t;
  {
    ATerm g_37 = t;
    int h_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            u_19 = ATgetArgument(t, 0);
            {
              ATerm f_12 = NULL,x_4 = NULL;
              t = SSLgetAnnotations(o_19);
              f_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
              x_4 = t;
              t = SSLsetAnnotations(x_4, f_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_19;
          }
        LocalPopChoice(h_37);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = g_37;
        t = xtc_transform_term_2_0(k_11, l_11, t);
      }
    n_19 = t;
    {
      ATerm i_37 = t;
      int l_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              f_20 = ATgetArgument(t, 0);
              {
                ATerm z_12 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(n_19);
                z_12 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
                h_5 = t;
                t = SSLsetAnnotations(h_5, z_12);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = n_19;
            }
          LocalPopChoice(l_37);
          t = xtc_transform_file_2_0(m_11, o_11, t);
        }
      else
        {
          t = i_37;
          t = xtc_transform_term_2_0(p_11, q_11, t);
        }
      t = if_keep2_1_0(s_11, t);
    }
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_n_37;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm y_19 = NULL;
  t = pass_verbose_0_0(t);
  y_19 = t;
  t = (ATerm) ATinsert(CheckATermList(y_19), term_x_31);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_n_37;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm z_19 = NULL;
  t = pass_verbose_0_0(t);
  z_19 = t;
  t = (ATerm) ATinsert(CheckATermList(z_19), term_x_31);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_x_31);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_x_31);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm j_20 = NULL,l_20 = NULL;
  l_20 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_20 = ATgetArgument(t, 0);
            {
              ATerm f_13 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(l_20);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_20);
              i_5 = t;
              t = SSLsetAnnotations(i_5, f_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_20;
          }
        LocalPopChoice(t_37);
        t = xtc_transform_file_2_0(l_12, m_12, t);
      }
    else
      {
        t = s_37;
        t = xtc_transform_term_2_0(c_13, d_13, t);
      }
    t = if_keep5_1_0(e_13, t);
    j_20 = t;
    {
      ATerm u_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              h_21 = ATgetArgument(t, 0);
              {
                ATerm j_13 = NULL,k_5 = NULL;
                t = SSLgetAnnotations(j_20);
                j_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_21);
                k_5 = t;
                t = SSLsetAnnotations(k_5, j_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = j_20;
            }
          LocalPopChoice(v_37);
          t = xtc_transform_file_2_0(h_13, i_13, t);
        }
      else
        {
          t = u_37;
          t = xtc_transform_term_2_0(k_13, l_13, t);
        }
      t = if_keep5_1_0(m_13, t);
    }
  }
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm a_21 = NULL;
  t = pass_verbose_0_0(t);
  a_21 = t;
  t = (ATerm) ATinsert(CheckATermList(a_21), term_x_31);
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_x_31);
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = save_as_1_0(g_13, t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm l_21 = NULL;
  t = pass_verbose_0_0(t);
  l_21 = t;
  t = (ATerm) ATinsert(CheckATermList(l_21), term_x_31);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_x_31);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = save_as_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t_21 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_21 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(t_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_21);
              r_5 = t;
              t = SSLsetAnnotations(r_5, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_21;
          }
        LocalPopChoice(z_37);
        t = xtc_transform_file_2_0(s_13, t_13, t);
      }
    else
      {
        t = y_37;
        t = xtc_transform_term_2_0(u_13, w_13, t);
      }
    t = if_keep3_1_0(x_13, t);
    s_21 = t;
    {
      ATerm b_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              j_22 = ATgetArgument(t, 0);
              {
                ATerm r_13 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(s_21);
                r_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
                t_5 = t;
                t = SSLsetAnnotations(t_5, r_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = s_21;
            }
          LocalPopChoice(d_38);
          t = xtc_transform_file_2_0(a_14, b_14, t);
        }
      else
        {
          t = b_38;
          t = xtc_transform_term_2_0(c_14, f_14, t);
        }
      t = if_keep3_1_0(g_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(l_14, t);
      r_21 = t;
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                t_22 = ATgetArgument(t, 0);
                {
                  ATerm v_13 = NULL,u_5 = NULL;
                  t = SSLgetAnnotations(r_21);
                  v_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, v_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_21;
              }
            LocalPopChoice(g_38);
            t = xtc_transform_file_2_0(t_14, v_14, t);
          }
        else
          {
            t = f_38;
            t = xtc_transform_term_2_0(x_14, c_15, t);
          }
        t = if_keep3_1_0(d_15, t);
      }
    }
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm a_22 = NULL;
  t = pass_verbose_0_0(t);
  a_22 = t;
  t = (ATerm) ATinsert(CheckATermList(a_22), term_x_31);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm b_22 = NULL;
  t = pass_verbose_0_0(t);
  b_22 = t;
  t = (ATerm) ATinsert(CheckATermList(b_22), term_x_31);
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = save_as_1_0(y_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_x_31);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm n_22 = NULL;
  t = pass_verbose_0_0(t);
  n_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), term_x_31);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = save_as_1_0(k_14, t);
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = save_as_1_0(r_14, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm x_22 = NULL;
  t = pass_verbose_0_0(t);
  x_22 = t;
  t = (ATerm) ATinsert(CheckATermList(x_22), term_x_31);
  return(t);
}
ATerm x_14 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm y_22 = NULL;
  t = pass_verbose_0_0(t);
  y_22 = t;
  t = (ATerm) ATinsert(CheckATermList(y_22), term_x_31);
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = save_as_1_0(e_15, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  {
    ATerm o_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_23 = ATgetArgument(t, 0);
            {
              ATerm z_13 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(a_23);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_23);
              v_5 = t;
              t = SSLsetAnnotations(v_5, z_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_23;
          }
        LocalPopChoice(p_38);
        t = xtc_transform_file_2_0(i_15, k_15, t);
      }
    else
      {
        t = o_38;
        t = xtc_transform_term_2_0(m_15, n_15, t);
      }
    t = if_keep1_1_0(p_15, t);
    z_22 = t;
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_23 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              p_23 = ATgetArgument(t, 0);
              {
                ATerm d_14 = NULL,w_5 = NULL;
                t = SSLgetAnnotations(z_22);
                d_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
                w_5 = t;
                t = SSLsetAnnotations(w_5, d_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = z_22;
            }
          LocalPopChoice(r_38);
          t = xtc_transform_file_2_0(w_15, y_15, t);
        }
      else
        {
          t = q_38;
          t = xtc_transform_term_2_0(a_16, b_16, t);
        }
      t = if_keep1_1_0(d_16, t);
    }
  }
  return(t);
}
ATerm i_15 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm i_23 = NULL;
  t = pass_verbose_0_0(t);
  i_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), term_x_31);
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm j_23 = NULL;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), term_x_31);
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = save_as_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm r_23 = NULL;
  t = pass_verbose_0_0(t);
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), term_x_31);
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_x_31);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = save_as_1_0(e_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = term_w_38;
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
  t = term_x_38;
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_y_38);
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_y_38);
  return(t);
}
ATerm save_as_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  {
    ATerm f_16 (ATerm t)
    {
      t = get_outfile_1_0(p_73, t);
      if(((v_24 != NULL) && (v_24 != t)))
        _fail(t);
      else
        v_24 = t;
      return(t);
    }
    t = copy_to_1_0(f_16, t);
    {
      ATerm c_39 = t;
      int d_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_25 = NULL,g_25 = NULL;
          g_25 = t;
          if(match_cons(t, sym_FILE_1))
            {
              f_25 = ATgetArgument(t, 0);
              {
                ATerm u_14 = NULL,z_7 = NULL;
                t = SSLgetAnnotations(g_25);
                u_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
                z_7 = t;
                t = SSLsetAnnotations(z_7, u_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = g_25;
            }
          LocalPopChoice(d_39);
          t = xtc_transform_file_2_0(j_16, k_16, t);
        }
      else
        {
          t = c_39;
          t = xtc_transform_term_2_0(l_16, m_16, t);
        }
      {
        ATerm p_16 (ATerm t)
        {
          ATerm j_25 = NULL;
          t = term_e_39;
          j_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), term_e_39);
          t = b_13(not_null(v_24), j_25, t);
          if(((w_24 != NULL) && (w_24 != t)))
            _fail(t);
          else
            w_24 = t;
          return(t);
        }
        t = copy_to_1_0(p_16, t);
        t = term_z_29;
        y_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_24)), term_m_39), not_null(v_24)), term_g_39));
        z_24 = t;
        t = SSL_printnl(y_24, z_24);
        t = x_24;
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  {
    ATerm r_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_25, term_y_29);
        t = geq_0_0(t);
        t = m_25;
        t = t_96(t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = r_39;
        t = m_25;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = term_x_29;
  {
    ATerm a_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = a_40;
        t = term_a_32;
      }
    r_25 = t;
    t = term_a_32;
    t_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_25, term_a_32);
    t = i_12(r_25, t_25, t);
    s_25 = t;
    t = SSL_int_to_string(s_25);
    q_25 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, q_25), term_x_29);
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
ATerm a_12 (ATerm r_44, ATerm s_44, ATerm t)
{
  t = SSL_execvp(r_44, s_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm s_15 = NULL,t_15 = NULL;
        t = SSL_int_to_string(c_27);
        s_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_40), s_15), term_e_40);
        t_15 = t;
        t = SSL_concat_strings(t_15);
      }
    }
  else
    {
      ATerm a_17 = NULL,g_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_27 = ATgetArgument(t, 0);
          d_27 = ATgetArgument(t, 1);
          e_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_27);
      a_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_27), term_i_40), a_17), term_g_40), c_27);
      g_17 = t;
      t = SSL_concat_strings(g_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm k_27 = NULL;
  ATerm t_16 (ATerm t)
  {
    t = v_81(t);
    if(((k_27 != NULL) && (k_27 != t)))
      _fail(t);
    else
      k_27 = t;
    return(t);
  }
  t = fetch_1_0(t_16, t);
  t = not_null(k_27);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_16 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_40 = ATgetArgument(t, 0);
              if((l_27 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_40 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_46), term_b_46), term_x_45), term_l_45), term_i_45), term_e_45), term_a_45), term_w_44), term_q_44), term_m_44), term_h_44), term_a_44), term_o_43), term_j_43), term_e_43), term_x_42), term_r_42), term_m_42), term_g_42), term_b_42), term_x_41), term_s_41), term_o_41), term_k_41), term_g_41), term_a_41), term_w_40), term_t_40);
        t = fetch_elem_1_0(u_16, t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_27);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_27 = NULL,k_28 = NULL;
  u_27 = t;
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_46 = ATgetArgument(t, 0);
            k_28 = ATgetArgument(t, 1);
            {
              ATerm j_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_46);
        {
          ATerm k_46 = t;
          int l_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL,j_18 = NULL,t_18 = NULL;
              t = k_28;
              {
                ATerm m_46 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_46;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                e_18 = t;
                t = term_z_29;
                j_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, e_18), term_n_46);
                t_18 = t;
                t = SSL_printnl(j_18, t_18);
                t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, e_18), term_n_46));
              }
              ;
              LocalPopChoice(l_46);
            }
          else
            {
              t = k_46;
              t = u_27;
            }
        }
      }
    else
      {
        t = g_46;
        t = u_27;
      }
    t = u_27;
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
  ATerm w_28 = NULL,x_28 = NULL;
  x_28 = t;
  t = fork_0_0(t);
  w_28 = t;
  {
    ATerm o_46 = t;
    int p_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_28;
        t = d_97(t);
        ;
        LocalPopChoice(p_46);
      }
    else
      {
        t = o_46;
        t = SSL_waitpid(w_28);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_46 = ATgetArgument(t, 0);
            if(((ATgetType(q_46) != AT_INT) || (ATgetInt((ATermInt) q_46) != 0)))
              _fail(t);
            {
              ATerm r_46 = ATgetArgument(t, 1);
            }
            {
              ATerm s_46 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_28;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL;
  a_29 = t;
  t = y_103(t);
  t = xtc_find_0_0(t);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
  {
    ATerm w_16 (ATerm t)
    {
      ATerm d_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_28, a_29);
      t = a_12(z_28, a_29, t);
      t = term_l_30;
      d_29 = t;
      t = SSL_exit(d_29);
      return(t);
    }
    t = fork_and_wait_1_0(w_16, t);
    t = a_29;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,w_29 = NULL;
  t_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_18 = NULL,y_18 = NULL;
      t = t_29;
      t = xtc_new_file_0_0(t);
      x_18 = t;
      t = p_0(t);
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, (ATerm) ATinsert(ATinsert(ATempty, x_18), term_i_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(x_18);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_18);
    }
  else
    {
      ATerm j_19 = NULL,p_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_29;
      t = xtc_new_file_0_0(t);
      j_19 = t;
      t = p_0(t);
      p_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_19), term_i_30), w_29), term_t_46));
      t = conc_0_0(t);
      t = xtc_command_1_0(n_0, t);
      t = SSL_close_file(j_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_19);
    }
  return(t);
}
ATerm comp_0_2 (ATerm q_18, ATerm r_18, ATerm t)
{
  ATerm z_46 = t;
  int a_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL,h_39 = NULL;
      h_39 = t;
      if(match_cons(t, sym_FILE_1))
        {
          z_38 = ATgetArgument(t, 0);
          {
            ATerm h_26 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(h_39);
            h_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, z_38);
            n_8 = t;
            t = SSLsetAnnotations(n_8, h_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_39;
        }
      LocalPopChoice(a_47);
      {
        ATerm x_16 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm y_16 (ATerm t)
        {
          ATerm n_39 = NULL;
          t = pass_verbose_0_0(t);
          n_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), n_39), (ATerm) ATinsert(ATempty, term_x_31));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(x_16, y_16, t);
      }
    }
  else
    {
      t = z_46;
      {
        ATerm d_17 (ATerm t)
        {
          t = q_18;
          return(t);
        }
        ATerm h_17 (ATerm t)
        {
          ATerm p_39 = NULL;
          t = pass_verbose_0_0(t);
          p_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_18), p_39), (ATerm) ATinsert(ATempty, term_x_31));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_17, h_17, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  m_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_31;
      t = o_87(t);
    }
  else
    {
      ATerm s_31 = NULL,t_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_31 = ATgetFirst((ATermList) t);
          o_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_31;
      t = q_87(t);
      s_31 = t;
      t = o_31;
      t = foldr_3_0(o_87, p_87, q_87, t);
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_31, t_31);
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
ATerm l_17 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_31), term_b_47);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_b_47;
  t = get_config_0_0(t);
  t = foldr_3_0(i_17, conc_0_0, l_17, t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = term_d_47;
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_x_31);
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = term_d_47;
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm j_21 = NULL;
  t = pass_verbose_0_0(t);
  j_21 = t;
  t = (ATerm) ATinsert(CheckATermList(j_21), term_x_31);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = get_outfile_1_0(x_17, t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_e_47;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  {
    ATerm g_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
        t = term_j_47;
        t = get_config_0_0(t);
        t = d_31;
        {
          ATerm l_47 = t;
          int n_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_31;
              {
                ATerm s_47 = t;
                int t_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        y_20 = ATgetArgument(t, 0);
                        {
                          ATerm c_22 = NULL,p_8 = NULL;
                          t = SSLgetAnnotations(d_31);
                          c_22 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, y_20);
                          p_8 = t;
                          t = SSLsetAnnotations(p_8, c_22);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = d_31;
                      }
                    LocalPopChoice(t_47);
                    t = xtc_transform_file_2_0(n_17, o_17, t);
                  }
                else
                  {
                    t = s_47;
                    t = xtc_transform_term_2_0(p_17, r_17, t);
                  }
              }
              ;
              LocalPopChoice(n_47);
            }
          else
            {
              t = l_47;
              {
                ATerm k_21 = NULL,m_21 = NULL,n_21 = NULL;
                t = term_z_29;
                m_21 = t;
                t = (ATerm) ATinsert(ATempty, term_u_47);
                n_21 = t;
                t = SSL_printnl(m_21, n_21);
                t = term_a_32;
                k_21 = t;
                t = SSL_exit(k_21);
                t = (ATerm) ATinsert(ATempty, term_u_47);
              }
            }
          t = copy_to_1_0(w_17, t);
          q_20 = t;
          t = term_z_29;
          r_20 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_47));
          s_20 = t;
          t = SSL_printnl(r_20, s_20);
          t = q_20;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(i_47);
      }
    else
      {
        t = g_47;
        t = d_31;
      }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL;
        t = term_t_33;
        t = get_config_0_0(t);
        f_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_32, term_b_33);
        t = geq_0_0(t);
        t = d_32;
        t = u_96(t);
        ;
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        t = d_32;
      }
  }
  return(t);
}
ATerm x_11 (ATerm o_73 (ATerm), ATerm w_18, ATerm t)
{
  ATerm h_32 = NULL;
  t = term_y_47;
  t = o_73(t);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(w_18), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_z_47, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_32), (ATerm) ATempty))))));
  return(t);
}
ATerm y_11 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_write_term_to_stream_baf(i_42, j_42);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm z_11 (ATerm g_94 (ATerm), ATerm e_440, ATerm q_42, ATerm t)
{
  ATerm k_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_440, term_a_48);
  t = open_stream_0_0(t);
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_32, q_42);
  t = g_94(t);
  t = fclose_0_0(t);
  t = q_42;
  return(t);
}
ATerm c_12 (ATerm n_92 (ATerm), ATerm m_37, ATerm k_37, ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  t = n_92(t);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_32, m_37, k_37);
  t = y_12(l_32, m_37, k_37, t);
  {
    ATerm b_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_32 = NULL;
        t = term_e_48;
        v_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_32, term_e_48);
        t = x_12(l_32, v_32, t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = b_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_32 = ATgetFirst((ATermList) t);
        q_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_48;
    t_32 = t;
    t = (ATerm) ATinsert(CheckATermList(q_32), (ATerm) ATinsert(CheckATermList(m_32), m_37));
    u_32 = t;
    t = SSL_table_put(l_32, t_32, u_32);
    t = s_32;
  }
  return(t);
}
ATerm r_33 (ATerm a_33, ATerm t)
{
  t = a_33;
  {
    ATerm f_48 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_48 = ATgetArgument(t, 0);
            ATerm j_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_48;
      }
    t = term_k_48;
    t = debug_1_0(b_18, t);
    t = (ATerm) ATmakeAppl(sym__2, a_33, term_a_48);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_33 (ATerm c_33, ATerm e_33, ATerm g_33, ATerm t)
{
  t = SSL_open_file(c_33, e_33);
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,q_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
      {
        ATerm p_48 = t;
        int q_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_33(m_33, t);
            ;
            LocalPopChoice(q_48);
          }
        else
          {
            t = p_48;
            t = s_33(n_33, q_33, m_33, t);
          }
      }
    }
  else
    {
      t = r_33(m_33, t);
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
  ATerm u_33 = NULL,y_33 = NULL,a_34 = NULL;
  t = term_y_47;
  t = new_0_0(t);
  u_33 = t;
  t = term_r_48;
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, term_r_48);
  t = b_13(u_33, y_33, t);
  a_34 = t;
  {
    ATerm u_48 = t;
    int w_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_48);
        d_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, (ATerm) ATinsert(ATempty, term_x_48));
        t = t_12(a_34, d_34, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_48);
      }
    else
      {
        t = u_48;
        t = a_34;
      }
  }
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  t = new_file_0_0(t);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, term_a_48);
  t = open_file_0_0(t);
  t = term_y_47;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_34, term_y_47);
  t = c_12(d_18, h_34, i_34, t);
  t = h_34;
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm m_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      if(match_cons(b_49, sym_Stream_1))
        {
          m_34 = ATgetArgument(b_49, 0);
        }
      else
        _fail(t);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(m_34, o_34, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  t = xtc_new_file_0_0(t);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_34, j_34);
  t = z_11(f_18, k_34, j_34, t);
  t = SSL_close_file(k_34);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_49;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_48);
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, (ATerm) ATinsert(ATempty, term_x_48));
      t = t_12(s_34, w_34, t);
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
ATerm i_18 (ATerm t)
{
  t = debug_1_0(k_18, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_d_49;
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = save_as_1_0(v_18, t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_f_49;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm z_34 = NULL,b_35 = NULL;
  b_35 = t;
  {
    ATerm i_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 (ATerm t)
        {
          ATerm d_35 = NULL;
          ATerm n_18 (ATerm t)
          {
            t = not_null(z_34);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              d_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_11(n_18, d_35, t);
          return(t);
        }
        t = term_n_49;
        t = get_config_0_0(t);
        if(((z_34 != NULL) && (z_34 != t)))
          _fail(t);
        else
          z_34 = t;
        t = if_verbose2_1_0(i_18, t);
        t = b_35;
        t = xtc_io_transform_1_0(l_18, t);
        ;
        LocalPopChoice(j_49);
      }
    else
      {
        t = i_49;
        t = b_35;
      }
    t = if_keep3_1_0(u_18, t);
  }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  {
    ATerm o_49 = t;
    int p_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_35);
        ;
        LocalPopChoice(p_49);
      }
    else
      {
        t = o_49;
        t = r_35;
      }
  }
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  ATerm z_18 (ATerm t)
  {
    ATerm k_35 = NULL,l_35 = NULL,n_35 = NULL;
    k_35 = t;
    t = term_y_48;
    l_35 = t;
    t = term_e_48;
    n_35 = t;
    t = term_r_49;
    t = x_12(l_35, n_35, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_35 != NULL) && (i_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_35 = ATgetFirst((ATermList) t);
        {
          ATerm v_49 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_35;
    t = map_1_0(a_19, t);
    t = k_35;
    t = end_scope_1_0(c_19, t);
    return(t);
  }
  t = repeat_1_0(z_18, t);
  j_35 = t;
  t = SSL_exit(j_35);
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm w_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_49);
    }
  else
    {
      t = w_49;
      t = term_w_30;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(e_19, t);
  t = term_r_29;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  t = n_73(t);
  v_35 = t;
  t = term_z_49;
  t = get_config_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, v_35);
  t = b_13(w_35, v_35, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_50 = t;
    int c_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        t = w_36;
        t = r_0(t);
        d_23 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_23;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_23;
          }
        t = (ATerm) ATmakeAppl(sym__2, x_36, d_23);
        t = k_12(x_36, d_23, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_36);
        ;
        LocalPopChoice(c_50);
      }
    else
      {
        t = a_50;
        {
          ATerm h_50 = t;
          int i_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_24 = NULL;
              t = w_36;
              t = r_0(t);
              j_24 = t;
              {
                ATerm j_50 = t;
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
                            if((x_36 != t))
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
                    t = j_50;
                  }
                t = (ATerm) ATmakeAppl(sym__2, x_36, j_24);
                t = k_12(x_36, j_24, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_36);
              }
              ;
              LocalPopChoice(i_50);
            }
          else
            {
              t = h_50;
              t = w_36;
              t = r_0(t);
              if((x_36 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_36);
            }
        }
      }
  }
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = get_outfile_1_0(g_19, t);
  return(t);
}
ATerm g_19 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,v_25 = NULL,y_25 = NULL;
        t = term_q_50;
        t = get_config_0_0(t);
        t = c_38;
        t = copy_to_1_0(f_19, t);
        u_25 = t;
        t = term_z_29;
        v_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_50));
        y_25 = t;
        t = SSL_printnl(v_25, y_25);
        t = u_25;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
        t = c_38;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm s_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  t = term_t_33;
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        t = term_a_32;
      }
    u_39 = t;
    t = term_a_32;
    w_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_39, term_a_32);
    t = i_12(u_39, w_39, t);
    v_39 = t;
    t = SSL_int_to_string(v_39);
    s_39 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, s_39), term_t_33);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,b_40 = NULL,d_40 = NULL,h_40 = NULL;
  d_40 = t;
  t = term_x_50;
  x_39 = t;
  t = d_40;
  {
    ATerm z_50 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_51);
      }
    else
      {
        t = z_50;
        t = term_z_49;
        t = get_config_0_0(t);
      }
    h_40 = t;
    t = d_40;
    t = pass_keep_0_0(t);
    z_39 = t;
    t = term_d_51;
    t = get_config_0_0(t);
    b_40 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_39), b_40), (ATerm) ATinsert(ATinsert(ATempty, h_40), term_e_51));
    t = concat_0_0(t);
    y_39 = t;
    t = d_40;
    t = comp_0_2(x_39, y_39, t);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm m_40 = NULL;
  m_40 = t;
  {
    ATerm g_51 = t;
    int j_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        q_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_40, term_b_33);
        t = geq_0_0(t);
        t = m_40;
        t = s_95(t);
        ;
        LocalPopChoice(j_51);
      }
    else
      {
        t = g_51;
        t = m_40;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,e_41 = NULL;
  e_41 = t;
  t = SSL_explode_string(e_41);
  {
    ATerm k_51 = t;
    int l_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_43 (ATerm t)
        {
          ATerm w_42 = NULL,z_42 = NULL,d_43 = NULL;
          w_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_42 = ATgetFirst((ATermList) t);
              d_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm n_51 = t;
            int o_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_27 = NULL,i_27 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(w_42);
                a_27 = t;
                t = d_43;
                t = i_43(t);
                i_27 = t;
                t = (ATerm) ATinsert(CheckATermList(i_27), z_42);
                r_8 = t;
                t = SSLsetAnnotations(r_8, a_27);
                ;
                LocalPopChoice(o_51);
              }
            else
              {
                t = n_51;
                {
                  ATerm r_51 = t;
                  int s_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_27 = NULL,s_8 = NULL;
                      t = SSLgetAnnotations(w_42);
                      t_27 = t;
                      t = z_42;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(d_43), z_42);
                      s_8 = t;
                      t = SSLsetAnnotations(s_8, t_27);
                      ;
                      LocalPopChoice(s_51);
                    }
                  else
                    {
                      t = r_51;
                      {
                        ATerm l_28 = NULL,p_28 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(w_42);
                        l_28 = t;
                        t = z_42;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = d_43;
                        t = j_90(t);
                        p_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(p_28), z_42);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, l_28);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = i_43(t);
        ;
        LocalPopChoice(l_51);
      }
    else
      {
        t = k_51;
      }
    c_41 = t;
    t = SSL_implode_string(c_41);
  }
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = debug_1_0(k_19, t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  t = term_t_51;
  return(t);
}
ATerm q_19 (ATerm t)
{
  t = debug_1_0(r_19, t);
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = term_u_51;
  return(t);
}
ATerm d_12 (ATerm s_18, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,l_44 = NULL;
  t = s_18;
  t = basename_1_0(_id, t);
  e_44 = t;
  t = if_verbose3_1_0(i_19, t);
  t = term_v_51;
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_51, e_44);
  t = a_13(l_44, e_44, t);
  {
    ATerm w_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_30;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(x_51);
      }
    else
      {
        t = w_51;
        t = e_44;
      }
    f_44 = t;
    t = if_verbose3_1_0(q_19, t);
    t = term_z_49;
    g_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_49, f_44);
    t = a_13(g_44, f_44, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_44);
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
  t = term_y_51;
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = if_verbose1_1_0(x_19, t);
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,c_47 = NULL,f_47 = NULL,h_47 = NULL,k_47 = NULL,m_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,p_32 = NULL,r_32 = NULL,w_32 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12(r_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  q_47 = t;
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_48 = ATgetArgument(t, 0);
            {
              ATerm f_29 = NULL,z_8 = NULL;
              t = SSLgetAnnotations(q_47);
              f_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_48);
              z_8 = t;
              t = SSLsetAnnotations(z_8, f_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_47;
          }
        LocalPopChoice(a_52);
        t = xtc_transform_file_2_0(a_20, b_20, t);
      }
    else
      {
        t = z_51;
        t = xtc_transform_term_2_0(c_20, d_20, t);
      }
    p_47 = t;
    {
      ATerm b_52 = t;
      int c_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_48 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              v_48 = ATgetArgument(t, 0);
              {
                ATerm m_29 = NULL,a_9 = NULL;
                t = SSLgetAnnotations(p_47);
                m_29 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_48);
                a_9 = t;
                t = SSLsetAnnotations(a_9, m_29);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_47;
            }
          LocalPopChoice(c_52);
          t = xtc_transform_file_2_0(e_20, g_20, t);
        }
      else
        {
          t = b_52;
          t = xtc_transform_term_2_0(k_20, m_20, t);
        }
      o_47 = t;
      {
        ATerm d_52 = t;
        int e_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                e_49 = ATgetArgument(t, 0);
                {
                  ATerm c_30 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(o_47);
                  c_30 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, e_49);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, c_30);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_47;
              }
            LocalPopChoice(e_52);
            t = xtc_transform_file_2_0(n_20, o_20, t);
          }
        else
          {
            t = d_52;
            t = xtc_transform_term_2_0(p_20, t_20, t);
          }
        h_30 = t;
        t = term_f_52;
        f_30 = t;
        t = h_30;
        t = pass_warnings_0_0(t);
        g_30 = t;
        t = h_30;
        t = comp_0_2(f_30, g_30, t);
        m_47 = t;
        {
          ATerm g_52 = t;
          int i_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_49 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  q_49 = ATgetArgument(t, 0);
                  {
                    ATerm n_30 = NULL,c_9 = NULL;
                    t = SSLgetAnnotations(m_47);
                    n_30 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, q_49);
                    c_9 = t;
                    t = SSLsetAnnotations(c_9, n_30);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_47;
                }
              LocalPopChoice(i_52);
              t = xtc_transform_file_2_0(u_20, v_20, t);
            }
          else
            {
              t = g_52;
              t = xtc_transform_term_2_0(w_20, z_20, t);
            }
          k_47 = t;
          {
            ATerm j_52 = t;
            int k_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_50 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_50 = ATgetArgument(t, 0);
                    {
                      ATerm b_31 = NULL,d_9 = NULL;
                      t = SSLgetAnnotations(k_47);
                      b_31 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_50);
                      d_9 = t;
                      t = SSLsetAnnotations(d_9, b_31);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = k_47;
                  }
                LocalPopChoice(k_52);
                t = xtc_transform_file_2_0(b_21, d_21, t);
              }
            else
              {
                t = j_52;
                t = xtc_transform_term_2_0(f_21, g_21, t);
              }
            h_47 = t;
            {
              ATerm l_52 = t;
              int m_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_50 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      k_50 = ATgetArgument(t, 0);
                      {
                        ATerm k_31 = NULL,e_9 = NULL;
                        t = SSLgetAnnotations(h_47);
                        k_31 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, k_50);
                        e_9 = t;
                        t = SSLsetAnnotations(e_9, k_31);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = h_47;
                    }
                  LocalPopChoice(m_52);
                  t = xtc_transform_file_2_0(i_21, o_21, t);
                }
              else
                {
                  t = l_52;
                  t = xtc_transform_term_2_0(q_21, u_21, t);
                }
              f_47 = t;
              {
                ATerm q_52 = t;
                int r_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_50 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        r_50 = ATgetArgument(t, 0);
                        {
                          ATerm y_31 = NULL,f_9 = NULL;
                          t = SSLgetAnnotations(f_47);
                          y_31 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, r_50);
                          f_9 = t;
                          t = SSLsetAnnotations(f_9, y_31);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = f_47;
                      }
                    LocalPopChoice(r_52);
                    t = xtc_transform_file_2_0(v_21, w_21, t);
                  }
                else
                  {
                    t = q_52;
                    t = xtc_transform_term_2_0(x_21, z_21, t);
                  }
                t = output_frontend_0_0(t);
                c_47 = t;
                {
                  ATerm s_52 = t;
                  int v_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_50 = NULL;
                      if(match_cons(t, sym_FILE_1))
                        {
                          y_50 = ATgetArgument(t, 0);
                          {
                            ATerm i_32 = NULL,h_9 = NULL;
                            t = SSLgetAnnotations(c_47);
                            i_32 = t;
                            t = (ATerm) ATmakeAppl(sym_FILE_1, y_50);
                            h_9 = t;
                            t = SSLsetAnnotations(h_9, i_32);
                          }
                        }
                      else
                        {
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                          t = c_47;
                        }
                      LocalPopChoice(v_52);
                      t = xtc_transform_file_2_0(d_22, e_22, t);
                    }
                  else
                    {
                      t = s_52;
                      t = xtc_transform_term_2_0(f_22, g_22, t);
                    }
                  t = if_keep2_1_0(h_22, t);
                  w_32 = t;
                  t = term_w_52;
                  p_32 = t;
                  t = w_32;
                  t = pass_warnings_0_0(t);
                  r_32 = t;
                  t = w_32;
                  t = comp_0_2(p_32, r_32, t);
                  y_46 = t;
                  {
                    ATerm x_52 = t;
                    int c_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_51 = NULL;
                        if(match_cons(t, sym_FILE_1))
                          {
                            f_51 = ATgetArgument(t, 0);
                            {
                              ATerm y_32 = NULL,i_9 = NULL;
                              t = SSLgetAnnotations(y_46);
                              y_32 = t;
                              t = (ATerm) ATmakeAppl(sym_FILE_1, f_51);
                              i_9 = t;
                              t = SSLsetAnnotations(i_9, y_32);
                            }
                          }
                        else
                          {
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                            t = y_46;
                          }
                        LocalPopChoice(c_53);
                        t = xtc_transform_file_2_0(k_22, l_22, t);
                      }
                    else
                      {
                        t = x_52;
                        t = xtc_transform_term_2_0(o_22, p_22, t);
                      }
                    x_46 = t;
                    {
                      ATerm d_53 = t;
                      int e_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_51 = NULL;
                          if(match_cons(t, sym_FILE_1))
                            {
                              m_51 = ATgetArgument(t, 0);
                              {
                                ATerm h_33 = NULL,j_9 = NULL;
                                t = SSLgetAnnotations(x_46);
                                h_33 = t;
                                t = (ATerm) ATmakeAppl(sym_FILE_1, m_51);
                                j_9 = t;
                                t = SSLsetAnnotations(j_9, h_33);
                              }
                            }
                          else
                            {
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                              t = x_46;
                            }
                          LocalPopChoice(e_53);
                          t = xtc_transform_file_2_0(q_22, r_22, t);
                        }
                      else
                        {
                          t = d_53;
                          t = xtc_transform_term_2_0(s_22, u_22, t);
                        }
                      t = if_keep2_1_0(v_22, t);
                    }
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
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t = term_z_29;
  v_46 = t;
  t = (ATerm) ATinsert(CheckATermList(u_46), term_f_53);
  w_46 = t;
  t = SSL_printnl(v_46, w_46);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(CheckATermList(u_46), term_f_53));
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = term_h_53;
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm g_48 = NULL;
  t = pass_verbose_0_0(t);
  g_48 = t;
  t = (ATerm) ATinsert(CheckATermList(g_48), term_x_31);
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = term_h_53;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm h_48 = NULL;
  t = pass_verbose_0_0(t);
  h_48 = t;
  t = (ATerm) ATinsert(CheckATermList(h_48), term_x_31);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_l_53;
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm z_48 = NULL;
  t = pass_verbose_0_0(t);
  z_48 = t;
  t = (ATerm) ATinsert(CheckATermList(z_48), term_x_31);
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = term_l_53;
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm a_49 = NULL;
  t = pass_verbose_0_0(t);
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), term_x_31);
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_m_53;
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm g_49 = NULL;
  t = pass_verbose_0_0(t);
  g_49 = t;
  t = (ATerm) ATinsert(CheckATermList(g_49), term_x_31);
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = term_m_53;
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm h_49 = NULL;
  t = pass_verbose_0_0(t);
  h_49 = t;
  t = (ATerm) ATinsert(CheckATermList(h_49), term_x_31);
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm s_49 = NULL;
  t = pass_verbose_0_0(t);
  s_49 = t;
  t = (ATerm) ATinsert(CheckATermList(s_49), term_x_31);
  return(t);
}
ATerm w_20 (ATerm t)
{
  t = term_n_53;
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm x_49 = NULL;
  t = pass_verbose_0_0(t);
  x_49 = t;
  t = (ATerm) ATinsert(CheckATermList(x_49), term_x_31);
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm d_50 = NULL;
  t = pass_verbose_0_0(t);
  d_50 = t;
  t = (ATerm) ATinsert(CheckATermList(d_50), term_x_31);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm g_50 = NULL;
  t = pass_verbose_0_0(t);
  g_50 = t;
  t = (ATerm) ATinsert(CheckATermList(g_50), term_x_31);
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm m_50 = NULL;
  t = pass_verbose_0_0(t);
  m_50 = t;
  t = (ATerm) ATinsert(CheckATermList(m_50), term_x_31);
  return(t);
}
ATerm q_21 (ATerm t)
{
  t = term_p_53;
  return(t);
}
ATerm u_21 (ATerm t)
{
  ATerm n_50 = NULL;
  t = pass_verbose_0_0(t);
  n_50 = t;
  t = (ATerm) ATinsert(CheckATermList(n_50), term_x_31);
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm t_50 = NULL;
  t = pass_verbose_0_0(t);
  t_50 = t;
  t = (ATerm) ATinsert(CheckATermList(t_50), term_x_31);
  return(t);
}
ATerm x_21 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm u_50 = NULL;
  t = pass_verbose_0_0(t);
  u_50 = t;
  t = (ATerm) ATinsert(CheckATermList(u_50), term_x_31);
  return(t);
}
ATerm d_22 (ATerm t)
{
  t = term_r_53;
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm a_51 = NULL;
  t = pass_verbose_0_0(t);
  a_51 = t;
  t = (ATerm) ATinsert(CheckATermList(a_51), term_x_31);
  return(t);
}
ATerm f_22 (ATerm t)
{
  t = term_r_53;
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm b_51 = NULL;
  t = pass_verbose_0_0(t);
  b_51 = t;
  t = (ATerm) ATinsert(CheckATermList(b_51), term_x_31);
  return(t);
}
ATerm h_22 (ATerm t)
{
  t = save_as_1_0(i_22, t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm h_51 = NULL;
  t = pass_verbose_0_0(t);
  h_51 = t;
  t = (ATerm) ATinsert(CheckATermList(h_51), term_x_31);
  return(t);
}
ATerm o_22 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm i_51 = NULL;
  t = pass_verbose_0_0(t);
  i_51 = t;
  t = (ATerm) ATinsert(CheckATermList(i_51), term_x_31);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm p_51 = NULL;
  t = pass_verbose_0_0(t);
  p_51 = t;
  t = (ATerm) ATinsert(CheckATermList(p_51), term_x_31);
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm q_51 = NULL;
  t = pass_verbose_0_0(t);
  q_51 = t;
  t = (ATerm) ATinsert(CheckATermList(q_51), term_x_31);
  return(t);
}
ATerm v_22 (ATerm t)
{
  t = save_as_1_0(w_22, t);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = term_x_53;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(s_19, t);
  t = profile_p__2_0(v_19, w_19, t);
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm y_53 = t;
  int z_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_53);
    }
  else
    {
      t = y_53;
    }
  return(t);
}
ATerm c_23 (ATerm t)
{
  t = term_d_54;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_54 = t;
  int g_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_52 = NULL;
      h_52 = t;
      t = SSL_is_string(h_52);
      ;
      LocalPopChoice(g_54);
    }
  else
    {
      t = e_54;
      {
        ATerm j_54 = t;
        int k_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_23, t);
            ;
            LocalPopChoice(k_54);
          }
        else
          {
            t = j_54;
            {
              ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
              n_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_52 = ATgetArgument(t, 0);
                  t = o_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_52 = ATgetArgument(t, 0);
                      t = o_52;
                      {
                        ATerm n_54 = t;
                        int o_54 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_54);
                          }
                        else
                          {
                            t = n_54;
                            t = debug_1_0(c_23, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_52 = NULL,u_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_52 = ATgetArgument(t, 0);
                          p_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_52;
                      t = eval_config_0_0(t);
                      t_52 = t;
                      t = p_52;
                      t = eval_config_0_0(t);
                      u_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
                      t = b_13(t_52, u_52, t);
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
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  t = term_p_54;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_54, y_52);
  t = x_12(z_52, y_52, t);
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_53 = NULL,b_53 = NULL;
        t = eval_config_0_0(t);
        a_53 = t;
        t = term_p_54;
        b_53 = t;
        t = SSL_table_put(b_53, y_52, a_53);
        t = a_53;
        ;
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
      }
  }
  return(t);
}
ATerm e_12 (ATerm s_48, ATerm t_48, ATerm t)
{
  ATerm g_53 = NULL,i_53 = NULL;
  i_53 = t;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
        t = x_12(s_48, t_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_54 = ATgetFirst((ATermList) t);
            g_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_54);
        t = SSL_table_put(s_48, t_48, g_53);
        t = (ATerm) ATmakeAppl(sym__3, s_48, t_48, g_53);
      }
    else
      {
        t = s_54;
        t = SSL_table_remove(s_48, t_48);
        t = (ATerm) ATmakeAppl(sym__2, s_48, t_48);
      }
    t = i_53;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,v_53 = NULL,w_53 = NULL,a_54 = NULL;
  w_53 = t;
  t = k_92(t);
  v_53 = t;
  {
    ATerm w_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_54 = NULL;
        t = term_e_48;
        b_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_53, term_e_48);
        t = x_12(v_53, b_54, t);
        ;
        LocalPopChoice(y_54);
      }
    else
      {
        t = w_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_53 = ATgetFirst((ATermList) t);
        j_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_48;
    a_54 = t;
    t = SSL_table_put(v_53, a_54, j_53);
    t = k_53;
    {
      ATerm e_23 (ATerm t)
      {
        ATerm c_54 = NULL;
        c_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_53, c_54);
        t = e_12(v_53, c_54, t);
        return(t);
      }
      t = map_1_0(e_23, t);
      t = w_53;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_74 (ATerm), ATerm o_74 (ATerm), ATerm t)
{
  ATerm c_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_74(t);
      t = o_74(t);
      ;
      LocalPopChoice(d_55);
    }
  else
    {
      t = c_55;
      t = o_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm f_54 = NULL,h_54 = NULL,i_54 = NULL,l_54 = NULL,m_54 = NULL;
  h_54 = t;
  t = j_92(t);
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_54, term_e_48);
  {
    ATerm e_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_55 = ATgetArgument(t, 0);
            ATerm i_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_48;
        u_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_54, term_e_48);
        t = x_12(f_54, u_54, t);
        ;
        LocalPopChoice(g_55);
      }
    else
      {
        t = e_55;
        t = (ATerm) ATempty;
      }
    i_54 = t;
    t = term_e_48;
    l_54 = t;
    t = (ATerm) ATinsert(CheckATermList(i_54), (ATerm) ATempty);
    m_54 = t;
    t = SSL_table_put(f_54, l_54, m_54);
    t = h_54;
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_55);
        ;
        LocalPopChoice(k_55);
      }
    else
      {
        t = j_55;
        t = f_55;
      }
  }
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm x_54 = NULL;
  ATerm h_23 (ATerm t)
  {
    ATerm z_54 = NULL;
    z_54 = t;
    {
      ATerm l_55 = t;
      int n_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_55 = NULL,b_55 = NULL;
          t = term_y_48;
          a_55 = t;
          t = term_e_48;
          b_55 = t;
          t = term_r_49;
          t = x_12(a_55, b_55, t);
          ;
          LocalPopChoice(n_55);
        }
      else
        {
          t = l_55;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_54 != NULL) && (x_54 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_54 = ATgetFirst((ATermList) t);
          {
            ATerm o_55 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = x_54;
      t = map_1_0(k_23, t);
      t = z_54;
      t = end_scope_1_0(l_23, t);
    }
    return(t);
  }
  t = begin_scope_1_0(f_23, t);
  t = restore_always_2_0(k_103, h_23, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  {
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_55 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        s_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_55, term_a_32);
        t = geq_0_0(t);
        t = m_55;
        t = q_95(t);
        ;
        LocalPopChoice(q_55);
      }
    else
      {
        t = p_55;
        t = m_55;
      }
  }
  return(t);
}
ATerm g_12 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm r_55 = t;
  int t_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_35, z_35);
      ;
      LocalPopChoice(t_55);
    }
  else
    {
      t = r_55;
      t = SSL_addr(y_35, z_35);
    }
  return(t);
}
ATerm i_12 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_36, f_36);
      ;
      LocalPopChoice(z_55);
    }
  else
    {
      t = y_55;
      t = SSL_subtr(e_36, f_36);
    }
  return(t);
}
ATerm j_12 (ATerm p_45, ATerm r_45, ATerm t_45, ATerm v_45, ATerm q_45, ATerm s_45, ATerm u_45, ATerm w_45, ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  t = i_12(p_45, q_45, t);
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
  t = i_12(r_45, s_45, t);
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = i_12(t_45, u_45, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
  t = i_12(v_45, w_45, t);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_55, v_55, w_55, x_55);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,j_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_56 = ATgetArgument(t, 0);
      if(match_cons(a_56, sym__4))
        {
          b_56 = ATgetArgument(a_56, 0);
          c_56 = ATgetArgument(a_56, 1);
          d_56 = ATgetArgument(a_56, 2);
          e_56 = ATgetArgument(a_56, 3);
        }
      else
        _fail(t);
      {
        ATerm h_56 = ATgetArgument(t, 1);
        if(match_cons(h_56, sym__4))
          {
            f_56 = ATgetArgument(h_56, 0);
            g_56 = ATgetArgument(h_56, 1);
            j_56 = ATgetArgument(h_56, 2);
            k_56 = ATgetArgument(h_56, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_12(b_56, c_56, d_56, e_56, f_56, g_56, j_56, k_56, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,t_56 = NULL,u_56 = NULL,w_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,e_57 = NULL,i_57 = NULL;
  u_56 = t;
  t = times_0_0(t);
  l_56 = t;
  t = u_56;
  t = e_99(t);
  m_56 = t;
  t = times_0_0(t);
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, l_56);
  t = diff_times_0_0(t);
  r_56 = t;
  if(match_cons(t, sym__4))
    {
      a_57 = ATgetArgument(t, 0);
      {
        ATerm i_56 = ATgetArgument(t, 1);
      }
      e_57 = ATgetArgument(t, 2);
      {
        ATerm n_56 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_57, e_57);
  t = g_12(a_57, e_57, t);
  i_57 = t;
  t = SSL_TicksToSeconds(i_57);
  p_56 = t;
  t = r_56;
  if(match_cons(t, sym__4))
    {
      ATerm o_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      {
        ATerm s_56 = ATgetArgument(t, 2);
      }
      y_56 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_56, y_56);
  t = g_12(w_56, y_56, t);
  z_56 = t;
  t = SSL_TicksToSeconds(z_56);
  q_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_56), term_x_56), p_56), term_v_56);
  t = d_99(t);
  t = m_56;
  return(t);
}
ATerm debug_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,m_57 = NULL,n_57 = NULL,q_57 = NULL;
  j_57 = t;
  t = e_94(t);
  m_57 = t;
  t = term_z_29;
  n_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_57), m_57);
  q_57 = t;
  t = SSL_printnl(n_57, q_57);
  t = j_57;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,v_57 = NULL,w_57 = NULL;
  r_57 = t;
  t = term_b_57;
  t = get_config_0_0(t);
  s_57 = t;
  t = term_w_30;
  v_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_57), term_l_57), term_k_57), term_h_57), term_g_57), term_f_57), term_d_57), s_57), term_c_57);
  w_57 = t;
  t = SSL_printnl(v_57, w_57);
  t = r_57;
  return(t);
}
ATerm k_12 (ATerm k_39, ATerm l_39, ATerm t)
{
  t = SSL_copy(k_39, l_39);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  ATerm m_23 (ATerm t)
  {
    ATerm y_57 = NULL,z_57 = NULL;
    y_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_57), y_57);
    t = x_12(not_null(x_57), y_57, t);
    z_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_57, z_57);
    return(t);
  }
  if(((x_57 != NULL) && (x_57 != t)))
    _fail(t);
  else
    x_57 = t;
  t = SSL_table_keys(x_57);
  t = map_1_0(m_23, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  {
    ATerm p_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_58 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        d_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_58, term_q_34);
        t = geq_0_0(t);
        t = b_58;
        t = u_95(t);
        ;
        LocalPopChoice(t_57);
      }
    else
      {
        t = p_57;
        t = b_58;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  {
    ATerm u_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_58 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        i_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_58, term_u_34);
        t = geq_0_0(t);
        t = g_58;
        t = t_95(t);
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = u_57;
        t = g_58;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  if(match_cons(t, sym__2))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_58;
        if((t_58 != t))
          {
            _fail(t);
          }
        t = s_58;
        ;
        LocalPopChoice(e_58);
      }
    else
      {
        t = c_58;
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        {
          ATerm f_58 = t;
          int h_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_58, u_58);
              ;
              LocalPopChoice(h_58);
            }
          else
            {
              t = f_58;
              t = SSL_gtr(t_58, u_58);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_59 = NULL;
        t = term_x_29;
        t = get_config_0_0(t);
        a_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_59, term_y_34);
        t = geq_0_0(t);
        t = y_58;
        t = v_95(t);
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = y_58;
      }
  }
  return(t);
}
ATerm n_12 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm b_26, ATerm a_26, ATerm t)
{
  t = r_85(t);
  {
    ATerm n_23 (ATerm t)
    {
      ATerm c_59 = NULL;
      c_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, c_59);
      t = q_85(t);
      return(t);
    }
    t = fetch_1_0(n_23, t);
    t = a_26;
  }
  return(t);
}
ATerm o_12 (ATerm n_85 (ATerm), ATerm x_25, ATerm w_25, ATerm t)
{
  ATerm c_60 (ATerm t)
  {
    ATerm r_59 = NULL,v_59 = NULL,w_59 = NULL;
    r_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_59 = ATgetFirst((ATermList) t);
            w_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_58 = t;
          int m_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_59;
              {
                ATerm o_23 (ATerm t)
                {
                  t = w_25;
                  return(t);
                }
                t = n_12(n_85, o_23, v_59, w_59, t);
                t = c_60(t);
              }
              ;
              LocalPopChoice(m_58);
            }
          else
            {
              t = l_58;
              {
                ATerm b_36 = NULL,g_36 = NULL,s_14 = NULL;
                t = SSLgetAnnotations(r_59);
                b_36 = t;
                t = w_59;
                t = c_60(t);
                g_36 = t;
                t = (ATerm) ATinsert(CheckATermList(g_36), v_59);
                s_14 = t;
                t = SSLsetAnnotations(s_14, b_36);
              }
            }
        }
      }
    return(t);
  }
  t = x_25;
  t = c_60(t);
  return(t);
}
ATerm q_23 (ATerm t)
{
  ATerm n_60 = NULL;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      if((n_60 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
  f_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_58 = ATgetArgument(t, 0);
            ATerm q_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_49, l_49);
        t = x_12(k_49, l_49, t);
        ;
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
        t = (ATerm) ATempty;
      }
    h_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_60, m_49);
    t = o_12(q_23, h_60, m_49, t);
    g_60 = t;
    t = SSL_table_put(k_49, l_49, g_60);
    t = f_60;
  }
  return(t);
}
ATerm q_12 (ATerm m_100 (ATerm), ATerm u_49, ATerm t_49, ATerm t)
{
  ATerm t_23 (ATerm t)
  {
    ATerm r_60 = NULL,s_60 = NULL;
    if(match_cons(t, sym__2))
      {
        r_60 = ATgetArgument(t, 0);
        s_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_49, r_60, s_60);
    t = m_100(t);
    return(t);
  }
  t = t_49;
  t = map_1_0(t_23, t);
  return(t);
}
ATerm t_12 (ATerm s_38, ATerm t_38, ATerm t)
{
  t = SSL_access(s_38, t_38);
  return(t);
}
ATerm p_61 (ATerm e_61, ATerm t)
{
  t = SSL_fclose(e_61);
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
        ATerm r_58 = t;
        int v_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_61);
            ;
            LocalPopChoice(v_58);
          }
        else
          {
            t = r_58;
            t = p_61(l_61, t);
          }
      }
    }
  else
    {
      t = p_61(l_61, t);
    }
  return(t);
}
ATerm r_12 (ATerm o_42, ATerm t)
{
  t = SSL_read_term_from_stream(o_42);
  return(t);
}
ATerm s_12 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm q_61 = NULL;
  t = SSL_fopen(a_39, b_39);
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_61);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_61 = NULL;
  t = SSL_stdin_stream();
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_stdout_stream();
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_61 = NULL;
  t = SSL_stderr_stream();
  v_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_61);
  return(t);
}
ATerm l_63 (ATerm d_62, ATerm t)
{
  ATerm e_62 = NULL;
  t = SSL_explode_term(d_62);
  if(match_cons(t, sym__2))
    {
      ATerm w_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_58 = ATgetArgument(t, 1);
        if(((ATgetType(x_58) == AT_LIST) && !(ATisEmpty(x_58))))
          {
            e_62 = ATgetFirst((ATermList) x_58);
            {
              ATerm z_58 = (ATerm) ATgetNext((ATermList) x_58);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_62;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_62;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_62;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_62;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_63 (ATerm i_62, ATerm j_62, ATerm k_62, ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,o_62 = NULL,s_62 = NULL,a_15 = NULL;
  t = SSLgetAnnotations(k_62);
  o_62 = t;
  t = i_62;
  if(match_cons(t, sym_Path_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_62, j_62);
  a_15 = t;
  t = SSLsetAnnotations(a_15, o_62);
  if(match_cons(t, sym__2))
    {
      l_62 = ATgetArgument(t, 0);
      m_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12(l_62, m_62, t);
  return(t);
}
ATerm o_63 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,b_63 = NULL,f_63 = NULL,b_15 = NULL;
  t = SSLgetAnnotations(x_62);
  b_63 = t;
  t = SSL_is_string(v_62);
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_63, w_62);
  b_15 = t;
  t = SSLsetAnnotations(b_15, b_63);
  if(match_cons(t, sym__2))
    {
      y_62 = ATgetArgument(t, 0);
      z_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12(y_62, z_62, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_59 = ATgetArgument(t, 0);
      ATerm d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_63 = t;
  if(match_cons(t, sym__2))
    {
      j_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
      {
        ATerm e_59 = t;
        int f_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_63(i_63, t);
            ;
            LocalPopChoice(f_59);
          }
        else
          {
            t = e_59;
            {
              ATerm g_59 = t;
              int h_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_63(j_63, k_63, i_63, t);
                  ;
                  LocalPopChoice(h_59);
                }
              else
                {
                  t = g_59;
                  t = o_63(j_63, k_63, i_63, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_63(i_63, t);
    }
  return(t);
}
ATerm u_23 (ATerm t)
{
  t = term_i_59;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_63 = NULL;
      u_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_63, term_l_59);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_59);
    }
  else
    {
      t = j_59;
      t = debug_1_0(u_23, t);
      _fail(t);
    }
  r_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_12(s_63, t);
  q_63 = t;
  t = r_63;
  t = fclose_0_0(t);
  t = q_63;
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = term_m_59;
  return(t);
}
ATerm w_23 (ATerm t)
{
  t = term_n_59;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm o_59 = t;
  int p_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL,x_63 = NULL;
      w_63 = t;
      t = (ATerm) ATinsert(ATempty, term_q_59);
      x_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_63, (ATerm) ATinsert(ATempty, term_q_59));
      t = t_12(w_63, x_63, t);
      LocalPopChoice(p_59);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = o_59;
      {
        ATerm s_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_59 = t;
            if((PushChoice() == 0))
              {
                ATerm y_63 = NULL,z_63 = NULL;
                y_63 = t;
                t = (ATerm) ATinsert(ATempty, term_x_48);
                z_63 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_63, (ATerm) ATinsert(ATempty, term_x_48));
                t = t_12(y_63, z_63, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = y_59;
              }
            t = debug_1_0(v_23, t);
            ;
            LocalPopChoice(x_59);
          }
        else
          {
            t = s_59;
            t = debug_1_0(w_23, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = debug_1_0(y_23, t);
  return(t);
}
ATerm y_23 (ATerm t)
{
  t = term_z_59;
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = debug_1_0(a_24, t);
  return(t);
}
ATerm a_24 (ATerm t)
{
  t = term_a_60;
  return(t);
}
ATerm b_24 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,u_64 = NULL;
  r_64 = t;
  t = term_z_29;
  s_64 = t;
  t = (ATerm) ATinsert(ATempty, term_b_60);
  u_64 = t;
  t = SSL_printnl(s_64, u_64);
  t = r_64;
  return(t);
}
ATerm c_24 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  if(match_cons(t, sym__3))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
      x_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_12(v_64, w_64, x_64, t);
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,b_65 = NULL;
  y_64 = t;
  t = term_z_29;
  z_64 = t;
  t = (ATerm) ATinsert(ATempty, term_d_60);
  b_65 = t;
  t = SSL_printnl(z_64, b_65);
  t = y_64;
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  t = term_z_29;
  e_65 = t;
  t = (ATerm) ATinsert(ATempty, term_b_60);
  f_65 = t;
  t = SSL_printnl(e_65, f_65);
  t = d_65;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
  b_64 = t;
  t = if_verbose5_1_0(x_23, t);
  {
    ATerm e_60 = t;
    if((PushChoice() == 0))
      {
        ATerm o_64 = NULL,q_64 = NULL;
        t = term_i_60;
        o_64 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_64);
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_60, (ATerm) ATmakeAppl(sym_Imported_1, b_64));
        t = x_12(o_64, q_64, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_60;
      }
    e_64 = t;
    t = term_i_60;
    k_64 = t;
    t = term_j_60;
    l_64 = t;
    t = (ATerm) ATinsert(ATempty, b_64);
    m_64 = t;
    t = SSL_table_put(k_64, l_64, m_64);
    t = e_64;
    t = if_verbose4_1_0(z_23, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(b_24, t);
    d_64 = t;
    t = term_i_60;
    j_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_60, d_64);
    t = q_12(c_24, j_64, d_64, t);
    t = if_verbose6_1_0(d_24, t);
    t = term_i_60;
    f_64 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, b_64);
    h_64 = t;
    t = (ATerm) ATempty;
    i_64 = t;
    t = SSL_table_put(f_64, h_64, i_64);
    t = (ATerm) ATmakeAppl(sym__3, term_i_60, (ATerm)ATmakeAppl(sym_Imported_1, b_64), (ATerm) ATempty);
    t = if_verbose4_1_0(e_24, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_65;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_65 = ATgetFirst((ATermList) t);
          w_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_37 = NULL,o_37 = NULL,p_37 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(u_65);
            j_37 = t;
            t = v_65;
            t = q_88(t);
            o_37 = t;
            t = w_65;
            t = filter_1_0(q_88, t);
            p_37 = t;
            t = (ATerm) ATinsert(CheckATermList(p_37), o_37);
            g_15 = t;
            t = SSLsetAnnotations(g_15, j_37);
            ;
            LocalPopChoice(l_60);
          }
        else
          {
            t = k_60;
            t = w_65;
            t = filter_1_0(q_88, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_74 (ATerm), ATerm t)
{
  ATerm d_66 (ATerm t)
  {
    ATerm m_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_74(t);
        t = d_66(t);
        ;
        LocalPopChoice(o_60);
      }
    else
      {
        t = m_60;
      }
    return(t);
  }
  t = d_66(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_60;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_66 = NULL;
            t = term_w_60;
            f_66 = t;
            t = SSL_getenv(f_66);
            ;
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = debug_1_0(g_24, t);
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = term_x_60;
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL;
  t = term_i_60;
  m_66 = t;
  t = term_y_60;
  n_66 = t;
  t = term_z_60;
  t = x_12(m_66, n_66, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_61 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_61;
      }
  }
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = debug_1_0(k_24, t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  t = term_b_61;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_66 = NULL;
  t = if_verbose5_1_0(f_24, t);
  h_66 = t;
  {
    ATerm c_61 = t;
    int d_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_66 = NULL,j_66 = NULL;
        t = term_i_60;
        i_66 = t;
        t = term_j_60;
        j_66 = t;
        t = term_f_61;
        t = x_12(i_66, j_66, t);
        ;
        LocalPopChoice(d_61);
      }
    else
      {
        t = c_61;
        {
          ATerm l_66 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_66 = t;
          t = repeat_1_0(h_24, t);
          t = l_66;
        }
      }
    t = h_66;
    t = if_verbose5_1_0(i_24, t);
  }
  return(t);
}
ATerm l_24 (ATerm t)
{
  t = debug_1_0(m_24, t);
  return(t);
}
ATerm m_24 (ATerm t)
{
  t = term_g_61;
  return(t);
}
ATerm n_67 (ATerm s_66, ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  t = term_i_60;
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_66);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_60, (ATerm) ATmakeAppl(sym_Tool_1, s_66));
  t = x_12(w_66, x_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_61 = ATgetFirst((ATermList) t);
      if(match_cons(h_61, sym__2))
        {
          ATerm j_61 = ATgetArgument(h_61, 0);
          v_66 = ATgetArgument(h_61, 1);
        }
      else
        _fail(t);
      {
        ATerm i_61 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_66;
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = debug_1_0(p_24, t);
  return(t);
}
ATerm p_24 (ATerm t)
{
  t = term_g_61;
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = term_i_60;
  t = table_getlist_0_0(t);
  t = debug_1_0(s_24, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  t = term_m_61;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
      t = if_verbose5_1_0(l_24, t);
      t = xtc_load_0_0(t);
      a_67 = t;
      if(match_cons(t, sym__2))
        {
          y_66 = ATgetArgument(t, 0);
          z_66 = ATgetArgument(t, 1);
          {
            ATerm r_61 = t;
            int t_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
                t = term_i_60;
                e_67 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_66);
                f_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_60, (ATerm) ATmakeAppl(sym_Tool_1, y_66));
                t = x_12(e_67, f_67, t);
                {
                  ATerm n_24 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((z_66 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_67 != NULL) && (d_67 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_67 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_24, t);
                  t = not_null(d_67);
                }
                ;
                LocalPopChoice(t_61);
              }
            else
              {
                t = r_61;
                t = n_67(a_67, t);
              }
          }
        }
      else
        {
          t = n_67(a_67, t);
        }
      t = if_verbose5_1_0(o_24, t);
      ;
      LocalPopChoice(o_61);
    }
  else
    {
      t = n_61;
      {
        ATerm m_67 = NULL,a_38 = NULL,e_38 = NULL;
        m_67 = t;
        t = term_z_29;
        a_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_61), m_67), term_w_61);
        e_38 = t;
        t = SSL_printnl(a_38, e_38);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_61), m_67), term_w_61);
        t = if_verbose5_1_0(q_24, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm u_12 (ATerm v_43, ATerm u_43, ATerm t)
{
  ATerm q_67 = NULL,t_67 = NULL,w_67 = NULL;
  t = v_43;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_61);
      }
    else
      {
        t = y_61;
        t = (ATerm) ATempty;
      }
    t_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_43, t_67);
    t = conc_0_0(t);
    q_67 = t;
    t = term_p_54;
    w_67 = t;
    t = SSL_table_put(w_67, v_43, q_67);
    t = (ATerm) ATmakeAppl(sym__3, term_p_54, v_43, q_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
      t = term_y_47;
      t = m_0(t);
      h_68 = t;
      t = term_a_62;
      i_68 = t;
      t = term_b_62;
      j_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_62, term_b_62, h_68);
      t = y_12(i_68, j_68, h_68, t);
      _fail(t);
    }
  else
    {
      ATerm n_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_68 = ATgetFirst((ATermList) t);
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
      t = b_68;
      t = k_0(t);
      t = f_68;
      t = l_0(t);
      n_68 = t;
      t = (ATerm) ATinsert(CheckATermList(g_68), n_68);
    }
  return(t);
}
ATerm v_12 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm c_62 = t;
  int f_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_68 = NULL;
      t = s_43;
      t = get_config_0_0(t);
      t = term_p_54;
      o_68 = t;
      t = SSL_table_remove(o_68, s_43);
      t = (ATerm) ATmakeAppl(sym__2, term_p_54, s_43);
      ;
      LocalPopChoice(f_62);
    }
  else
    {
      t = c_62;
      t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
      t = a_13(s_43, t_43, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm j_69 (ATerm t)
  {
    ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
    i_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_69 = ATgetFirst((ATermList) t);
        h_69 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_38 = NULL,n_38 = NULL,j_15 = NULL;
          t = SSLgetAnnotations(i_69);
          k_38 = t;
          t = h_69;
          t = j_69(t);
          n_38 = t;
          t = (ATerm) ATinsert(CheckATermList(n_38), g_69);
          j_15 = t;
          t = SSLsetAnnotations(j_15, k_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_69;
        t = z_81(t);
      }
    return(t);
  }
  t = j_69(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_68;
    }
  else
    {
      ATerm t_24 (ATerm t)
      {
        t = not_null(s_68);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_68 = ATgetFirst((ATermList) t);
          if(((s_68 != NULL) && (s_68 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_68;
      t = at_end_1_0(t_24, t);
    }
  return(t);
}
ATerm a_70 (ATerm n_69, ATerm t)
{
  ATerm o_69 = NULL;
  t = SSL_explode_term(n_69);
  if(match_cons(t, sym__2))
    {
      ATerm g_62 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_62) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_69;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  w_69 = t;
  if(match_cons(t, sym__2))
    {
      u_69 = ATgetArgument(t, 0);
      v_69 = ATgetArgument(t, 1);
      {
        ATerm h_62 = t;
        int n_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 (ATerm t)
            {
              t = v_69;
              return(t);
            }
            t = u_69;
            t = at_end_1_0(u_24, t);
            ;
            LocalPopChoice(n_62);
          }
        else
          {
            t = h_62;
            t = a_70(w_69, t);
          }
      }
    }
  else
    {
      t = a_70(w_69, t);
    }
  return(t);
}
ATerm w_12 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  t = w_43;
  {
    ATerm p_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_62);
      }
    else
      {
        t = p_62;
        t = (ATerm) ATempty;
      }
    c_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_70, x_43);
    t = conc_0_0(t);
    b_70 = t;
    t = term_p_54;
    d_70 = t;
    t = SSL_table_put(d_70, w_43, b_70);
    t = (ATerm) ATmakeAppl(sym__3, term_p_54, w_43, b_70);
  }
  return(t);
}
ATerm a_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  q_70 = t;
  t = term_t_46;
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_46, q_70);
  t = a_13(r_70, q_70, t);
  t = term_y_47;
  return(t);
}
ATerm c_25 (ATerm t)
{
  t = term_r_62;
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm s_70 = NULL;
  s_70 = t;
  if(match_string(t, "-o"))
    {
      t = s_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_70;
    }
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  t_70 = t;
  t = term_i_30;
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, t_70);
  t = a_13(u_70, t_70, t);
  t = term_y_47;
  return(t);
}
ATerm k_25 (ATerm t)
{
  t = term_t_62;
  return(t);
}
ATerm l_25 (ATerm t)
{
  ATerm v_70 = NULL;
  v_70 = t;
  if(match_string(t, "-I"))
    {
      t = v_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = v_70;
    }
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
  w_70 = t;
  t = term_d_51;
  x_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_70), term_d_51);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_51, (ATerm) ATinsert(ATinsert(ATempty, w_70), term_d_51));
  t = u_12(x_70, y_70, t);
  t = term_y_47;
  return(t);
}
ATerm p_25 (ATerm t)
{
  t = term_u_62;
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm b_71 = NULL;
  b_71 = t;
  if(match_string(t, "--main"))
    {
      t = b_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = b_71;
    }
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL;
  c_71 = t;
  t = term_n_49;
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_49, c_71);
  t = a_13(d_71, c_71, t);
  t = term_y_47;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = term_a_63;
  return(t);
}
ATerm e_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_26 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  t = term_f_31;
  g_71 = t;
  t = (ATerm) ATinsert(ATempty, f_71);
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATempty, f_71));
  t = w_12(g_71, h_71, t);
  t = term_y_47;
  return(t);
}
ATerm g_26 (ATerm t)
{
  t = term_c_63;
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
  ATerm j_71 = NULL,k_71 = NULL,m_71 = NULL;
  j_71 = t;
  t = term_p_30;
  k_71 = t;
  t = (ATerm) ATinsert(ATempty, j_71);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATempty, j_71));
  t = u_12(k_71, m_71, t);
  t = term_y_47;
  return(t);
}
ATerm k_26 (ATerm t)
{
  t = term_d_63;
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
  ATerm n_71 = NULL,p_71 = NULL,q_71 = NULL;
  n_71 = t;
  t = term_j_30;
  p_71 = t;
  t = (ATerm) ATinsert(ATempty, n_71);
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, (ATerm) ATinsert(ATempty, n_71));
  t = u_12(p_71, q_71, t);
  t = term_y_47;
  return(t);
}
ATerm n_26 (ATerm t)
{
  t = term_e_63;
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
  ATerm r_71 = NULL,s_71 = NULL;
  t = term_q_30;
  r_71 = t;
  t = term_y_47;
  s_71 = t;
  t = term_g_63;
  t = a_13(r_71, s_71, t);
  t = term_y_47;
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_h_63;
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
  ATerm t_71 = NULL,u_71 = NULL;
  t = term_q_50;
  t_71 = t;
  t = term_y_47;
  u_71 = t;
  t = term_n_63;
  t = a_13(t_71, u_71, t);
  t = term_y_47;
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = term_p_63;
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
  ATerm v_71 = NULL,w_71 = NULL;
  t = term_j_47;
  v_71 = t;
  t = term_y_47;
  w_71 = t;
  t = term_t_63;
  t = a_13(v_71, w_71, t);
  t = term_y_47;
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm x_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_26 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  t = SSL_string_to_int(x_71);
  y_71 = t;
  t = term_t_33;
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_33, y_71);
  t = a_13(z_71, y_71, t);
  t = term_y_47;
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = term_a_64;
  return(t);
}
ATerm f_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_27 (ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL;
  a_72 = t;
  t = SSL_string_to_int(a_72);
  b_72 = t;
  t = term_x_33;
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_33, b_72);
  t = a_13(c_72, b_72, t);
  t = term_y_47;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = term_c_64;
  return(t);
}
ATerm j_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_27 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL;
  t = term_t_35;
  d_72 = t;
  t = term_y_47;
  e_72 = t;
  t = term_g_64;
  t = v_12(d_72, e_72, t);
  t = term_y_47;
  return(t);
}
ATerm n_27 (ATerm t)
{
  t = term_n_64;
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
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL;
  h_72 = t;
  t = SSL_string_to_int(h_72);
  i_72 = t;
  t = term_x_29;
  j_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, i_72);
  t = a_13(j_72, i_72, t);
  t = term_y_47;
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = term_p_64;
  return(t);
}
ATerm r_27 (ATerm t)
{
  ATerm k_72 = NULL;
  k_72 = t;
  if(match_string(t, "-S"))
    {
      t = k_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_72;
    }
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL;
  t = term_x_29;
  l_72 = t;
  t = term_r_29;
  m_72 = t;
  t = term_t_64;
  t = a_13(l_72, m_72, t);
  t = term_y_47;
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_a_65;
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm n_72 = NULL;
  n_72 = t;
  if(match_string(t, "-h"))
    {
      t = n_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = n_72;
    }
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  t = term_c_65;
  q_72 = t;
  t = term_y_47;
  r_72 = t;
  t = term_g_65;
  t = a_13(q_72, r_72, t);
  t = term_y_47;
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = term_h_65;
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
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_i_65;
  s_72 = t;
  t = term_y_47;
  t_72 = t;
  t = term_j_65;
  t = a_13(s_72, t_72, t);
  t = term_y_47;
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = term_k_65;
  return(t);
}
ATerm c_28 (ATerm t)
{
  ATerm u_72 = NULL;
  u_72 = t;
  if(match_string(t, "-v"))
    {
      t = u_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = u_72;
    }
  return(t);
}
ATerm d_28 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  t = term_l_65;
  v_72 = t;
  t = term_y_47;
  w_72 = t;
  t = term_m_65;
  t = a_13(v_72, w_72, t);
  t = term_y_47;
  return(t);
}
ATerm e_28 (ATerm t)
{
  t = term_n_65;
  return(t);
}
ATerm f_28 (ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  if(match_string(t, "--warning"))
    {
      t = x_72;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = x_72;
    }
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm y_72 = NULL;
  y_72 = t;
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,l_15 = NULL;
        t = term_b_47;
        t = get_config_0_0(t);
        e_73 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_73 = ATgetFirst((ATermList) t);
            d_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_73);
        b_73 = t;
        t = c_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = d_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_73), c_73);
        l_15 = t;
        t = SSLsetAnnotations(l_15, b_73);
        t = term_b_47;
        z_72 = t;
        t = (ATerm) ATinsert(ATempty, y_72);
        a_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_47, (ATerm) ATinsert(ATempty, y_72));
        t = a_13(z_72, a_73, t);
        ;
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        {
          ATerm f_73 = NULL,g_73 = NULL;
          t = term_b_47;
          f_73 = t;
          t = (ATerm) ATinsert(ATempty, y_72);
          g_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_47, (ATerm) ATinsert(ATempty, y_72));
          t = u_12(f_73, g_73, t);
        }
      }
    t = term_y_47;
  }
  return(t);
}
ATerm h_28 (ATerm t)
{
  t = term_q_65;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm r_65 = t;
  int s_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(a_25, b_25, c_25, t);
      ;
      LocalPopChoice(s_65);
    }
  else
    {
      t = r_65;
      {
        ATerm t_65 = t;
        int x_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_25, e_25, k_25, t);
            ;
            LocalPopChoice(x_65);
          }
        else
          {
            t = t_65;
            {
              ATerm y_65 = t;
              int z_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(l_25, n_25, p_25, t);
                  ;
                  LocalPopChoice(z_65);
                }
              else
                {
                  t = y_65;
                  {
                    ATerm a_66 = t;
                    int b_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(z_25, c_26, d_26, t);
                        ;
                        LocalPopChoice(b_66);
                      }
                    else
                      {
                        t = a_66;
                        {
                          ATerm c_66 = t;
                          int e_66 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(e_26, f_26, g_26, t);
                              ;
                              LocalPopChoice(e_66);
                            }
                          else
                            {
                              t = c_66;
                              {
                                ATerm g_66 = t;
                                int k_66 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(i_26, j_26, k_26, t);
                                    ;
                                    LocalPopChoice(k_66);
                                  }
                                else
                                  {
                                    t = g_66;
                                    {
                                      ATerm o_66 = t;
                                      int p_66 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(l_26, m_26, n_26, t);
                                          ;
                                          LocalPopChoice(p_66);
                                        }
                                      else
                                        {
                                          t = o_66;
                                          {
                                            ATerm q_66 = t;
                                            int r_66 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(o_26, p_26, q_26, t);
                                                ;
                                                LocalPopChoice(r_66);
                                              }
                                            else
                                              {
                                                t = q_66;
                                                {
                                                  ATerm t_66 = t;
                                                  int u_66 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(r_26, s_26, t_26, t);
                                                      ;
                                                      LocalPopChoice(u_66);
                                                    }
                                                  else
                                                    {
                                                      t = t_66;
                                                      {
                                                        ATerm b_67 = t;
                                                        int c_67 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(u_26, v_26, w_26, t);
                                                            ;
                                                            LocalPopChoice(c_67);
                                                          }
                                                        else
                                                          {
                                                            t = b_67;
                                                            {
                                                              ATerm g_67 = t;
                                                              int h_67 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(x_26, y_26, z_26, t);
                                                                  ;
                                                                  LocalPopChoice(h_67);
                                                                }
                                                              else
                                                                {
                                                                  t = g_67;
                                                                  {
                                                                    ATerm i_67 = t;
                                                                    int j_67 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(f_27, g_27, h_27, t);
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
                                                                              t = Option_3_0(j_27, m_27, n_27, t);
                                                                              ;
                                                                              LocalPopChoice(l_67);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_67;
                                                                              {
                                                                                ATerm o_67 = t;
                                                                                int p_67 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = ArgOption_3_0(o_27, p_27, q_27, t);
                                                                                    ;
                                                                                    LocalPopChoice(p_67);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_67;
                                                                                    {
                                                                                      ATerm r_67 = t;
                                                                                      int s_67 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(r_27, s_27, v_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(s_67);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = r_67;
                                                                                          {
                                                                                            ATerm u_67 = t;
                                                                                            int v_67 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(w_27, x_27, y_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(v_67);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_67;
                                                                                                {
                                                                                                  ATerm x_67 = t;
                                                                                                  int y_67 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(z_27, a_28, b_28, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(y_67);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = x_67;
                                                                                                      {
                                                                                                        ATerm z_67 = t;
                                                                                                        int a_68 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(c_28, d_28, e_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(a_68);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = z_67;
                                                                                                            t = ArgOption_3_0(f_28, g_28, h_28, t);
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_68), term_g_57), term_y_68), term_x_68), term_w_68), term_g_57), term_v_68), term_u_68), term_t_68), term_p_68), term_m_68), term_l_68), term_k_68), term_d_68), term_c_68);
  return(t);
}
ATerm map_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm y_73 (ATerm t)
  {
    ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
    v_73 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_73;
      }
    else
      {
        ATerm f_39 = NULL,o_39 = NULL,q_39 = NULL,z_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_73 = ATgetFirst((ATermList) t);
            x_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_73);
        f_39 = t;
        t = w_73;
        t = j_81(t);
        o_39 = t;
        t = x_73;
        t = y_73(t);
        q_39 = t;
        t = (ATerm) ATinsert(CheckATermList(q_39), o_39);
        z_15 = t;
        t = SSLsetAnnotations(z_15, f_39);
      }
    return(t);
  }
  t = y_73(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_74 = ATgetFirst((ATermList) t);
      c_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_74 = NULL,h_74 = NULL;
        ATerm i_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_74)), not_null(h_74));
          return(t);
        }
        t = c_74;
        t = i_0(t);
        if(((g_74 != NULL) && (g_74 != t)))
          _fail(t);
        else
          g_74 = t;
        t = b_74;
        t = h_0(t);
        if(((h_74 != NULL) && (h_74 != t)))
          _fail(t);
        else
          h_74 = t;
        t = c_74;
        t = reverse_acc_2_0(h_0, i_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_47;
      t = i_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_74 = NULL;
  t = term_y_47;
  t = g_0(t);
  i_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_69), i_74), term_e_69), term_g_57), term_d_69), term_g_57), term_c_69), term_b_69), term_g_57), term_a_69);
  return(t);
}
ATerm n_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_75), term_k_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_74 = NULL,p_74 = NULL,q_74 = NULL;
  ATerm l_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_69;
      t = get_config_0_0(t);
      m_74 = t;
      ;
      LocalPopChoice(m_69);
    }
  else
    {
      t = l_69;
      {
        ATerm j_28 (ATerm t)
        {
          ATerm r_74 = NULL,s_74 = NULL,x_74 = NULL,i_16 = NULL;
          x_74 = t;
          if(match_cons(t, sym_Program_1))
            {
              s_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_74);
          r_74 = t;
          t = s_74;
          if(((m_74 != NULL) && (m_74 != t)))
            _fail(t);
          else
            m_74 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, s_74);
          i_16 = t;
          t = SSLsetAnnotations(i_16, r_74);
          return(t);
        }
        t = fetch_1_0(j_28, t);
      }
    }
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 (ATerm t)
        {
          t = not_null(m_74);
          return(t);
        }
        t = short_description_1_0(m_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
      }
    t = term_s_69;
    t = echo_0_0(t);
    t = term_a_62;
    p_74 = t;
    t = term_b_62;
    q_74 = t;
    t = term_t_69;
    t = x_12(p_74, q_74, t);
    t = reverse_acc_2_0(_id, n_28, t);
    t = map_1_0(o_28, t);
    {
      ATerm x_69 = t;
      int y_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_75 = NULL;
          ATerm q_28 (ATerm t)
          {
            t = not_null(m_74);
            return(t);
          }
          t = long_description_1_0(q_28, t);
          c_75 = t;
          t = (ATerm) ATinsert(CheckATermList(c_75), term_g_57);
          t = echo_0_0(t);
          ;
          LocalPopChoice(y_69);
        }
      else
        {
          t = x_69;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm h_76 (ATerm t)
  {
    ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
    e_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_76 = ATgetFirst((ATermList) t);
        g_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_69 = t;
      int e_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_40 = NULL,n_40 = NULL,n_16 = NULL;
          t = SSLgetAnnotations(e_76);
          j_40 = t;
          t = f_76;
          t = t_81(t);
          n_40 = t;
          t = (ATerm) ATinsert(CheckATermList(g_76), n_40);
          n_16 = t;
          t = SSLsetAnnotations(n_16, j_40);
          ;
          LocalPopChoice(e_70);
        }
      else
        {
          t = z_69;
          {
            ATerm y_40 = NULL,b_41 = NULL,s_16 = NULL;
            t = SSLgetAnnotations(e_76);
            y_40 = t;
            t = g_76;
            t = h_76(t);
            b_41 = t;
            t = (ATerm) ATinsert(CheckATermList(b_41), f_76);
            s_16 = t;
            t = SSLsetAnnotations(s_16, y_40);
          }
        }
    }
    return(t);
  }
  t = h_76(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,o_76 = NULL;
  m_76 = t;
  {
    ATerm f_70 = t;
    int g_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_70 = ATgetFirst((ATermList) t);
                ATerm i_70 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_76;
          }
        ;
        LocalPopChoice(g_70);
      }
    else
      {
        t = f_70;
        t = (ATerm) ATinsert(ATempty, m_76);
      }
    n_76 = t;
    t = term_w_30;
    o_76 = t;
    t = SSL_printnl(o_76, n_76);
    t = m_76;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_69;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL;
  t = term_j_70;
  u_76 = t;
  t = term_y_47;
  v_76 = t;
  t = term_k_70;
  t = a_13(u_76, v_76, t);
  return(t);
}
ATerm t_28 (ATerm t)
{
  t = term_l_70;
  return(t);
}
ATerm u_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_28 (ATerm t)
{
  ATerm w_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  t = term_j_70;
  b_77 = t;
  t = term_y_47;
  c_77 = t;
  t = term_k_70;
  t = a_13(b_77, c_77, t);
  t = term_l_65;
  w_76 = t;
  t = term_y_47;
  a_77 = t;
  t = term_m_65;
  t = a_13(w_76, a_77, t);
  t = term_m_70;
  return(t);
}
ATerm y_28 (ATerm t)
{
  t = term_n_70;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_70 = t;
  int p_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_28, s_28, t_28, t);
      ;
      LocalPopChoice(p_70);
    }
  else
    {
      t = o_70;
      t = Option_3_0(u_28, v_28, y_28, t);
    }
  return(t);
}
ATerm x_12 (ATerm e_50, ATerm f_50, ATerm t)
{
  t = SSL_table_get(e_50, f_50);
  return(t);
}
ATerm y_12 (ATerm n_48, ATerm o_48, ATerm m_48, ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,k_77 = NULL;
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
  {
    ATerm z_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_71 = ATgetArgument(t, 0);
            ATerm i_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
        t = x_12(n_48, o_48, t);
        ;
        LocalPopChoice(a_71);
      }
    else
      {
        t = z_70;
        t = (ATerm) ATempty;
      }
    i_77 = t;
    t = (ATerm) ATinsert(CheckATermList(i_77), m_48);
    k_77 = t;
    t = SSL_table_put(n_48, o_48, k_77);
    t = h_77;
  }
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_78 = NULL,c_78 = NULL,f_78 = NULL;
      t = term_y_47;
      t = f_0(t);
      b_78 = t;
      t = term_a_62;
      c_78 = t;
      t = term_b_62;
      f_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_62, term_b_62, b_78);
      t = y_12(c_78, f_78, b_78, t);
      _fail(t);
    }
  else
    {
      ATerm j_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_77 = ATgetFirst((ATermList) t);
          a_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_77;
      t = b_0(t);
      t = term_y_47;
      t = d_0(t);
      j_78 = t;
      t = (ATerm) ATinsert(CheckATermList(a_78), j_78);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm k_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,c_17 = NULL;
  t_78 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_78 = ATgetFirst((ATermList) t);
      q_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_78);
  k_78 = t;
  t = p_78;
  t = t_59(t);
  r_78 = t;
  t = q_78;
  t = u_59(t);
  s_78 = t;
  t = (ATerm) ATinsert(CheckATermList(s_78), r_78);
  c_17 = t;
  t = SSLsetAnnotations(c_17, k_78);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm d_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,j_79 = NULL,k_79 = NULL,e_17 = NULL;
  d_79 = t;
  {
    ATerm l_71 = t;
    int o_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_72;
        t = j_100(t);
        ;
        LocalPopChoice(o_71);
      }
    else
      {
        t = l_71;
      }
    t = d_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_79 = ATgetFirst((ATermList) t);
        h_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_79);
    f_79 = t;
    t = term_p_69;
    k_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_69, g_79);
    t = a_13(k_79, g_79, t);
    t = h_79;
    {
      ATerm j_80 (ATerm t)
      {
        ATerm g_72 = t;
        int o_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_72 = t;
            int h_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_79 = NULL;
                p_79 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_79;
                ;
                LocalPopChoice(h_73);
              }
            else
              {
                t = p_72;
                t = j_100(t);
                t = Cons_2_0(_id, j_80, t);
              }
            ;
            LocalPopChoice(o_72);
          }
        else
          {
            t = g_72;
            {
              ATerm b_80 = NULL,c_80 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_80 = ATgetFirst((ATermList) t);
                  c_80 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_80), (ATerm) ATmakeAppl(sym_Undefined_1, b_80));
            }
          }
        return(t);
      }
      t = j_80(t);
      j_79 = t;
      t = (ATerm) ATinsert(CheckATermList(j_79), (ATerm) ATmakeAppl(sym_Program_1, g_79));
      e_17 = t;
      t = SSLsetAnnotations(e_17, f_79);
    }
  }
  return(t);
}
ATerm c_29 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  if(match_string(t, "--help"))
    {
      t = b_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_81;
        }
    }
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm c_81 = NULL,f_81 = NULL;
  t = term_c_65;
  c_81 = t;
  t = term_y_47;
  f_81 = t;
  t = term_g_65;
  t = a_13(c_81, f_81, t);
  t = term_i_73;
  return(t);
}
ATerm g_29 (ATerm t)
{
  t = term_j_73;
  return(t);
}
ATerm h_29 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm q_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
  u_80 = t;
  t = term_a_62;
  x_80 = t;
  t = term_b_62;
  y_80 = t;
  t = (ATerm) ATempty;
  z_80 = t;
  t = SSL_table_put(x_80, y_80, z_80);
  t = u_80;
  {
    ATerm b_29 (ATerm t)
    {
      ATerm k_73 = t;
      int l_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_100(t);
          ;
          LocalPopChoice(l_73);
        }
      else
        {
          t = k_73;
          {
            ATerm m_73 = t;
            int q_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_29, e_29, g_29, t);
                ;
                LocalPopChoice(q_73);
              }
            else
              {
                t = m_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_29, t);
    {
      ATerm r_73 = t;
      int s_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_81 = NULL;
          r_81 = t;
          {
            ATerm t_73 = t;
            int u_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_41 = NULL;
                t = r_81;
                {
                  ATerm z_73 = t;
                  int a_74 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_65;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_74);
                    }
                  else
                    {
                      t = z_73;
                      t = fetch_1_0(h_29, t);
                    }
                  t = r_81;
                  t = default_system_usage_0_0(t);
                  t = term_r_29;
                  u_41 = t;
                  t = SSL_exit(u_41);
                }
                ;
                LocalPopChoice(u_73);
              }
            else
              {
                t = t_73;
                {
                  ATerm c_42 = NULL;
                  t = term_j_70;
                  t = get_config_0_0(t);
                  t = r_81;
                  t = default_system_about_0_0(t);
                  t = term_r_29;
                  c_42 = t;
                  t = SSL_exit(c_42);
                }
              }
          }
          ;
          LocalPopChoice(s_73);
        }
      else
        {
          t = r_73;
          {
            ATerm d_74 = t;
            int e_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_81 = NULL,w_81 = NULL,y_81 = NULL;
                ATerm i_29 (ATerm t)
                {
                  ATerm c_82 = NULL,g_82 = NULL,t_82 = NULL,m_17 = NULL;
                  t_82 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_82);
                  c_82 = t;
                  t = g_82;
                  if(((q_80 != NULL) && (q_80 != t)))
                    _fail(t);
                  else
                    q_80 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_82);
                  m_17 = t;
                  t = SSLsetAnnotations(m_17, c_82);
                  return(t);
                }
                t = fetch_1_0(i_29, t);
                t = term_z_29;
                w_81 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_80)), term_f_74);
                y_81 = t;
                t = SSL_printnl(w_81, y_81);
                t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_80)), term_f_74));
                t = default_system_usage_0_0(t);
                t = term_a_32;
                s_81 = t;
                t = SSL_exit(s_81);
                ;
                LocalPopChoice(e_74);
              }
            else
              {
                t = d_74;
              }
          }
        }
      t_80 = t;
      t = term_a_62;
      v_80 = t;
      t = SSL_table_destroy(v_80);
      t = t_80;
    }
  }
  return(t);
}
ATerm a_13 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm d_83 = NULL;
  t = term_p_54;
  d_83 = t;
  t = SSL_table_put(d_83, p_43, q_43);
  t = (ATerm) ATmakeAppl(sym__3, term_p_54, p_43, q_43);
  return(t);
}
ATerm b_13 (ATerm o_33, ATerm p_33, ATerm t)
{
  t = SSL_strcat(o_33, p_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL;
  u_83 = t;
  t = SSL_explode_string(u_83);
  {
    ATerm j_74 = t;
    int k_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_84 (ATerm t)
        {
          ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
          t_84 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_84 = ATgetFirst((ATermList) t);
              v_84 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm l_74 = t;
            int t_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_42 = NULL,y_42 = NULL,z_17 = NULL;
                t = SSLgetAnnotations(t_84);
                t_42 = t;
                t = v_84;
                t = w_84(t);
                y_42 = t;
                t = (ATerm) ATinsert(CheckATermList(y_42), u_84);
                z_17 = t;
                t = SSLsetAnnotations(z_17, t_42);
                ;
                LocalPopChoice(t_74);
              }
            else
              {
                t = l_74;
                {
                  ATerm n_43 = NULL,a_18 = NULL;
                  t = SSLgetAnnotations(t_84);
                  n_43 = t;
                  t = u_84;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, u_84);
                  a_18 = t;
                  t = SSLsetAnnotations(a_18, n_43);
                }
              }
          }
          return(t);
        }
        t = w_84(t);
        ;
        LocalPopChoice(k_74);
      }
    else
      {
        t = j_74;
        t = (ATerm) ATempty;
      }
    t_83 = t;
    t = SSL_implode_string(t_83);
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
  ATerm a_85 = NULL,b_85 = NULL,d_85 = NULL,e_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,p_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,y_85 = NULL,z_85 = NULL,c_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,m_86 = NULL,p_86 = NULL,s_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL,s_87 = NULL;
  a_85 = t;
  t = term_b_57;
  l_87 = t;
  t = term_v_74;
  s_87 = t;
  t = term_w_74;
  t = a_13(l_87, s_87, t);
  t = term_x_29;
  j_87 = t;
  t = term_a_32;
  k_87 = t;
  t = term_y_74;
  t = a_13(j_87, k_87, t);
  t = term_t_33;
  h_87 = t;
  t = term_r_29;
  i_87 = t;
  t = term_z_74;
  t = a_13(h_87, i_87, t);
  t = term_x_33;
  c_87 = t;
  t = term_y_34;
  d_87 = t;
  t = term_a_75;
  t = a_13(c_87, d_87, t);
  t = term_d_75;
  t = xtc_find_path_0_0(t);
  u_85 = t;
  t = term_e_75;
  t = xtc_find_path_0_0(t);
  v_85 = t;
  t = term_f_75;
  t = xtc_find_path_0_0(t);
  w_85 = t;
  t = term_d_51;
  y_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_85), term_d_51), v_85), term_d_51), u_85), term_d_51);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_85), term_d_51), v_85), term_d_51), u_85), term_d_51));
  t = a_13(y_86, b_87, t);
  t = term_f_31;
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_75), term_g_75);
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, (ATerm) ATinsert(ATinsert(ATempty, term_h_75), term_g_75));
  t = a_13(w_86, x_86, t);
  t = term_i_75;
  t = xtc_find_path_0_0(t);
  t_85 = t;
  t = term_j_75;
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_85, term_j_75);
  t = b_13(t_85, v_86, t);
  j_85 = t;
  t = term_i_75;
  t = xtc_find_path_0_0(t);
  p_85 = t;
  t = term_j_75;
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_85, term_j_75);
  t = b_13(p_85, s_86, t);
  k_85 = t;
  t = term_k_75;
  t = xtc_find_path_0_0(t);
  m_85 = t;
  t = term_j_75;
  p_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_85, term_j_75);
  t = b_13(m_85, p_86, t);
  l_85 = t;
  t = term_p_30;
  i_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_85), term_d_51), k_85), term_d_51), j_85), term_d_51);
  m_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_85), term_d_51), k_85), term_d_51), j_85), term_d_51));
  t = a_13(i_86, m_86, t);
  t = term_i_75;
  t = xtc_find_path_0_0(t);
  i_85 = t;
  t = term_l_75;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_85, term_l_75);
  t = b_13(i_85, h_86, t);
  b_85 = t;
  t = term_k_75;
  t = xtc_find_path_0_0(t);
  e_85 = t;
  t = term_l_75;
  g_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_85, term_l_75);
  t = b_13(e_85, g_86, t);
  d_85 = t;
  t = term_j_30;
  c_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_75), term_p_75), d_85), term_m_75), term_o_75), term_n_75), b_85), term_m_75);
  f_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_75), term_p_75), d_85), term_m_75), term_o_75), term_n_75), b_85), term_m_75));
  t = a_13(c_86, f_86, t);
  t = term_b_47;
  y_85 = t;
  t = (ATerm) ATinsert(ATempty, term_r_75);
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_47, (ATerm) ATinsert(ATempty, term_r_75));
  t = a_13(y_85, z_85, t);
  t = a_85;
  return(t);
}
ATerm j_29 (ATerm t)
{
  ATerm l_89 = NULL;
  l_89 = t;
  t = term_t_46;
  t = get_config_0_0(t);
  t = debug_1_0(k_29, t);
  t = l_89;
  return(t);
}
ATerm k_29 (ATerm t)
{
  t = term_s_75;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm t_75 = t;
    int u_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_87 = NULL,a_88 = NULL,k_88 = NULL;
        t = term_i_65;
        t = get_config_0_0(t);
        t = term_v_75;
        t = xtc_find_0_0(t);
        v_87 = t;
        t = term_w_30;
        k_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_87, term_w_30);
        t = k_12(v_87, k_88, t);
        t = term_r_29;
        a_88 = t;
        t = SSL_exit(a_88);
        ;
        LocalPopChoice(u_75);
      }
    else
      {
        t = t_75;
      }
    {
      ATerm w_75 = t;
      int x_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_88 = NULL;
          t = term_l_65;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_r_29;
          t_88 = t;
          t = SSL_exit(t_88);
          ;
          LocalPopChoice(x_75);
        }
      else
        {
          t = w_75;
        }
      {
        ATerm y_75 = t;
        int z_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_89 = NULL;
            d_89 = t;
            t = term_t_46;
            t = get_config_0_0(t);
            t = d_89;
            ;
            LocalPopChoice(z_75);
          }
        else
          {
            t = y_75;
            {
              ATerm h_89 = NULL,j_89 = NULL,k_89 = NULL;
              t = term_z_29;
              j_89 = t;
              t = (ATerm) ATinsert(ATempty, term_a_76);
              k_89 = t;
              t = SSL_printnl(j_89, k_89);
              t = term_a_32;
              h_89 = t;
              t = SSL_exit(h_89);
              t = (ATerm) ATinsert(ATempty, term_a_76);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(j_29, t);
      }
    }
  }
  return(t);
}
ATerm l_29 (ATerm t)
{
  t = if_verbose1_1_0(o_29, t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  t = xtc_temp_files_1_0(p_29, t);
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,r_89 = NULL;
  n_89 = t;
  t = term_z_29;
  o_89 = t;
  t = (ATerm) ATinsert(CheckATermList(n_89), term_b_76);
  r_89 = t;
  t = SSL_printnl(o_89, r_89);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(CheckATermList(n_89), term_b_76));
  return(t);
}
ATerm p_29 (ATerm t)
{
  ATerm c_76 = t;
  int d_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_89 = NULL;
      t = term_t_46;
      t = get_config_0_0(t);
      s_89 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_89);
      ;
      LocalPopChoice(d_76);
    }
  else
    {
      t = c_76;
      t = term_c_49;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm q_29 (ATerm t)
{
  ATerm t_89 = NULL,v_89 = NULL,w_89 = NULL;
  t = run_time_0_0(t);
  t_89 = t;
  t = term_z_29;
  v_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_76), t_89), term_i_76);
  w_89 = t;
  t = SSL_printnl(v_89, w_89);
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_76), t_89), term_i_76));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm k_76 = t;
  int l_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_89 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(l_29, n_29, t);
      t = if_verbose2_1_0(q_29, t);
      t = term_r_29;
      m_89 = t;
      t = SSL_exit(m_89);
      ;
      LocalPopChoice(l_76);
    }
  else
    {
      t = k_76;
      {
        ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,d_90 = NULL;
        t = run_time_0_0(t);
        z_89 = t;
        t = term_z_29;
        b_90 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_76), z_89), term_p_76);
        d_90 = t;
        t = SSL_printnl(b_90, d_90);
        t = term_a_32;
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
