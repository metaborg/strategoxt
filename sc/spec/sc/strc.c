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
ATerm term_c_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_v_68;
ATerm term_q_68;
ATerm term_h_68;
ATerm term_c_68;
ATerm term_b_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_w_67;
ATerm term_k_67;
ATerm term_v_66;
ATerm term_u_66;
ATerm term_l_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_b_66;
ATerm term_a_66;
ATerm term_n_65;
ATerm term_m_65;
ATerm term_f_65;
ATerm term_e_65;
ATerm term_d_65;
ATerm term_c_65;
ATerm term_b_65;
ATerm term_a_65;
ATerm term_x_64;
ATerm term_w_64;
ATerm term_v_64;
ATerm term_u_64;
ATerm term_t_64;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_p_64;
ATerm term_o_64;
ATerm term_n_64;
ATerm term_m_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_e_64;
ATerm term_b_64;
ATerm term_y_63;
ATerm term_v_63;
ATerm term_s_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_l_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_g_63;
ATerm term_d_63;
ATerm term_a_63;
ATerm term_x_62;
ATerm term_u_62;
ATerm term_r_62;
ATerm term_o_62;
ATerm term_n_62;
ATerm term_k_62;
ATerm term_j_62;
ATerm term_g_62;
ATerm term_d_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_w_61;
ATerm term_t_61;
ATerm term_d_61;
ATerm term_c_61;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_t_59;
ATerm term_m_59;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_r_56;
ATerm term_x_55;
ATerm term_s_55;
ATerm term_n_55;
ATerm term_e_55;
ATerm term_v_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_t_52;
ATerm term_n_52;
ATerm term_k_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_c_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_f_50;
ATerm term_c_50;
ATerm term_s_49;
ATerm term_h_49;
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
ATerm term_q_45;
ATerm term_p_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_k_43;
ATerm term_e_43;
ATerm term_n_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_v_41;
ATerm term_n_41;
ATerm term_f_41;
ATerm term_w_40;
ATerm term_q_40;
ATerm term_j_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_g_38;
ATerm term_x_37;
ATerm term_i_37;
ATerm term_c_37;
ATerm term_y_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_p_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_g_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_u_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_g_31;
ATerm term_w_30;
void init_constant_terms (void)
{
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt6", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_44, term_i_37, term_s_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_44, term_g_31, term_w_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_44, term_y_34, term_a_45);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_45, term_e_45, term_f_45);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_45, term_k_45, term_l_45);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_45, term_p_45, term_q_45);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_45, term_t_45, term_u_45);
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_45, term_x_45, term_y_45);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_46, term_b_46, term_c_46);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_46, term_f_46, term_g_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_j_46, term_k_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_46, term_m_38, term_n_46);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_46, term_q_46, term_r_46);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_46, term_u_46, term_v_46);
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_46, term_y_46, term_z_46);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_47, term_c_47, term_d_47);
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
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_47, term_o_47, term_p_47);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_47, term_s_47, term_t_47);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_47, term_w_47, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_47, term_a_48, term_b_48);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_48, term_e_48, term_f_48);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_48, term_i_48, term_j_48);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_48, term_g_38, term_m_48);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_48, term_p_48, term_q_48);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_48, term_t_48, term_u_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_48, term_x_48, term_y_48);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_59));
  term_t_59 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_o_62));
  term_o_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(sym__2, term_g_63, term_a_52);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_m_64));
  term_m_64 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_o_64));
  term_o_64 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_64));
  term_u_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_w_64));
  term_w_64 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_x_64));
  term_x_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_65));
  term_c_65 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym__3, term_l_54, term_a_66, term_a_52);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_66));
  term_u_66 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
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
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
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
  ATerm p_14 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_99(t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = p_14;
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
  ATerm c_1 = NULL,c_0 = NULL,e_0 = NULL;
  t = times_0_0(t);
  c_0 = t;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  {
    ATerm p_0 (ATerm t)
    {
      t = term_w_30;
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
        ATerm x_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(y_0, z_0);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = x_30;
            t = SSL_addr(y_0, z_0);
          }
      }
      return(t);
    }
    t = foldr_2_0(p_0, r_0, t);
    c_1 = t;
    t = SSL_TicksToSeconds(c_1);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm b_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 = NULL,p_2 = NULL;
      v_1 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 = NULL;
            t = eval_config_0_0(t);
            h_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_1);
            t = h_1;
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
          }
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, term_g_31);
        t = geq_0_0(t);
        t = v_1;
        t = b_107(t);
      }
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = b_31;
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
      ATerm w_2 = NULL;
      w_2 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue))));
      t = w_2;
      return(t);
    }
    t = if_verbose2_1_0(s_0, t);
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
          {
            ATerm k_31 = t;
            int l_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_1 = NULL;
                t = eval_config_0_0(t);
                l_1 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_1);
                t = l_1;
                ;
                LocalPopChoice(l_31);
              }
            else
              {
                t = k_31;
              }
          }
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm p_1 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
            {
              ATerm n_31 = t;
              int p_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 = NULL;
                  t = eval_config_0_0(t);
                  u_1 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), u_1);
                  t = u_1;
                  ;
                  LocalPopChoice(p_31);
                }
              else
                {
                  t = n_31;
                }
              p_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_1, term_q_31);
              t = conc_strings_0_0(t);
            }
          }
        }
      r_2 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)));
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 = NULL;
            t = eval_config_0_0(t);
            z_1 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), z_1);
            t = z_1;
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
          }
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_2), r_2), term_u_31), q_2));
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
  ATerm z_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,c_2 = NULL;
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
      ATerm v_31 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 = NULL;
          t = eval_config_0_0(t);
          i_2 = t;
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), i_2);
          t = i_2;
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = v_31;
        }
      c_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_2, term_c_32);
      t = conc_strings_0_0(t);
      a_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)));
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 = NULL;
            t = eval_config_0_0(t);
            m_2 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), m_2);
            t = m_2;
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
          }
        d_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_u_31), z_2), term_f_32));
        {
          ATerm g_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm l_32 = ATgetArgument(t, 0);
                  ATerm m_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_3;
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_u_31), z_2), term_f_32);
                  return(t);
                }
                t = at_end_1_0(b_1, t);
              }
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = g_32;
              {
                ATerm y_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), z_2), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)))));
                if(match_cons(t, sym__2))
                  {
                    ATerm n_32 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_32) != ATmakeSymbol("", 0, ATtrue)))
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
          t = (ATerm) ATmakeAppl(sym__2, term_t_31, e_3);
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
  ATerm t_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)));
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL;
            t = eval_config_0_0(t);
            q_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), q_3);
            t = q_3;
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
          }
        t = m_3;
      }
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = t_32;
      {
        ATerm f_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm o_3 = NULL;
            o_3 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(o_3), (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(CheckATermList(o_3), term_a_33));
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
    ATerm b_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(e_4, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(e_4);
        t = term_e_33;
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = b_33;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_4 = NULL;
              t = d_4;
              t = q_0(t);
              u_4 = t;
              {
                ATerm m_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_33 = t;
                    int o_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_33);
                      }
                    else
                      {
                        t = n_33;
                        {
                          ATerm w_4 = NULL;
                          w_4 = t;
                          if((e_4 != t))
                            {
                              _fail(t);
                            }
                          t = w_4;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_33;
                  }
                t = SSL_rename(e_4, u_4);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_4);
              }
              ;
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
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
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_33);
      {
        ATerm j_1 (ATerm t)
        {
          t = term_u_33;
          return(t);
        }
        ATerm k_1 (ATerm t)
        {
          ATerm j_4 = NULL,k_4 = NULL;
          t = pass_verbose_0_0(t);
          j_4 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
          {
            ATerm v_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_5 = NULL;
                t = eval_config_0_0(t);
                j_5 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), j_5);
                t = j_5;
                ;
                LocalPopChoice(y_33);
              }
            else
              {
                t = v_33;
              }
            {
              ATerm m_1 (ATerm t)
              {
                ATerm l_4 = NULL;
                l_4 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_z_33);
                return(t);
              }
              t = map_1_0(m_1, t);
              k_4 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(k_4), (ATerm) ATinsert(ATempty, term_a_34)), j_4);
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
      t = p_33;
      {
        ATerm n_1 (ATerm t)
        {
          t = term_u_33;
          return(t);
        }
        ATerm o_1 (ATerm t)
        {
          ATerm n_4 = NULL,o_4 = NULL;
          t = pass_verbose_0_0(t);
          n_4 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)));
          {
            ATerm b_34 = t;
            int c_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_6 = NULL;
                t = eval_config_0_0(t);
                q_6 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), q_6);
                t = q_6;
                ;
                LocalPopChoice(c_34);
              }
            else
              {
                t = b_34;
              }
            {
              ATerm q_1 (ATerm t)
              {
                ATerm p_4 = NULL;
                p_4 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, p_4), term_z_33);
                return(t);
              }
              t = map_1_0(q_1, t);
              o_4 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(o_4), (ATerm) ATinsert(ATempty, term_a_34)), n_4);
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
    ATerm r_4 = NULL;
    r_4 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue))));
    t = r_4;
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
        t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(CheckATermList(s_4), term_g_34));
        return(t);
      }
      t = if_verbose1_1_0(w_1, t);
      return(t);
    }
    ATerm t_1 (ATerm t)
    {
      ATerm k_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(m_34);
          {
            ATerm x_1 (ATerm t)
            {
              t = term_u_34;
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm v_4 = NULL;
              t = pass_verbose_0_0(t);
              v_4 = t;
              t = (ATerm) ATinsert(CheckATermList(v_4), term_a_34);
              return(t);
            }
            t = xtc_transform_file_2_0(x_1, y_1, t);
          }
        }
      else
        {
          t = k_34;
          {
            ATerm a_2 (ATerm t)
            {
              t = term_u_34;
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm x_4 = NULL;
              t = pass_verbose_0_0(t);
              x_4 = t;
              t = (ATerm) ATinsert(CheckATermList(x_4), term_a_34);
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
            t = term_x_34;
            return(t);
          }
          t = save_as_1_0(e_2, t);
          return(t);
        }
        t = if_keep1_1_0(d_2, t);
        {
          ATerm f_2 (ATerm t)
          {
            t = term_y_34;
            return(t);
          }
          t = olevel_2_0(f_2, bound_unbound_vars_0_0, t);
          {
            ATerm z_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(i_35);
                  }
                else
                  {
                    t = h_35;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(a_35);
                {
                  ATerm g_2 (ATerm t)
                  {
                    t = term_p_35;
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    ATerm y_4 = NULL;
                    t = pass_verbose_0_0(t);
                    y_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(y_4), term_a_34);
                    return(t);
                  }
                  t = xtc_transform_file_2_0(g_2, h_2, t);
                }
              }
            else
              {
                t = z_34;
                {
                  ATerm j_2 (ATerm t)
                  {
                    t = term_p_35;
                    return(t);
                  }
                  ATerm k_2 (ATerm t)
                  {
                    ATerm z_4 = NULL;
                    t = pass_verbose_0_0(t);
                    z_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(z_4), term_a_34);
                    return(t);
                  }
                  t = xtc_transform_term_2_0(j_2, k_2, t);
                }
              }
            t = s2c_0_0(t);
            {
              ATerm b_36 = t;
              int d_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_36 = t;
                  int n_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(n_36);
                    }
                  else
                    {
                      t = h_36;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(d_36);
                  {
                    ATerm l_2 (ATerm t)
                    {
                      t = term_o_36;
                      return(t);
                    }
                    ATerm n_2 (ATerm t)
                    {
                      ATerm a_5 = NULL;
                      t = term_p_36;
                      t = xtc_find_0_0(t);
                      a_5 = t;
                      t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_s_36);
                      return(t);
                    }
                    t = xtc_transform_file_2_0(l_2, n_2, t);
                  }
                }
              else
                {
                  t = b_36;
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = term_o_36;
                      return(t);
                    }
                    ATerm v_2 (ATerm t)
                    {
                      ATerm b_5 = NULL;
                      t = term_p_36;
                      t = xtc_find_0_0(t);
                      b_5 = t;
                      t = (ATerm) ATinsert(ATinsert(ATempty, b_5), term_s_36);
                      return(t);
                    }
                    t = xtc_transform_term_2_0(o_2, v_2, t);
                  }
                }
              {
                ATerm t_36 = t;
                int u_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_36 = t;
                    int w_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FILE_1_0(_id, t);
                        ;
                        LocalPopChoice(w_36);
                      }
                    else
                      {
                        t = v_36;
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                      }
                    LocalPopChoice(u_36);
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = term_y_36;
                        return(t);
                      }
                      ATerm c_3 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_file_2_0(b_3, c_3, t);
                    }
                  }
                else
                  {
                    t = t_36;
                    {
                      ATerm i_3 (ATerm t)
                      {
                        t = term_y_36;
                        return(t);
                      }
                      ATerm j_3 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = xtc_transform_term_2_0(i_3, j_3, t);
                    }
                  }
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm u_6 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                    {
                      ATerm z_36 = t;
                      int a_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_7 = NULL;
                          t = eval_config_0_0(t);
                          h_7 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), h_7);
                          t = h_7;
                          ;
                          LocalPopChoice(a_37);
                        }
                      else
                        {
                          t = z_36;
                        }
                      u_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_6, term_c_37);
                      t = conc_strings_0_0(t);
                    }
                    return(t);
                  }
                  t = rename_to_1_0(k_3, t);
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
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 = NULL,g_5 = NULL;
      c_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL;
            t = eval_config_0_0(t);
            p_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), p_7);
            t = p_7;
            ;
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
          }
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_i_37);
        t = geq_0_0(t);
        t = c_5;
        t = c_108(t);
      }
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 = NULL,l_5 = NULL,m_5 = NULL;
      i_5 = t;
      t = f_116(t);
      l_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
      {
        ATerm m_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL;
            t = eval_config_0_0(t);
            a_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), a_8);
            t = a_8;
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = m_37;
          }
        m_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, l_5);
        t = geq_0_0(t);
        t = i_5;
        t = g_116(t);
      }
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
    }
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(u_37);
          {
            ATerm n_3 (ATerm t)
            {
              t = term_x_37;
              return(t);
            }
            ATerm p_3 (ATerm t)
            {
              ATerm n_5 = NULL;
              t = pass_verbose_0_0(t);
              n_5 = t;
              t = (ATerm) ATinsert(CheckATermList(n_5), term_a_34);
              return(t);
            }
            t = xtc_transform_file_2_0(n_3, p_3, t);
          }
        }
      else
        {
          t = t_37;
          {
            ATerm r_3 (ATerm t)
            {
              t = term_x_37;
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              ATerm o_5 = NULL;
              t = pass_verbose_0_0(t);
              o_5 = t;
              t = (ATerm) ATinsert(CheckATermList(o_5), term_a_34);
              return(t);
            }
            t = xtc_transform_term_2_0(r_3, s_3, t);
          }
        }
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_38 = t;
            int b_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(b_38);
              }
            else
              {
                t = a_38;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(z_37);
            {
              ATerm t_3 (ATerm t)
              {
                t = term_x_37;
                return(t);
              }
              ATerm u_3 (ATerm t)
              {
                ATerm p_5 = NULL;
                t = pass_verbose_0_0(t);
                p_5 = t;
                t = (ATerm) ATinsert(CheckATermList(p_5), term_a_34);
                return(t);
              }
              t = xtc_transform_file_2_0(t_3, u_3, t);
            }
          }
        else
          {
            t = y_37;
            {
              ATerm v_3 (ATerm t)
              {
                t = term_x_37;
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                ATerm q_5 = NULL;
                t = pass_verbose_0_0(t);
                q_5 = t;
                t = (ATerm) ATinsert(CheckATermList(q_5), term_a_34);
                return(t);
              }
              t = xtc_transform_term_2_0(v_3, w_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,u_5 = NULL;
      s_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 = NULL;
            t = eval_config_0_0(t);
            s_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_8);
            t = s_8;
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
          }
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_5, term_g_38);
        t = geq_0_0(t);
        t = s_5;
        t = g_108(t);
      }
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_5 = NULL,x_5 = NULL;
      v_5 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm j_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 = NULL;
            t = eval_config_0_0(t);
            w_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), w_8);
            t = w_8;
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = j_38;
          }
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_5, term_m_38);
        t = geq_0_0(t);
        t = v_5;
        t = f_108(t);
      }
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
    }
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm z_5 = NULL;
    z_5 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue))));
    t = z_5;
    return(t);
  }
  t = if_verbose2_1_0(x_3, t);
  {
    ATerm y_3 (ATerm t)
    {
      ATerm a_4 (ATerm t)
      {
        ATerm a_6 = NULL;
        a_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(a_6), (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(CheckATermList(a_6), term_n_38));
        return(t);
      }
      t = if_verbose1_1_0(a_4, t);
      return(t);
    }
    ATerm z_3 (ATerm t)
    {
      ATerm b_4 (ATerm t)
      {
        ATerm b_6 = NULL,p_9 = NULL;
        b_6 = t;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)));
        {
          ATerm o_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL;
              t = eval_config_0_0(t);
              m_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), m_9);
              t = m_9;
              ;
              LocalPopChoice(q_38);
            }
          else
            {
              t = o_38;
            }
          p_9 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_9), (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue))));
          t = b_6;
        }
        return(t);
      }
      t = if_verbose3_1_0(b_4, t);
      {
        ATerm c_4 (ATerm t)
        {
          t = term_i_37;
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_38 = t;
              int u_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(u_38);
                }
              else
                {
                  t = t_38;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(s_38);
              {
                ATerm g_4 (ATerm t)
                {
                  t = term_w_38;
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  ATerm c_6 = NULL;
                  t = pass_verbose_0_0(t);
                  c_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_6), term_a_34);
                  return(t);
                }
                t = xtc_transform_file_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = r_38;
              {
                ATerm i_4 (ATerm t)
                {
                  t = term_w_38;
                  return(t);
                }
                ATerm m_4 (ATerm t)
                {
                  ATerm d_6 = NULL;
                  t = pass_verbose_0_0(t);
                  d_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_6), term_a_34);
                  return(t);
                }
                t = xtc_transform_term_2_0(i_4, m_4, t);
              }
            }
          return(t);
        }
        t = olevel_2_0(c_4, f_4, t);
        {
          ATerm q_4 (ATerm t)
          {
            ATerm t_4 (ATerm t)
            {
              t = term_x_38;
              return(t);
            }
            t = save_as_1_0(t_4, t);
            return(t);
          }
          t = if_keep1_1_0(q_4, t);
          {
            ATerm d_5 (ATerm t)
            {
              t = term_g_31;
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              ATerm y_38 = t;
              int a_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_6 = NULL;
                  i_6 = t;
                  {
                    ATerm b_39 = t;
                    if((PushChoice() == 0))
                      {
                        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)));
                        {
                          ATerm c_39 = t;
                          int e_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_10 = NULL;
                              t = eval_config_0_0(t);
                              x_10 = t;
                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue)), x_10);
                              t = x_10;
                              ;
                              LocalPopChoice(e_39);
                            }
                          else
                            {
                              t = c_39;
                            }
                        }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_39;
                      }
                    t = i_6;
                    {
                      ATerm f_39 = t;
                      int g_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_39 = t;
                          int j_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(j_39);
                            }
                          else
                            {
                              t = i_39;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(g_39);
                          {
                            ATerm f_5 (ATerm t)
                            {
                              t = term_k_39;
                              return(t);
                            }
                            ATerm h_5 (ATerm t)
                            {
                              ATerm o_10 = NULL;
                              t = pass_verbose_0_0(t);
                              o_10 = t;
                              t = (ATerm) ATinsert(CheckATermList(o_10), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(f_5, h_5, t);
                          }
                        }
                      else
                        {
                          t = f_39;
                          {
                            ATerm k_5 (ATerm t)
                            {
                              t = term_k_39;
                              return(t);
                            }
                            ATerm r_5 (ATerm t)
                            {
                              ATerm q_10 = NULL;
                              t = pass_verbose_0_0(t);
                              q_10 = t;
                              t = (ATerm) ATinsert(CheckATermList(q_10), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(k_5, r_5, t);
                          }
                        }
                    }
                  }
                  ;
                  LocalPopChoice(a_39);
                }
              else
                {
                  t = y_38;
                }
              return(t);
            }
            t = olevel_2_0(d_5, e_5, t);
            {
              ATerm t_5 (ATerm t)
              {
                ATerm w_5 (ATerm t)
                {
                  t = term_l_39;
                  return(t);
                }
                t = save_as_1_0(w_5, t);
                return(t);
              }
              t = if_keep2_1_0(t_5, t);
              {
                ATerm y_5 (ATerm t)
                {
                  t = term_m_38;
                  return(t);
                }
                ATerm e_6 (ATerm t)
                {
                  ATerm m_39 = t;
                  int n_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_39 = t;
                      int p_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = FILE_1_0(_id, t);
                          ;
                          LocalPopChoice(p_39);
                        }
                      else
                        {
                          t = o_39;
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                        }
                      LocalPopChoice(n_39);
                      {
                        ATerm f_6 (ATerm t)
                        {
                          t = term_q_39;
                          return(t);
                        }
                        ATerm g_6 (ATerm t)
                        {
                          ATerm j_6 = NULL;
                          t = pass_verbose_0_0(t);
                          j_6 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_6), term_a_34);
                          return(t);
                        }
                        t = xtc_transform_file_2_0(f_6, g_6, t);
                      }
                    }
                  else
                    {
                      t = m_39;
                      {
                        ATerm h_6 (ATerm t)
                        {
                          t = term_q_39;
                          return(t);
                        }
                        ATerm p_6 (ATerm t)
                        {
                          ATerm k_6 = NULL;
                          t = pass_verbose_0_0(t);
                          k_6 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_6), term_a_34);
                          return(t);
                        }
                        t = xtc_transform_term_2_0(h_6, p_6, t);
                      }
                    }
                  {
                    ATerm v_39 = t;
                    int w_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_39 = t;
                        int y_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = FILE_1_0(_id, t);
                            ;
                            LocalPopChoice(y_39);
                          }
                        else
                          {
                            t = x_39;
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                          }
                        LocalPopChoice(w_39);
                        {
                          ATerm r_6 (ATerm t)
                          {
                            t = term_z_39;
                            return(t);
                          }
                          ATerm t_6 (ATerm t)
                          {
                            ATerm l_6 = NULL;
                            t = pass_verbose_0_0(t);
                            l_6 = t;
                            t = (ATerm) ATinsert(CheckATermList(l_6), term_a_34);
                            return(t);
                          }
                          t = xtc_transform_file_2_0(r_6, t_6, t);
                        }
                      }
                    else
                      {
                        t = v_39;
                        {
                          ATerm w_6 (ATerm t)
                          {
                            t = term_z_39;
                            return(t);
                          }
                          ATerm x_6 (ATerm t)
                          {
                            ATerm m_6 = NULL;
                            t = pass_verbose_0_0(t);
                            m_6 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_6), term_a_34);
                            return(t);
                          }
                          t = xtc_transform_term_2_0(w_6, x_6, t);
                        }
                      }
                  }
                  return(t);
                }
                t = olevel_2_0(y_5, e_6, t);
                {
                  ATerm y_6 (ATerm t)
                  {
                    ATerm z_6 (ATerm t)
                    {
                      t = term_a_40;
                      return(t);
                    }
                    t = save_as_1_0(z_6, t);
                    return(t);
                  }
                  t = if_keep4_1_0(y_6, t);
                  {
                    ATerm j_7 (ATerm t)
                    {
                      t = term_m_38;
                      return(t);
                    }
                    ATerm l_7 (ATerm t)
                    {
                      ATerm b_40 = t;
                      int c_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_40 = t;
                          int h_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(h_40);
                            }
                          else
                            {
                              t = g_40;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(c_40);
                          {
                            ATerm n_7 (ATerm t)
                            {
                              t = term_j_40;
                              return(t);
                            }
                            ATerm r_7 (ATerm t)
                            {
                              ATerm n_6 = NULL;
                              t = pass_verbose_0_0(t);
                              n_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(n_6), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(n_7, r_7, t);
                          }
                        }
                      else
                        {
                          t = b_40;
                          {
                            ATerm t_7 (ATerm t)
                            {
                              t = term_j_40;
                              return(t);
                            }
                            ATerm y_7 (ATerm t)
                            {
                              ATerm o_6 = NULL;
                              t = pass_verbose_0_0(t);
                              o_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(o_6), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(t_7, y_7, t);
                          }
                        }
                      return(t);
                    }
                    t = olevel_2_0(j_7, l_7, t);
                    {
                      ATerm k_40 = t;
                      int m_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_40 = t;
                          int p_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = FILE_1_0(_id, t);
                              ;
                              LocalPopChoice(p_40);
                            }
                          else
                            {
                              t = n_40;
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                            }
                          LocalPopChoice(m_40);
                          {
                            ATerm e_8 (ATerm t)
                            {
                              t = term_q_40;
                              return(t);
                            }
                            ATerm g_8 (ATerm t)
                            {
                              ATerm s_6 = NULL;
                              t = pass_verbose_0_0(t);
                              s_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(s_6), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_file_2_0(e_8, g_8, t);
                          }
                        }
                      else
                        {
                          t = k_40;
                          {
                            ATerm j_8 (ATerm t)
                            {
                              t = term_q_40;
                              return(t);
                            }
                            ATerm m_8 (ATerm t)
                            {
                              ATerm v_6 = NULL;
                              t = pass_verbose_0_0(t);
                              v_6 = t;
                              t = (ATerm) ATinsert(CheckATermList(v_6), term_a_34);
                              return(t);
                            }
                            t = xtc_transform_term_2_0(j_8, m_8, t);
                          }
                        }
                      {
                        ATerm t_8 (ATerm t)
                        {
                          t = term_m_38;
                          return(t);
                        }
                        ATerm u_8 (ATerm t)
                        {
                          ATerm s_40 = t;
                          int t_40 = stack_ptr;
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
                              LocalPopChoice(t_40);
                              {
                                ATerm v_8 (ATerm t)
                                {
                                  t = term_w_40;
                                  return(t);
                                }
                                ATerm x_8 (ATerm t)
                                {
                                  ATerm a_7 = NULL;
                                  t = pass_verbose_0_0(t);
                                  a_7 = t;
                                  t = (ATerm) ATinsert(CheckATermList(a_7), term_a_34);
                                  return(t);
                                }
                                t = xtc_transform_file_2_0(v_8, x_8, t);
                              }
                            }
                          else
                            {
                              t = s_40;
                              {
                                ATerm y_8 (ATerm t)
                                {
                                  t = term_w_40;
                                  return(t);
                                }
                                ATerm z_8 (ATerm t)
                                {
                                  ATerm b_7 = NULL;
                                  t = pass_verbose_0_0(t);
                                  b_7 = t;
                                  t = (ATerm) ATinsert(CheckATermList(b_7), term_a_34);
                                  return(t);
                                }
                                t = xtc_transform_term_2_0(y_8, z_8, t);
                              }
                            }
                          t = bound_unbound_vars_0_0(t);
                          {
                            ATerm z_40 = t;
                            int a_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_41 = t;
                                int d_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = FILE_1_0(_id, t);
                                    ;
                                    LocalPopChoice(d_41);
                                  }
                                else
                                  {
                                    t = c_41;
                                    if(!(match_cons(t, sym_stdin_0)))
                                      _fail(t);
                                  }
                                LocalPopChoice(a_41);
                                {
                                  ATerm a_9 (ATerm t)
                                  {
                                    t = term_f_41;
                                    return(t);
                                  }
                                  ATerm b_9 (ATerm t)
                                  {
                                    ATerm c_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    c_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(c_7), term_a_34);
                                    return(t);
                                  }
                                  t = xtc_transform_file_2_0(a_9, b_9, t);
                                }
                              }
                            else
                              {
                                t = z_40;
                                {
                                  ATerm c_9 (ATerm t)
                                  {
                                    t = term_f_41;
                                    return(t);
                                  }
                                  ATerm d_9 (ATerm t)
                                  {
                                    ATerm d_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    d_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(d_7), term_a_34);
                                    return(t);
                                  }
                                  t = xtc_transform_term_2_0(c_9, d_9, t);
                                }
                              }
                          }
                          return(t);
                        }
                        t = olevel_2_0(t_8, u_8, t);
                        {
                          ATerm e_9 (ATerm t)
                          {
                            t = term_m_38;
                            return(t);
                          }
                          ATerm f_9 (ATerm t)
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
                                {
                                  ATerm g_9 (ATerm t)
                                  {
                                    t = term_j_40;
                                    return(t);
                                  }
                                  ATerm h_9 (ATerm t)
                                  {
                                    ATerm e_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    e_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(e_7), term_a_34);
                                    return(t);
                                  }
                                  t = xtc_transform_file_2_0(g_9, h_9, t);
                                }
                              }
                            else
                              {
                                t = g_41;
                                {
                                  ATerm i_9 (ATerm t)
                                  {
                                    t = term_j_40;
                                    return(t);
                                  }
                                  ATerm j_9 (ATerm t)
                                  {
                                    ATerm f_7 = NULL;
                                    t = pass_verbose_0_0(t);
                                    f_7 = t;
                                    t = (ATerm) ATinsert(CheckATermList(f_7), term_a_34);
                                    return(t);
                                  }
                                  t = xtc_transform_term_2_0(i_9, j_9, t);
                                }
                              }
                            return(t);
                          }
                          t = olevel_2_0(e_9, f_9, t);
                          {
                            ATerm k_9 (ATerm t)
                            {
                              ATerm l_9 (ATerm t)
                              {
                                t = term_n_41;
                                return(t);
                              }
                              t = save_as_1_0(l_9, t);
                              return(t);
                            }
                            t = if_keep4_1_0(k_9, t);
                            {
                              ATerm s_9 (ATerm t)
                              {
                                t = term_g_31;
                                return(t);
                              }
                              ATerm t_9 (ATerm t)
                              {
                                ATerm o_41 = t;
                                int s_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_41 = t;
                                    int u_41 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = FILE_1_0(_id, t);
                                        ;
                                        LocalPopChoice(u_41);
                                      }
                                    else
                                      {
                                        t = t_41;
                                        if(!(match_cons(t, sym_stdin_0)))
                                          _fail(t);
                                      }
                                    LocalPopChoice(s_41);
                                    {
                                      ATerm w_9 (ATerm t)
                                      {
                                        t = term_v_41;
                                        return(t);
                                      }
                                      ATerm x_9 (ATerm t)
                                      {
                                        ATerm g_7 = NULL;
                                        t = pass_verbose_0_0(t);
                                        g_7 = t;
                                        t = (ATerm) ATinsert(CheckATermList(g_7), term_a_34);
                                        return(t);
                                      }
                                      t = xtc_transform_file_2_0(w_9, x_9, t);
                                    }
                                  }
                                else
                                  {
                                    t = o_41;
                                    {
                                      ATerm z_9 (ATerm t)
                                      {
                                        t = term_v_41;
                                        return(t);
                                      }
                                      ATerm a_10 (ATerm t)
                                      {
                                        ATerm i_7 = NULL;
                                        t = pass_verbose_0_0(t);
                                        i_7 = t;
                                        t = (ATerm) ATinsert(CheckATermList(i_7), term_a_34);
                                        return(t);
                                      }
                                      t = xtc_transform_term_2_0(z_9, a_10, t);
                                    }
                                  }
                                return(t);
                              }
                              t = olevel_2_0(s_9, t_9, t);
                              {
                                ATerm b_10 (ATerm t)
                                {
                                  t = term_g_31;
                                  return(t);
                                }
                                ATerm c_10 (ATerm t)
                                {
                                  ATerm w_41 = t;
                                  int x_41 = stack_ptr;
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
                                      LocalPopChoice(x_41);
                                      {
                                        ATerm d_10 (ATerm t)
                                        {
                                          t = term_a_42;
                                          return(t);
                                        }
                                        ATerm e_10 (ATerm t)
                                        {
                                          ATerm k_7 = NULL;
                                          t = pass_verbose_0_0(t);
                                          k_7 = t;
                                          t = (ATerm) ATinsert(CheckATermList(k_7), term_a_34);
                                          return(t);
                                        }
                                        t = xtc_transform_file_2_0(d_10, e_10, t);
                                      }
                                    }
                                  else
                                    {
                                      t = w_41;
                                      {
                                        ATerm f_10 (ATerm t)
                                        {
                                          t = term_a_42;
                                          return(t);
                                        }
                                        ATerm g_10 (ATerm t)
                                        {
                                          ATerm m_7 = NULL;
                                          t = pass_verbose_0_0(t);
                                          m_7 = t;
                                          t = (ATerm) ATinsert(CheckATermList(m_7), term_a_34);
                                          return(t);
                                        }
                                        t = xtc_transform_term_2_0(f_10, g_10, t);
                                      }
                                    }
                                  return(t);
                                }
                                t = olevel_2_0(b_10, c_10, t);
                                {
                                  ATerm i_10 (ATerm t)
                                  {
                                    ATerm j_10 (ATerm t)
                                    {
                                      t = term_b_42;
                                      return(t);
                                    }
                                    t = save_as_1_0(j_10, t);
                                    return(t);
                                  }
                                  t = if_keep2_1_0(i_10, t);
                                  {
                                    ATerm k_10 (ATerm t)
                                    {
                                      t = term_g_38;
                                      return(t);
                                    }
                                    ATerm l_10 (ATerm t)
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
                                            ATerm m_10 (ATerm t)
                                            {
                                              t = term_q_39;
                                              return(t);
                                            }
                                            ATerm r_10 (ATerm t)
                                            {
                                              ATerm o_7 = NULL;
                                              t = pass_verbose_0_0(t);
                                              o_7 = t;
                                              t = (ATerm) ATinsert(CheckATermList(o_7), term_a_34);
                                              return(t);
                                            }
                                            t = xtc_transform_file_2_0(m_10, r_10, t);
                                          }
                                        }
                                      else
                                        {
                                          t = c_42;
                                          {
                                            ATerm s_10 (ATerm t)
                                            {
                                              t = term_q_39;
                                              return(t);
                                            }
                                            ATerm t_10 (ATerm t)
                                            {
                                              ATerm q_7 = NULL;
                                              t = pass_verbose_0_0(t);
                                              q_7 = t;
                                              t = (ATerm) ATinsert(CheckATermList(q_7), term_a_34);
                                              return(t);
                                            }
                                            t = xtc_transform_term_2_0(s_10, t_10, t);
                                          }
                                        }
                                      return(t);
                                    }
                                    t = olevel_2_0(k_10, l_10, t);
                                    {
                                      ATerm u_10 (ATerm t)
                                      {
                                        t = term_g_38;
                                        return(t);
                                      }
                                      ATerm v_10 (ATerm t)
                                      {
                                        ATerm g_42 = t;
                                        int h_42 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm i_42 = t;
                                            int m_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = FILE_1_0(_id, t);
                                                ;
                                                LocalPopChoice(m_42);
                                              }
                                            else
                                              {
                                                t = i_42;
                                                if(!(match_cons(t, sym_stdin_0)))
                                                  _fail(t);
                                              }
                                            LocalPopChoice(h_42);
                                            {
                                              ATerm w_10 (ATerm t)
                                              {
                                                t = term_z_39;
                                                return(t);
                                              }
                                              ATerm y_10 (ATerm t)
                                              {
                                                ATerm s_7 = NULL;
                                                t = pass_verbose_0_0(t);
                                                s_7 = t;
                                                t = (ATerm) ATinsert(CheckATermList(s_7), term_a_34);
                                                return(t);
                                              }
                                              t = xtc_transform_file_2_0(w_10, y_10, t);
                                            }
                                          }
                                        else
                                          {
                                            t = g_42;
                                            {
                                              ATerm z_10 (ATerm t)
                                              {
                                                t = term_z_39;
                                                return(t);
                                              }
                                              ATerm a_11 (ATerm t)
                                              {
                                                ATerm u_7 = NULL;
                                                t = pass_verbose_0_0(t);
                                                u_7 = t;
                                                t = (ATerm) ATinsert(CheckATermList(u_7), term_a_34);
                                                return(t);
                                              }
                                              t = xtc_transform_term_2_0(z_10, a_11, t);
                                            }
                                          }
                                        return(t);
                                      }
                                      t = olevel_2_0(u_10, v_10, t);
                                      {
                                        ATerm b_11 (ATerm t)
                                        {
                                          ATerm c_11 (ATerm t)
                                          {
                                            t = term_n_42;
                                            return(t);
                                          }
                                          t = save_as_1_0(c_11, t);
                                          return(t);
                                        }
                                        t = if_keep5_1_0(b_11, t);
                                        {
                                          ATerm d_11 (ATerm t)
                                          {
                                            t = term_y_34;
                                            return(t);
                                          }
                                          ATerm e_11 (ATerm t)
                                          {
                                            ATerm o_42 = t;
                                            int p_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_42 = t;
                                                int s_42 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = FILE_1_0(_id, t);
                                                    ;
                                                    LocalPopChoice(s_42);
                                                  }
                                                else
                                                  {
                                                    t = q_42;
                                                    if(!(match_cons(t, sym_stdin_0)))
                                                      _fail(t);
                                                  }
                                                LocalPopChoice(p_42);
                                                {
                                                  ATerm f_11 (ATerm t)
                                                  {
                                                    t = term_j_40;
                                                    return(t);
                                                  }
                                                  ATerm g_11 (ATerm t)
                                                  {
                                                    ATerm v_7 = NULL;
                                                    t = pass_verbose_0_0(t);
                                                    v_7 = t;
                                                    t = (ATerm) ATinsert(CheckATermList(v_7), term_a_34);
                                                    return(t);
                                                  }
                                                  t = xtc_transform_file_2_0(f_11, g_11, t);
                                                }
                                              }
                                            else
                                              {
                                                t = o_42;
                                                {
                                                  ATerm h_11 (ATerm t)
                                                  {
                                                    t = term_j_40;
                                                    return(t);
                                                  }
                                                  ATerm i_11 (ATerm t)
                                                  {
                                                    ATerm w_7 = NULL;
                                                    t = pass_verbose_0_0(t);
                                                    w_7 = t;
                                                    t = (ATerm) ATinsert(CheckATermList(w_7), term_a_34);
                                                    return(t);
                                                  }
                                                  t = xtc_transform_term_2_0(h_11, i_11, t);
                                                }
                                              }
                                            return(t);
                                          }
                                          t = olevel_2_0(d_11, e_11, t);
                                          {
                                            ATerm j_11 (ATerm t)
                                            {
                                              t = term_y_34;
                                              return(t);
                                            }
                                            ATerm l_11 (ATerm t)
                                            {
                                              ATerm t_42 = t;
                                              int u_42 = stack_ptr;
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
                                                  LocalPopChoice(u_42);
                                                  {
                                                    ATerm m_11 (ATerm t)
                                                    {
                                                      t = term_w_40;
                                                      return(t);
                                                    }
                                                    ATerm n_11 (ATerm t)
                                                    {
                                                      ATerm x_7 = NULL;
                                                      t = pass_verbose_0_0(t);
                                                      x_7 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(x_7), term_a_34);
                                                      return(t);
                                                    }
                                                    t = xtc_transform_file_2_0(m_11, n_11, t);
                                                  }
                                                }
                                              else
                                                {
                                                  t = t_42;
                                                  {
                                                    ATerm o_11 (ATerm t)
                                                    {
                                                      t = term_w_40;
                                                      return(t);
                                                    }
                                                    ATerm p_11 (ATerm t)
                                                    {
                                                      ATerm z_7 = NULL;
                                                      t = pass_verbose_0_0(t);
                                                      z_7 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(z_7), term_a_34);
                                                      return(t);
                                                    }
                                                    t = xtc_transform_term_2_0(o_11, p_11, t);
                                                  }
                                                }
                                              t = bound_unbound_vars_0_0(t);
                                              {
                                                ATerm y_42 = t;
                                                int a_43 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm b_43 = t;
                                                    int c_43 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = FILE_1_0(_id, t);
                                                        ;
                                                        LocalPopChoice(c_43);
                                                      }
                                                    else
                                                      {
                                                        t = b_43;
                                                        if(!(match_cons(t, sym_stdin_0)))
                                                          _fail(t);
                                                      }
                                                    LocalPopChoice(a_43);
                                                    {
                                                      ATerm s_11 (ATerm t)
                                                      {
                                                        t = term_f_41;
                                                        return(t);
                                                      }
                                                      ATerm t_11 (ATerm t)
                                                      {
                                                        ATerm b_8 = NULL;
                                                        t = pass_verbose_0_0(t);
                                                        b_8 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(b_8), term_a_34);
                                                        return(t);
                                                      }
                                                      t = xtc_transform_file_2_0(s_11, t_11, t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_42;
                                                    {
                                                      ATerm v_11 (ATerm t)
                                                      {
                                                        t = term_f_41;
                                                        return(t);
                                                      }
                                                      ATerm w_11 (ATerm t)
                                                      {
                                                        ATerm c_8 = NULL;
                                                        t = pass_verbose_0_0(t);
                                                        c_8 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(c_8), term_a_34);
                                                        return(t);
                                                      }
                                                      t = xtc_transform_term_2_0(v_11, w_11, t);
                                                    }
                                                  }
                                              }
                                              return(t);
                                            }
                                            t = olevel_2_0(j_11, l_11, t);
                                            {
                                              ATerm a_12 (ATerm t)
                                              {
                                                ATerm b_12 (ATerm t)
                                                {
                                                  t = term_e_43;
                                                  return(t);
                                                }
                                                t = save_as_1_0(b_12, t);
                                                return(t);
                                              }
                                              t = if_keep3_1_0(a_12, t);
                                              {
                                                ATerm c_12 (ATerm t)
                                                {
                                                  t = term_i_37;
                                                  return(t);
                                                }
                                                ATerm d_12 (ATerm t)
                                                {
                                                  ATerm f_43 = t;
                                                  int g_43 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_43 = t;
                                                      int j_43 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = FILE_1_0(_id, t);
                                                          ;
                                                          LocalPopChoice(j_43);
                                                        }
                                                      else
                                                        {
                                                          t = i_43;
                                                          if(!(match_cons(t, sym_stdin_0)))
                                                            _fail(t);
                                                        }
                                                      LocalPopChoice(g_43);
                                                      {
                                                        ATerm h_12 (ATerm t)
                                                        {
                                                          t = term_j_40;
                                                          return(t);
                                                        }
                                                        ATerm o_12 (ATerm t)
                                                        {
                                                          ATerm d_8 = NULL;
                                                          t = pass_verbose_0_0(t);
                                                          d_8 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(d_8), term_a_34);
                                                          return(t);
                                                        }
                                                        t = xtc_transform_file_2_0(h_12, o_12, t);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      t = f_43;
                                                      {
                                                        ATerm p_12 (ATerm t)
                                                        {
                                                          t = term_j_40;
                                                          return(t);
                                                        }
                                                        ATerm q_12 (ATerm t)
                                                        {
                                                          ATerm f_8 = NULL;
                                                          t = pass_verbose_0_0(t);
                                                          f_8 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(f_8), term_a_34);
                                                          return(t);
                                                        }
                                                        t = xtc_transform_term_2_0(p_12, q_12, t);
                                                      }
                                                    }
                                                  return(t);
                                                }
                                                t = olevel_2_0(c_12, d_12, t);
                                                {
                                                  ATerm r_12 (ATerm t)
                                                  {
                                                    ATerm s_12 (ATerm t)
                                                    {
                                                      t = term_k_43;
                                                      return(t);
                                                    }
                                                    t = save_as_1_0(s_12, t);
                                                    return(t);
                                                  }
                                                  t = if_keep1_1_0(r_12, t);
                                                  {
                                                    ATerm u_12 (ATerm t)
                                                    {
                                                      t = term_i_37;
                                                      return(t);
                                                    }
                                                    ATerm w_12 (ATerm t)
                                                    {
                                                      ATerm m_43 = t;
                                                      int n_43 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_43 = t;
                                                          int q_43 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = FILE_1_0(_id, t);
                                                              ;
                                                              LocalPopChoice(q_43);
                                                            }
                                                          else
                                                            {
                                                              t = o_43;
                                                              if(!(match_cons(t, sym_stdin_0)))
                                                                _fail(t);
                                                            }
                                                          LocalPopChoice(n_43);
                                                          {
                                                            ATerm x_12 (ATerm t)
                                                            {
                                                              t = term_r_43;
                                                              return(t);
                                                            }
                                                            ATerm h_13 (ATerm t)
                                                            {
                                                              ATerm h_8 = NULL;
                                                              t = pass_verbose_0_0(t);
                                                              h_8 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(h_8), term_a_34);
                                                              return(t);
                                                            }
                                                            t = xtc_transform_file_2_0(x_12, h_13, t);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = m_43;
                                                          {
                                                            ATerm i_13 (ATerm t)
                                                            {
                                                              t = term_r_43;
                                                              return(t);
                                                            }
                                                            ATerm j_13 (ATerm t)
                                                            {
                                                              ATerm i_8 = NULL;
                                                              t = pass_verbose_0_0(t);
                                                              i_8 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(i_8), term_a_34);
                                                              return(t);
                                                            }
                                                            t = xtc_transform_term_2_0(i_13, j_13, t);
                                                          }
                                                        }
                                                      return(t);
                                                    }
                                                    t = olevel_2_0(u_12, w_12, t);
                                                    {
                                                      ATerm v_13 (ATerm t)
                                                      {
                                                        ATerm w_13 (ATerm t)
                                                        {
                                                          t = term_s_43;
                                                          return(t);
                                                        }
                                                        t = save_as_1_0(w_13, t);
                                                        return(t);
                                                      }
                                                      t = if_keep1_1_0(v_13, t);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
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
    t = profile_p__2_0(y_3, z_3, t);
  }
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
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
      LocalPopChoice(v_43);
      {
        ATerm x_13 (ATerm t)
        {
          t = term_y_43;
          return(t);
        }
        ATerm z_13 (ATerm t)
        {
          ATerm k_8 = NULL;
          t = pass_verbose_0_0(t);
          k_8 = t;
          t = (ATerm) ATinsert(CheckATermList(k_8), term_a_34);
          return(t);
        }
        t = xtc_transform_file_2_0(x_13, z_13, t);
      }
    }
  else
    {
      t = u_43;
      {
        ATerm d_14 (ATerm t)
        {
          t = term_y_43;
          return(t);
        }
        ATerm e_14 (ATerm t)
        {
          ATerm l_8 = NULL;
          t = pass_verbose_0_0(t);
          l_8 = t;
          t = (ATerm) ATinsert(CheckATermList(l_8), term_a_34);
          return(t);
        }
        t = xtc_transform_term_2_0(d_14, e_14, t);
      }
    }
  {
    ATerm k_14 (ATerm t)
    {
      ATerm m_14 (ATerm t)
      {
        t = term_z_43;
        return(t);
      }
      t = save_as_1_0(m_14, t);
      return(t);
    }
    t = if_keep2_1_0(k_14, t);
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
  t = term_a_44;
  {
    ATerm b_44 = t;
    int c_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm d_44 = t;
          int e_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_11 = NULL;
              t = eval_config_0_0(t);
              k_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_11);
              t = k_11;
              ;
              LocalPopChoice(e_44);
            }
          else
            {
              t = d_44;
            }
        }
        ;
        LocalPopChoice(c_44);
      }
    else
      {
        t = b_44;
        t = term_i_37;
      }
    n_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_8, term_i_37);
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(n_8, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          t = SSL_subtr(n_8, (ATerm) ATmakeInt(1));
        }
      p_8 = t;
      t = SSL_int_to_string(p_8);
      o_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_8), term_a_44);
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
  ATerm q_8 = NULL;
  ATerm n_14 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    t = SSL_explode_string(r_8);
    return(t);
  }
  t = map_1_0(n_14, t);
  t = concat_0_0(t);
  q_8 = t;
  t = SSL_implode_string(q_8);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_9 = ATgetArgument(t, 0);
      {
        ATerm n_12 = NULL;
        t = SSL_int_to_string(o_9);
        n_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_44), n_12), term_i_44);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm q_14 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_9 = ATgetArgument(t, 0);
          q_9 = ATgetArgument(t, 1);
          r_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_9);
      q_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_9), term_l_44), q_14), term_k_44), o_9);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm u_9 = NULL;
  ATerm r_14 (ATerm t)
  {
    t = u_93(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    return(t);
  }
  t = fetch_1_0(r_14, t);
  t = not_null(u_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    ATerm m_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_48), term_v_48), term_r_48), term_n_48), term_k_48), term_g_48), term_c_48), term_y_47), term_u_47), term_q_47), term_m_47), term_i_47), term_e_47), term_a_47), term_w_46), term_s_46), term_o_46), term_l_46), term_h_46), term_d_46), term_z_45), term_v_45), term_r_45), term_m_45), term_g_45), term_b_45), term_x_44), term_t_44);
        {
          ATerm s_14 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm a_49 = ATgetArgument(t, 0);
                if((v_9 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm b_49 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(s_14, t);
        }
        ;
        LocalPopChoice(o_44);
      }
    else
      {
        t = m_44;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm c_49 = t;
    int d_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL,v_14 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_49 = ATgetArgument(t, 0);
            h_10 = ATgetArgument(t, 1);
            {
              ATerm f_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_10;
        {
          ATerm g_49 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_49;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          v_14 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, v_14), term_h_49));
        }
        ;
        LocalPopChoice(d_49);
      }
    else
      {
        t = c_49;
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
ATerm fork_and_wait_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL;
  n_10 = t;
  t = fork_0_0(t);
  p_10 = t;
  {
    ATerm i_49 = t;
    int j_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_10;
        t = u_108(t);
        ;
        LocalPopChoice(j_49);
      }
    else
      {
        t = i_49;
        t = SSL_waitpid(p_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_49 = ATgetArgument(t, 0);
            if(((ATgetType(k_49) != AT_INT) || (ATgetInt((ATermInt) k_49) != 0)))
              _fail(t);
            {
              ATerm l_49 = ATgetArgument(t, 1);
            }
            {
              ATerm m_49 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_10;
      }
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  q_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_17 = NULL,n_17 = NULL,w_18 = NULL,y_18 = NULL;
      t = q_11;
      t = xtc_new_file_0_0(t);
      l_17 = t;
      t = n_0(t);
      n_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_17, (ATerm) ATinsert(ATinsert(ATempty, l_17), term_u_31));
      {
        ATerm n_49 = t;
        int o_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm p_49 = ATgetArgument(t, 0);
                ATerm q_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_17;
            {
              ATerm t_14 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, l_17), term_u_31);
                return(t);
              }
              t = at_end_1_0(t_14, t);
            }
            ;
            LocalPopChoice(o_49);
          }
        else
          {
            t = n_49;
            {
              ATerm s_18 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_17, (ATerm) ATinsert(ATinsert(ATempty, l_17), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm r_49 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_49) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  s_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_18;
              t = concat_0_0(t);
            }
          }
        w_18 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_18, w_18);
        {
          ATerm w_14 (ATerm t)
          {
            t = SSL_execvp(y_18, w_18);
            return(t);
          }
          t = fork_and_wait_1_0(w_14, t);
          t = SSL_close_file(l_17);
          t = (ATerm) ATmakeAppl(sym_FILE_1, l_17);
        }
      }
    }
  else
    {
      ATerm v_19 = NULL,w_19 = NULL,l_22 = NULL,m_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_11;
      t = xtc_new_file_0_0(t);
      v_19 = t;
      t = n_0(t);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_19), term_u_31), r_11), term_s_49));
      {
        ATerm t_49 = t;
        int u_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm v_49 = ATgetArgument(t, 0);
                ATerm w_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_19;
            {
              ATerm x_14 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_19), term_u_31), r_11), term_s_49);
                return(t);
              }
              t = at_end_1_0(x_14, t);
            }
            ;
            LocalPopChoice(u_49);
          }
        else
          {
            t = t_49;
            {
              ATerm j_21 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), r_11), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm x_49 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_49) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  j_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_21;
              t = concat_0_0(t);
            }
          }
        l_22 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_22, l_22);
        {
          ATerm z_14 (ATerm t)
          {
            t = SSL_execvp(m_22, l_22);
            return(t);
          }
          t = fork_and_wait_1_0(z_14, t);
          t = SSL_close_file(v_19);
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_19);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  z_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  u_11 = t;
  t = x_11;
  t = q_77(t);
  y_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, y_11), u_11);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_50 = t;
      int b_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(b_50);
        }
      else
        {
          t = a_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(z_49);
      {
        ATerm b_15 (ATerm t)
        {
          t = term_c_50;
          return(t);
        }
        ATerm f_15 (ATerm t)
        {
          ATerm e_12 = NULL,f_12 = NULL;
          t = pass_verbose_0_0(t);
          e_12 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
          {
            ATerm d_50 = t;
            int e_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_23 = NULL;
                t = eval_config_0_0(t);
                c_23 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), c_23);
                t = c_23;
                ;
                LocalPopChoice(e_50);
              }
            else
              {
                t = d_50;
              }
            {
              ATerm g_15 (ATerm t)
              {
                ATerm g_12 = NULL;
                g_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, g_12), term_f_50);
                return(t);
              }
              t = map_1_0(g_15, t);
              f_12 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(f_12), (ATerm) ATinsert(ATempty, term_a_34)), e_12);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_file_2_0(b_15, f_15, t);
      }
    }
  else
    {
      t = y_49;
      {
        ATerm h_15 (ATerm t)
        {
          t = term_c_50;
          return(t);
        }
        ATerm i_15 (ATerm t)
        {
          ATerm i_12 = NULL,j_12 = NULL;
          t = pass_verbose_0_0(t);
          i_12 = t;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
          {
            ATerm g_50 = t;
            int h_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_23 = NULL;
                t = eval_config_0_0(t);
                p_23 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), p_23);
                t = p_23;
                ;
                LocalPopChoice(h_50);
              }
            else
              {
                t = g_50;
              }
            {
              ATerm j_15 (ATerm t)
              {
                ATerm k_12 = NULL;
                k_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, k_12), term_f_50);
                return(t);
              }
              t = map_1_0(j_15, t);
              j_12 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(j_12), (ATerm) ATinsert(ATempty, term_a_34)), i_12);
              t = concat_0_0(t);
            }
          }
          return(t);
        }
        t = xtc_transform_term_2_0(h_15, i_15, t);
      }
    }
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_50 = t;
      int l_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_50);
        }
      else
        {
          t = k_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(j_50);
      {
        ATerm m_15 (ATerm t)
        {
          t = term_m_50;
          return(t);
        }
        ATerm o_15 (ATerm t)
        {
          ATerm l_12 = NULL;
          t = pass_verbose_0_0(t);
          l_12 = t;
          t = (ATerm) ATinsert(CheckATermList(l_12), term_a_34);
          return(t);
        }
        t = xtc_transform_file_2_0(m_15, o_15, t);
      }
    }
  else
    {
      t = i_50;
      {
        ATerm q_15 (ATerm t)
        {
          t = term_m_50;
          return(t);
        }
        ATerm r_15 (ATerm t)
        {
          ATerm m_12 = NULL;
          t = pass_verbose_0_0(t);
          m_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_12), term_a_34);
          return(t);
        }
        t = xtc_transform_term_2_0(q_15, r_15, t);
      }
    }
  {
    ATerm v_15 (ATerm t)
    {
      ATerm w_15 (ATerm t)
      {
        t = term_n_50;
        return(t);
      }
      t = save_as_1_0(w_15, t);
      return(t);
    }
    t = if_keep2_1_0(v_15, t);
  }
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL,y_25 = NULL;
      t_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)));
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_26 = NULL;
            t = eval_config_0_0(t);
            v_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), v_26);
            t = v_26;
            ;
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
          }
        t = t_12;
        {
          ATerm s_50 = t;
          int t_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_50 = t;
              int v_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_50 = t;
                  int x_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(x_50);
                    }
                  else
                    {
                      t = w_50;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(v_50);
                  {
                    ATerm y_15 (ATerm t)
                    {
                      t = term_y_50;
                      return(t);
                    }
                    ATerm z_15 (ATerm t)
                    {
                      ATerm a_26 = NULL;
                      t = pass_verbose_0_0(t);
                      a_26 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_26), term_a_34);
                      return(t);
                    }
                    t = xtc_transform_file_2_0(y_15, z_15, t);
                  }
                }
              else
                {
                  t = u_50;
                  {
                    ATerm a_16 (ATerm t)
                    {
                      t = term_y_50;
                      return(t);
                    }
                    ATerm b_16 (ATerm t)
                    {
                      ATerm g_26 = NULL;
                      t = pass_verbose_0_0(t);
                      g_26 = t;
                      t = (ATerm) ATinsert(CheckATermList(g_26), term_a_34);
                      return(t);
                    }
                    t = xtc_transform_term_2_0(a_16, b_16, t);
                  }
                }
              ;
              LocalPopChoice(t_50);
            }
          else
            {
              t = s_50;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue))));
              t = SSL_exit((ATerm) ATmakeInt(1));
              t = (ATerm) ATinsert(ATempty, term_z_50);
            }
          {
            ATerm c_16 (ATerm t)
            {
              ATerm f_27 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
              {
                ATerm a_51 = t;
                int b_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_27 = NULL;
                    t = eval_config_0_0(t);
                    u_27 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), u_27);
                    t = u_27;
                    ;
                    LocalPopChoice(b_51);
                  }
                else
                  {
                    t = a_51;
                  }
                f_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_27, term_c_51);
                t = conc_strings_0_0(t);
              }
              return(t);
            }
            t = copy_to_1_0(c_16, t);
            y_25 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue)))));
            t = y_25;
            t = xtc_io_exit_0_0(t);
          }
        }
      }
      ;
      LocalPopChoice(p_50);
    }
  else
    {
      t = o_50;
    }
  return(t);
}
ATerm if_keep2_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12 = NULL,y_12 = NULL;
      v_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm f_51 = t;
        int g_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_28 = NULL;
            t = eval_config_0_0(t);
            h_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_28);
            t = h_28;
            ;
            LocalPopChoice(g_51);
          }
        else
          {
            t = f_51;
          }
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_12, term_g_31);
        t = geq_0_0(t);
        t = v_12;
        t = d_108(t);
      }
      ;
      LocalPopChoice(e_51);
    }
  else
    {
      t = d_51;
    }
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm h_51 = t;
  int i_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_51 = t;
      int k_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_51);
        }
      else
        {
          t = j_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(i_51);
      {
        ATerm d_16 (ATerm t)
        {
          t = term_l_51;
          return(t);
        }
        ATerm e_16 (ATerm t)
        {
          ATerm z_12 = NULL;
          t = pass_verbose_0_0(t);
          z_12 = t;
          t = (ATerm) ATinsert(CheckATermList(z_12), term_a_34);
          return(t);
        }
        t = xtc_transform_file_2_0(d_16, e_16, t);
      }
    }
  else
    {
      t = h_51;
      {
        ATerm f_16 (ATerm t)
        {
          t = term_l_51;
          return(t);
        }
        ATerm g_16 (ATerm t)
        {
          ATerm a_13 = NULL;
          t = pass_verbose_0_0(t);
          a_13 = t;
          t = (ATerm) ATinsert(CheckATermList(a_13), term_a_34);
          return(t);
        }
        t = xtc_transform_term_2_0(f_16, g_16, t);
      }
    }
  {
    ATerm h_16 (ATerm t)
    {
      ATerm i_16 (ATerm t)
      {
        t = term_m_51;
        return(t);
      }
      t = save_as_1_0(i_16, t);
      return(t);
    }
    t = if_keep2_1_0(h_16, t);
  }
  return(t);
}
ATerm save_as_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  {
    ATerm j_16 (ATerm t)
    {
      ATerm j_28 = NULL,k_28 = NULL;
      t = m_85(t);
      j_28 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
      {
        ATerm n_51 = t;
        int o_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_28 = NULL;
            t = eval_config_0_0(t);
            r_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), r_28);
            t = r_28;
            ;
            LocalPopChoice(o_51);
          }
        else
          {
            t = n_51;
          }
        k_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_28, j_28);
        t = conc_strings_0_0(t);
        if(((c_13 != NULL) && (c_13 != t)))
          _fail(t);
        else
          c_13 = t;
      }
      return(t);
    }
    t = copy_to_1_0(j_16, t);
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
          {
            ATerm k_16 (ATerm t)
            {
              t = term_t_51;
              return(t);
            }
            ATerm l_16 (ATerm t)
            {
              ATerm e_13 = NULL;
              t = pass_verbose_0_0(t);
              e_13 = t;
              t = (ATerm) ATinsert(CheckATermList(e_13), term_u_51);
              return(t);
            }
            t = xtc_transform_file_2_0(k_16, l_16, t);
          }
        }
      else
        {
          t = p_51;
          {
            ATerm m_16 (ATerm t)
            {
              t = term_t_51;
              return(t);
            }
            ATerm n_16 (ATerm t)
            {
              ATerm f_13 = NULL;
              t = pass_verbose_0_0(t);
              f_13 = t;
              t = (ATerm) ATinsert(CheckATermList(f_13), term_u_51);
              return(t);
            }
            t = xtc_transform_term_2_0(m_16, n_16, t);
          }
        }
      {
        ATerm p_16 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), term_v_51);
          t = conc_strings_0_0(t);
          if(((d_13 != NULL) && (d_13 != t)))
            _fail(t);
          else
            d_13 = t;
          return(t);
        }
        t = copy_to_1_0(p_16, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_13)), (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue))), not_null(c_13)), (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue)))));
        t = b_13;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm w_51 = t;
  int x_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,k_13 = NULL;
      g_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm y_51 = t;
        int z_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_29 = NULL;
            t = eval_config_0_0(t);
            n_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), n_29);
            t = n_29;
            ;
            LocalPopChoice(z_51);
          }
        else
          {
            t = y_51;
          }
        k_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_13, term_y_34);
        t = geq_0_0(t);
        t = g_13;
        t = e_108(t);
      }
      ;
      LocalPopChoice(x_51);
    }
  else
    {
      t = w_51;
    }
  return(t);
}
ATerm AddMain_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym_Specification_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = term_a_52;
  t = l_85(t);
  m_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(l_13), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_b_52, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_13), (ATerm) ATempty))))));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      n_13 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_13, term_c_52);
  t = open_stream_0_0(t);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_13, o_13);
  t = x_105(t);
  t = fclose_0_0(t);
  t = o_13;
  return(t);
}
ATerm assert_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_104(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_13, q_13, r_13);
  t = table_push_0_0(t);
  {
    ATerm d_52 = t;
    int e_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_13, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_52);
      }
    else
      {
        t = d_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_13 = ATgetFirst((ATermList) t);
        u_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_13, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_13), (ATerm) ATinsert(CheckATermList(t_13), q_13)));
    t = (ATerm) ATmakeAppl(sym__2, q_13, r_13);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm i_14 (ATerm y_13, ATerm t)
  {
    t = y_13;
    {
      ATerm f_52 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_52 = ATgetArgument(t, 0);
              ATerm h_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_52;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, y_13, term_c_52);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm j_14 (ATerm a_14, ATerm b_14, ATerm c_14, ATerm t)
  {
    t = SSL_open_file(a_14, b_14);
    return(t);
  }
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
      {
        ATerm i_52 = t;
        int j_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_14(f_14, t);
            ;
            LocalPopChoice(j_52);
          }
        else
          {
            t = i_52;
            t = j_14(g_14, h_14, f_14, t);
          }
      }
    }
  else
    {
      t = i_14(f_14, t);
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
  ATerm l_14 = NULL;
  t = term_a_52;
  t = new_0_0(t);
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_14, term_k_52);
  t = conc_strings_0_0(t);
  {
    ATerm l_52 = t;
    int m_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL;
        o_14 = t;
        t = SSL_access(o_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_52);
      }
    else
      {
        t = l_52;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  t = new_file_0_0(t);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_14, term_c_52);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, u_14, term_a_52);
  {
    ATerm r_16 (ATerm t)
    {
      t = term_n_52;
      return(t);
    }
    t = assert_1_0(r_16, t);
    t = u_14;
  }
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_14 = NULL,a_15 = NULL;
  y_14 = t;
  t = xtc_new_file_0_0(t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_15, y_14);
  {
    ATerm s_16 (ATerm t)
    {
      ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm o_52 = ATgetArgument(t, 0);
          if(match_cons(o_52, sym_Stream_1))
            {
              c_15 = ATgetArgument(o_52, 0);
            }
          else
            _fail(t);
          d_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(c_15, d_15);
      e_15 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
      return(t);
    }
    t = WriteToFile_1_0(s_16, t);
    t = SSL_close_file(a_15);
    t = (ATerm) ATmakeAppl(sym_FILE_1, a_15);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = k_15;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(l_15, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
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
  ATerm n_15 = NULL;
  ATerm p_52 = t;
  int q_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL;
      p_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)));
      {
        ATerm r_52 = t;
        int s_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_30 = NULL;
            t = eval_config_0_0(t);
            y_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), y_30);
            t = y_30;
            ;
            LocalPopChoice(s_52);
          }
        else
          {
            t = r_52;
          }
        n_15 = t;
        {
          ATerm t_16 (ATerm t)
          {
            ATerm z_30 = NULL;
            z_30 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_30), (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue))));
            t = z_30;
            return(t);
          }
          t = if_verbose2_1_0(t_16, t);
          t = p_15;
          {
            ATerm u_16 (ATerm t)
            {
              ATerm w_16 (ATerm t)
              {
                t = n_15;
                return(t);
              }
              t = AddMain_1_0(w_16, t);
              return(t);
            }
            t = xtc_io_transform_1_0(u_16, t);
          }
        }
      }
      ;
      LocalPopChoice(q_52);
    }
  else
    {
      t = p_52;
    }
  {
    ATerm b_17 (ATerm t)
    {
      ATerm d_17 (ATerm t)
      {
        t = term_t_52;
        return(t);
      }
      t = save_as_1_0(d_17, t);
      return(t);
    }
    t = if_keep3_1_0(b_17, t);
  }
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  ATerm e_17 (ATerm t)
  {
    ATerm u_15 = NULL;
    u_15 = t;
    t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_15 != NULL) && (s_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_15 = ATgetFirst((ATermList) t);
        {
          ATerm u_52 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(s_15);
    {
      ATerm s_17 (ATerm t)
      {
        ATerm v_52 = t;
        int w_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_15 = NULL;
            x_15 = t;
            t = SSL_remove(x_15);
            ;
            LocalPopChoice(w_52);
          }
        else
          {
            t = v_52;
          }
        return(t);
      }
      t = map_1_0(s_17, t);
      t = u_15;
      {
        ATerm u_17 (ATerm t)
        {
          t = term_n_52;
          return(t);
        }
        t = end_scope_1_0(u_17, t);
      }
    }
    return(t);
  }
  t = repeat_1_0(e_17, t);
  t_15 = t;
  t = SSL_exit(t_15);
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm x_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
        {
          ATerm z_52 = t;
          int a_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_31 = NULL;
              t = eval_config_0_0(t);
              j_31 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_31);
              t = j_31;
              ;
              LocalPopChoice(a_53);
            }
          else
            {
              t = z_52;
            }
        }
        ;
        LocalPopChoice(y_52);
      }
    else
      {
        t = x_52;
        t = term_e_33;
      }
    return(t);
  }
  t = copy_to_1_0(f_18, t);
  t = term_w_30;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_53 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_31 = NULL;
        t = o_16;
        t = o_0(t);
        w_31 = t;
        {
          ATerm d_53 = t;
          int e_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(e_53);
            }
          else
            {
              t = d_53;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(q_16, w_31);
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
        }
        ;
        LocalPopChoice(c_53);
      }
    else
      {
        t = b_53;
        {
          ATerm f_53 = t;
          int g_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL;
              t = o_16;
              t = o_0(t);
              o_32 = t;
              {
                ATerm h_53 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_53 = t;
                    int j_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_53);
                      }
                    else
                      {
                        t = i_53;
                        {
                          ATerm k_53 = t;
                          int l_53 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_53);
                            }
                          else
                            {
                              t = k_53;
                              {
                                ATerm q_32 = NULL;
                                q_32 = t;
                                if((q_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = q_32;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_53;
                  }
                t = SSL_copy(q_16, o_32);
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
              }
              ;
              LocalPopChoice(g_53);
            }
          else
            {
              t = f_53;
              t = o_16;
              t = o_0(t);
              if((q_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_16);
            }
        }
      }
  }
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm m_53 = t;
  int n_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_16 = NULL,x_16 = NULL;
      v_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)));
      {
        ATerm o_53 = t;
        int p_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_33 = NULL;
            t = eval_config_0_0(t);
            c_33 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), c_33);
            t = c_33;
            ;
            LocalPopChoice(p_53);
          }
        else
          {
            t = o_53;
          }
        t = v_16;
        {
          ATerm g_18 (ATerm t)
          {
            ATerm g_33 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
            {
              ATerm q_53 = t;
              int r_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_34 = NULL;
                  t = eval_config_0_0(t);
                  e_34 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), e_34);
                  t = e_34;
                  ;
                  LocalPopChoice(r_53);
                }
              else
                {
                  t = q_53;
                }
              g_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_33, term_s_53);
              t = conc_strings_0_0(t);
            }
            return(t);
          }
          t = copy_to_1_0(g_18, t);
          x_16 = t;
          t = (ATerm) ATinsert(ATempty, term_t_53);
          t = echo_0_0(t);
          t = x_16;
          t = xtc_io_exit_0_0(t);
        }
      }
      ;
      LocalPopChoice(n_53);
    }
  else
    {
      t = m_53;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  t = term_u_53;
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
        {
          ATerm x_53 = t;
          int y_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_34 = NULL;
              t = eval_config_0_0(t);
              q_34 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_34);
              t = q_34;
              ;
              LocalPopChoice(y_53);
            }
          else
            {
              t = x_53;
            }
        }
        ;
        LocalPopChoice(w_53);
      }
    else
      {
        t = v_53;
        t = term_i_37;
      }
    y_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_16, term_i_37);
    {
      ATerm z_53 = t;
      int a_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(y_16, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(a_54);
        }
      else
        {
          t = z_53;
          t = SSL_subtr(y_16, (ATerm) ATmakeInt(1));
        }
      a_17 = t;
      t = SSL_int_to_string(a_17);
      z_16 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, z_16), term_u_53);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm b_54 = t;
  int c_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL,f_17 = NULL;
      c_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_54 = t;
        int e_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_35 = NULL;
            t = eval_config_0_0(t);
            r_35 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_35);
            t = r_35;
            ;
            LocalPopChoice(e_54);
          }
        else
          {
            t = d_54;
          }
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_17, term_y_34);
        t = geq_0_0(t);
        t = c_17;
        t = c_107(t);
      }
      ;
      LocalPopChoice(c_54);
    }
  else
    {
      t = b_54;
    }
  return(t);
}
ATerm basename_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  g_17 = t;
  t = SSL_explode_string(g_17);
  {
    ATerm f_54 = t;
    int g_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 (ATerm t)
        {
          ATerm h_54 = t;
          int i_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, i_17, t);
              ;
              LocalPopChoice(i_54);
            }
          else
            {
              t = h_54;
              {
                ATerm j_54 = t;
                int k_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_18 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(h_18, _id, t);
                    ;
                    LocalPopChoice(k_54);
                  }
                else
                  {
                    t = j_54;
                    {
                      ATerm i_18 (ATerm t)
                      {
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2_0(i_18, f_102, t);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = i_17(t);
        ;
        LocalPopChoice(g_54);
      }
    else
      {
        t = f_54;
      }
    h_17 = t;
    t = SSL_implode_string(h_17);
  }
  return(t);
}
ATerm get_infile_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_17;
  t = basename_1_0(_id, t);
  k_17 = t;
  {
    ATerm j_18 (ATerm t)
    {
      ATerm t_35 = NULL;
      t_35 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_35), (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue))));
      t = t_35;
      return(t);
    }
    t = if_verbose3_1_0(j_18, t);
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue)), k_17);
    t = (ATerm) ATmakeAppl(sym__3, term_l_54, term_m_54, k_17);
    {
      ATerm n_54 = t;
      int o_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
          {
            ATerm p_54 = t;
            int q_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_36 = NULL;
                t = eval_config_0_0(t);
                q_36 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_36);
                t = q_36;
                ;
                LocalPopChoice(q_54);
              }
            else
              {
                t = p_54;
              }
            t = basename_1_0(_id, t);
          }
          ;
          LocalPopChoice(o_54);
        }
      else
        {
          t = n_54;
          t = k_17;
        }
      m_17 = t;
      {
        ATerm l_18 (ATerm t)
        {
          ATerm r_36 = NULL;
          r_36 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_36), (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue))));
          t = r_36;
          return(t);
        }
        t = if_verbose3_1_0(l_18, t);
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), m_17);
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_17);
      }
    }
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  t = get_infile_0_0(t);
  {
    ATerm r_54 = t;
    int s_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_54 = t;
        int u_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(u_54);
          }
        else
          {
            t = t_54;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(s_54);
        {
          ATerm m_18 (ATerm t)
          {
            t = term_v_54;
            return(t);
          }
          ATerm n_18 (ATerm t)
          {
            ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,t_17 = NULL;
            o_17 = t;
            {
              ATerm w_54 = t;
              int x_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
                  {
                    ATerm y_54 = t;
                    int z_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_36 = NULL;
                        t = eval_config_0_0(t);
                        x_36 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_36);
                        t = x_36;
                        ;
                        LocalPopChoice(z_54);
                      }
                    else
                      {
                        t = y_54;
                      }
                  }
                  ;
                  LocalPopChoice(x_54);
                }
              else
                {
                  t = w_54;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                  {
                    ATerm a_55 = t;
                    int b_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_37 = NULL;
                        t = eval_config_0_0(t);
                        b_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), b_37);
                        t = b_37;
                        ;
                        LocalPopChoice(b_55);
                      }
                    else
                      {
                        t = a_55;
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
                ATerm c_55 = t;
                int d_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_37 = NULL;
                    t = eval_config_0_0(t);
                    f_37 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), f_37);
                    t = f_37;
                    ;
                    LocalPopChoice(d_55);
                  }
                else
                  {
                    t = c_55;
                  }
                t_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_17), q_17), t_17), (ATerm) ATinsert(ATinsert(ATempty, p_17), term_e_55));
                t = concat_0_0(t);
              }
            }
            return(t);
          }
          t = xtc_transform_file_2_0(m_18, n_18, t);
        }
      }
    else
      {
        t = r_54;
        {
          ATerm q_18 (ATerm t)
          {
            t = term_v_54;
            return(t);
          }
          ATerm t_18 (ATerm t)
          {
            ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
            v_17 = t;
            {
              ATerm f_55 = t;
              int g_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
                  {
                    ATerm h_55 = t;
                    int i_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_37 = NULL;
                        t = eval_config_0_0(t);
                        j_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), j_37);
                        t = j_37;
                        ;
                        LocalPopChoice(i_55);
                      }
                    else
                      {
                        t = h_55;
                      }
                  }
                  ;
                  LocalPopChoice(g_55);
                }
              else
                {
                  t = f_55;
                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)));
                  {
                    ATerm j_55 = t;
                    int k_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_37 = NULL;
                        t = eval_config_0_0(t);
                        n_37 = t;
                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue)), n_37);
                        t = n_37;
                        ;
                        LocalPopChoice(k_55);
                      }
                    else
                      {
                        t = j_55;
                      }
                  }
                }
              w_17 = t;
              t = v_17;
              t = pass_verbose_0_0(t);
              x_17 = t;
              t = v_17;
              t = pass_keep_0_0(t);
              y_17 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
              {
                ATerm l_55 = t;
                int m_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_37 = NULL;
                    t = eval_config_0_0(t);
                    r_37 = t;
                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), r_37);
                    t = r_37;
                    ;
                    LocalPopChoice(m_55);
                  }
                else
                  {
                    t = l_55;
                  }
                z_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_17), x_17), z_17), (ATerm) ATinsert(ATinsert(ATempty, w_17), term_e_55));
                t = concat_0_0(t);
              }
            }
            return(t);
          }
          t = xtc_transform_term_2_0(q_18, t_18, t);
        }
      }
  }
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm s_37 = NULL;
    s_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_37), (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue))));
    t = s_37;
    return(t);
  }
  t = if_verbose2_1_0(u_18, t);
  {
    ATerm v_18 (ATerm t)
    {
      ATerm b_19 (ATerm t)
      {
        ATerm a_18 = NULL;
        a_18 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(a_18), (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(CheckATermList(a_18), term_n_55));
        return(t);
      }
      t = if_verbose1_1_0(b_19, t);
      return(t);
    }
    ATerm a_19 (ATerm t)
    {
      t = parse_0_0(t);
      t = output_ast_0_0(t);
      t = add_main_0_0(t);
      {
        ATerm o_55 = t;
        int p_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_55 = t;
            int r_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(r_55);
              }
            else
              {
                t = q_55;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(p_55);
            {
              ATerm c_19 (ATerm t)
              {
                t = term_s_55;
                return(t);
              }
              ATerm d_19 (ATerm t)
              {
                ATerm b_18 = NULL;
                t = pass_verbose_0_0(t);
                b_18 = t;
                t = (ATerm) ATinsert(ATempty, b_18);
                t = concat_0_0(t);
                return(t);
              }
              t = xtc_transform_file_2_0(c_19, d_19, t);
            }
          }
        else
          {
            t = o_55;
            {
              ATerm e_19 (ATerm t)
              {
                t = term_s_55;
                return(t);
              }
              ATerm f_19 (ATerm t)
              {
                ATerm c_18 = NULL;
                t = pass_verbose_0_0(t);
                c_18 = t;
                t = (ATerm) ATinsert(ATempty, c_18);
                t = concat_0_0(t);
                return(t);
              }
              t = xtc_transform_term_2_0(e_19, f_19, t);
            }
          }
        t = frontend_0_0(t);
        t = output_frontend_0_0(t);
        t = extract_0_0(t);
        t = warnings_0_0(t);
        {
          ATerm t_55 = t;
          int u_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_55 = t;
              int w_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(w_55);
                }
              else
                {
                  t = v_55;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(u_55);
              {
                ATerm g_19 (ATerm t)
                {
                  t = term_x_55;
                  return(t);
                }
                ATerm i_19 (ATerm t)
                {
                  ATerm d_18 = NULL;
                  t = pass_verbose_0_0(t);
                  d_18 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_18), term_a_34);
                  return(t);
                }
                t = xtc_transform_file_2_0(g_19, i_19, t);
              }
            }
          else
            {
              t = t_55;
              {
                ATerm l_19 (ATerm t)
                {
                  t = term_x_55;
                  return(t);
                }
                ATerm m_19 (ATerm t)
                {
                  ATerm e_18 = NULL;
                  t = pass_verbose_0_0(t);
                  e_18 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_18), term_a_34);
                  return(t);
                }
                t = xtc_transform_term_2_0(l_19, m_19, t);
              }
            }
          t = rename_defs_0_0(t);
        }
      }
      return(t);
    }
    t = profile_p__2_0(v_18, a_19, t);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL;
      k_18 = t;
      t = SSL_is_string(k_18);
      ;
      LocalPopChoice(z_55);
    }
  else
    {
      t = y_55;
      {
        ATerm a_56 = t;
        int b_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_19 (ATerm t)
            {
              ATerm c_56 = t;
              int d_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(d_56);
                }
              else
                {
                  t = c_56;
                }
              return(t);
            }
            t = map_1_0(n_19, t);
            ;
            LocalPopChoice(b_56);
          }
        else
          {
            t = a_56;
            {
              ATerm o_18 = NULL,p_18 = NULL,r_18 = NULL;
              o_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_18 = ATgetArgument(t, 0);
                  t = p_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_18 = ATgetArgument(t, 0);
                      t = p_18;
                      {
                        ATerm e_56 = t;
                        int f_56 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_18);
                            {
                              ATerm g_56 = t;
                              int h_56 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_38 = NULL;
                                  t = eval_config_0_0(t);
                                  k_38 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_18, k_38);
                                  t = k_38;
                                  ;
                                  LocalPopChoice(h_56);
                                }
                              else
                                {
                                  t = g_56;
                                }
                            }
                            ;
                            LocalPopChoice(f_56);
                          }
                        else
                          {
                            t = e_56;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_18), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = p_18;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_18 = NULL,z_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_18 = ATgetArgument(t, 0);
                          r_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_18;
                      t = eval_config_0_0(t);
                      x_18 = t;
                      t = r_18;
                      t = eval_config_0_0(t);
                      z_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_18, z_18);
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
  ATerm h_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_56 = ATgetArgument(t, 0);
            ATerm l_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_19, j_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_56 = ATgetFirst((ATermList) t);
            p_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_38;
        ;
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        t = (ATerm) ATempty;
      }
    k_19 = t;
    t = SSL_table_put(h_19, j_19, k_19);
    t = (ATerm) ATmakeAppl(sym__2, h_19, j_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  t = b_104(t);
  r_19 = t;
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(r_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_56);
      }
    else
      {
        t = n_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_19 = ATgetFirst((ATermList) t);
        s_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(r_19, (ATerm)ATmakeAppl(sym_Scopes_0), s_19);
    t = t_19;
    {
      ATerm o_19 (ATerm t)
      {
        ATerm u_19 = NULL;
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_19, u_19);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(o_19, t);
      t = q_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_86(t);
      t = m_86(t);
      ;
      LocalPopChoice(q_56);
    }
  else
    {
      t = p_56;
      t = m_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  t = a_104(t);
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, term_r_56);
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_56 = ATgetArgument(t, 0);
            ATerm v_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_19, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        t = (ATerm) ATempty;
      }
    z_19 = t;
    t = SSL_table_put(y_19, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(z_19), (ATerm) ATempty));
    t = x_19;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  ATerm p_19 (ATerm t)
  {
    t = term_n_52;
    return(t);
  }
  t = begin_scope_1_0(p_19, t);
  {
    ATerm a_20 (ATerm t)
    {
      ATerm g_20 = NULL;
      g_20 = t;
      {
        ATerm w_56 = t;
        int x_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_56);
          }
        else
          {
            t = w_56;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((f_20 != NULL) && (f_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              f_20 = ATgetFirst((ATermList) t);
            {
              ATerm y_56 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(f_20);
        {
          ATerm b_20 (ATerm t)
          {
            ATerm z_56 = t;
            int a_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_20 = NULL;
                l_20 = t;
                t = SSL_remove(l_20);
                ;
                LocalPopChoice(a_57);
              }
            else
              {
                t = z_56;
              }
            return(t);
          }
          t = map_1_0(b_20, t);
          t = g_20;
          {
            ATerm c_20 (ATerm t)
            {
              t = term_n_52;
              return(t);
            }
            t = end_scope_1_0(c_20, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(b_115, a_20, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_20 = NULL,s_20 = NULL;
      p_20 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_38 = NULL;
            t = eval_config_0_0(t);
            v_38 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_38);
            t = v_38;
            ;
            LocalPopChoice(e_57);
          }
        else
          {
            t = d_57;
          }
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_20, term_i_37);
        t = geq_0_0(t);
        t = p_20;
        t = a_107(t);
      }
      ;
      LocalPopChoice(c_57);
    }
  else
    {
      t = b_57;
    }
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_57 = ATgetArgument(t, 0);
      if(match_cons(f_57, sym__4))
        {
          t_20 = ATgetArgument(f_57, 0);
          u_20 = ATgetArgument(f_57, 1);
          v_20 = ATgetArgument(f_57, 2);
          w_20 = ATgetArgument(f_57, 3);
        }
      else
        _fail(t);
      {
        ATerm g_57 = ATgetArgument(t, 1);
        if(match_cons(g_57, sym__4))
          {
            x_20 = ATgetArgument(g_57, 0);
            y_20 = ATgetArgument(g_57, 1);
            z_20 = ATgetArgument(g_57, 2);
            a_21 = ATgetArgument(g_57, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_20, x_20);
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(t_20, x_20);
        ;
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
        t = SSL_subtr(t_20, x_20);
      }
    b_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_20, y_20);
    {
      ATerm j_57 = t;
      int k_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(u_20, y_20);
          ;
          LocalPopChoice(k_57);
        }
      else
        {
          t = j_57;
          t = SSL_subtr(u_20, y_20);
        }
      c_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_20, z_20);
      {
        ATerm l_57 = t;
        int m_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(v_20, z_20);
            ;
            LocalPopChoice(m_57);
          }
        else
          {
            t = l_57;
            t = SSL_subtr(v_20, z_20);
          }
        d_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, a_21);
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_subti(w_20, a_21);
              ;
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              t = SSL_subtr(w_20, a_21);
            }
          e_21 = t;
          t = (ATerm) ATmakeAppl(sym__4, b_21, c_21, d_21, e_21);
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
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  f_21 = t;
  t = times_0_0(t);
  g_21 = t;
  t = f_21;
  t = v_110(t);
  h_21 = t;
  t = times_0_0(t);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_21, g_21);
  t = diff_times_0_0(t);
  k_21 = t;
  if(match_cons(t, sym__4))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm p_57 = ATgetArgument(t, 1);
      }
      m_21 = ATgetArgument(t, 2);
      {
        ATerm q_57 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  {
    ATerm r_57 = t;
    int s_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_21, m_21);
        ;
        LocalPopChoice(s_57);
      }
    else
      {
        t = r_57;
        t = SSL_addr(l_21, m_21);
      }
    o_21 = t;
    t = SSL_TicksToSeconds(o_21);
    n_21 = t;
    t = k_21;
    if(match_cons(t, sym__4))
      {
        ATerm t_57 = ATgetArgument(t, 0);
        p_21 = ATgetArgument(t, 1);
        {
          ATerm u_57 = ATgetArgument(t, 2);
        }
        q_21 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
    {
      ATerm v_57 = t;
      int w_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(p_21, q_21);
          ;
          LocalPopChoice(w_57);
        }
      else
        {
          t = v_57;
          t = SSL_addr(p_21, q_21);
        }
      s_21 = t;
      t = SSL_TicksToSeconds(s_21);
      r_21 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_21), term_y_57), n_21), term_x_57);
      t = u_110(t);
      t = h_21;
    }
  }
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)));
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL;
        t = eval_config_0_0(t);
        z_38 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), z_38);
        t = z_38;
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
      }
    w_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue))), w_21), (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue))));
    t = v_21;
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm b_58 = t;
  int c_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_22 = NULL,c_22 = NULL;
      a_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_58 = t;
        int e_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_39 = NULL;
            t = eval_config_0_0(t);
            d_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_39);
            t = d_39;
            ;
            LocalPopChoice(e_58);
          }
        else
          {
            t = d_58;
          }
        c_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, term_g_38);
        t = geq_0_0(t);
        t = a_22;
        t = e_107(t);
      }
      ;
      LocalPopChoice(c_58);
    }
  else
    {
      t = b_58;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,k_22 = NULL;
      i_22 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_58 = t;
        int i_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_39 = NULL;
            t = eval_config_0_0(t);
            h_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_39);
            t = h_39;
            ;
            LocalPopChoice(i_58);
          }
        else
          {
            t = h_58;
          }
        k_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, term_m_38);
        t = geq_0_0(t);
        t = i_22;
        t = d_107(t);
      }
      ;
      LocalPopChoice(g_58);
    }
  else
    {
      t = f_58;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_58 = t;
    int k_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_22;
        if((x_22 != t))
          {
            _fail(t);
          }
        t = w_22;
        ;
        LocalPopChoice(k_58);
      }
    else
      {
        t = j_58;
        t = w_22;
        {
          ATerm l_58 = t;
          int m_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_22, y_22);
              ;
              LocalPopChoice(m_58);
            }
          else
            {
              t = l_58;
              t = SSL_gtr(x_22, y_22);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm n_58 = t;
  int o_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL,f_23 = NULL;
      d_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_58 = t;
        int q_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_39 = NULL;
            t = eval_config_0_0(t);
            r_39 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_39);
            t = r_39;
            ;
            LocalPopChoice(q_58);
          }
        else
          {
            t = p_58;
          }
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_e_45);
        t = geq_0_0(t);
        t = d_23;
        t = f_107(t);
      }
      ;
      LocalPopChoice(o_58);
    }
  else
    {
      t = n_58;
    }
  return(t);
}
ATerm union_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_23;
  {
    ATerm l_23 (ATerm t)
    {
      ATerm r_58 = t;
      int s_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_23;
          ;
          LocalPopChoice(s_58);
        }
      else
        {
          t = r_58;
          {
            ATerm t_58 = t;
            int u_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_39 = NULL,t_39 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_39 = ATgetFirst((ATermList) t);
                    t_39 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_23;
                {
                  ATerm d_20 (ATerm t)
                  {
                    ATerm u_39 = NULL;
                    u_39 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_39, u_39);
                    t = l_97(t);
                    return(t);
                  }
                  t = fetch_1_0(d_20, t);
                  t = t_39;
                  t = l_23(t);
                }
                ;
                LocalPopChoice(u_58);
              }
            else
              {
                t = t_58;
                t = Cons_2_0(_id, l_23, t);
              }
          }
        }
      return(t);
    }
    t = l_23(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
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
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_58 = ATgetArgument(t, 0);
            ATerm y_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_23, r_23);
        ;
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = (ATerm) ATempty;
      }
    t_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_23, s_23);
    {
      ATerm e_20 (ATerm t)
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
      t = union_1_0(e_20, t);
      u_23 = t;
      t = SSL_table_put(q_23, r_23, u_23);
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
    ATerm h_20 (ATerm t)
    {
      ATerm e_24 = NULL,f_24 = NULL;
      if(match_cons(t, sym__2))
        {
          e_24 = ATgetArgument(t, 0);
          f_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, d_24, e_24, f_24);
      t = d_112(t);
      return(t);
    }
    t = map_1_0(h_20, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_24 (ATerm p_24, ATerm t)
  {
    t = SSL_fclose(p_24);
    return(t);
  }
  ATerm t_24 = NULL,v_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_24 = ATgetArgument(t, 0);
      {
        ATerm z_58 = t;
        int a_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_24);
            ;
            LocalPopChoice(a_59);
          }
        else
          {
            t = z_58;
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
      ATerm b_59 = ATgetArgument(t, 0);
      ATerm c_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_59 = t;
    int e_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,e_40 = NULL;
        d_40 = t;
        t = SSL_explode_term(d_40);
        if(match_cons(t, sym__2))
          {
            ATerm f_59 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_59) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_59 = ATgetArgument(t, 1);
              if(((ATgetType(g_59) == AT_LIST) && !(ATisEmpty(g_59))))
                {
                  e_40 = ATgetFirst((ATermList) g_59);
                  {
                    ATerm h_59 = (ATerm) ATgetNext((ATermList) g_59);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_40;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_40;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_40;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_40;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_59);
      }
    else
      {
        t = d_59;
        {
          ATerm i_59 = t;
          int j_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
              ATerm i_20 (ATerm t)
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
              t = _2_0(i_20, _id, t);
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
              LocalPopChoice(j_59);
            }
          else
            {
              t = i_59;
              {
                ATerm l_25 = NULL,m_25 = NULL,o_25 = NULL;
                ATerm j_20 (ATerm t)
                {
                  ATerm q_25 = NULL;
                  q_25 = t;
                  t = SSL_is_string(q_25);
                  return(t);
                }
                t = _2_0(j_20, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_25 = ATgetArgument(t, 0);
                    m_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_25, m_25);
                o_25 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_25);
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
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_25 = NULL;
      u_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_25, term_m_59);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_59);
    }
  else
    {
      t = k_59;
      {
        ATerm f_40 = NULL;
        f_40 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = f_40;
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
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_25 = NULL;
      w_25 = t;
      t = SSL_access(w_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(o_59);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_59;
      {
        ATerm p_59 = t;
        int q_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_40 = NULL;
            ATerm r_59 = t;
            if((PushChoice() == 0))
              {
                ATerm x_25 = NULL;
                x_25 = t;
                t = SSL_access(x_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_59;
              }
            i_40 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = i_40;
            ;
            LocalPopChoice(q_59);
          }
        else
          {
            t = p_59;
            {
              ATerm l_40 = NULL;
              l_40 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_40), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = l_40;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,c_26 = NULL;
  z_25 = t;
  {
    ATerm k_20 (ATerm t)
    {
      ATerm o_40 = NULL;
      o_40 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_40), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = o_40;
      return(t);
    }
    t = if_verbose5_1_0(k_20, t);
    {
      ATerm s_59 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, z_25));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_59;
        }
      b_26 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, z_25));
      t = b_26;
      {
        ATerm m_20 (ATerm t)
        {
          ATerm r_40 = NULL;
          r_40 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_40), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = r_40;
          return(t);
        }
        t = if_verbose4_1_0(m_20, t);
        t = read_repository_file_0_0(t);
        {
          ATerm n_20 (ATerm t)
          {
            ATerm d_26 = NULL;
            d_26 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = d_26;
            return(t);
          }
          t = if_verbose6_1_0(n_20, t);
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_59, c_26);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm o_20 (ATerm t)
            {
              ATerm e_26 = NULL;
              e_26 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = e_26;
              return(t);
            }
            t = if_verbose6_1_0(o_20, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, z_25), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_59, (ATerm)ATmakeAppl(sym_Imported_1, z_25), (ATerm) ATempty);
            {
              ATerm q_20 (ATerm t)
              {
                ATerm f_26 = NULL;
                f_26 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = f_26;
                return(t);
              }
              t = if_verbose4_1_0(q_20, t);
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
  ATerm u_59 = t;
  int v_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_59);
    }
  else
    {
      t = u_59;
      {
        ATerm w_59 = t;
        int x_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 (ATerm t)
            {
              t = filter_1_0(m_100, t);
              return(t);
            }
            t = Cons_2_0(m_100, r_20, t);
            ;
            LocalPopChoice(x_59);
          }
        else
          {
            t = w_59;
            {
              ATerm j_26 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_59 = ATgetFirst((ATermList) t);
                  j_26 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_26;
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
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_86(t);
        t = n_26(t);
        ;
        LocalPopChoice(a_60);
      }
    else
      {
        t = z_59;
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_60 = t;
  int c_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm d_60 = t;
        int e_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_40 = NULL;
            t = eval_config_0_0(t);
            x_40 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), x_40);
            t = x_40;
            ;
            LocalPopChoice(e_60);
          }
        else
          {
            t = d_60;
          }
      }
      ;
      LocalPopChoice(c_60);
    }
  else
    {
      t = b_60;
      {
        ATerm f_60 = t;
        int g_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(g_60);
          }
        else
          {
            t = f_60;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_26 = NULL;
  ATerm t_21 (ATerm t)
  {
    ATerm y_40 = NULL;
    y_40 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_40), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = y_40;
    return(t);
  }
  t = if_verbose5_1_0(t_21, t);
  o_26 = t;
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
        {
          ATerm p_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_26 = t;
          {
            ATerm u_21 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm j_60 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_60;
                  }
              }
              return(t);
            }
            t = repeat_1_0(u_21, t);
            t = p_26;
          }
        }
      }
    t = o_26;
    {
      ATerm x_21 (ATerm t)
      {
        ATerm b_41 = NULL;
        b_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = b_41;
        return(t);
      }
      t = if_verbose5_1_0(x_21, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 (ATerm t)
      {
        ATerm e_41 = NULL;
        e_41 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = e_41;
        return(t);
      }
      t = if_verbose5_1_0(y_21, t);
      t = xtc_load_0_0(t);
      {
        ATerm m_60 = t;
        int n_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
            if(match_cons(t, sym__2))
              {
                k_41 = ATgetArgument(t, 0);
                l_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_41));
            {
              ATerm z_21 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((l_41 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((m_41 != NULL) && (m_41 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_41 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(z_21, t);
              t = not_null(m_41);
            }
            ;
            LocalPopChoice(n_60);
          }
        else
          {
            t = m_60;
            {
              ATerm p_41 = NULL,q_41 = NULL;
              p_41 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, p_41));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_60 = ATgetFirst((ATermList) t);
                  if(match_cons(o_60, sym__2))
                    {
                      ATerm q_60 = ATgetArgument(o_60, 0);
                      q_41 = ATgetArgument(o_60, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_60 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = q_41;
            }
          }
        {
          ATerm b_22 (ATerm t)
          {
            ATerm r_41 = NULL;
            r_41 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, r_41), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = r_41;
            return(t);
          }
          t = if_verbose5_1_0(b_22, t);
        }
      }
      ;
      LocalPopChoice(l_60);
    }
  else
    {
      t = k_60;
      {
        ATerm t_26 = NULL;
        t_26 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), t_26), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_60), t_26), term_r_60);
        {
          ATerm d_22 (ATerm t)
          {
            ATerm l_42 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm e_22 (ATerm t)
              {
                ATerm j_42 = NULL,k_42 = NULL;
                j_42 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), j_42);
                k_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_42, k_42);
                return(t);
              }
              t = map_1_0(e_22, t);
              l_42 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_42), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = l_42;
            }
            return(t);
          }
          t = if_verbose5_1_0(d_22, t);
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
    ATerm t_60 = t;
    int u_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26);
        {
          ATerm v_60 = t;
          int w_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_42 = NULL;
              t = eval_config_0_0(t);
              r_42 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26, r_42);
              t = r_42;
              ;
              LocalPopChoice(w_60);
            }
          else
            {
              t = v_60;
            }
        }
        ;
        LocalPopChoice(u_60);
      }
    else
      {
        t = t_60;
        t = (ATerm) ATempty;
      }
    a_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
    {
      ATerm x_60 = t;
      int y_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm z_60 = ATgetArgument(t, 0);
              ATerm a_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_26;
          {
            ATerm f_22 (ATerm t)
            {
              t = a_27;
              return(t);
            }
            t = at_end_1_0(f_22, t);
          }
          ;
          LocalPopChoice(y_60);
        }
      else
        {
          t = x_60;
          {
            ATerm v_42 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_26, a_27));
            if(match_cons(t, sym__2))
              {
                ATerm b_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                v_42 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_42;
            t = concat_0_0(t);
          }
        }
      b_27 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_26, b_27);
      t = (ATerm) ATmakeAppl(sym__3, term_l_54, y_26, b_27);
    }
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_27 = NULL;
      t = term_a_52;
      t = l_0(t);
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_61, term_d_61, o_27);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_27 = NULL;
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
      t_27 = t;
      t = (ATerm) ATinsert(CheckATermList(n_27), t_27);
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
    ATerm e_61 = t;
    int f_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27);
        {
          ATerm g_61 = t;
          int h_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_42 = NULL;
              t = eval_config_0_0(t);
              z_42 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27, z_42);
              t = z_42;
              ;
              LocalPopChoice(h_61);
            }
          else
            {
              t = g_61;
            }
          t = SSL_table_remove((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27);
          t = (ATerm) ATmakeAppl(sym__2, term_l_54, v_27);
        }
        ;
        LocalPopChoice(f_61);
      }
    else
      {
        t = e_61;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_27, w_27);
        t = (ATerm) ATmakeAppl(sym__3, term_l_54, v_27, w_27);
      }
  }
  return(t);
}
ATerm post_extend_config_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_27;
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27);
        {
          ATerm k_61 = t;
          int l_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_43 = NULL;
              t = eval_config_0_0(t);
              d_43 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27, d_43);
              t = d_43;
              ;
              LocalPopChoice(l_61);
            }
          else
            {
              t = k_61;
            }
        }
        ;
        LocalPopChoice(j_61);
      }
    else
      {
        t = i_61;
        t = (ATerm) ATempty;
      }
    a_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_28, z_27);
    {
      ATerm m_61 = t;
      int n_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_61 = ATgetArgument(t, 0);
              ATerm p_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_28;
          {
            ATerm g_22 (ATerm t)
            {
              t = z_27;
              return(t);
            }
            t = at_end_1_0(g_22, t);
          }
          ;
          LocalPopChoice(n_61);
        }
      else
        {
          t = m_61;
          {
            ATerm h_43 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, a_28, z_27));
            if(match_cons(t, sym__2))
              {
                ATerm q_61 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_61) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                h_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_43;
            t = concat_0_0(t);
          }
        }
      b_28 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_27, b_28);
      t = (ATerm) ATmakeAppl(sym__3, term_l_54, y_27, b_28);
    }
  }
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm r_61 = t;
  int s_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_22 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_22 (ATerm t)
      {
        ATerm o_28 = NULL;
        o_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_28);
        t = term_a_52;
        return(t);
      }
      ATerm n_22 (ATerm t)
      {
        t = term_t_61;
        return(t);
      }
      t = ArgOption_3_0(h_22, j_22, n_22, t);
      ;
      LocalPopChoice(s_61);
    }
  else
    {
      t = r_61;
      {
        ATerm u_61 = t;
        int v_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 (ATerm t)
            {
              ATerm q_28 = NULL;
              q_28 = t;
              if(match_string(t, "-o"))
                {
                  t = q_28;
                }
              else
                {
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
                    _fail(t);
                  t = q_28;
                }
              return(t);
            }
            ATerm p_22 (ATerm t)
            {
              ATerm s_28 = NULL;
              s_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_28);
              t = term_a_52;
              return(t);
            }
            ATerm q_22 (ATerm t)
            {
              t = term_w_61;
              return(t);
            }
            t = ArgOption_3_0(o_22, p_22, q_22, t);
            ;
            LocalPopChoice(v_61);
          }
        else
          {
            t = u_61;
            {
              ATerm x_61 = t;
              int y_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_22 (ATerm t)
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
                  ATerm s_22 (ATerm t)
                  {
                    ATerm u_28 = NULL;
                    u_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_61, (ATerm) ATinsert(ATinsert(ATempty, u_28), term_z_61));
                    t = extend_config_0_0(t);
                    t = term_a_52;
                    return(t);
                  }
                  ATerm t_22 (ATerm t)
                  {
                    t = term_a_62;
                    return(t);
                  }
                  t = ArgOption_3_0(r_22, s_22, t_22, t);
                  ;
                  LocalPopChoice(y_61);
                }
              else
                {
                  t = x_61;
                  {
                    ATerm b_62 = t;
                    int c_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_22 (ATerm t)
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
                        ATerm v_22 (ATerm t)
                        {
                          ATerm w_28 = NULL;
                          w_28 = t;
                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue)), w_28);
                          t = term_a_52;
                          return(t);
                        }
                        ATerm z_22 (ATerm t)
                        {
                          t = term_d_62;
                          return(t);
                        }
                        t = ArgOption_3_0(u_22, v_22, z_22, t);
                        ;
                        LocalPopChoice(c_62);
                      }
                    else
                      {
                        t = b_62;
                        {
                          ATerm e_62 = t;
                          int f_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_23 (ATerm t)
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
                                  _fail(t);
                                return(t);
                              }
                              ATerm b_23 (ATerm t)
                              {
                                ATerm x_28 = NULL;
                                x_28 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_z_33, (ATerm) ATinsert(ATempty, x_28));
                                t = post_extend_config_0_0(t);
                                t = term_a_52;
                                return(t);
                              }
                              ATerm e_23 (ATerm t)
                              {
                                t = term_g_62;
                                return(t);
                              }
                              t = ArgOption_3_0(a_23, b_23, e_23, t);
                              ;
                              LocalPopChoice(f_62);
                            }
                          else
                            {
                              t = e_62;
                              {
                                ATerm h_62 = t;
                                int i_62 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_23 (ATerm t)
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
                                        _fail(t);
                                      return(t);
                                    }
                                    ATerm h_23 (ATerm t)
                                    {
                                      ATerm y_28 = NULL;
                                      y_28 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_j_62, (ATerm) ATinsert(ATempty, y_28));
                                      t = extend_config_0_0(t);
                                      t = term_a_52;
                                      return(t);
                                    }
                                    ATerm i_23 (ATerm t)
                                    {
                                      t = term_k_62;
                                      return(t);
                                    }
                                    t = ArgOption_3_0(g_23, h_23, i_23, t);
                                    ;
                                    LocalPopChoice(i_62);
                                  }
                                else
                                  {
                                    t = h_62;
                                    {
                                      ATerm l_62 = t;
                                      int m_62 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_23 (ATerm t)
                                          {
                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_23 (ATerm t)
                                          {
                                            ATerm a_29 = NULL;
                                            a_29 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_n_62, (ATerm) ATinsert(ATempty, a_29));
                                            t = extend_config_0_0(t);
                                            t = term_a_52;
                                            return(t);
                                          }
                                          ATerm o_23 (ATerm t)
                                          {
                                            t = term_o_62;
                                            return(t);
                                          }
                                          t = ArgOption_3_0(m_23, n_23, o_23, t);
                                          ;
                                          LocalPopChoice(m_62);
                                        }
                                      else
                                        {
                                          t = l_62;
                                          {
                                            ATerm p_62 = t;
                                            int q_62 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_23 (ATerm t)
                                                {
                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                                                    _fail(t);
                                                  return(t);
                                                }
                                                ATerm w_23 (ATerm t)
                                                {
                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                  t = term_a_52;
                                                  return(t);
                                                }
                                                ATerm x_23 (ATerm t)
                                                {
                                                  t = term_r_62;
                                                  return(t);
                                                }
                                                t = Option_3_0(v_23, w_23, x_23, t);
                                                ;
                                                LocalPopChoice(q_62);
                                              }
                                            else
                                              {
                                                t = p_62;
                                                {
                                                  ATerm s_62 = t;
                                                  int t_62 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_23 (ATerm t)
                                                      {
                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      ATerm z_23 (ATerm t)
                                                      {
                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                        t = term_a_52;
                                                        return(t);
                                                      }
                                                      ATerm b_24 (ATerm t)
                                                      {
                                                        t = term_u_62;
                                                        return(t);
                                                      }
                                                      t = Option_3_0(y_23, z_23, b_24, t);
                                                      ;
                                                      LocalPopChoice(t_62);
                                                    }
                                                  else
                                                    {
                                                      t = s_62;
                                                      {
                                                        ATerm v_62 = t;
                                                        int w_62 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm g_24 (ATerm t)
                                                            {
                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
                                                                _fail(t);
                                                              return(t);
                                                            }
                                                            ATerm h_24 (ATerm t)
                                                            {
                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                              t = term_a_52;
                                                              return(t);
                                                            }
                                                            ATerm i_24 (ATerm t)
                                                            {
                                                              t = term_x_62;
                                                              return(t);
                                                            }
                                                            t = Option_3_0(g_24, h_24, i_24, t);
                                                            ;
                                                            LocalPopChoice(w_62);
                                                          }
                                                        else
                                                          {
                                                            t = v_62;
                                                            {
                                                              ATerm y_62 = t;
                                                              int z_62 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_24 (ATerm t)
                                                                  {
                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
                                                                      _fail(t);
                                                                    return(t);
                                                                  }
                                                                  ATerm k_24 (ATerm t)
                                                                  {
                                                                    ATerm c_29 = NULL,d_29 = NULL;
                                                                    c_29 = t;
                                                                    t = SSL_string_to_int(c_29);
                                                                    d_29 = t;
                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_29);
                                                                    t = term_a_52;
                                                                    return(t);
                                                                  }
                                                                  ATerm l_24 (ATerm t)
                                                                  {
                                                                    t = term_a_63;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3_0(j_24, k_24, l_24, t);
                                                                  ;
                                                                  LocalPopChoice(z_62);
                                                                }
                                                              else
                                                                {
                                                                  t = y_62;
                                                                  {
                                                                    ATerm b_63 = t;
                                                                    int c_63 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm m_24 (ATerm t)
                                                                        {
                                                                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
                                                                            _fail(t);
                                                                          return(t);
                                                                        }
                                                                        ATerm n_24 (ATerm t)
                                                                        {
                                                                          ATerm e_29 = NULL,f_29 = NULL;
                                                                          e_29 = t;
                                                                          t = SSL_string_to_int(e_29);
                                                                          f_29 = t;
                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), f_29);
                                                                          t = term_a_52;
                                                                          return(t);
                                                                        }
                                                                        ATerm o_24 (ATerm t)
                                                                        {
                                                                          t = term_d_63;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3_0(m_24, n_24, o_24, t);
                                                                        ;
                                                                        LocalPopChoice(c_63);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_63;
                                                                        {
                                                                          ATerm e_63 = t;
                                                                          int f_63 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm q_24 (ATerm t)
                                                                              {
                                                                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
                                                                                  _fail(t);
                                                                                return(t);
                                                                              }
                                                                              ATerm r_24 (ATerm t)
                                                                              {
                                                                                t = term_h_63;
                                                                                t = toggle_config_0_0(t);
                                                                                t = term_a_52;
                                                                                return(t);
                                                                              }
                                                                              ATerm s_24 (ATerm t)
                                                                              {
                                                                                t = term_i_63;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3_0(q_24, r_24, s_24, t);
                                                                              ;
                                                                              LocalPopChoice(f_63);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_63;
                                                                              {
                                                                                ATerm j_63 = t;
                                                                                int k_63 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm u_24 (ATerm t)
                                                                                    {
                                                                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
                                                                                        _fail(t);
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm w_24 (ATerm t)
                                                                                    {
                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                      t = term_a_52;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm b_25 (ATerm t)
                                                                                    {
                                                                                      t = term_l_63;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3_0(u_24, w_24, b_25, t);
                                                                                    ;
                                                                                    LocalPopChoice(k_63);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_63;
                                                                                    {
                                                                                      ATerm m_63 = t;
                                                                                      int n_63 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm c_25 (ATerm t)
                                                                                          {
                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
                                                                                              _fail(t);
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm d_25 (ATerm t)
                                                                                          {
                                                                                            ATerm g_29 = NULL;
                                                                                            g_29 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym__2, term_o_63, (ATerm) ATinsert(ATempty, g_29));
                                                                                            t = extend_config_0_0(t);
                                                                                            t = term_a_52;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm e_25 (ATerm t)
                                                                                          {
                                                                                            t = term_p_63;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3_0(c_25, d_25, e_25, t);
                                                                                          ;
                                                                                          LocalPopChoice(n_63);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_63;
                                                                                          {
                                                                                            ATerm q_63 = t;
                                                                                            int r_63 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm f_25 (ATerm t)
                                                                                                {
                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                                                                                                    _fail(t);
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm g_25 (ATerm t)
                                                                                                {
                                                                                                  ATerm h_29 = NULL,i_29 = NULL;
                                                                                                  h_29 = t;
                                                                                                  t = SSL_string_to_int(h_29);
                                                                                                  i_29 = t;
                                                                                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_29);
                                                                                                  t = term_a_52;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm n_25 (ATerm t)
                                                                                                {
                                                                                                  t = term_s_63;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3_0(f_25, g_25, n_25, t);
                                                                                                ;
                                                                                                LocalPopChoice(r_63);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = q_63;
                                                                                                {
                                                                                                  ATerm t_63 = t;
                                                                                                  int u_63 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm p_25 (ATerm t)
                                                                                                      {
                                                                                                        ATerm j_29 = NULL;
                                                                                                        j_29 = t;
                                                                                                        if(match_string(t, "-S"))
                                                                                                          {
                                                                                                            t = j_29;
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
                                                                                                              _fail(t);
                                                                                                            t = j_29;
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_25 (ATerm t)
                                                                                                      {
                                                                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                                                                                                        t = term_a_52;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm h_26 (ATerm t)
                                                                                                      {
                                                                                                        t = term_v_63;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3_0(p_25, v_25, h_26, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_63);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_63;
                                                                                                      {
                                                                                                        ATerm w_63 = t;
                                                                                                        int x_63 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm i_26 (ATerm t)
                                                                                                            {
                                                                                                              ATerm k_29 = NULL;
                                                                                                              k_29 = t;
                                                                                                              if(match_string(t, "-h"))
                                                                                                                {
                                                                                                                  t = k_29;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
                                                                                                                    _fail(t);
                                                                                                                  t = k_29;
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm k_26 (ATerm t)
                                                                                                            {
                                                                                                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                              t = term_a_52;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm l_26 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_63;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3_0(i_26, k_26, l_26, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(x_63);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = w_63;
                                                                                                            {
                                                                                                              ATerm z_63 = t;
                                                                                                              int a_64 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm m_26 (ATerm t)
                                                                                                                  {
                                                                                                                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
                                                                                                                      _fail(t);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm q_26 (ATerm t)
                                                                                                                  {
                                                                                                                    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                    t = term_a_52;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm r_26 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_b_64;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3_0(m_26, q_26, r_26, t);
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
                                                                                                                        ATerm s_26 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm m_29 = NULL;
                                                                                                                          m_29 = t;
                                                                                                                          if(match_string(t, "-v"))
                                                                                                                            {
                                                                                                                              t = m_29;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
                                                                                                                                _fail(t);
                                                                                                                              t = m_29;
                                                                                                                            }
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm u_26 (ATerm t)
                                                                                                                        {
                                                                                                                          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                                                                                                                          t = term_a_52;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        ATerm w_26 (ATerm t)
                                                                                                                        {
                                                                                                                          t = term_e_64;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Option_3_0(s_26, u_26, w_26, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(d_64);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_64;
                                                                                                                        {
                                                                                                                          ATerm x_26 (ATerm t)
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
                                                                                                                          ATerm c_27 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm p_29 = NULL;
                                                                                                                            p_29 = t;
                                                                                                                            {
                                                                                                                              ATerm f_64 = t;
                                                                                                                              int g_64 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)));
                                                                                                                                  {
                                                                                                                                    ATerm h_64 = t;
                                                                                                                                    int i_64 = stack_ptr;
                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                      {
                                                                                                                                        ATerm l_43 = NULL;
                                                                                                                                        t = eval_config_0_0(t);
                                                                                                                                        l_43 = t;
                                                                                                                                        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), l_43);
                                                                                                                                        t = l_43;
                                                                                                                                        ;
                                                                                                                                        LocalPopChoice(i_64);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        t = h_64;
                                                                                                                                      }
                                                                                                                                    {
                                                                                                                                      ATerm e_27 (ATerm t)
                                                                                                                                      {
                                                                                                                                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
                                                                                                                                          _fail(t);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      ATerm g_27 (ATerm t)
                                                                                                                                      {
                                                                                                                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                                                                                                          _fail(t);
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = Cons_2_0(e_27, g_27, t);
                                                                                                                                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                      t = (ATerm) ATmakeAppl(sym__3, term_l_54, term_f_50, (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                  ;
                                                                                                                                  LocalPopChoice(g_64);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = f_64;
                                                                                                                                  t = (ATerm) ATmakeAppl(sym__2, term_f_50, (ATerm) ATinsert(ATempty, p_29));
                                                                                                                                  t = extend_config_0_0(t);
                                                                                                                                }
                                                                                                                              t = term_a_52;
                                                                                                                            }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          ATerm d_27 (ATerm t)
                                                                                                                          {
                                                                                                                            t = term_j_64;
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = ArgOption_3_0(x_26, c_27, d_27, t);
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_64), term_t_64), term_w_64), term_v_64), term_u_64), term_t_64), term_s_64), term_r_64), term_q_64), term_p_64), term_o_64), term_n_64), term_m_64), term_l_64), term_k_64);
  return(t);
}
ATerm map_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm q_29 (ATerm t)
  {
    ATerm y_64 = t;
    int z_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_64);
      }
    else
      {
        t = y_64;
        t = Cons_2_0(h_93, q_29, t);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_29 = ATgetFirst((ATermList) t);
      t_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_29 = NULL,a_30 = NULL;
        t = t_29;
        t = h_0(t);
        y_29 = t;
        t = s_29;
        t = g_0(t);
        a_30 = t;
        t = t_29;
        {
          ATerm h_27 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_29), a_30);
            return(t);
          }
          t = reverse_acc_2_0(g_0, h_27, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_52;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  t = term_a_52;
  t = f_0(t);
  b_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_65), b_30), term_e_65), term_t_64), term_d_65), term_t_64), term_c_65), term_b_65), term_t_64), term_a_65);
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
  ATerm g_65 = t;
  int h_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm i_65 = t;
        int j_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_43 = NULL;
            t = eval_config_0_0(t);
            p_43 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_43);
            t = p_43;
            ;
            LocalPopChoice(j_65);
          }
        else
          {
            t = i_65;
          }
        k_30 = t;
      }
      ;
      LocalPopChoice(h_65);
    }
  else
    {
      t = g_65;
      {
        ATerm i_27 (ATerm t)
        {
          ATerm j_27 (ATerm t)
          {
            if(((k_30 != NULL) && (k_30 != t)))
              _fail(t);
            else
              k_30 = t;
            return(t);
          }
          t = Program_1_0(j_27, t);
          return(t);
        }
        t = fetch_1_0(i_27, t);
      }
    }
  {
    ATerm k_65 = t;
    int l_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_27 (ATerm t)
        {
          t = not_null(k_30);
          return(t);
        }
        t = short_description_1_0(p_27, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(l_65);
      }
    else
      {
        t = k_65;
      }
    t = term_m_65;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm q_27 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, q_27, t);
      {
        ATerm r_27 (ATerm t)
        {
          ATerm l_30 = NULL;
          l_30 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, l_30), term_n_65);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(r_27, t);
        {
          ATerm o_65 = t;
          int p_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_30 = NULL;
              ATerm s_27 (ATerm t)
              {
                t = not_null(k_30);
                return(t);
              }
              t = long_description_1_0(s_27, t);
              m_30 = t;
              t = (ATerm) ATinsert(CheckATermList(m_30), term_t_64);
              t = echo_0_0(t);
              ;
              LocalPopChoice(p_65);
            }
          else
            {
              t = o_65;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,s_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_30);
  n_30 = t;
  t = o_30;
  t = n_77(t);
  p_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_30), n_30);
  return(t);
}
ATerm fetch_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm c_31 (ATerm t)
  {
    ATerm q_65 = t;
    int r_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_93, _id, t);
        ;
        LocalPopChoice(r_65);
      }
    else
      {
        t = q_65;
        t = Cons_2_0(_id, c_31, t);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_31 = NULL,o_31 = NULL;
  m_31 = t;
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_65 = ATgetFirst((ATermList) t);
                ATerm v_65 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_31;
          }
        ;
        LocalPopChoice(t_65);
      }
    else
      {
        t = s_65;
        t = (ATerm) ATinsert(ATempty, m_31);
      }
    o_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_31);
    t = m_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_43 = NULL;
        t = eval_config_0_0(t);
        t_43 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_43);
        t = t_43;
        ;
        LocalPopChoice(x_65);
      }
    else
      {
        t = w_65;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_65 = t;
  int z_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_27 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_28 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_b_66;
        return(t);
      }
      ATerm d_28 (ATerm t)
      {
        t = term_c_66;
        return(t);
      }
      t = Option_3_0(x_27, c_28, d_28, t);
      ;
      LocalPopChoice(z_65);
    }
  else
    {
      t = y_65;
      {
        ATerm e_28 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_28 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_66;
          return(t);
        }
        ATerm g_28 (ATerm t)
        {
          t = term_e_66;
          return(t);
        }
        t = Option_3_0(e_28, f_28, g_28, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(match_cons(t, sym__3))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
      z_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_31, y_31);
  {
    ATerm f_66 = t;
    int g_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_66 = ATgetArgument(t, 0);
            ATerm i_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_31, y_31);
        ;
        LocalPopChoice(g_66);
      }
    else
      {
        t = f_66;
        t = (ATerm) ATempty;
      }
    a_32 = t;
    t = SSL_table_put(x_31, y_31, (ATerm) ATinsert(CheckATermList(a_32), z_31));
    t = (ATerm) ATmakeAppl(sym__3, x_31, y_31, z_31);
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_32 = NULL;
      t = term_a_52;
      t = d_0(t);
      k_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_61, term_d_61, k_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm p_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_32 = ATgetFirst((ATermList) t);
          j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      t = a_0(t);
      t = term_a_52;
      t = b_0(t);
      p_32 = t;
      t = (ATerm) ATinsert(CheckATermList(j_32), p_32);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  {
    ATerm j_66 = t;
    int k_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_66;
        t = a_112(t);
        ;
        LocalPopChoice(k_66);
      }
    else
      {
        t = j_66;
      }
    t = r_32;
    {
      ATerm i_28 (ATerm t)
      {
        ATerm s_32 = NULL;
        s_32 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_32);
        t = (ATerm) ATmakeAppl(sym_Program_1, s_32);
        return(t);
      }
      ATerm l_28 (ATerm t)
      {
        ATerm m_66 = t;
        int n_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_66 = t;
            int p_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_66);
              }
            else
              {
                t = o_66;
                t = a_112(t);
                t = Cons_2_0(_id, l_28, t);
              }
            ;
            LocalPopChoice(n_66);
          }
        else
          {
            t = m_66;
            {
              ATerm u_32 = NULL,v_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_32 = ATgetFirst((ATermList) t);
                  v_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_32), (ATerm) ATmakeAppl(sym_Undefined_1, u_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_28, l_28, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,h_33 = NULL,i_33 = NULL;
  f_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_33;
  {
    ATerm m_28 (ATerm t)
    {
      ATerm q_66 = t;
      int r_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_111(t);
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
                ATerm n_28 (ATerm t)
                {
                  ATerm j_33 = NULL;
                  j_33 = t;
                  if(match_string(t, "--help"))
                    {
                      t = j_33;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = j_33;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = j_33;
                        }
                    }
                  return(t);
                }
                ATerm p_28 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_u_66;
                  return(t);
                }
                ATerm z_28 (ATerm t)
                {
                  t = term_v_66;
                  return(t);
                }
                t = Option_3_0(n_28, p_28, z_28, t);
                ;
                LocalPopChoice(t_66);
              }
            else
              {
                t = s_66;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_28, t);
    {
      ATerm w_66 = t;
      int x_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = NULL;
          r_33 = t;
          {
            ATerm y_66 = t;
            int z_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_33;
                {
                  ATerm a_67 = t;
                  int b_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm c_67 = t;
                        int d_67 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_44 = NULL;
                            t = eval_config_0_0(t);
                            h_44 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_44);
                            t = h_44;
                            ;
                            LocalPopChoice(d_67);
                          }
                        else
                          {
                            t = c_67;
                          }
                      }
                      ;
                      LocalPopChoice(b_67);
                    }
                  else
                    {
                      t = a_67;
                      {
                        ATerm b_29 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(b_29, t);
                      }
                    }
                  t = r_33;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(z_66);
              }
            else
              {
                t = y_66;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm e_67 = t;
                  int f_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_44 = NULL;
                      t = eval_config_0_0(t);
                      n_44 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), n_44);
                      t = n_44;
                      ;
                      LocalPopChoice(f_67);
                    }
                  else
                    {
                      t = e_67;
                    }
                  t = r_33;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(x_66);
        }
      else
        {
          t = w_66;
          {
            ATerm g_67 = t;
            int j_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_29 (ATerm t)
                {
                  ATerm r_29 (ATerm t)
                  {
                    if(((h_33 != NULL) && (h_33 != t)))
                      _fail(t);
                    else
                      h_33 = t;
                    return(t);
                  }
                  t = Undefined_1_0(r_29, t);
                  return(t);
                }
                t = fetch_1_0(l_29, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_33)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_33)), term_k_67));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_67);
              }
            else
              {
                t = g_67;
              }
          }
        }
      i_33 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = i_33;
    }
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_67 = t;
  int m_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_67);
    }
  else
    {
      t = l_67;
      {
        ATerm w_33 = NULL,x_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_33 = ATgetFirst((ATermList) t);
            x_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_33;
        {
          ATerm u_29 (ATerm t)
          {
            t = x_33;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_29, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm d_34 (ATerm t)
  {
    ATerm n_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_34, t);
        ;
        LocalPopChoice(o_67);
      }
    else
      {
        t = n_67;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_93(t);
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm _2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,l_34 = NULL,n_34 = NULL;
  n_34 = t;
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      i_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  f_34 = t;
  t = h_34;
  t = h_67(t);
  j_34 = t;
  t = i_34;
  t = i_67(t);
  l_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_34, l_34), f_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_34 = NULL;
  ATerm v_29 (ATerm t)
  {
    ATerm s_34 = NULL;
    s_34 = t;
    t = SSL_explode_string(s_34);
    return(t);
  }
  ATerm w_29 (ATerm t)
  {
    ATerm t_34 = NULL;
    t_34 = t;
    t = SSL_explode_string(t_34);
    return(t);
  }
  t = _2_0(v_29, w_29, t);
  {
    ATerm p_67 = t;
    int q_67 = stack_ptr;
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
          ATerm x_29 (ATerm t)
          {
            t = w_34;
            return(t);
          }
          t = at_end_1_0(x_29, t);
        }
        ;
        LocalPopChoice(q_67);
      }
    else
      {
        t = p_67;
        {
          ATerm q_44 = NULL,r_44 = NULL;
          q_44 = t;
          t = SSL_explode_term(q_44);
          if(match_cons(t, sym__2))
            {
              ATerm r_67 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_67) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_44;
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
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_35 = ATgetFirst((ATermList) t);
      d_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  b_35 = t;
  t = c_35;
  t = w_71(t);
  e_35 = t;
  t = d_35;
  t = x_71(t);
  f_35 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_35), e_35), b_35);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  j_35 = t;
  t = SSL_explode_string(j_35);
  {
    ATerm s_67 = t;
    int t_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 (ATerm t)
        {
          ATerm u_67 = t;
          int v_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, l_35, t);
              ;
              LocalPopChoice(v_67);
            }
          else
            {
              t = u_67;
              {
                ATerm z_29 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm e_30 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(z_29, e_30, t);
              }
            }
          return(t);
        }
        t = l_35(t);
        ;
        LocalPopChoice(t_67);
      }
    else
      {
        t = s_67;
        t = (ATerm) ATempty;
      }
    k_35 = t;
    t = SSL_implode_string(k_35);
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,q_35 = NULL,s_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,c_36 = NULL,e_36 = NULL;
  m_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(1));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue)), (ATerm) ATmakeInt(5));
  t = term_w_67;
  t = xtc_find_path_0_0(t);
  n_35 = t;
  t = term_x_67;
  t = xtc_find_path_0_0(t);
  o_35 = t;
  t = term_y_67;
  t = xtc_find_path_0_0(t);
  q_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), o_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), n_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue))));
  t = term_z_67;
  t = xtc_find_path_0_0(t);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_35, term_a_68);
  t = conc_strings_0_0(t);
  u_35 = t;
  t = term_z_67;
  t = xtc_find_path_0_0(t);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_35, term_a_68);
  t = conc_strings_0_0(t);
  w_35 = t;
  t = term_b_68;
  t = xtc_find_path_0_0(t);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_35, term_a_68);
  t = conc_strings_0_0(t);
  y_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), w_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))), u_35), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue))));
  t = term_z_67;
  t = xtc_find_path_0_0(t);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_35, term_c_68);
  t = conc_strings_0_0(t);
  a_36 = t;
  t = term_b_68;
  t = xtc_find_path_0_0(t);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, term_c_68);
  t = conc_strings_0_0(t);
  e_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue))), e_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue))), a_36), (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue))));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue)), (ATerm) ATempty);
  t = m_35;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm d_68 = t;
    int e_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_36 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)));
        {
          ATerm f_68 = t;
          int g_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_44 = NULL;
              t = eval_config_0_0(t);
              v_44 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue)), v_44);
              t = v_44;
              ;
              LocalPopChoice(g_68);
            }
          else
            {
              t = f_68;
            }
          t = term_h_68;
          t = xtc_find_0_0(t);
          f_36 = t;
          t = SSL_copy(f_36, (ATerm) ATmakeAppl(sym_stdout_0));
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
        ;
        LocalPopChoice(e_68);
      }
    else
      {
        t = d_68;
      }
    {
      ATerm i_68 = t;
      int j_68 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)));
          {
            ATerm k_68 = t;
            int l_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_44 = NULL;
                t = eval_config_0_0(t);
                z_44 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), z_44);
                t = z_44;
                ;
                LocalPopChoice(l_68);
              }
            else
              {
                t = k_68;
              }
            t = strc_version_0_0(t);
            t = SSL_exit((ATerm) ATmakeInt(0));
          }
          ;
          LocalPopChoice(j_68);
        }
      else
        {
          t = i_68;
        }
      {
        ATerm m_68 = t;
        int n_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_36 = NULL;
            g_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm o_68 = t;
              int p_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_45 = NULL;
                  t = eval_config_0_0(t);
                  d_45 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_45);
                  t = d_45;
                  ;
                  LocalPopChoice(p_68);
                }
              else
                {
                  t = o_68;
                }
              t = g_36;
            }
            ;
            LocalPopChoice(n_68);
          }
        else
          {
            t = m_68;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue))));
            t = SSL_exit((ATerm) ATmakeInt(1));
            t = (ATerm) ATinsert(ATempty, term_q_68);
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        {
          ATerm g_30 (ATerm t)
          {
            ATerm i_36 = NULL,i_45 = NULL;
            i_36 = t;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
            {
              ATerm r_68 = t;
              int s_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_45 = NULL;
                  t = eval_config_0_0(t);
                  h_45 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), h_45);
                  t = h_45;
                  ;
                  LocalPopChoice(s_68);
                }
              else
                {
                  t = r_68;
                }
              i_45 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_45), (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue))));
              t = i_36;
            }
            return(t);
          }
          t = if_verbose1_1_0(g_30, t);
        }
      }
    }
  }
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm t_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0_0(t);
      {
        ATerm i_30 (ATerm t)
        {
          ATerm q_30 (ATerm t)
          {
            ATerm j_36 = NULL;
            j_36 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(CheckATermList(j_36), (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(CheckATermList(j_36), term_v_68));
            return(t);
          }
          t = if_verbose1_1_0(q_30, t);
          return(t);
        }
        ATerm j_30 (ATerm t)
        {
          ATerm r_30 (ATerm t)
          {
            ATerm w_68 = t;
            int x_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_36 = NULL;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
                {
                  ATerm y_68 = t;
                  int z_68 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_45 = NULL;
                      t = eval_config_0_0(t);
                      o_45 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_45);
                      t = o_45;
                      ;
                      LocalPopChoice(z_68);
                    }
                  else
                    {
                      t = y_68;
                    }
                  k_36 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, k_36);
                }
                ;
                LocalPopChoice(x_68);
              }
            else
              {
                t = w_68;
                t = term_a_69;
              }
            t = front_end_0_0(t);
            t = optimize_0_0(t);
            t = back_end_0_0(t);
            t = c_compile_0_0(t);
            return(t);
          }
          t = xtc_temp_files_1_0(r_30, t);
          return(t);
        }
        t = profile_p__2_0(i_30, j_30, t);
        {
          ATerm t_30 (ATerm t)
          {
            ATerm l_36 = NULL;
            t = run_time_0_0(t);
            l_36 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue))));
            t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_69), l_36), term_b_69));
            return(t);
          }
          t = if_verbose2_1_0(t_30, t);
          t = SSL_exit((ATerm) ATmakeInt(0));
        }
      }
      ;
      LocalPopChoice(u_68);
    }
  else
    {
      t = t_68;
      {
        ATerm m_36 = NULL;
        t = run_time_0_0(t);
        m_36 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_36), (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue))));
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
