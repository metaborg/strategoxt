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
ATerm term_f_70;
ATerm term_e_70;
ATerm term_z_69;
ATerm term_y_69;
ATerm term_p_69;
ATerm term_i_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_q_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_t_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_f_67;
ATerm term_e_67;
ATerm term_t_66;
ATerm term_m_66;
ATerm term_l_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_i_66;
ATerm term_h_66;
ATerm term_g_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_y_65;
ATerm term_x_65;
ATerm term_w_65;
ATerm term_v_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_r_65;
ATerm term_q_65;
ATerm term_b_64;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_f_63;
ATerm term_e_63;
ATerm term_d_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_j_62;
ATerm term_i_62;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_z_60;
ATerm term_s_60;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_x_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_g_56;
ATerm term_x_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_u_54;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_s_53;
ATerm term_p_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_a_53;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_h_52;
ATerm term_w_51;
ATerm term_t_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_g_51;
ATerm term_d_51;
ATerm term_x_50;
ATerm term_m_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
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
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_f_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_u_44;
ATerm term_o_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_r_43;
ATerm term_m_43;
ATerm term_h_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_q_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_t_39;
ATerm term_m_39;
ATerm term_h_39;
ATerm term_q_38;
ATerm term_e_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_o_34;
ATerm term_b_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_m_32;
ATerm term_w_31;
void init_constant_terms (void)
{
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8a", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8b", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_45, term_i_37, term_u_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_m_32, term_x_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_t_37, term_b_46);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_46, term_g_46, term_i_46);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_46, term_m_46, term_n_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_46, term_x_46, term_y_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_c_47, term_d_47);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_47, term_g_47, term_h_47);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_47, term_k_47, term_l_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_47, term_o_47, term_p_47);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_47, term_m_39, term_s_47);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_47, term_v_47, term_w_47);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_47, term_z_47, term_a_48);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_48, term_d_48, term_e_48);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_48, term_h_48, term_i_48);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_48, term_l_48, term_m_48);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_48, term_p_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_48, term_x_48, term_y_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_49, term_b_49, term_c_49);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_49, term_f_49, term_g_49);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_49, term_j_49, term_k_49);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_49, term_n_49, term_o_49);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_49, term_h_39, term_r_49);
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_49, term_u_49, term_v_49);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_49, term_y_49, term_z_49);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_50, term_c_50, term_d_50);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(sym__2, term_m_63, term_f_53);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_m_66));
  term_m_66 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(sym__3, term_r_55, term_e_67, term_f_53);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm p_0 (ATerm);
ATerm t_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm d_1 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm x_2 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm i_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_8 (ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm g_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm w_12 (ATerm);
ATerm y_12 (ATerm);
ATerm i_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm z_13 (ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm m_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm s_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm g_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm);
ATerm x_15 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm t_108 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm w_16 (ATerm);
ATerm c_17 (ATerm);
ATerm q_17 (ATerm);
ATerm s_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm frontend_0_0 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm p_18 (ATerm);
ATerm save_as_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm assert_1_0 (ATerm d_104 (ATerm), ATerm);
ATerm k_14 (ATerm y_13, ATerm);
ATerm l_14 (ATerm a_14, ATerm b_14, ATerm e_14, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm r_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm s_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm z_115 (ATerm), ATerm);
ATerm t_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm d_19 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm g_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm i_107 (ATerm), ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm basename_1_0 (ATerm e_102 (ATerm), ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm t_19 (ATerm);
ATerm y_19 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm o_20 (ATerm);
ATerm u_20 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm w_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm s_21 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_115 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm j_107 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm);
ATerm d_22 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm c_112 (ATerm), ATerm);
ATerm t_24 (ATerm l_24, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm k_22 (ATerm);
ATerm m_22 (ATerm);
ATerm o_22 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_22 (ATerm);
ATerm v_22 (ATerm);
ATerm x_22 (ATerm);
ATerm a_23 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm u_23 (ATerm);
ATerm w_23 (ATerm);
ATerm z_23 (ATerm);
ATerm b_24 (ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm k_24 (ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm q_24 (ATerm);
ATerm s_24 (ATerm);
ATerm x_24 (ATerm);
ATerm y_24 (ATerm);
ATerm b_25 (ATerm);
ATerm k_25 (ATerm);
ATerm m_25 (ATerm);
ATerm r_25 (ATerm);
ATerm w_25 (ATerm);
ATerm y_25 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm g_26 (ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm q_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm e_27 (ATerm);
ATerm f_27 (ATerm);
ATerm l_27 (ATerm);
ATerm m_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm t_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_29 (ATerm);
ATerm v_29 (ATerm);
ATerm c_30 (ATerm);
ATerm d_30 (ATerm);
ATerm f_30 (ATerm);
ATerm h_30 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm n_30 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm);
ATerm t_30 (ATerm);
ATerm v_30 (ATerm);
ATerm w_30 (ATerm);
ATerm y_30 (ATerm);
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm _2_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm);
ATerm i_31 (ATerm);
ATerm j_31 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm k_31 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm r_14 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_99(t);
      ;
      LocalPopChoice(v_31);
    }
  else
    {
      t = r_14;
      {
        ATerm r_0 = NULL,s_0 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_0 = ATgetFirst((ATermList) t);
            s_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_0;
        t = foldr_2_0(i_99, j_99, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_0, x_0);
        t = j_99(t);
      }
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_1, b_1);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = SSL_addr(a_1, b_1);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_1 = NULL,c_0 = NULL,e_0 = NULL;
  t = times_0_0(t);
  c_0 = t;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = foldr_2_0(p_0, t_0, t);
  c_1 = t;
  t = SSL_TicksToSeconds(c_1);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 = NULL,x_1 = NULL;
      i_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL;
            t = eval_config_0_0(t);
            j_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_1);
            t = j_1;
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = i_32;
          }
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, term_m_32);
        t = geq_0_0(t);
        t = i_1;
        t = h_107(t);
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue))));
  t = v_2;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm w_2 = NULL;
  w_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, w_2));
  t = w_2;
  return(t);
}
ATerm link_object_code_0_0 (ATerm t)
{
  ATerm g_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = if_verbose2_1_0(u_0, t);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL;
              t = eval_config_0_0(t);
              n_1 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_1);
              t = n_1;
              ;
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
            }
        }
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm r_1 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
          {
            ATerm r_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_1 = NULL;
                t = eval_config_0_0(t);
                w_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), w_1);
                t = w_1;
                ;
                LocalPopChoice(s_32);
              }
            else
              {
                t = r_32;
              }
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_1, term_x_32);
            t = conc_strings_0_0(t);
          }
        }
      }
    r_2 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)));
    {
      ATerm y_32 = t;
      int z_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 = NULL;
          t = eval_config_0_0(t);
          b_2 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), b_2);
          t = b_2;
          ;
          LocalPopChoice(z_32);
        }
      else
        {
          t = y_32;
        }
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_33, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_2), r_2), term_b_33), g_2));
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
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue))));
  t = h_3;
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm l_3 = NULL;
  l_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_3));
  t = l_3;
  return(t);
}
ATerm c_to_object_code_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,g_3 = NULL,e_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = if_verbose2_1_0(y_0, t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm d_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = eval_config_0_0(t);
        k_2 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), k_2);
        t = k_2;
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = d_33;
      }
    e_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_2, term_g_33);
    t = conc_strings_0_0(t);
    a_3 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)));
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 = NULL;
          t = eval_config_0_0(t);
          o_2 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), o_2);
          t = o_2;
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
        }
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_b_33), z_2), term_j_33));
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm n_33 = ATgetArgument(t, 0);
                ATerm o_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_3;
            {
              ATerm z_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_b_33), z_2), term_j_33);
                return(t);
              }
              t = at_end_1_0(z_0, t);
            }
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            {
              ATerm y_2 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm p_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_2;
              t = concat_0_0(t);
            }
          }
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_33, c_3);
        t = if_verbose3_1_0(d_1, t);
        if(match_cons(t, sym__2))
          {
            d_3 = ATgetArgument(t, 0);
            g_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm e_1 (ATerm t)
          {
            t = SSL_execvp(d_3, g_3);
            return(t);
          }
          t = fork_and_wait_1_0(e_1, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, a_3);
        }
      }
    }
  }
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = if_verbose1_1_0(h_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = c_to_object_code_0_0(t);
  t = link_object_code_0_0(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(o_3), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(CheckATermList(o_3), term_r_33));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm t_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)));
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL;
            t = eval_config_0_0(t);
            q_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), q_3);
            t = q_3;
            ;
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
          }
        t = m_3;
      }
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = t_33;
      t = profile_p__2_0(f_1, g_1, t);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,e_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(e_4, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(e_4);
        t = term_b_34;
        ;
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        {
          ATerm c_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_5 = NULL;
              t = c_4;
              t = q_0(t);
              m_5 = t;
              {
                ATerm l_34 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_34 = t;
                    int n_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(n_34);
                      }
                    else
                      {
                        t = m_34;
                        {
                          ATerm n_5 = NULL;
                          n_5 = t;
                          if((e_4 != t))
                            {
                              _fail(t);
                            }
                          t = n_5;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_34;
                  }
                t = SSL_rename(e_4, m_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_5);
              }
              ;
              LocalPopChoice(g_34);
            }
          else
            {
              t = c_34;
              t = c_4;
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
ATerm k_1 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  t = pass_verbose_0_0(t);
  j_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
  {
    ATerm q_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 = NULL;
        t = eval_config_0_0(t);
        c_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), c_7);
        t = c_7;
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = q_34;
      }
    t = map_1_0(m_1, t);
    k_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_4), (ATerm) ATinsert(ATempty, term_w_34)), j_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_x_34);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  t = pass_verbose_0_0(t);
  n_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = eval_config_0_0(t);
        i_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), i_7);
        t = i_7;
        ;
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
      }
    t = map_1_0(q_1, t);
    o_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_4), (ATerm) ATinsert(ATempty, term_w_34)), n_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_x_34);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(d_36);
        }
      else
        {
          t = c_36;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(y_35);
      t = xtc_transform_file_2_0(k_1, l_1, t);
    }
  else
    {
      t = h_35;
      t = xtc_transform_term_2_0(o_1, p_1, t);
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue))));
  t = q_4;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = if_verbose1_1_0(v_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm e_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(o_36);
        }
      else
        {
          t = l_36;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_36);
      t = xtc_transform_file_2_0(y_1, z_1, t);
    }
  else
    {
      t = e_36;
      t = xtc_transform_term_2_0(a_2, c_2, t);
    }
  t = if_keep1_1_0(d_2, t);
  t = olevel_2_0(h_2, i_2, t);
  t = if_keep1_1_0(p_2, t);
  t = olevel_2_0(x_2, bound_unbound_vars_0_0, t);
  t = if_keep1_1_0(e_3, t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(q_36);
        t = xtc_transform_file_2_0(i_3, j_3, t);
      }
    else
      {
        t = p_36;
        t = xtc_transform_term_2_0(k_3, n_3, t);
      }
    t = s2c_0_0(t);
    {
      ATerm u_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_36 = t;
          int y_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(y_36);
            }
          else
            {
              t = x_36;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(v_36);
          t = xtc_transform_file_2_0(p_3, r_3, t);
        }
      else
        {
          t = u_36;
          t = xtc_transform_term_2_0(s_3, t_3, t);
        }
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_37 = t;
            int d_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(d_37);
              }
            else
              {
                t = c_37;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(a_37);
            t = xtc_transform_file_2_0(u_3, v_3, t);
          }
        else
          {
            t = z_36;
            t = xtc_transform_term_2_0(w_3, x_3, t);
          }
        t = rename_to_1_0(y_3, t);
      }
    }
  }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(r_4), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(CheckATermList(r_4), term_e_37));
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm s_4 = NULL;
  t = pass_verbose_0_0(t);
  s_4 = t;
  t = (ATerm) ATinsert(CheckATermList(s_4), term_w_34);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm t_4 = NULL;
  t = pass_verbose_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(CheckATermList(t_4), term_w_34);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = save_as_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_37 = t;
      int o_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(o_37);
        }
      else
        {
          t = n_37;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_37);
      t = xtc_transform_file_2_0(j_2, l_2, t);
    }
  else
    {
      t = l_37;
      t = xtc_transform_term_2_0(m_2, n_2, t);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm u_4 = NULL;
  t = pass_verbose_0_0(t);
  u_4 = t;
  t = (ATerm) ATinsert(CheckATermList(u_4), term_w_34);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm w_4 = NULL;
  t = pass_verbose_0_0(t);
  w_4 = t;
  t = (ATerm) ATinsert(CheckATermList(w_4), term_w_34);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = save_as_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = save_as_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm x_4 = NULL;
  t = pass_verbose_0_0(t);
  x_4 = t;
  t = (ATerm) ATinsert(CheckATermList(x_4), term_w_34);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_4 = NULL;
  t = pass_verbose_0_0(t);
  z_4 = t;
  t = (ATerm) ATinsert(CheckATermList(z_4), term_w_34);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm b_5 = NULL;
  t = term_y_37;
  t = xtc_find_0_0(t);
  b_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_5), term_z_37);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_5 = NULL;
  t = term_y_37;
  t = xtc_find_0_0(t);
  d_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_5), term_z_37);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm l_7 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL;
        t = eval_config_0_0(t);
        b_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), b_8);
        t = b_8;
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
      }
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_7, term_e_38);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(s_1, t);
  t = profile_p__2_0(t_1, u_1, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,g_5 = NULL;
      e_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm i_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_8 = NULL;
            t = eval_config_0_0(t);
            m_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_8);
            t = m_8;
            ;
            LocalPopChoice(k_38);
          }
        else
          {
            t = i_38;
          }
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_i_37);
        t = geq_0_0(t);
        t = e_5;
        t = i_108(t);
      }
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL;
      h_5 = t;
      t = e_116(t);
      j_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
      {
        ATerm o_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL;
            t = eval_config_0_0(t);
            u_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), u_8);
            t = u_8;
            ;
            LocalPopChoice(p_38);
          }
        else
          {
            t = o_38;
          }
        k_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_5, j_5);
        t = geq_0_0(t);
        t = h_5;
        t = f_116(t);
      }
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm l_5 = NULL;
  t = pass_verbose_0_0(t);
  l_5 = t;
  t = (ATerm) ATinsert(CheckATermList(l_5), term_w_34);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm o_5 = NULL;
  t = pass_verbose_0_0(t);
  o_5 = t;
  t = (ATerm) ATinsert(CheckATermList(o_5), term_w_34);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_5 = NULL;
  t = pass_verbose_0_0(t);
  q_5 = t;
  t = (ATerm) ATinsert(CheckATermList(q_5), term_w_34);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm s_5 = NULL;
  t = pass_verbose_0_0(t);
  s_5 = t;
  t = (ATerm) ATinsert(CheckATermList(s_5), term_w_34);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_38 = t;
      int w_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(y_38);
            }
          else
            {
              t = x_38;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(w_38);
          t = xtc_transform_file_2_0(z_3, a_4, t);
        }
      else
        {
          t = v_38;
          t = xtc_transform_term_2_0(b_4, d_4, t);
        }
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_39 = t;
            int c_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(c_39);
              }
            else
              {
                t = b_39;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(a_39);
            t = xtc_transform_file_2_0(f_4, g_4, t);
          }
        else
          {
            t = z_38;
            t = xtc_transform_term_2_0(h_4, i_4, t);
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,v_5 = NULL;
      t_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm f_39 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_9 = NULL;
            t = eval_config_0_0(t);
            k_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_9);
            t = k_9;
            ;
            LocalPopChoice(g_39);
          }
        else
          {
            t = f_39;
          }
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_5, term_h_39);
        t = geq_0_0(t);
        t = t_5;
        t = m_108(t);
      }
      ;
      LocalPopChoice(e_39);
    }
  else
    {
      t = d_39;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm i_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,y_5 = NULL;
      w_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm k_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = NULL;
            t = eval_config_0_0(t);
            w_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_9);
            t = w_9;
            ;
            LocalPopChoice(l_39);
          }
        else
          {
            t = k_39;
          }
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_5, term_m_39);
        t = geq_0_0(t);
        t = w_5;
        t = l_108(t);
      }
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = i_39;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue))));
  t = a_6;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = if_verbose3_1_0(c_5, t);
  t = olevel_2_0(f_5, i_5, t);
  t = if_keep1_1_0(z_5, t);
  t = olevel_2_0(g_6, h_6, t);
  t = if_keep2_1_0(f_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = if_keep4_1_0(q_8, t);
  t = olevel_2_0(t_8, v_8, t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = q_39;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(p_39);
        t = xtc_transform_file_2_0(a_9, b_9, t);
      }
    else
      {
        t = o_39;
        t = xtc_transform_term_2_0(c_9, d_9, t);
      }
    t = olevel_2_0(e_9, f_9, t);
    t = olevel_2_0(v_9, x_9, t);
    t = if_keep4_1_0(d_10, t);
    t = olevel_2_0(g_10, h_10, t);
    t = olevel_2_0(q_10, r_10, t);
    t = if_keep2_1_0(w_10, t);
    t = olevel_2_0(y_10, z_10, t);
    t = if_keep5_1_0(g_11, t);
    t = olevel_2_0(i_11, j_11, t);
    t = if_keep5_1_0(o_11, t);
    t = olevel_2_0(q_11, t_11, t);
    t = if_keep3_1_0(c_12, t);
    t = olevel_2_0(n_12, o_12, t);
    t = if_keep3_1_0(z_13, t);
    t = olevel_2_0(f_14, g_14, t);
    t = if_keep1_1_0(z_14, t);
    t = olevel_2_0(b_15, c_15, t);
    t = if_keep1_1_0(l_15, t);
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(CheckATermList(c_6), term_t_39));
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm d_6 = NULL,p_10 = NULL;
  d_6 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = eval_config_0_0(t);
        j_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), j_10);
        t = j_10;
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
      }
    p_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_10), (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue))));
    t = d_6;
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_39 = t;
      int a_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(a_40);
        }
      else
        {
          t = y_39;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(x_39);
      t = xtc_transform_file_2_0(p_5, r_5, t);
    }
  else
    {
      t = w_39;
      t = xtc_transform_term_2_0(u_5, x_5, t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_w_34);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm f_6 = NULL;
  t = pass_verbose_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(CheckATermList(f_6), term_w_34);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = save_as_1_0(b_6, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 = NULL;
      k_6 = t;
      {
        ATerm g_40 = t;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)));
            {
              ATerm i_40 = t;
              int j_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_12 = NULL;
                  t = eval_config_0_0(t);
                  m_12 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)), m_12);
                  t = m_12;
                  ;
                  LocalPopChoice(j_40);
                }
              else
                {
                  t = i_40;
                }
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_40;
          }
        t = k_6;
        {
          ATerm k_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_40 = t;
              int o_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(o_40);
                }
              else
                {
                  t = n_40;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(m_40);
              t = xtc_transform_file_2_0(i_6, j_6, t);
            }
          else
            {
              t = k_40;
              t = xtc_transform_term_2_0(b_7, d_7, t);
            }
        }
      }
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm d_11 = NULL;
  t = pass_verbose_0_0(t);
  d_11 = t;
  t = (ATerm) ATinsert(CheckATermList(d_11), term_w_34);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm f_11 = NULL;
  t = pass_verbose_0_0(t);
  f_11 = t;
  t = (ATerm) ATinsert(CheckATermList(f_11), term_w_34);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = save_as_1_0(g_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_40 = t;
      int u_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(u_40);
        }
      else
        {
          t = t_40;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_40);
      t = xtc_transform_file_2_0(t_7, v_7, t);
    }
  else
    {
      t = r_40;
      t = xtc_transform_term_2_0(x_7, z_7, t);
    }
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_40 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(c_41);
          }
        else
          {
            t = x_40;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(w_40);
        t = xtc_transform_file_2_0(d_8, f_8, t);
      }
    else
      {
        t = v_40;
        t = xtc_transform_term_2_0(h_8, k_8, t);
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_w_34);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm m_6 = NULL;
  t = pass_verbose_0_0(t);
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(m_6), term_w_34);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm n_6 = NULL;
  t = pass_verbose_0_0(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_6), term_w_34);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_w_34);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = save_as_1_0(s_8, t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_f_41;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm g_41 = t;
  int h_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(h_41);
      t = xtc_transform_file_2_0(w_8, x_8, t);
    }
  else
    {
      t = g_41;
      t = xtc_transform_term_2_0(y_8, z_8, t);
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_w_34);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm q_6 = NULL;
  t = pass_verbose_0_0(t);
  q_6 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), term_w_34);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_l_41;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm r_6 = NULL;
  t = pass_verbose_0_0(t);
  r_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_6), term_w_34);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_l_41;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm s_6 = NULL;
  t = pass_verbose_0_0(t);
  s_6 = t;
  t = (ATerm) ATinsert(CheckATermList(s_6), term_w_34);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm p_41 = t;
  int q_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_41);
        }
      else
        {
          t = s_41;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_41);
      t = xtc_transform_file_2_0(g_9, h_9, t);
    }
  else
    {
      t = p_41;
      t = xtc_transform_term_2_0(i_9, j_9, t);
    }
  t = bound_unbound_vars_0_0(t);
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(w_41);
        t = xtc_transform_file_2_0(p_9, q_9, t);
      }
    else
      {
        t = v_41;
        t = xtc_transform_term_2_0(t_9, u_9, t);
      }
  }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm t_6 = NULL;
  t = pass_verbose_0_0(t);
  t_6 = t;
  t = (ATerm) ATinsert(CheckATermList(t_6), term_w_34);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm u_6 = NULL;
  t = pass_verbose_0_0(t);
  u_6 = t;
  t = (ATerm) ATinsert(CheckATermList(u_6), term_w_34);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm v_6 = NULL;
  t = pass_verbose_0_0(t);
  v_6 = t;
  t = (ATerm) ATinsert(CheckATermList(v_6), term_w_34);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_w_34);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_42 = t;
      int i_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_42);
        }
      else
        {
          t = f_42;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(e_42);
      t = xtc_transform_file_2_0(z_9, a_10, t);
    }
  else
    {
      t = d_42;
      t = xtc_transform_term_2_0(b_10, c_10, t);
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm x_6 = NULL;
  t = pass_verbose_0_0(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(x_6), term_w_34);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm y_6 = NULL;
  t = pass_verbose_0_0(t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(y_6), term_w_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = save_as_1_0(e_10, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = t;
      int p_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(p_42);
        }
      else
        {
          t = o_42;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_42);
      t = xtc_transform_file_2_0(i_10, m_10, t);
    }
  else
    {
      t = l_42;
      t = xtc_transform_term_2_0(n_10, o_10, t);
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_q_42;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm z_6 = NULL;
  t = pass_verbose_0_0(t);
  z_6 = t;
  t = (ATerm) ATinsert(CheckATermList(z_6), term_w_34);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_q_42;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm a_7 = NULL;
  t = pass_verbose_0_0(t);
  a_7 = t;
  t = (ATerm) ATinsert(CheckATermList(a_7), term_w_34);
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_42 = t;
      int x_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(x_42);
        }
      else
        {
          t = w_42;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_42);
      t = xtc_transform_file_2_0(s_10, t_10, t);
    }
  else
    {
      t = r_42;
      t = xtc_transform_term_2_0(u_10, v_10, t);
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_w_34);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm h_7 = NULL;
  t = pass_verbose_0_0(t);
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), term_w_34);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = save_as_1_0(x_10, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm d_43 = t;
  int e_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_43 = t;
      int g_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(g_43);
        }
      else
        {
          t = f_43;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(e_43);
      t = xtc_transform_file_2_0(a_11, b_11, t);
    }
  else
    {
      t = d_43;
      t = xtc_transform_term_2_0(c_11, e_11, t);
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_w_34);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_w_34);
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = save_as_1_0(h_11, t);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_h_43;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_43 = t;
      int l_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_43);
        }
      else
        {
          t = k_43;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(j_43);
      t = xtc_transform_file_2_0(k_11, l_11, t);
    }
  else
    {
      t = i_43;
      t = xtc_transform_term_2_0(m_11, n_11, t);
    }
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm o_7 = NULL;
  t = pass_verbose_0_0(t);
  o_7 = t;
  t = (ATerm) ATinsert(CheckATermList(o_7), term_w_34);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm p_7 = NULL;
  t = pass_verbose_0_0(t);
  p_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), term_w_34);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = save_as_1_0(p_11, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_m_43;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm n_43 = t;
  int o_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = t;
      int q_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(q_43);
        }
      else
        {
          t = p_43;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(o_43);
      t = xtc_transform_file_2_0(u_11, z_11, t);
    }
  else
    {
      t = n_43;
      t = xtc_transform_term_2_0(a_12, b_12, t);
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_w_34);
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_w_34);
  return(t);
}
ATerm c_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm s_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = t;
      int y_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_43);
        }
      else
        {
          t = x_43;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_43);
      t = xtc_transform_file_2_0(p_12, q_12, t);
    }
  else
    {
      t = s_43;
      t = xtc_transform_term_2_0(r_12, s_12, t);
    }
  t = if_keep3_1_0(t_12, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(w_12, t);
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(a_44);
        t = xtc_transform_file_2_0(i_13, v_13, t);
      }
    else
      {
        t = z_43;
        t = xtc_transform_term_2_0(w_13, x_13, t);
      }
  }
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm s_7 = NULL;
  t = pass_verbose_0_0(t);
  s_7 = t;
  t = (ATerm) ATinsert(CheckATermList(s_7), term_w_34);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm u_7 = NULL;
  t = pass_verbose_0_0(t);
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(u_7), term_w_34);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = save_as_1_0(u_12, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_e_44;
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = save_as_1_0(y_12, t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_g_44;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_w_34);
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_w_34);
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = save_as_1_0(d_14, t);
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_h_44;
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm i_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(m_44);
        }
      else
        {
          t = l_44;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_44);
      t = xtc_transform_file_2_0(m_14, o_14, t);
    }
  else
    {
      t = i_44;
      t = xtc_transform_term_2_0(p_14, s_14, t);
    }
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_w_34);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_w_34);
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = save_as_1_0(a_15, t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_44 = t;
      int t_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_44);
        }
      else
        {
          t = s_44;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_44);
      t = xtc_transform_file_2_0(d_15, g_15, t);
    }
  else
    {
      t = p_44;
      t = xtc_transform_term_2_0(j_15, k_15, t);
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_u_44;
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm e_8 = NULL;
  t = pass_verbose_0_0(t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), term_w_34);
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_u_44;
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm g_8 = NULL;
  t = pass_verbose_0_0(t);
  g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(g_8), term_w_34);
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = save_as_1_0(m_15, t);
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(m_4, t);
  t = profile_p__2_0(v_4, y_4, t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_x_44;
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm i_8 = NULL;
  t = pass_verbose_0_0(t);
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(i_8), term_w_34);
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_x_44;
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm j_8 = NULL;
  t = pass_verbose_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_8), term_w_34);
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(e_45);
        }
      else
        {
          t = c_45;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(b_45);
      t = xtc_transform_file_2_0(o_15, q_15, t);
    }
  else
    {
      t = a_45;
      t = xtc_transform_term_2_0(s_15, u_15, t);
    }
  t = if_keep2_1_0(v_15, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm l_8 = NULL,n_8 = NULL,o_8 = NULL;
  t = term_f_45;
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm i_45 = t;
          int j_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_13 = NULL;
              t = eval_config_0_0(t);
              r_13 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_13);
              t = r_13;
              ;
              LocalPopChoice(j_45);
            }
          else
            {
              t = i_45;
            }
        }
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = term_i_37;
      }
    l_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_8, term_i_37);
    {
      ATerm k_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(l_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_45);
        }
      else
        {
          t = k_45;
          t = SSL_subtr(l_8, (ATerm) ATmakeInt(1));
        }
      o_8 = t;
      t = SSL_int_to_string(o_8);
      n_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, n_8), term_f_45);
    }
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_115, y_115, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_explode_string(r_8);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  t = map_1_0(x_15, t);
  t = concat_0_0(t);
  p_8 = t;
  t = SSL_implode_string(p_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm c_14 = NULL;
        t = SSL_int_to_string(m_9);
        c_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_45), c_14), term_m_45);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm r_15 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          m_9 = ATgetArgument(t, 0);
          n_9 = ATgetArgument(t, 1);
          o_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_9);
      r_15 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_9), term_p_45), r_15), term_o_45), m_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  ATerm z_15 (ATerm t)
  {
    t = t_93(t);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    return(t);
  }
  t = fetch_1_0(z_15, t);
  t = not_null(r_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_50), term_a_50), term_w_49), term_s_49), term_p_49), term_l_49), term_h_49), term_d_49), term_z_48), term_v_48), term_r_48), term_n_48), term_j_48), term_f_48), term_b_48), term_x_47), term_t_47), term_q_47), term_m_47), term_i_47), term_e_47), term_z_46), term_v_46), term_o_46), term_j_46), term_e_46), term_y_45), term_v_45);
        {
          ATerm a_16 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm f_50 = ATgetArgument(t, 0);
                if((s_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm g_50 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(a_16, t);
        }
        ;
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL,p_16 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_50 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
            {
              ATerm k_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_10;
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
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          p_16 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_16), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, p_16), term_m_50));
        }
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
      }
    t = y_9;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  t = fork_0_0(t);
  l_10 = t;
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_10;
        t = t_108(t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = SSL_waitpid(l_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_50 = ATgetArgument(t, 0);
            if(((ATgetType(p_50) != AT_INT) || (ATgetInt((ATermInt) p_50) != 0)))
              _fail(t);
            {
              ATerm q_50 = ATgetArgument(t, 1);
            }
            {
              ATerm r_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_10;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_19 = NULL,c_20 = NULL,a_22 = NULL,c_22 = NULL;
      t = r_11;
      t = xtc_new_file_0_0(t);
      u_19 = t;
      t = n_0(t);
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATinsert(ATinsert(ATempty, u_19), term_b_33));
      {
        ATerm s_50 = t;
        int t_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm u_50 = ATgetArgument(t, 0);
                ATerm v_50 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_20;
            {
              ATerm b_16 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, u_19), term_b_33);
                return(t);
              }
              t = at_end_1_0(b_16, t);
            }
            ;
            LocalPopChoice(t_50);
          }
        else
          {
            t = s_50;
            {
              ATerm y_21 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATinsert(ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm w_50 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_50) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  y_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_21;
              t = concat_0_0(t);
            }
          }
        a_22 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, a_22);
        {
          ATerm c_16 (ATerm t)
          {
            t = SSL_execvp(c_22, a_22);
            return(t);
          }
          t = fork_and_wait_1_0(c_16, t);
          t = SSL_close_file(u_19);
          t = (ATerm) ATmakeAppl(sym_FILE_1, u_19);
        }
      }
    }
  else
    {
      ATerm l_23 = NULL,m_23 = NULL,a_25 = NULL,c_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_11;
      t = xtc_new_file_0_0(t);
      l_23 = t;
      t = n_0(t);
      m_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), term_b_33), s_11), term_x_50));
      {
        ATerm y_50 = t;
        int z_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm a_51 = ATgetArgument(t, 0);
                ATerm b_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_23;
            {
              ATerm d_16 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), term_b_33), s_11), term_x_50);
                return(t);
              }
              t = at_end_1_0(d_16, t);
            }
            ;
            LocalPopChoice(z_50);
          }
        else
          {
            t = y_50;
            {
              ATerm z_24 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, m_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_23), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), s_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_51 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_51) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  z_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_24;
              t = concat_0_0(t);
            }
          }
        a_25 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, a_25);
        {
          ATerm e_16 (ATerm t)
          {
            t = SSL_execvp(c_25, a_25);
            return(t);
          }
          t = fork_and_wait_1_0(e_16, t);
          t = SSL_close_file(l_23);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_23);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  y_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  v_11 = t;
  t = w_11;
  t = p_77(t);
  x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, x_11), v_11);
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  t = pass_verbose_0_0(t);
  d_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        t = eval_config_0_0(t);
        c_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), c_26);
        t = c_26;
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
      }
    t = map_1_0(h_16, t);
    e_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(e_12), (ATerm) ATinsert(ATempty, term_w_34)), d_12);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_12), term_g_51);
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  t = pass_verbose_0_0(t);
  h_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        t = eval_config_0_0(t);
        r_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), r_26);
        t = r_26;
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
      }
    t = map_1_0(k_16, t);
    i_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_12), (ATerm) ATinsert(ATempty, term_w_34)), h_12);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_12), term_g_51);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm j_51 = t;
  int k_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_51 = t;
      int m_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(m_51);
        }
      else
        {
          t = l_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_51);
      t = xtc_transform_file_2_0(f_16, g_16, t);
    }
  else
    {
      t = j_51;
      t = xtc_transform_term_2_0(i_16, j_16, t);
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm k_12 = NULL;
  t = pass_verbose_0_0(t);
  k_12 = t;
  t = (ATerm) ATinsert(CheckATermList(k_12), term_w_34);
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm l_12 = NULL;
  t = pass_verbose_0_0(t);
  l_12 = t;
  t = (ATerm) ATinsert(CheckATermList(l_12), term_w_34);
  return(t);
}
ATerm s_16 (ATerm t)
{
  t = save_as_1_0(t_16, t);
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = term_o_51;
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_51 = t;
      int s_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_51);
        }
      else
        {
          t = r_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_51);
      t = xtc_transform_file_2_0(l_16, m_16, t);
    }
  else
    {
      t = p_51;
      t = xtc_transform_term_2_0(n_16, o_16, t);
    }
  t = if_keep2_1_0(s_16, t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_t_51;
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm h_28 = NULL;
  t = pass_verbose_0_0(t);
  h_28 = t;
  t = (ATerm) ATinsert(CheckATermList(h_28), term_w_34);
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_t_51;
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm i_28 = NULL;
  t = pass_verbose_0_0(t);
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(i_28), term_w_34);
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm n_29 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL;
        t = eval_config_0_0(t);
        q_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), q_30);
        t = q_30;
        ;
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
      }
    n_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_29, term_w_51);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,g_28 = NULL;
      v_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)));
      {
        ATerm z_51 = t;
        int a_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_28 = NULL;
            t = eval_config_0_0(t);
            x_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), x_28);
            t = x_28;
            ;
            LocalPopChoice(a_52);
          }
        else
          {
            t = z_51;
          }
        t = v_12;
        {
          ATerm b_52 = t;
          int c_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_52 = t;
              int e_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_52 = t;
                  int g_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(g_52);
                    }
                  else
                    {
                      t = f_52;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(e_52);
                  t = xtc_transform_file_2_0(u_16, w_16, t);
                }
              else
                {
                  t = d_52;
                  t = xtc_transform_term_2_0(c_17, q_17, t);
                }
              ;
              LocalPopChoice(c_52);
            }
          else
            {
              t = b_52;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATempty, term_h_52);
            }
          t = copy_to_1_0(s_17, t);
          g_28 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue)))));
          t = g_28;
          t = xtc_io_exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
    }
  return(t);
}
ATerm if_keep2_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,z_12 = NULL;
      x_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm k_52 = t;
        int l_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_30 = NULL;
            t = eval_config_0_0(t);
            x_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_30);
            t = x_30;
            ;
            LocalPopChoice(l_52);
          }
        else
          {
            t = k_52;
          }
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_12, term_m_32);
        t = geq_0_0(t);
        t = x_12;
        t = j_108(t);
      }
      ;
      LocalPopChoice(j_52);
    }
  else
    {
      t = i_52;
    }
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = term_m_52;
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm a_13 = NULL;
  t = pass_verbose_0_0(t);
  a_13 = t;
  t = (ATerm) ATinsert(CheckATermList(a_13), term_w_34);
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_m_52;
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm b_13 = NULL;
  t = pass_verbose_0_0(t);
  b_13 = t;
  t = (ATerm) ATinsert(CheckATermList(b_13), term_w_34);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = save_as_1_0(g_18, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = term_n_52;
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_52 = t;
      int r_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_52);
        }
      else
        {
          t = q_52;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_52);
      t = xtc_transform_file_2_0(b_18, c_18, t);
    }
  else
    {
      t = o_52;
      t = xtc_transform_term_2_0(d_18, e_18, t);
    }
  t = if_keep2_1_0(f_18, t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm f_13 = NULL;
  t = pass_verbose_0_0(t);
  f_13 = t;
  t = (ATerm) ATinsert(CheckATermList(f_13), term_t_52);
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm g_13 = NULL;
  t = pass_verbose_0_0(t);
  g_13 = t;
  t = (ATerm) ATinsert(CheckATermList(g_13), term_t_52);
  return(t);
}
ATerm save_as_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  {
    ATerm h_18 (ATerm t)
    {
      ATerm z_30 = NULL,c_31 = NULL;
      t = l_85(t);
      z_30 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_31 = NULL;
            t = eval_config_0_0(t);
            h_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), h_31);
            t = h_31;
            ;
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
          }
        c_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, z_30);
        t = conc_strings_0_0(t);
        if(((d_13 != NULL) && (d_13 != t)))
          _fail(t);
        else
          d_13 = t;
      }
      return(t);
    }
    t = copy_to_1_0(h_18, t);
    {
      ATerm w_52 = t;
      int x_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_52 = t;
          int z_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(z_52);
            }
          else
            {
              t = y_52;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(x_52);
          t = xtc_transform_file_2_0(j_18, k_18, t);
        }
      else
        {
          t = w_52;
          t = xtc_transform_term_2_0(l_18, p_18, t);
        }
      {
        ATerm q_18 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_a_53);
          t = conc_strings_0_0(t);
          if(((e_13 != NULL) && (e_13 != t)))
            _fail(t);
          else
            e_13 = t;
          return(t);
        }
        t = copy_to_1_0(q_18, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_13)), (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue))), not_null(d_13)), (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue)))));
        t = c_13;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL,j_13 = NULL;
      h_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm d_53 = t;
        int e_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_31 = NULL;
            t = eval_config_0_0(t);
            r_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_31);
            t = r_31;
            ;
            LocalPopChoice(e_53);
          }
        else
          {
            t = d_53;
          }
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_t_37);
        t = geq_0_0(t);
        t = h_13;
        t = k_108(t);
      }
      ;
      LocalPopChoice(c_53);
    }
  else
    {
      t = b_53;
    }
  return(t);
}
ATerm AddMain_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_53;
  t = k_85(t);
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(k_13), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_53, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_13), (ATerm) ATempty))))));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_13, term_h_53);
  t = open_stream_0_0(t);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_13, n_13);
  t = w_105(t);
  t = fclose_0_0(t);
  t = n_13;
  return(t);
}
ATerm assert_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_104(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_13, p_13, q_13);
  t = table_push_0_0(t);
  {
    ATerm i_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(j_53);
      }
    else
      {
        t = i_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_13 = ATgetFirst((ATermList) t);
        u_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_13), (ATerm) ATinsert(CheckATermList(t_13), p_13)));
    t = (ATerm) ATmakeAppl(sym__2, p_13, q_13);
  }
  return(t);
}
ATerm k_14 (ATerm y_13, ATerm t)
{
  t = y_13;
  {
    ATerm k_53 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_53 = ATgetArgument(t, 0);
            ATerm m_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_53;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, y_13, term_h_53);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm l_14 (ATerm a_14, ATerm b_14, ATerm e_14, ATerm t)
{
  t = SSL_open_file(a_14, b_14);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
      {
        ATerm n_53 = t;
        int o_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_14(h_14, t);
            ;
            LocalPopChoice(o_53);
          }
        else
          {
            t = n_53;
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
  t = term_f_53;
  t = new_0_0(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, term_p_53);
  t = conc_strings_0_0(t);
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL;
        q_14 = t;
        t = SSL_access(q_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t = new_file_0_0(t);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_14, term_h_53);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, term_f_53);
  t = assert_1_0(r_18, t);
  t = t_14;
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_53 = ATgetArgument(t, 0);
      if(match_cons(t_53, sym_Stream_1))
        {
          w_14 = ATgetArgument(t_53, 0);
        }
      else
        _fail(t);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(w_14, x_14);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  t = xtc_new_file_0_0(t);
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_14, u_14);
  t = WriteToFile_1_0(s_18, t);
  t = SSL_close_file(v_14);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_14);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_53;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          f_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(f_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm z_115 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = z_115(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_33), (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue))));
  t = e_33;
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = save_as_1_0(z_18, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = term_v_53;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm w_53 = t;
  int x_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_15 = NULL;
      i_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)));
      {
        ATerm y_53 = t;
        int z_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL;
            t = eval_config_0_0(t);
            c_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), c_33);
            t = c_33;
            ;
            LocalPopChoice(z_53);
          }
        else
          {
            t = y_53;
          }
        h_15 = t;
        t = if_verbose2_1_0(t_18, t);
        t = i_15;
        {
          ATerm w_18 (ATerm t)
          {
            ATerm x_18 (ATerm t)
            {
              t = h_15;
              return(t);
            }
            t = AddMain_1_0(x_18, t);
            return(t);
          }
          t = xtc_io_transform_1_0(w_18, t);
        }
      }
      ;
      LocalPopChoice(x_53);
    }
  else
    {
      t = w_53;
    }
  t = if_keep3_1_0(y_18, t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm a_54 = t;
  int b_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_15 = NULL;
      y_15 = t;
      t = SSL_remove(y_15);
      ;
      LocalPopChoice(b_54);
    }
  else
    {
      t = a_54;
    }
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm n_15 = NULL,p_15 = NULL;
  ATerm a_19 (ATerm t)
  {
    ATerm t_15 = NULL;
    t_15 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_15 != NULL) && (n_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_15 = ATgetFirst((ATermList) t);
        {
          ATerm c_54 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(n_15);
    t = map_1_0(b_19, t);
    t = t_15;
    t = end_scope_1_0(c_19, t);
    return(t);
  }
  t = repeat_1_0(a_19, t);
  p_15 = t;
  t = SSL_exit(p_15);
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm d_54 = t;
  int e_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm f_54 = t;
        int g_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33 = NULL;
            t = eval_config_0_0(t);
            s_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_33);
            t = s_33;
            ;
            LocalPopChoice(g_54);
          }
        else
          {
            t = f_54;
          }
      }
      ;
      LocalPopChoice(e_54);
    }
  else
    {
      t = d_54;
      t = term_b_34;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(d_19, t);
  t = term_w_31;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
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
    ATerm h_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_35 = NULL;
        t = q_16;
        t = o_0(t);
        w_35 = t;
        {
          ATerm j_54 = t;
          int k_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(k_54);
            }
          else
            {
              t = j_54;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(r_16, w_35);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
        }
        ;
        LocalPopChoice(i_54);
      }
    else
      {
        t = h_54;
        {
          ATerm l_54 = t;
          int m_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_36 = NULL;
              t = q_16;
              t = o_0(t);
              m_36 = t;
              {
                ATerm n_54 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_54 = t;
                    int p_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(p_54);
                      }
                    else
                      {
                        t = o_54;
                        {
                          ATerm q_54 = t;
                          int r_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(r_54);
                            }
                          else
                            {
                              t = q_54;
                              {
                                ATerm n_36 = NULL;
                                n_36 = t;
                                if((r_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = n_36;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_54;
                  }
                t = SSL_copy(r_16, m_36);
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_16);
              }
              ;
              LocalPopChoice(m_54);
            }
          else
            {
              t = l_54;
              t = q_16;
              t = o_0(t);
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
ATerm g_19 (ATerm t)
{
  ATerm w_36 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL;
        t = eval_config_0_0(t);
        b_37 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), b_37);
        t = b_37;
        ;
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
      }
    w_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_36, term_u_54);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,x_16 = NULL;
      v_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)));
      {
        ATerm x_54 = t;
        int y_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_36 = NULL;
            t = eval_config_0_0(t);
            t_36 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), t_36);
            t = t_36;
            ;
            LocalPopChoice(y_54);
          }
        else
          {
            t = x_54;
          }
        t = v_16;
        t = copy_to_1_0(g_19, t);
        x_16 = t;
        t = (ATerm) ATinsert(ATempty, term_z_54);
        t = echo_0_0(t);
        t = x_16;
        t = xtc_io_exit_0_0(t);
      }
      ;
      LocalPopChoice(w_54);
    }
  else
    {
      t = v_54;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  t = term_a_55;
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm d_55 = t;
          int e_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_37 = NULL;
              t = eval_config_0_0(t);
              f_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_37);
              t = f_37;
              ;
              LocalPopChoice(e_55);
            }
          else
            {
              t = d_55;
            }
        }
        ;
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = term_i_37;
      }
    y_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_16, term_i_37);
    {
      ATerm f_55 = t;
      int g_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(y_16, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_55);
        }
      else
        {
          t = f_55;
          t = SSL_subtr(y_16, (ATerm) ATmakeInt(1));
        }
      a_17 = t;
      t = SSL_int_to_string(a_17);
      z_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_16), term_a_55);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm h_55 = t;
  int i_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,d_17 = NULL;
      b_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_55 = t;
        int k_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_37 = NULL;
            t = eval_config_0_0(t);
            j_37 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_37);
            t = j_37;
            ;
            LocalPopChoice(k_55);
          }
        else
          {
            t = j_55;
          }
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_17, term_t_37);
        t = geq_0_0(t);
        t = b_17;
        t = i_107(t);
      }
      ;
      LocalPopChoice(i_55);
    }
  else
    {
      t = h_55;
    }
  return(t);
}
ATerm i_19 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm j_19 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm e_102 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL;
  e_17 = t;
  t = SSL_explode_string(e_17);
  {
    ATerm l_55 = t;
    int m_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_17 (ATerm t)
        {
          ATerm n_55 = t;
          int o_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, g_17, t);
              ;
              LocalPopChoice(o_55);
            }
          else
            {
              t = n_55;
              {
                ATerm p_55 = t;
                int q_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(i_19, _id, t);
                    ;
                    LocalPopChoice(q_55);
                  }
                else
                  {
                    t = p_55;
                    t = Cons_2_0(j_19, e_102, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = g_17(t);
        ;
        LocalPopChoice(m_55);
      }
    else
      {
        t = l_55;
      }
    f_17 = t;
    t = SSL_implode_string(f_17);
  }
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_37), (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue))));
  t = k_37;
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_37), (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue))));
  t = r_37;
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_17;
  t = basename_1_0(_id, t);
  i_17 = t;
  t = if_verbose3_1_0(k_19, t);
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), i_17);
  t = (ATerm) ATmakeAppl(sym__3, term_r_55, term_s_55, i_17);
  {
    ATerm t_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm v_55 = t;
          int w_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL;
              t = eval_config_0_0(t);
              q_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_37);
              t = q_37;
              ;
              LocalPopChoice(w_55);
            }
          else
            {
              t = v_55;
            }
          t = basename_1_0(_id, t);
        }
        ;
        LocalPopChoice(u_55);
      }
    else
      {
        t = t_55;
        t = i_17;
      }
    j_17 = t;
    t = if_verbose3_1_0(l_19, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), j_17);
    t = (ATerm) ATmakeAppl(sym_FILE_1, i_17);
  }
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = term_x_55;
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm a_56 = t;
          int b_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_37 = NULL;
              t = eval_config_0_0(t);
              x_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_37);
              t = x_37;
              ;
              LocalPopChoice(b_56);
            }
          else
            {
              t = a_56;
            }
        }
        ;
        LocalPopChoice(z_55);
      }
    else
      {
        t = y_55;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
        {
          ATerm c_56 = t;
          int d_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_38 = NULL;
              t = eval_config_0_0(t);
              b_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), b_38);
              t = b_38;
              ;
              LocalPopChoice(d_56);
            }
          else
            {
              t = c_56;
            }
        }
      }
    l_17 = t;
    t = k_17;
    t = pass_verbose_0_0(t);
    m_17 = t;
    t = k_17;
    t = pass_keep_0_0(t);
    n_17 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
    {
      ATerm e_56 = t;
      int f_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_38 = NULL;
          t = eval_config_0_0(t);
          f_38 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), f_38);
          t = f_38;
          ;
          LocalPopChoice(f_56);
        }
      else
        {
          t = e_56;
        }
      o_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_17), m_17), o_17), (ATerm) ATinsert(ATinsert(ATempty, l_17), term_g_56));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = term_x_55;
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm p_17 = NULL,r_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  p_17 = t;
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm j_56 = t;
          int k_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_38 = NULL;
              t = eval_config_0_0(t);
              j_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_38);
              t = j_38;
              ;
              LocalPopChoice(k_56);
            }
          else
            {
              t = j_56;
            }
        }
        ;
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
        {
          ATerm l_56 = t;
          int m_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_38 = NULL;
              t = eval_config_0_0(t);
              n_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), n_38);
              t = n_38;
              ;
              LocalPopChoice(m_56);
            }
          else
            {
              t = l_56;
            }
        }
      }
    r_17 = t;
    t = p_17;
    t = pass_verbose_0_0(t);
    t_17 = t;
    t = p_17;
    t = pass_keep_0_0(t);
    u_17 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
    {
      ATerm n_56 = t;
      int o_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_38 = NULL;
          t = eval_config_0_0(t);
          r_38 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), r_38);
          t = r_38;
          ;
          LocalPopChoice(o_56);
        }
      else
        {
          t = n_56;
        }
      v_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_17), t_17), v_17), (ATerm) ATinsert(ATinsert(ATempty, r_17), term_g_56));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm p_56 = t;
    int q_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_56 = t;
        int s_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(s_56);
          }
        else
          {
            t = r_56;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(q_56);
        t = xtc_transform_file_2_0(m_19, n_19, t);
      }
    else
      {
        t = p_56;
        t = xtc_transform_term_2_0(t_19, y_19, t);
      }
  }
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_38), (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue))));
  t = s_38;
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = if_verbose1_1_0(e_20, t);
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = parse_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  {
    ATerm t_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_56 = t;
        int w_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(w_56);
          }
        else
          {
            t = v_56;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(u_56);
        t = xtc_transform_file_2_0(g_20, h_20, t);
      }
    else
      {
        t = t_56;
        t = xtc_transform_term_2_0(i_20, k_20, t);
      }
    t = frontend_0_0(t);
    t = output_frontend_0_0(t);
    t = extract_0_0(t);
    t = warnings_0_0(t);
    {
      ATerm x_56 = t;
      int y_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(a_57);
            }
          else
            {
              t = z_56;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(y_56);
          t = xtc_transform_file_2_0(l_20, m_20, t);
        }
      else
        {
          t = x_56;
          t = xtc_transform_term_2_0(o_20, u_20, t);
        }
      t = rename_defs_0_0(t);
    }
  }
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(w_17), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(CheckATermList(w_17), term_b_57));
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_c_57;
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm x_17 = NULL;
  t = pass_verbose_0_0(t);
  x_17 = t;
  t = (ATerm) ATinsert(ATempty, x_17);
  t = concat_0_0(t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_c_57;
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm y_17 = NULL;
  t = pass_verbose_0_0(t);
  y_17 = t;
  t = (ATerm) ATinsert(ATempty, y_17);
  t = concat_0_0(t);
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm z_17 = NULL;
  t = pass_verbose_0_0(t);
  z_17 = t;
  t = (ATerm) ATinsert(CheckATermList(z_17), term_w_34);
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_d_57;
  return(t);
}
ATerm u_20 (ATerm t)
{
  ATerm a_18 = NULL;
  t = pass_verbose_0_0(t);
  a_18 = t;
  t = (ATerm) ATinsert(CheckATermList(a_18), term_w_34);
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(z_19, t);
  t = profile_p__2_0(a_20, b_20, t);
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_57);
    }
  else
    {
      t = e_57;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL;
      i_18 = t;
      t = SSL_is_string(i_18);
      ;
      LocalPopChoice(h_57);
    }
  else
    {
      t = g_57;
      {
        ATerm i_57 = t;
        int j_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_20, t);
            ;
            LocalPopChoice(j_57);
          }
        else
          {
            t = i_57;
            {
              ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
              m_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_18 = ATgetArgument(t, 0);
                  t = n_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_18 = ATgetArgument(t, 0);
                      t = n_18;
                      {
                        ATerm k_57 = t;
                        int l_57 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_18);
                            {
                              ATerm m_57 = t;
                              int n_57 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_39 = NULL;
                                  t = eval_config_0_0(t);
                                  n_39 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_18, n_39);
                                  t = n_39;
                                  ;
                                  LocalPopChoice(n_57);
                                }
                              else
                                {
                                  t = m_57;
                                }
                            }
                            ;
                            LocalPopChoice(l_57);
                          }
                        else
                          {
                            t = k_57;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_18 = NULL,v_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_18 = ATgetArgument(t, 0);
                          o_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_18;
                      t = eval_config_0_0(t);
                      u_18 = t;
                      t = o_18;
                      t = eval_config_0_0(t);
                      v_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
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
  ATerm e_19 = NULL,f_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  {
    ATerm o_57 = t;
    int p_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_57 = ATgetArgument(t, 0);
            ATerm r_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_19, f_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_57 = ATgetFirst((ATermList) t);
            s_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_39;
        ;
        LocalPopChoice(p_57);
      }
    else
      {
        t = o_57;
        t = (ATerm) ATempty;
      }
    h_19 = t;
    t = SSL_table_put(e_19, f_19, h_19);
    t = (ATerm) ATmakeAppl(sym__2, e_19, f_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  o_19 = t;
  t = a_104(t);
  p_19 = t;
  {
    ATerm t_57 = t;
    int u_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(p_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_57);
      }
    else
      {
        t = t_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_19 = ATgetFirst((ATermList) t);
        q_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(p_19, (ATerm)ATmakeAppl(sym_Scopes_0), q_19);
    t = r_19;
    {
      ATerm r_21 (ATerm t)
      {
        ATerm s_19 = NULL;
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_19, s_19);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_21, t);
      t = o_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_86(t);
      t = l_86(t);
      ;
      LocalPopChoice(w_57);
    }
  else
    {
      t = v_57;
      t = l_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t = z_103(t);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_19, term_x_57);
  {
    ATerm y_57 = t;
    int z_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_58 = ATgetArgument(t, 0);
            ATerm b_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_57);
      }
    else
      {
        t = y_57;
        t = (ATerm) ATempty;
      }
    x_19 = t;
    t = SSL_table_put(w_19, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_19), (ATerm) ATempty));
    t = v_19;
  }
  return(t);
}
ATerm s_21 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm c_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 = NULL;
      j_20 = t;
      t = SSL_remove(j_20);
      ;
      LocalPopChoice(d_58);
    }
  else
    {
      t = c_58;
    }
  return(t);
}
ATerm x_21 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  t = begin_scope_1_0(s_21, t);
  {
    ATerm v_21 (ATerm t)
    {
      ATerm f_20 = NULL;
      f_20 = t;
      {
        ATerm e_58 = t;
        int f_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(f_58);
          }
        else
          {
            t = e_58;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_20 != NULL) && (d_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_20 = ATgetFirst((ATermList) t);
            {
              ATerm g_58 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(d_20);
        t = map_1_0(w_21, t);
        t = f_20;
        t = end_scope_1_0(x_21, t);
      }
      return(t);
    }
    t = restore_always_2_0(a_115, v_21, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm h_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20 = NULL,p_20 = NULL;
      n_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_58 = t;
        int k_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_39 = NULL;
            t = eval_config_0_0(t);
            z_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_39);
            t = z_39;
            ;
            LocalPopChoice(k_58);
          }
        else
          {
            t = j_58;
          }
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_20, term_i_37);
        t = geq_0_0(t);
        t = n_20;
        t = g_107(t);
      }
      ;
      LocalPopChoice(i_58);
    }
  else
    {
      t = h_58;
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,v_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_58 = ATgetArgument(t, 0);
      if(match_cons(l_58, sym__4))
        {
          q_20 = ATgetArgument(l_58, 0);
          r_20 = ATgetArgument(l_58, 1);
          s_20 = ATgetArgument(l_58, 2);
          t_20 = ATgetArgument(l_58, 3);
        }
      else
        _fail(t);
      {
        ATerm m_58 = ATgetArgument(t, 1);
        if(match_cons(m_58, sym__4))
          {
            v_20 = ATgetArgument(m_58, 0);
            x_20 = ATgetArgument(m_58, 1);
            y_20 = ATgetArgument(m_58, 2);
            z_20 = ATgetArgument(m_58, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_20, v_20);
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(q_20, v_20);
        ;
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
        t = SSL_subtr(q_20, v_20);
      }
    a_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_20, x_20);
    {
      ATerm p_58 = t;
      int q_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(r_20, x_20);
          ;
          LocalPopChoice(q_58);
        }
      else
        {
          t = p_58;
          t = SSL_subtr(r_20, x_20);
        }
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_20, y_20);
      {
        ATerm r_58 = t;
        int s_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(s_20, y_20);
            ;
            LocalPopChoice(s_58);
          }
        else
          {
            t = r_58;
            t = SSL_subtr(s_20, y_20);
          }
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_20, z_20);
        {
          ATerm t_58 = t;
          int u_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(t_20, z_20);
              ;
              LocalPopChoice(u_58);
            }
          else
            {
              t = t_58;
              t = SSL_subtr(t_20, z_20);
            }
          d_21 = t;
          t = (ATerm) ATmakeAppl(sym__4, a_21, b_21, c_21, d_21);
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
ATerm profile_p__2_0 (ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  e_21 = t;
  t = times_0_0(t);
  f_21 = t;
  t = e_21;
  t = u_110(t);
  g_21 = t;
  t = times_0_0(t);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, f_21);
  t = diff_times_0_0(t);
  i_21 = t;
  if(match_cons(t, sym__4))
    {
      j_21 = ATgetArgument(t, 0);
      {
        ATerm v_58 = ATgetArgument(t, 1);
      }
      k_21 = ATgetArgument(t, 2);
      {
        ATerm w_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
  {
    ATerm x_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_21, k_21);
        ;
        LocalPopChoice(y_58);
      }
    else
      {
        t = x_58;
        t = SSL_addr(j_21, k_21);
      }
    l_21 = t;
    t = SSL_TicksToSeconds(l_21);
    m_21 = t;
    t = i_21;
    if(match_cons(t, sym__4))
      {
        ATerm z_58 = ATgetArgument(t, 0);
        n_21 = ATgetArgument(t, 1);
        {
          ATerm a_59 = ATgetArgument(t, 2);
        }
        o_21 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
    {
      ATerm b_59 = t;
      int c_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(n_21, o_21);
          ;
          LocalPopChoice(c_59);
        }
      else
        {
          t = b_59;
          t = SSL_addr(n_21, o_21);
        }
      p_21 = t;
      t = SSL_TicksToSeconds(p_21);
      q_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_21), term_e_59), m_21), term_d_59);
      t = t_110(t);
      t = g_21;
    }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  t_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)));
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL;
        t = eval_config_0_0(t);
        d_40 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), d_40);
        t = d_40;
        ;
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
      }
    u_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), u_21), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
    t = t_21;
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm h_59 = t;
  int i_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_22 = NULL,f_22 = NULL;
      b_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_59 = t;
        int k_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = NULL;
            t = eval_config_0_0(t);
            h_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_40);
            t = h_40;
            ;
            LocalPopChoice(k_59);
          }
        else
          {
            t = j_59;
          }
        f_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, term_h_39);
        t = geq_0_0(t);
        t = b_22;
        t = k_107(t);
      }
      ;
      LocalPopChoice(i_59);
    }
  else
    {
      t = h_59;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm l_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_22 = NULL,n_22 = NULL;
      l_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_59 = t;
        int o_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_40 = NULL;
            t = eval_config_0_0(t);
            l_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_40);
            t = l_40;
            ;
            LocalPopChoice(o_59);
          }
        else
          {
            t = n_59;
          }
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, term_m_39);
        t = geq_0_0(t);
        t = l_22;
        t = j_107(t);
      }
      ;
      LocalPopChoice(m_59);
    }
  else
    {
      t = l_59;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_22;
        if((y_22 != t))
          {
            _fail(t);
          }
        t = w_22;
        ;
        LocalPopChoice(q_59);
      }
    else
      {
        t = p_59;
        t = w_22;
        {
          ATerm r_59 = t;
          int s_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_22, z_22);
              ;
              LocalPopChoice(s_59);
            }
          else
            {
              t = r_59;
              t = SSL_gtr(y_22, z_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_22, z_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL,e_23 = NULL;
      c_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm v_59 = t;
        int w_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = NULL;
            t = eval_config_0_0(t);
            y_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_40);
            t = y_40;
            ;
            LocalPopChoice(w_59);
          }
        else
          {
            t = v_59;
          }
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_23, term_g_46);
        t = geq_0_0(t);
        t = c_23;
        t = l_107(t);
      }
      ;
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_23;
  {
    ATerm k_23 (ATerm t)
    {
      ATerm x_59 = t;
      int y_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_23;
          ;
          LocalPopChoice(y_59);
        }
      else
        {
          t = x_59;
          {
            ATerm z_59 = t;
            int a_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_40 = NULL,a_41 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_40 = ATgetFirst((ATermList) t);
                    a_41 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_23;
                {
                  ATerm z_21 (ATerm t)
                  {
                    ATerm b_41 = NULL;
                    b_41 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_40, b_41);
                    t = l_97(t);
                    return(t);
                  }
                  t = fetch_1_0(z_21, t);
                  t = a_41;
                  t = k_23(t);
                }
                ;
                LocalPopChoice(a_60);
              }
            else
              {
                t = z_59;
                t = Cons_2_0(_id, k_23, t);
              }
          }
        }
      return(t);
    }
    t = k_23(t);
  }
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm v_23 = NULL;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      if((v_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__3))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
      p_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_60 = ATgetArgument(t, 0);
            ATerm e_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_23, o_23);
        ;
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
        t = (ATerm) ATempty;
      }
    q_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_23, p_23);
    t = union_1_0(d_22, t);
    r_23 = t;
    t = SSL_table_put(n_23, o_23, r_23);
    t = (ATerm) ATmakeAppl(sym__3, n_23, o_23, p_23);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_23;
  {
    ATerm e_22 (ATerm t)
    {
      ATerm a_24 = NULL,c_24 = NULL;
      if(match_cons(t, sym__2))
        {
          a_24 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, y_23, a_24, c_24);
      t = c_112(t);
      return(t);
    }
    t = map_1_0(e_22, t);
  }
  return(t);
}
ATerm t_24 (ATerm l_24, ATerm t)
{
  t = SSL_fclose(l_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_24 = NULL,r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_24 = ATgetArgument(t, 0);
      {
        ATerm f_60 = t;
        int g_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_24);
            ;
            LocalPopChoice(g_60);
          }
        else
          {
            t = f_60;
            t = t_24(r_24, t);
          }
      }
    }
  else
    {
      t = t_24(r_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_24 = NULL;
  t = SSL_stdin_stream();
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_24 = NULL;
  t = SSL_stdout_stream();
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_24 = NULL;
  t = SSL_stderr_stream();
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_24);
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm g_25 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_25;
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  t = SSL_is_string(l_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_60 = ATgetArgument(t, 0);
      ATerm i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_41 = NULL,n_41 = NULL;
        m_41 = t;
        t = SSL_explode_term(m_41);
        if(match_cons(t, sym__2))
          {
            ATerm l_60 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_60) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_60 = ATgetArgument(t, 1);
              if(((ATgetType(m_60) == AT_LIST) && !(ATisEmpty(m_60))))
                {
                  n_41 = ATgetFirst((ATermList) m_60);
                  {
                    ATerm n_60 = (ATerm) ATgetNext((ATermList) m_60);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_41;
        if(match_cons(t, sym_stderr_0))
          {
            t = n_41;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = n_41;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_41;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_60);
      }
    else
      {
        t = j_60;
        {
          ATerm o_60 = t;
          int p_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
              t = _2_0(g_22, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_25 = ATgetArgument(t, 0);
                  e_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_25, e_25);
              f_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, f_25);
              ;
              LocalPopChoice(p_60);
            }
          else
            {
              t = o_60;
              {
                ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
                t = _2_0(h_22, _id, t);
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
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL;
      q_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, term_s_60);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_60);
    }
  else
    {
      t = q_60;
      {
        ATerm o_41 = NULL;
        o_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = o_41;
        _fail(t);
      }
    }
  n_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_25);
  o_25 = t;
  t = n_25;
  t = fclose_0_0(t);
  t = o_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm t_60 = t;
  int u_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL;
      s_25 = t;
      t = SSL_access(s_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(u_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = t_60;
      {
        ATerm v_60 = t;
        int w_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_41 = NULL;
            ATerm x_60 = t;
            if((PushChoice() == 0))
              {
                ATerm t_25 = NULL;
                t_25 = t;
                t = SSL_access(t_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_60;
              }
            r_41 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = r_41;
            ;
            LocalPopChoice(w_60);
          }
        else
          {
            t = v_60;
            {
              ATerm u_41 = NULL;
              u_41 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = u_41;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm x_41 = NULL;
  x_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_41), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = x_41;
  return(t);
}
ATerm j_22 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_42), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = a_42;
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = z_25;
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = a_26;
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = b_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,x_25 = NULL;
  u_25 = t;
  t = if_verbose5_1_0(i_22, t);
  {
    ATerm y_60 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, u_25));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_60;
      }
    v_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, u_25));
    t = v_25;
    t = if_verbose4_1_0(j_22, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_22, t);
    x_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_60, x_25);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(m_22, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, u_25), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_z_60, (ATerm)ATmakeAppl(sym_Imported_1, u_25), (ATerm) ATempty);
    t = if_verbose4_1_0(o_22, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm a_61 = t;
  int b_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_61);
    }
  else
    {
      t = a_61;
      {
        ATerm c_61 = t;
        int d_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 (ATerm t)
            {
              t = filter_1_0(l_100, t);
              return(t);
            }
            t = Cons_2_0(l_100, p_22, t);
            ;
            LocalPopChoice(d_61);
          }
        else
          {
            t = c_61;
            {
              ATerm f_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_61 = ATgetFirst((ATermList) t);
                  f_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_26;
              t = filter_1_0(l_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm j_26 (ATerm t)
  {
    ATerm f_61 = t;
    int g_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_86(t);
        t = j_26(t);
        ;
        LocalPopChoice(g_61);
      }
    else
      {
        t = f_61;
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_61 = t;
  int i_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm j_61 = t;
        int k_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_42 = NULL;
            t = eval_config_0_0(t);
            g_42 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), g_42);
            t = g_42;
            ;
            LocalPopChoice(k_61);
          }
        else
          {
            t = j_61;
          }
      }
      ;
      LocalPopChoice(i_61);
    }
  else
    {
      t = h_61;
      {
        ATerm l_61 = t;
        int m_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(m_61);
          }
        else
          {
            t = l_61;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm q_22 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = h_42;
  return(t);
}
ATerm r_22 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_61 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_61;
      }
  }
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = k_42;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = if_verbose5_1_0(q_22, t);
  k_26 = t;
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(p_61);
      }
    else
      {
        t = o_61;
        {
          ATerm l_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_26 = t;
          t = repeat_1_0(r_22, t);
          t = l_26;
        }
      }
    t = k_26;
    t = if_verbose5_1_0(s_22, t);
  }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = n_42;
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_43), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = a_43;
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(a_23, t);
  v_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_43), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = v_43;
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t_43 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), t_43);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(t_22, t);
      t = xtc_load_0_0(t);
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
            if(match_cons(t, sym__2))
              {
                t_42 = ATgetArgument(t, 0);
                u_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, t_42));
            {
              ATerm u_22 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((u_42 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((v_42 != NULL) && (v_42 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(u_22, t);
              t = not_null(v_42);
            }
            ;
            LocalPopChoice(t_61);
          }
        else
          {
            t = s_61;
            {
              ATerm y_42 = NULL,z_42 = NULL;
              y_42 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, y_42));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_61 = ATgetFirst((ATermList) t);
                  if(match_cons(u_61, sym__2))
                    {
                      ATerm w_61 = ATgetArgument(u_61, 0);
                      z_42 = ATgetArgument(u_61, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_61 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_42;
            }
          }
        t = if_verbose5_1_0(v_22, t);
      }
      ;
      LocalPopChoice(r_61);
    }
  else
    {
      t = q_61;
      {
        ATerm p_26 = NULL;
        p_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), p_26), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_61), p_26), term_x_61);
        t = if_verbose5_1_0(x_22, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_26;
  {
    ATerm z_61 = t;
    int a_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_26);
        {
          ATerm b_62 = t;
          int c_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL;
              t = eval_config_0_0(t);
              b_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_26, b_44);
              t = b_44;
              ;
              LocalPopChoice(c_62);
            }
          else
            {
              t = b_62;
            }
        }
        ;
        LocalPopChoice(a_62);
      }
    else
      {
        t = z_61;
        t = (ATerm) ATempty;
      }
    w_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_26, w_26);
    {
      ATerm d_62 = t;
      int e_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm f_62 = ATgetArgument(t, 0);
              ATerm g_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_26;
          {
            ATerm b_23 (ATerm t)
            {
              t = w_26;
              return(t);
            }
            t = at_end_1_0(b_23, t);
          }
          ;
          LocalPopChoice(e_62);
        }
      else
        {
          t = d_62;
          {
            ATerm f_44 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_26, w_26));
            if(match_cons(t, sym__2))
              {
                ATerm h_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                f_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_44;
            t = concat_0_0(t);
          }
        }
      x_26 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_26, x_26);
      t = (ATerm) ATmakeAppl(sym__3, term_r_55, u_26, x_26);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_27 = NULL;
      t = term_f_53;
      t = l_0(t);
      k_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_62, term_j_62, k_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_27 = ATgetFirst((ATermList) t);
          h_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_27 = ATgetFirst((ATermList) t);
          j_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_27;
      t = j_0(t);
      t = i_27;
      t = k_0(t);
      q_27 = t;
      t = (ATerm) ATinsert(CheckATermList(j_27), q_27);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_62 = t;
    int l_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_27);
        {
          ATerm m_62 = t;
          int n_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_44 = NULL;
              t = eval_config_0_0(t);
              j_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_27, j_44);
              t = j_44;
              ;
              LocalPopChoice(n_62);
            }
          else
            {
              t = m_62;
            }
          t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_27);
          t = (ATerm) ATmakeAppl(sym__2, term_r_55, r_27);
        }
        ;
        LocalPopChoice(l_62);
      }
    else
      {
        t = k_62;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), r_27, s_27);
        t = (ATerm) ATmakeAppl(sym__3, term_r_55, r_27, s_27);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_27;
  {
    ATerm o_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_27);
        {
          ATerm q_62 = t;
          int r_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_44 = NULL;
              t = eval_config_0_0(t);
              n_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_27, n_44);
              t = n_44;
              ;
              LocalPopChoice(r_62);
            }
          else
            {
              t = q_62;
            }
        }
        ;
        LocalPopChoice(p_62);
      }
    else
      {
        t = o_62;
        t = (ATerm) ATempty;
      }
    w_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_27, v_27);
    {
      ATerm s_62 = t;
      int t_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm u_62 = ATgetArgument(t, 0);
              ATerm v_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_27;
          {
            ATerm d_23 (ATerm t)
            {
              t = v_27;
              return(t);
            }
            t = at_end_1_0(d_23, t);
          }
          ;
          LocalPopChoice(t_62);
        }
      else
        {
          t = s_62;
          {
            ATerm r_44 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_27, v_27));
            if(match_cons(t, sym__2))
              {
                ATerm w_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                r_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_44;
            t = concat_0_0(t);
          }
        }
      x_27 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_27, x_27);
      t = (ATerm) ATmakeAppl(sym__3, term_r_55, u_27, x_27);
    }
  }
  return(t);
}
ATerm f_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_28);
  t = term_f_53;
  return(t);
}
ATerm h_23 (ATerm t)
{
  t = term_x_62;
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-o"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
ATerm t_23 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_28);
  t = term_f_53;
  return(t);
}
ATerm u_23 (ATerm t)
{
  t = term_y_62;
  return(t);
}
ATerm w_23 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  if(match_string(t, "-I"))
    {
      t = p_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm z_23 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_62, (ATerm) ATinsert(ATinsert(ATempty, q_28), term_z_62));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = term_a_63;
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "--main"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), s_28);
  t = term_f_53;
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = term_b_63;
  return(t);
}
ATerm g_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_24 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_34, (ATerm) ATinsert(ATempty, t_28));
  t = post_extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = term_c_63;
  return(t);
}
ATerm j_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_63, (ATerm) ATinsert(ATempty, u_28));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm m_24 (ATerm t)
{
  t = term_e_63;
  return(t);
}
ATerm n_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_24 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_63, (ATerm) ATinsert(ATempty, w_28));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm s_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_24 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm y_24 (ATerm t)
{
  t = term_h_63;
  return(t);
}
ATerm b_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_25 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm m_25 (ATerm t)
{
  t = term_i_63;
  return(t);
}
ATerm r_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_25 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm y_25 (ATerm t)
{
  t = term_j_63;
  return(t);
}
ATerm d_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_26 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  t = SSL_string_to_int(y_28);
  z_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_28);
  t = term_f_53;
  return(t);
}
ATerm g_26 (ATerm t)
{
  t = term_k_63;
  return(t);
}
ATerm h_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_26 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  b_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), b_29);
  t = term_f_53;
  return(t);
}
ATerm m_26 (ATerm t)
{
  t = term_l_63;
  return(t);
}
ATerm n_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_26 (ATerm t)
{
  t = term_n_63;
  t = toggle_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_o_63;
  return(t);
}
ATerm s_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = term_p_63;
  return(t);
}
ATerm z_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_63, (ATerm) ATinsert(ATempty, c_29));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm b_27 (ATerm t)
{
  t = term_r_63;
  return(t);
}
ATerm c_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_27 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  t = SSL_string_to_int(d_29);
  e_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_29);
  t = term_f_53;
  return(t);
}
ATerm e_27 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm f_27 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  if(match_string(t, "-S"))
    {
      t = f_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_29;
    }
  return(t);
}
ATerm l_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_f_53;
  return(t);
}
ATerm m_27 (ATerm t)
{
  t = term_t_63;
  return(t);
}
ATerm n_27 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  if(match_string(t, "-h"))
    {
      t = g_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = g_29;
    }
  return(t);
}
ATerm o_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm p_27 (ATerm t)
{
  t = term_u_63;
  return(t);
}
ATerm t_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm z_27 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-v"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
ATerm b_28 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm c_28 (ATerm t)
{
  t = term_w_63;
  return(t);
}
ATerm d_28 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  if(match_string(t, "--warning"))
    {
      t = k_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = k_29;
    }
  return(t);
}
ATerm e_28 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  {
    ATerm x_63 = t;
    int y_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
        {
          ATerm z_63 = t;
          int a_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_44 = NULL;
              t = eval_config_0_0(t);
              v_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), v_44);
              t = v_44;
              ;
              LocalPopChoice(a_64);
            }
          else
            {
              t = z_63;
            }
          t = Cons_2_0(j_28, k_28, t);
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, l_29));
          t = (ATerm) ATmakeAppl(sym__3, term_r_55, term_g_51, (ATerm) ATinsert(ATempty, l_29));
        }
        ;
        LocalPopChoice(y_63);
      }
    else
      {
        t = x_63;
        t = (ATerm) ATmakeAppl(sym__2, term_g_51, (ATerm) ATinsert(ATempty, l_29));
        t = extend_config_0_0(t);
      }
    t = term_f_53;
  }
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = term_b_64;
  return(t);
}
ATerm j_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm c_64 = t;
  int d_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(f_23, g_23, h_23, t);
      ;
      LocalPopChoice(d_64);
    }
  else
    {
      t = c_64;
      {
        ATerm e_64 = t;
        int f_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_23, t_23, u_23, t);
            ;
            LocalPopChoice(f_64);
          }
        else
          {
            t = e_64;
            {
              ATerm g_64 = t;
              int h_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_23, z_23, b_24, t);
                  ;
                  LocalPopChoice(h_64);
                }
              else
                {
                  t = g_64;
                  {
                    ATerm i_64 = t;
                    int j_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(d_24, e_24, f_24, t);
                        ;
                        LocalPopChoice(j_64);
                      }
                    else
                      {
                        t = i_64;
                        {
                          ATerm k_64 = t;
                          int l_64 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(g_24, h_24, i_24, t);
                              ;
                              LocalPopChoice(l_64);
                            }
                          else
                            {
                              t = k_64;
                              {
                                ATerm m_64 = t;
                                int n_64 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(j_24, k_24, m_24, t);
                                    ;
                                    LocalPopChoice(n_64);
                                  }
                                else
                                  {
                                    t = m_64;
                                    {
                                      ATerm o_64 = t;
                                      int p_64 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(n_24, o_24, q_24, t);
                                          ;
                                          LocalPopChoice(p_64);
                                        }
                                      else
                                        {
                                          t = o_64;
                                          {
                                            ATerm q_64 = t;
                                            int r_64 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(s_24, x_24, y_24, t);
                                                ;
                                                LocalPopChoice(r_64);
                                              }
                                            else
                                              {
                                                t = q_64;
                                                {
                                                  ATerm s_64 = t;
                                                  int t_64 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(b_25, k_25, m_25, t);
                                                      ;
                                                      LocalPopChoice(t_64);
                                                    }
                                                  else
                                                    {
                                                      t = s_64;
                                                      {
                                                        ATerm u_64 = t;
                                                        int v_64 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(r_25, w_25, y_25, t);
                                                            ;
                                                            LocalPopChoice(v_64);
                                                          }
                                                        else
                                                          {
                                                            t = u_64;
                                                            {
                                                              ATerm w_64 = t;
                                                              int x_64 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(d_26, e_26, g_26, t);
                                                                  ;
                                                                  LocalPopChoice(x_64);
                                                                }
                                                              else
                                                                {
                                                                  t = w_64;
                                                                  {
                                                                    ATerm y_64 = t;
                                                                    int z_64 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(h_26, i_26, m_26, t);
                                                                        ;
                                                                        LocalPopChoice(z_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_64;
                                                                        {
                                                                          ATerm a_65 = t;
                                                                          int b_65 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(n_26, o_26, q_26, t);
                                                                              ;
                                                                              LocalPopChoice(b_65);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_65;
                                                                              {
                                                                                ATerm c_65 = t;
                                                                                int d_65 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(s_26, t_26, y_26, t);
                                                                                    ;
                                                                                    LocalPopChoice(d_65);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_65;
                                                                                    {
                                                                                      ATerm e_65 = t;
                                                                                      int f_65 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(z_26, a_27, b_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(f_65);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = e_65;
                                                                                          {
                                                                                            ATerm g_65 = t;
                                                                                            int h_65 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(c_27, d_27, e_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(h_65);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_65;
                                                                                                {
                                                                                                  ATerm i_65 = t;
                                                                                                  int j_65 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(f_27, l_27, m_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(j_65);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_65;
                                                                                                      {
                                                                                                        ATerm k_65 = t;
                                                                                                        int l_65 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(n_27, o_27, p_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_65);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_65;
                                                                                                            {
                                                                                                              ATerm m_65 = t;
                                                                                                              int n_65 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(t_27, y_27, z_27, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(n_65);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = m_65;
                                                                                                                  {
                                                                                                                    ATerm o_65 = t;
                                                                                                                    int p_65 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(a_28, b_28, c_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(p_65);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_65;
                                                                                                                        t = ArgOption_3_0(d_28, e_28, f_28, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_66), term_z_65), term_c_66), term_b_66), term_a_66), term_z_65), term_y_65), term_x_65), term_w_65), term_v_65), term_u_65), term_t_65), term_s_65), term_r_65), term_q_65);
  return(t);
}
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm m_29 (ATerm t)
  {
    ATerm e_66 = t;
    int f_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(f_66);
      }
    else
      {
        t = e_66;
        t = Cons_2_0(g_93, m_29, t);
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_29 = ATgetFirst((ATermList) t);
      p_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        t = p_29;
        t = h_0(t);
        u_29 = t;
        t = o_29;
        t = g_0(t);
        w_29 = t;
        t = p_29;
        {
          ATerm l_28 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_29), w_29);
            return(t);
          }
          t = reverse_acc_2_0(g_0, l_28, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_53;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm x_29 = NULL;
  t = term_f_53;
  t = f_0(t);
  x_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_66), x_29), term_k_66), term_z_65), term_j_66), term_z_65), term_i_66), term_h_66), term_z_65), term_g_66);
  return(t);
}
ATerm Program_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  y_29 = t;
  t = z_29;
  t = l_77(t);
  a_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, a_30), y_29);
  return(t);
}
ATerm q_29 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_29 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_30), term_m_66);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm n_66 = t;
  int o_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm p_66 = t;
        int q_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_44 = NULL;
            t = eval_config_0_0(t);
            z_44 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_44);
            t = z_44;
            ;
            LocalPopChoice(q_66);
          }
        else
          {
            t = p_66;
          }
        e_30 = t;
      }
      ;
      LocalPopChoice(o_66);
    }
  else
    {
      t = n_66;
      {
        ATerm v_28 (ATerm t)
        {
          ATerm h_29 (ATerm t)
          {
            if(((e_30 != NULL) && (e_30 != t)))
              _fail(t);
            else
              e_30 = t;
            return(t);
          }
          t = Program_1_0(h_29, t);
          return(t);
        }
        t = fetch_1_0(v_28, t);
      }
    }
  {
    ATerm r_66 = t;
    int s_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 (ATerm t)
        {
          t = not_null(e_30);
          return(t);
        }
        t = short_description_1_0(j_29, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(s_66);
      }
    else
      {
        t = r_66;
      }
    t = term_t_66;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_acc_2_0(_id, q_29, t);
    t = map_1_0(r_29, t);
    {
      ATerm u_66 = t;
      int v_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_30 = NULL;
          ATerm s_29 (ATerm t)
          {
            t = not_null(e_30);
            return(t);
          }
          t = long_description_1_0(s_29, t);
          i_30 = t;
          t = (ATerm) ATinsert(CheckATermList(i_30), term_z_65);
          t = echo_0_0(t);
          ;
          LocalPopChoice(v_66);
        }
      else
        {
          t = u_66;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  j_30 = t;
  t = k_30;
  t = m_77(t);
  l_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_30), j_30);
  return(t);
}
ATerm fetch_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm p_30 (ATerm t)
  {
    ATerm w_66 = t;
    int x_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_93, _id, t);
        ;
        LocalPopChoice(x_66);
      }
    else
      {
        t = w_66;
        t = Cons_2_0(_id, p_30, t);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL;
  s_30 = t;
  {
    ATerm y_66 = t;
    int z_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_67 = ATgetFirst((ATermList) t);
                ATerm b_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_30;
          }
        ;
        LocalPopChoice(z_66);
      }
    else
      {
        t = y_66;
        t = (ATerm) ATinsert(ATempty, s_30);
      }
    u_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_30);
    t = s_30;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_67 = t;
    int d_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_45 = NULL;
        t = eval_config_0_0(t);
        d_45 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_45);
        t = d_45;
        ;
        LocalPopChoice(d_67);
      }
    else
      {
        t = c_67;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm t_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_29 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_67;
  return(t);
}
ATerm c_30 (ATerm t)
{
  t = term_i_67;
  return(t);
}
ATerm d_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_30 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_67;
  return(t);
}
ATerm h_30 (ATerm t)
{
  t = term_k_67;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_67 = t;
  int m_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_29, v_29, c_30, t);
      ;
      LocalPopChoice(m_67);
    }
  else
    {
      t = l_67;
      t = Option_3_0(d_30, f_30, h_30, t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym__3))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
      n_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
  {
    ATerm n_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_67 = ATgetArgument(t, 0);
            ATerm q_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_31, m_31);
        ;
        LocalPopChoice(o_67);
      }
    else
      {
        t = n_67;
        t = (ATerm) ATempty;
      }
    o_31 = t;
    t = SSL_table_put(l_31, m_31, (ATerm) ATinsert(CheckATermList(o_31), n_31));
    t = (ATerm) ATmakeAppl(sym__3, l_31, m_31, n_31);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_31 = NULL;
      t = term_f_53;
      t = d_0(t);
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_62, term_j_62, z_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = a_0(t);
      t = term_f_53;
      t = b_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_31), c_32);
    }
  return(t);
}
ATerm n_30 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_32);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  {
    ATerm r_67 = t;
    int s_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_67;
        t = z_111(t);
        ;
        LocalPopChoice(s_67);
      }
    else
      {
        t = r_67;
      }
    t = g_32;
    {
      ATerm o_30 (ATerm t)
      {
        ATerm u_67 = t;
        int v_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_67 = t;
            int x_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_67);
              }
            else
              {
                t = w_67;
                t = z_111(t);
                t = Cons_2_0(_id, o_30, t);
              }
            ;
            LocalPopChoice(v_67);
          }
        else
          {
            t = u_67;
            {
              ATerm j_32 = NULL,l_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_32 = ATgetFirst((ATermList) t);
                  l_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_32), (ATerm) ATmakeAppl(sym_Undefined_1, j_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_30, o_30, t);
    }
  }
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  if(match_string(t, "--help"))
    {
      t = w_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_32;
        }
    }
  return(t);
}
ATerm v_30 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_67;
  return(t);
}
ATerm w_30 (ATerm t)
{
  t = term_z_67;
  return(t);
}
ATerm y_30 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_32;
  {
    ATerm r_30 (ATerm t)
    {
      ATerm a_68 = t;
      int b_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_111(t);
          ;
          LocalPopChoice(b_68);
        }
      else
        {
          t = a_68;
          {
            ATerm c_68 = t;
            int d_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_30, v_30, w_30, t);
                ;
                LocalPopChoice(d_68);
              }
            else
              {
                t = c_68;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_30, t);
    {
      ATerm e_68 = t;
      int f_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_33 = NULL;
          m_33 = t;
          {
            ATerm g_68 = t;
            int h_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_33;
                {
                  ATerm i_68 = t;
                  int j_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm k_68 = t;
                        int l_68 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_45 = NULL;
                            t = eval_config_0_0(t);
                            s_45 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_45);
                            t = s_45;
                            ;
                            LocalPopChoice(l_68);
                          }
                        else
                          {
                            t = k_68;
                          }
                      }
                      ;
                      LocalPopChoice(j_68);
                    }
                  else
                    {
                      t = i_68;
                      t = fetch_1_0(y_30, t);
                    }
                  t = m_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(h_68);
              }
            else
              {
                t = g_68;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_68 = t;
                  int n_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_45 = NULL;
                      t = eval_config_0_0(t);
                      z_45 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), z_45);
                      t = z_45;
                      ;
                      LocalPopChoice(n_68);
                    }
                  else
                    {
                      t = m_68;
                    }
                  t = m_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(f_68);
        }
      else
        {
          t = e_68;
          {
            ATerm o_68 = t;
            int p_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_31 (ATerm t)
                {
                  ATerm b_31 (ATerm t)
                  {
                    if(((u_32 != NULL) && (u_32 != t)))
                      _fail(t);
                    else
                      u_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_31, t);
                  return(t);
                }
                t = fetch_1_0(a_31, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_32)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_32)), term_q_68));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_68);
              }
            else
              {
                t = o_68;
              }
          }
        }
      v_32 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_32;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_68 = t;
  int s_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_68);
    }
  else
    {
      t = r_68;
      {
        ATerm u_33 = NULL,w_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_33 = ATgetFirst((ATermList) t);
            w_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_33;
        {
          ATerm d_31 (ATerm t)
          {
            t = w_33;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_31, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm d_34 (ATerm t)
  {
    ATerm t_68 = t;
    int u_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_34, t);
        ;
        LocalPopChoice(u_68);
      }
    else
      {
        t = t_68;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_93(t);
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm _2_0 (ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym__2))
    {
      f_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_34);
  e_34 = t;
  t = f_34;
  t = g_67(t);
  i_34 = t;
  t = h_34;
  t = h_67(t);
  j_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_34, j_34), e_34);
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_explode_string(r_34);
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  t = SSL_explode_string(s_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  t = _2_0(e_31, f_31, t);
  {
    ATerm v_68 = t;
    int w_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL,v_34 = NULL;
        if(match_cons(t, sym__2))
          {
            u_34 = ATgetArgument(t, 0);
            v_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_34;
        {
          ATerm g_31 (ATerm t)
          {
            t = v_34;
            return(t);
          }
          t = at_end_1_0(g_31, t);
        }
        ;
        LocalPopChoice(w_68);
      }
    else
      {
        t = v_68;
        {
          ATerm c_46 = NULL,d_46 = NULL;
          c_46 = t;
          t = SSL_explode_term(c_46);
          if(match_cons(t, sym__2))
            {
              ATerm x_68 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_68) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              d_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_46;
          t = concat_0_0(t);
        }
      }
    p_34 = t;
    t = SSL_implode_string(p_34);
  }
  return(t);
}
ATerm Cons_2_0 (ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  d_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_34 = ATgetFirst((ATermList) t);
      a_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_35);
  y_34 = t;
  t = z_34;
  t = v_71(t);
  b_35 = t;
  t = a_35;
  t = w_71(t);
  c_35 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(c_35), b_35), y_34);
  return(t);
}
ATerm i_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm j_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm g_35 = NULL,i_35 = NULL;
  g_35 = t;
  t = SSL_explode_string(g_35);
  {
    ATerm y_68 = t;
    int z_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_35 (ATerm t)
        {
          ATerm a_69 = t;
          int b_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, j_35, t);
              ;
              LocalPopChoice(b_69);
            }
          else
            {
              t = a_69;
              t = Cons_2_0(i_31, j_31, t);
            }
          return(t);
        }
        t = j_35(t);
        ;
        LocalPopChoice(z_68);
      }
    else
      {
        t = y_68;
        t = (ATerm) ATempty;
      }
    i_35 = t;
    t = SSL_implode_string(i_35);
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
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,x_35 = NULL,z_35 = NULL;
  k_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(2));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_c_69;
  t = xtc_find_path_0_0(t);
  l_35 = t;
  t = term_d_69;
  t = xtc_find_path_0_0(t);
  m_35 = t;
  t = term_e_69;
  t = xtc_find_path_0_0(t);
  n_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), m_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), l_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_f_69;
  t = xtc_find_path_0_0(t);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, term_g_69);
  t = conc_strings_0_0(t);
  p_35 = t;
  t = term_f_69;
  t = xtc_find_path_0_0(t);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, term_g_69);
  t = conc_strings_0_0(t);
  r_35 = t;
  t = term_h_69;
  t = xtc_find_path_0_0(t);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, term_g_69);
  t = conc_strings_0_0(t);
  t_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), r_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), p_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_f_69;
  t = xtc_find_path_0_0(t);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_35, term_i_69);
  t = conc_strings_0_0(t);
  v_35 = t;
  t = term_h_69;
  t = xtc_find_path_0_0(t);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_35, term_i_69);
  t = conc_strings_0_0(t);
  z_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), z_35), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), v_35), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = k_35;
  return(t);
}
ATerm k_31 (ATerm t)
{
  ATerm f_36 = NULL,u_46 = NULL;
  f_36 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL;
        t = eval_config_0_0(t);
        t_46 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_46);
        t = t_46;
        ;
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
      }
    u_46 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_46), (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue))));
    t = f_36;
  }
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm l_69 = t;
    int m_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_36 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)));
        {
          ATerm n_69 = t;
          int o_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_46 = NULL;
              t = eval_config_0_0(t);
              h_46 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), h_46);
              t = h_46;
              ;
              LocalPopChoice(o_69);
            }
          else
            {
              t = n_69;
            }
          t = term_p_69;
          t = xtc_find_0_0(t);
          a_36 = t;
          t = SSL_copy(a_36, (ATerm) ATmakeAppl(sym_stdout_0));
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
        ;
        LocalPopChoice(m_69);
      }
    else
      {
        t = l_69;
      }
    {
      ATerm q_69 = t;
      int r_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)));
          {
            ATerm s_69 = t;
            int t_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_46 = NULL;
                t = eval_config_0_0(t);
                l_46 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), l_46);
                t = l_46;
                ;
                LocalPopChoice(t_69);
              }
            else
              {
                t = s_69;
              }
            t = strc_version_0_0(t);
            t = SSL_exit((ATerm) ATmakeInt(0));
          }
          ;
          LocalPopChoice(r_69);
        }
      else
        {
          t = q_69;
        }
      {
        ATerm u_69 = t;
        int v_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_36 = NULL;
            b_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm w_69 = t;
              int x_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_46 = NULL;
                  t = eval_config_0_0(t);
                  p_46 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_46);
                  t = p_46;
                  ;
                  LocalPopChoice(x_69);
                }
              else
                {
                  t = w_69;
                }
              t = b_36;
            }
            ;
            LocalPopChoice(v_69);
          }
        else
          {
            t = u_69;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATempty, term_y_69);
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(k_31, t);
      }
    }
  }
  return(t);
}
ATerm p_31 (ATerm t)
{
  t = if_verbose1_1_0(s_31, t);
  return(t);
}
ATerm q_31 (ATerm t)
{
  t = xtc_temp_files_1_0(t_31, t);
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(g_36), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(CheckATermList(g_36), term_z_69));
  return(t);
}
ATerm t_31 (ATerm t)
{
  ATerm a_70 = t;
  int b_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_36 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
      {
        ATerm c_70 = t;
        int d_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_47 = NULL;
            t = eval_config_0_0(t);
            a_47 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), a_47);
            t = a_47;
            ;
            LocalPopChoice(d_70);
          }
        else
          {
            t = c_70;
          }
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_36);
      }
      ;
      LocalPopChoice(b_70);
    }
  else
    {
      t = a_70;
      t = term_u_53;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm u_31 (ATerm t)
{
  ATerm i_36 = NULL;
  t = run_time_0_0(t);
  i_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_q_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_70), i_36), term_e_70));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm g_70 = t;
  int h_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      t = profile_p__2_0(p_31, q_31, t);
      t = if_verbose2_1_0(u_31, t);
      t = SSL_exit((ATerm) ATmakeInt(0));
      ;
      LocalPopChoice(h_70);
    }
  else
    {
      t = g_70;
      {
        ATerm j_36 = NULL;
        t = run_time_0_0(t);
        j_36 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
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
