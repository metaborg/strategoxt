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
ATerm term_d_70;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_o_69;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_d_69;
ATerm term_c_69;
ATerm term_b_69;
ATerm term_p_68;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_s_67;
ATerm term_j_67;
ATerm term_g_67;
ATerm term_f_67;
ATerm term_e_67;
ATerm term_d_67;
ATerm term_s_66;
ATerm term_l_66;
ATerm term_k_66;
ATerm term_j_66;
ATerm term_i_66;
ATerm term_h_66;
ATerm term_g_66;
ATerm term_f_66;
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
ATerm term_p_65;
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
ATerm term_w_62;
ATerm term_i_62;
ATerm term_h_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_y_60;
ATerm term_r_60;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_w_57;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_f_56;
ATerm term_w_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_t_54;
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
ATerm term_e_51;
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
ATerm term_b_47;
ATerm term_a_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_x_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_e_45;
ATerm term_y_44;
ATerm term_w_44;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_l_39;
ATerm term_w_38;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_k_36;
ATerm term_r_35;
ATerm term_p_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_s_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_z_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_p_32;
ATerm term_e_32;
ATerm term_s_31;
void init_constant_terms (void)
{
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_45, term_r_35, term_t_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_e_32, term_x_45);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_45, term_s_36, term_a_46);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_46, term_g_46, term_h_46);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_46, term_l_46, term_m_46);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_46, term_q_46, term_s_46);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_46, term_x_46, term_y_46);
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_47, term_b_47, term_d_47);
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
  term_t_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_47, term_r_39, term_s_47);
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
  term_s_49 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_49, term_l_39, term_r_49);
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
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
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
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_62));
  term_i_62 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(sym__2, term_l_63, term_f_53);
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_x_65));
  term_x_65 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_g_66));
  term_g_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_j_66));
  term_j_66 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(sym__3, term_q_55, term_d_67, term_f_53);
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm link_object_code_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm c_to_object_code_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm f_1 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm k_1 (ATerm);
ATerm o_1 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm w_2 (ATerm);
ATerm d_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm s_1 (ATerm);
ATerm d_2 (ATerm);
ATerm n_2 (ATerm);
ATerm n_3 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm i_5 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm g_108 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm f_108 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm s_5 (ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm o_7 (ATerm);
ATerm s_7 (ATerm);
ATerm z_7 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm l_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm z_12 (ATerm);
ATerm b_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm z_13 (ATerm);
ATerm b_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm o_14 (ATerm);
ATerm q_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm a_15 (ATerm);
ATerm j_15 (ATerm);
ATerm l_5 (ATerm);
ATerm b_15 (ATerm);
ATerm q_6 (ATerm);
ATerm m_7 (ATerm);
ATerm b_9 (ATerm);
ATerm o_10 (ATerm);
ATerm g_11 (ATerm);
ATerm x_11 (ATerm);
ATerm n_13 (ATerm);
ATerm r_14 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm t_15 (ATerm);
ATerm q_15 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm);
ATerm u_15 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm h_16 (ATerm);
ATerm j_16 (ATerm);
ATerm l_16 (ATerm);
ATerm g_16 (ATerm);
ATerm k_16 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm r_16 (ATerm);
ATerm q_16 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm a_17 (ATerm);
ATerm g_17 (ATerm);
ATerm i_17 (ATerm);
ATerm k_17 (ATerm);
ATerm w_17 (ATerm);
ATerm u_17 (ATerm);
ATerm frontend_0_0 (ATerm);
ATerm i_18 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm save_as_1_0 (ATerm m_85 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm e_108 (ATerm), ATerm);
ATerm AddMain_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm assert_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm m_14 (ATerm c_14, ATerm);
ATerm n_14 (ATerm e_14, ATerm f_14, ATerm g_14, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm p_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm a_116 (ATerm), ATerm);
ATerm q_18 (ATerm);
ATerm x_18 (ATerm);
ATerm t_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm e_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm g_19 (ATerm);
ATerm basename_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm get_infile_0_0 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm r_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm x_19 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm p_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm s_20 (ATerm);
ATerm r_21 (ATerm);
ATerm t_21 (ATerm);
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
ATerm a_22 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm d_112 (ATerm), ATerm);
ATerm z_24 (ATerm s_24, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm g_22 (ATerm);
ATerm i_22 (ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm m_22 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm r_22 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm v_22 (ATerm);
ATerm x_22 (ATerm);
ATerm z_22 (ATerm);
ATerm y_22 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm toggle_config_0_0 (ATerm);
ATerm post_extend_config_0_0 (ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm j_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm s_23 (ATerm);
ATerm x_23 (ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm d_24 (ATerm);
ATerm f_24 (ATerm);
ATerm h_24 (ATerm);
ATerm k_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm t_24 (ATerm);
ATerm u_24 (ATerm);
ATerm v_24 (ATerm);
ATerm y_24 (ATerm);
ATerm b_25 (ATerm);
ATerm d_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm p_25 (ATerm);
ATerm x_25 (ATerm);
ATerm y_25 (ATerm);
ATerm z_25 (ATerm);
ATerm j_26 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm o_26 (ATerm);
ATerm s_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm d_27 (ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm l_27 (ATerm);
ATerm p_27 (ATerm);
ATerm r_27 (ATerm);
ATerm t_27 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm z_27 (ATerm);
ATerm g_28 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm a_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_29 (ATerm);
ATerm l_29 (ATerm);
ATerm t_29 (ATerm);
ATerm w_29 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_30 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm);
ATerm k_30 (ATerm);
ATerm l_30 (ATerm);
ATerm s_30 (ATerm);
ATerm v_30 (ATerm);
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm g_31 (ATerm);
ATerm h_31 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm j_31 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm m_31 (ATerm);
ATerm n_31 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm z_14 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_99(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = z_14;
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
ATerm o_0 (ATerm t)
{
  t = term_s_31;
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
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_0, z_0);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = SSL_addr(y_0, z_0);
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
      ATerm z_31 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
  t = foldr_2_0(o_0, r_0, t);
  c_1 = t;
  t = SSL_TicksToSeconds(c_1);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,p_2 = NULL;
      v_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL;
            t = eval_config_0_0(t);
            h_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_1);
            t = h_1;
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
          }
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, term_e_32);
        t = geq_0_0(t);
        t = v_1;
        t = b_107(t);
      }
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm v_2 = NULL;
  v_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue))));
  t = v_2;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_2));
  t = x_2;
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
  t = if_verbose2_1_0(s_0, t);
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = eval_config_0_0(t);
              l_1 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_1);
              t = l_1;
              ;
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
            }
        }
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          ATerm p_1 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
          {
            ATerm m_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_1 = NULL;
                t = eval_config_0_0(t);
                u_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), u_1);
                t = u_1;
                ;
                LocalPopChoice(o_32);
              }
            else
              {
                t = m_32;
              }
            p_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_1, term_p_32);
            t = conc_strings_0_0(t);
          }
        }
      }
    r_2 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)));
    {
      ATerm q_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 = NULL;
          t = eval_config_0_0(t);
          z_1 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), z_1);
          t = z_1;
          ;
          LocalPopChoice(u_32);
        }
      else
        {
          t = q_32;
        }
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_32, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_2), r_2), term_x_32), q_2));
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
ATerm a_1 (ATerm t)
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
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,c_2 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = if_verbose2_1_0(a_1, t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = eval_config_0_0(t);
        i_2 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), i_2);
        t = i_2;
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
      }
    c_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_2, term_c_33);
    t = conc_strings_0_0(t);
    a_3 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)));
    {
      ATerm d_33 = t;
      int e_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_2 = NULL;
          t = eval_config_0_0(t);
          m_2 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), m_2);
          t = m_2;
          ;
          LocalPopChoice(e_33);
        }
      else
        {
          t = d_33;
        }
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_x_32), z_2), term_f_33));
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm i_33 = ATgetArgument(t, 0);
                ATerm k_33 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_3;
            {
              ATerm b_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_x_32), z_2), term_f_33);
                return(t);
              }
              t = at_end_1_0(b_1, t);
            }
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm y_2 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm o_33 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("", 0, ATtrue)))
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_32, e_3);
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
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = c_to_object_code_0_0(t);
  t = link_object_code_0_0(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(o_3), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(o_3), term_r_33));
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = if_verbose1_1_0(i_1, t);
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)));
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL;
            t = eval_config_0_0(t);
            q_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), q_3);
            t = q_3;
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
          }
        t = m_3;
      }
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = profile_p__2_0(f_1, g_1, t);
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
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(e_4, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(e_4);
        t = term_z_33;
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_5 = NULL;
              t = d_4;
              t = q_0(t);
              f_5 = t;
              {
                ATerm d_34 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_34 = t;
                    int g_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_34);
                      }
                    else
                      {
                        t = f_34;
                        {
                          ATerm g_5 = NULL;
                          g_5 = t;
                          if((e_4 != t))
                            {
                              _fail(t);
                            }
                          t = g_5;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_34;
                  }
                t = SSL_rename(e_4, f_5);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_5);
              }
              ;
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
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
ATerm j_1 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_4 = NULL;
  l_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_i_34);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_i_34);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL;
  t = pass_verbose_0_0(t);
  j_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
  {
    ATerm j_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL;
        t = eval_config_0_0(t);
        r_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), r_6);
        t = r_6;
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = j_34;
      }
    t = map_1_0(m_1, t);
    k_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(k_4), (ATerm) ATinsert(ATempty, term_s_34)), j_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  t = pass_verbose_0_0(t);
  n_4 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
  {
    ATerm u_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        t = eval_config_0_0(t);
        x_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), x_6);
        t = x_6;
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = u_34;
      }
    t = map_1_0(q_1, t);
    o_4 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_4), (ATerm) ATinsert(ATempty, term_s_34)), n_4);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(c_35);
      t = xtc_transform_file_2_0(j_1, k_1, t);
    }
  else
    {
      t = b_35;
      t = xtc_transform_term_2_0(n_1, o_1, t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue))));
  t = q_4;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(s_4), (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(s_4), term_l_35));
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm t_4 = NULL;
  t = pass_verbose_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(CheckATermList(t_4), term_s_34);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm w_4 = NULL;
  t = pass_verbose_0_0(t);
  w_4 = t;
  t = (ATerm) ATinsert(CheckATermList(w_4), term_s_34);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_4 = NULL;
  t = pass_verbose_0_0(t);
  y_4 = t;
  t = (ATerm) ATinsert(CheckATermList(y_4), term_s_34);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm z_4 = NULL;
  t = pass_verbose_0_0(t);
  z_4 = t;
  t = (ATerm) ATinsert(CheckATermList(z_4), term_s_34);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm a_5 = NULL;
  t = pass_verbose_0_0(t);
  a_5 = t;
  t = (ATerm) ATinsert(CheckATermList(a_5), term_s_34);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm b_5 = NULL;
  t = pass_verbose_0_0(t);
  b_5 = t;
  t = (ATerm) ATinsert(CheckATermList(b_5), term_s_34);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm c_5 = NULL;
  t = pass_verbose_0_0(t);
  c_5 = t;
  t = (ATerm) ATinsert(CheckATermList(c_5), term_s_34);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm d_5 = NULL;
  t = pass_verbose_0_0(t);
  d_5 = t;
  t = (ATerm) ATinsert(CheckATermList(d_5), term_s_34);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm e_5 = NULL;
  t = term_w_36;
  t = xtc_find_0_0(t);
  e_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_5), term_x_36);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_5 = NULL;
  t = term_w_36;
  t = xtc_find_0_0(t);
  h_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_5), term_x_36);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm a_7 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = eval_config_0_0(t);
        q_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), q_7);
        t = q_7;
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
      }
    a_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_7, term_c_37);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = if_verbose1_1_0(w_1, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = save_as_1_0(e_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = save_as_1_0(o_2, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = save_as_1_0(p_3, t);
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(r_1, t);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = g_37;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(f_37);
          t = xtc_transform_file_2_0(x_1, y_1, t);
        }
      else
        {
          t = e_37;
          t = xtc_transform_term_2_0(a_2, b_2, t);
        }
      t = if_keep1_1_0(d_2, t);
      {
        ATerm g_2 (ATerm t)
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
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
              LocalPopChoice(k_37);
              t = xtc_transform_file_2_0(h_2, j_2, t);
            }
          else
            {
              t = j_37;
              t = xtc_transform_term_2_0(k_2, l_2, t);
            }
          return(t);
        }
        t = olevel_2_0(f_2, g_2, t);
        t = if_keep1_1_0(n_2, t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm p_37 = t;
            int q_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_37 = t;
                int u_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(u_37);
                  }
                else
                  {
                    t = r_37;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(q_37);
                t = xtc_transform_file_2_0(d_3, i_3, t);
              }
            else
              {
                t = p_37;
                t = xtc_transform_term_2_0(j_3, k_3, t);
              }
            return(t);
          }
          t = olevel_2_0(w_2, c_3, t);
          t = if_keep1_1_0(n_3, t);
          t = olevel_2_0(r_3, bound_unbound_vars_0_0, t);
          {
            ATerm v_37 = t;
            int w_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_37 = t;
                int y_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(y_37);
                  }
                else
                  {
                    t = x_37;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(w_37);
                t = xtc_transform_file_2_0(s_3, t_3, t);
              }
            else
              {
                t = v_37;
                t = xtc_transform_term_2_0(u_3, v_3, t);
              }
            t = s2c_0_0(t);
            {
              ATerm a_38 = t;
              int b_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_38 = t;
                  int e_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(e_38);
                    }
                  else
                    {
                      t = c_38;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(b_38);
                  t = xtc_transform_file_2_0(w_3, x_3, t);
                }
              else
                {
                  t = a_38;
                  t = xtc_transform_term_2_0(y_3, z_3, t);
                }
              {
                ATerm f_38 = t;
                int g_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_38 = t;
                    int j_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(j_38);
                      }
                    else
                      {
                        t = i_38;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(g_38);
                    t = xtc_transform_file_2_0(a_4, b_4, t);
                  }
                else
                  {
                    t = f_38;
                    t = xtc_transform_term_2_0(c_4, f_4, t);
                  }
                t = rename_to_1_0(g_4, t);
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
  ATerm k_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 = NULL,m_5 = NULL;
      j_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL;
            t = eval_config_0_0(t);
            b_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), b_8);
            t = b_8;
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
          }
        m_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, term_r_35);
        t = geq_0_0(t);
        t = j_5;
        t = c_108(t);
      }
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = k_38;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_5 = NULL,p_5 = NULL,q_5 = NULL;
      n_5 = t;
      t = f_116(t);
      p_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
      {
        ATerm s_38 = t;
        int v_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_8 = NULL;
            t = eval_config_0_0(t);
            v_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), v_8);
            t = v_8;
            ;
            LocalPopChoice(v_38);
          }
        else
          {
            t = s_38;
          }
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_5, p_5);
        t = geq_0_0(t);
        t = n_5;
        t = g_116(t);
      }
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_5 = NULL;
  t = pass_verbose_0_0(t);
  r_5 = t;
  t = (ATerm) ATinsert(CheckATermList(r_5), term_s_34);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm t_5 = NULL;
  t = pass_verbose_0_0(t);
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(t_5), term_s_34);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm u_5 = NULL;
  t = pass_verbose_0_0(t);
  u_5 = t;
  t = (ATerm) ATinsert(CheckATermList(u_5), term_s_34);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_w_38;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm v_5 = NULL;
  t = pass_verbose_0_0(t);
  v_5 = t;
  t = (ATerm) ATinsert(CheckATermList(v_5), term_s_34);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
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
          t = xtc_transform_file_2_0(h_4, i_4, t);
        }
      else
        {
          t = z_38;
          t = xtc_transform_term_2_0(m_4, r_4, t);
        }
      ;
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(e_39);
            t = xtc_transform_file_2_0(u_4, v_4, t);
          }
        else
          {
            t = d_39;
            t = xtc_transform_term_2_0(x_4, i_5, t);
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_5 = NULL,y_5 = NULL;
      w_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            t = eval_config_0_0(t);
            a_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_9);
            t = a_9;
            ;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
          }
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_5, term_l_39);
        t = geq_0_0(t);
        t = w_5;
        t = g_108(t);
      }
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = NULL,b_6 = NULL;
      z_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm o_39 = t;
        int q_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 = NULL;
            t = eval_config_0_0(t);
            n_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_9);
            t = n_9;
            ;
            LocalPopChoice(q_39);
          }
        else
          {
            t = o_39;
          }
        b_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_6, term_r_39);
        t = geq_0_0(t);
        t = z_5;
        t = f_108(t);
      }
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue))));
  t = d_6;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_6 = NULL;
  e_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(e_6), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(e_6), term_s_39));
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm f_6 = NULL,g_10 = NULL;
  f_6 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
  {
    ATerm t_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = eval_config_0_0(t);
        f_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), f_10);
        t = f_10;
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = t_39;
      }
    g_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_10), (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue))));
    t = f_6;
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm g_6 = NULL;
  t = pass_verbose_0_0(t);
  g_6 = t;
  t = (ATerm) ATinsert(CheckATermList(g_6), term_s_34);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm h_6 = NULL;
  t = pass_verbose_0_0(t);
  h_6 = t;
  t = (ATerm) ATinsert(CheckATermList(h_6), term_s_34);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm a_11 = NULL;
  t = pass_verbose_0_0(t);
  a_11 = t;
  t = (ATerm) ATinsert(CheckATermList(a_11), term_s_34);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_y_39;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm b_11 = NULL;
  t = pass_verbose_0_0(t);
  b_11 = t;
  t = (ATerm) ATinsert(CheckATermList(b_11), term_s_34);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm n_6 = NULL;
  t = pass_verbose_0_0(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_6), term_s_34);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_s_34);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_s_34);
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm t_6 = NULL;
  t = pass_verbose_0_0(t);
  t_6 = t;
  t = (ATerm) ATinsert(CheckATermList(t_6), term_s_34);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_d_40;
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_s_34);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm b_7 = NULL;
  t = pass_verbose_0_0(t);
  b_7 = t;
  t = (ATerm) ATinsert(CheckATermList(b_7), term_s_34);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_g_40;
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm c_7 = NULL;
  t = pass_verbose_0_0(t);
  c_7 = t;
  t = (ATerm) ATinsert(CheckATermList(c_7), term_s_34);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_g_40;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm d_7 = NULL;
  t = pass_verbose_0_0(t);
  d_7 = t;
  t = (ATerm) ATinsert(CheckATermList(d_7), term_s_34);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_s_34);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_s_34);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_s_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm h_7 = NULL;
  t = pass_verbose_0_0(t);
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), term_s_34);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_s_34);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm l_7 = NULL;
  t = pass_verbose_0_0(t);
  l_7 = t;
  t = (ATerm) ATinsert(CheckATermList(l_7), term_s_34);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_l_40;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm n_7 = NULL;
  t = pass_verbose_0_0(t);
  n_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), term_s_34);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_l_40;
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm p_7 = NULL;
  t = pass_verbose_0_0(t);
  p_7 = t;
  t = (ATerm) ATinsert(CheckATermList(p_7), term_s_34);
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_s_34);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm t_7 = NULL;
  t = pass_verbose_0_0(t);
  t_7 = t;
  t = (ATerm) ATinsert(CheckATermList(t_7), term_s_34);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_s_34);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_s_34);
  return(t);
}
ATerm o_11 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_s_34);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_s_34);
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_s_34);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm c_8 = NULL;
  t = pass_verbose_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(CheckATermList(c_8), term_s_34);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_s_34);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm e_8 = NULL;
  t = pass_verbose_0_0(t);
  e_8 = t;
  t = (ATerm) ATinsert(CheckATermList(e_8), term_s_34);
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm g_8 = NULL;
  t = pass_verbose_0_0(t);
  g_8 = t;
  t = (ATerm) ATinsert(CheckATermList(g_8), term_s_34);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_i_40;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm i_8 = NULL;
  t = pass_verbose_0_0(t);
  i_8 = t;
  t = (ATerm) ATinsert(CheckATermList(i_8), term_s_34);
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm h_14 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm j_8 = NULL;
  t = pass_verbose_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_8), term_s_34);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm k_8 = NULL;
  t = pass_verbose_0_0(t);
  k_8 = t;
  t = (ATerm) ATinsert(CheckATermList(k_8), term_s_34);
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_r_40;
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm l_8 = NULL;
  t = pass_verbose_0_0(t);
  l_8 = t;
  t = (ATerm) ATinsert(CheckATermList(l_8), term_s_34);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm m_8 = NULL;
  t = pass_verbose_0_0(t);
  m_8 = t;
  t = (ATerm) ATinsert(CheckATermList(m_8), term_s_34);
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_t_40;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = if_verbose1_1_0(s_5, t);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = save_as_1_0(j_15, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = save_as_1_0(s_6, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = save_as_1_0(o_7, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = save_as_1_0(c_9, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = save_as_1_0(p_10, t);
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = save_as_1_0(h_11, t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = save_as_1_0(z_13, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = save_as_1_0(s_14, t);
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_5, t);
  {
    ATerm o_5 (ATerm t)
    {
      t = if_verbose3_1_0(x_5, t);
      {
        ATerm c_6 (ATerm t)
        {
          ATerm u_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_40 = t;
              int x_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(x_40);
                }
              else
                {
                  t = w_40;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(v_40);
              t = xtc_transform_file_2_0(i_6, j_6, t);
            }
          else
            {
              t = u_40;
              t = xtc_transform_term_2_0(k_6, l_6, t);
            }
          return(t);
        }
        t = olevel_2_0(a_6, c_6, t);
        t = if_keep1_1_0(q_6, t);
        {
          ATerm v_6 (ATerm t)
          {
            ATerm y_40 = t;
            int z_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_6 = NULL;
                m_6 = t;
                {
                  ATerm e_41 = t;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)));
                      {
                        ATerm f_41 = t;
                        int g_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_11 = NULL;
                            t = eval_config_0_0(t);
                            w_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)), w_11);
                            t = w_11;
                            ;
                            LocalPopChoice(g_41);
                          }
                        else
                          {
                            t = f_41;
                          }
                      }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = e_41;
                    }
                  t = m_6;
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
                        t = xtc_transform_file_2_0(y_6, z_6, t);
                      }
                    else
                      {
                        t = h_41;
                        t = xtc_transform_term_2_0(i_7, k_7, t);
                      }
                  }
                }
                ;
                LocalPopChoice(z_40);
              }
            else
              {
                t = y_40;
              }
            return(t);
          }
          t = olevel_2_0(u_6, v_6, t);
          t = if_keep2_1_0(m_7, t);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm l_41 = t;
              int m_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_41 = t;
                  int r_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(r_41);
                    }
                  else
                    {
                      t = n_41;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(m_41);
                  t = xtc_transform_file_2_0(z_7, f_8, t);
                }
              else
                {
                  t = l_41;
                  t = xtc_transform_term_2_0(h_8, n_8, t);
                }
              {
                ATerm s_41 = t;
                int u_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_41 = t;
                    int x_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(x_41);
                      }
                    else
                      {
                        t = v_41;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(u_41);
                    t = xtc_transform_file_2_0(o_8, x_8, t);
                  }
                else
                  {
                    t = s_41;
                    t = xtc_transform_term_2_0(y_8, z_8, t);
                  }
              }
              return(t);
            }
            t = olevel_2_0(s_7, u_7, t);
            t = if_keep4_1_0(b_9, t);
            {
              ATerm e_9 (ATerm t)
              {
                ATerm y_41 = t;
                int a_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_42 = t;
                    int d_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(d_42);
                      }
                    else
                      {
                        t = b_42;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(a_42);
                    t = xtc_transform_file_2_0(f_9, g_9, t);
                  }
                else
                  {
                    t = y_41;
                    t = xtc_transform_term_2_0(h_9, i_9, t);
                  }
                return(t);
              }
              t = olevel_2_0(d_9, e_9, t);
              {
                ATerm e_42 = t;
                int f_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_42 = t;
                    int h_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(h_42);
                      }
                    else
                      {
                        t = g_42;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(f_42);
                    t = xtc_transform_file_2_0(j_9, k_9, t);
                  }
                else
                  {
                    t = e_42;
                    t = xtc_transform_term_2_0(l_9, m_9, t);
                  }
                {
                  ATerm p_9 (ATerm t)
                  {
                    ATerm k_42 = t;
                    int l_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_42 = t;
                        int o_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FILE_1_0(_id, t);
                            ;
                            LocalPopChoice(o_42);
                          }
                        else
                          {
                            t = n_42;
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                          }
                        LocalPopChoice(l_42);
                        t = xtc_transform_file_2_0(q_9, r_9, t);
                      }
                    else
                      {
                        t = k_42;
                        t = xtc_transform_term_2_0(w_9, x_9, t);
                      }
                    t = bound_unbound_vars_0_0(t);
                    {
                      ATerm q_42 = t;
                      int r_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_42 = t;
                          int t_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(t_42);
                            }
                          else
                            {
                              t = s_42;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(r_42);
                          t = xtc_transform_file_2_0(a_10, b_10, t);
                        }
                      else
                        {
                          t = q_42;
                          t = xtc_transform_term_2_0(d_10, e_10, t);
                        }
                    }
                    return(t);
                  }
                  t = olevel_2_0(o_9, p_9, t);
                  {
                    ATerm i_10 (ATerm t)
                    {
                      ATerm u_42 = t;
                      int y_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_42 = t;
                          int d_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(d_43);
                            }
                          else
                            {
                              t = z_42;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(y_42);
                          t = xtc_transform_file_2_0(j_10, k_10, t);
                        }
                      else
                        {
                          t = u_42;
                          t = xtc_transform_term_2_0(m_10, n_10, t);
                        }
                      return(t);
                    }
                    t = olevel_2_0(h_10, i_10, t);
                    t = if_keep4_1_0(o_10, t);
                    {
                      ATerm r_10 (ATerm t)
                      {
                        ATerm e_43 = t;
                        int f_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_43 = t;
                            int h_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = FILE_1_0(_id, t);
                                ;
                                LocalPopChoice(h_43);
                              }
                            else
                              {
                                t = g_43;
                                if(!(match_cons(t, sym_stdin_0)))
                                  _fail(t);
                              }
                            LocalPopChoice(f_43);
                            t = xtc_transform_file_2_0(s_10, t_10, t);
                          }
                        else
                          {
                            t = e_43;
                            t = xtc_transform_term_2_0(u_10, x_10, t);
                          }
                        return(t);
                      }
                      t = olevel_2_0(q_10, r_10, t);
                      {
                        ATerm z_10 (ATerm t)
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
                              t = xtc_transform_file_2_0(c_11, d_11, t);
                            }
                          else
                            {
                              t = i_43;
                              t = xtc_transform_term_2_0(e_11, f_11, t);
                            }
                          return(t);
                        }
                        t = olevel_2_0(y_10, z_10, t);
                        t = if_keep2_1_0(g_11, t);
                        {
                          ATerm j_11 (ATerm t)
                          {
                            ATerm m_43 = t;
                            int n_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_43 = t;
                                int p_43 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FILE_1_0(_id, t);
                                    ;
                                    LocalPopChoice(p_43);
                                  }
                                else
                                  {
                                    t = o_43;
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                  }
                                LocalPopChoice(n_43);
                                t = xtc_transform_file_2_0(k_11, l_11, t);
                              }
                            else
                              {
                                t = m_43;
                                t = xtc_transform_term_2_0(m_11, n_11, t);
                              }
                            return(t);
                          }
                          t = olevel_2_0(i_11, j_11, t);
                          {
                            ATerm p_11 (ATerm t)
                            {
                              ATerm q_43 = t;
                              int r_43 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_43 = t;
                                  int t_43 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = FILE_1_0(_id, t);
                                      ;
                                      LocalPopChoice(t_43);
                                    }
                                  else
                                    {
                                      t = s_43;
                                      if(!(match_cons(t, sym_stdin_0)))
                                        _fail(t);
                                    }
                                  LocalPopChoice(r_43);
                                  t = xtc_transform_file_2_0(q_11, r_11, t);
                                }
                              else
                                {
                                  t = q_43;
                                  t = xtc_transform_term_2_0(s_11, t_11, t);
                                }
                              return(t);
                            }
                            t = olevel_2_0(o_11, p_11, t);
                            t = if_keep5_1_0(x_11, t);
                            {
                              ATerm c_12 (ATerm t)
                              {
                                ATerm u_43 = t;
                                int y_43 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_43 = t;
                                    int a_44 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = FILE_1_0(_id, t);
                                        ;
                                        LocalPopChoice(a_44);
                                      }
                                    else
                                      {
                                        t = z_43;
                                        if(!(match_cons(t, sym_stdin_0)))
                                          _fail(t);
                                      }
                                    LocalPopChoice(y_43);
                                    t = xtc_transform_file_2_0(f_12, g_12, t);
                                  }
                                else
                                  {
                                    t = u_43;
                                    t = xtc_transform_term_2_0(h_12, l_12, t);
                                  }
                                return(t);
                              }
                              t = olevel_2_0(z_11, c_12, t);
                              {
                                ATerm s_12 (ATerm t)
                                {
                                  ATerm b_44 = t;
                                  int c_44 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_44 = t;
                                      int f_44 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = FILE_1_0(_id, t);
                                          ;
                                          LocalPopChoice(f_44);
                                        }
                                      else
                                        {
                                          t = e_44;
                                          if(!(match_cons(t, sym_stdin_0)))
                                            _fail(t);
                                        }
                                      LocalPopChoice(c_44);
                                      t = xtc_transform_file_2_0(t_12, u_12, t);
                                    }
                                  else
                                    {
                                      t = b_44;
                                      t = xtc_transform_term_2_0(v_12, w_12, t);
                                    }
                                  t = bound_unbound_vars_0_0(t);
                                  {
                                    ATerm g_44 = t;
                                    int i_44 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm j_44 = t;
                                        int k_44 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = FILE_1_0(_id, t);
                                            ;
                                            LocalPopChoice(k_44);
                                          }
                                        else
                                          {
                                            t = j_44;
                                            if(!(match_cons(t, sym_stdin_0)))
                                              _fail(t);
                                          }
                                        LocalPopChoice(i_44);
                                        t = xtc_transform_file_2_0(z_12, b_13, t);
                                      }
                                    else
                                      {
                                        t = g_44;
                                        t = xtc_transform_term_2_0(i_13, j_13, t);
                                      }
                                  }
                                  return(t);
                                }
                                t = olevel_2_0(r_12, s_12, t);
                                t = if_keep3_1_0(n_13, t);
                                {
                                  ATerm d_14 (ATerm t)
                                  {
                                    ATerm m_44 = t;
                                    int n_44 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm o_44 = t;
                                        int q_44 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = FILE_1_0(_id, t);
                                            ;
                                            LocalPopChoice(q_44);
                                          }
                                        else
                                          {
                                            t = o_44;
                                            if(!(match_cons(t, sym_stdin_0)))
                                              _fail(t);
                                          }
                                        LocalPopChoice(n_44);
                                        t = xtc_transform_file_2_0(h_14, i_14, t);
                                      }
                                    else
                                      {
                                        t = m_44;
                                        t = xtc_transform_term_2_0(o_14, q_14, t);
                                      }
                                    return(t);
                                  }
                                  t = olevel_2_0(b_14, d_14, t);
                                  t = if_keep1_1_0(r_14, t);
                                  {
                                    ATerm u_14 (ATerm t)
                                    {
                                      ATerm r_44 = t;
                                      int s_44 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_44 = t;
                                          int v_44 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = FILE_1_0(_id, t);
                                              ;
                                              LocalPopChoice(v_44);
                                            }
                                          else
                                            {
                                              t = u_44;
                                              if(!(match_cons(t, sym_stdin_0)))
                                                _fail(t);
                                            }
                                          LocalPopChoice(s_44);
                                          t = xtc_transform_file_2_0(w_14, x_14, t);
                                        }
                                      else
                                        {
                                          t = r_44;
                                          t = xtc_transform_term_2_0(y_14, a_15, t);
                                        }
                                      return(t);
                                    }
                                    t = olevel_2_0(t_14, u_14, t);
                                    t = if_keep1_1_0(b_15, t);
                                  }
                                }
                              }
                            }
                          }
                        }
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
    t = profile_p__2_0(l_5, o_5, t);
  }
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm p_8 = NULL;
  t = pass_verbose_0_0(t);
  p_8 = t;
  t = (ATerm) ATinsert(CheckATermList(p_8), term_s_34);
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_w_44;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm q_8 = NULL;
  t = pass_verbose_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(CheckATermList(q_8), term_s_34);
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = save_as_1_0(t_15, t);
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_45 = t;
      int d_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(d_45);
        }
      else
        {
          t = c_45;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(a_45);
      t = xtc_transform_file_2_0(k_15, l_15, t);
    }
  else
    {
      t = z_44;
      t = xtc_transform_term_2_0(m_15, n_15, t);
    }
  t = if_keep2_1_0(q_15, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  t = term_e_45;
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
              ATerm x_12 = NULL;
              t = eval_config_0_0(t);
              x_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_12);
              t = x_12;
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
        t = term_r_35;
      }
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_8, term_r_35);
    {
      ATerm k_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(r_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(l_45);
        }
      else
        {
          t = k_45;
          t = SSL_subtr(r_8, (ATerm) ATmakeInt(1));
        }
      t_8 = t;
      t = SSL_int_to_string(t_8);
      s_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, s_8), term_e_45);
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
ATerm u_15 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  t = SSL_explode_string(w_8);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  t = map_1_0(u_15, t);
  t = concat_0_0(t);
  u_8 = t;
  t = SSL_implode_string(u_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL;
  s_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_9 = ATgetArgument(t, 0);
      {
        ATerm a_14 = NULL;
        t = SSL_int_to_string(t_9);
        a_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_45), a_14), term_m_45);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm c_15 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_9 = ATgetArgument(t, 0);
          u_9 = ATgetArgument(t, 1);
          v_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_9);
      c_15 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_9), term_p_45), c_15), term_o_45), t_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  ATerm v_15 (ATerm t)
  {
    t = u_93(t);
    if(((y_9 != NULL) && (y_9 != t)))
      _fail(t);
    else
      y_9 = t;
    return(t);
  }
  t = fetch_1_0(v_15, t);
  t = not_null(y_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  z_9 = t;
  {
    ATerm q_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_50), term_a_50), term_w_49), term_s_49), term_p_49), term_l_49), term_h_49), term_d_49), term_z_48), term_v_48), term_r_48), term_n_48), term_j_48), term_f_48), term_b_48), term_x_47), term_t_47), term_q_47), term_m_47), term_i_47), term_e_47), term_z_46), term_t_46), term_o_46), term_i_46), term_c_46), term_y_45), term_v_45);
        {
          ATerm z_15 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm f_50 = ATgetArgument(t, 0);
                if((z_9 != ATgetArgument(t, 1)))
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
          t = fetch_elem_1_0(z_15, t);
        }
        ;
        LocalPopChoice(r_45);
      }
    else
      {
        t = q_45;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL,i_16 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_50 = ATgetArgument(t, 0);
            l_10 = ATgetArgument(t, 1);
            {
              ATerm k_50 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = l_10;
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
          i_16 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_16), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATempty, i_16), term_m_50));
        }
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
      }
    t = c_10;
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
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  t = fork_0_0(t);
  w_10 = t;
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_10;
        t = u_108(t);
        ;
        LocalPopChoice(o_50);
      }
    else
      {
        t = n_50;
        t = SSL_waitpid(w_10);
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
        t = v_10;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_19 = NULL,v_19 = NULL,n_21 = NULL,p_21 = NULL;
      t = u_11;
      t = xtc_new_file_0_0(t);
      j_19 = t;
      t = n_0(t);
      v_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATinsert(ATinsert(ATempty, j_19), term_x_32));
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
            t = v_19;
            {
              ATerm a_16 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, j_19), term_x_32);
                return(t);
              }
              t = at_end_1_0(a_16, t);
            }
            ;
            LocalPopChoice(t_50);
          }
        else
          {
            t = s_50;
            {
              ATerm n_20 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATinsert(ATinsert(ATempty, j_19), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm w_50 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_50) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  n_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_20;
              t = concat_0_0(t);
            }
          }
        n_21 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        p_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_21, n_21);
        {
          ATerm c_16 (ATerm t)
          {
            t = SSL_execvp(p_21, n_21);
            return(t);
          }
          t = fork_and_wait_1_0(c_16, t);
          t = SSL_close_file(j_19);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_19);
        }
      }
    }
  else
    {
      ATerm t_22 = NULL,u_22 = NULL,m_24 = NULL,r_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_11;
      t = xtc_new_file_0_0(t);
      t_22 = t;
      t = n_0(t);
      u_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_22), term_x_32), v_11), term_x_50));
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
            t = u_22;
            {
              ATerm d_16 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_22), term_x_32), v_11), term_x_50);
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
              ATerm l_24 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_22), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), v_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm c_51 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_51) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  l_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_24;
              t = concat_0_0(t);
            }
          }
        m_24 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_24, m_24);
        {
          ATerm e_16 (ATerm t)
          {
            t = SSL_execvp(r_24, m_24);
            return(t);
          }
          t = fork_and_wait_1_0(e_16, t);
          t = SSL_close_file(t_22);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_12);
  a_12 = t;
  t = b_12;
  t = q_77(t);
  d_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, d_12), a_12);
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_12), term_e_51);
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_12), term_e_51);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  t = pass_verbose_0_0(t);
  i_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
  {
    ATerm f_51 = t;
    int g_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL;
        t = eval_config_0_0(t);
        n_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), n_25);
        t = n_25;
        ;
        LocalPopChoice(g_51);
      }
    else
      {
        t = f_51;
      }
    t = map_1_0(h_16, t);
    j_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(j_12), (ATerm) ATinsert(ATempty, term_s_34)), i_12);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  t = pass_verbose_0_0(t);
  m_12 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        t = eval_config_0_0(t);
        i_26 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), i_26);
        t = i_26;
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
      }
    t = map_1_0(l_16, t);
    n_12 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(n_12), (ATerm) ATinsert(ATempty, term_s_34)), m_12);
    t = concat_0_0(t);
  }
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
      t = xtc_transform_term_2_0(j_16, k_16, t);
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm p_12 = NULL;
  t = pass_verbose_0_0(t);
  p_12 = t;
  t = (ATerm) ATinsert(CheckATermList(p_12), term_s_34);
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm q_12 = NULL;
  t = pass_verbose_0_0(t);
  q_12 = t;
  t = (ATerm) ATinsert(CheckATermList(q_12), term_s_34);
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_o_51;
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = save_as_1_0(r_16, t);
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
      t = xtc_transform_file_2_0(m_16, n_16, t);
    }
  else
    {
      t = p_51;
      t = xtc_transform_term_2_0(o_16, p_16, t);
    }
  t = if_keep2_1_0(q_16, t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_t_51;
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm j_28 = NULL;
  t = pass_verbose_0_0(t);
  j_28 = t;
  t = (ATerm) ATinsert(CheckATermList(j_28), term_s_34);
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_t_51;
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm k_28 = NULL;
  t = pass_verbose_0_0(t);
  k_28 = t;
  t = (ATerm) ATinsert(CheckATermList(k_28), term_s_34);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm x_28 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_29 = NULL;
        t = eval_config_0_0(t);
        u_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), u_29);
        t = u_29;
        ;
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
      }
    x_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_28, term_w_51);
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
      ATerm y_12 = NULL,c_28 = NULL;
      y_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)));
      {
        ATerm z_51 = t;
        int a_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_28 = NULL;
            t = eval_config_0_0(t);
            p_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), p_28);
            t = p_28;
            ;
            LocalPopChoice(a_52);
          }
        else
          {
            t = z_51;
          }
        t = y_12;
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
                  t = xtc_transform_file_2_0(u_16, v_16, t);
                }
              else
                {
                  t = d_52;
                  t = xtc_transform_term_2_0(w_16, x_16, t);
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
          t = copy_to_1_0(y_16, t);
          c_28 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue)))));
          t = c_28;
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
ATerm if_keep2_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 = NULL,c_13 = NULL;
      a_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm k_52 = t;
        int l_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL;
            t = eval_config_0_0(t);
            q_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_30);
            t = q_30;
            ;
            LocalPopChoice(l_52);
          }
        else
          {
            t = k_52;
          }
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_13, term_e_32);
        t = geq_0_0(t);
        t = a_13;
        t = d_108(t);
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
ATerm a_17 (ATerm t)
{
  t = term_m_52;
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm d_13 = NULL;
  t = pass_verbose_0_0(t);
  d_13 = t;
  t = (ATerm) ATinsert(CheckATermList(d_13), term_s_34);
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_m_52;
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm e_13 = NULL;
  t = pass_verbose_0_0(t);
  e_13 = t;
  t = (ATerm) ATinsert(CheckATermList(e_13), term_s_34);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_n_52;
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = save_as_1_0(w_17, t);
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
      t = xtc_transform_file_2_0(a_17, g_17, t);
    }
  else
    {
      t = o_52;
      t = xtc_transform_term_2_0(i_17, k_17, t);
    }
  t = if_keep2_1_0(u_17, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm k_13 = NULL;
  t = pass_verbose_0_0(t);
  k_13 = t;
  t = (ATerm) ATinsert(CheckATermList(k_13), term_t_52);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm l_13 = NULL;
  t = pass_verbose_0_0(t);
  l_13 = t;
  t = (ATerm) ATinsert(CheckATermList(l_13), term_t_52);
  return(t);
}
ATerm save_as_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  {
    ATerm g_18 (ATerm t)
    {
      ATerm w_30 = NULL,x_30 = NULL;
      t = m_85(t);
      w_30 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
      {
        ATerm u_52 = t;
        int v_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_31 = NULL;
            t = eval_config_0_0(t);
            e_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), e_31);
            t = e_31;
            ;
            LocalPopChoice(v_52);
          }
        else
          {
            t = u_52;
          }
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_30, w_30);
        t = conc_strings_0_0(t);
        if(((g_13 != NULL) && (g_13 != t)))
          _fail(t);
        else
          g_13 = t;
      }
      return(t);
    }
    t = copy_to_1_0(g_18, t);
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
          t = xtc_transform_file_2_0(i_18, j_18, t);
        }
      else
        {
          t = w_52;
          t = xtc_transform_term_2_0(k_18, l_18, t);
        }
      {
        ATerm m_18 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), term_a_53);
          t = conc_strings_0_0(t);
          if(((h_13 != NULL) && (h_13 != t)))
            _fail(t);
          else
            h_13 = t;
          return(t);
        }
        t = copy_to_1_0(m_18, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_13)), (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue))), not_null(g_13)), (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue)))));
        t = f_13;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL,o_13 = NULL;
      m_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm d_53 = t;
        int e_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_31 = NULL;
            t = eval_config_0_0(t);
            i_31 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), i_31);
            t = i_31;
            ;
            LocalPopChoice(e_53);
          }
        else
          {
            t = d_53;
          }
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, term_s_36);
        t = geq_0_0(t);
        t = m_13;
        t = e_108(t);
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
ATerm AddMain_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      p_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_f_53;
  t = l_85(t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(p_13), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_53, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_13), (ATerm) ATempty))))));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, term_h_53);
  t = open_stream_0_0(t);
  t_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_13, s_13);
  t = x_105(t);
  t = fclose_0_0(t);
  t = s_13;
  return(t);
}
ATerm assert_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_104(t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_13, u_13, v_13);
  t = table_push_0_0(t);
  {
    ATerm i_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_13, (ATerm) ATmakeAppl(sym_Scopes_0));
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
        x_13 = ATgetFirst((ATermList) t);
        y_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_13), (ATerm) ATinsert(CheckATermList(x_13), u_13)));
    t = (ATerm) ATmakeAppl(sym__2, u_13, v_13);
  }
  return(t);
}
ATerm m_14 (ATerm c_14, ATerm t)
{
  t = c_14;
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
    t = (ATerm) ATmakeAppl(sym__2, c_14, term_h_53);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm n_14 (ATerm e_14, ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_open_file(e_14, f_14);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
      {
        ATerm n_53 = t;
        int o_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_14(j_14, t);
            ;
            LocalPopChoice(o_53);
          }
        else
          {
            t = n_53;
            t = n_14(k_14, l_14, j_14, t);
          }
      }
    }
  else
    {
      t = m_14(j_14, t);
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
  ATerm p_14 = NULL;
  t = term_f_53;
  t = new_0_0(t);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_14, term_p_53);
  t = conc_strings_0_0(t);
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = SSL_access(v_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
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
ATerm n_18 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  t = new_file_0_0(t);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_15, term_h_53);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, term_f_53);
  t = assert_1_0(n_18, t);
  t = d_15;
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_53 = ATgetArgument(t, 0);
      if(match_cons(t_53, sym_Stream_1))
        {
          g_15 = ATgetArgument(t_53, 0);
        }
      else
        _fail(t);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(g_15, h_15);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  t = xtc_new_file_0_0(t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, e_15);
  t = WriteToFile_1_0(p_18, t);
  t = SSL_close_file(f_15);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_15);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = o_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          p_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(p_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
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
ATerm q_18 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_32), (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue))));
  t = s_32;
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_u_53;
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = save_as_1_0(x_18, t);
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm v_53 = t;
  int w_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_15 = NULL;
      s_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)));
      {
        ATerm x_53 = t;
        int y_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_32 = NULL;
            t = eval_config_0_0(t);
            r_32 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), r_32);
            t = r_32;
            ;
            LocalPopChoice(y_53);
          }
        else
          {
            t = x_53;
          }
        r_15 = t;
        t = if_verbose2_1_0(q_18, t);
        t = s_15;
        {
          ATerm r_18 (ATerm t)
          {
            ATerm s_18 (ATerm t)
            {
              t = r_15;
              return(t);
            }
            t = AddMain_1_0(s_18, t);
            return(t);
          }
          t = xtc_io_transform_1_0(r_18, t);
        }
      }
      ;
      LocalPopChoice(w_53);
    }
  else
    {
      t = v_53;
    }
  t = if_keep3_1_0(t_18, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL;
      b_16 = t;
      t = SSL_remove(b_16);
      ;
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
    }
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  ATerm y_18 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_15 != NULL) && (w_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_15 = ATgetFirst((ATermList) t);
        {
          ATerm b_54 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(w_15);
    t = map_1_0(z_18, t);
    t = y_15;
    t = end_scope_1_0(a_19, t);
    return(t);
  }
  t = repeat_1_0(y_18, t);
  x_15 = t;
  t = SSL_exit(x_15);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm c_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm e_54 = t;
        int f_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_33 = NULL;
            t = eval_config_0_0(t);
            j_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_33);
            t = j_33;
            ;
            LocalPopChoice(f_54);
          }
        else
          {
            t = e_54;
          }
      }
      ;
      LocalPopChoice(d_54);
    }
  else
    {
      t = c_54;
      t = term_z_33;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(b_19, t);
  t = term_s_31;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_54 = t;
    int h_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL;
        t = s_16;
        t = p_0(t);
        t_34 = t;
        {
          ATerm i_54 = t;
          int j_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(j_54);
            }
          else
            {
              t = i_54;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(t_16, t_34);
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_16);
        }
        ;
        LocalPopChoice(h_54);
      }
    else
      {
        t = g_54;
        {
          ATerm k_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_36 = NULL;
              t = s_16;
              t = p_0(t);
              c_36 = t;
              {
                ATerm m_54 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_54 = t;
                    int o_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_54);
                      }
                    else
                      {
                        t = n_54;
                        {
                          ATerm p_54 = t;
                          int q_54 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(q_54);
                            }
                          else
                            {
                              t = p_54;
                              {
                                ATerm e_36 = NULL;
                                e_36 = t;
                                if((t_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = e_36;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_54;
                  }
                t = SSL_copy(t_16, c_36);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_16);
              }
              ;
              LocalPopChoice(l_54);
            }
          else
            {
              t = k_54;
              t = s_16;
              t = p_0(t);
              if((t_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_16);
            }
        }
      }
  }
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm y_36 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL;
        t = eval_config_0_0(t);
        d_37 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), d_37);
        t = d_37;
        ;
        LocalPopChoice(s_54);
      }
    else
      {
        t = r_54;
      }
    y_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_36, term_t_54);
    t = conc_strings_0_0(t);
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm u_54 = t;
  int v_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_16 = NULL,b_17 = NULL;
      z_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)));
      {
        ATerm w_54 = t;
        int x_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_36 = NULL;
            t = eval_config_0_0(t);
            v_36 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), v_36);
            t = v_36;
            ;
            LocalPopChoice(x_54);
          }
        else
          {
            t = w_54;
          }
        t = z_16;
        t = copy_to_1_0(e_19, t);
        b_17 = t;
        t = (ATerm) ATinsert(ATempty, term_y_54);
        t = echo_0_0(t);
        t = b_17;
        t = xtc_io_exit_0_0(t);
      }
      ;
      LocalPopChoice(v_54);
    }
  else
    {
      t = u_54;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  t = term_z_54;
  {
    ATerm a_55 = t;
    int b_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm c_55 = t;
          int d_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_37 = NULL;
              t = eval_config_0_0(t);
              h_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_37);
              t = h_37;
              ;
              LocalPopChoice(d_55);
            }
          else
            {
              t = c_55;
            }
        }
        ;
        LocalPopChoice(b_55);
      }
    else
      {
        t = a_55;
        t = term_r_35;
      }
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_17, term_r_35);
    {
      ATerm e_55 = t;
      int f_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_17, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(f_55);
        }
      else
        {
          t = e_55;
          t = SSL_subtr(c_17, (ATerm) ATmakeInt(1));
        }
      e_17 = t;
      t = SSL_int_to_string(e_17);
      d_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_17), term_z_54);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm g_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL,h_17 = NULL;
      f_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_55 = t;
        int j_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_37 = NULL;
            t = eval_config_0_0(t);
            l_37 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_37);
            t = l_37;
            ;
            LocalPopChoice(j_55);
          }
        else
          {
            t = i_55;
          }
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_17, term_s_36);
        t = geq_0_0(t);
        t = f_17;
        t = c_107(t);
      }
      ;
      LocalPopChoice(h_55);
    }
  else
    {
      t = g_55;
    }
  return(t);
}
ATerm f_19 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm g_19 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm j_17 = NULL,l_17 = NULL;
  j_17 = t;
  t = SSL_explode_string(j_17);
  {
    ATerm k_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 (ATerm t)
        {
          ATerm m_55 = t;
          int n_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, m_17, t);
              ;
              LocalPopChoice(n_55);
            }
          else
            {
              t = m_55;
              {
                ATerm o_55 = t;
                int p_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(f_19, _id, t);
                    ;
                    LocalPopChoice(p_55);
                  }
                else
                  {
                    t = o_55;
                    t = Cons_2_0(g_19, f_102, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = m_17(t);
        ;
        LocalPopChoice(l_55);
      }
    else
      {
        t = k_55;
      }
    l_17 = t;
    t = SSL_implode_string(l_17);
  }
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_37), (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue))));
  t = m_37;
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_37), (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue))));
  t = t_37;
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_17;
  t = basename_1_0(_id, t);
  o_17 = t;
  t = if_verbose3_1_0(h_19, t);
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), o_17);
  t = (ATerm) ATmakeAppl(sym__3, term_q_55, term_r_55, o_17);
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm u_55 = t;
          int v_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_37 = NULL;
              t = eval_config_0_0(t);
              s_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_37);
              t = s_37;
              ;
              LocalPopChoice(v_55);
            }
          else
            {
              t = u_55;
            }
          t = basename_1_0(_id, t);
        }
        ;
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
        t = o_17;
      }
    p_17 = t;
    t = if_verbose3_1_0(i_19, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), p_17);
    t = (ATerm) ATmakeAppl(sym_FILE_1, o_17);
  }
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = term_w_55;
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,v_17 = NULL;
  q_17 = t;
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm z_55 = t;
          int a_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_37 = NULL;
              t = eval_config_0_0(t);
              z_37 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), z_37);
              t = z_37;
              ;
              LocalPopChoice(a_56);
            }
          else
            {
              t = z_55;
            }
        }
        ;
        LocalPopChoice(y_55);
      }
    else
      {
        t = x_55;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
        {
          ATerm b_56 = t;
          int c_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_38 = NULL;
              t = eval_config_0_0(t);
              d_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), d_38);
              t = d_38;
              ;
              LocalPopChoice(c_56);
            }
          else
            {
              t = b_56;
            }
        }
      }
    r_17 = t;
    t = q_17;
    t = pass_verbose_0_0(t);
    s_17 = t;
    t = q_17;
    t = pass_keep_0_0(t);
    t_17 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
    {
      ATerm d_56 = t;
      int e_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_38 = NULL;
          t = eval_config_0_0(t);
          h_38 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), h_38);
          t = h_38;
          ;
          LocalPopChoice(e_56);
        }
      else
        {
          t = d_56;
        }
      v_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_17), s_17), v_17), (ATerm) ATinsert(ATinsert(ATempty, r_17), term_f_56));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = term_w_55;
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm i_56 = t;
          int j_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_38 = NULL;
              t = eval_config_0_0(t);
              l_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_38);
              t = l_38;
              ;
              LocalPopChoice(j_56);
            }
          else
            {
              t = i_56;
            }
        }
        ;
        LocalPopChoice(h_56);
      }
    else
      {
        t = g_56;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
        {
          ATerm k_56 = t;
          int l_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_38 = NULL;
              t = eval_config_0_0(t);
              p_38 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), p_38);
              t = p_38;
              ;
              LocalPopChoice(l_56);
            }
          else
            {
              t = k_56;
            }
        }
      }
    y_17 = t;
    t = x_17;
    t = pass_verbose_0_0(t);
    z_17 = t;
    t = x_17;
    t = pass_keep_0_0(t);
    a_18 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
    {
      ATerm m_56 = t;
      int n_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_38 = NULL;
          t = eval_config_0_0(t);
          t_38 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), t_38);
          t = t_38;
          ;
          LocalPopChoice(n_56);
        }
      else
        {
          t = m_56;
        }
      b_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_18), z_17), b_18), (ATerm) ATinsert(ATinsert(ATempty, y_17), term_f_56));
      t = concat_0_0(t);
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(p_56);
        t = xtc_transform_file_2_0(n_19, o_19, t);
      }
    else
      {
        t = o_56;
        t = xtc_transform_term_2_0(p_19, q_19, t);
      }
  }
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_38), (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue))));
  t = u_38;
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(c_18), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(c_18), term_s_56));
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_t_56;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm d_18 = NULL;
  t = pass_verbose_0_0(t);
  d_18 = t;
  t = (ATerm) ATinsert(ATempty, d_18);
  t = concat_0_0(t);
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_t_56;
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm e_18 = NULL;
  t = pass_verbose_0_0(t);
  e_18 = t;
  t = (ATerm) ATinsert(ATempty, e_18);
  t = concat_0_0(t);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_u_56;
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm f_18 = NULL;
  t = pass_verbose_0_0(t);
  f_18 = t;
  t = (ATerm) ATinsert(CheckATermList(f_18), term_s_34);
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = term_u_56;
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm h_18 = NULL;
  t = pass_verbose_0_0(t);
  h_18 = t;
  t = (ATerm) ATinsert(CheckATermList(h_18), term_s_34);
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = if_verbose1_1_0(a_20, t);
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(r_19, t);
  {
    ATerm z_19 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      {
        ATerm v_56 = t;
        int w_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_56 = t;
            int y_56 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(y_56);
              }
            else
              {
                t = x_56;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(w_56);
            t = xtc_transform_file_2_0(b_20, d_20, t);
          }
        else
          {
            t = v_56;
            t = xtc_transform_term_2_0(g_20, h_20, t);
          }
        t = frontend_0_0(t);
        t = output_frontend_0_0(t);
        t = extract_0_0(t);
        t = warnings_0_0(t);
        {
          ATerm z_56 = t;
          int a_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_57 = t;
              int c_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(c_57);
                }
              else
                {
                  t = b_57;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(a_57);
              t = xtc_transform_file_2_0(i_20, j_20, t);
            }
          else
            {
              t = z_56;
              t = xtc_transform_term_2_0(k_20, l_20, t);
            }
          t = rename_defs_0_0(t);
        }
      }
      return(t);
    }
    t = profile_p__2_0(x_19, z_19, t);
  }
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm d_57 = t;
  int e_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_57);
    }
  else
    {
      t = d_57;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = SSL_is_string(o_18);
      ;
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
      {
        ATerm h_57 = t;
        int i_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_20, t);
            ;
            LocalPopChoice(i_57);
          }
        else
          {
            t = h_57;
            {
              ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
              u_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_18 = ATgetArgument(t, 0);
                  t = v_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_18 = ATgetArgument(t, 0);
                      t = v_18;
                      {
                        ATerm j_57 = t;
                        int k_57 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_18);
                            {
                              ATerm l_57 = t;
                              int m_57 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_39 = NULL;
                                  t = eval_config_0_0(t);
                                  p_39 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_18, p_39);
                                  t = p_39;
                                  ;
                                  LocalPopChoice(m_57);
                                }
                              else
                                {
                                  t = l_57;
                                }
                            }
                            ;
                            LocalPopChoice(k_57);
                          }
                        else
                          {
                            t = j_57;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = v_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_19 = NULL,d_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_18 = ATgetArgument(t, 0);
                          w_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_18;
                      t = eval_config_0_0(t);
                      c_19 = t;
                      t = w_18;
                      t = eval_config_0_0(t);
                      d_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_19, d_19);
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
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_39 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_57 = ATgetArgument(t, 0);
            ATerm q_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_19, l_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_57 = ATgetFirst((ATermList) t);
            u_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_39;
        ;
        LocalPopChoice(o_57);
      }
    else
      {
        t = n_57;
        t = (ATerm) ATempty;
      }
    m_19 = t;
    t = SSL_table_put(k_19, l_19, m_19);
    t = (ATerm) ATmakeAppl(sym__2, k_19, l_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL;
  s_19 = t;
  t = b_104(t);
  t_19 = t;
  {
    ATerm s_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_57);
      }
    else
      {
        t = s_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_19 = ATgetFirst((ATermList) t);
        u_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_19, (ATerm)ATmakeAppl(sym_Scopes_0), u_19);
    t = w_19;
    {
      ATerm q_20 (ATerm t)
      {
        ATerm y_19 = NULL;
        y_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_19, y_19);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_20, t);
      t = s_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_86(t);
      t = m_86(t);
      ;
      LocalPopChoice(v_57);
    }
  else
    {
      t = u_57;
      t = m_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  t = a_104(t);
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_20, term_w_57);
  {
    ATerm x_57 = t;
    int y_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_57 = ATgetArgument(t, 0);
            ATerm a_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_20, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_57);
      }
    else
      {
        t = x_57;
        t = (ATerm) ATempty;
      }
    f_20 = t;
    t = SSL_table_put(e_20, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_20), (ATerm) ATempty));
    t = c_20;
  }
  return(t);
}
ATerm s_20 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm b_58 = t;
  int c_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      r_20 = t;
      t = SSL_remove(r_20);
      ;
      LocalPopChoice(c_58);
    }
  else
    {
      t = b_58;
    }
  return(t);
}
ATerm t_21 (ATerm t)
{
  t = term_s_53;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm m_20 = NULL;
  t = begin_scope_1_0(s_20, t);
  {
    ATerm u_20 (ATerm t)
    {
      ATerm o_20 = NULL;
      o_20 = t;
      {
        ATerm d_58 = t;
        int e_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(e_58);
          }
        else
          {
            t = d_58;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_20 != NULL) && (m_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_20 = ATgetFirst((ATermList) t);
            {
              ATerm f_58 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(m_20);
        t = map_1_0(r_21, t);
        t = o_20;
        t = end_scope_1_0(t_21, t);
      }
      return(t);
    }
    t = restore_always_2_0(b_115, u_20, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_20 = NULL,v_20 = NULL;
      t_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_58 = t;
        int j_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_40 = NULL;
            t = eval_config_0_0(t);
            b_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_40);
            t = b_40;
            ;
            LocalPopChoice(j_58);
          }
        else
          {
            t = i_58;
          }
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_r_35);
        t = geq_0_0(t);
        t = t_20;
        t = a_107(t);
      }
      ;
      LocalPopChoice(h_58);
    }
  else
    {
      t = g_58;
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_58 = ATgetArgument(t, 0);
      if(match_cons(k_58, sym__4))
        {
          w_20 = ATgetArgument(k_58, 0);
          x_20 = ATgetArgument(k_58, 1);
          y_20 = ATgetArgument(k_58, 2);
          z_20 = ATgetArgument(k_58, 3);
        }
      else
        _fail(t);
      {
        ATerm l_58 = ATgetArgument(t, 1);
        if(match_cons(l_58, sym__4))
          {
            a_21 = ATgetArgument(l_58, 0);
            b_21 = ATgetArgument(l_58, 1);
            c_21 = ATgetArgument(l_58, 2);
            d_21 = ATgetArgument(l_58, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, a_21);
  {
    ATerm m_58 = t;
    int n_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(w_20, a_21);
        ;
        LocalPopChoice(n_58);
      }
    else
      {
        t = m_58;
        t = SSL_subtr(w_20, a_21);
      }
    e_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_20, b_21);
    {
      ATerm o_58 = t;
      int p_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(x_20, b_21);
          ;
          LocalPopChoice(p_58);
        }
      else
        {
          t = o_58;
          t = SSL_subtr(x_20, b_21);
        }
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_20, c_21);
      {
        ATerm q_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(y_20, c_21);
            ;
            LocalPopChoice(r_58);
          }
        else
          {
            t = q_58;
            t = SSL_subtr(y_20, c_21);
          }
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_20, d_21);
        {
          ATerm s_58 = t;
          int t_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(z_20, d_21);
              ;
              LocalPopChoice(t_58);
            }
          else
            {
              t = s_58;
              t = SSL_subtr(z_20, d_21);
            }
          h_21 = t;
          t = (ATerm) ATmakeAppl(sym__4, e_21, f_21, g_21, h_21);
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
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,o_21 = NULL,q_21 = NULL,s_21 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  i_21 = t;
  t = times_0_0(t);
  j_21 = t;
  t = i_21;
  t = v_110(t);
  k_21 = t;
  t = times_0_0(t);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, j_21);
  t = diff_times_0_0(t);
  m_21 = t;
  if(match_cons(t, sym__4))
    {
      o_21 = ATgetArgument(t, 0);
      {
        ATerm u_58 = ATgetArgument(t, 1);
      }
      q_21 = ATgetArgument(t, 2);
      {
        ATerm v_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_21, q_21);
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(o_21, q_21);
        ;
        LocalPopChoice(x_58);
      }
    else
      {
        t = w_58;
        t = SSL_addr(o_21, q_21);
      }
    u_21 = t;
    t = SSL_TicksToSeconds(u_21);
    s_21 = t;
    t = m_21;
    if(match_cons(t, sym__4))
      {
        ATerm y_58 = ATgetArgument(t, 0);
        w_21 = ATgetArgument(t, 1);
        {
          ATerm z_58 = ATgetArgument(t, 2);
        }
        x_21 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
    {
      ATerm a_59 = t;
      int b_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(w_21, x_21);
          ;
          LocalPopChoice(b_59);
        }
      else
        {
          t = a_59;
          t = SSL_addr(w_21, x_21);
        }
      z_21 = t;
      t = SSL_TicksToSeconds(z_21);
      y_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_21), term_d_59), s_21), term_c_59);
      t = u_110(t);
      t = k_21;
    }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)));
  {
    ATerm e_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL;
        t = eval_config_0_0(t);
        f_40 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), f_40);
        t = f_40;
        ;
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
      }
    d_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), d_22), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
    t = c_22;
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm g_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_22 = NULL,j_22 = NULL;
      h_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_59 = t;
        int j_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_40 = NULL;
            t = eval_config_0_0(t);
            j_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_40);
            t = j_40;
            ;
            LocalPopChoice(j_59);
          }
        else
          {
            t = i_59;
          }
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_22, term_l_39);
        t = geq_0_0(t);
        t = h_22;
        t = e_107(t);
      }
      ;
      LocalPopChoice(h_59);
    }
  else
    {
      t = g_59;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_22 = NULL,s_22 = NULL;
      q_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_59 = t;
        int n_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_40 = NULL;
            t = eval_config_0_0(t);
            n_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_40);
            t = n_40;
            ;
            LocalPopChoice(n_59);
          }
        else
          {
            t = m_59;
          }
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_22, term_r_39);
        t = geq_0_0(t);
        t = q_22;
        t = d_107(t);
      }
      ;
      LocalPopChoice(l_59);
    }
  else
    {
      t = k_59;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_23;
        if((c_23 != t))
          {
            _fail(t);
          }
        t = b_23;
        ;
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        t = b_23;
        {
          ATerm q_59 = t;
          int r_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_23, d_23);
              ;
              LocalPopChoice(r_59);
            }
          else
            {
              t = q_59;
              t = SSL_gtr(c_23, d_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_23, d_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_23 = NULL,i_23 = NULL;
      g_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_59 = t;
        int v_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_41 = NULL;
            t = eval_config_0_0(t);
            a_41 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_41);
            t = a_41;
            ;
            LocalPopChoice(v_59);
          }
        else
          {
            t = u_59;
          }
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_g_46);
        t = geq_0_0(t);
        t = g_23;
        t = f_107(t);
      }
      ;
      LocalPopChoice(t_59);
    }
  else
    {
      t = s_59;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_23;
  {
    ATerm o_23 (ATerm t)
    {
      ATerm w_59 = t;
      int x_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_23;
          ;
          LocalPopChoice(x_59);
        }
      else
        {
          t = w_59;
          {
            ATerm y_59 = t;
            int z_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_41 = NULL,c_41 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_41 = ATgetFirst((ATermList) t);
                    c_41 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_23;
                {
                  ATerm v_21 (ATerm t)
                  {
                    ATerm d_41 = NULL;
                    d_41 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_41, d_41);
                    t = l_97(t);
                    return(t);
                  }
                  t = fetch_1_0(v_21, t);
                  t = c_41;
                  t = o_23(t);
                }
                ;
                LocalPopChoice(z_59);
              }
            else
              {
                t = y_59;
                t = Cons_2_0(_id, o_23, t);
              }
          }
        }
      return(t);
    }
    t = o_23(t);
  }
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm c_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      if((c_24 != ATgetArgument(t, 1)))
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
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__3))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      v_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
  {
    ATerm a_60 = t;
    int b_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_60 = ATgetArgument(t, 0);
            ATerm d_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_23, u_23);
        ;
        LocalPopChoice(b_60);
      }
    else
      {
        t = a_60;
        t = (ATerm) ATempty;
      }
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_23, v_23);
    t = union_1_0(a_22, t);
    y_23 = t;
    t = SSL_table_put(t_23, u_23, y_23);
    t = (ATerm) ATmakeAppl(sym__3, t_23, u_23, v_23);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_24;
  {
    ATerm b_22 (ATerm t)
    {
      ATerm i_24 = NULL,j_24 = NULL;
      if(match_cons(t, sym__2))
        {
          i_24 = ATgetArgument(t, 0);
          j_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, g_24, i_24, j_24);
      t = d_112(t);
      return(t);
    }
    t = map_1_0(b_22, t);
  }
  return(t);
}
ATerm z_24 (ATerm s_24, ATerm t)
{
  t = SSL_fclose(s_24);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_24 = ATgetArgument(t, 0);
      {
        ATerm e_60 = t;
        int f_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_24);
            ;
            LocalPopChoice(f_60);
          }
        else
          {
            t = e_60;
            t = z_24(x_24, t);
          }
      }
    }
  else
    {
      t = z_24(x_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_25 = NULL;
  t = SSL_stdin_stream();
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_25 = NULL;
  t = SSL_stdout_stream();
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_25 = NULL;
  t = SSL_stderr_stream();
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_25);
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm m_25 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_25;
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_is_string(s_25);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_60 = ATgetArgument(t, 0);
      ATerm h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_60 = t;
    int j_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL,p_41 = NULL;
        o_41 = t;
        t = SSL_explode_term(o_41);
        if(match_cons(t, sym__2))
          {
            ATerm k_60 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_60) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_60 = ATgetArgument(t, 1);
              if(((ATgetType(l_60) == AT_LIST) && !(ATisEmpty(l_60))))
                {
                  p_41 = ATgetFirst((ATermList) l_60);
                  {
                    ATerm m_60 = (ATerm) ATgetNext((ATermList) l_60);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = p_41;
        if(match_cons(t, sym_stderr_0))
          {
            t = p_41;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = p_41;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_41;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_60);
      }
    else
      {
        t = i_60;
        {
          ATerm n_60 = t;
          int o_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
              t = _2_0(e_22, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_25 = ATgetArgument(t, 0);
                  k_25 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_25, k_25);
              l_25 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_25);
              ;
              LocalPopChoice(o_60);
            }
          else
            {
              t = n_60;
              {
                ATerm o_25 = NULL,q_25 = NULL,r_25 = NULL;
                t = _2_0(f_22, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_25 = ATgetArgument(t, 0);
                    q_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_25, q_25);
                r_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_25 = NULL;
      w_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_25, term_r_60);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm q_41 = NULL;
        q_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_41;
        _fail(t);
      }
    }
  t_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_25);
  u_25 = t;
  t = t_25;
  t = fclose_0_0(t);
  t = u_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_60 = t;
  int t_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL;
      a_26 = t;
      t = SSL_access(a_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(t_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_60;
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_41 = NULL;
            ATerm w_60 = t;
            if((PushChoice() == 0))
              {
                ATerm b_26 = NULL;
                b_26 = t;
                t = SSL_access(b_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_60;
              }
            t_41 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = t_41;
            ;
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
            {
              ATerm w_41 = NULL;
              w_41 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_41), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = w_41;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm g_22 (ATerm t)
{
  ATerm z_41 = NULL;
  z_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_41), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = z_41;
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm c_42 = NULL;
  c_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_42), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = c_42;
  return(t);
}
ATerm k_22 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = f_26;
  return(t);
}
ATerm l_22 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = g_26;
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = h_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = if_verbose5_1_0(g_22, t);
  {
    ATerm x_60 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, c_26));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_60;
      }
    d_26 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, c_26));
    t = d_26;
    t = if_verbose4_1_0(i_22, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_22, t);
    e_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_60, e_26);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(l_22, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, c_26), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_y_60, (ATerm)ATmakeAppl(sym_Imported_1, c_26), (ATerm) ATempty);
    t = if_verbose4_1_0(m_22, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_61);
    }
  else
    {
      t = z_60;
      {
        ATerm b_61 = t;
        int c_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_22 (ATerm t)
            {
              t = filter_1_0(m_100, t);
              return(t);
            }
            t = Cons_2_0(m_100, n_22, t);
            ;
            LocalPopChoice(c_61);
          }
        else
          {
            t = b_61;
            {
              ATerm n_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_61 = ATgetFirst((ATermList) t);
                  n_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_26;
              t = filter_1_0(m_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm p_26 (ATerm t)
  {
    ATerm e_61 = t;
    int f_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        t = p_26(t);
        ;
        LocalPopChoice(f_61);
      }
    else
      {
        t = e_61;
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_61 = t;
  int h_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm i_61 = t;
        int j_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_42 = NULL;
            t = eval_config_0_0(t);
            i_42 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), i_42);
            t = i_42;
            ;
            LocalPopChoice(j_61);
          }
        else
          {
            t = i_61;
          }
      }
      ;
      LocalPopChoice(h_61);
    }
  else
    {
      t = g_61;
      {
        ATerm k_61 = t;
        int l_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(l_61);
          }
        else
          {
            t = k_61;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = j_42;
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_61 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_61;
      }
  }
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm m_42 = NULL;
  m_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = m_42;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  t = if_verbose5_1_0(o_22, t);
  q_26 = t;
  {
    ATerm n_61 = t;
    int o_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(o_61);
      }
    else
      {
        t = n_61;
        {
          ATerm r_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_26 = t;
          t = repeat_1_0(p_22, t);
          t = r_26;
        }
      }
    t = q_26;
    t = if_verbose5_1_0(r_22, t);
  }
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm p_42 = NULL;
  p_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_42), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = p_42;
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_43), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = c_43;
  return(t);
}
ATerm z_22 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), v_43);
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm x_43 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(z_22, t);
  x_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_43), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = x_43;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_61 = t;
  int q_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(v_22, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_61 = t;
        int s_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
            if(match_cons(t, sym__2))
              {
                v_42 = ATgetArgument(t, 0);
                w_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, v_42));
            {
              ATerm w_22 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((w_42 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((x_42 != NULL) && (x_42 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_42 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(w_22, t);
              t = not_null(x_42);
            }
            ;
            LocalPopChoice(s_61);
          }
        else
          {
            t = r_61;
            {
              ATerm a_43 = NULL,b_43 = NULL;
              a_43 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, a_43));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_61 = ATgetFirst((ATermList) t);
                  if(match_cons(t_61, sym__2))
                    {
                      ATerm v_61 = ATgetArgument(t_61, 0);
                      b_43 = ATgetArgument(t_61, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_61 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = b_43;
            }
          }
        t = if_verbose5_1_0(x_22, t);
      }
      ;
      LocalPopChoice(q_61);
    }
  else
    {
      t = p_61;
      {
        ATerm x_26 = NULL;
        x_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), x_26), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_61), x_26), term_w_61);
        t = if_verbose5_1_0(y_22, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_27);
        {
          ATerm a_62 = t;
          int b_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_44 = NULL;
              t = eval_config_0_0(t);
              d_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_27, d_44);
              t = d_44;
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
    c_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_27, c_27);
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
          t = b_27;
          {
            ATerm a_23 (ATerm t)
            {
              t = c_27;
              return(t);
            }
            t = at_end_1_0(a_23, t);
          }
          ;
          LocalPopChoice(d_62);
        }
      else
        {
          t = c_62;
          {
            ATerm h_44 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_27, c_27));
            if(match_cons(t, sym__2))
              {
                ATerm g_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                h_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_44;
            t = concat_0_0(t);
          }
        }
      e_27 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_27, e_27);
      t = (ATerm) ATmakeAppl(sym__3, term_q_55, a_27, e_27);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_27 = NULL;
      t = term_f_53;
      t = l_0(t);
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_62, term_i_62, s_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm w_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_27 = ATgetFirst((ATermList) t);
          n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_27 = ATgetFirst((ATermList) t);
          q_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_27;
      t = j_0(t);
      t = o_27;
      t = k_0(t);
      w_27 = t;
      t = (ATerm) ATinsert(CheckATermList(q_27), w_27);
    }
  return(t);
}
ATerm toggle_config_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_27);
        {
          ATerm l_62 = t;
          int m_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_44 = NULL;
              t = eval_config_0_0(t);
              l_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_27, l_44);
              t = l_44;
              ;
              LocalPopChoice(m_62);
            }
          else
            {
              t = l_62;
            }
          t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_27);
          t = (ATerm) ATmakeAppl(sym__2, term_q_55, x_27);
        }
        ;
        LocalPopChoice(k_62);
      }
    else
      {
        t = j_62;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_27, y_27);
        t = (ATerm) ATmakeAppl(sym__3, term_q_55, x_27, y_27);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm b_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_28;
  {
    ATerm n_62 = t;
    int o_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_28);
        {
          ATerm p_62 = t;
          int q_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_44 = NULL;
              t = eval_config_0_0(t);
              p_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_28, p_44);
              t = p_44;
              ;
              LocalPopChoice(q_62);
            }
          else
            {
              t = p_62;
            }
        }
        ;
        LocalPopChoice(o_62);
      }
    else
      {
        t = n_62;
        t = (ATerm) ATempty;
      }
    e_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_28, d_28);
    {
      ATerm r_62 = t;
      int s_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm t_62 = ATgetArgument(t, 0);
              ATerm u_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_28;
          {
            ATerm e_23 (ATerm t)
            {
              t = d_28;
              return(t);
            }
            t = at_end_1_0(e_23, t);
          }
          ;
          LocalPopChoice(s_62);
        }
      else
        {
          t = r_62;
          {
            ATerm t_44 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_28, d_28));
            if(match_cons(t, sym__2))
              {
                ATerm v_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                t_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_44;
            t = concat_0_0(t);
          }
        }
      f_28 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_28, f_28);
      t = (ATerm) ATmakeAppl(sym__3, term_q_55, b_28, f_28);
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
ATerm h_23 (ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_28);
  t = term_f_53;
  return(t);
}
ATerm j_23 (ATerm t)
{
  t = term_w_62;
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  if(match_string(t, "-o"))
    {
      t = t_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_28;
    }
  return(t);
}
ATerm l_23 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_28);
  t = term_f_53;
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = term_x_62;
  return(t);
}
ATerm q_23 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  if(match_string(t, "-I"))
    {
      t = v_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = v_28;
    }
  return(t);
}
ATerm r_23 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_62, (ATerm) ATinsert(ATinsert(ATempty, w_28), term_y_62));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = term_z_62;
  return(t);
}
ATerm x_23 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  if(match_string(t, "--main"))
    {
      t = y_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = y_28;
    }
  return(t);
}
ATerm z_23 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), a_29);
  t = term_f_53;
  return(t);
}
ATerm a_24 (ATerm t)
{
  t = term_a_63;
  return(t);
}
ATerm b_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_34, (ATerm) ATinsert(ATempty, b_29));
  t = post_extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = term_b_63;
  return(t);
}
ATerm h_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_63, (ATerm) ATinsert(ATempty, c_29));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm n_24 (ATerm t)
{
  t = term_d_63;
  return(t);
}
ATerm o_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_63, (ATerm) ATinsert(ATempty, d_29));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = term_f_63;
  return(t);
}
ATerm t_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_24 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm v_24 (ATerm t)
{
  t = term_g_63;
  return(t);
}
ATerm y_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_25 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = term_h_63;
  return(t);
}
ATerm f_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_25 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm h_25 (ATerm t)
{
  t = term_i_63;
  return(t);
}
ATerm i_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_25 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  t = SSL_string_to_int(e_29);
  f_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_29);
  t = term_f_53;
  return(t);
}
ATerm x_25 (ATerm t)
{
  t = term_j_63;
  return(t);
}
ATerm y_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  t = SSL_string_to_int(g_29);
  h_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), h_29);
  t = term_f_53;
  return(t);
}
ATerm j_26 (ATerm t)
{
  t = term_k_63;
  return(t);
}
ATerm k_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_26 (ATerm t)
{
  t = term_m_63;
  t = toggle_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm m_26 (ATerm t)
{
  t = term_n_63;
  return(t);
}
ATerm o_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_26 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = term_o_63;
  return(t);
}
ATerm u_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_63, (ATerm) ATinsert(ATempty, i_29));
  t = extend_config_0_0(t);
  t = term_f_53;
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_q_63;
  return(t);
}
ATerm y_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm k_29 = NULL,m_29 = NULL;
  k_29 = t;
  t = SSL_string_to_int(k_29);
  m_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_29);
  t = term_f_53;
  return(t);
}
ATerm d_27 (ATerm t)
{
  t = term_r_63;
  return(t);
}
ATerm f_27 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  if(match_string(t, "-S"))
    {
      t = n_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_29;
    }
  return(t);
}
ATerm g_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_f_53;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm i_27 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-h"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = term_t_63;
  return(t);
}
ATerm l_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm r_27 (ATerm t)
{
  t = term_u_63;
  return(t);
}
ATerm t_27 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "-v"))
    {
      t = p_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = p_29;
    }
  return(t);
}
ATerm u_27 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_53;
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  if(match_string(t, "--warning"))
    {
      t = q_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = q_29;
    }
  return(t);
}
ATerm g_28 (ATerm t)
{
  t = term_w_63;
  return(t);
}
ATerm h_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm a_28 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
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
              ATerm x_44 = NULL;
              t = eval_config_0_0(t);
              x_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), x_44);
              t = x_44;
              ;
              LocalPopChoice(a_64);
            }
          else
            {
              t = z_63;
            }
          t = Cons_2_0(h_28, i_28, t);
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, r_29));
          t = (ATerm) ATmakeAppl(sym__3, term_q_55, term_e_51, (ATerm) ATinsert(ATempty, r_29));
        }
        ;
        LocalPopChoice(y_63);
      }
    else
      {
        t = x_63;
        t = (ATerm) ATmakeAppl(sym__2, term_e_51, (ATerm) ATinsert(ATempty, r_29));
        t = extend_config_0_0(t);
      }
    t = term_f_53;
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm b_64 = t;
  int c_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(f_23, h_23, j_23, t);
      ;
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
            t = ArgOption_3_0(k_23, l_23, p_23, t);
            ;
            LocalPopChoice(e_64);
          }
        else
          {
            t = d_64;
            {
              ATerm f_64 = t;
              int g_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(q_23, r_23, s_23, t);
                  ;
                  LocalPopChoice(g_64);
                }
              else
                {
                  t = f_64;
                  {
                    ATerm h_64 = t;
                    int i_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(x_23, z_23, a_24, t);
                        ;
                        LocalPopChoice(i_64);
                      }
                    else
                      {
                        t = h_64;
                        {
                          ATerm j_64 = t;
                          int k_64 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(b_24, d_24, f_24, t);
                              ;
                              LocalPopChoice(k_64);
                            }
                          else
                            {
                              t = j_64;
                              {
                                ATerm l_64 = t;
                                int m_64 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(h_24, k_24, n_24, t);
                                    ;
                                    LocalPopChoice(m_64);
                                  }
                                else
                                  {
                                    t = l_64;
                                    {
                                      ATerm n_64 = t;
                                      int o_64 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(o_24, p_24, q_24, t);
                                          ;
                                          LocalPopChoice(o_64);
                                        }
                                      else
                                        {
                                          t = n_64;
                                          {
                                            ATerm p_64 = t;
                                            int q_64 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(t_24, u_24, v_24, t);
                                                ;
                                                LocalPopChoice(q_64);
                                              }
                                            else
                                              {
                                                t = p_64;
                                                {
                                                  ATerm r_64 = t;
                                                  int s_64 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(y_24, b_25, d_25, t);
                                                      ;
                                                      LocalPopChoice(s_64);
                                                    }
                                                  else
                                                    {
                                                      t = r_64;
                                                      {
                                                        ATerm t_64 = t;
                                                        int u_64 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(f_25, g_25, h_25, t);
                                                            ;
                                                            LocalPopChoice(u_64);
                                                          }
                                                        else
                                                          {
                                                            t = t_64;
                                                            {
                                                              ATerm v_64 = t;
                                                              int w_64 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(i_25, p_25, x_25, t);
                                                                  ;
                                                                  LocalPopChoice(w_64);
                                                                }
                                                              else
                                                                {
                                                                  t = v_64;
                                                                  {
                                                                    ATerm x_64 = t;
                                                                    int y_64 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(y_25, z_25, j_26, t);
                                                                        ;
                                                                        LocalPopChoice(y_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_64;
                                                                        {
                                                                          ATerm z_64 = t;
                                                                          int a_65 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(k_26, l_26, m_26, t);
                                                                              ;
                                                                              LocalPopChoice(a_65);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_64;
                                                                              {
                                                                                ATerm b_65 = t;
                                                                                int c_65 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(o_26, s_26, t_26, t);
                                                                                    ;
                                                                                    LocalPopChoice(c_65);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_65;
                                                                                    {
                                                                                      ATerm d_65 = t;
                                                                                      int e_65 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(u_26, v_26, w_26, t);
                                                                                          ;
                                                                                          LocalPopChoice(e_65);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = d_65;
                                                                                          {
                                                                                            ATerm f_65 = t;
                                                                                            int g_65 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(y_26, z_26, d_27, t);
                                                                                                ;
                                                                                                LocalPopChoice(g_65);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_65;
                                                                                                {
                                                                                                  ATerm h_65 = t;
                                                                                                  int i_65 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(f_27, g_27, h_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(i_65);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = h_65;
                                                                                                      {
                                                                                                        ATerm j_65 = t;
                                                                                                        int k_65 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(i_27, j_27, k_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_65);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_65;
                                                                                                            {
                                                                                                              ATerm l_65 = t;
                                                                                                              int m_65 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(l_27, p_27, r_27, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(m_65);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = l_65;
                                                                                                                  {
                                                                                                                    ATerm n_65 = t;
                                                                                                                    int o_65 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(t_27, u_27, v_27, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(o_65);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = n_65;
                                                                                                                        t = ArgOption_3_0(z_27, a_28, g_28, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_66), term_y_65), term_b_66), term_a_66), term_z_65), term_y_65), term_x_65), term_w_65), term_v_65), term_u_65), term_t_65), term_s_65), term_r_65), term_q_65), term_p_65);
  return(t);
}
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm s_29 (ATerm t)
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_66);
      }
    else
      {
        t = d_66;
        t = Cons_2_0(h_93, s_29, t);
      }
    return(t);
  }
  t = s_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_30 = NULL,c_30 = NULL;
        t = x_29;
        t = h_0(t);
        b_30 = t;
        t = v_29;
        t = g_0(t);
        c_30 = t;
        t = x_29;
        {
          ATerm l_28 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(b_30), c_30);
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
ATerm short_description_1_0 (ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_30 = NULL;
  t = term_f_53;
  t = e_0(t);
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_66), d_30), term_j_66), term_y_65), term_i_66), term_y_65), term_h_66), term_g_66), term_y_65), term_f_66);
  return(t);
}
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  j_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_30);
  f_30 = t;
  t = h_30;
  t = m_77(t);
  i_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_30), f_30);
  return(t);
}
ATerm q_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_28 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_30), term_l_66);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm m_66 = t;
  int n_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_66 = t;
        int p_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_45 = NULL;
            t = eval_config_0_0(t);
            b_45 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_45);
            t = b_45;
            ;
            LocalPopChoice(p_66);
          }
        else
          {
            t = o_66;
          }
        m_30 = t;
      }
      ;
      LocalPopChoice(n_66);
    }
  else
    {
      t = m_66;
      {
        ATerm m_28 (ATerm t)
        {
          ATerm n_28 (ATerm t)
          {
            if(((m_30 != NULL) && (m_30 != t)))
              _fail(t);
            else
              m_30 = t;
            return(t);
          }
          t = Program_1_0(n_28, t);
          return(t);
        }
        t = fetch_1_0(m_28, t);
      }
    }
  {
    ATerm q_66 = t;
    int r_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 (ATerm t)
        {
          t = not_null(m_30);
          return(t);
        }
        t = short_description_1_0(o_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(r_66);
      }
    else
      {
        t = q_66;
      }
    t = term_s_66;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_acc_2_0(_id, q_28, t);
    t = map_1_0(r_28, t);
    {
      ATerm t_66 = t;
      int u_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_30 = NULL;
          ATerm z_28 (ATerm t)
          {
            t = not_null(m_30);
            return(t);
          }
          t = long_description_1_0(z_28, t);
          o_30 = t;
          t = (ATerm) ATinsert(CheckATermList(o_30), term_y_65);
          t = echo_0_0(t);
          ;
          LocalPopChoice(u_66);
        }
      else
        {
          t = t_66;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL,t_30 = NULL,u_30 = NULL;
  u_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  p_30 = t;
  t = r_30;
  t = n_77(t);
  t_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_30), p_30);
  return(t);
}
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm b_31 (ATerm t)
  {
    ATerm v_66 = t;
    int w_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_93, _id, t);
        ;
        LocalPopChoice(w_66);
      }
    else
      {
        t = v_66;
        t = Cons_2_0(_id, b_31, t);
      }
    return(t);
  }
  t = b_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  k_31 = t;
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_66 = ATgetFirst((ATermList) t);
                ATerm a_67 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_31;
          }
        ;
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
        t = (ATerm) ATinsert(ATempty, k_31);
      }
    l_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_31);
    t = k_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_67 = t;
    int c_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_45 = NULL;
        t = eval_config_0_0(t);
        f_45 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_45);
        t = f_45;
        ;
        LocalPopChoice(c_67);
      }
    else
      {
        t = b_67;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm j_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_29 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_67;
  return(t);
}
ATerm t_29 (ATerm t)
{
  t = term_f_67;
  return(t);
}
ATerm w_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_29 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_67;
  return(t);
}
ATerm z_29 (ATerm t)
{
  t = term_j_67;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_67 = t;
  int l_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_29, l_29, t_29, t);
      ;
      LocalPopChoice(l_67);
    }
  else
    {
      t = k_67;
      t = Option_3_0(w_29, y_29, z_29, t);
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  if(match_cons(t, sym__3))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
      v_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
  {
    ATerm m_67 = t;
    int n_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_67 = ATgetArgument(t, 0);
            ATerm p_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_31, u_31);
        ;
        LocalPopChoice(n_67);
      }
    else
      {
        t = m_67;
        t = (ATerm) ATempty;
      }
    w_31 = t;
    t = SSL_table_put(t_31, u_31, (ATerm) ATinsert(CheckATermList(w_31), v_31));
    t = (ATerm) ATmakeAppl(sym__3, t_31, u_31, v_31);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_32 = NULL;
      t = term_f_53;
      t = d_0(t);
      h_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_62, term_i_62, h_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          g_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_32;
      t = a_0(t);
      t = term_f_53;
      t = c_0(t);
      n_32 = t;
      t = (ATerm) ATinsert(CheckATermList(g_32), n_32);
    }
  return(t);
}
ATerm a_30 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_32);
  t = (ATerm) ATmakeAppl(sym_Program_1, v_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  {
    ATerm q_67 = t;
    int r_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_67;
        t = a_112(t);
        ;
        LocalPopChoice(r_67);
      }
    else
      {
        t = q_67;
      }
    t = t_32;
    {
      ATerm e_30 (ATerm t)
      {
        ATerm t_67 = t;
        int u_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_67 = t;
            int w_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_67);
              }
            else
              {
                t = v_67;
                t = a_112(t);
                t = Cons_2_0(_id, e_30, t);
              }
            ;
            LocalPopChoice(u_67);
          }
        else
          {
            t = t_67;
            {
              ATerm a_33 = NULL,b_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_33 = ATgetFirst((ATermList) t);
                  b_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_33), (ATerm) ATmakeAppl(sym_Undefined_1, a_33));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_30, e_30, t);
    }
  }
  return(t);
}
ATerm k_30 (ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  if(match_string(t, "--help"))
    {
      t = q_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_33;
        }
    }
  return(t);
}
ATerm l_30 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_67;
  return(t);
}
ATerm s_30 (ATerm t)
{
  t = term_y_67;
  return(t);
}
ATerm v_30 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_33;
  {
    ATerm g_30 (ATerm t)
    {
      ATerm z_67 = t;
      int a_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_111(t);
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
                t = Option_3_0(k_30, l_30, s_30, t);
                ;
                LocalPopChoice(c_68);
              }
            else
              {
                t = b_68;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_30, t);
    {
      ATerm d_68 = t;
      int e_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_33 = NULL;
          w_33 = t;
          {
            ATerm f_68 = t;
            int g_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_33;
                {
                  ATerm h_68 = t;
                  int i_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm j_68 = t;
                        int k_68 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_45 = NULL;
                            t = eval_config_0_0(t);
                            u_45 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_45);
                            t = u_45;
                            ;
                            LocalPopChoice(k_68);
                          }
                        else
                          {
                            t = j_68;
                          }
                      }
                      ;
                      LocalPopChoice(i_68);
                    }
                  else
                    {
                      t = h_68;
                      t = fetch_1_0(v_30, t);
                    }
                  t = w_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(g_68);
              }
            else
              {
                t = f_68;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm l_68 = t;
                  int m_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_46 = NULL;
                      t = eval_config_0_0(t);
                      b_46 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_46);
                      t = b_46;
                      ;
                      LocalPopChoice(m_68);
                    }
                  else
                    {
                      t = l_68;
                    }
                  t = w_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(e_68);
        }
      else
        {
          t = d_68;
          {
            ATerm n_68 = t;
            int o_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_30 (ATerm t)
                {
                  ATerm z_30 (ATerm t)
                  {
                    if(((m_33 != NULL) && (m_33 != t)))
                      _fail(t);
                    else
                      m_33 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_30, t);
                  return(t);
                }
                t = fetch_1_0(y_30, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_33)), term_p_68));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(o_68);
              }
            else
              {
                t = n_68;
              }
          }
        }
      n_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_33;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_68 = t;
  int r_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_68);
    }
  else
    {
      t = q_68;
      {
        ATerm c_34 = NULL,e_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_34 = ATgetFirst((ATermList) t);
            e_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_34;
        {
          ATerm a_31 (ATerm t)
          {
            t = e_34;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_31, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm k_34 (ATerm t)
  {
    ATerm s_68 = t;
    int t_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_34, t);
        ;
        LocalPopChoice(t_68);
      }
    else
      {
        t = s_68;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_93(t);
      }
    return(t);
  }
  t = k_34(t);
  return(t);
}
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_34);
  l_34 = t;
  t = m_34;
  t = h_67(t);
  o_34 = t;
  t = n_34;
  t = i_67(t);
  p_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, o_34, p_34), l_34);
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  t = SSL_explode_string(w_34);
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = SSL_explode_string(x_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = _2_0(c_31, d_31, t);
  {
    ATerm u_68 = t;
    int v_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,a_35 = NULL;
        if(match_cons(t, sym__2))
          {
            z_34 = ATgetArgument(t, 0);
            a_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_34;
        {
          ATerm f_31 (ATerm t)
          {
            t = a_35;
            return(t);
          }
          t = at_end_1_0(f_31, t);
        }
        ;
        LocalPopChoice(v_68);
      }
    else
      {
        t = u_68;
        {
          ATerm e_46 = NULL,f_46 = NULL;
          e_46 = t;
          t = SSL_explode_term(e_46);
          if(match_cons(t, sym__2))
            {
              ATerm w_68 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_68) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_46;
          t = concat_0_0(t);
        }
      }
    v_34 = t;
    t = SSL_implode_string(v_34);
  }
  return(t);
}
ATerm Cons_2_0 (ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  i_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_35 = ATgetFirst((ATermList) t);
      f_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_35);
  d_35 = t;
  t = e_35;
  t = w_71(t);
  g_35 = t;
  t = f_35;
  t = x_71(t);
  h_35 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_35), g_35), d_35);
  return(t);
}
ATerm g_31 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm h_31 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  n_35 = t;
  t = SSL_explode_string(n_35);
  {
    ATerm x_68 = t;
    int y_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_35 (ATerm t)
        {
          ATerm z_68 = t;
          int a_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, q_35, t);
              ;
              LocalPopChoice(a_69);
            }
          else
            {
              t = z_68;
              t = Cons_2_0(g_31, h_31, t);
            }
          return(t);
        }
        t = q_35(t);
        ;
        LocalPopChoice(y_68);
      }
    else
      {
        t = x_68;
        t = (ATerm) ATempty;
      }
    o_35 = t;
    t = SSL_implode_string(o_35);
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
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,d_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  s_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(2));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_b_69;
  t = xtc_find_path_0_0(t);
  t_35 = t;
  t = term_c_69;
  t = xtc_find_path_0_0(t);
  u_35 = t;
  t = term_d_69;
  t = xtc_find_path_0_0(t);
  v_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), u_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), t_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_e_69;
  t = xtc_find_path_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, term_f_69);
  t = conc_strings_0_0(t);
  x_35 = t;
  t = term_e_69;
  t = xtc_find_path_0_0(t);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_f_69);
  t = conc_strings_0_0(t);
  z_35 = t;
  t = term_g_69;
  t = xtc_find_path_0_0(t);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, term_f_69);
  t = conc_strings_0_0(t);
  b_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_36), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), z_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), x_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_e_69;
  t = xtc_find_path_0_0(t);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_36, term_h_69);
  t = conc_strings_0_0(t);
  f_36 = t;
  t = term_g_69;
  t = xtc_find_path_0_0(t);
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_36, term_h_69);
  t = conc_strings_0_0(t);
  h_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), h_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), f_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = s_35;
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm l_36 = NULL,w_46 = NULL;
  l_36 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_46 = NULL;
        t = eval_config_0_0(t);
        v_46 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_46);
        t = v_46;
        ;
        LocalPopChoice(j_69);
      }
    else
      {
        t = i_69;
      }
    w_46 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_46), (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue))));
    t = l_36;
  }
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm k_69 = t;
    int l_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)));
        {
          ATerm m_69 = t;
          int n_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_46 = NULL;
              t = eval_config_0_0(t);
              j_46 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), j_46);
              t = j_46;
              ;
              LocalPopChoice(n_69);
            }
          else
            {
              t = m_69;
            }
          t = term_o_69;
          t = xtc_find_0_0(t);
          i_36 = t;
          t = SSL_copy(i_36, (ATerm) ATmakeAppl(sym_stdout_0));
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
        ;
        LocalPopChoice(l_69);
      }
    else
      {
        t = k_69;
      }
    {
      ATerm p_69 = t;
      int q_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)));
          {
            ATerm r_69 = t;
            int s_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_46 = NULL;
                t = eval_config_0_0(t);
                n_46 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), n_46);
                t = n_46;
                ;
                LocalPopChoice(s_69);
              }
            else
              {
                t = r_69;
              }
            t = strc_version_0_0(t);
            t = SSL_exit((ATerm) ATmakeInt(0));
          }
          ;
          LocalPopChoice(q_69);
        }
      else
        {
          t = p_69;
        }
      {
        ATerm t_69 = t;
        int u_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_36 = NULL;
            j_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm v_69 = t;
              int w_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_46 = NULL;
                  t = eval_config_0_0(t);
                  r_46 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_46);
                  t = r_46;
                  ;
                  LocalPopChoice(w_69);
                }
              else
                {
                  t = v_69;
                }
              t = j_36;
            }
            ;
            LocalPopChoice(u_69);
          }
        else
          {
            t = t_69;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATempty, term_x_69);
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(j_31, t);
      }
    }
  }
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(m_36), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(CheckATermList(m_36), term_y_69));
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm z_69 = t;
  int a_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_36 = NULL;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
      {
        ATerm b_70 = t;
        int c_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_47 = NULL;
            t = eval_config_0_0(t);
            c_47 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_47);
            t = c_47;
            ;
            LocalPopChoice(c_70);
          }
        else
          {
            t = b_70;
          }
        n_36 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_36);
      }
      ;
      LocalPopChoice(a_70);
    }
  else
    {
      t = z_69;
      t = term_d_70;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm q_31 (ATerm t)
{
  ATerm o_36 = NULL;
  t = run_time_0_0(t);
  o_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_70), o_36), term_e_70));
  return(t);
}
ATerm m_31 (ATerm t)
{
  t = if_verbose1_1_0(o_31, t);
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = xtc_temp_files_1_0(p_31, t);
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm g_70 = t;
  int h_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_31, n_31, t);
      t = if_verbose2_1_0(q_31, t);
      t = SSL_exit((ATerm) ATmakeInt(0));
      ;
      LocalPopChoice(h_70);
    }
  else
    {
      t = g_70;
      {
        ATerm p_36 = NULL;
        t = run_time_0_0(t);
        p_36 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
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
