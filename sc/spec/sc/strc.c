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
ATerm term_s_69;
ATerm term_r_69;
ATerm term_q_69;
ATerm term_l_69;
ATerm term_g_69;
ATerm term_x_68;
ATerm term_s_68;
ATerm term_r_68;
ATerm term_q_68;
ATerm term_p_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_m_68;
ATerm term_a_68;
ATerm term_n_67;
ATerm term_m_67;
ATerm term_b_67;
ATerm term_u_66;
ATerm term_t_66;
ATerm term_s_66;
ATerm term_r_66;
ATerm term_q_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_l_65;
ATerm term_k_65;
ATerm term_j_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_u_64;
ATerm term_r_64;
ATerm term_o_64;
ATerm term_l_64;
ATerm term_i_64;
ATerm term_f_64;
ATerm term_e_64;
ATerm term_b_64;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_t_63;
ATerm term_q_63;
ATerm term_n_63;
ATerm term_k_63;
ATerm term_h_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_w_62;
ATerm term_t_62;
ATerm term_q_62;
ATerm term_p_62;
ATerm term_m_62;
ATerm term_j_62;
ATerm term_t_61;
ATerm term_s_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_j_60;
ATerm term_c_60;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_h_57;
ATerm term_n_56;
ATerm term_i_56;
ATerm term_d_56;
ATerm term_u_55;
ATerm term_l_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_j_53;
ATerm term_d_53;
ATerm term_a_53;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_s_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_v_50;
ATerm term_s_50;
ATerm term_i_50;
ATerm term_x_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
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
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
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
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_s_47;
ATerm term_r_47;
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
ATerm term_c_47;
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
ATerm term_o_46;
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
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_u_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_d_44;
ATerm term_y_43;
ATerm term_h_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_o_42;
ATerm term_g_42;
ATerm term_b_42;
ATerm term_w_41;
ATerm term_l_41;
ATerm term_f_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_p_40;
ATerm term_i_40;
ATerm term_e_40;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_z_38;
ATerm term_o_38;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_k_37;
ATerm term_e_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_d_35;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_o_34;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_z_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_i_32;
ATerm term_e_32;
ATerm term_x_31;
ATerm term_l_31;
void init_constant_terms (void)
{
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_45, term_m_36, term_n_45);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_45, term_x_31, term_r_45);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_45, term_x_36, term_u_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_x_45, term_y_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_b_46, term_c_46);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_46, term_f_46, term_g_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_j_46, term_k_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_46, term_n_46, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_46, term_v_46, term_w_46);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_46, term_z_46, term_a_47);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_47, term_g_39, term_d_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_47, term_g_47, term_h_47);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_47, term_k_47, term_l_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_47, term_o_47, term_p_47);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_47, term_s_47, term_t_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_47, term_w_47, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_a_48, term_b_48);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_48, term_e_48, term_f_48);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_48, term_i_48, term_j_48);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_48, term_m_48, term_n_48);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_48, term_q_48, term_r_48);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_48, term_u_48, term_v_48);
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_48, term_y_48, term_z_48);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_49, term_z_38, term_c_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_g_49);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_49, term_j_49, term_k_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_49, term_n_49, term_o_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(sym__2, term_w_63, term_q_52);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_f_64));
  term_f_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_66));
  term_r_66 = (ATerm) ATmakeAppl(sym__3, term_b_55, term_q_66, term_q_52);
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm s2c_0_0 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm f_108 (ATerm), ATerm);
ATerm optimize_0_0 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm warnings_0_0 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm frontend_0_0 (ATerm);
ATerm save_as_1_0 (ATerm m_85 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm e_108 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm a_116 (ATerm), ATerm);
ATerm add_main_0_0 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm basename_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm d_112 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm t_14 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_99(t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = t_14;
      {
        ATerm t_0 = NULL,u_0 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_0 = ATgetFirst((ATermList) t);
            u_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_0;
        t = foldr_2_0(j_99, k_99, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_0, x_0);
        t = k_99(t);
      }
    }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_1 = NULL,b_0 = NULL,f_0 = NULL;
  t = times_0_0(t);
  b_0 = t;
  t = SSL_explode_term(b_0);
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  {
    ATerm o_0 (ATerm t)
    {
      t = term_l_31;
      return(t);
    }
    ATerm r_0 (ATerm t)
    {
      ATerm y_0 = NULL,z_0 = NULL;
      if(match_cons(t, sym__2))
        {
          y_0 = ATgetArgument(t, 0);
          z_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(y_0, z_0);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            t = SSL_addr(y_0, z_0);
          }
      }
      return(t);
    }
    t = foldr_2_0(o_0, r_0, t);
    c_1 = t;
    t = SSL_TicksToSeconds(c_1);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,p_2 = NULL;
      v_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL;
            t = eval_config_0_0(t);
            h_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_1);
            t = h_1;
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
          }
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, term_x_31);
        t = geq_0_0(t);
        t = v_1;
        t = b_107(t);
      }
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
    }
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      q_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm v_2 = NULL;
      v_2 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue))));
      t = v_2;
      return(t);
    }
    t = if_verbose2_1_0(s_0, t);
    {
      ATerm y_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
          {
            ATerm a_32 = t;
            int b_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_1 = NULL;
                t = eval_config_0_0(t);
                l_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_1);
                t = l_1;
                ;
                LocalPopChoice(b_32);
              }
            else
              {
                t = a_32;
              }
          }
          ;
          LocalPopChoice(z_31);
        }
      else
        {
          t = y_31;
          {
            ATerm p_1 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
            {
              ATerm c_32 = t;
              int d_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 = NULL;
                  t = eval_config_0_0(t);
                  u_1 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), u_1);
                  t = u_1;
                  ;
                  LocalPopChoice(d_32);
                }
              else
                {
                  t = c_32;
                }
              p_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_1, term_e_32);
              t = conc_strings_0_0(t);
            }
          }
        }
      r_2 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)));
      {
        ATerm f_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 = NULL;
            t = eval_config_0_0(t);
            z_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), z_1);
            t = z_1;
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = f_32;
          }
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_32, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_2), r_2), term_m_32), q_2));
        {
          ATerm v_0 (ATerm t)
          {
            ATerm x_2 = NULL;
            x_2 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_2));
            t = x_2;
            return(t);
          }
          t = if_verbose3_1_0(v_0, t);
          if(match_cons(t, sym__2))
            {
              t_2 = ATgetArgument(t, 0);
              u_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm w_0 (ATerm t)
            {
              t = SSL_execvp(t_2, u_2);
              return(t);
            }
            t = fork_and_wait_1_0(w_0, t);
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
          }
        }
      }
    }
  }
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,c_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_1 (ATerm t)
    {
      ATerm h_3 = NULL;
      h_3 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue))));
      t = h_3;
      return(t);
    }
    t = if_verbose2_1_0(a_1, t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 = NULL;
          t = eval_config_0_0(t);
          i_2 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), i_2);
          t = i_2;
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
        }
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, term_p_32);
      t = conc_strings_0_0(t);
      a_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)));
      {
        ATerm u_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 = NULL;
            t = eval_config_0_0(t);
            m_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), m_2);
            t = m_2;
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = u_32;
          }
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_m_32), z_2), term_z_32));
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm c_33 = ATgetArgument(t, 0);
                  ATerm d_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_3;
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_m_32), z_2), term_z_32);
                  return(t);
                }
                t = at_end_1_0(b_1, t);
              }
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              {
                ATerm y_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)))));
                if(match_cons(t, sym__2))
                  {
                    ATerm f_33 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    y_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_2;
                t = concat_0_0(t);
              }
            }
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_32, e_3);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm l_3 = NULL;
              l_3 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_3));
              t = l_3;
              return(t);
            }
            t = if_verbose3_1_0(d_1, t);
            if(match_cons(t, sym__2))
              {
                f_3 = ATgetArgument(t, 0);
                g_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm e_1 (ATerm t)
              {
                t = SSL_execvp(f_3, g_3);
                return(t);
              }
              t = fork_and_wait_1_0(e_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)));
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL;
            t = eval_config_0_0(t);
            q_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), q_3);
            t = q_3;
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
          }
        t = m_3;
      }
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = g_33;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm o_3 = NULL;
            o_3 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(o_3), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(o_3), term_q_33));
            return(t);
          }
          t = if_verbose1_1_0(i_1, t);
          return(t);
        }
        ATerm g_1 (ATerm t)
        {
          t = c_to_object_code_0_0(t);
          t = link_object_code_0_0(t);
          return(t);
        }
        t = profile_p__2_0(f_1, g_1, t);
      }
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(e_4, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(e_4);
        t = term_t_33;
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_4 = NULL;
              t = d_4;
              t = q_0(t);
              v_4 = t;
              {
                ATerm y_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_34 = t;
                    int c_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(c_34);
                      }
                    else
                      {
                        t = b_34;
                        {
                          ATerm x_4 = NULL;
                          x_4 = t;
                          if((e_4 != t))
                            {
                              _fail(t);
                            }
                          t = x_4;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_33;
                  }
                t = SSL_rename(e_4, v_4);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_4);
              }
              ;
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
              t = d_4;
              t = q_0(t);
              if((e_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_4);
            }
        }
      }
  }
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_34);
        }
      else
        {
          t = f_34;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(e_34);
      {
        ATerm j_1 (ATerm t)
        {
          t = term_o_34;
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          ATerm j_4 = NULL,k_4 = NULL;
          t = pass_verbose_0_0(t);
          j_4 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
          {
            ATerm p_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_5 = NULL;
                t = eval_config_0_0(t);
                k_5 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), k_5);
                t = k_5;
                ;
                LocalPopChoice(q_34);
              }
            else
              {
                t = p_34;
              }
            {
              ATerm m_1 (ATerm t)
              {
                ATerm l_4 = NULL;
                l_4 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_u_34);
                return(t);
              }
              t = map_1_0(m_1, t);
              k_4 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_4), (ATerm) ATinsert(ATempty, term_x_34)), j_4);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_file_2_0(j_1, k_1, t);
      }
    }
  else
    {
      t = d_34;
      {
        ATerm n_1 (ATerm t)
        {
          t = term_o_34;
          return(t);
        }
        ATerm o_1 (ATerm t)
        {
          ATerm n_4 = NULL,o_4 = NULL;
          t = pass_verbose_0_0(t);
          n_4 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
          {
            ATerm y_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 = NULL;
                t = eval_config_0_0(t);
                r_6 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), r_6);
                t = r_6;
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = y_34;
              }
            {
              ATerm q_1 (ATerm t)
              {
                ATerm p_4 = NULL;
                p_4 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_u_34);
                return(t);
              }
              t = map_1_0(q_1, t);
              o_4 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_4), (ATerm) ATinsert(ATempty, term_x_34)), n_4);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_term_2_0(n_1, o_1, t);
      }
    }
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm q_4 = NULL;
    q_4 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue))));
    t = q_4;
    return(t);
  }
  t = if_verbose2_1_0(r_1, t);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        ATerm s_4 = NULL;
        s_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(s_4), term_d_35));
        return(t);
      }
      t = if_verbose1_1_0(w_1, t);
      return(t);
    }
    ATerm t_1 (ATerm t)
    {
      ATerm f_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(q_35);
            }
          else
            {
              t = k_35;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(j_35);
          {
            ATerm x_1 (ATerm t)
            {
              t = term_g_36;
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm t_4 = NULL;
              t = pass_verbose_0_0(t);
              t_4 = t;
              t = (ATerm) ATinsert(CheckATermList(t_4), term_x_34);
              return(t);
            }
            t = xtc_transform_file_2_0(x_1, y_1, t);
          }
        }
      else
        {
          t = f_35;
          {
            ATerm a_2 (ATerm t)
            {
              t = term_g_36;
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm w_4 = NULL;
              t = pass_verbose_0_0(t);
              w_4 = t;
              t = (ATerm) ATinsert(CheckATermList(w_4), term_x_34);
              return(t);
            }
            t = xtc_transform_term_2_0(a_2, b_2, t);
          }
        }
      {
        ATerm d_2 (ATerm t)
        {
          ATerm e_2 (ATerm t)
          {
            t = term_k_36;
            return(t);
          }
          t = save_as_1_0(e_2, t);
          return(t);
        }
        t = if_keep1_1_0(d_2, t);
        {
          ATerm f_2 (ATerm t)
          {
            t = term_m_36;
            return(t);
          }
          ATerm g_2 (ATerm t)
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_36 = t;
                int u_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(u_36);
                  }
                else
                  {
                    t = r_36;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(q_36);
                {
                  ATerm h_2 (ATerm t)
                  {
                    t = term_v_36;
                    return(t);
                  }
                  ATerm j_2 (ATerm t)
                  {
                    ATerm y_4 = NULL;
                    t = pass_verbose_0_0(t);
                    y_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_4), term_x_34);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(h_2, j_2, t);
                }
              }
            else
              {
                t = p_36;
                {
                  ATerm k_2 (ATerm t)
                  {
                    t = term_v_36;
                    return(t);
                  }
                  ATerm l_2 (ATerm t)
                  {
                    ATerm z_4 = NULL;
                    t = pass_verbose_0_0(t);
                    z_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(z_4), term_x_34);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(k_2, l_2, t);
                }
              }
            return(t);
          }
          t = olevel_2_0(f_2, g_2, t);
          {
            ATerm n_2 (ATerm t)
            {
              ATerm o_2 (ATerm t)
              {
                t = term_w_36;
                return(t);
              }
              t = save_as_1_0(o_2, t);
              return(t);
            }
            t = if_keep1_1_0(n_2, t);
            {
              ATerm w_2 (ATerm t)
              {
                t = term_x_36;
                return(t);
              }
              t = olevel_2_0(w_2, bound_unbound_vars_0_0, t);
              {
                ATerm y_36 = t;
                int a_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_37 = t;
                    int c_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(c_37);
                      }
                    else
                      {
                        t = b_37;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(a_37);
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = term_e_37;
                        return(t);
                      }
                      ATerm d_3 (ATerm t)
                      {
                        ATerm a_5 = NULL;
                        t = pass_verbose_0_0(t);
                        a_5 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_5), term_x_34);
                        return(t);
                      }
                      t = xtc_transform_file_2_0(c_3, d_3, t);
                    }
                  }
                else
                  {
                    t = y_36;
                    {
                      ATerm i_3 (ATerm t)
                      {
                        t = term_e_37;
                        return(t);
                      }
                      ATerm j_3 (ATerm t)
                      {
                        ATerm b_5 = NULL;
                        t = pass_verbose_0_0(t);
                        b_5 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_5), term_x_34);
                        return(t);
                      }
                      t = xtc_transform_term_2_0(i_3, j_3, t);
                    }
                  }
                t = s2c_0_0(t);
                {
                  ATerm f_37 = t;
                  int g_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_37 = t;
                      int j_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = FILE_1_0(_id, t);
                          ;
                          LocalPopChoice(j_37);
                        }
                      else
                        {
                          t = i_37;
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                        }
                      LocalPopChoice(g_37);
                      {
                        ATerm k_3 (ATerm t)
                        {
                          t = term_k_37;
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          ATerm c_5 = NULL;
                          t = term_m_37;
                          t = xtc_find_0_0(t);
                          c_5 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_n_37);
                          return(t);
                        }
                        t = xtc_transform_file_2_0(k_3, n_3, t);
                      }
                    }
                  else
                    {
                      t = f_37;
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = term_k_37;
                          return(t);
                        }
                        ATerm r_3 (ATerm t)
                        {
                          ATerm d_5 = NULL;
                          t = term_m_37;
                          t = xtc_find_0_0(t);
                          d_5 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_n_37);
                          return(t);
                        }
                        t = xtc_transform_term_2_0(p_3, r_3, t);
                      }
                    }
                  {
                    ATerm o_37 = t;
                    int q_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_37 = t;
                        int s_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FILE_1_0(_id, t);
                            ;
                            LocalPopChoice(s_37);
                          }
                        else
                          {
                            t = r_37;
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                          }
                        LocalPopChoice(q_37);
                        {
                          ATerm s_3 (ATerm t)
                          {
                            t = term_v_37;
                            return(t);
                          }
                          ATerm t_3 (ATerm t)
                          {
                            t = (ATerm) ATempty;
                            return(t);
                          }
                          t = xtc_transform_file_2_0(s_3, t_3, t);
                        }
                      }
                    else
                      {
                        t = o_37;
                        {
                          ATerm u_3 (ATerm t)
                          {
                            t = term_v_37;
                            return(t);
                          }
                          ATerm v_3 (ATerm t)
                          {
                            t = (ATerm) ATempty;
                            return(t);
                          }
                          t = xtc_transform_term_2_0(u_3, v_3, t);
                        }
                      }
                    {
                      ATerm w_3 (ATerm t)
                      {
                        ATerm v_6 = NULL;
                        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                        {
                          ATerm w_37 = t;
                          int x_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_7 = NULL;
                              t = eval_config_0_0(t);
                              i_7 = t;
                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), i_7);
                              t = i_7;
                              ;
                              LocalPopChoice(x_37);
                            }
                          else
                            {
                              t = w_37;
                            }
                          v_6 = t;
                          t = (ATerm) ATmakeAppl(sym__2, v_6, term_y_37);
                          t = conc_strings_0_0(t);
                        }
                        return(t);
                      }
                      t = rename_to_1_0(w_3, t);
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
    t = profile_p__2_0(s_1, t_1, t);
  }
  return(t);
}
ATerm if_keep1_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,j_5 = NULL;
      e_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 = NULL;
            t = eval_config_0_0(t);
            q_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_7);
            t = q_7;
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
          }
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, term_m_36);
        t = geq_0_0(t);
        t = e_5;
        t = c_108(t);
      }
      ;
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL;
      l_5 = t;
      t = f_116(t);
      n_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            t = eval_config_0_0(t);
            b_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), b_8);
            t = b_8;
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
          }
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, n_5);
        t = geq_0_0(t);
        t = l_5;
        t = g_116(t);
      }
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
    }
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(n_38);
            }
          else
            {
              t = l_38;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(k_38);
          {
            ATerm x_3 (ATerm t)
            {
              t = term_o_38;
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm p_5 = NULL;
              t = pass_verbose_0_0(t);
              p_5 = t;
              t = (ATerm) ATinsert(CheckATermList(p_5), term_x_34);
              return(t);
            }
            t = xtc_transform_file_2_0(x_3, y_3, t);
          }
        }
      else
        {
          t = j_38;
          {
            ATerm z_3 (ATerm t)
            {
              t = term_o_38;
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              ATerm q_5 = NULL;
              t = pass_verbose_0_0(t);
              q_5 = t;
              t = (ATerm) ATinsert(CheckATermList(q_5), term_x_34);
              return(t);
            }
            t = xtc_transform_term_2_0(z_3, a_4, t);
          }
        }
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_38 = t;
            int t_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(t_38);
              }
            else
              {
                t = s_38;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(q_38);
            {
              ATerm b_4 (ATerm t)
              {
                t = term_o_38;
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                ATerm r_5 = NULL;
                t = pass_verbose_0_0(t);
                r_5 = t;
                t = (ATerm) ATinsert(CheckATermList(r_5), term_x_34);
                return(t);
              }
              t = xtc_transform_file_2_0(b_4, c_4, t);
            }
          }
        else
          {
            t = p_38;
            {
              ATerm f_4 (ATerm t)
              {
                t = term_o_38;
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                ATerm t_5 = NULL;
                t = pass_verbose_0_0(t);
                t_5 = t;
                t = (ATerm) ATinsert(CheckATermList(t_5), term_x_34);
                return(t);
              }
              t = xtc_transform_term_2_0(f_4, g_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_5 = NULL,w_5 = NULL;
      u_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm w_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(y_38);
          }
        else
          {
            t = w_38;
          }
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_5, term_z_38);
        t = geq_0_0(t);
        t = u_5;
        t = g_108(t);
      }
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm a_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 = NULL,z_5 = NULL;
      x_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_8 = NULL;
            t = eval_config_0_0(t);
            y_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_8);
            t = y_8;
            ;
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
          }
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_5, term_g_39);
        t = geq_0_0(t);
        t = x_5;
        t = f_108(t);
      }
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = a_39;
    }
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm b_6 = NULL;
    b_6 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue))));
    t = b_6;
    return(t);
  }
  t = if_verbose2_1_0(h_4, t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm r_4 (ATerm t)
      {
        ATerm c_6 = NULL;
        c_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(c_6), term_h_39));
        return(t);
      }
      t = if_verbose1_1_0(r_4, t);
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        ATerm d_6 = NULL,q_9 = NULL;
        d_6 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
        {
          ATerm i_39 = t;
          int k_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_9 = NULL;
              t = eval_config_0_0(t);
              n_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), n_9);
              t = n_9;
              ;
              LocalPopChoice(k_39);
            }
          else
            {
              t = i_39;
            }
          q_9 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_9), (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue))));
          t = d_6;
        }
        return(t);
      }
      t = if_verbose3_1_0(u_4, t);
      {
        ATerm f_5 (ATerm t)
        {
          t = term_m_36;
          return(t);
        }
        ATerm g_5 (ATerm t)
        {
          ATerm l_39 = t;
          int m_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_39 = t;
              int o_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(o_39);
                }
              else
                {
                  t = n_39;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(m_39);
              {
                ATerm h_5 (ATerm t)
                {
                  t = term_p_39;
                  return(t);
                }
                ATerm i_5 (ATerm t)
                {
                  ATerm e_6 = NULL;
                  t = pass_verbose_0_0(t);
                  e_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_6), term_x_34);
                  return(t);
                }
                t = xtc_transform_file_2_0(h_5, i_5, t);
              }
            }
          else
            {
              t = l_39;
              {
                ATerm m_5 (ATerm t)
                {
                  t = term_p_39;
                  return(t);
                }
                ATerm s_5 (ATerm t)
                {
                  ATerm f_6 = NULL;
                  t = pass_verbose_0_0(t);
                  f_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(f_6), term_x_34);
                  return(t);
                }
                t = xtc_transform_term_2_0(m_5, s_5, t);
              }
            }
          return(t);
        }
        t = olevel_2_0(f_5, g_5, t);
        {
          ATerm v_5 (ATerm t)
          {
            ATerm y_5 (ATerm t)
            {
              t = term_q_39;
              return(t);
            }
            t = save_as_1_0(y_5, t);
            return(t);
          }
          t = if_keep1_1_0(v_5, t);
          {
            ATerm a_6 (ATerm t)
            {
              t = term_x_31;
              return(t);
            }
            ATerm g_6 (ATerm t)
            {
              ATerm r_39 = t;
              int s_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_6 = NULL;
                  k_6 = t;
                  {
                    ATerm x_39 = t;
                    if((PushChoice() == 0))
                      {
                        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)));
                        {
                          ATerm y_39 = t;
                          int z_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_10 = NULL;
                              t = eval_config_0_0(t);
                              z_10 = t;
                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)), z_10);
                              t = z_10;
                              ;
                              LocalPopChoice(z_39);
                            }
                          else
                            {
                              t = y_39;
                            }
                        }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_39;
                      }
                    t = k_6;
                    {
                      ATerm a_40 = t;
                      int b_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_40 = t;
                          int d_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(d_40);
                            }
                          else
                            {
                              t = c_40;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(b_40);
                          {
                            ATerm h_6 (ATerm t)
                            {
                              t = term_e_40;
                              return(t);
                            }
                            ATerm i_6 (ATerm t)
                            {
                              ATerm p_10 = NULL;
                              t = pass_verbose_0_0(t);
                              p_10 = t;
                              t = (ATerm) ATinsert(CheckATermList(p_10), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(h_6, i_6, t);
                          }
                        }
                      else
                        {
                          t = a_40;
                          {
                            ATerm j_6 (ATerm t)
                            {
                              t = term_e_40;
                              return(t);
                            }
                            ATerm q_6 (ATerm t)
                            {
                              ATerm r_10 = NULL;
                              t = pass_verbose_0_0(t);
                              r_10 = t;
                              t = (ATerm) ATinsert(CheckATermList(r_10), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(j_6, q_6, t);
                          }
                        }
                    }
                  }
                  ;
                  LocalPopChoice(s_39);
                }
              else
                {
                  t = r_39;
                }
              return(t);
            }
            t = olevel_2_0(a_6, g_6, t);
            {
              ATerm s_6 (ATerm t)
              {
                ATerm u_6 (ATerm t)
                {
                  t = term_i_40;
                  return(t);
                }
                t = save_as_1_0(u_6, t);
                return(t);
              }
              t = if_keep2_1_0(s_6, t);
              {
                ATerm x_6 (ATerm t)
                {
                  t = term_g_39;
                  return(t);
                }
                ATerm y_6 (ATerm t)
                {
                  ATerm j_40 = t;
                  int l_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_40 = t;
                      int o_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = FILE_1_0(_id, t);
                          ;
                          LocalPopChoice(o_40);
                        }
                      else
                        {
                          t = m_40;
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                        }
                      LocalPopChoice(l_40);
                      {
                        ATerm z_6 (ATerm t)
                        {
                          t = term_p_40;
                          return(t);
                        }
                        ATerm a_7 (ATerm t)
                        {
                          ATerm l_6 = NULL;
                          t = pass_verbose_0_0(t);
                          l_6 = t;
                          t = (ATerm) ATinsert(CheckATermList(l_6), term_x_34);
                          return(t);
                        }
                        t = xtc_transform_file_2_0(z_6, a_7, t);
                      }
                    }
                  else
                    {
                      t = j_40;
                      {
                        ATerm k_7 (ATerm t)
                        {
                          t = term_p_40;
                          return(t);
                        }
                        ATerm m_7 (ATerm t)
                        {
                          ATerm m_6 = NULL;
                          t = pass_verbose_0_0(t);
                          m_6 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_6), term_x_34);
                          return(t);
                        }
                        t = xtc_transform_term_2_0(k_7, m_7, t);
                      }
                    }
                  {
                    ATerm r_40 = t;
                    int s_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_40 = t;
                        int v_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FILE_1_0(_id, t);
                            ;
                            LocalPopChoice(v_40);
                          }
                        else
                          {
                            t = u_40;
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                          }
                        LocalPopChoice(s_40);
                        {
                          ATerm o_7 (ATerm t)
                          {
                            t = term_w_40;
                            return(t);
                          }
                          ATerm s_7 (ATerm t)
                          {
                            ATerm n_6 = NULL;
                            t = pass_verbose_0_0(t);
                            n_6 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_6), term_x_34);
                            return(t);
                          }
                          t = xtc_transform_file_2_0(o_7, s_7, t);
                        }
                      }
                    else
                      {
                        t = r_40;
                        {
                          ATerm u_7 (ATerm t)
                          {
                            t = term_w_40;
                            return(t);
                          }
                          ATerm z_7 (ATerm t)
                          {
                            ATerm o_6 = NULL;
                            t = pass_verbose_0_0(t);
                            o_6 = t;
                            t = (ATerm) ATinsert(CheckATermList(o_6), term_x_34);
                            return(t);
                          }
                          t = xtc_transform_term_2_0(u_7, z_7, t);
                        }
                      }
                  }
                  return(t);
                }
                t = olevel_2_0(x_6, y_6, t);
                {
                  ATerm f_8 (ATerm t)
                  {
                    ATerm h_8 (ATerm t)
                    {
                      t = term_x_40;
                      return(t);
                    }
                    t = save_as_1_0(h_8, t);
                    return(t);
                  }
                  t = if_keep4_1_0(f_8, t);
                  {
                    ATerm l_8 (ATerm t)
                    {
                      t = term_g_39;
                      return(t);
                    }
                    ATerm n_8 (ATerm t)
                    {
                      ATerm y_40 = t;
                      int b_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_41 = t;
                          int e_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(e_41);
                            }
                          else
                            {
                              t = c_41;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(b_41);
                          {
                            ATerm v_8 (ATerm t)
                            {
                              t = term_f_41;
                              return(t);
                            }
                            ATerm w_8 (ATerm t)
                            {
                              ATerm p_6 = NULL;
                              t = pass_verbose_0_0(t);
                              p_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(p_6), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(v_8, w_8, t);
                          }
                        }
                      else
                        {
                          t = y_40;
                          {
                            ATerm x_8 (ATerm t)
                            {
                              t = term_f_41;
                              return(t);
                            }
                            ATerm z_8 (ATerm t)
                            {
                              ATerm t_6 = NULL;
                              t = pass_verbose_0_0(t);
                              t_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(t_6), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(x_8, z_8, t);
                          }
                        }
                      return(t);
                    }
                    t = olevel_2_0(l_8, n_8, t);
                    {
                      ATerm h_41 = t;
                      int i_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_41 = t;
                          int k_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(k_41);
                            }
                          else
                            {
                              t = j_41;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(i_41);
                          {
                            ATerm a_9 (ATerm t)
                            {
                              t = term_l_41;
                              return(t);
                            }
                            ATerm b_9 (ATerm t)
                            {
                              ATerm w_6 = NULL;
                              t = pass_verbose_0_0(t);
                              w_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(w_6), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(a_9, b_9, t);
                          }
                        }
                      else
                        {
                          t = h_41;
                          {
                            ATerm c_9 (ATerm t)
                            {
                              t = term_l_41;
                              return(t);
                            }
                            ATerm d_9 (ATerm t)
                            {
                              ATerm b_7 = NULL;
                              t = pass_verbose_0_0(t);
                              b_7 = t;
                              t = (ATerm) ATinsert(CheckATermList(b_7), term_x_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(c_9, d_9, t);
                          }
                        }
                      {
                        ATerm e_9 (ATerm t)
                        {
                          t = term_g_39;
                          return(t);
                        }
                        ATerm f_9 (ATerm t)
                        {
                          ATerm p_41 = t;
                          int q_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_41 = t;
                              int v_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = FILE_1_0(_id, t);
                                  ;
                                  LocalPopChoice(v_41);
                                }
                              else
                                {
                                  t = u_41;
                                  if(!(match_cons(t, sym_stdin_0)))
                                    _fail(t);
                                }
                              LocalPopChoice(q_41);
                              {
                                ATerm g_9 (ATerm t)
                                {
                                  t = term_w_41;
                                  return(t);
                                }
                                ATerm h_9 (ATerm t)
                                {
                                  ATerm c_7 = NULL;
                                  t = pass_verbose_0_0(t);
                                  c_7 = t;
                                  t = (ATerm) ATinsert(CheckATermList(c_7), term_x_34);
                                  return(t);
                                }
                                t = xtc_transform_file_2_0(g_9, h_9, t);
                              }
                            }
                          else
                            {
                              t = p_41;
                              {
                                ATerm i_9 (ATerm t)
                                {
                                  t = term_w_41;
                                  return(t);
                                }
                                ATerm j_9 (ATerm t)
                                {
                                  ATerm d_7 = NULL;
                                  t = pass_verbose_0_0(t);
                                  d_7 = t;
                                  t = (ATerm) ATinsert(CheckATermList(d_7), term_x_34);
                                  return(t);
                                }
                                t = xtc_transform_term_2_0(i_9, j_9, t);
                              }
                            }
                          t = bound_unbound_vars_0_0(t);
                          {
                            ATerm x_41 = t;
                            int y_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_41 = t;
                                int a_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FILE_1_0(_id, t);
                                    ;
                                    LocalPopChoice(a_42);
                                  }
                                else
                                  {
                                    t = z_41;
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                  }
                                LocalPopChoice(y_41);
                                {
                                  ATerm k_9 (ATerm t)
                                  {
                                    t = term_b_42;
                                    return(t);
                                  }
                                  ATerm l_9 (ATerm t)
                                  {
                                    ATerm e_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    e_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(e_7), term_x_34);
                                    return(t);
                                  }
                                  t = xtc_transform_file_2_0(k_9, l_9, t);
                                }
                              }
                            else
                              {
                                t = x_41;
                                {
                                  ATerm m_9 (ATerm t)
                                  {
                                    t = term_b_42;
                                    return(t);
                                  }
                                  ATerm o_9 (ATerm t)
                                  {
                                    ATerm f_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    f_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(f_7), term_x_34);
                                    return(t);
                                  }
                                  t = xtc_transform_term_2_0(m_9, o_9, t);
                                }
                              }
                          }
                          return(t);
                        }
                        t = olevel_2_0(e_9, f_9, t);
                        {
                          ATerm u_9 (ATerm t)
                          {
                            t = term_g_39;
                            return(t);
                          }
                          ATerm v_9 (ATerm t)
                          {
                            ATerm c_42 = t;
                            int d_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_42 = t;
                                int f_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FILE_1_0(_id, t);
                                    ;
                                    LocalPopChoice(f_42);
                                  }
                                else
                                  {
                                    t = e_42;
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                  }
                                LocalPopChoice(d_42);
                                {
                                  ATerm y_9 (ATerm t)
                                  {
                                    t = term_f_41;
                                    return(t);
                                  }
                                  ATerm z_9 (ATerm t)
                                  {
                                    ATerm g_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    g_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(g_7), term_x_34);
                                    return(t);
                                  }
                                  t = xtc_transform_file_2_0(y_9, z_9, t);
                                }
                              }
                            else
                              {
                                t = c_42;
                                {
                                  ATerm b_10 (ATerm t)
                                  {
                                    t = term_f_41;
                                    return(t);
                                  }
                                  ATerm c_10 (ATerm t)
                                  {
                                    ATerm h_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    h_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(h_7), term_x_34);
                                    return(t);
                                  }
                                  t = xtc_transform_term_2_0(b_10, c_10, t);
                                }
                              }
                            return(t);
                          }
                          t = olevel_2_0(u_9, v_9, t);
                          {
                            ATerm d_10 (ATerm t)
                            {
                              ATerm e_10 (ATerm t)
                              {
                                t = term_g_42;
                                return(t);
                              }
                              t = save_as_1_0(e_10, t);
                              return(t);
                            }
                            t = if_keep4_1_0(d_10, t);
                            {
                              ATerm f_10 (ATerm t)
                              {
                                t = term_x_31;
                                return(t);
                              }
                              ATerm g_10 (ATerm t)
                              {
                                ATerm h_42 = t;
                                int i_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_42 = t;
                                    int k_42 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = FILE_1_0(_id, t);
                                        ;
                                        LocalPopChoice(k_42);
                                      }
                                    else
                                      {
                                        t = j_42;
                                        if(!(match_cons(t, sym_stdin_0)))
                                          _fail(t);
                                      }
                                    LocalPopChoice(i_42);
                                    {
                                      ATerm h_10 (ATerm t)
                                      {
                                        t = term_o_42;
                                        return(t);
                                      }
                                      ATerm i_10 (ATerm t)
                                      {
                                        ATerm j_7 = NULL;
                                        t = pass_verbose_0_0(t);
                                        j_7 = t;
                                        t = (ATerm) ATinsert(CheckATermList(j_7), term_x_34);
                                        return(t);
                                      }
                                      t = xtc_transform_file_2_0(h_10, i_10, t);
                                    }
                                  }
                                else
                                  {
                                    t = h_42;
                                    {
                                      ATerm k_10 (ATerm t)
                                      {
                                        t = term_o_42;
                                        return(t);
                                      }
                                      ATerm l_10 (ATerm t)
                                      {
                                        ATerm l_7 = NULL;
                                        t = pass_verbose_0_0(t);
                                        l_7 = t;
                                        t = (ATerm) ATinsert(CheckATermList(l_7), term_x_34);
                                        return(t);
                                      }
                                      t = xtc_transform_term_2_0(k_10, l_10, t);
                                    }
                                  }
                                return(t);
                              }
                              t = olevel_2_0(f_10, g_10, t);
                              {
                                ATerm m_10 (ATerm t)
                                {
                                  t = term_x_31;
                                  return(t);
                                }
                                ATerm n_10 (ATerm t)
                                {
                                  ATerm p_42 = t;
                                  int q_42 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_42 = t;
                                      int s_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = FILE_1_0(_id, t);
                                          ;
                                          LocalPopChoice(s_42);
                                        }
                                      else
                                        {
                                          t = r_42;
                                          if(!(match_cons(t, sym_stdin_0)))
                                            _fail(t);
                                        }
                                      LocalPopChoice(q_42);
                                      {
                                        ATerm o_10 (ATerm t)
                                        {
                                          t = term_u_42;
                                          return(t);
                                        }
                                        ATerm t_10 (ATerm t)
                                        {
                                          ATerm n_7 = NULL;
                                          t = pass_verbose_0_0(t);
                                          n_7 = t;
                                          t = (ATerm) ATinsert(CheckATermList(n_7), term_x_34);
                                          return(t);
                                        }
                                        t = xtc_transform_file_2_0(o_10, t_10, t);
                                      }
                                    }
                                  else
                                    {
                                      t = p_42;
                                      {
                                        ATerm u_10 (ATerm t)
                                        {
                                          t = term_u_42;
                                          return(t);
                                        }
                                        ATerm v_10 (ATerm t)
                                        {
                                          ATerm p_7 = NULL;
                                          t = pass_verbose_0_0(t);
                                          p_7 = t;
                                          t = (ATerm) ATinsert(CheckATermList(p_7), term_x_34);
                                          return(t);
                                        }
                                        t = xtc_transform_term_2_0(u_10, v_10, t);
                                      }
                                    }
                                  return(t);
                                }
                                t = olevel_2_0(m_10, n_10, t);
                                {
                                  ATerm w_10 (ATerm t)
                                  {
                                    ATerm x_10 (ATerm t)
                                    {
                                      t = term_v_42;
                                      return(t);
                                    }
                                    t = save_as_1_0(x_10, t);
                                    return(t);
                                  }
                                  t = if_keep2_1_0(w_10, t);
                                  {
                                    ATerm y_10 (ATerm t)
                                    {
                                      t = term_z_38;
                                      return(t);
                                    }
                                    ATerm a_11 (ATerm t)
                                    {
                                      ATerm w_42 = t;
                                      int y_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_42 = t;
                                          int a_43 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = FILE_1_0(_id, t);
                                              ;
                                              LocalPopChoice(a_43);
                                            }
                                          else
                                            {
                                              t = z_42;
                                              if(!(match_cons(t, sym_stdin_0)))
                                                _fail(t);
                                            }
                                          LocalPopChoice(y_42);
                                          {
                                            ATerm b_11 (ATerm t)
                                            {
                                              t = term_p_40;
                                              return(t);
                                            }
                                            ATerm c_11 (ATerm t)
                                            {
                                              ATerm r_7 = NULL;
                                              t = pass_verbose_0_0(t);
                                              r_7 = t;
                                              t = (ATerm) ATinsert(CheckATermList(r_7), term_x_34);
                                              return(t);
                                            }
                                            t = xtc_transform_file_2_0(b_11, c_11, t);
                                          }
                                        }
                                      else
                                        {
                                          t = w_42;
                                          {
                                            ATerm d_11 (ATerm t)
                                            {
                                              t = term_p_40;
                                              return(t);
                                            }
                                            ATerm e_11 (ATerm t)
                                            {
                                              ATerm t_7 = NULL;
                                              t = pass_verbose_0_0(t);
                                              t_7 = t;
                                              t = (ATerm) ATinsert(CheckATermList(t_7), term_x_34);
                                              return(t);
                                            }
                                            t = xtc_transform_term_2_0(d_11, e_11, t);
                                          }
                                        }
                                      return(t);
                                    }
                                    t = olevel_2_0(y_10, a_11, t);
                                    {
                                      ATerm f_11 (ATerm t)
                                      {
                                        t = term_z_38;
                                        return(t);
                                      }
                                      ATerm g_11 (ATerm t)
                                      {
                                        ATerm c_43 = t;
                                        int d_43 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_43 = t;
                                            int g_43 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = FILE_1_0(_id, t);
                                                ;
                                                LocalPopChoice(g_43);
                                              }
                                            else
                                              {
                                                t = e_43;
                                                if(!(match_cons(t, sym_stdin_0)))
                                                  _fail(t);
                                              }
                                            LocalPopChoice(d_43);
                                            {
                                              ATerm h_11 (ATerm t)
                                              {
                                                t = term_w_40;
                                                return(t);
                                              }
                                              ATerm i_11 (ATerm t)
                                              {
                                                ATerm v_7 = NULL;
                                                t = pass_verbose_0_0(t);
                                                v_7 = t;
                                                t = (ATerm) ATinsert(CheckATermList(v_7), term_x_34);
                                                return(t);
                                              }
                                              t = xtc_transform_file_2_0(h_11, i_11, t);
                                            }
                                          }
                                        else
                                          {
                                            t = c_43;
                                            {
                                              ATerm j_11 (ATerm t)
                                              {
                                                t = term_w_40;
                                                return(t);
                                              }
                                              ATerm k_11 (ATerm t)
                                              {
                                                ATerm w_7 = NULL;
                                                t = pass_verbose_0_0(t);
                                                w_7 = t;
                                                t = (ATerm) ATinsert(CheckATermList(w_7), term_x_34);
                                                return(t);
                                              }
                                              t = xtc_transform_term_2_0(j_11, k_11, t);
                                            }
                                          }
                                        return(t);
                                      }
                                      t = olevel_2_0(f_11, g_11, t);
                                      {
                                        ATerm m_11 (ATerm t)
                                        {
                                          ATerm n_11 (ATerm t)
                                          {
                                            t = term_h_43;
                                            return(t);
                                          }
                                          t = save_as_1_0(n_11, t);
                                          return(t);
                                        }
                                        t = if_keep5_1_0(m_11, t);
                                        {
                                          ATerm o_11 (ATerm t)
                                          {
                                            t = term_x_36;
                                            return(t);
                                          }
                                          ATerm p_11 (ATerm t)
                                          {
                                            ATerm i_43 = t;
                                            int k_43 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_43 = t;
                                                int m_43 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = FILE_1_0(_id, t);
                                                    ;
                                                    LocalPopChoice(m_43);
                                                  }
                                                else
                                                  {
                                                    t = l_43;
                                                    if(!(match_cons(t, sym_stdin_0)))
                                                      _fail(t);
                                                  }
                                                LocalPopChoice(k_43);
                                                {
                                                  ATerm q_11 (ATerm t)
                                                  {
                                                    t = term_f_41;
                                                    return(t);
                                                  }
                                                  ATerm r_11 (ATerm t)
                                                  {
                                                    ATerm x_7 = NULL;
                                                    t = pass_verbose_0_0(t);
                                                    x_7 = t;
                                                    t = (ATerm) ATinsert(CheckATermList(x_7), term_x_34);
                                                    return(t);
                                                  }
                                                  t = xtc_transform_file_2_0(q_11, r_11, t);
                                                }
                                              }
                                            else
                                              {
                                                t = i_43;
                                                {
                                                  ATerm u_11 (ATerm t)
                                                  {
                                                    t = term_f_41;
                                                    return(t);
                                                  }
                                                  ATerm v_11 (ATerm t)
                                                  {
                                                    ATerm y_7 = NULL;
                                                    t = pass_verbose_0_0(t);
                                                    y_7 = t;
                                                    t = (ATerm) ATinsert(CheckATermList(y_7), term_x_34);
                                                    return(t);
                                                  }
                                                  t = xtc_transform_term_2_0(u_11, v_11, t);
                                                }
                                              }
                                            return(t);
                                          }
                                          t = olevel_2_0(o_11, p_11, t);
                                          {
                                            ATerm w_11 (ATerm t)
                                            {
                                              t = term_x_36;
                                              return(t);
                                            }
                                            ATerm x_11 (ATerm t)
                                            {
                                              ATerm o_43 = t;
                                              int p_43 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm q_43 = t;
                                                  int s_43 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = FILE_1_0(_id, t);
                                                      ;
                                                      LocalPopChoice(s_43);
                                                    }
                                                  else
                                                    {
                                                      t = q_43;
                                                      if(!(match_cons(t, sym_stdin_0)))
                                                        _fail(t);
                                                    }
                                                  LocalPopChoice(p_43);
                                                  {
                                                    ATerm c_12 (ATerm t)
                                                    {
                                                      t = term_w_41;
                                                      return(t);
                                                    }
                                                    ATerm d_12 (ATerm t)
                                                    {
                                                      ATerm a_8 = NULL;
                                                      t = pass_verbose_0_0(t);
                                                      a_8 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(a_8), term_x_34);
                                                      return(t);
                                                    }
                                                    t = xtc_transform_file_2_0(c_12, d_12, t);
                                                  }
                                                }
                                              else
                                                {
                                                  t = o_43;
                                                  {
                                                    ATerm e_12 (ATerm t)
                                                    {
                                                      t = term_w_41;
                                                      return(t);
                                                    }
                                                    ATerm f_12 (ATerm t)
                                                    {
                                                      ATerm c_8 = NULL;
                                                      t = pass_verbose_0_0(t);
                                                      c_8 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(c_8), term_x_34);
                                                      return(t);
                                                    }
                                                    t = xtc_transform_term_2_0(e_12, f_12, t);
                                                  }
                                                }
                                              t = bound_unbound_vars_0_0(t);
                                              {
                                                ATerm t_43 = t;
                                                int u_43 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm w_43 = t;
                                                    int x_43 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = FILE_1_0(_id, t);
                                                        ;
                                                        LocalPopChoice(x_43);
                                                      }
                                                    else
                                                      {
                                                        t = w_43;
                                                        if(!(match_cons(t, sym_stdin_0)))
                                                          _fail(t);
                                                      }
                                                    LocalPopChoice(u_43);
                                                    {
                                                      ATerm j_12 (ATerm t)
                                                      {
                                                        t = term_b_42;
                                                        return(t);
                                                      }
                                                      ATerm q_12 (ATerm t)
                                                      {
                                                        ATerm d_8 = NULL;
                                                        t = pass_verbose_0_0(t);
                                                        d_8 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(d_8), term_x_34);
                                                        return(t);
                                                      }
                                                      t = xtc_transform_file_2_0(j_12, q_12, t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = t_43;
                                                    {
                                                      ATerm r_12 (ATerm t)
                                                      {
                                                        t = term_b_42;
                                                        return(t);
                                                      }
                                                      ATerm s_12 (ATerm t)
                                                      {
                                                        ATerm e_8 = NULL;
                                                        t = pass_verbose_0_0(t);
                                                        e_8 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(e_8), term_x_34);
                                                        return(t);
                                                      }
                                                      t = xtc_transform_term_2_0(r_12, s_12, t);
                                                    }
                                                  }
                                              }
                                              return(t);
                                            }
                                            t = olevel_2_0(w_11, x_11, t);
                                            {
                                              ATerm t_12 (ATerm t)
                                              {
                                                ATerm u_12 (ATerm t)
                                                {
                                                  t = term_y_43;
                                                  return(t);
                                                }
                                                t = save_as_1_0(u_12, t);
                                                return(t);
                                              }
                                              t = if_keep3_1_0(t_12, t);
                                              {
                                                ATerm w_12 (ATerm t)
                                                {
                                                  t = term_m_36;
                                                  return(t);
                                                }
                                                ATerm x_12 (ATerm t)
                                                {
                                                  ATerm z_43 = t;
                                                  int a_44 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_44 = t;
                                                      int c_44 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = FILE_1_0(_id, t);
                                                          ;
                                                          LocalPopChoice(c_44);
                                                        }
                                                      else
                                                        {
                                                          t = b_44;
                                                          if(!(match_cons(t, sym_stdin_0)))
                                                            _fail(t);
                                                        }
                                                      LocalPopChoice(a_44);
                                                      {
                                                        ATerm z_12 (ATerm t)
                                                        {
                                                          t = term_f_41;
                                                          return(t);
                                                        }
                                                        ATerm i_13 (ATerm t)
                                                        {
                                                          ATerm g_8 = NULL;
                                                          t = pass_verbose_0_0(t);
                                                          g_8 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(g_8), term_x_34);
                                                          return(t);
                                                        }
                                                        t = xtc_transform_file_2_0(z_12, i_13, t);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = z_43;
                                                      {
                                                        ATerm j_13 (ATerm t)
                                                        {
                                                          t = term_f_41;
                                                          return(t);
                                                        }
                                                        ATerm l_13 (ATerm t)
                                                        {
                                                          ATerm i_8 = NULL;
                                                          t = pass_verbose_0_0(t);
                                                          i_8 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(i_8), term_x_34);
                                                          return(t);
                                                        }
                                                        t = xtc_transform_term_2_0(j_13, l_13, t);
                                                      }
                                                    }
                                                  return(t);
                                                }
                                                t = olevel_2_0(w_12, x_12, t);
                                                {
                                                  ATerm x_13 (ATerm t)
                                                  {
                                                    ATerm y_13 (ATerm t)
                                                    {
                                                      t = term_d_44;
                                                      return(t);
                                                    }
                                                    t = save_as_1_0(y_13, t);
                                                    return(t);
                                                  }
                                                  t = if_keep1_1_0(x_13, t);
                                                  {
                                                    ATerm z_13 (ATerm t)
                                                    {
                                                      t = term_m_36;
                                                      return(t);
                                                    }
                                                    ATerm b_14 (ATerm t)
                                                    {
                                                      ATerm e_44 = t;
                                                      int f_44 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_44 = t;
                                                          int h_44 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = FILE_1_0(_id, t);
                                                              ;
                                                              LocalPopChoice(h_44);
                                                            }
                                                          else
                                                            {
                                                              t = g_44;
                                                              if(!(match_cons(t, sym_stdin_0)))
                                                                _fail(t);
                                                            }
                                                          LocalPopChoice(f_44);
                                                          {
                                                            ATerm f_14 (ATerm t)
                                                            {
                                                              t = term_i_44;
                                                              return(t);
                                                            }
                                                            ATerm g_14 (ATerm t)
                                                            {
                                                              ATerm j_8 = NULL;
                                                              t = pass_verbose_0_0(t);
                                                              j_8 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(j_8), term_x_34);
                                                              return(t);
                                                            }
                                                            t = xtc_transform_file_2_0(f_14, g_14, t);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = e_44;
                                                          {
                                                            ATerm m_14 (ATerm t)
                                                            {
                                                              t = term_i_44;
                                                              return(t);
                                                            }
                                                            ATerm o_14 (ATerm t)
                                                            {
                                                              ATerm k_8 = NULL;
                                                              t = pass_verbose_0_0(t);
                                                              k_8 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(k_8), term_x_34);
                                                              return(t);
                                                            }
                                                            t = xtc_transform_term_2_0(m_14, o_14, t);
                                                          }
                                                        }
                                                      return(t);
                                                    }
                                                    t = olevel_2_0(z_13, b_14, t);
                                                    {
                                                      ATerm p_14 (ATerm t)
                                                      {
                                                        ATerm s_14 (ATerm t)
                                                        {
                                                          t = term_k_44;
                                                          return(t);
                                                        }
                                                        t = save_as_1_0(s_14, t);
                                                        return(t);
                                                      }
                                                      t = if_keep1_1_0(p_14, t);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
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
    t = profile_p__2_0(i_4, m_4, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_44 = t;
      int o_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(o_44);
        }
      else
        {
          t = n_44;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_44);
      {
        ATerm u_14 (ATerm t)
        {
          t = term_q_44;
          return(t);
        }
        ATerm v_14 (ATerm t)
        {
          ATerm m_8 = NULL;
          t = pass_verbose_0_0(t);
          m_8 = t;
          t = (ATerm) ATinsert(CheckATermList(m_8), term_x_34);
          return(t);
        }
        t = xtc_transform_file_2_0(u_14, v_14, t);
      }
    }
  else
    {
      t = l_44;
      {
        ATerm x_14 (ATerm t)
        {
          t = term_q_44;
          return(t);
        }
        ATerm y_14 (ATerm t)
        {
          ATerm o_8 = NULL;
          t = pass_verbose_0_0(t);
          o_8 = t;
          t = (ATerm) ATinsert(CheckATermList(o_8), term_x_34);
          return(t);
        }
        t = xtc_transform_term_2_0(x_14, y_14, t);
      }
    }
  {
    ATerm a_15 (ATerm t)
    {
      ATerm c_15 (ATerm t)
      {
        t = term_r_44;
        return(t);
      }
      t = save_as_1_0(c_15, t);
      return(t);
    }
    t = if_keep2_1_0(a_15, t);
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  t = term_u_44;
  {
    ATerm v_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm y_44 = t;
          int z_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_11 = NULL;
              t = eval_config_0_0(t);
              l_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_11);
              t = l_11;
              ;
              LocalPopChoice(z_44);
            }
          else
            {
              t = y_44;
            }
        }
        ;
        LocalPopChoice(w_44);
      }
    else
      {
        t = v_44;
        t = term_m_36;
      }
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_8, term_m_36);
    {
      ATerm a_45 = t;
      int c_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(p_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(c_45);
        }
      else
        {
          t = a_45;
          t = SSL_subtr(p_8, (ATerm) ATmakeInt(1));
        }
      r_8 = t;
      t = SSL_int_to_string(r_8);
      q_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, q_8), term_u_44);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_115, z_115, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  ATerm h_15 (ATerm t)
  {
    ATerm t_8 = NULL;
    t_8 = t;
    t = SSL_explode_string(t_8);
    return(t);
  }
  t = map_1_0(h_15, t);
  t = concat_0_0(t);
  s_8 = t;
  t = SSL_implode_string(s_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_9 = ATgetArgument(t, 0);
      {
        ATerm p_12 = NULL;
        t = SSL_int_to_string(r_9);
        p_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_45), p_12), term_d_45);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm r_14 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_9 = ATgetArgument(t, 0);
          s_9 = ATgetArgument(t, 1);
          t_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_9);
      r_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_9), term_h_45), r_14), term_g_45), r_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  ATerm i_15 (ATerm t)
  {
    t = u_93(t);
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    return(t);
  }
  t = fetch_1_0(i_15, t);
  t = not_null(w_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm i_45 = t;
    int l_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_49), term_l_49), term_h_49), term_d_49), term_a_49), term_w_48), term_s_48), term_o_48), term_k_48), term_g_48), term_c_48), term_y_47), term_u_47), term_q_47), term_m_47), term_i_47), term_e_47), term_b_47), term_x_46), term_t_46), term_p_46), term_l_46), term_h_46), term_d_46), term_z_45), term_v_45), term_s_45), term_o_45);
        {
          ATerm j_15 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm q_49 = ATgetArgument(t, 0);
                if((x_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm r_49 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(j_15, t);
        }
        ;
        LocalPopChoice(l_45);
      }
    else
      {
        t = i_45;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm s_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL,w_14 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_49 = ATgetArgument(t, 0);
            j_10 = ATgetArgument(t, 1);
            {
              ATerm v_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_10;
        {
          ATerm w_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_49;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          w_14 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATempty, w_14), term_x_49));
        }
        ;
        LocalPopChoice(t_49);
      }
    else
      {
        t = s_49;
      }
    t = a_10;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL;
  q_10 = t;
  t = fork_0_0(t);
  s_10 = t;
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_10;
        t = u_108(t);
        ;
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        t = SSL_waitpid(s_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_50 = ATgetArgument(t, 0);
            if(((ATgetType(a_50) != AT_INT) || (ATgetInt((ATermInt) a_50) != 0)))
              _fail(t);
            {
              ATerm b_50 = ATgetArgument(t, 1);
            }
            {
              ATerm c_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_10;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_17 = NULL,w_17 = NULL,e_19 = NULL,f_19 = NULL;
      t = s_11;
      t = xtc_new_file_0_0(t);
      u_17 = t;
      t = n_0(t);
      w_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_17, (ATerm) ATinsert(ATinsert(ATempty, u_17), term_m_32));
      {
        ATerm d_50 = t;
        int e_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm f_50 = ATgetArgument(t, 0);
                ATerm g_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_17;
            {
              ATerm k_15 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, u_17), term_m_32);
                return(t);
              }
              t = at_end_1_0(k_15, t);
            }
            ;
            LocalPopChoice(e_50);
          }
        else
          {
            t = d_50;
            {
              ATerm n_18 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_17, (ATerm) ATinsert(ATinsert(ATempty, u_17), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm h_50 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_50) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_18;
              t = concat_0_0(t);
            }
          }
        e_19 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_19, e_19);
        {
          ATerm l_15 (ATerm t)
          {
            t = SSL_execvp(f_19, e_19);
            return(t);
          }
          t = fork_and_wait_1_0(l_15, t);
          t = SSL_close_file(u_17);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_17);
        }
      }
    }
  else
    {
      ATerm x_19 = NULL,y_19 = NULL,j_21 = NULL,c_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_11;
      t = xtc_new_file_0_0(t);
      x_19 = t;
      t = n_0(t);
      y_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), term_m_32), t_11), term_i_50));
      {
        ATerm j_50 = t;
        int k_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm l_50 = ATgetArgument(t, 0);
                ATerm m_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_19;
            {
              ATerm o_15 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), term_m_32), t_11), term_i_50);
                return(t);
              }
              t = at_end_1_0(o_15, t);
            }
            ;
            LocalPopChoice(k_50);
          }
        else
          {
            t = j_50;
            {
              ATerm h_21 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), t_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm n_50 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_50) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  h_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_21;
              t = concat_0_0(t);
            }
          }
        j_21 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, j_21);
        {
          ATerm r_15 (ATerm t)
          {
            t = SSL_execvp(c_22, j_21);
            return(t);
          }
          t = fork_and_wait_1_0(r_15, t);
          t = SSL_close_file(x_19);
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_19);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_12);
  y_11 = t;
  t = z_11;
  t = q_77(t);
  a_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, a_12), y_11);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_50 = t;
      int r_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_50);
        }
      else
        {
          t = q_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_50);
      {
        ATerm s_15 (ATerm t)
        {
          t = term_s_50;
          return(t);
        }
        ATerm v_15 (ATerm t)
        {
          ATerm g_12 = NULL,h_12 = NULL;
          t = pass_verbose_0_0(t);
          g_12 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
          {
            ATerm t_50 = t;
            int u_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_23 = NULL;
                t = eval_config_0_0(t);
                l_23 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), l_23);
                t = l_23;
                ;
                LocalPopChoice(u_50);
              }
            else
              {
                t = t_50;
              }
            {
              ATerm x_15 (ATerm t)
              {
                ATerm i_12 = NULL;
                i_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, i_12), term_v_50);
                return(t);
              }
              t = map_1_0(x_15, t);
              h_12 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(h_12), (ATerm) ATinsert(ATempty, term_x_34)), g_12);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_file_2_0(s_15, v_15, t);
      }
    }
  else
    {
      t = o_50;
      {
        ATerm y_15 (ATerm t)
        {
          t = term_s_50;
          return(t);
        }
        ATerm a_16 (ATerm t)
        {
          ATerm k_12 = NULL,l_12 = NULL;
          t = pass_verbose_0_0(t);
          k_12 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
          {
            ATerm w_50 = t;
            int x_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_23 = NULL;
                t = eval_config_0_0(t);
                v_23 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), v_23);
                t = v_23;
                ;
                LocalPopChoice(x_50);
              }
            else
              {
                t = w_50;
              }
            {
              ATerm b_16 (ATerm t)
              {
                ATerm m_12 = NULL;
                m_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, m_12), term_v_50);
                return(t);
              }
              t = map_1_0(b_16, t);
              l_12 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_12), (ATerm) ATinsert(ATempty, term_x_34)), k_12);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_term_2_0(y_15, a_16, t);
      }
    }
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_51 = t;
      int b_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(b_51);
        }
      else
        {
          t = a_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(z_50);
      {
        ATerm c_16 (ATerm t)
        {
          t = term_c_51;
          return(t);
        }
        ATerm d_16 (ATerm t)
        {
          ATerm n_12 = NULL;
          t = pass_verbose_0_0(t);
          n_12 = t;
          t = (ATerm) ATinsert(CheckATermList(n_12), term_x_34);
          return(t);
        }
        t = xtc_transform_file_2_0(c_16, d_16, t);
      }
    }
  else
    {
      t = y_50;
      {
        ATerm e_16 (ATerm t)
        {
          t = term_c_51;
          return(t);
        }
        ATerm f_16 (ATerm t)
        {
          ATerm o_12 = NULL;
          t = pass_verbose_0_0(t);
          o_12 = t;
          t = (ATerm) ATinsert(CheckATermList(o_12), term_x_34);
          return(t);
        }
        t = xtc_transform_term_2_0(e_16, f_16, t);
      }
    }
  {
    ATerm g_16 (ATerm t)
    {
      ATerm h_16 (ATerm t)
      {
        t = term_d_51;
        return(t);
      }
      t = save_as_1_0(h_16, t);
      return(t);
    }
    t = if_keep2_1_0(g_16, t);
  }
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,g_26 = NULL;
      v_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)));
      {
        ATerm g_51 = t;
        int h_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_26 = NULL;
            t = eval_config_0_0(t);
            x_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), x_26);
            t = x_26;
            ;
            LocalPopChoice(h_51);
          }
        else
          {
            t = g_51;
          }
        t = v_12;
        {
          ATerm i_51 = t;
          int j_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_51 = t;
              int l_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_51 = t;
                  int n_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(n_51);
                    }
                  else
                    {
                      t = m_51;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(l_51);
                  {
                    ATerm i_16 (ATerm t)
                    {
                      t = term_o_51;
                      return(t);
                    }
                    ATerm j_16 (ATerm t)
                    {
                      ATerm h_26 = NULL;
                      t = pass_verbose_0_0(t);
                      h_26 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_26), term_x_34);
                      return(t);
                    }
                    t = xtc_transform_file_2_0(i_16, j_16, t);
                  }
                }
              else
                {
                  t = k_51;
                  {
                    ATerm k_16 (ATerm t)
                    {
                      t = term_o_51;
                      return(t);
                    }
                    ATerm l_16 (ATerm t)
                    {
                      ATerm i_26 = NULL;
                      t = pass_verbose_0_0(t);
                      i_26 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_26), term_x_34);
                      return(t);
                    }
                    t = xtc_transform_term_2_0(k_16, l_16, t);
                  }
                }
              ;
              LocalPopChoice(j_51);
            }
          else
            {
              t = i_51;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATempty, term_p_51);
            }
          {
            ATerm m_16 (ATerm t)
            {
              ATerm h_27 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
              {
                ATerm q_51 = t;
                int r_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_28 = NULL;
                    t = eval_config_0_0(t);
                    a_28 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), a_28);
                    t = a_28;
                    ;
                    LocalPopChoice(r_51);
                  }
                else
                  {
                    t = q_51;
                  }
                h_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_27, term_s_51);
                t = conc_strings_0_0(t);
              }
              return(t);
            }
            t = copy_to_1_0(m_16, t);
            g_26 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue)))));
            t = g_26;
            t = xtc_io_exit_0_0(t);
          }
        }
      }
      ;
      LocalPopChoice(f_51);
    }
  else
    {
      t = e_51;
    }
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_12 = NULL,a_13 = NULL;
      y_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm v_51 = t;
        int w_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_28 = NULL;
            t = eval_config_0_0(t);
            j_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_28);
            t = j_28;
            ;
            LocalPopChoice(w_51);
          }
        else
          {
            t = v_51;
          }
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_x_31);
        t = geq_0_0(t);
        t = y_12;
        t = d_108(t);
      }
      ;
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
    }
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_51 = t;
      int a_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(a_52);
        }
      else
        {
          t = z_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(y_51);
      {
        ATerm n_16 (ATerm t)
        {
          t = term_b_52;
          return(t);
        }
        ATerm o_16 (ATerm t)
        {
          ATerm b_13 = NULL;
          t = pass_verbose_0_0(t);
          b_13 = t;
          t = (ATerm) ATinsert(CheckATermList(b_13), term_x_34);
          return(t);
        }
        t = xtc_transform_file_2_0(n_16, o_16, t);
      }
    }
  else
    {
      t = x_51;
      {
        ATerm p_16 (ATerm t)
        {
          t = term_b_52;
          return(t);
        }
        ATerm s_16 (ATerm t)
        {
          ATerm c_13 = NULL;
          t = pass_verbose_0_0(t);
          c_13 = t;
          t = (ATerm) ATinsert(CheckATermList(c_13), term_x_34);
          return(t);
        }
        t = xtc_transform_term_2_0(p_16, s_16, t);
      }
    }
  {
    ATerm t_16 (ATerm t)
    {
      ATerm u_16 (ATerm t)
      {
        t = term_c_52;
        return(t);
      }
      t = save_as_1_0(u_16, t);
      return(t);
    }
    t = if_keep2_1_0(t_16, t);
  }
  return(t);
}
ATerm save_as_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  {
    ATerm w_16 (ATerm t)
    {
      ATerm l_28 = NULL,m_28 = NULL;
      t = m_85(t);
      l_28 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
      {
        ATerm d_52 = t;
        int e_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_28 = NULL;
            t = eval_config_0_0(t);
            z_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), z_28);
            t = z_28;
            ;
            LocalPopChoice(e_52);
          }
        else
          {
            t = d_52;
          }
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_28, l_28);
        t = conc_strings_0_0(t);
        if(((e_13 != NULL) && (e_13 != t)))
          _fail(t);
        else
          e_13 = t;
      }
      return(t);
    }
    t = copy_to_1_0(w_16, t);
    {
      ATerm f_52 = t;
      int g_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_52 = t;
          int i_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(i_52);
            }
          else
            {
              t = h_52;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(g_52);
          {
            ATerm x_16 (ATerm t)
            {
              t = term_j_52;
              return(t);
            }
            ATerm y_16 (ATerm t)
            {
              ATerm g_13 = NULL;
              t = pass_verbose_0_0(t);
              g_13 = t;
              t = (ATerm) ATinsert(CheckATermList(g_13), term_k_52);
              return(t);
            }
            t = xtc_transform_file_2_0(x_16, y_16, t);
          }
        }
      else
        {
          t = f_52;
          {
            ATerm e_17 (ATerm t)
            {
              t = term_j_52;
              return(t);
            }
            ATerm i_17 (ATerm t)
            {
              ATerm h_13 = NULL;
              t = pass_verbose_0_0(t);
              h_13 = t;
              t = (ATerm) ATinsert(CheckATermList(h_13), term_k_52);
              return(t);
            }
            t = xtc_transform_term_2_0(e_17, i_17, t);
          }
        }
      {
        ATerm k_17 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_l_52);
          t = conc_strings_0_0(t);
          if(((f_13 != NULL) && (f_13 != t)))
            _fail(t);
          else
            f_13 = t;
          return(t);
        }
        t = copy_to_1_0(k_17, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_13)), (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue))), not_null(e_13)), (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue)))));
        t = d_13;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL,m_13 = NULL;
      k_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm o_52 = t;
        int p_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_29 = NULL;
            t = eval_config_0_0(t);
            s_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_29);
            t = s_29;
            ;
            LocalPopChoice(p_52);
          }
        else
          {
            t = o_52;
          }
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_13, term_x_36);
        t = geq_0_0(t);
        t = k_13;
        t = e_108(t);
      }
      ;
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
    }
  return(t);
}
ATerm AddMain_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_q_52;
  t = l_85(t);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(n_13), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_r_52, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_13), (ATerm) ATempty))))));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_13, term_s_52);
  t = open_stream_0_0(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, q_13);
  t = x_105(t);
  t = fclose_0_0(t);
  t = q_13;
  return(t);
}
ATerm assert_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_104(t);
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_13, s_13, t_13);
  t = table_push_0_0(t);
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_13 = ATgetFirst((ATermList) t);
        w_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_13), (ATerm) ATinsert(CheckATermList(v_13), s_13)));
    t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_14 (ATerm a_14, ATerm t)
  {
    t = a_14;
    {
      ATerm v_52 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm w_52 = ATgetArgument(t, 0);
              ATerm x_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_52;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, a_14, term_s_52);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm l_14 (ATerm c_14, ATerm d_14, ATerm e_14, ATerm t)
  {
    t = SSL_open_file(c_14, d_14);
    return(t);
  }
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
      {
        ATerm y_52 = t;
        int z_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_14(h_14, t);
            ;
            LocalPopChoice(z_52);
          }
        else
          {
            t = y_52;
            t = l_14(i_14, j_14, h_14, t);
          }
      }
    }
  else
    {
      t = k_14(h_14, t);
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
  ATerm n_14 = NULL;
  t = term_q_52;
  t = new_0_0(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, term_a_53);
  t = conc_strings_0_0(t);
  {
    ATerm b_53 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = SSL_access(q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_53);
      }
    else
      {
        t = b_53;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = new_file_0_0(t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_14, term_s_52);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_14, term_q_52);
  {
    ATerm e_18 (ATerm t)
    {
      t = term_d_53;
      return(t);
    }
    t = assert_1_0(e_18, t);
    t = z_14;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = xtc_new_file_0_0(t);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_15, b_15);
  {
    ATerm g_18 (ATerm t)
    {
      ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm e_53 = ATgetArgument(t, 0);
          if(match_cons(e_53, sym_Stream_1))
            {
              e_15 = ATgetArgument(e_53, 0);
            }
          else
            _fail(t);
          f_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(e_15, f_15);
      g_15 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
      return(t);
    }
    t = WriteToFile_1_0(g_18, t);
    t = SSL_close_file(d_15);
    t = (ATerm) ATmakeAppl(sym_FILE_1, d_15);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = m_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          n_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(n_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = a_116(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm p_15 = NULL;
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15 = NULL;
      q_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)));
      {
        ATerm h_53 = t;
        int i_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_31 = NULL;
            t = eval_config_0_0(t);
            e_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), e_31);
            t = e_31;
            ;
            LocalPopChoice(i_53);
          }
        else
          {
            t = h_53;
          }
        p_15 = t;
        {
          ATerm h_18 (ATerm t)
          {
            ATerm f_31 = NULL;
            f_31 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_31), (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue))));
            t = f_31;
            return(t);
          }
          t = if_verbose2_1_0(h_18, t);
          t = q_15;
          {
            ATerm i_18 (ATerm t)
            {
              ATerm j_18 (ATerm t)
              {
                t = p_15;
                return(t);
              }
              t = AddMain_1_0(j_18, t);
              return(t);
            }
            t = xtc_io_transform_1_0(i_18, t);
          }
        }
      }
      ;
      LocalPopChoice(g_53);
    }
  else
    {
      t = f_53;
    }
  {
    ATerm k_18 (ATerm t)
    {
      ATerm l_18 (ATerm t)
      {
        t = term_j_53;
        return(t);
      }
      t = save_as_1_0(l_18, t);
      return(t);
    }
    t = if_keep3_1_0(k_18, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  ATerm m_18 (ATerm t)
  {
    ATerm w_15 = NULL;
    w_15 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_15 != NULL) && (t_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_15 = ATgetFirst((ATermList) t);
        {
          ATerm k_53 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(t_15);
    {
      ATerm p_18 (ATerm t)
      {
        ATerm l_53 = t;
        int m_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL;
            z_15 = t;
            t = SSL_remove(z_15);
            ;
            LocalPopChoice(m_53);
          }
        else
          {
            t = l_53;
          }
        return(t);
      }
      t = map_1_0(p_18, t);
      t = w_15;
      {
        ATerm q_18 (ATerm t)
        {
          t = term_d_53;
          return(t);
        }
        t = end_scope_1_0(q_18, t);
      }
    }
    return(t);
  }
  t = repeat_1_0(m_18, t);
  u_15 = t;
  t = SSL_exit(u_15);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm p_53 = t;
          int q_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_31 = NULL;
              t = eval_config_0_0(t);
              q_31 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_31);
              t = q_31;
              ;
              LocalPopChoice(q_53);
            }
          else
            {
              t = p_53;
            }
        }
        ;
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        t = term_t_33;
      }
    return(t);
  }
  t = copy_to_1_0(r_18, t);
  t = term_l_31;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = NULL;
        t = q_16;
        t = p_0(t);
        g_32 = t;
        {
          ATerm t_53 = t;
          int u_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(u_53);
            }
          else
            {
              t = t_53;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(r_16, g_32);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
        }
        ;
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
        {
          ATerm v_53 = t;
          int w_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_32 = NULL;
              t = q_16;
              t = p_0(t);
              r_32 = t;
              {
                ATerm x_53 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_53 = t;
                    int z_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(z_53);
                      }
                    else
                      {
                        t = y_53;
                        {
                          ATerm a_54 = t;
                          int b_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(b_54);
                            }
                          else
                            {
                              t = a_54;
                              {
                                ATerm x_32 = NULL;
                                x_32 = t;
                                if((r_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_32;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_53;
                  }
                t = SSL_copy(r_16, r_32);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
              }
              ;
              LocalPopChoice(w_53);
            }
          else
            {
              t = v_53;
              t = q_16;
              t = p_0(t);
              if((r_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
            }
        }
      }
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,z_16 = NULL;
      v_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)));
      {
        ATerm e_54 = t;
        int f_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_33 = NULL;
            t = eval_config_0_0(t);
            e_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), e_33);
            t = e_33;
            ;
            LocalPopChoice(f_54);
          }
        else
          {
            t = e_54;
          }
        t = v_16;
        {
          ATerm v_18 (ATerm t)
          {
            ATerm h_33 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
            {
              ATerm g_54 = t;
              int h_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_33 = NULL;
                  t = eval_config_0_0(t);
                  x_33 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), x_33);
                  t = x_33;
                  ;
                  LocalPopChoice(h_54);
                }
              else
                {
                  t = g_54;
                }
              h_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_33, term_i_54);
              t = conc_strings_0_0(t);
            }
            return(t);
          }
          t = copy_to_1_0(v_18, t);
          z_16 = t;
          t = (ATerm) ATinsert(ATempty, term_j_54);
          t = echo_0_0(t);
          t = z_16;
          t = xtc_io_exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  t = term_k_54;
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm n_54 = t;
          int o_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_34 = NULL;
              t = eval_config_0_0(t);
              z_34 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_34);
              t = z_34;
              ;
              LocalPopChoice(o_54);
            }
          else
            {
              t = n_54;
            }
        }
        ;
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = term_m_36;
      }
    a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_17, term_m_36);
    {
      ATerm p_54 = t;
      int q_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(a_17, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(q_54);
        }
      else
        {
          t = p_54;
          t = SSL_subtr(a_17, (ATerm) ATmakeInt(1));
        }
      c_17 = t;
      t = SSL_int_to_string(c_17);
      b_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, b_17), term_k_54);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL,f_17 = NULL;
      d_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_35 = NULL;
            t = eval_config_0_0(t);
            s_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_35);
            t = s_35;
            ;
            LocalPopChoice(u_54);
          }
        else
          {
            t = t_54;
          }
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_x_36);
        t = geq_0_0(t);
        t = d_17;
        t = c_107(t);
      }
      ;
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
    }
  return(t);
}
ATerm basename_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = SSL_explode_string(g_17);
  {
    ATerm v_54 = t;
    int w_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 (ATerm t)
        {
          ATerm x_54 = t;
          int y_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, j_17, t);
              ;
              LocalPopChoice(y_54);
            }
          else
            {
              t = x_54;
              {
                ATerm z_54 = t;
                int a_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_18 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(w_18, _id, t);
                    ;
                    LocalPopChoice(a_55);
                  }
                else
                  {
                    t = z_54;
                    {
                      ATerm x_18 (ATerm t)
                      {
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2_0(x_18, f_102, t);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = j_17(t);
        ;
        LocalPopChoice(w_54);
      }
    else
      {
        t = v_54;
      }
    h_17 = t;
    t = SSL_implode_string(h_17);
  }
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_17;
  t = basename_1_0(_id, t);
  m_17 = t;
  {
    ATerm a_19 (ATerm t)
    {
      ATerm i_36 = NULL;
      i_36 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_36), (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue))));
      t = i_36;
      return(t);
    }
    t = if_verbose3_1_0(a_19, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), m_17);
    t = (ATerm) ATmakeAppl(sym__3, term_b_55, term_c_55, m_17);
    {
      ATerm d_55 = t;
      int e_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
          {
            ATerm f_55 = t;
            int g_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_36 = NULL;
                t = eval_config_0_0(t);
                s_36 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_36);
                t = s_36;
                ;
                LocalPopChoice(g_55);
              }
            else
              {
                t = f_55;
              }
            t = basename_1_0(_id, t);
          }
          ;
          LocalPopChoice(e_55);
        }
      else
        {
          t = d_55;
          t = m_17;
        }
      n_17 = t;
      {
        ATerm b_19 (ATerm t)
        {
          ATerm t_36 = NULL;
          t_36 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_36), (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue))));
          t = t_36;
          return(t);
        }
        t = if_verbose3_1_0(b_19, t);
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), n_17);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_17);
      }
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_55 = t;
        int k_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(k_55);
          }
        else
          {
            t = j_55;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(i_55);
        {
          ATerm c_19 (ATerm t)
          {
            t = term_l_55;
            return(t);
          }
          ATerm d_19 (ATerm t)
          {
            ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
            o_17 = t;
            {
              ATerm m_55 = t;
              int n_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
                  {
                    ATerm o_55 = t;
                    int p_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_36 = NULL;
                        t = eval_config_0_0(t);
                        z_36 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_36);
                        t = z_36;
                        ;
                        LocalPopChoice(p_55);
                      }
                    else
                      {
                        t = o_55;
                      }
                  }
                  ;
                  LocalPopChoice(n_55);
                }
              else
                {
                  t = m_55;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                  {
                    ATerm q_55 = t;
                    int r_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_37 = NULL;
                        t = eval_config_0_0(t);
                        d_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), d_37);
                        t = d_37;
                        ;
                        LocalPopChoice(r_55);
                      }
                    else
                      {
                        t = q_55;
                      }
                  }
                }
              p_17 = t;
              t = o_17;
              t = pass_verbose_0_0(t);
              q_17 = t;
              t = o_17;
              t = pass_keep_0_0(t);
              r_17 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
              {
                ATerm s_55 = t;
                int t_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_37 = NULL;
                    t = eval_config_0_0(t);
                    h_37 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), h_37);
                    t = h_37;
                    ;
                    LocalPopChoice(t_55);
                  }
                else
                  {
                    t = s_55;
                  }
                s_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_17), q_17), s_17), (ATerm) ATinsert(ATinsert(ATempty, p_17), term_u_55));
                t = concat_0_0(t);
              }
            }
            return(t);
          }
          t = xtc_transform_file_2_0(c_19, d_19, t);
        }
      }
    else
      {
        t = h_55;
        {
          ATerm j_19 (ATerm t)
          {
            t = term_l_55;
            return(t);
          }
          ATerm k_19 (ATerm t)
          {
            ATerm t_17 = NULL,v_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
            t_17 = t;
            {
              ATerm v_55 = t;
              int w_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
                  {
                    ATerm x_55 = t;
                    int y_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_37 = NULL;
                        t = eval_config_0_0(t);
                        l_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_37);
                        t = l_37;
                        ;
                        LocalPopChoice(y_55);
                      }
                    else
                      {
                        t = x_55;
                      }
                  }
                  ;
                  LocalPopChoice(w_55);
                }
              else
                {
                  t = v_55;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                  {
                    ATerm z_55 = t;
                    int a_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_37 = NULL;
                        t = eval_config_0_0(t);
                        p_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), p_37);
                        t = p_37;
                        ;
                        LocalPopChoice(a_56);
                      }
                    else
                      {
                        t = z_55;
                      }
                  }
                }
              v_17 = t;
              t = t_17;
              t = pass_verbose_0_0(t);
              x_17 = t;
              t = t_17;
              t = pass_keep_0_0(t);
              y_17 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
              {
                ATerm b_56 = t;
                int c_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_37 = NULL;
                    t = eval_config_0_0(t);
                    t_37 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), t_37);
                    t = t_37;
                    ;
                    LocalPopChoice(c_56);
                  }
                else
                  {
                    t = b_56;
                  }
                z_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_17), x_17), z_17), (ATerm) ATinsert(ATinsert(ATempty, v_17), term_u_55));
                t = concat_0_0(t);
              }
            }
            return(t);
          }
          t = xtc_transform_term_2_0(j_19, k_19, t);
        }
      }
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    ATerm u_37 = NULL;
    u_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_37), (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue))));
    t = u_37;
    return(t);
  }
  t = if_verbose2_1_0(l_19, t);
  {
    ATerm m_19 (ATerm t)
    {
      ATerm o_19 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(a_18), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(a_18), term_d_56));
        return(t);
      }
      t = if_verbose1_1_0(o_19, t);
      return(t);
    }
    ATerm n_19 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_56 = t;
            int h_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(h_56);
              }
            else
              {
                t = g_56;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(f_56);
            {
              ATerm p_19 (ATerm t)
              {
                t = term_i_56;
                return(t);
              }
              ATerm q_19 (ATerm t)
              {
                ATerm b_18 = NULL;
                t = pass_verbose_0_0(t);
                b_18 = t;
                t = (ATerm) ATinsert(ATempty, b_18);
                t = concat_0_0(t);
                return(t);
              }
              t = xtc_transform_file_2_0(p_19, q_19, t);
            }
          }
        else
          {
            t = e_56;
            {
              ATerm r_19 (ATerm t)
              {
                t = term_i_56;
                return(t);
              }
              ATerm z_19 (ATerm t)
              {
                ATerm c_18 = NULL;
                t = pass_verbose_0_0(t);
                c_18 = t;
                t = (ATerm) ATinsert(ATempty, c_18);
                t = concat_0_0(t);
                return(t);
              }
              t = xtc_transform_term_2_0(r_19, z_19, t);
            }
          }
        t = frontend_0_0(t);
        t = output_frontend_0_0(t);
        t = extract_0_0(t);
        t = warnings_0_0(t);
        {
          ATerm j_56 = t;
          int k_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_56 = t;
              int m_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(m_56);
                }
              else
                {
                  t = l_56;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(k_56);
              {
                ATerm b_20 (ATerm t)
                {
                  t = term_n_56;
                  return(t);
                }
                ATerm e_20 (ATerm t)
                {
                  ATerm d_18 = NULL;
                  t = pass_verbose_0_0(t);
                  d_18 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_18), term_x_34);
                  return(t);
                }
                t = xtc_transform_file_2_0(b_20, e_20, t);
              }
            }
          else
            {
              t = j_56;
              {
                ATerm f_20 (ATerm t)
                {
                  t = term_n_56;
                  return(t);
                }
                ATerm g_20 (ATerm t)
                {
                  ATerm f_18 = NULL;
                  t = pass_verbose_0_0(t);
                  f_18 = t;
                  t = (ATerm) ATinsert(CheckATermList(f_18), term_x_34);
                  return(t);
                }
                t = xtc_transform_term_2_0(f_20, g_20, t);
              }
            }
          t = rename_defs_0_0(t);
        }
      }
      return(t);
    }
    t = profile_p__2_0(m_19, n_19, t);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = SSL_is_string(o_18);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 (ATerm t)
            {
              ATerm s_56 = t;
              int t_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(t_56);
                }
              else
                {
                  t = s_56;
                }
              return(t);
            }
            t = map_1_0(h_20, t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            {
              ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
              s_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_18 = ATgetArgument(t, 0);
                  t = t_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_18 = ATgetArgument(t, 0);
                      t = t_18;
                      {
                        ATerm u_56 = t;
                        int v_56 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_18);
                            {
                              ATerm w_56 = t;
                              int x_56 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_38 = NULL;
                                  t = eval_config_0_0(t);
                                  m_38 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), t_18, m_38);
                                  t = m_38;
                                  ;
                                  LocalPopChoice(x_56);
                                }
                              else
                                {
                                  t = w_56;
                                }
                            }
                            ;
                            LocalPopChoice(v_56);
                          }
                        else
                          {
                            t = u_56;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = t_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_18 = NULL,z_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_18 = ATgetArgument(t, 0);
                          u_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_18;
                      t = eval_config_0_0(t);
                      y_18 = t;
                      t = u_18;
                      t = eval_config_0_0(t);
                      z_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_38 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_57 = ATgetArgument(t, 0);
            ATerm b_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_19, h_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_57 = ATgetFirst((ATermList) t);
            r_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_38;
        ;
        LocalPopChoice(z_56);
      }
    else
      {
        t = y_56;
        t = (ATerm) ATempty;
      }
    i_19 = t;
    t = SSL_table_put(g_19, h_19, i_19);
    t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  s_19 = t;
  t = b_104(t);
  t_19 = t;
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_19 = ATgetFirst((ATermList) t);
        u_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_19, (ATerm)ATmakeAppl(sym_Scopes_0), u_19);
    t = v_19;
    {
      ATerm i_20 (ATerm t)
      {
        ATerm w_19 = NULL;
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_19, w_19);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_20, t);
      t = s_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_86(t);
      t = m_86(t);
      ;
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
      t = m_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,c_20 = NULL,d_20 = NULL;
  a_20 = t;
  t = a_104(t);
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, term_h_57);
  {
    ATerm i_57 = t;
    int j_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_57 = ATgetArgument(t, 0);
            ATerm l_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_20, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_57);
      }
    else
      {
        t = i_57;
        t = (ATerm) ATempty;
      }
    d_20 = t;
    t = SSL_table_put(c_20, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_20), (ATerm) ATempty));
    t = a_20;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm j_20 = NULL;
  ATerm l_20 (ATerm t)
  {
    t = term_d_53;
    return(t);
  }
  t = begin_scope_1_0(l_20, t);
  {
    ATerm m_20 (ATerm t)
    {
      ATerm k_20 = NULL;
      k_20 = t;
      {
        ATerm m_57 = t;
        int n_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(n_57);
          }
        else
          {
            t = m_57;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_20 != NULL) && (j_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_20 = ATgetFirst((ATermList) t);
            {
              ATerm o_57 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(j_20);
        {
          ATerm o_20 (ATerm t)
          {
            ATerm p_57 = t;
            int q_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_20 = NULL;
                n_20 = t;
                t = SSL_remove(n_20);
                ;
                LocalPopChoice(q_57);
              }
            else
              {
                t = p_57;
              }
            return(t);
          }
          t = map_1_0(o_20, t);
          t = k_20;
          {
            ATerm q_20 (ATerm t)
            {
              t = term_d_53;
              return(t);
            }
            t = end_scope_1_0(q_20, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(b_115, m_20, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm r_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,r_20 = NULL;
      p_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_57 = t;
        int u_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_38 = NULL;
            t = eval_config_0_0(t);
            x_38 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_38);
            t = x_38;
            ;
            LocalPopChoice(u_57);
          }
        else
          {
            t = t_57;
          }
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_20, term_m_36);
        t = geq_0_0(t);
        t = p_20;
        t = a_107(t);
      }
      ;
      LocalPopChoice(s_57);
    }
  else
    {
      t = r_57;
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL,e_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_57 = ATgetArgument(t, 0);
      if(match_cons(v_57, sym__4))
        {
          s_20 = ATgetArgument(v_57, 0);
          t_20 = ATgetArgument(v_57, 1);
          u_20 = ATgetArgument(v_57, 2);
          v_20 = ATgetArgument(v_57, 3);
        }
      else
        _fail(t);
      {
        ATerm w_57 = ATgetArgument(t, 1);
        if(match_cons(w_57, sym__4))
          {
            w_20 = ATgetArgument(w_57, 0);
            x_20 = ATgetArgument(w_57, 1);
            y_20 = ATgetArgument(w_57, 2);
            z_20 = ATgetArgument(w_57, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_20, w_20);
  {
    ATerm x_57 = t;
    int y_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(s_20, w_20);
        ;
        LocalPopChoice(y_57);
      }
    else
      {
        t = x_57;
        t = SSL_subtr(s_20, w_20);
      }
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_20, x_20);
    {
      ATerm z_57 = t;
      int a_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(t_20, x_20);
          ;
          LocalPopChoice(a_58);
        }
      else
        {
          t = z_57;
          t = SSL_subtr(t_20, x_20);
        }
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_20, y_20);
      {
        ATerm b_58 = t;
        int c_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(u_20, y_20);
            ;
            LocalPopChoice(c_58);
          }
        else
          {
            t = b_58;
            t = SSL_subtr(u_20, y_20);
          }
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, z_20);
        {
          ATerm d_58 = t;
          int e_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(v_20, z_20);
              ;
              LocalPopChoice(e_58);
            }
          else
            {
              t = d_58;
              t = SSL_subtr(v_20, z_20);
            }
          g_21 = t;
          t = (ATerm) ATmakeAppl(sym__4, a_21, c_21, e_21, g_21);
        }
      }
    }
  }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  i_21 = t;
  t = times_0_0(t);
  k_21 = t;
  t = i_21;
  t = v_110(t);
  l_21 = t;
  t = times_0_0(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_21, k_21);
  t = diff_times_0_0(t);
  n_21 = t;
  if(match_cons(t, sym__4))
    {
      o_21 = ATgetArgument(t, 0);
      {
        ATerm f_58 = ATgetArgument(t, 1);
      }
      p_21 = ATgetArgument(t, 2);
      {
        ATerm g_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_21, p_21);
  {
    ATerm h_58 = t;
    int i_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_21, p_21);
        ;
        LocalPopChoice(i_58);
      }
    else
      {
        t = h_58;
        t = SSL_addr(o_21, p_21);
      }
    r_21 = t;
    t = SSL_TicksToSeconds(r_21);
    q_21 = t;
    t = n_21;
    if(match_cons(t, sym__4))
      {
        ATerm j_58 = ATgetArgument(t, 0);
        s_21 = ATgetArgument(t, 1);
        {
          ATerm k_58 = ATgetArgument(t, 2);
        }
        t_21 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
    {
      ATerm l_58 = t;
      int m_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(s_21, t_21);
          ;
          LocalPopChoice(m_58);
        }
      else
        {
          t = l_58;
          t = SSL_addr(s_21, t_21);
        }
      v_21 = t;
      t = SSL_TicksToSeconds(v_21);
      u_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_21), term_o_58), q_21), term_n_58);
      t = u_110(t);
      t = l_21;
    }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  y_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)));
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        t = eval_config_0_0(t);
        b_39 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), b_39);
        t = b_39;
        ;
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
      }
    z_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), z_21), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
    t = y_21;
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm r_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_22 = NULL,g_22 = NULL;
      e_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_58 = t;
        int u_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_39 = NULL;
            t = eval_config_0_0(t);
            f_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_39);
            t = f_39;
            ;
            LocalPopChoice(u_58);
          }
        else
          {
            t = t_58;
          }
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_22, term_z_38);
        t = geq_0_0(t);
        t = e_22;
        t = e_107(t);
      }
      ;
      LocalPopChoice(s_58);
    }
  else
    {
      t = r_58;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm v_58 = t;
  int w_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_22 = NULL,o_22 = NULL;
      m_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_58 = t;
        int y_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_39 = NULL;
            t = eval_config_0_0(t);
            j_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_39);
            t = j_39;
            ;
            LocalPopChoice(y_58);
          }
        else
          {
            t = x_58;
          }
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, term_g_39);
        t = geq_0_0(t);
        t = m_22;
        t = d_107(t);
      }
      ;
      LocalPopChoice(w_58);
    }
  else
    {
      t = v_58;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_22;
        if((y_22 != t))
          {
            _fail(t);
          }
        t = x_22;
        ;
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = x_22;
        {
          ATerm b_59 = t;
          int c_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_22, z_22);
              ;
              LocalPopChoice(c_59);
            }
          else
            {
              t = b_59;
              t = SSL_gtr(y_22, z_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_22, z_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm d_59 = t;
  int e_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL,f_23 = NULL;
      c_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_59 = t;
        int g_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_39 = NULL;
            t = eval_config_0_0(t);
            t_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_39);
            t = t_39;
            ;
            LocalPopChoice(g_59);
          }
        else
          {
            t = f_59;
          }
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_x_45);
        t = geq_0_0(t);
        t = c_23;
        t = f_107(t);
      }
      ;
      LocalPopChoice(e_59);
    }
  else
    {
      t = d_59;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
  {
    ATerm n_23 (ATerm t)
    {
      ATerm h_59 = t;
      int i_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_23;
          ;
          LocalPopChoice(i_59);
        }
      else
        {
          t = h_59;
          {
            ATerm j_59 = t;
            int k_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_39 = NULL,v_39 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_39 = ATgetFirst((ATermList) t);
                    v_39 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_23;
                {
                  ATerm b_21 (ATerm t)
                  {
                    ATerm w_39 = NULL;
                    w_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_39, w_39);
                    t = l_97(t);
                    return(t);
                  }
                  t = fetch_1_0(b_21, t);
                  t = v_39;
                  t = n_23(t);
                }
                ;
                LocalPopChoice(k_59);
              }
            else
              {
                t = j_59;
                t = Cons_2_0(_id, n_23, t);
              }
          }
        }
      return(t);
    }
    t = n_23(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym__3))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      s_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_23, r_23);
  {
    ATerm l_59 = t;
    int m_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_59 = ATgetArgument(t, 0);
            ATerm o_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_23, r_23);
        ;
        LocalPopChoice(m_59);
      }
    else
      {
        t = l_59;
        t = (ATerm) ATempty;
      }
    u_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_23, s_23);
    {
      ATerm d_21 (ATerm t)
      {
        ATerm a_24 = NULL;
        if(match_cons(t, sym__2))
          {
            a_24 = ATgetArgument(t, 0);
            if((a_24 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(d_21, t);
      w_23 = t;
      t = SSL_table_put(q_23, r_23, w_23);
      t = (ATerm) ATmakeAppl(sym__3, q_23, r_23, s_23);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_24;
  {
    ATerm f_21 (ATerm t)
    {
      ATerm e_24 = NULL,g_24 = NULL;
      if(match_cons(t, sym__2))
        {
          e_24 = ATgetArgument(t, 0);
          g_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, d_24, e_24, g_24);
      t = d_112(t);
      return(t);
    }
    t = map_1_0(f_21, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_24 (ATerm q_24, ATerm t)
  {
    t = SSL_fclose(q_24);
    return(t);
  }
  ATerm u_24 = NULL,v_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_24 = ATgetArgument(t, 0);
      {
        ATerm p_59 = t;
        int q_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_24);
            ;
            LocalPopChoice(q_59);
          }
        else
          {
            t = p_59;
            t = x_24(v_24, t);
          }
      }
    }
  else
    {
      t = x_24(v_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_24 = NULL;
  t = SSL_stdin_stream();
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  t = SSL_stdout_stream();
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = SSL_stderr_stream();
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_59 = ATgetArgument(t, 0);
      ATerm s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL,g_40 = NULL;
        f_40 = t;
        t = SSL_explode_term(f_40);
        if(match_cons(t, sym__2))
          {
            ATerm v_59 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_59) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_59 = ATgetArgument(t, 1);
              if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
                {
                  g_40 = ATgetFirst((ATermList) w_59);
                  {
                    ATerm x_59 = (ATerm) ATgetNext((ATermList) w_59);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_40;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_40;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_40;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_40;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_59);
      }
    else
      {
        t = t_59;
        {
          ATerm y_59 = t;
          int z_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
              ATerm w_21 (ATerm t)
              {
                ATerm k_25 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    k_25 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_25;
                return(t);
              }
              t = _2_0(w_21, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_25 = ATgetArgument(t, 0);
                  i_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_25, i_25);
              j_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_25);
              ;
              LocalPopChoice(z_59);
            }
          else
            {
              t = y_59;
              {
                ATerm m_25 = NULL,o_25 = NULL,p_25 = NULL;
                ATerm x_21 (ATerm t)
                {
                  ATerm q_25 = NULL;
                  q_25 = t;
                  t = SSL_is_string(q_25);
                  return(t);
                }
                t = _2_0(x_21, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_25 = ATgetArgument(t, 0);
                    o_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_25, o_25);
                p_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      u_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_25, term_c_60);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
      {
        ATerm h_40 = NULL;
        h_40 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_40;
        _fail(t);
      }
    }
  r_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_25);
  s_25 = t;
  t = r_25;
  t = fclose_0_0(t);
  t = s_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_60 = t;
  int e_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL;
      x_25 = t;
      t = SSL_access(x_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(e_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_60;
      {
        ATerm f_60 = t;
        int g_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_40 = NULL;
            ATerm h_60 = t;
            if((PushChoice() == 0))
              {
                ATerm z_25 = NULL;
                z_25 = t;
                t = SSL_access(z_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_60;
              }
            k_40 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = k_40;
            ;
            LocalPopChoice(g_60);
          }
        else
          {
            t = f_60;
            {
              ATerm n_40 = NULL;
              n_40 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = n_40;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  {
    ATerm a_22 (ATerm t)
    {
      ATerm q_40 = NULL;
      q_40 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_40), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = q_40;
      return(t);
    }
    t = if_verbose5_1_0(a_22, t);
    {
      ATerm i_60 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, a_26));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_60;
        }
      b_26 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, a_26));
      t = b_26;
      {
        ATerm b_22 (ATerm t)
        {
          ATerm t_40 = NULL;
          t_40 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_40), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = t_40;
          return(t);
        }
        t = if_verbose4_1_0(b_22, t);
        t = read_repository_file_0_0(t);
        {
          ATerm d_22 (ATerm t)
          {
            ATerm d_26 = NULL;
            d_26 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = d_26;
            return(t);
          }
          t = if_verbose6_1_0(d_22, t);
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_60, c_26);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm f_22 (ATerm t)
            {
              ATerm e_26 = NULL;
              e_26 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = e_26;
              return(t);
            }
            t = if_verbose6_1_0(f_22, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, a_26), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_j_60, (ATerm)ATmakeAppl(sym_Imported_1, a_26), (ATerm) ATempty);
            {
              ATerm h_22 (ATerm t)
              {
                ATerm f_26 = NULL;
                f_26 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = f_26;
                return(t);
              }
              t = if_verbose4_1_0(h_22, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm k_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_60);
    }
  else
    {
      t = k_60;
      {
        ATerm m_60 = t;
        int n_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 (ATerm t)
            {
              t = filter_1_0(m_100, t);
              return(t);
            }
            t = Cons_2_0(m_100, i_22, t);
            ;
            LocalPopChoice(n_60);
          }
        else
          {
            t = m_60;
            {
              ATerm l_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_60 = ATgetFirst((ATermList) t);
                  l_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_26;
              t = filter_1_0(m_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm n_26 (ATerm t)
  {
    ATerm p_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        t = n_26(t);
        ;
        LocalPopChoice(q_60);
      }
    else
      {
        t = p_60;
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_60 = t;
  int s_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm t_60 = t;
        int u_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_40 = NULL;
            t = eval_config_0_0(t);
            z_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), z_40);
            t = z_40;
            ;
            LocalPopChoice(u_60);
          }
        else
          {
            t = t_60;
          }
      }
      ;
      LocalPopChoice(s_60);
    }
  else
    {
      t = r_60;
      {
        ATerm v_60 = t;
        int w_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(w_60);
          }
        else
          {
            t = v_60;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_26 = NULL;
  ATerm j_22 (ATerm t)
  {
    ATerm a_41 = NULL;
    a_41 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = a_41;
    return(t);
  }
  t = if_verbose5_1_0(j_22, t);
  o_26 = t;
  {
    ATerm x_60 = t;
    int y_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(y_60);
      }
    else
      {
        t = x_60;
        {
          ATerm p_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_26 = t;
          {
            ATerm k_22 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm z_60 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_60;
                  }
              }
              return(t);
            }
            t = repeat_1_0(k_22, t);
            t = p_26;
          }
        }
      }
    t = o_26;
    {
      ATerm l_22 (ATerm t)
      {
        ATerm d_41 = NULL;
        d_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = d_41;
        return(t);
      }
      t = if_verbose5_1_0(l_22, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_61 = t;
  int b_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_22 (ATerm t)
      {
        ATerm g_41 = NULL;
        g_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = g_41;
        return(t);
      }
      t = if_verbose5_1_0(n_22, t);
      t = xtc_load_0_0(t);
      {
        ATerm c_61 = t;
        int d_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
            if(match_cons(t, sym__2))
              {
                m_41 = ATgetArgument(t, 0);
                n_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, m_41));
            {
              ATerm p_22 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((n_41 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((o_41 != NULL) && (o_41 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      o_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_22, t);
              t = not_null(o_41);
            }
            ;
            LocalPopChoice(d_61);
          }
        else
          {
            t = c_61;
            {
              ATerm r_41 = NULL,s_41 = NULL;
              r_41 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, r_41));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_61 = ATgetFirst((ATermList) t);
                  if(match_cons(e_61, sym__2))
                    {
                      ATerm g_61 = ATgetArgument(e_61, 0);
                      s_41 = ATgetArgument(e_61, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm f_61 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_41;
            }
          }
        {
          ATerm q_22 (ATerm t)
          {
            ATerm t_41 = NULL;
            t_41 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = t_41;
            return(t);
          }
          t = if_verbose5_1_0(q_22, t);
        }
      }
      ;
      LocalPopChoice(b_61);
    }
  else
    {
      t = a_61;
      {
        ATerm v_26 = NULL;
        v_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), v_26), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_61), v_26), term_h_61);
        {
          ATerm r_22 (ATerm t)
          {
            ATerm n_42 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm s_22 (ATerm t)
              {
                ATerm l_42 = NULL,m_42 = NULL;
                l_42 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), l_42);
                m_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_42, m_42);
                return(t);
              }
              t = map_1_0(s_22, t);
              n_42 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_42), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = n_42;
            }
            return(t);
          }
          t = if_verbose5_1_0(r_22, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_26;
  {
    ATerm j_61 = t;
    int k_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26);
        {
          ATerm l_61 = t;
          int m_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_42 = NULL;
              t = eval_config_0_0(t);
              t_42 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26, t_42);
              t = t_42;
              ;
              LocalPopChoice(m_61);
            }
          else
            {
              t = l_61;
            }
        }
        ;
        LocalPopChoice(k_61);
      }
    else
      {
        t = j_61;
        t = (ATerm) ATempty;
      }
    a_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
    {
      ATerm n_61 = t;
      int o_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_61 = ATgetArgument(t, 0);
              ATerm q_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_26;
          {
            ATerm t_22 (ATerm t)
            {
              t = a_27;
              return(t);
            }
            t = at_end_1_0(t_22, t);
          }
          ;
          LocalPopChoice(o_61);
        }
      else
        {
          t = n_61;
          {
            ATerm x_42 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_26, a_27));
            if(match_cons(t, sym__2))
              {
                ATerm r_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                x_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_42;
            t = concat_0_0(t);
          }
        }
      b_27 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26, b_27);
      t = (ATerm) ATmakeAppl(sym__3, term_b_55, y_26, b_27);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_27 = NULL;
      t = term_q_52;
      t = l_0(t);
      p_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_61, term_t_61, p_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = j_0(t);
      t = m_27;
      t = k_0(t);
      u_27 = t;
      t = (ATerm) ATinsert(CheckATermList(n_27), u_27);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27);
        {
          ATerm w_61 = t;
          int x_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_43 = NULL;
              t = eval_config_0_0(t);
              b_43 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27, b_43);
              t = b_43;
              ;
              LocalPopChoice(x_61);
            }
          else
            {
              t = w_61;
            }
          t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27);
          t = (ATerm) ATmakeAppl(sym__2, term_b_55, v_27);
        }
        ;
        LocalPopChoice(v_61);
      }
    else
      {
        t = u_61;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27, w_27);
        t = (ATerm) ATmakeAppl(sym__3, term_b_55, v_27, w_27);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,b_28 = NULL,d_28 = NULL;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_27;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27);
        {
          ATerm a_62 = t;
          int b_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_43 = NULL;
              t = eval_config_0_0(t);
              f_43 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27, f_43);
              t = f_43;
              ;
              LocalPopChoice(b_62);
            }
          else
            {
              t = a_62;
            }
        }
        ;
        LocalPopChoice(z_61);
      }
    else
      {
        t = y_61;
        t = (ATerm) ATempty;
      }
    b_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_28, z_27);
    {
      ATerm c_62 = t;
      int d_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_62 = ATgetArgument(t, 0);
              ATerm f_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_28;
          {
            ATerm u_22 (ATerm t)
            {
              t = z_27;
              return(t);
            }
            t = at_end_1_0(u_22, t);
          }
          ;
          LocalPopChoice(d_62);
        }
      else
        {
          t = c_62;
          {
            ATerm j_43 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_28, z_27));
            if(match_cons(t, sym__2))
              {
                ATerm g_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                j_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_43;
            t = concat_0_0(t);
          }
        }
      d_28 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27, d_28);
      t = (ATerm) ATmakeAppl(sym__3, term_b_55, y_27, d_28);
    }
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm w_22 (ATerm t)
      {
        ATerm q_28 = NULL;
        q_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_28);
        t = term_q_52;
        return(t);
      }
      ATerm a_23 (ATerm t)
      {
        t = term_j_62;
        return(t);
      }
      t = ArgOption_3_0(v_22, w_22, a_23, t);
      ;
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
      {
        ATerm k_62 = t;
        int l_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 (ATerm t)
            {
              ATerm r_28 = NULL;
              r_28 = t;
              if(match_string(t, "-o"))
                {
                  t = r_28;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
                    _fail(t);
                  t = r_28;
                }
              return(t);
            }
            ATerm d_23 (ATerm t)
            {
              ATerm s_28 = NULL;
              s_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_28);
              t = term_q_52;
              return(t);
            }
            ATerm e_23 (ATerm t)
            {
              t = term_m_62;
              return(t);
            }
            t = ArgOption_3_0(b_23, d_23, e_23, t);
            ;
            LocalPopChoice(l_62);
          }
        else
          {
            t = k_62;
            {
              ATerm n_62 = t;
              int o_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_23 (ATerm t)
                  {
                    ATerm t_28 = NULL;
                    t_28 = t;
                    if(match_string(t, "-I"))
                      {
                        t = t_28;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
                          _fail(t);
                        t = t_28;
                      }
                    return(t);
                  }
                  ATerm h_23 (ATerm t)
                  {
                    ATerm u_28 = NULL;
                    u_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_p_62, (ATerm) ATinsert(ATinsert(ATempty, u_28), term_p_62));
                    t = extend_config_0_0(t);
                    t = term_q_52;
                    return(t);
                  }
                  ATerm i_23 (ATerm t)
                  {
                    t = term_q_62;
                    return(t);
                  }
                  t = ArgOption_3_0(g_23, h_23, i_23, t);
                  ;
                  LocalPopChoice(o_62);
                }
              else
                {
                  t = n_62;
                  {
                    ATerm r_62 = t;
                    int s_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_23 (ATerm t)
                        {
                          ATerm v_28 = NULL;
                          v_28 = t;
                          if(match_string(t, "--main"))
                            {
                              t = v_28;
                            }
                          else
                            {
                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
                                _fail(t);
                              t = v_28;
                            }
                          return(t);
                        }
                        ATerm o_23 (ATerm t)
                        {
                          ATerm w_28 = NULL;
                          w_28 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), w_28);
                          t = term_q_52;
                          return(t);
                        }
                        ATerm p_23 (ATerm t)
                        {
                          t = term_t_62;
                          return(t);
                        }
                        t = ArgOption_3_0(j_23, o_23, p_23, t);
                        ;
                        LocalPopChoice(s_62);
                      }
                    else
                      {
                        t = r_62;
                        {
                          ATerm u_62 = t;
                          int v_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_23 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm x_23 (ATerm t)
                              {
                                ATerm y_28 = NULL;
                                y_28 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_u_34, (ATerm) ATinsert(ATempty, y_28));
                                t = post_extend_config_0_0(t);
                                t = term_q_52;
                                return(t);
                              }
                              ATerm y_23 (ATerm t)
                              {
                                t = term_w_62;
                                return(t);
                              }
                              t = ArgOption_3_0(t_23, x_23, y_23, t);
                              ;
                              LocalPopChoice(v_62);
                            }
                          else
                            {
                              t = u_62;
                              {
                                ATerm x_62 = t;
                                int y_62 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_23 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm b_24 (ATerm t)
                                    {
                                      ATerm a_29 = NULL;
                                      a_29 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_z_62, (ATerm) ATinsert(ATempty, a_29));
                                      t = extend_config_0_0(t);
                                      t = term_q_52;
                                      return(t);
                                    }
                                    ATerm f_24 (ATerm t)
                                    {
                                      t = term_a_63;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(z_23, b_24, f_24, t);
                                    ;
                                    LocalPopChoice(y_62);
                                  }
                                else
                                  {
                                    t = x_62;
                                    {
                                      ATerm b_63 = t;
                                      int c_63 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_24 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm i_24 (ATerm t)
                                          {
                                            ATerm b_29 = NULL;
                                            b_29 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_d_63, (ATerm) ATinsert(ATempty, b_29));
                                            t = extend_config_0_0(t);
                                            t = term_q_52;
                                            return(t);
                                          }
                                          ATerm j_24 (ATerm t)
                                          {
                                            t = term_e_63;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(h_24, i_24, j_24, t);
                                          ;
                                          LocalPopChoice(c_63);
                                        }
                                      else
                                        {
                                          t = b_63;
                                          {
                                            ATerm f_63 = t;
                                            int g_63 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_24 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm l_24 (ATerm t)
                                                {
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = term_q_52;
                                                  return(t);
                                                }
                                                ATerm m_24 (ATerm t)
                                                {
                                                  t = term_h_63;
                                                  return(t);
                                                }
                                                t = Option_3_0(k_24, l_24, m_24, t);
                                                ;
                                                LocalPopChoice(g_63);
                                              }
                                            else
                                              {
                                                t = f_63;
                                                {
                                                  ATerm i_63 = t;
                                                  int j_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_24 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm o_24 (ATerm t)
                                                      {
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = term_q_52;
                                                        return(t);
                                                      }
                                                      ATerm p_24 (ATerm t)
                                                      {
                                                        t = term_k_63;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(n_24, o_24, p_24, t);
                                                      ;
                                                      LocalPopChoice(j_63);
                                                    }
                                                  else
                                                    {
                                                      t = i_63;
                                                      {
                                                        ATerm l_63 = t;
                                                        int m_63 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_24 (ATerm t)
                                                            {
                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm s_24 (ATerm t)
                                                            {
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = term_q_52;
                                                              return(t);
                                                            }
                                                            ATerm t_24 (ATerm t)
                                                            {
                                                              t = term_n_63;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(r_24, s_24, t_24, t);
                                                            ;
                                                            LocalPopChoice(m_63);
                                                          }
                                                        else
                                                          {
                                                            t = l_63;
                                                            {
                                                              ATerm o_63 = t;
                                                              int p_63 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_24 (ATerm t)
                                                                  {
                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm b_25 (ATerm t)
                                                                  {
                                                                    ATerm c_29 = NULL,d_29 = NULL;
                                                                    c_29 = t;
                                                                    t = SSL_string_to_int(c_29);
                                                                    d_29 = t;
                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_29);
                                                                    t = term_q_52;
                                                                    return(t);
                                                                  }
                                                                  ATerm c_25 (ATerm t)
                                                                  {
                                                                    t = term_q_63;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3_0(w_24, b_25, c_25, t);
                                                                  ;
                                                                  LocalPopChoice(p_63);
                                                                }
                                                              else
                                                                {
                                                                  t = o_63;
                                                                  {
                                                                    ATerm r_63 = t;
                                                                    int s_63 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_25 (ATerm t)
                                                                        {
                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm e_25 (ATerm t)
                                                                        {
                                                                          ATerm e_29 = NULL,f_29 = NULL;
                                                                          e_29 = t;
                                                                          t = SSL_string_to_int(e_29);
                                                                          f_29 = t;
                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), f_29);
                                                                          t = term_q_52;
                                                                          return(t);
                                                                        }
                                                                        ATerm f_25 (ATerm t)
                                                                        {
                                                                          t = term_t_63;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3_0(d_25, e_25, f_25, t);
                                                                        ;
                                                                        LocalPopChoice(s_63);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_63;
                                                                        {
                                                                          ATerm u_63 = t;
                                                                          int v_63 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm g_25 (ATerm t)
                                                                              {
                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm l_25 (ATerm t)
                                                                              {
                                                                                t = term_x_63;
                                                                                t = toggle_config_0_0(t);
                                                                                t = term_q_52;
                                                                                return(t);
                                                                              }
                                                                              ATerm n_25 (ATerm t)
                                                                              {
                                                                                t = term_y_63;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3_0(g_25, l_25, n_25, t);
                                                                              ;
                                                                              LocalPopChoice(v_63);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_63;
                                                                              {
                                                                                ATerm z_63 = t;
                                                                                int a_64 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm v_25 (ATerm t)
                                                                                    {
                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_25 (ATerm t)
                                                                                    {
                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                      t = term_q_52;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_25 (ATerm t)
                                                                                    {
                                                                                      t = term_b_64;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(v_25, w_25, y_25, t);
                                                                                    ;
                                                                                    LocalPopChoice(a_64);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_63;
                                                                                    {
                                                                                      ATerm c_64 = t;
                                                                                      int d_64 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm j_26 (ATerm t)
                                                                                          {
                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm k_26 (ATerm t)
                                                                                          {
                                                                                            ATerm g_29 = NULL;
                                                                                            g_29 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym__2, term_e_64, (ATerm) ATinsert(ATempty, g_29));
                                                                                            t = extend_config_0_0(t);
                                                                                            t = term_q_52;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_26 (ATerm t)
                                                                                          {
                                                                                            t = term_f_64;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3_0(j_26, k_26, m_26, t);
                                                                                          ;
                                                                                          LocalPopChoice(d_64);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_64;
                                                                                          {
                                                                                            ATerm g_64 = t;
                                                                                            int h_64 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_26 (ATerm t)
                                                                                                {
                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                                                    _fail(t);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_26 (ATerm t)
                                                                                                {
                                                                                                  ATerm h_29 = NULL,j_29 = NULL;
                                                                                                  h_29 = t;
                                                                                                  t = SSL_string_to_int(h_29);
                                                                                                  j_29 = t;
                                                                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_29);
                                                                                                  t = term_q_52;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_26 (ATerm t)
                                                                                                {
                                                                                                  t = term_i_64;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(q_26, r_26, s_26, t);
                                                                                                ;
                                                                                                LocalPopChoice(h_64);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_64;
                                                                                                {
                                                                                                  ATerm j_64 = t;
                                                                                                  int k_64 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm t_26 (ATerm t)
                                                                                                      {
                                                                                                        ATerm l_29 = NULL;
                                                                                                        l_29 = t;
                                                                                                        if(match_string(t, "-S"))
                                                                                                          {
                                                                                                            t = l_29;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
                                                                                                              _fail(t);
                                                                                                            t = l_29;
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm u_26 (ATerm t)
                                                                                                      {
                                                                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                                                                                                        t = term_q_52;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm w_26 (ATerm t)
                                                                                                      {
                                                                                                        t = term_l_64;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3_0(t_26, u_26, w_26, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(k_64);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = j_64;
                                                                                                      {
                                                                                                        ATerm m_64 = t;
                                                                                                        int n_64 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm c_27 (ATerm t)
                                                                                                            {
                                                                                                              ATerm m_29 = NULL;
                                                                                                              m_29 = t;
                                                                                                              if(match_string(t, "-h"))
                                                                                                                {
                                                                                                                  t = m_29;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
                                                                                                                    _fail(t);
                                                                                                                  t = m_29;
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm d_27 (ATerm t)
                                                                                                            {
                                                                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                              t = term_q_52;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm e_27 (ATerm t)
                                                                                                            {
                                                                                                              t = term_o_64;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(c_27, d_27, e_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(n_64);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = m_64;
                                                                                                            {
                                                                                                              ATerm p_64 = t;
                                                                                                              int q_64 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm f_27 (ATerm t)
                                                                                                                  {
                                                                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
                                                                                                                      _fail(t);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm g_27 (ATerm t)
                                                                                                                  {
                                                                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                    t = term_q_52;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm i_27 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_r_64;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(f_27, g_27, i_27, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(q_64);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_64;
                                                                                                                  {
                                                                                                                    ATerm s_64 = t;
                                                                                                                    int t_64 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm j_27 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm n_29 = NULL;
                                                                                                                          n_29 = t;
                                                                                                                          if(match_string(t, "-v"))
                                                                                                                            {
                                                                                                                              t = n_29;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
                                                                                                                                _fail(t);
                                                                                                                              t = n_29;
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm o_27 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                          t = term_q_52;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm q_27 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_u_64;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(j_27, o_27, q_27, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(t_64);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_64;
                                                                                                                        {
                                                                                                                          ATerm r_27 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm o_29 = NULL;
                                                                                                                            o_29 = t;
                                                                                                                            if(match_string(t, "--warning"))
                                                                                                                              {
                                                                                                                                t = o_29;
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
                                                                                                                                  _fail(t);
                                                                                                                                t = o_29;
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm s_27 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm p_29 = NULL;
                                                                                                                            p_29 = t;
                                                                                                                            {
                                                                                                                              ATerm v_64 = t;
                                                                                                                              int w_64 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
                                                                                                                                  {
                                                                                                                                    ATerm x_64 = t;
                                                                                                                                    int y_64 = stack_ptr;
                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                      {
                                                                                                                                        ATerm n_43 = NULL;
                                                                                                                                        t = eval_config_0_0(t);
                                                                                                                                        n_43 = t;
                                                                                                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), n_43);
                                                                                                                                        t = n_43;
                                                                                                                                        ;
                                                                                                                                        LocalPopChoice(y_64);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        t = x_64;
                                                                                                                                      }
                                                                                                                                    {
                                                                                                                                      ATerm x_27 (ATerm t)
                                                                                                                                      {
                                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                                                                                                                                          _fail(t);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm c_28 (ATerm t)
                                                                                                                                      {
                                                                                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                          _fail(t);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = Cons_2_0(x_27, c_28, t);
                                                                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                      t = (ATerm) ATmakeAppl(sym__3, term_b_55, term_v_50, (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(w_64);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = v_64;
                                                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_v_50, (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                  t = extend_config_0_0(t);
                                                                                                                                }
                                                                                                                              t = term_q_52;
                                                                                                                            }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm t_27 (ATerm t)
                                                                                                                          {
                                                                                                                            t = term_z_64;
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = ArgOption_3_0(r_27, s_27, t_27, t);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_65), term_j_65), term_m_65), term_l_65), term_k_65), term_j_65), term_i_65), term_h_65), term_g_65), term_f_65), term_e_65), term_d_65), term_c_65), term_b_65), term_a_65);
  return(t);
}
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm q_29 (ATerm t)
  {
    ATerm o_65 = t;
    int p_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_65);
      }
    else
      {
        t = o_65;
        t = Cons_2_0(h_93, q_29, t);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_29 = NULL,v_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_29 = ATgetFirst((ATermList) t);
      v_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_29 = NULL,a_30 = NULL;
        t = v_29;
        t = h_0(t);
        z_29 = t;
        t = t_29;
        t = g_0(t);
        a_30 = t;
        t = v_29;
        {
          ATerm e_28 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_29), a_30);
            return(t);
          }
          t = reverse_acc_2_0(g_0, e_28, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_52;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  t = term_q_52;
  t = e_0(t);
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_65), b_30), term_u_65), term_j_65), term_t_65), term_j_65), term_s_65), term_r_65), term_j_65), term_q_65);
  return(t);
}
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,f_30 = NULL,h_30 = NULL;
  h_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  c_30 = t;
  t = d_30;
  t = m_77(t);
  f_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, f_30), c_30);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  ATerm w_65 = t;
  int x_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_65 = t;
        int z_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_43 = NULL;
            t = eval_config_0_0(t);
            r_43 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_43);
            t = r_43;
            ;
            LocalPopChoice(z_65);
          }
        else
          {
            t = y_65;
          }
        k_30 = t;
      }
      ;
      LocalPopChoice(x_65);
    }
  else
    {
      t = w_65;
      {
        ATerm f_28 (ATerm t)
        {
          ATerm g_28 (ATerm t)
          {
            if(((k_30 != NULL) && (k_30 != t)))
              _fail(t);
            else
              k_30 = t;
            return(t);
          }
          t = Program_1_0(g_28, t);
          return(t);
        }
        t = fetch_1_0(f_28, t);
      }
    }
  {
    ATerm a_66 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_28 (ATerm t)
        {
          t = not_null(k_30);
          return(t);
        }
        t = short_description_1_0(h_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(b_66);
      }
    else
      {
        t = a_66;
      }
    t = term_c_66;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm i_28 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, i_28, t);
      {
        ATerm k_28 (ATerm t)
        {
          ATerm l_30 = NULL;
          l_30 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, l_30), term_d_66);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(k_28, t);
        {
          ATerm e_66 = t;
          int f_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_30 = NULL;
              ATerm n_28 (ATerm t)
              {
                t = not_null(k_30);
                return(t);
              }
              t = long_description_1_0(n_28, t);
              m_30 = t;
              t = (ATerm) ATinsert(CheckATermList(m_30), term_j_65);
              t = echo_0_0(t);
              ;
              LocalPopChoice(f_66);
            }
          else
            {
              t = e_66;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,r_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_30);
  n_30 = t;
  t = o_30;
  t = n_77(t);
  p_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_30), n_30);
  return(t);
}
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm v_30 (ATerm t)
  {
    ATerm g_66 = t;
    int h_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_93, _id, t);
        ;
        LocalPopChoice(h_66);
      }
    else
      {
        t = g_66;
        t = Cons_2_0(_id, v_30, t);
      }
    return(t);
  }
  t = v_30(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  b_31 = t;
  {
    ATerm i_66 = t;
    int j_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_66 = ATgetFirst((ATermList) t);
                ATerm l_66 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_31;
          }
        ;
        LocalPopChoice(j_66);
      }
    else
      {
        t = i_66;
        t = (ATerm) ATinsert(ATempty, b_31);
      }
    c_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_31);
    t = b_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_66 = t;
    int n_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_43 = NULL;
        t = eval_config_0_0(t);
        v_43 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_43);
        t = v_43;
        ;
        LocalPopChoice(n_66);
      }
    else
      {
        t = m_66;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_66 = t;
  int p_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_28 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_28 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_r_66;
        return(t);
      }
      ATerm x_28 (ATerm t)
      {
        t = term_s_66;
        return(t);
      }
      t = Option_3_0(o_28, p_28, x_28, t);
      ;
      LocalPopChoice(p_66);
    }
  else
    {
      t = o_66;
      {
        ATerm i_29 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_29 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_66;
          return(t);
        }
        ATerm r_29 (ATerm t)
        {
          t = term_u_66;
          return(t);
        }
        t = Option_3_0(i_29, k_29, r_29, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  if(match_cons(t, sym__3))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      t_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_31, s_31);
  {
    ATerm v_66 = t;
    int w_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_66 = ATgetArgument(t, 0);
            ATerm y_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_31, s_31);
        ;
        LocalPopChoice(w_66);
      }
    else
      {
        t = v_66;
        t = (ATerm) ATempty;
      }
    u_31 = t;
    t = SSL_table_put(r_31, s_31, (ATerm) ATinsert(CheckATermList(u_31), t_31));
    t = (ATerm) ATmakeAppl(sym__3, r_31, s_31, t_31);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_32 = NULL;
      t = term_q_52;
      t = d_0(t);
      l_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_61, term_t_61, l_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_32 = ATgetFirst((ATermList) t);
          k_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = a_0(t);
      t = term_q_52;
      t = c_0(t);
      q_32 = t;
      t = (ATerm) ATinsert(CheckATermList(k_32), q_32);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  {
    ATerm z_66 = t;
    int a_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_67;
        t = a_112(t);
        ;
        LocalPopChoice(a_67);
      }
    else
      {
        t = z_66;
      }
    t = s_32;
    {
      ATerm u_29 (ATerm t)
      {
        ATerm t_32 = NULL;
        t_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, t_32);
        return(t);
      }
      ATerm w_29 (ATerm t)
      {
        ATerm c_67 = t;
        int d_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_67 = t;
            int f_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(f_67);
              }
            else
              {
                t = e_67;
                t = a_112(t);
                t = Cons_2_0(_id, w_29, t);
              }
            ;
            LocalPopChoice(d_67);
          }
        else
          {
            t = c_67;
            {
              ATerm v_32 = NULL,w_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_32 = ATgetFirst((ATermList) t);
                  w_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(w_32), (ATerm) ATmakeAppl(sym_Undefined_1, v_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_29, w_29, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_33;
  {
    ATerm x_29 (ATerm t)
    {
      ATerm g_67 = t;
      int j_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_111(t);
          ;
          LocalPopChoice(j_67);
        }
      else
        {
          t = g_67;
          {
            ATerm k_67 = t;
            int l_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_29 (ATerm t)
                {
                  ATerm m_33 = NULL;
                  m_33 = t;
                  if(match_string(t, "--help"))
                    {
                      t = m_33;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = m_33;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = m_33;
                        }
                    }
                  return(t);
                }
                ATerm e_30 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_m_67;
                  return(t);
                }
                ATerm g_30 (ATerm t)
                {
                  t = term_n_67;
                  return(t);
                }
                t = Option_3_0(y_29, e_30, g_30, t);
                ;
                LocalPopChoice(l_67);
              }
            else
              {
                t = k_67;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_29, t);
    {
      ATerm o_67 = t;
      int p_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_33 = NULL;
          u_33 = t;
          {
            ATerm q_67 = t;
            int r_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_33;
                {
                  ATerm s_67 = t;
                  int t_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_67 = t;
                        int v_67 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_44 = NULL;
                            t = eval_config_0_0(t);
                            j_44 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_44);
                            t = j_44;
                            ;
                            LocalPopChoice(v_67);
                          }
                        else
                          {
                            t = u_67;
                          }
                      }
                      ;
                      LocalPopChoice(t_67);
                    }
                  else
                    {
                      t = s_67;
                      {
                        ATerm i_30 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(i_30, t);
                      }
                    }
                  t = u_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_67);
              }
            else
              {
                t = q_67;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_67 = t;
                  int x_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_44 = NULL;
                      t = eval_config_0_0(t);
                      p_44 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), p_44);
                      t = p_44;
                      ;
                      LocalPopChoice(x_67);
                    }
                  else
                    {
                      t = w_67;
                    }
                  t = u_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_67);
        }
      else
        {
          t = o_67;
          {
            ATerm y_67 = t;
            int z_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_30 (ATerm t)
                {
                  ATerm q_30 (ATerm t)
                  {
                    if(((j_33 != NULL) && (j_33 != t)))
                      _fail(t);
                    else
                      j_33 = t;
                    return(t);
                  }
                  t = Undefined_1_0(q_30, t);
                  return(t);
                }
                t = fetch_1_0(j_30, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_33)), term_a_68));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(z_67);
              }
            else
              {
                t = y_67;
              }
          }
        }
      k_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_33;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_68 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_68);
    }
  else
    {
      t = b_68;
      {
        ATerm z_33 = NULL,a_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_33 = ATgetFirst((ATermList) t);
            a_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_33;
        {
          ATerm s_30 (ATerm t)
          {
            t = a_34;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_30, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm g_34 (ATerm t)
  {
    ATerm d_68 = t;
    int e_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_34, t);
        ;
        LocalPopChoice(e_68);
      }
    else
      {
        t = d_68;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_93(t);
      }
    return(t);
  }
  t = g_34(t);
  return(t);
}
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  n_34 = t;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  h_34 = t;
  t = j_34;
  t = h_67(t);
  l_34 = t;
  t = k_34;
  t = i_67(t);
  m_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_34, m_34), h_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_34 = NULL;
  ATerm t_30 (ATerm t)
  {
    ATerm s_34 = NULL;
    s_34 = t;
    t = SSL_explode_string(s_34);
    return(t);
  }
  ATerm u_30 (ATerm t)
  {
    ATerm t_34 = NULL;
    t_34 = t;
    t = SSL_explode_string(t_34);
    return(t);
  }
  t = _2_0(t_30, u_30, t);
  {
    ATerm f_68 = t;
    int g_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL,w_34 = NULL;
        if(match_cons(t, sym__2))
          {
            v_34 = ATgetArgument(t, 0);
            w_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_34;
        {
          ATerm w_30 (ATerm t)
          {
            t = w_34;
            return(t);
          }
          t = at_end_1_0(w_30, t);
        }
        ;
        LocalPopChoice(g_68);
      }
    else
      {
        t = f_68;
        {
          ATerm s_44 = NULL,t_44 = NULL;
          s_44 = t;
          t = SSL_explode_term(s_44);
          if(match_cons(t, sym__2))
            {
              ATerm h_68 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_68) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_44;
          t = concat_0_0(t);
        }
      }
    r_34 = t;
    t = SSL_implode_string(r_34);
  }
  return(t);
}
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,e_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  i_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_35);
  b_35 = t;
  t = c_35;
  t = w_71(t);
  g_35 = t;
  t = e_35;
  t = x_71(t);
  h_35 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_35), g_35), b_35);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  t = SSL_explode_string(l_35);
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 (ATerm t)
        {
          ATerm k_68 = t;
          int l_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, n_35, t);
              ;
              LocalPopChoice(l_68);
            }
          else
            {
              t = k_68;
              {
                ATerm x_30 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm y_30 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(x_30, y_30, t);
              }
            }
          return(t);
        }
        t = n_35(t);
        ;
        LocalPopChoice(j_68);
      }
    else
      {
        t = i_68;
        t = (ATerm) ATempty;
      }
    m_35 = t;
    t = SSL_implode_string(m_35);
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
  ATerm o_35 = NULL,p_35 = NULL,r_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  o_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(1));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_m_68;
  t = xtc_find_path_0_0(t);
  p_35 = t;
  t = term_n_68;
  t = xtc_find_path_0_0(t);
  r_35 = t;
  t = term_o_68;
  t = xtc_find_path_0_0(t);
  t_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), r_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), p_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_p_68;
  t = xtc_find_path_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, term_q_68);
  t = conc_strings_0_0(t);
  v_35 = t;
  t = term_p_68;
  t = xtc_find_path_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, term_q_68);
  t = conc_strings_0_0(t);
  x_35 = t;
  t = term_r_68;
  t = xtc_find_path_0_0(t);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_q_68);
  t = conc_strings_0_0(t);
  z_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), x_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), v_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_p_68;
  t = xtc_find_path_0_0(t);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, term_s_68);
  t = conc_strings_0_0(t);
  b_36 = t;
  t = term_r_68;
  t = xtc_find_path_0_0(t);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, term_s_68);
  t = conc_strings_0_0(t);
  d_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), d_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), b_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = o_35;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_36 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)));
        {
          ATerm v_68 = t;
          int w_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_44 = NULL;
              t = eval_config_0_0(t);
              x_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), x_44);
              t = x_44;
              ;
              LocalPopChoice(w_68);
            }
          else
            {
              t = v_68;
            }
          t = term_x_68;
          t = xtc_find_0_0(t);
          e_36 = t;
          t = SSL_copy(e_36, (ATerm) ATmakeAppl(sym_stdout_0));
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
        ;
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
      }
    {
      ATerm y_68 = t;
      int z_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)));
          {
            ATerm a_69 = t;
            int b_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_45 = NULL;
                t = eval_config_0_0(t);
                b_45 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), b_45);
                t = b_45;
                ;
                LocalPopChoice(b_69);
              }
            else
              {
                t = a_69;
              }
            t = strc_version_0_0(t);
            t = SSL_exit((ATerm) ATmakeInt(0));
          }
          ;
          LocalPopChoice(z_68);
        }
      else
        {
          t = y_68;
        }
      {
        ATerm c_69 = t;
        int d_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_36 = NULL;
            f_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm e_69 = t;
              int f_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_45 = NULL;
                  t = eval_config_0_0(t);
                  f_45 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_45);
                  t = f_45;
                  ;
                  LocalPopChoice(f_69);
                }
              else
                {
                  t = e_69;
                }
              t = f_36;
            }
            ;
            LocalPopChoice(d_69);
          }
        else
          {
            t = c_69;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATempty, term_g_69);
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        {
          ATerm z_30 (ATerm t)
          {
            ATerm h_36 = NULL,k_45 = NULL;
            h_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm h_69 = t;
              int i_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_45 = NULL;
                  t = eval_config_0_0(t);
                  j_45 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_45);
                  t = j_45;
                  ;
                  LocalPopChoice(i_69);
                }
              else
                {
                  t = h_69;
                }
              k_45 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_45), (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue))));
              t = h_36;
            }
            return(t);
          }
          t = if_verbose1_1_0(z_30, t);
        }
      }
    }
  }
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm j_69 = t;
  int k_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm a_31 (ATerm t)
        {
          ATerm g_31 (ATerm t)
          {
            ATerm j_36 = NULL;
            j_36 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_36), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(j_36), term_l_69));
            return(t);
          }
          t = if_verbose1_1_0(g_31, t);
          return(t);
        }
        ATerm d_31 (ATerm t)
        {
          ATerm h_31 (ATerm t)
          {
            ATerm m_69 = t;
            int n_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_36 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
                {
                  ATerm o_69 = t;
                  int p_69 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_45 = NULL;
                      t = eval_config_0_0(t);
                      q_45 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_45);
                      t = q_45;
                      ;
                      LocalPopChoice(p_69);
                    }
                  else
                    {
                      t = o_69;
                    }
                  l_36 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, l_36);
                }
                ;
                LocalPopChoice(n_69);
              }
            else
              {
                t = m_69;
                t = term_q_69;
              }
            t = front_end_0_0(t);
            t = optimize_0_0(t);
            t = back_end_0_0(t);
            t = c_compile_0_0(t);
            return(t);
          }
          t = xtc_temp_files_1_0(h_31, t);
          return(t);
        }
        t = profile_p__2_0(a_31, d_31, t);
        {
          ATerm i_31 (ATerm t)
          {
            ATerm n_36 = NULL;
            t = run_time_0_0(t);
            n_36 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_69), n_36), term_r_69));
            return(t);
          }
          t = if_verbose2_1_0(i_31, t);
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(k_69);
    }
  else
    {
      t = j_69;
      {
        ATerm o_36 = NULL;
        t = run_time_0_0(t);
        o_36 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
