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
ATerm term_s_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_l_76;
ATerm term_k_76;
ATerm term_f_76;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_a_76;
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
ATerm term_d_75;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_k_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_k_73;
ATerm term_h_73;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_r_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_v_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_q_70;
ATerm term_p_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_i_70;
ATerm term_h_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_z_69;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_t_69;
ATerm term_s_69;
ATerm term_r_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_l_69;
ATerm term_z_68;
ATerm term_y_68;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_p_68;
ATerm term_l_68;
ATerm term_k_68;
ATerm term_h_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_z_67;
ATerm term_p_67;
ATerm term_o_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_i_67;
ATerm term_h_67;
ATerm term_d_67;
ATerm term_a_67;
ATerm term_z_66;
ATerm term_y_66;
ATerm term_v_66;
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
ATerm term_h_65;
ATerm term_c_64;
ATerm term_v_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_h_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_w_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_r_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_y_61;
ATerm term_j_61;
ATerm term_f_61;
ATerm term_c_61;
ATerm term_x_60;
ATerm term_t_60;
ATerm term_s_60;
ATerm term_q_60;
ATerm term_p_60;
ATerm term_m_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_e_60;
ATerm term_b_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_x_58;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_s_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_y_56;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_s_56;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_p_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_z_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_x_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
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
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_f_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_u_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_d_51;
ATerm term_w_50;
ATerm term_r_50;
ATerm term_m_50;
ATerm term_l_50;
ATerm term_g_50;
ATerm term_b_50;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_k_49;
ATerm term_q_48;
ATerm term_p_48;
ATerm term_l_48;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_n_45;
ATerm term_l_45;
ATerm term_d_45;
ATerm term_s_44;
ATerm term_q_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_x_42;
ATerm term_v_42;
ATerm term_r_42;
ATerm term_o_42;
ATerm term_j_42;
ATerm term_h_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_p_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_x_40;
ATerm term_u_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_a_38;
ATerm term_q_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
void init_constant_terms (void)
{
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize3", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_52, term_p_41, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_52, term_d_36, term_z_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_b_42, term_c_53);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_53, term_x_43, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_53, term_i_53, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_53, term_m_53, term_n_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_53, term_q_53, term_r_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_53, term_u_53, term_v_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_53, term_y_53, term_z_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_54, term_c_54, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_g_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_t_43, term_k_54);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_54, term_n_54, term_o_54);
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_54, term_t_54, term_u_54);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_54, term_z_54, term_a_55);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_55, term_d_55, term_e_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_55, term_h_55, term_i_55);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_55, term_l_55, term_m_55);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_55, term_p_55, term_q_55);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_55, term_t_55, term_u_55);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_55, term_z_55, term_g_56);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_56, term_j_56, term_k_56);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_56, term_n_56, term_o_56);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_56, term_r_56, term_s_56);
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_56, term_p_43, term_v_56);
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_56));
  term_y_56 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_56, term_y_56, term_b_57);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_57, term_e_57, term_f_57);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_57, term_i_57, term_j_57);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_b_60));
  term_b_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(sym__2, term_q_60, term_e_60);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_66));
  term_y_66 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_67));
  term_d_67 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(sym__2, term_o_67, term_e_68);
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_68));
  term_k_68 = (ATerm) ATmakeAppl(sym__2, term_o_67, term_p_67);
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_68));
  term_p_68 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(sym__2, term_y_36, term_z_59);
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(sym__2, term_d_62, term_z_59);
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(sym__2, term_x_58, term_z_59);
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(sym__2, term_d_45, term_z_59);
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(sym__2, term_c_70, term_z_59);
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_x_35);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(sym__2, term_k_70, term_z_59);
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(sym__2, term_n_70, term_z_59);
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(sym__2, term_q_70, term_z_59);
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym__2, term_y_68, term_z_68);
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(sym__2, term_x_73, term_z_59);
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(sym__2, term_j_65, term_i_75);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_36);
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(sym__2, term_r_42, term_x_35);
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(sym__2, term_v_42, term_x_43);
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_r_75));
  term_r_75 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(sym__2, term_i_58, (ATerm) ATempty);
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_107 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm e_11 (ATerm d_31, ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm f_11 (ATerm b_31, ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm g_11 (ATerm q_51, ATerm r_51, ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm c_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm r_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm l_5 (ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm u_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm m_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm m_7 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm if_keep6_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm x_8 (ATerm);
ATerm p_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm v_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
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
ATerm r_11 (ATerm);
ATerm v_11 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm p_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm q_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm z_14 (ATerm);
ATerm b_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm z_15 (ATerm);
ATerm b_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm m_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm d_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm t_18 (ATerm);
ATerm x_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm rename_defs_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm);
ATerm k_11 (ATerm z_56, ATerm a_57, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm f_109 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm a_116 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm extract_0_0 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep2_1_0 (ATerm v_108 (ATerm), ATerm);
ATerm t_20 (ATerm);
ATerm x_20 (ATerm);
ATerm z_20 (ATerm);
ATerm d_21 (ATerm);
ATerm f_21 (ATerm);
ATerm t_21 (ATerm);
ATerm frontend_0_0 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm save_as_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm if_keep3_1_0 (ATerm w_108 (ATerm), ATerm);
ATerm h_11 (ATerm v_85 (ATerm), ATerm i_31, ATerm);
ATerm i_11 (ATerm q_54, ATerm r_54, ATerm);
ATerm j_11 (ATerm i_106 (ATerm), ATerm n_469, ATerm y_54, ATerm);
ATerm m_11 (ATerm p_104 (ATerm), ATerm u_49, ATerm s_49, ATerm);
ATerm w_17 (ATerm l_17, ATerm);
ATerm x_17 (ATerm n_17, ATerm o_17, ATerm p_17, ATerm);
ATerm g_22 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm h_22 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm i_22 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm l_116 (ATerm), ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm s_22 (ATerm);
ATerm v_22 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm k_23 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm p_23 (ATerm);
ATerm r_23 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm u_107 (ATerm), ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm basename_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm u_23 (ATerm);
ATerm v_23 (ATerm);
ATerm x_23 (ATerm);
ATerm c_24 (ATerm);
ATerm n_11 (ATerm m_31, ATerm);
ATerm d_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm i_24 (ATerm);
ATerm parse_0_0 (ATerm);
ATerm k_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm u_24 (ATerm);
ATerm v_24 (ATerm);
ATerm f_25 (ATerm);
ATerm h_25 (ATerm);
ATerm l_25 (ATerm);
ATerm m_25 (ATerm);
ATerm o_25 (ATerm);
ATerm q_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm u_25 (ATerm);
ATerm c_26 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_11 (ATerm a_61, ATerm b_61, ATerm);
ATerm end_scope_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm k_26 (ATerm);
ATerm n_26 (ATerm);
ATerm q_26 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm m_115 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm q_11 (ATerm g_48, ATerm h_48, ATerm);
ATerm s_11 (ATerm m_48, ATerm n_48, ATerm);
ATerm t_11 (ATerm x_57, ATerm z_57, ATerm b_58, ATerm d_58, ATerm y_57, ATerm a_58, ATerm c_58, ATerm e_58, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm debug_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm u_11 (ATerm s_51, ATerm t_51, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm x_11 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm l_38, ATerm k_38, ATerm);
ATerm y_11 (ATerm v_97 (ATerm), ATerm h_38, ATerm g_38, ATerm);
ATerm v_26 (ATerm);
ATerm z_11 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm);
ATerm a_12 (ATerm o_112 (ATerm), ATerm c_62, ATerm b_62, ATerm);
ATerm d_12 (ATerm a_51, ATerm b_51, ATerm);
ATerm b_29 (ATerm t_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_12 (ATerm w_54, ATerm);
ATerm c_12 (ATerm i_51, ATerm j_51, ATerm);
ATerm _2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_26 (ATerm);
ATerm y_26 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm z_26 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm c_27 (ATerm);
ATerm e_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm k_27 (ATerm);
ATerm m_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm w_27 (ATerm);
ATerm y_27 (ATerm);
ATerm c_28 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm o_34 (ATerm j_33, ATerm);
ATerm g_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm m_28 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm e_12 (ATerm d_56, ATerm c_56, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm f_12 (ATerm a_56, ATerm b_56, ATerm);
ATerm at_end_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_36 (ATerm b_36, ATerm);
ATerm conc_0_0 (ATerm);
ATerm g_12 (ATerm e_56, ATerm f_56, ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm u_28 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm x_28 (ATerm);
ATerm a_29 (ATerm);
ATerm e_29 (ATerm);
ATerm g_29 (ATerm);
ATerm l_29 (ATerm);
ATerm m_29 (ATerm);
ATerm n_29 (ATerm);
ATerm p_29 (ATerm);
ATerm s_29 (ATerm);
ATerm t_29 (ATerm);
ATerm u_29 (ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm h_30 (ATerm);
ATerm i_30 (ATerm);
ATerm j_30 (ATerm);
ATerm o_30 (ATerm);
ATerm r_30 (ATerm);
ATerm t_30 (ATerm);
ATerm c_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm l_31 (ATerm);
ATerm n_31 (ATerm);
ATerm o_31 (ATerm);
ATerm r_31 (ATerm);
ATerm z_31 (ATerm);
ATerm b_32 (ATerm);
ATerm i_32 (ATerm);
ATerm j_32 (ATerm);
ATerm k_32 (ATerm);
ATerm l_32 (ATerm);
ATerm m_32 (ATerm);
ATerm o_32 (ATerm);
ATerm t_32 (ATerm);
ATerm v_32 (ATerm);
ATerm z_32 (ATerm);
ATerm a_33 (ATerm);
ATerm b_33 (ATerm);
ATerm c_33 (ATerm);
ATerm d_33 (ATerm);
ATerm e_33 (ATerm);
ATerm f_33 (ATerm);
ATerm g_33 (ATerm);
ATerm h_33 (ATerm);
ATerm i_33 (ATerm);
ATerm k_33 (ATerm);
ATerm l_33 (ATerm);
ATerm s_33 (ATerm);
ATerm t_33 (ATerm);
ATerm u_33 (ATerm);
ATerm v_33 (ATerm);
ATerm w_33 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm c_34 (ATerm);
ATerm e_34 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_77 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_34 (ATerm);
ATerm i_34 (ATerm);
ATerm j_34 (ATerm);
ATerm k_34 (ATerm);
ATerm l_34 (ATerm);
ATerm m_34 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm h_12 (ATerm m_62, ATerm n_62, ATerm);
ATerm i_12 (ATerm v_60, ATerm w_60, ATerm u_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_34 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm);
ATerm v_34 (ATerm);
ATerm w_34 (ATerm);
ATerm b_35 (ATerm);
ATerm d_35 (ATerm);
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm k_12 (ATerm x_55, ATerm y_55, ATerm);
ATerm l_12 (ATerm w_45, ATerm x_45, ATerm);
ATerm Cons_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm);
ATerm i_35 (ATerm);
ATerm k_35 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm l_35 (ATerm);
ATerm n_35 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm o_35 (ATerm);
ATerm p_35 (ATerm);
ATerm q_35 (ATerm);
ATerm t_35 (ATerm);
ATerm u_35 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_99(t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = h_18;
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
        t = foldr_2_0(u_99, v_99, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_0, x_0);
        t = v_99(t);
      }
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      b_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(a_1, b_1, t);
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
      ATerm y_35 = ATgetArgument(t, 0);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = foldr_2_0(g_1, h_1, t);
  c_1 = t;
  t = SSL_TicksToSeconds(c_1);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_107 (ATerm), ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 = NULL,z_1 = NULL;
      i_1 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_1, term_d_36);
      t = geq_0_0(t);
      t = i_1;
      t = t_107(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t = term_f_36;
  v_2 = t;
  t = (ATerm) ATinsert(ATempty, term_j_36);
  w_2 = t;
  t = SSL_printnl(v_2, w_2);
  t = u_2;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
  x_2 = t;
  t = term_f_36;
  y_2 = t;
  t = (ATerm) ATinsert(ATempty, x_2);
  z_2 = t;
  t = SSL_printnl(y_2, z_2);
  t = x_2;
  return(t);
}
ATerm e_11 (ATerm d_31, ATerm t)
{
  ATerm g_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_36;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = get_outfile_1_0(l_1, t);
      }
    g_2 = t;
    t = term_s_36;
    t = get_config_0_0(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_36, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_2), g_2), term_r_36), d_31));
    t = if_verbose3_1_0(m_1, t);
    if(match_cons(t, sym__2))
      {
        s_2 = ATgetArgument(t, 0);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm a_3 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
        t = k_11(s_2, t_2, t);
        t = term_u_36;
        a_3 = t;
        t = SSL_exit(a_3);
        return(t);
      }
      t = fork_and_wait_1_0(n_1, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_2);
    }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm h_3 = NULL,k_3 = NULL,l_3 = NULL;
  h_3 = t;
  t = term_f_36;
  k_3 = t;
  t = (ATerm) ATinsert(ATempty, term_v_36);
  l_3 = t;
  t = SSL_printnl(k_3, l_3);
  t = h_3;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  m_3 = t;
  t = term_f_36;
  n_3 = t;
  t = (ATerm) ATinsert(ATempty, m_3);
  o_3 = t;
  t = SSL_printnl(n_3, o_3);
  t = m_3;
  return(t);
}
ATerm f_11 (ATerm b_31, ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  t = if_verbose2_1_0(o_1, t);
  t = get_outfile_1_0(r_1, t);
  b_3 = t;
  t = term_x_36;
  t = get_config_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_3), term_r_36), b_31), term_y_36));
  t = conc_0_0(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_36, e_3);
  t = if_verbose3_1_0(s_1, t);
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm p_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
      t = k_11(f_3, g_3, t);
      t = term_u_36;
      p_3 = t;
      t = SSL_exit(p_3);
      return(t);
    }
    t = fork_and_wait_1_0(t_1, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_3);
  }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = if_verbose1_1_0(y_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_11(w_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      v_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11(v_3, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  t = term_f_36;
  t_3 = t;
  t = (ATerm) ATinsert(CheckATermList(s_3), term_z_36);
  u_3 = t;
  t = SSL_printnl(t_3, u_3);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(CheckATermList(s_3), term_z_36));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm a_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_3 = NULL;
      q_3 = t;
      t = term_y_36;
      t = get_config_0_0(t);
      t = q_3;
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = a_37;
      t = profile_p__2_0(u_1, v_1, t);
    }
  return(t);
}
ATerm g_11 (ATerm q_51, ATerm r_51, ATerm t)
{
  t = SSL_rename(q_51, r_51);
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 = NULL;
        t = o_4;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_q_37;
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, term_q_37);
        t = u_11(p_4, j_1, t);
        t = SSL_remove(p_4);
        t = term_q_37;
        ;
        LocalPopChoice(o_37);
      }
    else
      {
        t = j_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_1 = NULL;
              t = o_4;
              t = q_0(t);
              p_1 = t;
              {
                ATerm w_37 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_37 = t;
                    int z_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(z_37);
                      }
                    else
                      {
                        t = x_37;
                        {
                          ATerm q_1 = NULL;
                          q_1 = t;
                          if((p_4 != t))
                            {
                              _fail(t);
                            }
                          t = q_1;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_37;
                  }
                t = (ATerm) ATmakeAppl(sym__2, p_4, p_1);
                t = g_11(p_4, p_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
              }
              ;
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              t = o_4;
              t = q_0(t);
              if((p_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_4);
            }
        }
      }
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  t = pass_verbose_0_0(t);
  u_4 = t;
  t = term_m_38;
  t = get_config_0_0(t);
  t = map_1_0(c_2, t);
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_4), (ATerm) ATinsert(ATempty, term_n_38)), u_4);
  t = concat_0_0(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_4), term_m_38);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm y_4 = NULL,c_5 = NULL;
  t = pass_verbose_0_0(t);
  y_4 = t;
  t = term_m_38;
  t = get_config_0_0(t);
  t = map_1_0(i_2, t);
  c_5 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(c_5), (ATerm) ATinsert(ATempty, term_n_38)), y_4);
  t = concat_0_0(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_5), term_m_38);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm o_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_38 = t;
      int t_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(t_38);
        }
      else
        {
          t = r_38;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_38);
      t = xtc_transform_file_2_0(a_2, b_2, t);
    }
  else
    {
      t = o_38;
      t = xtc_transform_term_2_0(f_2, h_2, t);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL;
  g_5 = t;
  t = term_f_36;
  h_5 = t;
  t = (ATerm) ATinsert(ATempty, term_u_38);
  i_5 = t;
  t = SSL_printnl(h_5, i_5);
  t = g_5;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = if_verbose1_1_0(m_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm y_38 = t;
  int h_39 = stack_ptr;
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
      LocalPopChoice(h_39);
      t = xtc_transform_file_2_0(n_2, o_2, t);
    }
  else
    {
      t = y_38;
      t = xtc_transform_term_2_0(c_3, i_3, t);
    }
  t = if_keep1_1_0(j_3, t);
  t = olevel_2_0(x_3, y_3, t);
  t = if_keep1_1_0(g_4, t);
  t = olevel_2_0(i_4, bound_unbound_vars_0_0, t);
  t = if_keep1_1_0(j_4, t);
  {
    ATerm k_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_39 = t;
        int r_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(r_39);
          }
        else
          {
            t = p_39;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(n_39);
        t = xtc_transform_file_2_0(l_4, m_4, t);
      }
    else
      {
        t = k_39;
        t = xtc_transform_term_2_0(n_4, q_4, t);
      }
    t = s2c_0_0(t);
    {
      ATerm s_39 = t;
      int w_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_39 = t;
          int b_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(b_40);
            }
          else
            {
              t = x_39;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(w_39);
          t = xtc_transform_file_2_0(r_4, s_4, t);
        }
      else
        {
          t = s_39;
          t = xtc_transform_term_2_0(t_4, x_4, t);
        }
      {
        ATerm c_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_40 = t;
            int w_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(w_40);
              }
            else
              {
                t = v_40;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(s_40);
            t = xtc_transform_file_2_0(b_5, d_5, t);
          }
        else
          {
            t = c_40;
            t = xtc_transform_term_2_0(f_5, l_5, t);
          }
        t = rename_to_1_0(s_5, t);
      }
    }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,m_5 = NULL;
  j_5 = t;
  t = term_f_36;
  k_5 = t;
  t = (ATerm) ATinsert(CheckATermList(j_5), term_x_40);
  m_5 = t;
  t = SSL_printnl(k_5, m_5);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(CheckATermList(j_5), term_x_40));
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_f_41;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm n_5 = NULL;
  t = pass_verbose_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(n_5), term_n_38);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_41;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm o_5 = NULL;
  t = pass_verbose_0_0(t);
  o_5 = t;
  t = (ATerm) ATinsert(CheckATermList(o_5), term_n_38);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
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
      LocalPopChoice(s_41);
      t = xtc_transform_file_2_0(z_3, c_4, t);
    }
  else
    {
      t = r_41;
      t = xtc_transform_term_2_0(d_4, e_4, t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm r_5 = NULL;
  t = pass_verbose_0_0(t);
  r_5 = t;
  t = (ATerm) ATinsert(CheckATermList(r_5), term_n_38);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm t_5 = NULL;
  t = pass_verbose_0_0(t);
  t_5 = t;
  t = (ATerm) ATinsert(CheckATermList(t_5), term_n_38);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = save_as_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_y_41;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = save_as_1_0(k_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_42;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_d_42;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm v_5 = NULL;
  t = pass_verbose_0_0(t);
  v_5 = t;
  t = (ATerm) ATinsert(CheckATermList(v_5), term_n_38);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_d_42;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm w_5 = NULL;
  t = pass_verbose_0_0(t);
  w_5 = t;
  t = (ATerm) ATinsert(CheckATermList(w_5), term_n_38);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm x_5 = NULL;
  t = term_f_42;
  t = xtc_find_0_0(t);
  x_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_5), term_h_42);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_5 = NULL;
  t = term_f_42;
  t = xtc_find_0_0(t);
  y_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_5), term_h_42);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = get_outfile_1_0(u_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_o_42;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(j_2, t);
  t = profile_p__2_0(k_2, l_2, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = NULL,b_6 = NULL;
      z_5 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      b_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_6, term_p_41);
      t = geq_0_0(t);
      t = z_5;
      t = u_108(t);
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
    }
  return(t);
}
ATerm olevel_2_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  ATerm t_42 = t;
  int u_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_6 = NULL,f_6 = NULL,g_6 = NULL;
      c_6 = t;
      t = q_116(t);
      f_6 = t;
      t = term_v_42;
      t = get_config_0_0(t);
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_6, f_6);
      t = geq_0_0(t);
      t = c_6;
      t = r_116(t);
      ;
      LocalPopChoice(u_42);
    }
  else
    {
      t = t_42;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm h_6 = NULL;
  t = pass_verbose_0_0(t);
  h_6 = t;
  t = (ATerm) ATinsert(CheckATermList(h_6), term_n_38);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm i_6 = NULL;
  t = pass_verbose_0_0(t);
  i_6 = t;
  t = (ATerm) ATinsert(CheckATermList(i_6), term_n_38);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm j_6 = NULL;
  t = pass_verbose_0_0(t);
  j_6 = t;
  t = (ATerm) ATinsert(CheckATermList(j_6), term_n_38);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_x_42;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm k_6 = NULL;
  t = pass_verbose_0_0(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(k_6), term_n_38);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_43 = t;
      int c_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_43 = t;
          int e_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(e_43);
            }
          else
            {
              t = d_43;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(c_43);
          t = xtc_transform_file_2_0(a_6, d_6, t);
        }
      else
        {
          t = b_43;
          t = xtc_transform_term_2_0(e_6, m_6, t);
        }
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      {
        ATerm f_43 = t;
        int g_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = h_43;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(g_43);
            t = xtc_transform_file_2_0(p_6, s_6, t);
          }
        else
          {
            t = f_43;
            t = xtc_transform_term_2_0(u_6, m_7, t);
          }
      }
    }
  return(t);
}
ATerm if_keep5_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm k_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_6 = NULL,n_6 = NULL;
      l_6 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      n_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, term_p_43);
      t = geq_0_0(t);
      t = l_6;
      t = y_108(t);
      ;
      LocalPopChoice(n_43);
    }
  else
    {
      t = k_43;
    }
  return(t);
}
ATerm if_keep4_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 = NULL,q_6 = NULL;
      o_6 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      q_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_6, term_t_43);
      t = geq_0_0(t);
      t = o_6;
      t = x_108(t);
      ;
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
    }
  return(t);
}
ATerm if_keep6_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm u_43 = t;
  int v_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 = NULL,t_6 = NULL;
      r_6 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      t_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_6, term_x_43);
      t = geq_0_0(t);
      t = r_6;
      t = z_108(t);
      ;
      LocalPopChoice(v_43);
    }
  else
    {
      t = u_43;
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  v_6 = t;
  t = term_f_36;
  w_6 = t;
  t = (ATerm) ATinsert(ATempty, term_y_43);
  x_6 = t;
  t = SSL_printnl(w_6, x_6);
  t = v_6;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = if_verbose1_1_0(q_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = if_verbose3_1_0(r_7, t);
  t = olevel_2_0(a_8, c_8, t);
  t = if_keep1_1_0(r_8, t);
  t = olevel_2_0(x_8, p_9, t);
  t = if_keep2_1_0(b_10, t);
  t = olevel_2_0(d_10, e_10, t);
  t = if_keep6_1_0(n_10, t);
  t = olevel_2_0(p_10, q_10, t);
  t = if_keep4_1_0(z_10, t);
  t = olevel_2_0(b_11, r_11, t);
  {
    ATerm z_43 = t;
    int d_44 = stack_ptr;
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
        LocalPopChoice(d_44);
        t = xtc_transform_file_2_0(q_12, r_12, t);
      }
    else
      {
        t = z_43;
        t = xtc_transform_term_2_0(s_12, t_12, t);
      }
    t = olevel_2_0(u_12, v_12, t);
    t = olevel_2_0(f_13, g_13, t);
    t = if_keep4_1_0(r_13, t);
    t = olevel_2_0(t_13, u_13, t);
    t = olevel_2_0(a_14, b_14, t);
    t = if_keep2_1_0(j_14, t);
    t = olevel_2_0(n_14, q_14, t);
    t = if_keep5_1_0(z_14, t);
    t = olevel_2_0(h_15, i_15, t);
    t = if_keep5_1_0(n_15, t);
    t = olevel_2_0(p_15, q_15, t);
    t = if_keep3_1_0(v_15, t);
    t = olevel_2_0(x_15, z_15, t);
    t = if_keep3_1_0(k_17, t);
    t = olevel_2_0(q_17, r_17, t);
    t = if_keep1_1_0(f_18, t);
    t = olevel_2_0(o_18, p_18, t);
    t = if_keep1_1_0(z_18, t);
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm y_6 = NULL,a_7 = NULL,b_7 = NULL;
  y_6 = t;
  t = term_f_36;
  a_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_6), term_i_44);
  b_7 = t;
  t = SSL_printnl(a_7, b_7);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(CheckATermList(y_6), term_i_44));
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  t = term_v_42;
  t = get_config_0_0(t);
  t = debug_1_0(s_7, t);
  t = c_7;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_j_44;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_44 = t;
      int n_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(n_44);
        }
      else
        {
          t = m_44;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_44);
      t = xtc_transform_file_2_0(e_8, g_8, t);
    }
  else
    {
      t = k_44;
      t = xtc_transform_term_2_0(k_8, m_8, t);
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm h_7 = NULL;
  t = pass_verbose_0_0(t);
  h_7 = t;
  t = (ATerm) ATinsert(CheckATermList(h_7), term_n_38);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_n_38);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = save_as_1_0(t_8, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_s_44;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 = NULL;
      t_7 = t;
      {
        ATerm c_45 = t;
        if((PushChoice() == 0))
          {
            t = term_d_45;
            t = get_config_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_45;
          }
        t = t_7;
        {
          ATerm e_45 = t;
          int f_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_45 = t;
              int h_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(h_45);
                }
              else
                {
                  t = g_45;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(f_45);
              t = xtc_transform_file_2_0(r_9, s_9, t);
            }
          else
            {
              t = e_45;
              t = xtc_transform_term_2_0(v_9, a_10, t);
            }
        }
      }
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_l_45;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm w_1 = NULL;
  t = pass_verbose_0_0(t);
  w_1 = t;
  t = (ATerm) ATinsert(CheckATermList(w_1), term_n_38);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_l_45;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm x_1 = NULL;
  t = pass_verbose_0_0(t);
  x_1 = t;
  t = (ATerm) ATinsert(CheckATermList(x_1), term_n_38);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = save_as_1_0(c_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_x_43;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(p_45);
      t = xtc_transform_file_2_0(f_10, g_10, t);
    }
  else
    {
      t = o_45;
      t = xtc_transform_term_2_0(h_10, i_10, t);
    }
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_45);
        t = xtc_transform_file_2_0(j_10, k_10, t);
      }
    else
      {
        t = s_45;
        t = xtc_transform_term_2_0(l_10, m_10, t);
      }
  }
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm u_7 = NULL;
  t = pass_verbose_0_0(t);
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(u_7), term_n_38);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm v_7 = NULL;
  t = pass_verbose_0_0(t);
  v_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_7), term_n_38);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_g_46;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_n_38);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_g_46;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_n_38);
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = save_as_1_0(o_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_h_46;
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm m_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_46 = t;
      int s_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_47);
        }
      else
        {
          t = x_46;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_46);
      t = xtc_transform_file_2_0(r_10, s_10, t);
    }
  else
    {
      t = m_46;
      t = xtc_transform_term_2_0(t_10, u_10, t);
    }
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_47 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(d_48);
          }
        else
          {
            t = v_47;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(u_47);
        t = xtc_transform_file_2_0(v_10, w_10, t);
      }
    else
      {
        t = t_47;
        t = xtc_transform_term_2_0(x_10, y_10, t);
      }
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm y_7 = NULL;
  t = pass_verbose_0_0(t);
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(y_7), term_n_38);
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm z_7 = NULL;
  t = pass_verbose_0_0(t);
  z_7 = t;
  t = (ATerm) ATinsert(CheckATermList(z_7), term_n_38);
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_n_38);
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_n_38);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = save_as_1_0(a_11, t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_48 = t;
      int j_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_49);
        }
      else
        {
          t = y_48;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(s_48);
      t = xtc_transform_file_2_0(v_11, m_12, t);
    }
  else
    {
      t = r_48;
      t = xtc_transform_term_2_0(n_12, p_12, t);
    }
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm f_8 = NULL;
  t = pass_verbose_0_0(t);
  f_8 = t;
  t = (ATerm) ATinsert(CheckATermList(f_8), term_n_38);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm h_8 = NULL;
  t = pass_verbose_0_0(t);
  h_8 = t;
  t = (ATerm) ATinsert(CheckATermList(h_8), term_n_38);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_k_49;
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm j_8 = NULL;
  t = pass_verbose_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(CheckATermList(j_8), term_n_38);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = term_k_49;
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm l_8 = NULL;
  t = pass_verbose_0_0(t);
  l_8 = t;
  t = (ATerm) ATinsert(CheckATermList(l_8), term_n_38);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm l_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(o_49);
        }
      else
        {
          t = n_49;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(m_49);
      t = xtc_transform_file_2_0(w_12, x_12, t);
    }
  else
    {
      t = l_49;
      t = xtc_transform_term_2_0(y_12, z_12, t);
    }
  t = bound_unbound_vars_0_0(t);
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_49 = t;
        int t_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(t_49);
          }
        else
          {
            t = r_49;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(q_49);
        t = xtc_transform_file_2_0(a_13, b_13, t);
      }
    else
      {
        t = p_49;
        t = xtc_transform_term_2_0(d_13, e_13, t);
      }
  }
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm n_8 = NULL;
  t = pass_verbose_0_0(t);
  n_8 = t;
  t = (ATerm) ATinsert(CheckATermList(n_8), term_n_38);
  return(t);
}
ATerm y_12 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm o_8 = NULL;
  t = pass_verbose_0_0(t);
  o_8 = t;
  t = (ATerm) ATinsert(CheckATermList(o_8), term_n_38);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm p_8 = NULL;
  t = pass_verbose_0_0(t);
  p_8 = t;
  t = (ATerm) ATinsert(CheckATermList(p_8), term_n_38);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm q_8 = NULL;
  t = pass_verbose_0_0(t);
  q_8 = t;
  t = (ATerm) ATinsert(CheckATermList(q_8), term_n_38);
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_49 = t;
      int a_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(a_50);
        }
      else
        {
          t = z_49;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(y_49);
      t = xtc_transform_file_2_0(h_13, k_13, t);
    }
  else
    {
      t = x_49;
      t = xtc_transform_term_2_0(l_13, p_13, t);
    }
  return(t);
}
ATerm h_13 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm s_8 = NULL;
  t = pass_verbose_0_0(t);
  s_8 = t;
  t = (ATerm) ATinsert(CheckATermList(s_8), term_n_38);
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm u_8 = NULL;
  t = pass_verbose_0_0(t);
  u_8 = t;
  t = (ATerm) ATinsert(CheckATermList(u_8), term_n_38);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = save_as_1_0(s_13, t);
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_b_50;
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm c_50 = t;
  int d_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = t;
      int f_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_50);
        }
      else
        {
          t = e_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_50);
      t = xtc_transform_file_2_0(w_13, x_13, t);
    }
  else
    {
      t = c_50;
      t = xtc_transform_term_2_0(y_13, z_13, t);
    }
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = term_g_50;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm v_8 = NULL;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(CheckATermList(v_8), term_n_38);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_g_50;
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm w_8 = NULL;
  t = pass_verbose_0_0(t);
  w_8 = t;
  t = (ATerm) ATinsert(CheckATermList(w_8), term_n_38);
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(i_50);
      t = xtc_transform_file_2_0(c_14, d_14, t);
    }
  else
    {
      t = h_50;
      t = xtc_transform_term_2_0(f_14, i_14, t);
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm y_8 = NULL;
  t = pass_verbose_0_0(t);
  y_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_8), term_n_38);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm a_9 = NULL;
  t = pass_verbose_0_0(t);
  a_9 = t;
  t = (ATerm) ATinsert(CheckATermList(a_9), term_n_38);
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = save_as_1_0(m_14, t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_m_50;
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_50 = t;
      int q_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(q_50);
        }
      else
        {
          t = p_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(o_50);
      t = xtc_transform_file_2_0(s_14, t_14, t);
    }
  else
    {
      t = n_50;
      t = xtc_transform_term_2_0(w_14, x_14, t);
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm b_9 = NULL;
  t = pass_verbose_0_0(t);
  b_9 = t;
  t = (ATerm) ATinsert(CheckATermList(b_9), term_n_38);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm c_9 = NULL;
  t = pass_verbose_0_0(t);
  c_9 = t;
  t = (ATerm) ATinsert(CheckATermList(c_9), term_n_38);
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = save_as_1_0(b_15, t);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm h_15 (ATerm t)
{
  t = term_p_43;
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm s_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_50 = t;
      int v_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_50);
        }
      else
        {
          t = u_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(t_50);
      t = xtc_transform_file_2_0(j_15, k_15, t);
    }
  else
    {
      t = s_50;
      t = xtc_transform_term_2_0(l_15, m_15, t);
    }
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm d_9 = NULL;
  t = pass_verbose_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(CheckATermList(d_9), term_n_38);
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_n_38);
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = save_as_1_0(o_15, t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_50 = t;
      int c_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(c_51);
        }
      else
        {
          t = z_50;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(y_50);
      t = xtc_transform_file_2_0(r_15, s_15, t);
    }
  else
    {
      t = x_50;
      t = xtc_transform_term_2_0(t_15, u_15, t);
    }
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm g_9 = NULL;
  t = pass_verbose_0_0(t);
  g_9 = t;
  t = (ATerm) ATinsert(CheckATermList(g_9), term_n_38);
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_f_46;
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm h_9 = NULL;
  t = pass_verbose_0_0(t);
  h_9 = t;
  t = (ATerm) ATinsert(CheckATermList(h_9), term_n_38);
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = save_as_1_0(w_15, t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm e_51 = t;
  int f_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_51 = t;
      int h_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(h_51);
        }
      else
        {
          t = g_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(f_51);
      t = xtc_transform_file_2_0(b_16, n_16, t);
    }
  else
    {
      t = e_51;
      t = xtc_transform_term_2_0(o_16, q_16, t);
    }
  t = if_keep3_1_0(r_16, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(t_16, t);
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
        t = xtc_transform_file_2_0(w_16, x_16, t);
      }
    else
      {
        t = k_51;
        t = xtc_transform_term_2_0(i_17, j_17, t);
      }
  }
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm i_9 = NULL;
  t = pass_verbose_0_0(t);
  i_9 = t;
  t = (ATerm) ATinsert(CheckATermList(i_9), term_n_38);
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm j_9 = NULL;
  t = pass_verbose_0_0(t);
  j_9 = t;
  t = (ATerm) ATinsert(CheckATermList(j_9), term_n_38);
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = save_as_1_0(s_16, t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  t = term_o_51;
  return(t);
}
ATerm t_16 (ATerm t)
{
  t = save_as_1_0(u_16, t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_p_51;
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm k_9 = NULL;
  t = pass_verbose_0_0(t);
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(k_9), term_n_38);
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm l_9 = NULL;
  t = pass_verbose_0_0(t);
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(l_9), term_n_38);
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = save_as_1_0(m_17, t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = term_u_51;
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_51 = t;
      int y_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(y_51);
        }
      else
        {
          t = x_51;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_51);
      t = xtc_transform_file_2_0(s_17, y_17, t);
    }
  else
    {
      t = v_51;
      t = xtc_transform_term_2_0(z_17, d_18, t);
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = term_z_51;
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm m_9 = NULL;
  t = pass_verbose_0_0(t);
  m_9 = t;
  t = (ATerm) ATinsert(CheckATermList(m_9), term_n_38);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_z_51;
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm n_9 = NULL;
  t = pass_verbose_0_0(t);
  n_9 = t;
  t = (ATerm) ATinsert(CheckATermList(n_9), term_n_38);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = save_as_1_0(g_18, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = term_a_52;
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm b_52 = t;
  int c_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = t;
      int e_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(e_52);
        }
      else
        {
          t = d_52;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(c_52);
      t = xtc_transform_file_2_0(q_18, r_18, t);
    }
  else
    {
      t = b_52;
      t = xtc_transform_term_2_0(t_18, x_18, t);
    }
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_f_52;
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm o_9 = NULL;
  t = pass_verbose_0_0(t);
  o_9 = t;
  t = (ATerm) ATinsert(CheckATermList(o_9), term_n_38);
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_f_52;
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm q_9 = NULL;
  t = pass_verbose_0_0(t);
  q_9 = t;
  t = (ATerm) ATinsert(CheckATermList(q_9), term_n_38);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = save_as_1_0(a_19, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_g_52;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(n_7, t);
  t = profile_p__2_0(o_7, p_7, t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = term_h_52;
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm t_9 = NULL;
  t = pass_verbose_0_0(t);
  t_9 = t;
  t = (ATerm) ATinsert(CheckATermList(t_9), term_n_38);
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = term_h_52;
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm u_9 = NULL;
  t = pass_verbose_0_0(t);
  u_9 = t;
  t = (ATerm) ATinsert(CheckATermList(u_9), term_n_38);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = save_as_1_0(m_19, t);
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = term_i_52;
  return(t);
}
ATerm rename_defs_0_0 (ATerm t)
{
  ATerm j_52 = t;
  int k_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = t;
      int m_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(m_52);
        }
      else
        {
          t = l_52;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_52);
      t = xtc_transform_file_2_0(b_19, h_19, t);
    }
  else
    {
      t = j_52;
      t = xtc_transform_term_2_0(i_19, k_19, t);
    }
  t = if_keep2_1_0(l_19, t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  t = term_c_36;
  {
    ATerm n_52 = t;
    int o_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_52);
      }
    else
      {
        t = n_52;
        t = term_p_41;
      }
    w_9 = t;
    t = term_p_41;
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_9, term_p_41);
    t = s_11(w_9, y_9, t);
    z_9 = t;
    t = SSL_int_to_string(z_9);
    x_9 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, x_9), term_c_36);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(j_116, k_116, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm k_11 (ATerm z_56, ATerm a_57, ATerm t)
{
  t = SSL_execvp(z_56, a_57);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,l_11 = NULL,p_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_11 = ATgetArgument(t, 0);
      {
        ATerm d_2 = NULL,e_2 = NULL;
        t = SSL_int_to_string(d_11);
        d_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_52), d_2), term_p_52);
        e_2 = t;
        t = SSL_concat_strings(e_2);
      }
    }
  else
    {
      ATerm p_2 = NULL,q_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_11 = ATgetArgument(t, 0);
          l_11 = ATgetArgument(t, 1);
          p_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(l_11);
      p_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_11), term_s_52), p_2), term_r_52), d_11);
      q_2 = t;
      t = SSL_concat_strings(q_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  ATerm n_19 (ATerm t)
  {
    t = d_94(t);
    if(((w_11 != NULL) && (w_11 != t)))
      _fail(t);
    else
      w_11 = t;
    return(t);
  }
  t = fetch_1_0(n_19, t);
  t = not_null(w_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_57), term_g_57), term_c_57), term_w_56), term_t_56), term_p_56), term_l_56), term_h_56), term_v_55), term_r_55), term_n_55), term_j_55), term_f_55), term_b_55), term_v_54), term_p_54), term_l_54), term_i_54), term_e_54), term_a_54), term_w_53), term_s_53), term_o_53), term_k_53), term_g_53), term_d_53), term_a_53), term_x_52);
        {
          ATerm q_19 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm l_57 = ATgetArgument(t, 0);
                if((j_12 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm m_57 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_19, t);
        }
        ;
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  {
    ATerm n_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL,a_4 = NULL,b_4 = NULL,f_4 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_57 = ATgetArgument(t, 0);
            c_13 = ATgetArgument(t, 1);
            {
              ATerm q_57 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_13;
        {
          ATerm r_57 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_57;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_4 = t;
          t = term_f_36;
          b_4 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_s_57);
          f_4 = t;
          t = SSL_printnl(b_4, f_4);
          t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATinsert(ATempty, a_4), term_s_57));
        }
        ;
        LocalPopChoice(o_57);
      }
    else
      {
        t = n_57;
      }
    t = o_12;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm f_109 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  t = fork_0_0(t);
  j_13 = t;
  {
    ATerm t_57 = t;
    int u_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_13;
        t = f_109(t);
        ;
        LocalPopChoice(u_57);
      }
    else
      {
        t = t_57;
        t = SSL_waitpid(j_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_57 = ATgetArgument(t, 0);
            if(((ATgetType(v_57) != AT_INT) || (ATgetInt((ATermInt) v_57) != 0)))
              _fail(t);
            {
              ATerm w_57 = ATgetArgument(t, 1);
            }
            {
              ATerm f_58 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  t = a_116(t);
  t = xtc_find_0_0(t);
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_13, m_13);
  {
    ATerm r_19 (ATerm t)
    {
      ATerm o_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_13, m_13);
      t = k_11(n_13, m_13, t);
      t = term_u_36;
      o_13 = t;
      t = SSL_exit(o_13);
      return(t);
    }
    t = fork_and_wait_1_0(r_19, t);
    t = m_13;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  g_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_4 = NULL,a_5 = NULL;
      t = g_14;
      t = xtc_new_file_0_0(t);
      z_4 = t;
      t = n_0(t);
      a_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATinsert(ATempty, z_4), term_r_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(z_4);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_4);
    }
  else
    {
      ATerm p_5 = NULL,q_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_14;
      t = xtc_new_file_0_0(t);
      p_5 = t;
      t = n_0(t);
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_5), term_r_36), h_14), term_g_58));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(p_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,p_0 = NULL,t_0 = NULL;
  p_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_14);
  k_14 = t;
  t = l_14;
  t = v_77(t);
  o_14 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_14);
  p_0 = t;
  t = SSLsetAnnotations(p_0, k_14);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = term_h_58;
  return(t);
}
ATerm t_19 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  t = pass_verbose_0_0(t);
  u_14 = t;
  t = term_i_58;
  t = get_config_0_0(t);
  t = map_1_0(u_19, t);
  v_14 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_14), (ATerm) ATinsert(ATempty, term_n_38)), u_14);
  t = concat_0_0(t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_14), term_i_58);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = term_h_58;
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm a_15 = NULL,d_15 = NULL;
  t = pass_verbose_0_0(t);
  a_15 = t;
  t = term_i_58;
  t = get_config_0_0(t);
  t = map_1_0(x_19, t);
  d_15 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(d_15), (ATerm) ATinsert(ATempty, term_n_38)), a_15);
  t = concat_0_0(t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_15), term_i_58);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm j_58 = t;
  int k_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_58 = t;
      int m_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(m_58);
        }
      else
        {
          t = l_58;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(k_58);
      t = xtc_transform_file_2_0(s_19, t_19, t);
    }
  else
    {
      t = j_58;
      t = xtc_transform_term_2_0(v_19, w_19, t);
    }
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_n_58;
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm f_15 = NULL;
  t = pass_verbose_0_0(t);
  f_15 = t;
  t = (ATerm) ATinsert(CheckATermList(f_15), term_n_38);
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = term_n_58;
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm g_15 = NULL;
  t = pass_verbose_0_0(t);
  g_15 = t;
  t = (ATerm) ATinsert(CheckATermList(g_15), term_n_38);
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = save_as_1_0(d_20, t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_o_58;
  return(t);
}
ATerm extract_0_0 (ATerm t)
{
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_58 = t;
      int s_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(s_58);
        }
      else
        {
          t = r_58;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(q_58);
      t = xtc_transform_file_2_0(y_19, z_19, t);
    }
  else
    {
      t = p_58;
      t = xtc_transform_term_2_0(a_20, b_20, t);
    }
  t = if_keep2_1_0(c_20, t);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_t_58;
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_n_38);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_t_58;
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_n_38);
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = get_outfile_1_0(m_20, t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_u_58;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm v_58 = t;
  int w_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_15 = NULL,z_6 = NULL,d_7 = NULL,e_7 = NULL;
      y_15 = t;
      t = term_x_58;
      t = get_config_0_0(t);
      t = y_15;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_59 = t;
            int b_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_59 = t;
                int d_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(d_59);
                  }
                else
                  {
                    t = c_59;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(b_59);
                t = xtc_transform_file_2_0(e_20, f_20, t);
              }
            else
              {
                t = a_59;
                t = xtc_transform_term_2_0(i_20, j_20, t);
              }
            ;
            LocalPopChoice(z_58);
          }
        else
          {
            t = y_58;
            {
              ATerm i_7 = NULL,j_7 = NULL,l_7 = NULL;
              t = term_f_36;
              i_7 = t;
              t = (ATerm) ATinsert(ATempty, term_e_59);
              j_7 = t;
              t = SSL_printnl(i_7, j_7);
              t = term_p_41;
              l_7 = t;
              t = SSL_exit(l_7);
              t = (ATerm) ATinsert(ATempty, term_e_59);
            }
          }
        t = copy_to_1_0(k_20, t);
        z_6 = t;
        t = term_f_36;
        d_7 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_59));
        e_7 = t;
        t = SSL_printnl(d_7, e_7);
        t = z_6;
        t = xtc_io_exit_0_0(t);
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
ATerm if_keep2_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm g_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_16 = NULL,c_16 = NULL;
      a_16 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      c_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, term_d_36);
      t = geq_0_0(t);
      t = a_16;
      t = v_108(t);
      ;
      LocalPopChoice(h_59);
    }
  else
    {
      t = g_59;
    }
  return(t);
}
ATerm t_20 (ATerm t)
{
  t = term_i_59;
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm d_16 = NULL;
  t = pass_verbose_0_0(t);
  d_16 = t;
  t = (ATerm) ATinsert(CheckATermList(d_16), term_n_38);
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = term_i_59;
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm e_16 = NULL;
  t = pass_verbose_0_0(t);
  e_16 = t;
  t = (ATerm) ATinsert(CheckATermList(e_16), term_n_38);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = save_as_1_0(t_21, t);
  return(t);
}
ATerm t_21 (ATerm t)
{
  t = term_j_59;
  return(t);
}
ATerm frontend_0_0 (ATerm t)
{
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_59 = t;
      int n_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(n_59);
        }
      else
        {
          t = m_59;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(l_59);
      t = xtc_transform_file_2_0(t_20, x_20, t);
    }
  else
    {
      t = k_59;
      t = xtc_transform_term_2_0(z_20, d_21, t);
    }
  t = if_keep2_1_0(f_21, t);
  return(t);
}
ATerm a_22 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm k_16 = NULL;
  t = pass_verbose_0_0(t);
  k_16 = t;
  t = (ATerm) ATinsert(CheckATermList(k_16), term_p_59);
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm l_16 = NULL;
  t = pass_verbose_0_0(t);
  l_16 = t;
  t = (ATerm) ATinsert(CheckATermList(l_16), term_p_59);
  return(t);
}
ATerm save_as_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  f_16 = t;
  {
    ATerm v_21 (ATerm t)
    {
      t = get_outfile_1_0(w_85, t);
      if(((g_16 != NULL) && (g_16 != t)))
        _fail(t);
      else
        g_16 = t;
      return(t);
    }
    t = copy_to_1_0(v_21, t);
    {
      ATerm q_59 = t;
      int r_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_59 = t;
          int t_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(t_59);
            }
          else
            {
              t = s_59;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(r_59);
          t = xtc_transform_file_2_0(a_22, b_22, t);
        }
      else
        {
          t = q_59;
          t = xtc_transform_term_2_0(c_22, d_22, t);
        }
      {
        ATerm e_22 (ATerm t)
        {
          ATerm m_16 = NULL;
          t = term_u_59;
          m_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), term_u_59);
          t = l_12(not_null(g_16), m_16, t);
          if(((h_16 != NULL) && (h_16 != t)))
            _fail(t);
          else
            h_16 = t;
          return(t);
        }
        t = copy_to_1_0(e_22, t);
        t = term_f_36;
        i_16 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_16)), term_w_59), not_null(g_16)), term_v_59));
        j_16 = t;
        t = SSL_printnl(i_16, j_16);
        t = f_16;
      }
    }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm x_59 = t;
  int y_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_16 = NULL,v_16 = NULL;
      p_16 = t;
      t = term_r_42;
      t = get_config_0_0(t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_16, term_b_42);
      t = geq_0_0(t);
      t = p_16;
      t = w_108(t);
      ;
      LocalPopChoice(y_59);
    }
  else
    {
      t = x_59;
    }
  return(t);
}
ATerm h_11 (ATerm v_85 (ATerm), ATerm i_31, ATerm t)
{
  ATerm y_16 = NULL;
  t = term_z_59;
  t = v_85(t);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_a_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_16), (ATerm) ATempty))))));
  return(t);
}
ATerm i_11 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm z_16 = NULL;
  t = SSL_write_term_to_stream_baf(q_54, r_54);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
  return(t);
}
ATerm j_11 (ATerm i_106 (ATerm), ATerm n_469, ATerm y_54, ATerm t)
{
  ATerm a_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_469, term_b_60);
  t = open_stream_0_0(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, y_54);
  t = i_106(t);
  t = fclose_0_0(t);
  t = y_54;
  return(t);
}
ATerm m_11 (ATerm p_104 (ATerm), ATerm u_49, ATerm s_49, ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  b_17 = t;
  t = p_104(t);
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_17, u_49, s_49);
  t = i_12(c_17, u_49, s_49, t);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL;
        t = term_e_60;
        h_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_17, term_e_60);
        t = h_12(c_17, h_17, t);
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_17 = ATgetFirst((ATermList) t);
        e_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_60;
    f_17 = t;
    t = (ATerm) ATinsert(CheckATermList(e_17), (ATerm) ATinsert(CheckATermList(d_17), u_49));
    g_17 = t;
    t = SSL_table_put(c_17, f_17, g_17);
    t = b_17;
  }
  return(t);
}
ATerm w_17 (ATerm l_17, ATerm t)
{
  t = l_17;
  {
    ATerm f_60 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_60 = ATgetArgument(t, 0);
            ATerm h_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_60;
      }
    t = term_i_60;
    t = debug_1_0(g_22, t);
    t = (ATerm) ATmakeAppl(sym__2, l_17, term_b_60);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_17 (ATerm n_17, ATerm o_17, ATerm p_17, ATerm t)
{
  t = SSL_open_file(n_17, o_17);
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_j_60;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym__2))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      {
        ATerm k_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_17(t_17, t);
            ;
            LocalPopChoice(l_60);
          }
        else
          {
            t = k_60;
            t = x_17(u_17, v_17, t_17, t);
          }
      }
    }
  else
    {
      t = w_17(t_17, t);
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
  ATerm a_18 = NULL,b_18 = NULL;
  t = term_z_59;
  t = new_0_0(t);
  a_18 = t;
  t = term_m_60;
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_18, term_m_60);
  t = l_12(a_18, b_18, t);
  {
    ATerm n_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL,e_18 = NULL;
        c_18 = t;
        t = (ATerm) ATinsert(ATempty, term_p_60);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATempty, term_p_60));
        t = d_12(c_18, e_18, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(o_60);
      }
    else
      {
        t = n_60;
      }
  }
  return(t);
}
ATerm h_22 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  t = new_file_0_0(t);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_18, term_b_60);
  t = open_file_0_0(t);
  t = term_z_59;
  j_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_18, term_z_59);
  t = m_11(h_22, i_18, j_18, t);
  t = i_18;
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_60 = ATgetArgument(t, 0);
      if(match_cons(r_60, sym_Stream_1))
        {
          m_18 = ATgetArgument(r_60, 0);
        }
      else
        _fail(t);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(m_18, n_18, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  t = xtc_new_file_0_0(t);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_18, k_18);
  t = j_11(i_22, l_18, k_18, t);
  t = SSL_close_file(l_18);
  t = (ATerm) ATmakeAppl(sym_FILE_1, l_18);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_18 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_60;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_18 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_60);
      u_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATinsert(ATempty, term_p_60));
      t = d_12(s_18, u_18, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = l_116(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm m_22 (ATerm t)
{
  t = debug_1_0(n_22, t);
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_t_60;
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = save_as_1_0(v_22, t);
  return(t);
}
ATerm v_22 (ATerm t)
{
  t = term_x_60;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  ATerm y_60 = t;
  int z_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL;
      w_18 = t;
      t = term_c_61;
      t = get_config_0_0(t);
      v_18 = t;
      t = if_verbose2_1_0(m_22, t);
      t = w_18;
      {
        ATerm o_22 (ATerm t)
        {
          ATerm y_18 = NULL;
          ATerm r_22 (ATerm t)
          {
            t = v_18;
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              if(((y_18 != NULL) && (y_18 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_11(r_22, not_null(y_18), t);
          return(t);
        }
        t = xtc_io_transform_1_0(o_22, t);
      }
      ;
      LocalPopChoice(z_60);
    }
  else
    {
      t = y_60;
    }
  t = if_keep3_1_0(s_22, t);
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm d_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL;
      j_19 = t;
      t = SSL_remove(j_19);
      ;
      LocalPopChoice(e_61);
    }
  else
    {
      t = d_61;
    }
  return(t);
}
ATerm h_23 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  ATerm x_22 (ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
    e_19 = t;
    t = term_q_60;
    f_19 = t;
    t = term_e_60;
    g_19 = t;
    t = term_f_61;
    t = h_12(f_19, g_19, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_19 != NULL) && (c_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_19 = ATgetFirst((ATermList) t);
        {
          ATerm g_61 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(c_19);
    t = map_1_0(f_23, t);
    t = e_19;
    t = end_scope_1_0(h_23, t);
    return(t);
  }
  t = repeat_1_0(x_22, t);
  d_19 = t;
  t = SSL_exit(d_19);
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm h_61 = t;
  int i_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_61);
    }
  else
    {
      t = h_61;
      t = term_q_37;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(k_23, t);
  t = term_x_35;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  t = f_86(t);
  o_19 = t;
  t = term_j_61;
  t = get_config_0_0(t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, o_19);
  t = l_12(p_19, o_19, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        t = g_20;
        t = o_0(t);
        i_8 = t;
        {
          ATerm m_61 = t;
          int n_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(n_61);
            }
          else
            {
              t = m_61;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_20, i_8);
          t = u_11(h_20, i_8, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
        }
        ;
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        {
          ATerm o_61 = t;
          int p_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_8 = NULL;
              t = g_20;
              t = o_0(t);
              z_8 = t;
              {
                ATerm q_61 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_61 = t;
                    int v_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(v_61);
                      }
                    else
                      {
                        t = r_61;
                        {
                          ATerm w_61 = t;
                          int x_61 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(x_61);
                            }
                          else
                            {
                              t = w_61;
                              {
                                ATerm f_9 = NULL;
                                f_9 = t;
                                if((h_20 != t))
                                  {
                                    _fail(t);
                                  }
                                t = f_9;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_61;
                  }
                t = (ATerm) ATmakeAppl(sym__2, h_20, z_8);
                t = u_11(h_20, z_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
              }
              ;
              LocalPopChoice(p_61);
            }
          else
            {
              t = o_61;
              t = g_20;
              t = o_0(t);
              if((h_20 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_20);
            }
        }
      }
  }
  return(t);
}
ATerm p_23 (ATerm t)
{
  t = get_outfile_1_0(r_23, t);
  return(t);
}
ATerm r_23 (ATerm t)
{
  t = term_y_61;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm z_61 = t;
  int a_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,n_20 = NULL;
      l_20 = t;
      t = term_d_62;
      t = get_config_0_0(t);
      t = l_20;
      t = copy_to_1_0(p_23, t);
      n_20 = t;
      t = (ATerm) ATinsert(ATempty, term_e_62);
      t = echo_0_0(t);
      t = n_20;
      t = xtc_io_exit_0_0(t);
      ;
      LocalPopChoice(a_62);
    }
  else
    {
      t = z_61;
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  t = term_r_42;
  {
    ATerm f_62 = t;
    int g_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_62);
      }
    else
      {
        t = f_62;
        t = term_p_41;
      }
    o_20 = t;
    t = term_p_41;
    q_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_20, term_p_41);
    t = s_11(o_20, q_20, t);
    r_20 = t;
    t = SSL_int_to_string(r_20);
    p_20 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, p_20), term_r_42);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm u_107 (ATerm), ATerm t)
{
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,u_20 = NULL;
      s_20 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      u_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_20, term_b_42);
      t = geq_0_0(t);
      t = s_20;
      t = u_107(t);
      ;
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
    }
  return(t);
}
ATerm s_23 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm t_23 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  t = SSL_explode_string(v_20);
  {
    ATerm j_62 = t;
    int k_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 (ATerm t)
        {
          ATerm l_62 = t;
          int o_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, y_20, t);
              ;
              LocalPopChoice(o_62);
            }
          else
            {
              t = l_62;
              {
                ATerm p_62 = t;
                int q_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(s_23, _id, t);
                    ;
                    LocalPopChoice(q_62);
                  }
                else
                  {
                    t = p_62;
                    t = Cons_2_0(t_23, q_102, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = y_20(t);
        ;
        LocalPopChoice(k_62);
      }
    else
      {
        t = j_62;
      }
    w_20 = t;
    t = SSL_implode_string(w_20);
  }
  return(t);
}
ATerm u_23 (ATerm t)
{
  t = debug_1_0(v_23, t);
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = term_r_62;
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = debug_1_0(c_24, t);
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_s_62;
  return(t);
}
ATerm n_11 (ATerm m_31, ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,e_21 = NULL;
  t = m_31;
  t = basename_1_0(_id, t);
  a_21 = t;
  t = if_verbose3_1_0(u_23, t);
  t = term_t_62;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_62, a_21);
  t = k_12(c_21, a_21, t);
  {
    ATerm u_62 = t;
    int v_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_36;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(v_62);
      }
    else
      {
        t = u_62;
        t = a_21;
      }
    b_21 = t;
    t = if_verbose3_1_0(x_23, t);
    t = term_j_61;
    e_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_61, b_21);
    t = k_12(e_21, b_21, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
  }
  return(t);
}
ATerm d_24 (ATerm t)
{
  t = term_w_62;
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  h_21 = t;
  {
    ATerm x_62 = t;
    int y_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_36;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_62);
      }
    else
      {
        t = x_62;
        t = term_j_61;
        t = get_config_0_0(t);
      }
    l_21 = t;
    t = h_21;
    t = pass_verbose_0_0(t);
    i_21 = t;
    t = h_21;
    t = pass_keep_0_0(t);
    j_21 = t;
    t = term_z_62;
    t = get_config_0_0(t);
    k_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_21), i_21), k_21), (ATerm) ATinsert(ATinsert(ATempty, l_21), term_a_63));
    t = concat_0_0(t);
  }
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = term_w_62;
  return(t);
}
ATerm i_24 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  m_21 = t;
  {
    ATerm b_63 = t;
    int c_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_36;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_63);
      }
    else
      {
        t = b_63;
        t = term_j_61;
        t = get_config_0_0(t);
      }
    q_21 = t;
    t = m_21;
    t = pass_verbose_0_0(t);
    n_21 = t;
    t = m_21;
    t = pass_keep_0_0(t);
    o_21 = t;
    t = term_z_62;
    t = get_config_0_0(t);
    p_21 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_21), n_21), p_21), (ATerm) ATinsert(ATinsert(ATempty, q_21), term_a_63));
    t = concat_0_0(t);
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(g_21, t);
  {
    ATerm d_63 = t;
    int e_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_63 = t;
        int g_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(g_63);
          }
        else
          {
            t = f_63;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(e_63);
        t = xtc_transform_file_2_0(d_24, f_24, t);
      }
    else
      {
        t = d_63;
        t = xtc_transform_term_2_0(g_24, i_24, t);
      }
  }
  return(t);
}
ATerm k_24 (ATerm t)
{
  t = debug_1_0(n_24, t);
  return(t);
}
ATerm n_24 (ATerm t)
{
  t = term_h_63;
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = if_verbose1_1_0(v_24, t);
  return(t);
}
ATerm u_24 (ATerm t)
{
  t = parse_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  {
    ATerm i_63 = t;
    int j_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_63 = t;
        int l_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(l_63);
          }
        else
          {
            t = k_63;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(j_63);
        t = xtc_transform_file_2_0(f_25, h_25, t);
      }
    else
      {
        t = i_63;
        t = xtc_transform_term_2_0(l_25, m_25, t);
      }
    t = frontend_0_0(t);
    t = output_frontend_0_0(t);
    t = extract_0_0(t);
    t = warnings_0_0(t);
    {
      ATerm m_63 = t;
      int n_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_63 = t;
          int p_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(p_63);
            }
          else
            {
              t = o_63;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(n_63);
          t = xtc_transform_file_2_0(o_25, q_25, t);
        }
      else
        {
          t = m_63;
          t = xtc_transform_term_2_0(s_25, t_25, t);
        }
      t = rename_defs_0_0(t);
    }
  }
  return(t);
}
ATerm v_24 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,u_21 = NULL;
  r_21 = t;
  t = term_f_36;
  s_21 = t;
  t = (ATerm) ATinsert(CheckATermList(r_21), term_q_63);
  u_21 = t;
  t = SSL_printnl(s_21, u_21);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(CheckATermList(r_21), term_q_63));
  return(t);
}
ATerm f_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
ATerm h_25 (ATerm t)
{
  ATerm w_21 = NULL;
  t = pass_verbose_0_0(t);
  w_21 = t;
  t = (ATerm) ATinsert(ATempty, w_21);
  t = concat_0_0(t);
  return(t);
}
ATerm l_25 (ATerm t)
{
  t = term_r_63;
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm x_21 = NULL;
  t = pass_verbose_0_0(t);
  x_21 = t;
  t = (ATerm) ATinsert(ATempty, x_21);
  t = concat_0_0(t);
  return(t);
}
ATerm o_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm y_21 = NULL;
  t = pass_verbose_0_0(t);
  y_21 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), term_n_38);
  return(t);
}
ATerm s_25 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm z_21 = NULL;
  t = pass_verbose_0_0(t);
  z_21 = t;
  t = (ATerm) ATinsert(CheckATermList(z_21), term_n_38);
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(k_24, t);
  t = profile_p__2_0(o_24, u_24, t);
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm t_63 = t;
  int u_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_63);
    }
  else
    {
      t = t_63;
    }
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = term_v_63;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_63 = t;
  int x_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_22 = NULL;
      f_22 = t;
      t = SSL_is_string(f_22);
      ;
      LocalPopChoice(x_63);
    }
  else
    {
      t = w_63;
      {
        ATerm y_63 = t;
        int z_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_25, t);
            ;
            LocalPopChoice(z_63);
          }
        else
          {
            t = y_63;
            {
              ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
              j_22 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_22 = ATgetArgument(t, 0);
                  t = k_22;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_22 = ATgetArgument(t, 0);
                      t = k_22;
                      {
                        ATerm a_64 = t;
                        int b_64 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_64);
                          }
                        else
                          {
                            t = a_64;
                            t = debug_1_0(c_26, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_22 = NULL,q_22 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_22 = ATgetArgument(t, 0);
                          l_22 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_22;
                      t = eval_config_0_0(t);
                      p_22 = t;
                      t = l_22;
                      t = eval_config_0_0(t);
                      q_22 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
                      t = l_12(p_22, q_22, t);
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
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  t = term_c_64;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_64, t_22);
  t = h_12(u_22, t_22, t);
  {
    ATerm d_64 = t;
    int e_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,y_22 = NULL;
        t = eval_config_0_0(t);
        w_22 = t;
        t = term_c_64;
        y_22 = t;
        t = SSL_table_put(y_22, t_22, w_22);
        t = w_22;
        ;
        LocalPopChoice(e_64);
      }
    else
      {
        t = d_64;
      }
  }
  return(t);
}
ATerm o_11 (ATerm a_61, ATerm b_61, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  {
    ATerm f_64 = t;
    int g_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_61, b_61);
        t = h_12(a_61, b_61, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_64 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_64);
        t = SSL_table_put(a_61, b_61, a_23);
        t = (ATerm) ATmakeAppl(sym__3, a_61, b_61, a_23);
      }
    else
      {
        t = f_64;
        t = SSL_table_remove(a_61, b_61);
        t = (ATerm) ATmakeAppl(sym__2, a_61, b_61);
      }
    t = z_22;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,g_23 = NULL;
  b_23 = t;
  t = m_104(t);
  c_23 = t;
  {
    ATerm i_64 = t;
    int j_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL;
        t = term_e_60;
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, term_e_60);
        t = h_12(c_23, i_23, t);
        ;
        LocalPopChoice(j_64);
      }
    else
      {
        t = i_64;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_23 = ATgetFirst((ATermList) t);
        d_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_60;
    g_23 = t;
    t = SSL_table_put(c_23, g_23, d_23);
    t = e_23;
    {
      ATerm e_26 (ATerm t)
      {
        ATerm j_23 = NULL;
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, j_23);
        t = o_11(c_23, j_23, t);
        return(t);
      }
      t = map_1_0(e_26, t);
      t = b_23;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm k_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_86(t);
      t = w_86(t);
      ;
      LocalPopChoice(l_64);
    }
  else
    {
      t = k_64;
      t = w_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,q_23 = NULL;
  l_23 = t;
  t = l_104(t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, term_e_60);
  {
    ATerm m_64 = t;
    int n_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_64 = ATgetArgument(t, 0);
            ATerm p_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_60;
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_23, term_e_60);
        t = h_12(m_23, w_23, t);
        ;
        LocalPopChoice(n_64);
      }
    else
      {
        t = m_64;
        t = (ATerm) ATempty;
      }
    n_23 = t;
    t = term_e_60;
    o_23 = t;
    t = (ATerm) ATinsert(CheckATermList(n_23), (ATerm) ATempty);
    q_23 = t;
    t = SSL_table_put(m_23, o_23, q_23);
    t = l_23;
  }
  return(t);
}
ATerm k_26 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm n_26 (ATerm t)
{
  ATerm q_64 = t;
  int r_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL;
      e_24 = t;
      t = SSL_remove(e_24);
      ;
      LocalPopChoice(r_64);
    }
  else
    {
      t = q_64;
    }
  return(t);
}
ATerm q_26 (ATerm t)
{
  t = term_q_60;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_115 (ATerm), ATerm t)
{
  ATerm y_23 = NULL;
  t = begin_scope_1_0(k_26, t);
  {
    ATerm m_26 (ATerm t)
    {
      ATerm z_23 = NULL;
      z_23 = t;
      {
        ATerm s_64 = t;
        int t_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL,b_24 = NULL;
            t = term_q_60;
            a_24 = t;
            t = term_e_60;
            b_24 = t;
            t = term_f_61;
            t = h_12(a_24, b_24, t);
            ;
            LocalPopChoice(t_64);
          }
        else
          {
            t = s_64;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_23 != NULL) && (y_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_23 = ATgetFirst((ATermList) t);
            {
              ATerm u_64 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(y_23);
        t = map_1_0(n_26, t);
        t = z_23;
        t = end_scope_1_0(q_26, t);
      }
      return(t);
    }
    t = restore_always_2_0(m_115, m_26, t);
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm v_64 = t;
  int w_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = NULL,j_24 = NULL;
      h_24 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_24, term_p_41);
      t = geq_0_0(t);
      t = h_24;
      t = s_107(t);
      ;
      LocalPopChoice(w_64);
    }
  else
    {
      t = v_64;
    }
  return(t);
}
ATerm q_11 (ATerm g_48, ATerm h_48, ATerm t)
{
  ATerm x_64 = t;
  int y_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_48, h_48);
      ;
      LocalPopChoice(y_64);
    }
  else
    {
      t = x_64;
      t = SSL_addr(g_48, h_48);
    }
  return(t);
}
ATerm s_11 (ATerm m_48, ATerm n_48, ATerm t)
{
  ATerm z_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_48, n_48);
      ;
      LocalPopChoice(a_65);
    }
  else
    {
      t = z_64;
      t = SSL_subtr(m_48, n_48);
    }
  return(t);
}
ATerm t_11 (ATerm x_57, ATerm z_57, ATerm b_58, ATerm d_58, ATerm y_57, ATerm a_58, ATerm c_58, ATerm e_58, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_57, y_57);
  t = s_11(x_57, y_57, t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_57, a_58);
  t = s_11(z_57, a_58, t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_58, c_58);
  t = s_11(b_58, c_58, t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
  t = s_11(d_58, e_58, t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__4, l_24, m_24, p_24, q_24);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_65 = ATgetArgument(t, 0);
      if(match_cons(b_65, sym__4))
        {
          r_24 = ATgetArgument(b_65, 0);
          s_24 = ATgetArgument(b_65, 1);
          t_24 = ATgetArgument(b_65, 2);
          w_24 = ATgetArgument(b_65, 3);
        }
      else
        _fail(t);
      {
        ATerm c_65 = ATgetArgument(t, 1);
        if(match_cons(c_65, sym__4))
          {
            x_24 = ATgetArgument(c_65, 0);
            y_24 = ATgetArgument(c_65, 1);
            z_24 = ATgetArgument(c_65, 2);
            a_25 = ATgetArgument(c_65, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_11(r_24, s_24, t_24, w_24, x_24, y_24, z_24, a_25, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,g_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,n_25 = NULL,p_25 = NULL,r_25 = NULL,v_25 = NULL,w_25 = NULL;
  b_25 = t;
  t = times_0_0(t);
  c_25 = t;
  t = b_25;
  t = g_111(t);
  d_25 = t;
  t = times_0_0(t);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, c_25);
  t = diff_times_0_0(t);
  g_25 = t;
  if(match_cons(t, sym__4))
    {
      k_25 = ATgetArgument(t, 0);
      {
        ATerm d_65 = ATgetArgument(t, 1);
      }
      n_25 = ATgetArgument(t, 2);
      {
        ATerm e_65 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_25, n_25);
  t = q_11(k_25, n_25, t);
  p_25 = t;
  t = SSL_TicksToSeconds(p_25);
  i_25 = t;
  t = g_25;
  if(match_cons(t, sym__4))
    {
      ATerm f_65 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      {
        ATerm g_65 = ATgetArgument(t, 2);
      }
      v_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_25, v_25);
  t = q_11(r_25, v_25, t);
  w_25 = t;
  t = SSL_TicksToSeconds(w_25);
  j_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_25), term_i_65), i_25), term_h_65);
  t = f_111(t);
  t = d_25;
  return(t);
}
ATerm debug_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  x_25 = t;
  t = g_106(t);
  y_25 = t;
  t = term_f_36;
  z_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_25), y_25);
  a_26 = t;
  t = SSL_printnl(z_25, a_26);
  t = x_25;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm b_26 = NULL,d_26 = NULL,f_26 = NULL,g_26 = NULL;
  b_26 = t;
  t = term_j_65;
  t = get_config_0_0(t);
  d_26 = t;
  t = term_q_37;
  f_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_65), term_q_65), term_p_65), term_o_65), term_n_65), term_m_65), term_l_65), d_26), term_k_65);
  g_26 = t;
  t = SSL_printnl(f_26, g_26);
  t = b_26;
  return(t);
}
ATerm u_11 (ATerm s_51, ATerm t_51, ATerm t)
{
  t = SSL_copy(s_51, t_51);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_table_keys(h_26);
  {
    ATerm s_26 (ATerm t)
    {
      ATerm i_26 = NULL,j_26 = NULL;
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_26, i_26);
      t = h_12(h_26, i_26, t);
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
      return(t);
    }
    t = map_1_0(s_26, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm s_65 = t;
  int t_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_26 = NULL,o_26 = NULL;
      l_26 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      o_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, term_p_43);
      t = geq_0_0(t);
      t = l_26;
      t = w_107(t);
      ;
      LocalPopChoice(t_65);
    }
  else
    {
      t = s_65;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,r_26 = NULL;
      p_26 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      r_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, term_t_43);
      t = geq_0_0(t);
      t = p_26;
      t = v_107(t);
      ;
      LocalPopChoice(v_65);
    }
  else
    {
      t = u_65;
    }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_27 = NULL,f_27 = NULL,g_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_27;
        if((f_27 != t))
          {
            _fail(t);
          }
        t = d_27;
        ;
        LocalPopChoice(x_65);
      }
    else
      {
        t = w_65;
        t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        {
          ATerm y_65 = t;
          int z_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_27, g_27);
              ;
              LocalPopChoice(z_65);
            }
          else
            {
              t = y_65;
              t = SSL_gtr(f_27, g_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm a_66 = t;
  int b_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      j_27 = t;
      t = term_c_36;
      t = get_config_0_0(t);
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_27, term_x_43);
      t = geq_0_0(t);
      t = j_27;
      t = x_107(t);
      ;
      LocalPopChoice(b_66);
    }
  else
    {
      t = a_66;
    }
  return(t);
}
ATerm x_11 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm l_38, ATerm k_38, ATerm t)
{
  t = z_97(t);
  {
    ATerm t_26 (ATerm t)
    {
      ATerm n_27 = NULL;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_38, n_27);
      t = y_97(t);
      return(t);
    }
    t = fetch_1_0(t_26, t);
    t = k_38;
  }
  return(t);
}
ATerm y_11 (ATerm v_97 (ATerm), ATerm h_38, ATerm g_38, ATerm t)
{
  t = h_38;
  {
    ATerm x_27 (ATerm t)
    {
      ATerm c_66 = t;
      int d_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_38;
          ;
          LocalPopChoice(d_66);
        }
      else
        {
          t = c_66;
          {
            ATerm e_66 = t;
            int f_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
                q_27 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_27 = ATgetFirst((ATermList) t);
                    s_27 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_27;
                {
                  ATerm u_26 (ATerm t)
                  {
                    t = g_38;
                    return(t);
                  }
                  t = x_11(v_97, u_26, r_27, s_27, t);
                  t = x_27(t);
                }
                ;
                LocalPopChoice(f_66);
              }
            else
              {
                t = e_66;
                t = Cons_2_0(_id, x_27, t);
              }
          }
        }
      return(t);
    }
    t = x_27(t);
  }
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm h_28 = NULL;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      if((h_28 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_11 (ATerm s_61, ATerm t_61, ATerm u_61, ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_61, t_61);
  {
    ATerm g_66 = t;
    int h_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_66 = ATgetArgument(t, 0);
            ATerm j_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_61, t_61);
        t = h_12(s_61, t_61, t);
        ;
        LocalPopChoice(h_66);
      }
    else
      {
        t = g_66;
        t = (ATerm) ATempty;
      }
    a_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_28, u_61);
    t = y_11(v_26, a_28, u_61, t);
    b_28 = t;
    t = SSL_table_put(s_61, t_61, b_28);
    t = z_27;
  }
  return(t);
}
ATerm a_12 (ATerm o_112 (ATerm), ATerm c_62, ATerm b_62, ATerm t)
{
  t = b_62;
  {
    ATerm w_26 (ATerm t)
    {
      ATerm i_28 = NULL,j_28 = NULL;
      if(match_cons(t, sym__2))
        {
          i_28 = ATgetArgument(t, 0);
          j_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, c_62, i_28, j_28);
      t = o_112(t);
      return(t);
    }
    t = map_1_0(w_26, t);
  }
  return(t);
}
ATerm d_12 (ATerm a_51, ATerm b_51, ATerm t)
{
  t = SSL_access(a_51, b_51);
  return(t);
}
ATerm b_29 (ATerm t_28, ATerm t)
{
  t = SSL_fclose(t_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  z_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_28 = ATgetArgument(t, 0);
      {
        ATerm k_66 = t;
        int l_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_28);
            ;
            LocalPopChoice(l_66);
          }
        else
          {
            t = k_66;
            t = b_29(z_28, t);
          }
      }
    }
  else
    {
      t = b_29(z_28, t);
    }
  return(t);
}
ATerm b_12 (ATerm w_54, ATerm t)
{
  t = SSL_read_term_from_stream(w_54);
  return(t);
}
ATerm c_12 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_fopen(i_51, j_51);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
ATerm _2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,f_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,u_0 = NULL,v_0 = NULL;
  k_29 = t;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_29);
  d_29 = t;
  t = f_29;
  t = m_67(t);
  i_29 = t;
  t = h_29;
  t = n_67(t);
  j_29 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_29, j_29);
  u_0 = t;
  t = SSLsetAnnotations(u_0, d_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_29 = NULL;
  t = SSL_stdin_stream();
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_stdout_stream();
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_stderr_stream();
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_29);
  return(t);
}
ATerm x_26 (ATerm t)
{
  ATerm d_30 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_30;
  return(t);
}
ATerm y_26 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  t = SSL_is_string(g_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_66 = ATgetArgument(t, 0);
      ATerm n_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_66 = t;
    int p_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL,q_13 = NULL;
        a_30 = t;
        t = SSL_explode_term(a_30);
        if(match_cons(t, sym__2))
          {
            ATerm q_66 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_66) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_66 = ATgetArgument(t, 1);
              if(((ATgetType(r_66) == AT_LIST) && !(ATisEmpty(r_66))))
                {
                  q_13 = ATgetFirst((ATermList) r_66);
                  {
                    ATerm s_66 = (ATerm) ATgetNext((ATermList) r_66);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_13;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_13;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_13;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_13;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_66);
      }
    else
      {
        t = o_66;
        {
          ATerm t_66 = t;
          int u_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_30 = NULL,c_30 = NULL;
              t = _2_0(x_26, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_30 = ATgetArgument(t, 0);
                  c_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_12(b_30, c_30, t);
              ;
              LocalPopChoice(u_66);
            }
          else
            {
              t = t_66;
              {
                ATerm e_30 = NULL,f_30 = NULL;
                t = _2_0(y_26, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_30 = ATgetArgument(t, 0);
                    f_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_12(e_30, f_30, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = term_v_66;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL;
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_30, term_y_66);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_66);
    }
  else
    {
      t = w_66;
      t = debug_1_0(z_26, t);
      _fail(t);
    }
  k_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(m_30, t);
  l_30 = t;
  t = k_30;
  t = fclose_0_0(t);
  t = l_30;
  return(t);
}
ATerm a_27 (ATerm t)
{
  t = term_z_66;
  return(t);
}
ATerm b_27 (ATerm t)
{
  t = term_a_67;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_67 = t;
  int c_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30 = NULL,q_30 = NULL;
      p_30 = t;
      t = (ATerm) ATinsert(ATempty, term_d_67);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, (ATerm) ATinsert(ATempty, term_d_67));
      t = d_12(p_30, q_30, t);
      LocalPopChoice(c_67);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_67;
      {
        ATerm e_67 = t;
        int f_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_67 = t;
            if((PushChoice() == 0))
              {
                ATerm s_30 = NULL,u_30 = NULL;
                s_30 = t;
                t = (ATerm) ATinsert(ATempty, term_p_60);
                u_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_30, (ATerm) ATinsert(ATempty, term_p_60));
                t = d_12(s_30, u_30, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_67;
              }
            t = debug_1_0(a_27, t);
            ;
            LocalPopChoice(f_67);
          }
        else
          {
            t = e_67;
            t = debug_1_0(b_27, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm c_27 (ATerm t)
{
  t = debug_1_0(e_27, t);
  return(t);
}
ATerm e_27 (ATerm t)
{
  t = term_h_67;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = debug_1_0(i_27, t);
  return(t);
}
ATerm i_27 (ATerm t)
{
  t = term_i_67;
  return(t);
}
ATerm k_27 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t = term_f_36;
  v_31 = t;
  t = (ATerm) ATinsert(ATempty, term_j_67);
  w_31 = t;
  t = SSL_printnl(v_31, w_31);
  t = u_31;
  return(t);
}
ATerm m_27 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,a_32 = NULL;
  if(match_cons(t, sym__3))
    {
      x_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
      a_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_11(x_31, y_31, a_32, t);
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  t = term_f_36;
  d_32 = t;
  t = (ATerm) ATinsert(ATempty, term_k_67);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = c_32;
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  t = term_f_36;
  g_32 = t;
  t = (ATerm) ATinsert(ATempty, term_j_67);
  h_32 = t;
  t = SSL_printnl(g_32, h_32);
  t = f_32;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,g_31 = NULL,h_31 = NULL,p_31 = NULL,q_31 = NULL;
  v_30 = t;
  t = if_verbose5_1_0(c_27, t);
  {
    ATerm l_67 = t;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL,t_31 = NULL;
        t = term_o_67;
        s_31 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_30);
        t_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_67, (ATerm) ATmakeAppl(sym_Imported_1, v_30));
        t = h_12(s_31, t_31, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_67;
      }
    w_30 = t;
    t = term_o_67;
    y_30 = t;
    t = term_p_67;
    z_30 = t;
    t = (ATerm) ATinsert(ATempty, v_30);
    a_31 = t;
    t = SSL_table_put(y_30, z_30, a_31);
    t = w_30;
    t = if_verbose4_1_0(h_27, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_27, t);
    x_30 = t;
    t = term_o_67;
    g_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_67, x_30);
    t = a_12(m_27, g_31, x_30, t);
    t = if_verbose6_1_0(o_27, t);
    t = term_o_67;
    h_31 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, v_30);
    p_31 = t;
    t = (ATerm) ATempty;
    q_31 = t;
    t = SSL_table_put(h_31, p_31, q_31);
    t = (ATerm) ATmakeAppl(sym__3, term_o_67, (ATerm)ATmakeAppl(sym_Imported_1, v_30), (ATerm) ATempty);
    t = if_verbose4_1_0(p_27, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm q_67 = t;
  int r_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_67);
    }
  else
    {
      t = q_67;
      {
        ATerm s_67 = t;
        int t_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_27 (ATerm t)
            {
              t = filter_1_0(x_100, t);
              return(t);
            }
            t = Cons_2_0(x_100, t_27, t);
            ;
            LocalPopChoice(t_67);
          }
        else
          {
            t = s_67;
            {
              ATerm n_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm u_67 = ATgetFirst((ATermList) t);
                  n_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_32;
              t = filter_1_0(x_100, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm p_32 (ATerm t)
  {
    ATerm v_67 = t;
    int w_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        t = p_32(t);
        ;
        LocalPopChoice(w_67);
      }
    else
      {
        t = v_67;
      }
    return(t);
  }
  t = p_32(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm x_67 = t;
  int y_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_67;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_67);
    }
  else
    {
      t = x_67;
      {
        ATerm a_68 = t;
        int b_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_32 = NULL;
            t = term_c_68;
            q_32 = t;
            t = SSL_getenv(q_32);
            ;
            LocalPopChoice(b_68);
          }
        else
          {
            t = a_68;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm u_27 (ATerm t)
{
  t = debug_1_0(v_27, t);
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_d_68;
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  t = term_o_67;
  x_32 = t;
  t = term_e_68;
  y_32 = t;
  t = term_f_68;
  t = h_12(x_32, y_32, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_68 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_68;
      }
  }
  return(t);
}
ATerm y_27 (ATerm t)
{
  t = debug_1_0(c_28, t);
  return(t);
}
ATerm c_28 (ATerm t)
{
  t = term_h_68;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_32 = NULL;
  t = if_verbose5_1_0(u_27, t);
  r_32 = t;
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL,u_32 = NULL;
        t = term_o_67;
        s_32 = t;
        t = term_p_67;
        u_32 = t;
        t = term_k_68;
        t = h_12(s_32, u_32, t);
        ;
        LocalPopChoice(j_68);
      }
    else
      {
        t = i_68;
        {
          ATerm w_32 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_32 = t;
          t = repeat_1_0(w_27, t);
          t = w_32;
        }
      }
    t = r_32;
    t = if_verbose5_1_0(y_27, t);
  }
  return(t);
}
ATerm d_28 (ATerm t)
{
  t = debug_1_0(e_28, t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  t = term_l_68;
  return(t);
}
ATerm o_34 (ATerm j_33, ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  t = term_o_67;
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, j_33);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_67, (ATerm) ATmakeAppl(sym_Tool_1, j_33));
  t = h_12(n_33, o_33, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_68 = ATgetFirst((ATermList) t);
      if(match_cons(m_68, sym__2))
        {
          ATerm o_68 = ATgetArgument(m_68, 0);
          m_33 = ATgetArgument(m_68, 1);
        }
      else
        _fail(t);
      {
        ATerm n_68 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_33;
  return(t);
}
ATerm g_28 (ATerm t)
{
  t = debug_1_0(k_28, t);
  return(t);
}
ATerm k_28 (ATerm t)
{
  t = term_l_68;
  return(t);
}
ATerm l_28 (ATerm t)
{
  t = term_o_67;
  t = table_getlist_0_0(t);
  t = debug_1_0(m_28, t);
  return(t);
}
ATerm m_28 (ATerm t)
{
  t = term_p_68;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_68 = t;
  int r_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(d_28, t);
      t = xtc_load_0_0(t);
      {
        ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
        r_33 = t;
        if(match_cons(t, sym__2))
          {
            p_33 = ATgetArgument(t, 0);
            q_33 = ATgetArgument(t, 1);
            {
              ATerm s_68 = t;
              int t_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_34 = NULL,d_34 = NULL,g_34 = NULL;
                  t = term_o_67;
                  d_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, p_33);
                  g_34 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_o_67, (ATerm) ATmakeAppl(sym_Tool_1, p_33));
                  t = h_12(d_34, g_34, t);
                  {
                    ATerm f_28 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((q_33 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((a_34 != NULL) && (a_34 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            a_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(f_28, t);
                    t = not_null(a_34);
                  }
                  ;
                  LocalPopChoice(t_68);
                }
              else
                {
                  t = s_68;
                  t = o_34(r_33, t);
                }
            }
          }
        else
          {
            t = o_34(r_33, t);
          }
        t = if_verbose5_1_0(g_28, t);
      }
      ;
      LocalPopChoice(r_68);
    }
  else
    {
      t = q_68;
      {
        ATerm n_34 = NULL,v_13 = NULL,e_14 = NULL;
        n_34 = t;
        t = term_f_36;
        v_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_68), n_34), term_u_68);
        e_14 = t;
        t = SSL_printnl(v_13, e_14);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_68), n_34), term_u_68);
        t = if_verbose5_1_0(l_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm e_12 (ATerm d_56, ATerm c_56, ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  t = d_56;
  {
    ATerm w_68 = t;
    int x_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_68);
      }
    else
      {
        t = w_68;
        t = (ATerm) ATempty;
      }
    q_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_56, q_34);
    t = conc_0_0(t);
    r_34 = t;
    t = term_c_64;
    s_34 = t;
    t = SSL_table_put(s_34, d_56, r_34);
    t = (ATerm) ATmakeAppl(sym__3, term_c_64, d_56, r_34);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_35 = NULL,e_35 = NULL,f_35 = NULL;
      t = term_z_59;
      t = l_0(t);
      c_35 = t;
      t = term_y_68;
      e_35 = t;
      t = term_z_68;
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_68, term_z_68, c_35);
      t = i_12(e_35, f_35, c_35, t);
      _fail(t);
    }
  else
    {
      ATerm j_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_34 = ATgetFirst((ATermList) t);
          a_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_34;
      t = j_0(t);
      t = z_34;
      t = k_0(t);
      j_35 = t;
      t = (ATerm) ATinsert(CheckATermList(a_35), j_35);
    }
  return(t);
}
ATerm f_12 (ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm a_69 = t;
  int b_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_35 = NULL;
      t = a_56;
      t = get_config_0_0(t);
      t = term_c_64;
      m_35 = t;
      t = SSL_table_remove(m_35, a_56);
      t = (ATerm) ATmakeAppl(sym__2, term_c_64, a_56);
      ;
      LocalPopChoice(b_69);
    }
  else
    {
      t = a_69;
      t = (ATerm) ATmakeAppl(sym__2, a_56, b_56);
      t = k_12(a_56, b_56, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm w_35 (ATerm t)
  {
    ATerm c_69 = t;
    int d_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_35, t);
        ;
        LocalPopChoice(d_69);
      }
    else
      {
        t = c_69;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_94(t);
      }
    return(t);
  }
  t = w_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_69 = t;
  int f_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_69);
    }
  else
    {
      t = e_69;
      {
        ATerm r_35 = NULL,s_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_35 = ATgetFirst((ATermList) t);
            s_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_35;
        {
          ATerm n_28 (ATerm t)
          {
            t = s_35;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_28, t);
        }
      }
    }
  return(t);
}
ATerm n_36 (ATerm b_36, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_explode_term(b_36);
  if(match_cons(t, sym__2))
    {
      ATerm g_69 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_69) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
      {
        ATerm h_69 = t;
        int i_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_28 (ATerm t)
            {
              t = h_36;
              return(t);
            }
            t = g_36;
            t = at_end_1_0(o_28, t);
            ;
            LocalPopChoice(i_69);
          }
        else
          {
            t = h_69;
            t = n_36(i_36, t);
          }
      }
    }
  else
    {
      t = n_36(i_36, t);
    }
  return(t);
}
ATerm g_12 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
  t = e_56;
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
        t = (ATerm) ATempty;
      }
    o_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_36, f_56);
    t = conc_0_0(t);
    p_36 = t;
    t = term_c_64;
    q_36 = t;
    t = SSL_table_put(q_36, e_56, p_36);
    t = (ATerm) ATmakeAppl(sym__3, term_c_64, e_56, p_36);
  }
  return(t);
}
ATerm p_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_28 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  b_37 = t;
  t = term_g_58;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_58, b_37);
  t = k_12(c_37, b_37, t);
  t = term_z_59;
  return(t);
}
ATerm r_28 (ATerm t)
{
  t = term_l_69;
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  if(match_string(t, "-o"))
    {
      t = d_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_37;
    }
  return(t);
}
ATerm u_28 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  e_37 = t;
  t = term_r_36;
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, e_37);
  t = k_12(f_37, e_37, t);
  t = term_z_59;
  return(t);
}
ATerm v_28 (ATerm t)
{
  t = term_m_69;
  return(t);
}
ATerm w_28 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  if(match_string(t, "-I"))
    {
      t = g_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = g_37;
    }
  return(t);
}
ATerm x_28 (ATerm t)
{
  ATerm h_37 = NULL,k_37 = NULL,l_37 = NULL;
  h_37 = t;
  t = term_z_62;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_37), term_z_62);
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_62, (ATerm) ATinsert(ATinsert(ATempty, h_37), term_z_62));
  t = e_12(k_37, l_37, t);
  t = term_z_59;
  return(t);
}
ATerm a_29 (ATerm t)
{
  t = term_n_69;
  return(t);
}
ATerm e_29 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  if(match_string(t, "--main"))
    {
      t = m_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = m_37;
    }
  return(t);
}
ATerm g_29 (ATerm t)
{
  ATerm n_37 = NULL,p_37 = NULL;
  n_37 = t;
  t = term_c_61;
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_61, n_37);
  t = k_12(p_37, n_37, t);
  t = term_z_59;
  return(t);
}
ATerm l_29 (ATerm t)
{
  t = term_o_69;
  return(t);
}
ATerm m_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  ATerm r_37 = NULL,u_37 = NULL,v_37 = NULL;
  r_37 = t;
  t = term_m_38;
  u_37 = t;
  t = (ATerm) ATinsert(ATempty, r_37);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_38, (ATerm) ATinsert(ATempty, r_37));
  t = g_12(u_37, v_37, t);
  t = term_z_59;
  return(t);
}
ATerm p_29 (ATerm t)
{
  t = term_p_69;
  return(t);
}
ATerm s_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_29 (ATerm t)
{
  ATerm y_37 = NULL,b_38 = NULL,c_38 = NULL;
  y_37 = t;
  t = term_x_36;
  b_38 = t;
  t = (ATerm) ATinsert(ATempty, y_37);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_36, (ATerm) ATinsert(ATempty, y_37));
  t = e_12(b_38, c_38, t);
  t = term_z_59;
  return(t);
}
ATerm u_29 (ATerm t)
{
  t = term_q_69;
  return(t);
}
ATerm v_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  t = term_s_36;
  e_38 = t;
  t = (ATerm) ATinsert(ATempty, d_38);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_36, (ATerm) ATinsert(ATempty, d_38));
  t = e_12(e_38, f_38, t);
  t = term_z_59;
  return(t);
}
ATerm x_29 (ATerm t)
{
  t = term_r_69;
  return(t);
}
ATerm y_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  t = term_y_36;
  i_38 = t;
  t = term_z_59;
  j_38 = t;
  t = term_s_69;
  t = k_12(i_38, j_38, t);
  t = term_z_59;
  return(t);
}
ATerm h_30 (ATerm t)
{
  t = term_t_69;
  return(t);
}
ATerm i_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_30 (ATerm t)
{
  ATerm p_38 = NULL,s_38 = NULL;
  t = term_d_62;
  p_38 = t;
  t = term_z_59;
  s_38 = t;
  t = term_u_69;
  t = k_12(p_38, s_38, t);
  t = term_z_59;
  return(t);
}
ATerm o_30 (ATerm t)
{
  t = term_v_69;
  return(t);
}
ATerm r_30 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_30 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  t = term_x_58;
  v_38 = t;
  t = term_z_59;
  w_38 = t;
  t = term_w_69;
  t = k_12(v_38, w_38, t);
  t = term_z_59;
  return(t);
}
ATerm c_31 (ATerm t)
{
  t = term_x_69;
  return(t);
}
ATerm e_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm x_38 = NULL,z_38 = NULL,a_39 = NULL;
  x_38 = t;
  t = SSL_string_to_int(x_38);
  z_38 = t;
  t = term_r_42;
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_42, z_38);
  t = k_12(a_39, z_38, t);
  t = term_z_59;
  return(t);
}
ATerm j_31 (ATerm t)
{
  t = term_y_69;
  return(t);
}
ATerm k_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  t = SSL_string_to_int(b_39);
  c_39 = t;
  t = term_v_42;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_42, c_39);
  t = k_12(d_39, c_39, t);
  t = term_z_59;
  return(t);
}
ATerm n_31 (ATerm t)
{
  t = term_z_69;
  return(t);
}
ATerm o_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_31 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_d_45;
  e_39 = t;
  t = term_z_59;
  f_39 = t;
  t = term_a_70;
  t = f_12(e_39, f_39, t);
  t = term_z_59;
  return(t);
}
ATerm z_31 (ATerm t)
{
  t = term_b_70;
  return(t);
}
ATerm b_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_32 (ATerm t)
{
  ATerm g_39 = NULL,l_39 = NULL;
  t = term_c_70;
  g_39 = t;
  t = term_z_59;
  l_39 = t;
  t = term_d_70;
  t = k_12(g_39, l_39, t);
  t = term_z_59;
  return(t);
}
ATerm j_32 (ATerm t)
{
  t = term_e_70;
  return(t);
}
ATerm k_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_32 (ATerm t)
{
  ATerm m_39 = NULL,o_39 = NULL,q_39 = NULL;
  m_39 = t;
  t = term_f_70;
  o_39 = t;
  t = (ATerm) ATinsert(ATempty, m_39);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_70, (ATerm) ATinsert(ATempty, m_39));
  t = e_12(o_39, q_39, t);
  t = term_z_59;
  return(t);
}
ATerm m_32 (ATerm t)
{
  t = term_g_70;
  return(t);
}
ATerm o_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_32 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t_39 = t;
  t = SSL_string_to_int(t_39);
  u_39 = t;
  t = term_c_36;
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, u_39);
  t = k_12(v_39, u_39, t);
  t = term_z_59;
  return(t);
}
ATerm v_32 (ATerm t)
{
  t = term_h_70;
  return(t);
}
ATerm z_32 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  if(match_string(t, "-S"))
    {
      t = y_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_39;
    }
  return(t);
}
ATerm a_33 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  t = term_c_36;
  z_39 = t;
  t = term_x_35;
  a_40 = t;
  t = term_i_70;
  t = k_12(z_39, a_40, t);
  t = term_z_59;
  return(t);
}
ATerm b_33 (ATerm t)
{
  t = term_j_70;
  return(t);
}
ATerm c_33 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  if(match_string(t, "-h"))
    {
      t = d_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = d_40;
    }
  return(t);
}
ATerm d_33 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  t = term_k_70;
  e_40 = t;
  t = term_z_59;
  f_40 = t;
  t = term_l_70;
  t = k_12(e_40, f_40, t);
  t = term_z_59;
  return(t);
}
ATerm e_33 (ATerm t)
{
  t = term_m_70;
  return(t);
}
ATerm f_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_33 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = term_n_70;
  g_40 = t;
  t = term_z_59;
  h_40 = t;
  t = term_o_70;
  t = k_12(g_40, h_40, t);
  t = term_z_59;
  return(t);
}
ATerm h_33 (ATerm t)
{
  t = term_p_70;
  return(t);
}
ATerm i_33 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  if(match_string(t, "-v"))
    {
      t = i_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = i_40;
    }
  return(t);
}
ATerm k_33 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_q_70;
  j_40 = t;
  t = term_z_59;
  k_40 = t;
  t = term_r_70;
  t = k_12(j_40, k_40, t);
  t = term_z_59;
  return(t);
}
ATerm l_33 (ATerm t)
{
  t = term_s_70;
  return(t);
}
ATerm s_33 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  if(match_string(t, "--warning"))
    {
      t = l_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = l_40;
    }
  return(t);
}
ATerm t_33 (ATerm t)
{
  ATerm m_40 = NULL;
  m_40 = t;
  {
    ATerm t_70 = t;
    int u_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_40 = NULL,o_40 = NULL;
        t = term_i_58;
        t = get_config_0_0(t);
        t = Cons_2_0(v_33, w_33, t);
        t = term_i_58;
        n_40 = t;
        t = (ATerm) ATinsert(ATempty, m_40);
        o_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_58, (ATerm) ATinsert(ATempty, m_40));
        t = k_12(n_40, o_40, t);
        ;
        LocalPopChoice(u_70);
      }
    else
      {
        t = t_70;
        {
          ATerm p_40 = NULL,q_40 = NULL;
          t = term_i_58;
          p_40 = t;
          t = (ATerm) ATinsert(ATempty, m_40);
          q_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_58, (ATerm) ATinsert(ATempty, m_40));
          t = e_12(p_40, q_40, t);
        }
      }
    t = term_z_59;
  }
  return(t);
}
ATerm u_33 (ATerm t)
{
  t = term_v_70;
  return(t);
}
ATerm v_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm w_70 = t;
  int x_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(p_28, q_28, r_28, t);
      ;
      LocalPopChoice(x_70);
    }
  else
    {
      t = w_70;
      {
        ATerm y_70 = t;
        int z_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_28, u_28, v_28, t);
            ;
            LocalPopChoice(z_70);
          }
        else
          {
            t = y_70;
            {
              ATerm a_71 = t;
              int b_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(w_28, x_28, a_29, t);
                  ;
                  LocalPopChoice(b_71);
                }
              else
                {
                  t = a_71;
                  {
                    ATerm c_71 = t;
                    int d_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(e_29, g_29, l_29, t);
                        ;
                        LocalPopChoice(d_71);
                      }
                    else
                      {
                        t = c_71;
                        {
                          ATerm e_71 = t;
                          int f_71 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(m_29, n_29, p_29, t);
                              ;
                              LocalPopChoice(f_71);
                            }
                          else
                            {
                              t = e_71;
                              {
                                ATerm g_71 = t;
                                int h_71 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(s_29, t_29, u_29, t);
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
                                          t = ArgOption_3_0(v_29, w_29, x_29, t);
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
                                                t = Option_3_0(y_29, z_29, h_30, t);
                                                ;
                                                LocalPopChoice(l_71);
                                              }
                                            else
                                              {
                                                t = k_71;
                                                {
                                                  ATerm m_71 = t;
                                                  int n_71 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(i_30, j_30, o_30, t);
                                                      ;
                                                      LocalPopChoice(n_71);
                                                    }
                                                  else
                                                    {
                                                      t = m_71;
                                                      {
                                                        ATerm o_71 = t;
                                                        int p_71 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(r_30, t_30, c_31, t);
                                                            ;
                                                            LocalPopChoice(p_71);
                                                          }
                                                        else
                                                          {
                                                            t = o_71;
                                                            {
                                                              ATerm q_71 = t;
                                                              int r_71 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(e_31, f_31, j_31, t);
                                                                  ;
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
                                                                        t = ArgOption_3_0(k_31, l_31, n_31, t);
                                                                        ;
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
                                                                              t = Option_3_0(o_31, r_31, z_31, t);
                                                                              ;
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
                                                                                    t = Option_3_0(b_32, i_32, j_32, t);
                                                                                    ;
                                                                                    LocalPopChoice(x_71);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_71;
                                                                                    {
                                                                                      ATerm y_71 = t;
                                                                                      int z_71 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(k_32, l_32, m_32, t);
                                                                                          ;
                                                                                          LocalPopChoice(z_71);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_71;
                                                                                          {
                                                                                            ATerm a_72 = t;
                                                                                            int d_72 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(o_32, t_32, v_32, t);
                                                                                                ;
                                                                                                LocalPopChoice(d_72);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_72;
                                                                                                {
                                                                                                  ATerm e_72 = t;
                                                                                                  int f_72 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(z_32, a_33, b_33, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(f_72);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_72;
                                                                                                      {
                                                                                                        ATerm g_72 = t;
                                                                                                        int h_72 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(c_33, d_33, e_33, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(h_72);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = g_72;
                                                                                                            {
                                                                                                              ATerm i_72 = t;
                                                                                                              int j_72 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(f_33, g_33, h_33, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(j_72);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = i_72;
                                                                                                                  {
                                                                                                                    ATerm k_72 = t;
                                                                                                                    int l_72 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(i_33, k_33, l_33, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(l_72);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = k_72;
                                                                                                                        t = ArgOption_3_0(s_33, t_33, u_33, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_72), term_n_65), term_x_72), term_w_72), term_v_72), term_n_65), term_u_72), term_t_72), term_s_72), term_r_72), term_q_72), term_p_72), term_o_72), term_n_72), term_m_72);
  return(t);
}
ATerm map_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm r_40 (ATerm t)
  {
    ATerm z_72 = t;
    int a_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_73);
      }
    else
      {
        t = z_72;
        t = Cons_2_0(r_93, r_40, t);
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_40 = ATgetFirst((ATermList) t);
      u_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_40 = NULL,z_40 = NULL;
        t = u_40;
        t = h_0(t);
        y_40 = t;
        t = t_40;
        t = g_0(t);
        z_40 = t;
        t = u_40;
        {
          ATerm x_33 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_40), z_40);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_33, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_59;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_41 = NULL;
  t = term_z_59;
  t = f_0(t);
  a_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_73), a_41), term_f_73), term_n_65), term_e_73), term_n_65), term_d_73), term_c_73), term_n_65), term_b_73);
  return(t);
}
ATerm Program_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,w_0 = NULL,y_0 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  b_41 = t;
  t = c_41;
  t = r_77(t);
  d_41 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_41);
  w_0 = t;
  t = SSLsetAnnotations(w_0, b_41);
  return(t);
}
ATerm c_34 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_34 (ATerm t)
{
  ATerm k_41 = NULL;
  k_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_41), term_h_73);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  ATerm i_73 = t;
  int j_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_73;
      t = get_config_0_0(t);
      h_41 = t;
      ;
      LocalPopChoice(j_73);
    }
  else
    {
      t = i_73;
      {
        ATerm y_33 (ATerm t)
        {
          ATerm z_33 (ATerm t)
          {
            if(((h_41 != NULL) && (h_41 != t)))
              _fail(t);
            else
              h_41 = t;
            return(t);
          }
          t = Program_1_0(z_33, t);
          return(t);
        }
        t = fetch_1_0(y_33, t);
      }
    }
  {
    ATerm l_73 = t;
    int m_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_34 (ATerm t)
        {
          t = not_null(h_41);
          return(t);
        }
        t = short_description_1_0(b_34, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(m_73);
      }
    else
      {
        t = l_73;
      }
    t = term_n_73;
    t = echo_0_0(t);
    t = term_y_68;
    i_41 = t;
    t = term_z_68;
    j_41 = t;
    t = term_o_73;
    t = h_12(i_41, j_41, t);
    t = reverse_acc_2_0(_id, c_34, t);
    t = map_1_0(e_34, t);
    {
      ATerm p_73 = t;
      int q_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_41 = NULL;
          ATerm f_34 (ATerm t)
          {
            t = not_null(h_41);
            return(t);
          }
          t = long_description_1_0(f_34, t);
          l_41 = t;
          t = (ATerm) ATinsert(CheckATermList(l_41), term_n_65);
          t = echo_0_0(t);
          ;
          LocalPopChoice(q_73);
        }
      else
        {
          t = p_73;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,z_0 = NULL,d_1 = NULL;
  q_41 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_41);
  m_41 = t;
  t = n_41;
  t = s_77(t);
  o_41 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, o_41);
  z_0 = t;
  t = SSLsetAnnotations(z_0, m_41);
  return(t);
}
ATerm fetch_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm t_41 (ATerm t)
  {
    ATerm r_73 = t;
    int s_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_94, _id, t);
        ;
        LocalPopChoice(s_73);
      }
    else
      {
        t = r_73;
        t = Cons_2_0(_id, t_41, t);
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_41 = NULL,z_41 = NULL,a_42 = NULL;
  w_41 = t;
  {
    ATerm t_73 = t;
    int u_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_73 = ATgetFirst((ATermList) t);
                ATerm w_73 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_41;
          }
        ;
        LocalPopChoice(u_73);
      }
    else
      {
        t = t_73;
        t = (ATerm) ATinsert(ATempty, w_41);
      }
    z_41 = t;
    t = term_q_37;
    a_42 = t;
    t = SSL_printnl(a_42, z_41);
    t = w_41;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_73;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_34 (ATerm t)
{
  ATerm g_42 = NULL,i_42 = NULL;
  t = term_x_73;
  g_42 = t;
  t = term_z_59;
  i_42 = t;
  t = term_y_73;
  t = k_12(g_42, i_42, t);
  return(t);
}
ATerm j_34 (ATerm t)
{
  t = term_z_73;
  return(t);
}
ATerm k_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_34 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  t = term_x_73;
  k_42 = t;
  t = term_z_59;
  l_42 = t;
  t = term_y_73;
  t = k_12(k_42, l_42, t);
  t = term_q_70;
  m_42 = t;
  t = term_z_59;
  n_42 = t;
  t = term_r_70;
  t = k_12(m_42, n_42, t);
  t = term_a_74;
  return(t);
}
ATerm m_34 (ATerm t)
{
  t = term_b_74;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_74 = t;
  int d_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_34, i_34, j_34, t);
      ;
      LocalPopChoice(d_74);
    }
  else
    {
      t = c_74;
      t = Option_3_0(k_34, l_34, m_34, t);
    }
  return(t);
}
ATerm h_12 (ATerm m_62, ATerm n_62, ATerm t)
{
  t = SSL_table_get(m_62, n_62);
  return(t);
}
ATerm i_12 (ATerm v_60, ATerm w_60, ATerm u_60, ATerm t)
{
  ATerm s_42 = NULL,w_42 = NULL,y_42 = NULL;
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_60, w_60);
  {
    ATerm e_74 = t;
    int f_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_74 = ATgetArgument(t, 0);
            ATerm h_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_60, w_60);
        t = h_12(v_60, w_60, t);
        ;
        LocalPopChoice(f_74);
      }
    else
      {
        t = e_74;
        t = (ATerm) ATempty;
      }
    w_42 = t;
    t = (ATerm) ATinsert(CheckATermList(w_42), u_60);
    y_42 = t;
    t = SSL_table_put(v_60, w_60, y_42);
    t = s_42;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,l_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_43 = NULL,o_43 = NULL,q_43 = NULL;
      t = term_z_59;
      t = d_0(t);
      m_43 = t;
      t = term_y_68;
      o_43 = t;
      t = term_z_68;
      q_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_68, term_z_68, m_43);
      t = i_12(o_43, q_43, m_43, t);
      _fail(t);
    }
  else
    {
      ATerm w_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_43 = ATgetFirst((ATermList) t);
          l_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_43;
      t = a_0(t);
      t = term_z_59;
      t = b_0(t);
      w_43 = t;
      t = (ATerm) ATinsert(CheckATermList(l_43), w_43);
    }
  return(t);
}
ATerm p_34 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  b_44 = t;
  t = term_k_73;
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_73, b_44);
  t = k_12(c_44, b_44, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_74;
        t = l_112(t);
        ;
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
      }
    t = a_44;
    {
      ATerm t_34 (ATerm t)
      {
        ATerm l_74 = t;
        int m_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_74 = t;
            int o_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_74);
              }
            else
              {
                t = n_74;
                t = l_112(t);
                t = Cons_2_0(_id, t_34, t);
              }
            ;
            LocalPopChoice(m_74);
          }
        else
          {
            t = l_74;
            {
              ATerm e_44 = NULL,f_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_44 = ATgetFirst((ATermList) t);
                  f_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_44), (ATerm) ATmakeAppl(sym_Undefined_1, e_44));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_34, t_34, t);
    }
  }
  return(t);
}
ATerm v_34 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  if(match_string(t, "--help"))
    {
      t = x_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_44;
        }
    }
  return(t);
}
ATerm w_34 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  t = term_k_70;
  y_44 = t;
  t = term_z_59;
  z_44 = t;
  t = term_l_70;
  t = k_12(y_44, z_44, t);
  t = term_p_74;
  return(t);
}
ATerm b_35 (ATerm t)
{
  t = term_q_74;
  return(t);
}
ATerm d_35 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,r_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  o_44 = t;
  t = term_y_68;
  t_44 = t;
  t = term_z_68;
  u_44 = t;
  t = (ATerm) ATempty;
  v_44 = t;
  t = SSL_table_put(t_44, u_44, v_44);
  t = o_44;
  {
    ATerm u_34 (ATerm t)
    {
      ATerm r_74 = t;
      int s_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_112(t);
          ;
          LocalPopChoice(s_74);
        }
      else
        {
          t = r_74;
          {
            ATerm t_74 = t;
            int u_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_34, w_34, b_35, t);
                ;
                LocalPopChoice(u_74);
              }
            else
              {
                t = t_74;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_34, t);
    {
      ATerm v_74 = t;
      int w_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_45 = NULL;
          i_45 = t;
          {
            ATerm x_74 = t;
            int y_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_14 = NULL;
                t = i_45;
                {
                  ATerm z_74 = t;
                  int a_75 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_70;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_75);
                    }
                  else
                    {
                      t = z_74;
                      t = fetch_1_0(d_35, t);
                    }
                  t = i_45;
                  t = default_system_usage_0_0(t);
                  t = term_x_35;
                  r_14 = t;
                  t = SSL_exit(r_14);
                }
                ;
                LocalPopChoice(y_74);
              }
            else
              {
                t = x_74;
                {
                  ATerm c_15 = NULL;
                  t = term_x_73;
                  t = get_config_0_0(t);
                  t = i_45;
                  t = default_system_about_0_0(t);
                  t = term_x_35;
                  c_15 = t;
                  t = SSL_exit(c_15);
                }
              }
          }
          ;
          LocalPopChoice(w_74);
        }
      else
        {
          t = v_74;
          {
            ATerm b_75 = t;
            int c_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_45 = NULL,k_45 = NULL,m_45 = NULL;
                ATerm g_35 (ATerm t)
                {
                  ATerm h_35 (ATerm t)
                  {
                    if(((p_44 != NULL) && (p_44 != t)))
                      _fail(t);
                    else
                      p_44 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_35, t);
                  return(t);
                }
                t = fetch_1_0(g_35, t);
                t = term_f_36;
                j_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_44)), term_d_75);
                k_45 = t;
                t = SSL_printnl(j_45, k_45);
                t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_44)), term_d_75));
                t = default_system_usage_0_0(t);
                t = term_p_41;
                m_45 = t;
                t = SSL_exit(m_45);
                ;
                LocalPopChoice(c_75);
              }
            else
              {
                t = b_75;
              }
          }
        }
      r_44 = t;
      t = term_y_68;
      w_44 = t;
      t = SSL_table_destroy(w_44);
      t = r_44;
    }
  }
  return(t);
}
ATerm k_12 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm u_45 = NULL;
  t = term_c_64;
  u_45 = t;
  t = SSL_table_put(u_45, x_55, y_55);
  t = (ATerm) ATmakeAppl(sym__3, term_c_64, x_55, y_55);
  return(t);
}
ATerm l_12 (ATerm w_45, ATerm x_45, ATerm t)
{
  t = SSL_strcat(w_45, x_45);
  return(t);
}
ATerm Cons_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,e_1 = NULL,f_1 = NULL;
  c_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_45 = ATgetFirst((ATermList) t);
      z_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  v_45 = t;
  t = y_45;
  t = b_72(t);
  a_46 = t;
  t = z_45;
  t = c_72(t);
  b_46 = t;
  f_1 = t;
  t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
  e_1 = t;
  t = SSLsetAnnotations(e_1, v_45);
  return(t);
}
ATerm i_35 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm k_35 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  i_46 = t;
  t = SSL_explode_string(i_46);
  {
    ATerm e_75 = t;
    int f_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 (ATerm t)
        {
          ATerm g_75 = t;
          int h_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, k_46, t);
              ;
              LocalPopChoice(h_75);
            }
          else
            {
              t = g_75;
              t = Cons_2_0(i_35, k_35, t);
            }
          return(t);
        }
        t = k_46(t);
        ;
        LocalPopChoice(f_75);
      }
    else
      {
        t = e_75;
        t = (ATerm) ATempty;
      }
    j_46 = t;
    t = SSL_implode_string(j_46);
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
  ATerm l_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  l_46 = t;
  t = term_j_65;
  c_47 = t;
  t = term_i_75;
  d_47 = t;
  t = term_j_75;
  t = k_12(c_47, d_47, t);
  t = term_c_36;
  e_47 = t;
  t = term_d_36;
  f_47 = t;
  t = term_k_75;
  t = k_12(e_47, f_47, t);
  t = term_r_42;
  g_47 = t;
  t = term_x_35;
  h_47 = t;
  t = term_l_75;
  t = k_12(g_47, h_47, t);
  t = term_v_42;
  i_47 = t;
  t = term_x_43;
  j_47 = t;
  t = term_m_75;
  t = k_12(i_47, j_47, t);
  t = term_n_75;
  t = xtc_find_path_0_0(t);
  n_46 = t;
  t = term_o_75;
  t = xtc_find_path_0_0(t);
  o_46 = t;
  t = term_p_75;
  t = xtc_find_path_0_0(t);
  p_46 = t;
  t = term_z_62;
  k_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_46), term_z_62), o_46), term_z_62), n_46), term_z_62);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_62, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_46), term_z_62), o_46), term_z_62), n_46), term_z_62));
  t = k_12(k_47, l_47, t);
  t = term_m_38;
  m_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_75), term_q_75);
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_38, (ATerm) ATinsert(ATinsert(ATempty, term_r_75), term_q_75));
  t = k_12(m_47, n_47, t);
  t = term_s_75;
  t = xtc_find_path_0_0(t);
  r_46 = t;
  t = term_t_75;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_46, term_t_75);
  t = l_12(r_46, o_47, t);
  s_46 = t;
  t = term_s_75;
  t = xtc_find_path_0_0(t);
  t_46 = t;
  t = term_t_75;
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, term_t_75);
  t = l_12(t_46, p_47, t);
  u_46 = t;
  t = term_u_75;
  t = xtc_find_path_0_0(t);
  v_46 = t;
  t = term_t_75;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_46, term_t_75);
  t = l_12(v_46, q_47, t);
  w_46 = t;
  t = term_x_36;
  r_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_46), term_z_62), u_46), term_z_62), s_46), term_z_62);
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_46), term_z_62), u_46), term_z_62), s_46), term_z_62));
  t = k_12(r_47, w_47, t);
  t = term_s_75;
  t = xtc_find_path_0_0(t);
  y_46 = t;
  t = term_v_75;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_46, term_v_75);
  t = l_12(y_46, x_47, t);
  z_46 = t;
  t = term_u_75;
  t = xtc_find_path_0_0(t);
  a_47 = t;
  t = term_v_75;
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_47, term_v_75);
  t = l_12(a_47, y_47, t);
  b_47 = t;
  t = term_s_36;
  z_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_76), term_z_75), b_47), term_w_75), term_y_75), term_x_75), z_46), term_w_75);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_76), term_z_75), b_47), term_w_75), term_y_75), term_x_75), z_46), term_w_75));
  t = k_12(z_47, a_48, t);
  t = term_i_58;
  b_48 = t;
  t = (ATerm) ATempty;
  c_48 = t;
  t = term_b_76;
  t = k_12(b_48, c_48, t);
  t = l_46;
  return(t);
}
ATerm l_35 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  t = term_g_58;
  t = get_config_0_0(t);
  t = debug_1_0(n_35, t);
  t = v_48;
  return(t);
}
ATerm n_35 (ATerm t)
{
  t = term_c_76;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm d_76 = t;
    int e_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_48 = NULL,f_48 = NULL,i_48 = NULL;
        t = term_n_70;
        t = get_config_0_0(t);
        t = term_f_76;
        t = xtc_find_0_0(t);
        e_48 = t;
        t = term_q_37;
        f_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_48, term_q_37);
        t = u_11(e_48, f_48, t);
        t = term_x_35;
        i_48 = t;
        t = SSL_exit(i_48);
        ;
        LocalPopChoice(e_76);
      }
    else
      {
        t = d_76;
      }
    {
      ATerm g_76 = t;
      int h_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_48 = NULL;
          t = term_q_70;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_x_35;
          j_48 = t;
          t = SSL_exit(j_48);
          ;
          LocalPopChoice(h_76);
        }
      else
        {
          t = g_76;
        }
      {
        ATerm i_76 = t;
        int j_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_48 = NULL;
            k_48 = t;
            t = term_g_58;
            t = get_config_0_0(t);
            t = k_48;
            ;
            LocalPopChoice(j_76);
          }
        else
          {
            t = i_76;
            {
              ATerm o_48 = NULL,t_48 = NULL,u_48 = NULL;
              t = term_f_36;
              o_48 = t;
              t = (ATerm) ATinsert(ATempty, term_k_76);
              t_48 = t;
              t = SSL_printnl(o_48, t_48);
              t = term_p_41;
              u_48 = t;
              t = SSL_exit(u_48);
              t = (ATerm) ATinsert(ATempty, term_k_76);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(l_35, t);
      }
    }
  }
  return(t);
}
ATerm o_35 (ATerm t)
{
  t = if_verbose1_1_0(q_35, t);
  return(t);
}
ATerm p_35 (ATerm t)
{
  t = xtc_temp_files_1_0(t_35, t);
  return(t);
}
ATerm q_35 (ATerm t)
{
  ATerm x_48 = NULL,z_48 = NULL,a_49 = NULL;
  x_48 = t;
  t = term_f_36;
  z_48 = t;
  t = (ATerm) ATinsert(CheckATermList(x_48), term_l_76);
  a_49 = t;
  t = SSL_printnl(z_48, a_49);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(CheckATermList(x_48), term_l_76));
  return(t);
}
ATerm t_35 (ATerm t)
{
  ATerm m_76 = t;
  int n_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_49 = NULL;
      t = term_g_58;
      t = get_config_0_0(t);
      b_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_49);
      ;
      LocalPopChoice(n_76);
    }
  else
    {
      t = m_76;
      t = term_s_60;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm u_35 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  t = run_time_0_0(t);
  c_49 = t;
  t = term_f_36;
  d_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_76), c_49), term_o_76);
  e_49 = t;
  t = SSL_printnl(d_49, e_49);
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_76), c_49), term_o_76));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm q_76 = t;
  int r_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_48 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(o_35, p_35, t);
      t = if_verbose2_1_0(u_35, t);
      t = term_x_35;
      w_48 = t;
      t = SSL_exit(w_48);
      ;
      LocalPopChoice(r_76);
    }
  else
    {
      t = q_76;
      {
        ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
        t = run_time_0_0(t);
        f_49 = t;
        t = term_f_36;
        g_49 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_76), f_49), term_s_76);
        h_49 = t;
        t = SSL_printnl(g_49, h_49);
        t = term_p_41;
        i_49 = t;
        t = SSL_exit(i_49);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
