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
ATerm term_i_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_b_78;
ATerm term_a_78;
ATerm term_s_77;
ATerm term_o_77;
ATerm term_k_77;
ATerm term_j_77;
ATerm term_i_77;
ATerm term_f_77;
ATerm term_e_77;
ATerm term_d_77;
ATerm term_c_77;
ATerm term_b_77;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_m_76;
ATerm term_l_76;
ATerm term_k_76;
ATerm term_j_76;
ATerm term_i_76;
ATerm term_d_76;
ATerm term_p_75;
ATerm term_o_75;
ATerm term_g_75;
ATerm term_l_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_z_72;
ATerm term_r_72;
ATerm term_w_71;
ATerm term_l_71;
ATerm term_k_71;
ATerm term_z_70;
ATerm term_u_70;
ATerm term_t_70;
ATerm term_s_70;
ATerm term_r_70;
ATerm term_o_70;
ATerm term_n_70;
ATerm term_m_70;
ATerm term_l_70;
ATerm term_k_70;
ATerm term_j_70;
ATerm term_i_70;
ATerm term_h_70;
ATerm term_d_70;
ATerm term_c_70;
ATerm term_b_70;
ATerm term_a_70;
ATerm term_y_69;
ATerm term_e_67;
ATerm term_c_67;
ATerm term_w_66;
ATerm term_v_66;
ATerm term_t_66;
ATerm term_q_66;
ATerm term_p_66;
ATerm term_i_66;
ATerm term_f_66;
ATerm term_e_66;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_b_66;
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
ATerm term_a_65;
ATerm term_y_64;
ATerm term_r_64;
ATerm term_n_64;
ATerm term_l_63;
ATerm term_i_63;
ATerm term_e_63;
ATerm term_a_63;
ATerm term_r_62;
ATerm term_h_62;
ATerm term_e_62;
ATerm term_b_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_q_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_u_60;
ATerm term_o_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_i_60;
ATerm term_u_58;
ATerm term_t_58;
ATerm term_s_58;
ATerm term_r_58;
ATerm term_q_58;
ATerm term_p_58;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_l_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_r_55;
ATerm term_i_55;
ATerm term_e_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_s_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_k_54;
ATerm term_c_54;
ATerm term_p_53;
ATerm term_w_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_x_51;
ATerm term_s_51;
ATerm term_q_51;
ATerm term_l_51;
ATerm term_b_51;
ATerm term_u_50;
ATerm term_o_50;
ATerm term_h_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_t_49;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_f_49;
ATerm term_c_49;
ATerm term_z_48;
ATerm term_u_48;
ATerm term_p_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_d_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_v_47;
ATerm term_k_47;
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
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_p_45;
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
ATerm term_g_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_v_42;
ATerm term_t_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_v_41;
ATerm term_u_41;
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
ATerm term_c_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_o_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_h_40;
ATerm term_e_40;
ATerm term_z_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_q_35;
ATerm term_j_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_h_30;
void init_constant_terms (void)
{
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_41, term_i_33, term_k_41);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_41, term_t_30, term_n_41);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_41, term_d_34, term_q_41);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_41, term_u_35, term_t_41);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_41, term_x_41, term_y_41);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_42, term_b_42, term_c_42);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_42, term_f_42, term_g_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_42, term_k_42, term_l_42);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_42, term_q_42, term_r_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_42, term_a_43, term_b_43);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_43, term_g_43, term_h_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_43, term_q_35, term_k_43);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_43, term_n_43, term_o_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_43, term_c_44, term_d_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_44, term_g_44, term_j_44);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_44, term_m_44, term_n_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_44, term_q_44, term_r_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_44, term_u_44, term_x_44);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_44, term_a_45, term_b_45);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_45, term_e_45, term_f_45);
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
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_45, term_m_45, term_n_45);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_45, term_q_45, term_r_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_46, term_c_46, term_d_46);
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_46, term_j_35, term_g_46);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_46, term_j_46, term_k_46);
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_46, term_n_46, term_o_46);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_46, term_r_46, term_s_46);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym__2, term_a_50, term_f_49);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_s_54));
  term_s_54 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_s_58));
  term_s_58 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_t_58));
  term_t_58 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(sym__2, term_d_61, term_y_61);
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(sym__2, term_d_61, term_e_61);
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_62));
  term_r_62 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_64));
  term_y_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_e_65));
  term_e_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_j_65));
  term_j_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_n_31);
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(sym__2, term_q_51, term_n_31);
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_n_31);
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(sym__2, term_o_36, term_n_31);
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_65));
  term_v_65 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_h_30);
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(sym__2, term_a_66, term_n_31);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_e_66));
  term_e_66 = (ATerm) ATmakeAppl(sym__2, term_d_66, term_n_31);
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(sym__2, term_i_66, term_n_31);
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_t_66));
  term_t_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_i_33);
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(sym__2, term_u_48, term_h_30);
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(sym__2, term_b_52, term_n_31);
  ATprotect(&(term_e_67));
  term_e_67 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_c_70));
  term_c_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_l_70));
  term_l_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_m_70));
  term_m_70 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_t_70));
  term_t_70 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_z_70));
  term_z_70 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(sym__2, term_i_63, term_l_63);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(sym__2, term_d_74, term_n_31);
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_75));
  term_g_75 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_76));
  term_d_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.4", 0, ATtrue));
  ATprotect(&(term_j_76));
  term_j_76 = (ATerm) ATmakeAppl(sym__2, term_l_58, term_i_76);
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_i_33);
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_h_30);
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(sym__2, term_v_34, term_u_35);
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_k_77));
  term_k_77 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_s_77));
  term_s_77 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm z_11 (ATerm e_19, ATerm);
ATerm k_1 (ATerm);
ATerm r_1 (ATerm);
ATerm v_1 (ATerm);
ATerm a_12 (ATerm c_19, ATerm);
ATerm y_1 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm EXDEV_0_0 (ATerm);
ATerm get_errno_0_0 (ATerm);
ATerm b_12 (ATerm n_39, ATerm m_39, ATerm);
ATerm rename_to_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm ac2abox_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm g_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm u_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm if_keep6_1_0 (ATerm c_97 (ATerm), ATerm);
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
ATerm u_7 (ATerm);
ATerm y_7 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
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
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm m_10 (ATerm);
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
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm k_12 (ATerm);
ATerm m_12 (ATerm);
ATerm q_12 (ATerm);
ATerm f_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm r_14 (ATerm);
ATerm u_14 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm l_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm r_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm f_16 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm p_16 (ATerm);
ATerm save_as_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm);
ATerm f_12 (ATerm v_44, ATerm w_44, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm a_82 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm i_97 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm d_104 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm comp_0_2 (ATerm r_18, ATerm s_18, ATerm);
ATerm foldr_3_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm pass_warnings_0_0 (ATerm);
ATerm o_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm z_96 (ATerm), ATerm);
ATerm c_12 (ATerm t_73 (ATerm), ATerm x_18, ATerm);
ATerm d_12 (ATerm m_42, ATerm n_42, ATerm);
ATerm e_12 (ATerm l_94 (ATerm), ATerm e_445, ATerm u_42, ATerm);
ATerm h_12 (ATerm s_92 (ATerm), ATerm q_37, ATerm o_37, ATerm);
ATerm p_33 (ATerm b_33, ATerm);
ATerm u_33 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm);
ATerm c_18 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm e_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm h_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm d_19 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm f_19 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm g_19 (ATerm);
ATerm h_19 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm pack_stratego_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm basename_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm j_19 (ATerm);
ATerm l_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm i_12 (ATerm t_18, ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm x_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm a_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm j_21 (ATerm);
ATerm t_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm l_22 (ATerm);
ATerm n_22 (ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm u_22 (ATerm);
ATerm v_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_12 (ATerm w_48, ATerm x_48, ATerm);
ATerm end_scope_1_0 (ATerm p_92 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_92 (ATerm), ATerm);
ATerm g_23 (ATerm);
ATerm l_23 (ATerm);
ATerm m_23 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm l_12 (ATerm c_36, ATerm d_36, ATerm);
ATerm n_12 (ATerm i_36, ATerm j_36, ATerm);
ATerm o_12 (ATerm t_45, ATerm v_45, ATerm x_45, ATerm z_45, ATerm u_45, ATerm w_45, ATerm y_45, ATerm a_46, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm debug_1_0 (ATerm j_94 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm p_12 (ATerm o_39, ATerm p_39, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm a_96 (ATerm), ATerm);
ATerm s_12 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm c_26, ATerm b_26, ATerm);
ATerm t_12 (ATerm s_85 (ATerm), ATerm y_25, ATerm x_25, ATerm);
ATerm r_23 (ATerm);
ATerm u_12 (ATerm o_49, ATerm p_49, ATerm q_49, ATerm);
ATerm v_12 (ATerm r_100 (ATerm), ATerm y_49, ATerm x_49, ATerm);
ATerm z_12 (ATerm w_38, ATerm x_38, ATerm);
ATerm o_61 (ATerm g_61, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_12 (ATerm s_42, ATerm);
ATerm x_12 (ATerm e_39, ATerm f_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_63 (ATerm f_62, ATerm);
ATerm p_63 (ATerm j_62, ATerm k_62, ATerm m_62, ATerm);
ATerm q_63 (ATerm w_62, ATerm x_62, ATerm z_62, ATerm);
ATerm y_12 (ATerm);
ATerm v_23 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm w_23 (ATerm);
ATerm x_23 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm j_24 (ATerm);
ATerm k_24 (ATerm);
ATerm l_24 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_24 (ATerm);
ATerm n_24 (ATerm);
ATerm p_67 (ATerm u_66, ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm t_24 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm a_13 (ATerm z_43, ATerm y_43, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm b_13 (ATerm w_43, ATerm x_43, ATerm);
ATerm at_end_1_0 (ATerm e_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_69 (ATerm r_69, ATerm);
ATerm conc_0_0 (ATerm);
ATerm c_13 (ATerm a_44, ATerm b_44, ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm n_25 (ATerm);
ATerm q_25 (ATerm);
ATerm s_25 (ATerm);
ATerm a_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm f_26 (ATerm);
ATerm g_26 (ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm j_26 (ATerm);
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
ATerm a_27 (ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm s_27 (ATerm);
ATerm t_27 (ATerm);
ATerm u_27 (ATerm);
ATerm v_27 (ATerm);
ATerm w_27 (ATerm);
ATerm x_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm b_28 (ATerm);
ATerm c_28 (ATerm);
ATerm d_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm h_28 (ATerm);
ATerm i_28 (ATerm);
ATerm j_28 (ATerm);
ATerm k_28 (ATerm);
ATerm l_28 (ATerm);
ATerm m_28 (ATerm);
ATerm n_28 (ATerm);
ATerm o_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm s_28 (ATerm);
ATerm t_28 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm a_29 (ATerm);
ATerm b_29 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm l_29 (ATerm);
ATerm m_29 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm d_13 (ATerm i_50, ATerm j_50, ATerm);
ATerm e_13 (ATerm r_48, ATerm s_48, ATerm q_48, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_100 (ATerm), ATerm);
ATerm o_29 (ATerm);
ATerm p_29 (ATerm);
ATerm q_29 (ATerm);
ATerm r_29 (ATerm);
ATerm parse_options_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm g_13 (ATerm t_43, ATerm u_43, ATerm);
ATerm h_13 (ATerm r_33, ATerm s_33, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm e_30 (ATerm);
ATerm f_30 (ATerm);
ATerm g_30 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
      t = r_87(t);
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
      t = foldr_2_0(r_87, s_87, t);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_0, q_0);
      t = s_87(t);
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      d_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(d_1, g_1, t);
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
  t = foldr_2_0(f_0, o_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm e_1 = NULL;
  e_1 = t;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, term_t_30);
        t = geq_0_0(t);
        t = e_1;
        t = w_95(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = e_1;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,s_1 = NULL;
  p_1 = t;
  t = term_u_30;
  q_1 = t;
  t = (ATerm) ATinsert(ATempty, term_v_30);
  s_1 = t;
  t = SSL_printnl(q_1, s_1);
  t = p_1;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm t_1 = NULL,w_1 = NULL,z_1 = NULL;
  t_1 = t;
  t = term_u_30;
  w_1 = t;
  t = (ATerm) ATinsert(ATempty, t_1);
  z_1 = t;
  t = SSL_printnl(w_1, z_1);
  t = t_1;
  return(t);
}
ATerm z_11 (ATerm e_19, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(c_1, t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_31;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = get_outfile_1_0(f_1, t);
      }
    l_1 = t;
    t = term_b_31;
    t = get_config_0_0(t);
    m_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_31, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_1), l_1), term_a_31), e_19));
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
        ATerm a_2 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        t = f_12(n_1, o_1, t);
        t = term_d_31;
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
  t = term_u_30;
  j_2 = t;
  t = (ATerm) ATinsert(ATempty, term_e_31);
  k_2 = t;
  t = SSL_printnl(j_2, k_2);
  t = i_2;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  t = term_u_30;
  o_2 = t;
  t = (ATerm) ATinsert(ATempty, l_2);
  p_2 = t;
  t = SSL_printnl(o_2, p_2);
  t = l_2;
  return(t);
}
ATerm a_12 (ATerm c_19, ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = if_verbose2_1_0(k_1, t);
  t = get_outfile_1_0(r_1, t);
  b_2 = t;
  t = term_g_31;
  t = get_config_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_2), term_a_31), c_19), term_h_31));
  t = conc_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, c_2);
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
    ATerm x_1 (ATerm t)
    {
      ATerm q_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_2, h_2);
      t = f_12(g_2, h_2, t);
      t = term_d_31;
      q_2 = t;
      t = SSL_exit(q_2);
      return(t);
    }
    t = fork_and_wait_1_0(x_1, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = if_verbose1_1_0(f_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(c_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(z_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm v_2 = NULL,x_2 = NULL,y_2 = NULL;
  v_2 = t;
  t = term_u_30;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(v_2), term_i_31);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(CheckATermList(v_2), term_i_31));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL;
      r_2 = t;
      t = term_h_31;
      t = get_config_0_0(t);
      t = r_2;
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = profile_p__2_0(y_1, e_2, t);
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
ATerm b_12 (ATerm n_39, ATerm m_39, ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_39, m_39);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = get_errno_0_0(t);
      t = term_n_31;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_39, m_39);
      t = p_12(n_39, m_39, t);
      t = SSL_remove(n_39);
    }
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
    ATerm o_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = r_3;
        t = v_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_s_31;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_3, term_s_31);
        t = p_12(s_3, u_1, t);
        t = SSL_remove(s_3);
        t = term_s_31;
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = o_31;
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL;
              t = r_3;
              t = v_0(t);
              m_2 = t;
              {
                ATerm v_31 = t;
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
                    t = v_31;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_3, m_2);
                t = b_12(s_3, m_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, m_2);
              }
              ;
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
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
  ATerm x_3 = NULL,y_3 = NULL,c_4 = NULL,d_4 = NULL;
  d_4 = t;
  t = term_w_31;
  x_3 = t;
  t = term_x_31;
  t = xtc_find_0_0(t);
  c_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_4), term_y_31);
  y_3 = t;
  t = d_4;
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
  ATerm i_4 = NULL;
  i_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_4), term_z_31);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = term_c_32;
  e_4 = t;
  t = term_z_31;
  t = get_config_0_0(t);
  t = foldr_3_0(s_2, conc_0_0, t_2, t);
  f_4 = t;
  t = h_4;
  t = comp_0_2(e_4, f_4, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL;
  x_4 = t;
  t = term_u_30;
  z_4 = t;
  t = (ATerm) ATinsert(ATempty, term_d_32);
  a_5 = t;
  t = SSL_printnl(z_4, a_5);
  t = x_4;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
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
        LocalPopChoice(g_32);
        t = xtc_transform_file_2_0(e_3, g_3, t);
      }
    else
      {
        t = f_32;
        t = xtc_transform_term_2_0(h_3, i_3, t);
      }
    t = if_keep1_1_0(j_3, t);
    t = olevel_2_0(n_3, o_3, t);
    t = olevel_2_0(m_5, u_5, t);
    f_5 = t;
    {
      ATerm h_32 = t;
      int n_32 = stack_ptr;
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
          LocalPopChoice(n_32);
          t = xtc_transform_file_2_0(b_6, f_6, t);
        }
      else
        {
          t = h_32;
          t = xtc_transform_term_2_0(h_6, i_6, t);
        }
      t = s2c_0_0(t);
      t = ac2abox_0_0(t);
      e_5 = t;
      {
        ATerm t_32 = t;
        int y_32 = stack_ptr;
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
            LocalPopChoice(y_32);
            t = xtc_transform_file_2_0(k_6, pass_verbose_0_0, t);
          }
        else
          {
            t = t_32;
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
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  t = term_u_30;
  c_5 = t;
  t = (ATerm) ATinsert(CheckATermList(b_5), term_a_33);
  d_5 = t;
  t = SSL_printnl(c_5, d_5);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(CheckATermList(b_5), term_a_33));
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_5 = NULL;
  t = pass_verbose_0_0(t);
  n_5 = t;
  t = (ATerm) ATinsert(CheckATermList(n_5), term_d_33);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm o_5 = NULL;
  t = pass_verbose_0_0(t);
  o_5 = t;
  t = (ATerm) ATinsert(CheckATermList(o_5), term_d_33);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = save_as_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  q_5 = t;
  {
    ATerm j_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_5 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_5 = ATgetArgument(t, 0);
            {
              ATerm f_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(q_5);
              f_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_5);
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
        LocalPopChoice(o_33);
        t = xtc_transform_file_2_0(p_3, t_3, t);
      }
    else
      {
        t = j_33;
        t = xtc_transform_term_2_0(v_3, a_4, t);
      }
    t = if_keep1_1_0(b_4, t);
    p_5 = t;
    {
      ATerm q_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              j_6 = ATgetArgument(t, 0);
              {
                ATerm z_3 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(p_5);
                z_3 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
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
          LocalPopChoice(t_33);
          t = xtc_transform_file_2_0(k_4, l_4, t);
        }
      else
        {
          t = q_33;
          t = xtc_transform_term_2_0(m_4, o_4, t);
        }
      t = if_keep1_1_0(p_4, t);
    }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm d_6 = NULL;
  t = pass_verbose_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(CheckATermList(d_6), term_d_33);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_v_33;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm e_6 = NULL;
  t = pass_verbose_0_0(t);
  e_6 = t;
  t = (ATerm) ATinsert(CheckATermList(e_6), term_d_33);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = save_as_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_6 = NULL;
  t = pass_verbose_0_0(t);
  n_6 = t;
  t = (ATerm) ATinsert(CheckATermList(n_6), term_d_33);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_d_33);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = save_as_1_0(k_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_b_34;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm u_5 (ATerm t)
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
  t = term_e_34;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_d_33);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm x_6 = NULL;
  t = pass_verbose_0_0(t);
  x_6 = t;
  t = (ATerm) ATinsert(CheckATermList(x_6), term_d_33);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = get_outfile_1_0(o_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(u_2, t);
  t = profile_p__2_0(w_2, b_3, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm m_7 = NULL;
  m_7 = t;
  {
    ATerm k_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_i_33);
        t = geq_0_0(t);
        t = m_7;
        t = x_96(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = k_34;
        t = m_7;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  {
    ATerm r_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_7 = NULL,x_7 = NULL;
        t = t_7;
        t = t_104(t);
        v_7 = t;
        t = term_v_34;
        t = get_config_0_0(t);
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, v_7);
        t = geq_0_0(t);
        t = t_7;
        t = u_104(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = r_34;
        t = t_7;
      }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm c_6 = NULL;
  t = pass_verbose_0_0(t);
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(c_6), term_d_33);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_6 = NULL;
  t = pass_verbose_0_0(t);
  g_6 = t;
  t = (ATerm) ATinsert(CheckATermList(g_6), term_d_33);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm z_7 = NULL;
  t = pass_verbose_0_0(t);
  z_7 = t;
  t = (ATerm) ATinsert(CheckATermList(z_7), term_d_33);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm a_8 = NULL;
  t = pass_verbose_0_0(t);
  a_8 = t;
  t = (ATerm) ATinsert(CheckATermList(a_8), term_d_33);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm y_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_9;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  a_6 = ATgetArgument(t, 0);
                  {
                    ATerm r_6 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(q_9);
                    r_6 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, a_6);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, r_6);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_9;
                }
              LocalPopChoice(c_35);
              t = xtc_transform_file_2_0(q_6, s_6, t);
            }
          else
            {
              t = b_35;
              t = xtc_transform_term_2_0(t_6, v_6, t);
            }
        }
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = y_34;
        t = q_9;
        {
          ATerm e_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_7 = ATgetArgument(t, 0);
                  {
                    ATerm f_8 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(q_9);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_7);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, f_8);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_9;
                }
              LocalPopChoice(f_35);
              t = xtc_transform_file_2_0(y_6, z_6, t);
            }
          else
            {
              t = e_35;
              t = xtc_transform_term_2_0(a_7, b_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, term_j_35);
        t = geq_0_0(t);
        t = x_9;
        t = b_97(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = x_9;
      }
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm l_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        h_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, term_q_35);
        t = geq_0_0(t);
        t = f_10;
        t = a_97(t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = l_35;
        t = f_10;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  {
    ATerm r_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, term_u_35);
        t = geq_0_0(t);
        t = l_10;
        t = c_97(t);
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = r_35;
        t = l_10;
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  t = term_u_30;
  i_14 = t;
  t = (ATerm) ATinsert(ATempty, term_x_35);
  j_14 = t;
  t = SSL_printnl(i_14, j_14);
  t = h_14;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm p_14 = NULL;
  t = if_verbose3_1_0(h_7, t);
  t = olevel_2_0(j_7, k_7, t);
  t = olevel_2_0(u_7, y_7, t);
  t = olevel_2_0(k_8, l_8, t);
  p_14 = t;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_17 = ATgetArgument(t, 0);
            {
              ATerm f_11 = NULL,t_4 = NULL;
              t = SSLgetAnnotations(p_14);
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
            t = p_14;
          }
        LocalPopChoice(z_35);
        t = xtc_transform_file_2_0(b_10, d_10, t);
      }
    else
      {
        t = y_35;
        t = xtc_transform_term_2_0(e_10, g_10, t);
      }
    t = olevel_2_0(i_10, j_10, t);
    t = olevel_2_0(e_11, g_11, t);
    t = olevel_2_0(u_11, w_11, t);
    t = olevel_2_0(q_13, r_13, t);
    t = olevel_2_0(g_15, h_15, t);
  }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm k_14 = NULL,n_14 = NULL,o_14 = NULL;
  k_14 = t;
  t = term_u_30;
  n_14 = t;
  t = (ATerm) ATinsert(CheckATermList(k_14), term_b_36);
  o_14 = t;
  t = SSL_printnl(n_14, o_14);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(CheckATermList(k_14), term_b_36));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = term_v_34;
  t = get_config_0_0(t);
  t = debug_1_0(i_7, t);
  t = s_14;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_14 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            x_14 = ATgetArgument(t, 0);
            {
              ATerm j_8 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(t_14);
              j_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_14);
              q_3 = t;
              t = SSLsetAnnotations(q_3, j_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_14;
          }
        LocalPopChoice(h_36);
        t = xtc_transform_file_2_0(l_7, n_7, t);
      }
    else
      {
        t = g_36;
        t = xtc_transform_term_2_0(o_7, p_7, t);
      }
    t = if_keep1_1_0(r_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm z_14 = NULL;
  t = pass_verbose_0_0(t);
  z_14 = t;
  t = (ATerm) ATinsert(CheckATermList(z_14), term_d_33);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm d_15 = NULL;
  t = pass_verbose_0_0(t);
  d_15 = t;
  t = (ATerm) ATinsert(CheckATermList(d_15), term_d_33);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = save_as_1_0(s_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_15;
        {
          ATerm n_36 = t;
          if((PushChoice() == 0))
            {
              t = term_o_36;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_36;
            }
          t = q_15;
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    i_9 = ATgetArgument(t, 0);
                    {
                      ATerm c_10 = NULL,u_3 = NULL;
                      t = SSLgetAnnotations(q_15);
                      c_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, i_9);
                      u_3 = t;
                      t = SSLsetAnnotations(u_3, c_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = q_15;
                  }
                LocalPopChoice(q_36);
                t = xtc_transform_file_2_0(c_8, d_8, t);
              }
            else
              {
                t = p_36;
                t = xtc_transform_term_2_0(e_8, g_8, t);
              }
            t = if_keep2_1_0(h_8, t);
          }
        }
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = q_15;
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm p_9 = NULL;
  t = pass_verbose_0_0(t);
  p_9 = t;
  t = (ATerm) ATinsert(CheckATermList(p_9), term_d_33);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm s_9 = NULL;
  t = pass_verbose_0_0(t);
  s_9 = t;
  t = (ATerm) ATinsert(CheckATermList(s_9), term_d_33);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = save_as_1_0(i_8, t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_s_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,a_16 = NULL;
  a_16 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_16 = ATgetArgument(t, 0);
            {
              ATerm o_10 = NULL,w_3 = NULL;
              t = SSLgetAnnotations(a_16);
              o_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_16);
              w_3 = t;
              t = SSLsetAnnotations(w_3, o_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_16;
          }
        LocalPopChoice(u_36);
        t = xtc_transform_file_2_0(m_8, o_8, t);
      }
    else
      {
        t = t_36;
        t = xtc_transform_term_2_0(q_8, u_8, t);
      }
    t = if_keep6_1_0(v_8, t);
    w_15 = t;
    {
      ATerm v_36 = t;
      int w_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_16 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              o_16 = ATgetArgument(t, 0);
              {
                ATerm t_10 = NULL,q_4 = NULL;
                t = SSLgetAnnotations(w_15);
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
              t = w_15;
            }
          LocalPopChoice(w_36);
          t = xtc_transform_file_2_0(y_8, a_9, t);
        }
      else
        {
          t = v_36;
          t = xtc_transform_term_2_0(k_9, l_9, t);
        }
      v_15 = t;
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_16 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                y_16 = ATgetArgument(t, 0);
                {
                  ATerm x_10 = NULL,r_4 = NULL;
                  t = SSLgetAnnotations(v_15);
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, y_16);
                  r_4 = t;
                  t = SSLsetAnnotations(r_4, x_10);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_15;
              }
            LocalPopChoice(a_37);
            t = xtc_transform_file_2_0(m_9, n_9, t);
          }
        else
          {
            t = z_36;
            t = xtc_transform_term_2_0(o_9, r_9, t);
          }
        t = if_keep4_1_0(t_9, t);
        u_15 = t;
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_17 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  f_17 = ATgetArgument(t, 0);
                  {
                    ATerm b_11 = NULL,s_4 = NULL;
                    t = SSLgetAnnotations(u_15);
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
                  t = u_15;
                }
              LocalPopChoice(c_37);
              t = xtc_transform_file_2_0(v_9, w_9, t);
            }
          else
            {
              t = b_37;
              t = xtc_transform_term_2_0(y_9, a_10, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm g_16 = NULL;
  t = pass_verbose_0_0(t);
  g_16 = t;
  t = (ATerm) ATinsert(CheckATermList(g_16), term_d_33);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm i_16 = NULL;
  t = pass_verbose_0_0(t);
  i_16 = t;
  t = (ATerm) ATinsert(CheckATermList(i_16), term_d_33);
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = save_as_1_0(w_8, t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm s_16 = NULL;
  t = pass_verbose_0_0(t);
  s_16 = t;
  t = (ATerm) ATinsert(CheckATermList(s_16), term_d_33);
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm t_16 = NULL;
  t = pass_verbose_0_0(t);
  t_16 = t;
  t = (ATerm) ATinsert(CheckATermList(t_16), term_d_33);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm a_17 = NULL;
  t = pass_verbose_0_0(t);
  a_17 = t;
  t = (ATerm) ATinsert(CheckATermList(a_17), term_d_33);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm b_17 = NULL;
  t = pass_verbose_0_0(t);
  b_17 = t;
  t = (ATerm) ATinsert(CheckATermList(b_17), term_d_33);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = save_as_1_0(u_9, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm j_17 = NULL;
  t = pass_verbose_0_0(t);
  j_17 = t;
  t = (ATerm) ATinsert(CheckATermList(j_17), term_d_33);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm k_17 = NULL;
  t = pass_verbose_0_0(t);
  k_17 = t;
  t = (ATerm) ATinsert(CheckATermList(k_17), term_d_33);
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm t_17 = NULL;
  t = pass_verbose_0_0(t);
  t_17 = t;
  t = (ATerm) ATinsert(CheckATermList(t_17), term_d_33);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm u_17 = NULL;
  t = pass_verbose_0_0(t);
  u_17 = t;
  t = (ATerm) ATinsert(CheckATermList(u_17), term_d_33);
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
  x_17 = t;
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
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
        LocalPopChoice(k_37);
        t = xtc_transform_file_2_0(k_10, m_10, t);
      }
    else
      {
        t = j_37;
        t = xtc_transform_term_2_0(p_10, q_10, t);
      }
    t = bound_unbound_vars_0_0(t);
    w_17 = t;
    {
      ATerm l_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              m_18 = ATgetArgument(t, 0);
              {
                ATerm n_11 = NULL,v_4 = NULL;
                t = SSLgetAnnotations(w_17);
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
              t = w_17;
            }
          LocalPopChoice(n_37);
          t = xtc_transform_file_2_0(r_10, s_10, t);
        }
      else
        {
          t = l_37;
          t = xtc_transform_term_2_0(u_10, v_10, t);
        }
      v_17 = t;
      {
        ATerm p_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_19 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                i_19 = ATgetArgument(t, 0);
                {
                  ATerm r_11 = NULL,w_4 = NULL;
                  t = SSLgetAnnotations(v_17);
                  r_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, i_19);
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
            LocalPopChoice(t_37);
            t = xtc_transform_file_2_0(w_10, y_10, t);
          }
        else
          {
            t = p_37;
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
  t = term_u_37;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm f_18 = NULL;
  t = pass_verbose_0_0(t);
  f_18 = t;
  t = (ATerm) ATinsert(CheckATermList(f_18), term_d_33);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm i_18 = NULL;
  t = pass_verbose_0_0(t);
  i_18 = t;
  t = (ATerm) ATinsert(CheckATermList(i_18), term_d_33);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm q_18 = NULL;
  t = pass_verbose_0_0(t);
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(q_18), term_d_33);
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm a_19 = NULL;
  t = pass_verbose_0_0(t);
  a_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), term_d_33);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm k_19 = NULL;
  t = pass_verbose_0_0(t);
  k_19 = t;
  t = (ATerm) ATinsert(CheckATermList(k_19), term_d_33);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm o_19 = NULL;
  t = pass_verbose_0_0(t);
  o_19 = t;
  t = (ATerm) ATinsert(CheckATermList(o_19), term_d_33);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = save_as_1_0(d_11, t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  q_19 = t;
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_19 = ATgetArgument(t, 0);
            {
              ATerm v_11 = NULL,y_4 = NULL;
              t = SSLgetAnnotations(q_19);
              v_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_19);
              y_4 = t;
              t = SSLsetAnnotations(y_4, v_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_19;
          }
        LocalPopChoice(z_37);
        t = xtc_transform_file_2_0(h_11, i_11, t);
      }
    else
      {
        t = y_37;
        t = xtc_transform_term_2_0(k_11, l_11, t);
      }
    p_19 = t;
    {
      ATerm b_38 = t;
      int c_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              f_20 = ATgetArgument(t, 0);
              {
                ATerm g_12 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(p_19);
                g_12 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
                h_5 = t;
                t = SSLsetAnnotations(h_5, g_12);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_19;
            }
          LocalPopChoice(c_38);
          t = xtc_transform_file_2_0(m_11, o_11, t);
        }
      else
        {
          t = b_38;
          t = xtc_transform_term_2_0(p_11, q_11, t);
        }
      t = if_keep2_1_0(s_11, t);
    }
  }
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm y_19 = NULL;
  t = pass_verbose_0_0(t);
  y_19 = t;
  t = (ATerm) ATinsert(CheckATermList(y_19), term_d_33);
  return(t);
}
ATerm k_11 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm z_19 = NULL;
  t = pass_verbose_0_0(t);
  z_19 = t;
  t = (ATerm) ATinsert(CheckATermList(z_19), term_d_33);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm i_20 = NULL;
  t = pass_verbose_0_0(t);
  i_20 = t;
  t = (ATerm) ATinsert(CheckATermList(i_20), term_d_33);
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm j_20 = NULL;
  t = pass_verbose_0_0(t);
  j_20 = t;
  t = (ATerm) ATinsert(CheckATermList(j_20), term_d_33);
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = save_as_1_0(t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  l_20 = t;
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            w_20 = ATgetArgument(t, 0);
            {
              ATerm r_12 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(l_20);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_20);
              i_5 = t;
              t = SSLsetAnnotations(i_5, r_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_20;
          }
        LocalPopChoice(j_38);
        t = xtc_transform_file_2_0(x_11, y_11, t);
      }
    else
      {
        t = i_38;
        t = xtc_transform_term_2_0(k_12, m_12, t);
      }
    t = if_keep5_1_0(q_12, t);
    k_20 = t;
    {
      ATerm k_38 = t;
      int m_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              h_21 = ATgetArgument(t, 0);
              {
                ATerm k_13 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(k_20);
                k_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_21);
                j_5 = t;
                t = SSLsetAnnotations(j_5, k_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = k_20;
            }
          LocalPopChoice(m_38);
          t = xtc_transform_file_2_0(i_13, j_13, t);
        }
      else
        {
          t = k_38;
          t = xtc_transform_term_2_0(l_13, m_13, t);
        }
      t = if_keep5_1_0(n_13, t);
    }
  }
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm z_20 = NULL;
  t = pass_verbose_0_0(t);
  z_20 = t;
  t = (ATerm) ATinsert(CheckATermList(z_20), term_d_33);
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm b_21 = NULL;
  t = pass_verbose_0_0(t);
  b_21 = t;
  t = (ATerm) ATinsert(CheckATermList(b_21), term_d_33);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = save_as_1_0(f_13, t);
  return(t);
}
ATerm f_13 (ATerm t)
{
  t = term_n_38;
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm m_21 = NULL;
  t = pass_verbose_0_0(t);
  m_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), term_d_33);
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_d_33);
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = save_as_1_0(p_13, t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_o_38;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  r_21 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_21 = ATgetArgument(t, 0);
            {
              ATerm o_13 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(r_21);
              o_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_21);
              r_5 = t;
              t = SSLsetAnnotations(r_5, o_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_21;
          }
        LocalPopChoice(q_38);
        t = xtc_transform_file_2_0(t_13, u_13, t);
      }
    else
      {
        t = p_38;
        t = xtc_transform_term_2_0(v_13, x_13, t);
      }
    t = if_keep3_1_0(y_13, t);
    q_21 = t;
    {
      ATerm r_38 = t;
      int t_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              h_22 = ATgetArgument(t, 0);
              {
                ATerm s_13 = NULL,s_5 = NULL;
                t = SSLgetAnnotations(q_21);
                s_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_22);
                s_5 = t;
                t = SSLsetAnnotations(s_5, s_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = q_21;
            }
          LocalPopChoice(t_38);
          t = xtc_transform_file_2_0(b_14, c_14, t);
        }
      else
        {
          t = r_38;
          t = xtc_transform_term_2_0(d_14, f_14, t);
        }
      t = if_keep3_1_0(g_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(m_14, t);
      p_21 = t;
      {
        ATerm u_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                t_22 = ATgetArgument(t, 0);
                {
                  ATerm w_13 = NULL,t_5 = NULL;
                  t = SSLgetAnnotations(p_21);
                  w_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, t_22);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, w_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_21;
              }
            LocalPopChoice(y_38);
            t = xtc_transform_file_2_0(u_14, w_14, t);
          }
        else
          {
            t = u_38;
            t = xtc_transform_term_2_0(y_14, a_15, t);
          }
        t = if_keep3_1_0(b_15, t);
      }
    }
  }
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm c_22 = NULL;
  t = pass_verbose_0_0(t);
  c_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), term_d_33);
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_d_33);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = save_as_1_0(z_13, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm b_14 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm k_22 = NULL;
  t = pass_verbose_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(CheckATermList(k_22), term_d_33);
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_u_37;
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_d_33);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = save_as_1_0(l_14, t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = save_as_1_0(r_14, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm w_22 = NULL;
  t = pass_verbose_0_0(t);
  w_22 = t;
  t = (ATerm) ATinsert(CheckATermList(w_22), term_d_33);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm x_22 = NULL;
  t = pass_verbose_0_0(t);
  x_22 = t;
  t = (ATerm) ATinsert(CheckATermList(x_22), term_d_33);
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = save_as_1_0(c_15, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  {
    ATerm k_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_23 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_23 = ATgetArgument(t, 0);
            {
              ATerm a_14 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(z_22);
              a_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
              v_5 = t;
              t = SSLsetAnnotations(v_5, a_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_22;
          }
        LocalPopChoice(r_39);
        t = xtc_transform_file_2_0(i_15, j_15, t);
      }
    else
      {
        t = k_39;
        t = xtc_transform_term_2_0(l_15, n_15, t);
      }
    t = if_keep1_1_0(o_15, t);
    y_22 = t;
    {
      ATerm t_39 = t;
      int x_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_23 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              q_23 = ATgetArgument(t, 0);
              {
                ATerm e_14 = NULL,x_5 = NULL;
                t = SSLgetAnnotations(y_22);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
                x_5 = t;
                t = SSLsetAnnotations(x_5, e_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = y_22;
            }
          LocalPopChoice(x_39);
          t = xtc_transform_file_2_0(x_15, y_15, t);
        }
      else
        {
          t = t_39;
          t = xtc_transform_term_2_0(z_15, b_16, t);
        }
      t = if_keep1_1_0(d_16, t);
    }
  }
  return(t);
}
ATerm i_15 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm j_23 = NULL;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), term_d_33);
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm k_23 = NULL;
  t = pass_verbose_0_0(t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), term_d_33);
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = save_as_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_z_39;
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_d_33);
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = term_e_40;
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm t_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), term_d_33);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = save_as_1_0(f_16, t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  t = profile_p__2_0(e_7, f_7, t);
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm k_25 = NULL;
  t = pass_verbose_0_0(t);
  k_25 = t;
  t = (ATerm) ATinsert(CheckATermList(k_25), term_k_40);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm l_25 = NULL;
  t = pass_verbose_0_0(t);
  l_25 = t;
  t = (ATerm) ATinsert(CheckATermList(l_25), term_k_40);
  return(t);
}
ATerm save_as_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  {
    ATerm h_16 (ATerm t)
    {
      t = get_outfile_1_0(u_73, t);
      if(((w_24 != NULL) && (w_24 != t)))
        _fail(t);
      else
        w_24 = t;
      return(t);
    }
    t = copy_to_1_0(h_16, t);
    {
      ATerm l_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_25 = NULL,j_25 = NULL;
          j_25 = t;
          if(match_cons(t, sym_FILE_1))
            {
              i_25 = ATgetArgument(t, 0);
              {
                ATerm q_14 = NULL,b_8 = NULL;
                t = SSLgetAnnotations(j_25);
                q_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, i_25);
                b_8 = t;
                t = SSLsetAnnotations(b_8, q_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = j_25;
            }
          LocalPopChoice(n_40);
          t = xtc_transform_file_2_0(k_16, l_16, t);
        }
      else
        {
          t = l_40;
          t = xtc_transform_term_2_0(m_16, p_16, t);
        }
      {
        ATerm q_16 (ATerm t)
        {
          ATerm m_25 = NULL;
          t = term_o_40;
          m_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_24), term_o_40);
          t = h_13(not_null(w_24), m_25, t);
          if(((x_24 != NULL) && (x_24 != t)))
            _fail(t);
          else
            x_24 = t;
          return(t);
        }
        t = copy_to_1_0(q_16, t);
        t = term_u_30;
        z_24 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), term_r_40), not_null(w_24)), term_q_40));
        a_25 = t;
        t = SSL_printnl(z_24, a_25);
        t = y_24;
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_25 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_25, term_t_30);
        t = geq_0_0(t);
        t = p_25;
        t = y_96(t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = p_25;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = term_r_30;
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = term_i_33;
      }
    u_25 = t;
    t = term_i_33;
    w_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_25, term_i_33);
    t = n_12(u_25, w_25, t);
    v_25 = t;
    t = SSL_int_to_string(v_25);
    t_25 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, t_25), term_r_30);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_104, n_104, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm f_12 (ATerm v_44, ATerm w_44, ATerm t)
{
  t = SSL_execvp(v_44, w_44);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,h_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_27 = ATgetArgument(t, 0);
      {
        ATerm s_15 = NULL,t_15 = NULL;
        t = SSL_int_to_string(d_27);
        s_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_40), s_15), term_x_40);
        t_15 = t;
        t = SSL_concat_strings(t_15);
      }
    }
  else
    {
      ATerm g_17 = NULL,h_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_27 = ATgetArgument(t, 0);
          e_27 = ATgetArgument(t, 1);
          h_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_27);
      g_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_27), term_c_41), g_17), term_z_40), d_27);
      h_17 = t;
      t = SSL_concat_strings(h_17);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm k_27 = NULL;
  ATerm r_16 (ATerm t)
  {
    t = a_82(t);
    if(((k_27 != NULL) && (k_27 != t)))
      _fail(t);
    else
      k_27 = t;
    return(t);
  }
  t = fetch_1_0(r_16, t);
  t = not_null(k_27);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_41 = ATgetArgument(t, 0);
              if((l_27 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_41 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_46), term_p_46), term_l_46), term_h_46), term_e_46), term_s_45), term_o_45), term_k_45), term_g_45), term_c_45), term_y_44), term_s_44), term_o_44), term_k_44), term_e_44), term_q_43), term_l_43), term_i_43), term_c_43), term_t_42), term_o_42), term_h_42), term_d_42), term_z_41), term_u_41), term_r_41), term_o_41), term_l_41);
        t = fetch_elem_1_0(v_16, t);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_27);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_27 = NULL,e_28 = NULL;
  r_27 = t;
  {
    ATerm u_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_47 = ATgetArgument(t, 0);
            e_28 = ATgetArgument(t, 1);
            {
              ATerm c_47 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_46);
        {
          ATerm g_47 = t;
          int h_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL,o_18 = NULL,p_18 = NULL;
              t = e_28;
              {
                ATerm i_47 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_47;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                g_18 = t;
                t = term_u_30;
                o_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, g_18), term_k_47);
                p_18 = t;
                t = SSL_printnl(o_18, p_18);
                t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(ATinsert(ATempty, g_18), term_k_47));
              }
              ;
              LocalPopChoice(h_47);
            }
          else
            {
              t = g_47;
              t = r_27;
            }
        }
      }
    else
      {
        t = u_46;
        t = r_27;
      }
    t = r_27;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,y_28 = NULL;
  y_28 = t;
  t = fork_0_0(t);
  u_28 = t;
  {
    ATerm l_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_28;
        t = i_97(t);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = l_47;
        t = SSL_waitpid(u_28);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_47 = ATgetArgument(t, 0);
            if(((ATgetType(o_47) != AT_INT) || (ATgetInt((ATermInt) o_47) != 0)))
              _fail(t);
            {
              ATerm s_47 = ATgetArgument(t, 1);
            }
            {
              ATerm u_47 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_28;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  d_29 = t;
  t = d_104(t);
  t = xtc_find_0_0(t);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_29, d_29);
  {
    ATerm w_16 (ATerm t)
    {
      ATerm e_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_29, d_29);
      t = f_12(c_29, d_29, t);
      t = term_d_31;
      e_29 = t;
      t = SSL_exit(e_29);
      return(t);
    }
    t = fork_and_wait_1_0(w_16, t);
    t = d_29;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_18 = NULL,y_18 = NULL;
      t = u_29;
      t = xtc_new_file_0_0(t);
      w_18 = t;
      t = s_0(t);
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, (ATerm) ATinsert(ATinsert(ATempty, w_18), term_a_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(w_18);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_18);
    }
  else
    {
      ATerm m_19 = NULL,n_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_29;
      t = xtc_new_file_0_0(t);
      m_19 = t;
      t = s_0(t);
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_19), term_a_31), v_29), term_v_47));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = SSL_close_file(m_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_19);
    }
  return(t);
}
ATerm comp_0_2 (ATerm r_18, ATerm s_18, ATerm t)
{
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_38 = NULL,z_38 = NULL;
      z_38 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_38 = ATgetArgument(t, 0);
          {
            ATerm k_26 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(z_38);
            k_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_38);
            n_8 = t;
            t = SSLsetAnnotations(n_8, k_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_38;
        }
      LocalPopChoice(x_47);
      {
        ATerm x_16 (ATerm t)
        {
          t = r_18;
          return(t);
        }
        ATerm z_16 (ATerm t)
        {
          ATerm b_39 = NULL;
          t = pass_verbose_0_0(t);
          b_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_18), b_39), (ATerm) ATinsert(ATempty, term_d_33));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(x_16, z_16, t);
      }
    }
  else
    {
      t = w_47;
      {
        ATerm d_17 (ATerm t)
        {
          t = r_18;
          return(t);
        }
        ATerm i_17 (ATerm t)
        {
          ATerm c_39 = NULL;
          t = pass_verbose_0_0(t);
          c_39 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_18), c_39), (ATerm) ATinsert(ATempty, term_d_33));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_17, i_17, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_30;
      t = t_87(t);
    }
  else
    {
      ATerm i_30 = NULL,j_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_30 = ATgetFirst((ATermList) t);
          d_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_30;
      t = v_87(t);
      i_30 = t;
      t = d_30;
      t = foldr_3_0(t_87, u_87, v_87, t);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
      t = u_87(t);
    }
  return(t);
}
ATerm l_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_30), term_y_47);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = term_y_47;
  t = get_config_0_0(t);
  t = foldr_3_0(l_17, conc_0_0, m_17, t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm i_21 = NULL;
  t = pass_verbose_0_0(t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(i_21), term_d_33);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm k_21 = NULL;
  t = pass_verbose_0_0(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), term_d_33);
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = get_outfile_1_0(z_17, t);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
        t = term_d_48;
        t = get_config_0_0(t);
        t = q_31;
        {
          ATerm e_48 = t;
          int g_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_31;
              {
                ATerm h_48 = t;
                int k_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_21 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        c_21 = ATgetArgument(t, 0);
                        {
                          ATerm b_22 = NULL,p_8 = NULL;
                          t = SSLgetAnnotations(q_31);
                          b_22 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
                          p_8 = t;
                          t = SSLsetAnnotations(p_8, b_22);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = q_31;
                      }
                    LocalPopChoice(k_48);
                    t = xtc_transform_file_2_0(o_17, q_17, t);
                  }
                else
                  {
                    t = h_48;
                    t = xtc_transform_term_2_0(r_17, s_17, t);
                  }
              }
              ;
              LocalPopChoice(g_48);
            }
          else
            {
              t = e_48;
              {
                ATerm l_21 = NULL,n_21 = NULL,s_21 = NULL;
                t = term_u_30;
                n_21 = t;
                t = (ATerm) ATinsert(ATempty, term_l_48);
                s_21 = t;
                t = SSL_printnl(n_21, s_21);
                t = term_i_33;
                l_21 = t;
                t = SSL_exit(l_21);
                t = (ATerm) ATinsert(ATempty, term_l_48);
              }
            }
          t = copy_to_1_0(y_17, t);
          s_20 = t;
          t = term_u_30;
          t_20 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_48));
          u_20 = t;
          t = SSL_printnl(t_20, u_20);
          t = s_20;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = q_31;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_48;
      t = get_config_0_0(t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_48);
      ;
      LocalPopChoice(o_48);
    }
  else
    {
      t = n_48;
      t = (ATerm) ATinsert(ATempty, term_u_48);
    }
  return(t);
}
ATerm if_keep3_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  {
    ATerm v_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL;
        t = term_q_34;
        t = get_config_0_0(t);
        e_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_32, term_d_34);
        t = geq_0_0(t);
        t = b_32;
        t = z_96(t);
        ;
        LocalPopChoice(y_48);
      }
    else
      {
        t = v_48;
        t = b_32;
      }
  }
  return(t);
}
ATerm c_12 (ATerm t_73 (ATerm), ATerm x_18, ATerm t)
{
  ATerm i_32 = NULL;
  t = term_n_31;
  t = t_73(t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(x_18), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_z_48, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_32), (ATerm) ATempty))))));
  return(t);
}
ATerm d_12 (ATerm m_42, ATerm n_42, ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_write_term_to_stream_baf(m_42, n_42);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm e_12 (ATerm l_94 (ATerm), ATerm e_445, ATerm u_42, ATerm t)
{
  ATerm k_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_445, term_c_49);
  t = y_12(t);
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_32, u_42);
  t = l_94(t);
  t = fclose_0_0(t);
  t = u_42;
  return(t);
}
ATerm h_12 (ATerm s_92 (ATerm), ATerm q_37, ATerm o_37, ATerm t)
{
  ATerm m_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  t = s_92(t);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_32, q_37, o_37);
  t = e_13(m_32, q_37, o_37, t);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL;
        t = term_f_49;
        u_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, term_f_49);
        t = d_13(m_32, u_32, t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_32 = ATgetFirst((ATermList) t);
        p_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_49;
    r_32 = t;
    t = (ATerm) ATinsert(CheckATermList(p_32), (ATerm) ATinsert(CheckATermList(o_32), q_37));
    s_32 = t;
    t = SSL_table_put(m_32, r_32, s_32);
    t = q_32;
  }
  return(t);
}
ATerm p_33 (ATerm b_33, ATerm t)
{
  t = b_33;
  {
    ATerm g_49 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_49 = ATgetArgument(t, 0);
            ATerm k_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_49;
      }
    t = term_l_49;
    t = debug_1_0(c_18, t);
    t = (ATerm) ATmakeAppl(sym__2, b_33, term_c_49);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_33 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm t)
{
  t = SSL_open_file(e_33, f_33);
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = term_n_49;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_33(k_33, t);
            ;
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            t = u_33(l_33, m_33, k_33, t);
          }
      }
    }
  else
    {
      t = p_33(k_33, t);
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
  ATerm w_33 = NULL,x_33 = NULL,z_33 = NULL;
  t = term_n_31;
  t = new_0_0(t);
  w_33 = t;
  t = term_t_49;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, term_t_49);
  t = h_13(w_33, x_33, t);
  z_33 = t;
  {
    ATerm u_49 = t;
    int w_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL;
        t = (ATerm) ATinsert(ATempty, term_z_49);
        c_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, (ATerm) ATinsert(ATempty, term_z_49));
        t = z_12(z_33, c_34, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(w_49);
      }
    else
      {
        t = u_49;
        t = z_33;
      }
  }
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = term_a_50;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_34 = NULL,j_34 = NULL;
  t = new_file_0_0(t);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_34, term_c_49);
  t = open_file_0_0(t);
  t = term_n_31;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_34, term_n_31);
  t = h_12(e_18, f_34, j_34, t);
  t = f_34;
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(match_cons(d_50, sym_Stream_1))
        {
          n_34 = ATgetArgument(d_50, 0);
        }
      else
        _fail(t);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(n_34, o_34, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  t = xtc_new_file_0_0(t);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_34, l_34);
  t = e_12(h_18, m_34, l_34, t);
  t = SSL_close_file(m_34);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_34 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_50;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_34 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_z_49);
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, (ATerm) ATinsert(ATempty, term_z_49));
      t = z_12(s_34, u_34, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = o_104(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = debug_1_0(k_18, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_f_50;
  return(t);
}
ATerm u_18 (ATerm t)
{
  t = save_as_1_0(v_18, t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_h_50;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm x_34 = NULL,z_34 = NULL;
  z_34 = t;
  {
    ATerm m_50 = t;
    int n_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 (ATerm t)
        {
          ATerm d_35 = NULL;
          ATerm n_18 (ATerm t)
          {
            t = not_null(x_34);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              d_35 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_12(n_18, d_35, t);
          return(t);
        }
        t = term_o_50;
        t = get_config_0_0(t);
        if(((x_34 != NULL) && (x_34 != t)))
          _fail(t);
        else
          x_34 = t;
        t = if_verbose2_1_0(j_18, t);
        t = z_34;
        t = xtc_io_transform_1_0(l_18, t);
        ;
        LocalPopChoice(n_50);
      }
    else
      {
        t = m_50;
        t = z_34;
      }
    t = if_keep3_1_0(u_18, t);
  }
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  {
    ATerm q_50 = t;
    int t_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_35);
        ;
        LocalPopChoice(t_50);
      }
    else
      {
        t = q_50;
        t = s_35;
      }
  }
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_a_50;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm i_35 = NULL,k_35 = NULL;
  ATerm z_18 (ATerm t)
  {
    ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
    m_35 = t;
    t = term_a_50;
    n_35 = t;
    t = term_f_49;
    o_35 = t;
    t = term_u_50;
    t = d_13(n_35, o_35, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_35 != NULL) && (i_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_35 = ATgetFirst((ATermList) t);
        {
          ATerm v_50 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = i_35;
    t = map_1_0(b_19, t);
    t = m_35;
    t = end_scope_1_0(d_19, t);
    return(t);
  }
  t = repeat_1_0(z_18, t);
  k_35 = t;
  t = SSL_exit(k_35);
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm x_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = x_50;
      t = term_s_31;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(f_19, t);
  t = term_h_30;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  t = s_73(t);
  v_35 = t;
  t = term_b_51;
  t = get_config_0_0(t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_35, v_35);
  t = h_13(w_35, v_35, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL;
        t = x_36;
        t = t_0(t);
        f_23 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = f_23;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = f_23;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_36, f_23);
        t = p_12(y_36, f_23, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_36);
        ;
        LocalPopChoice(e_51);
      }
    else
      {
        t = c_51;
        {
          ATerm h_51 = t;
          int i_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_24 = NULL;
              t = x_36;
              t = t_0(t);
              e_24 = t;
              {
                ATerm j_51 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_24 = NULL;
                    s_24 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_24;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = s_24;
                          }
                        else
                          {
                            t = s_24;
                            if((y_36 != t))
                              {
                                _fail(t);
                              }
                            t = s_24;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_51;
                  }
                t = (ATerm) ATmakeAppl(sym__2, y_36, e_24);
                t = p_12(y_36, e_24, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_36);
              }
              ;
              LocalPopChoice(i_51);
            }
          else
            {
              t = h_51;
              t = x_36;
              t = t_0(t);
              if((y_36 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_36);
            }
        }
      }
  }
  return(t);
}
ATerm g_19 (ATerm t)
{
  t = get_outfile_1_0(h_19, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = term_l_51;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  {
    ATerm o_51 = t;
    int p_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,o_25 = NULL,z_25 = NULL;
        t = term_q_51;
        t = get_config_0_0(t);
        t = a_38;
        t = copy_to_1_0(g_19, t);
        f_25 = t;
        t = term_u_30;
        o_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_51));
        z_25 = t;
        t = SSL_printnl(o_25, z_25);
        t = f_25;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(p_51);
      }
    else
      {
        t = o_51;
        t = a_38;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm j_39 = NULL,l_39 = NULL,s_39 = NULL,v_39 = NULL;
  t = term_q_34;
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        t = term_i_33;
      }
    l_39 = t;
    t = term_i_33;
    v_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_39, term_i_33);
    t = n_12(l_39, v_39, t);
    s_39 = t;
    t = SSL_int_to_string(s_39);
    j_39 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, j_39), term_q_34);
  }
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm y_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,f_40 = NULL,g_40 = NULL;
  f_40 = t;
  t = term_x_51;
  y_39 = t;
  t = f_40;
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_31;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        t = term_b_51;
        t = get_config_0_0(t);
      }
    g_40 = t;
    t = f_40;
    t = pass_keep_0_0(t);
    b_40 = t;
    t = term_a_52;
    t = get_config_0_0(t);
    c_40 = t;
    t = term_b_52;
    {
      ATerm c_52 = t;
      int d_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = get_config_0_0(t);
          LocalPopChoice(d_52);
          t = (ATerm) ATinsert(ATempty, term_b_52);
        }
      else
        {
          t = c_52;
          t = (ATerm) ATempty;
        }
      d_40 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_40), b_40), c_40), (ATerm) ATinsert(ATinsert(ATempty, g_40), term_e_52));
      t = concat_0_0(t);
      a_40 = t;
      t = f_40;
      t = comp_0_2(y_39, a_40, t);
    }
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  {
    ATerm f_52 = t;
    int g_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        m_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_40, term_d_34);
        t = geq_0_0(t);
        t = i_40;
        t = x_95(t);
        ;
        LocalPopChoice(g_52);
      }
    else
      {
        t = f_52;
        t = i_40;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,d_41 = NULL;
  d_41 = t;
  t = SSL_explode_string(d_41);
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_43 (ATerm t)
        {
          ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
          w_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_42 = ATgetFirst((ATermList) t);
              y_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm j_52 = t;
            int k_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_27 = NULL,m_27 = NULL,r_8 = NULL;
                t = SSLgetAnnotations(w_42);
                b_27 = t;
                t = y_42;
                t = f_43(t);
                m_27 = t;
                t = (ATerm) ATinsert(CheckATermList(m_27), x_42);
                r_8 = t;
                t = SSLsetAnnotations(r_8, b_27);
                ;
                LocalPopChoice(k_52);
              }
            else
              {
                t = j_52;
                {
                  ATerm m_52 = t;
                  int n_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_27 = NULL,s_8 = NULL;
                      t = SSLgetAnnotations(w_42);
                      y_27 = t;
                      t = x_42;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(y_42), x_42);
                      s_8 = t;
                      t = SSLsetAnnotations(s_8, y_27);
                      ;
                      LocalPopChoice(n_52);
                    }
                  else
                    {
                      t = m_52;
                      {
                        ATerm r_28 = NULL,v_28 = NULL,t_8 = NULL;
                        t = SSLgetAnnotations(w_42);
                        r_28 = t;
                        t = x_42;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = y_42;
                        t = o_90(t);
                        v_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(v_28), x_42);
                        t_8 = t;
                        t = SSLsetAnnotations(t_8, r_28);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = f_43(t);
        ;
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
      }
    b_41 = t;
    t = SSL_implode_string(b_41);
  }
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = debug_1_0(l_19, t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = term_o_52;
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = debug_1_0(s_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = term_p_52;
  return(t);
}
ATerm i_12 (ATerm t_18, ATerm t)
{
  ATerm s_43 = NULL,v_43 = NULL,h_44 = NULL,i_44 = NULL;
  t = t_18;
  t = basename_1_0(_id, t);
  s_43 = t;
  t = if_verbose3_1_0(j_19, t);
  t = term_q_52;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_52, s_43);
  t = g_13(i_44, s_43, t);
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_31;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
        t = s_43;
      }
    v_43 = t;
    t = if_verbose3_1_0(r_19, t);
    t = term_b_51;
    h_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_51, v_43);
    t = g_13(h_44, v_43, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, s_43);
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
  t = term_w_52;
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = if_verbose1_1_0(a_20, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm y_46 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,j_47 = NULL,m_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,t_47 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,m_30 = NULL,n_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_12(t_47, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  r_47 = t;
  {
    ATerm z_52 = t;
    int a_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_48 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_48 = ATgetArgument(t, 0);
            {
              ATerm g_29 = NULL,x_8 = NULL;
              t = SSLgetAnnotations(r_47);
              g_29 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_48);
              x_8 = t;
              t = SSLsetAnnotations(x_8, g_29);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_47;
          }
        LocalPopChoice(a_53);
        t = xtc_transform_file_2_0(b_20, c_20, t);
      }
    else
      {
        t = z_52;
        t = xtc_transform_term_2_0(d_20, e_20, t);
      }
    q_47 = t;
    {
      ATerm b_53 = t;
      int g_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_48 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              t_48 = ATgetArgument(t, 0);
              {
                ATerm s_29 = NULL,z_8 = NULL;
                t = SSLgetAnnotations(q_47);
                s_29 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_48);
                z_8 = t;
                t = SSLsetAnnotations(z_8, s_29);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = q_47;
            }
          LocalPopChoice(g_53);
          t = xtc_transform_file_2_0(g_20, h_20, t);
        }
      else
        {
          t = b_53;
          t = xtc_transform_term_2_0(m_20, n_20, t);
        }
      p_47 = t;
      {
        ATerm h_53 = t;
        int i_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_49 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                h_49 = ATgetArgument(t, 0);
                {
                  ATerm a_30 = NULL,b_9 = NULL;
                  t = SSLgetAnnotations(p_47);
                  a_30 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, h_49);
                  b_9 = t;
                  t = SSLsetAnnotations(b_9, a_30);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = p_47;
              }
            LocalPopChoice(i_53);
            t = xtc_transform_file_2_0(o_20, p_20, t);
          }
        else
          {
            t = h_53;
            t = xtc_transform_term_2_0(q_20, r_20, t);
          }
        q_30 = t;
        t = term_p_53;
        m_30 = t;
        t = q_30;
        t = pass_maybe_unbound_warnings_0_0(t);
        n_30 = t;
        t = q_30;
        t = comp_0_2(m_30, n_30, t);
        m_47 = t;
        {
          ATerm q_53 = t;
          int r_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_49 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  v_49 = ATgetArgument(t, 0);
                  {
                    ATerm s_30 = NULL,c_9 = NULL;
                    t = SSLgetAnnotations(m_47);
                    s_30 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, v_49);
                    c_9 = t;
                    t = SSLsetAnnotations(c_9, s_30);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = m_47;
                }
              LocalPopChoice(r_53);
              t = xtc_transform_file_2_0(v_20, x_20, t);
            }
          else
            {
              t = q_53;
              t = xtc_transform_term_2_0(y_20, a_21, t);
            }
          j_47 = t;
          {
            ATerm s_53 = t;
            int t_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_50 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    g_50 = ATgetArgument(t, 0);
                    {
                      ATerm z_30 = NULL,d_9 = NULL;
                      t = SSLgetAnnotations(j_47);
                      z_30 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, g_50);
                      d_9 = t;
                      t = SSLsetAnnotations(d_9, z_30);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = j_47;
                  }
                LocalPopChoice(t_53);
                t = xtc_transform_file_2_0(d_21, e_21, t);
              }
            else
              {
                t = s_53;
                t = xtc_transform_term_2_0(f_21, g_21, t);
              }
            f_47 = t;
            {
              ATerm u_53 = t;
              int v_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_50 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      p_50 = ATgetArgument(t, 0);
                      {
                        ATerm p_31 = NULL,e_9 = NULL;
                        t = SSLgetAnnotations(f_47);
                        p_31 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, p_50);
                        e_9 = t;
                        t = SSLsetAnnotations(e_9, p_31);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = f_47;
                    }
                  LocalPopChoice(v_53);
                  t = xtc_transform_file_2_0(j_21, t_21, t);
                }
              else
                {
                  t = u_53;
                  t = xtc_transform_term_2_0(u_21, v_21, t);
                }
              e_47 = t;
              {
                ATerm w_53 = t;
                int x_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_50 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        w_50 = ATgetArgument(t, 0);
                        {
                          ATerm a_32 = NULL,f_9 = NULL;
                          t = SSLgetAnnotations(e_47);
                          a_32 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, w_50);
                          f_9 = t;
                          t = SSLsetAnnotations(f_9, a_32);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = e_47;
                      }
                    LocalPopChoice(x_53);
                    t = xtc_transform_file_2_0(w_21, x_21, t);
                  }
                else
                  {
                    t = w_53;
                    t = xtc_transform_term_2_0(z_21, a_22, t);
                  }
                t = output_frontend_0_0(t);
                d_47 = t;
                {
                  ATerm y_53 = t;
                  int b_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_51 = NULL;
                      if(match_cons(t, sym_FILE_1))
                        {
                          d_51 = ATgetArgument(t, 0);
                          {
                            ATerm l_32 = NULL,g_9 = NULL;
                            t = SSLgetAnnotations(d_47);
                            l_32 = t;
                            t = (ATerm) ATmakeAppl(sym_FILE_1, d_51);
                            g_9 = t;
                            t = SSLsetAnnotations(g_9, l_32);
                          }
                        }
                      else
                        {
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                          t = d_47;
                        }
                      LocalPopChoice(b_54);
                      t = xtc_transform_file_2_0(e_22, f_22, t);
                    }
                  else
                    {
                      t = y_53;
                      t = xtc_transform_term_2_0(g_22, i_22, t);
                    }
                  t = if_keep2_1_0(j_22, t);
                  x_32 = t;
                  t = term_c_54;
                  v_32 = t;
                  t = x_32;
                  t = pass_warnings_0_0(t);
                  w_32 = t;
                  t = x_32;
                  t = comp_0_2(v_32, w_32, t);
                  b_47 = t;
                  {
                    ATerm e_54 = t;
                    int f_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_51 = NULL;
                        if(match_cons(t, sym_FILE_1))
                          {
                            k_51 = ATgetArgument(t, 0);
                            {
                              ATerm z_32 = NULL,h_9 = NULL;
                              t = SSLgetAnnotations(b_47);
                              z_32 = t;
                              t = (ATerm) ATmakeAppl(sym_FILE_1, k_51);
                              h_9 = t;
                              t = SSLsetAnnotations(h_9, z_32);
                            }
                          }
                        else
                          {
                            if(!(match_cons(t, sym_stdin_0)))
                              _fail(t);
                            t = b_47;
                          }
                        LocalPopChoice(f_54);
                        t = xtc_transform_file_2_0(n_22, o_22, t);
                      }
                    else
                      {
                        t = e_54;
                        t = xtc_transform_term_2_0(p_22, q_22, t);
                      }
                    y_46 = t;
                    {
                      ATerm g_54 = t;
                      int h_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_51 = NULL;
                          if(match_cons(t, sym_FILE_1))
                            {
                              r_51 = ATgetArgument(t, 0);
                              {
                                ATerm n_33 = NULL,j_9 = NULL;
                                t = SSLgetAnnotations(y_46);
                                n_33 = t;
                                t = (ATerm) ATmakeAppl(sym_FILE_1, r_51);
                                j_9 = t;
                                t = SSLsetAnnotations(j_9, n_33);
                              }
                            }
                          else
                            {
                              if(!(match_cons(t, sym_stdin_0)))
                                _fail(t);
                              t = y_46;
                            }
                          LocalPopChoice(h_54);
                          t = xtc_transform_file_2_0(r_22, s_22, t);
                        }
                      else
                        {
                          t = g_54;
                          t = xtc_transform_term_2_0(u_22, v_22, t);
                        }
                      t = if_keep2_1_0(a_23, t);
                    }
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
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  t = term_u_30;
  w_46 = t;
  t = (ATerm) ATinsert(CheckATermList(v_46), term_k_54);
  x_46 = t;
  t = SSL_printnl(w_46, x_46);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(CheckATermList(v_46), term_k_54));
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_n_54;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm i_48 = NULL;
  t = pass_verbose_0_0(t);
  i_48 = t;
  t = (ATerm) ATinsert(CheckATermList(i_48), term_d_33);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_n_54;
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm j_48 = NULL;
  t = pass_verbose_0_0(t);
  j_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), term_d_33);
  return(t);
}
ATerm g_20 (ATerm t)
{
  t = term_o_54;
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm a_49 = NULL;
  t = pass_verbose_0_0(t);
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), term_d_33);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_o_54;
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm b_49 = NULL;
  t = pass_verbose_0_0(t);
  b_49 = t;
  t = (ATerm) ATinsert(CheckATermList(b_49), term_d_33);
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_q_54;
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm j_49 = NULL;
  t = pass_verbose_0_0(t);
  j_49 = t;
  t = (ATerm) ATinsert(CheckATermList(j_49), term_d_33);
  return(t);
}
ATerm q_20 (ATerm t)
{
  t = term_q_54;
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm m_49 = NULL;
  t = pass_verbose_0_0(t);
  m_49 = t;
  t = (ATerm) ATinsert(CheckATermList(m_49), term_d_33);
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = term_r_54;
  return(t);
}
ATerm x_20 (ATerm t)
{
  ATerm b_50 = NULL;
  t = pass_verbose_0_0(t);
  b_50 = t;
  t = (ATerm) ATinsert(CheckATermList(b_50), term_d_33);
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = term_r_54;
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm c_50 = NULL;
  t = pass_verbose_0_0(t);
  c_50 = t;
  t = (ATerm) ATinsert(CheckATermList(c_50), term_d_33);
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = term_s_54;
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm k_50 = NULL;
  t = pass_verbose_0_0(t);
  k_50 = t;
  t = (ATerm) ATinsert(CheckATermList(k_50), term_d_33);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_s_54;
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm l_50 = NULL;
  t = pass_verbose_0_0(t);
  l_50 = t;
  t = (ATerm) ATinsert(CheckATermList(l_50), term_d_33);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_t_54;
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm r_50 = NULL;
  t = pass_verbose_0_0(t);
  r_50 = t;
  t = (ATerm) ATinsert(CheckATermList(r_50), term_d_33);
  return(t);
}
ATerm u_21 (ATerm t)
{
  t = term_t_54;
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm s_50 = NULL;
  t = pass_verbose_0_0(t);
  s_50 = t;
  t = (ATerm) ATinsert(CheckATermList(s_50), term_d_33);
  return(t);
}
ATerm w_21 (ATerm t)
{
  t = term_u_54;
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm y_50 = NULL;
  t = pass_verbose_0_0(t);
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), term_d_33);
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_u_54;
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm z_50 = NULL;
  t = pass_verbose_0_0(t);
  z_50 = t;
  t = (ATerm) ATinsert(CheckATermList(z_50), term_d_33);
  return(t);
}
ATerm e_22 (ATerm t)
{
  t = term_v_54;
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm f_51 = NULL;
  t = pass_verbose_0_0(t);
  f_51 = t;
  t = (ATerm) ATinsert(CheckATermList(f_51), term_d_33);
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_v_54;
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm g_51 = NULL;
  t = pass_verbose_0_0(t);
  g_51 = t;
  t = (ATerm) ATinsert(CheckATermList(g_51), term_d_33);
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = save_as_1_0(l_22, t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  t = term_w_54;
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm m_51 = NULL;
  t = pass_verbose_0_0(t);
  m_51 = t;
  t = (ATerm) ATinsert(CheckATermList(m_51), term_d_33);
  return(t);
}
ATerm p_22 (ATerm t)
{
  t = term_y_54;
  return(t);
}
ATerm q_22 (ATerm t)
{
  ATerm n_51 = NULL;
  t = pass_verbose_0_0(t);
  n_51 = t;
  t = (ATerm) ATinsert(CheckATermList(n_51), term_d_33);
  return(t);
}
ATerm r_22 (ATerm t)
{
  t = term_z_54;
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm t_51 = NULL;
  t = pass_verbose_0_0(t);
  t_51 = t;
  t = (ATerm) ATinsert(CheckATermList(t_51), term_d_33);
  return(t);
}
ATerm u_22 (ATerm t)
{
  t = term_z_54;
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm u_51 = NULL;
  t = pass_verbose_0_0(t);
  u_51 = t;
  t = (ATerm) ATinsert(CheckATermList(u_51), term_d_33);
  return(t);
}
ATerm a_23 (ATerm t)
{
  t = save_as_1_0(b_23, t);
  return(t);
}
ATerm b_23 (ATerm t)
{
  t = term_e_55;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(t_19, t);
  t = profile_p__2_0(v_19, x_19, t);
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm f_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_55);
    }
  else
    {
      t = f_55;
    }
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_i_55;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_55 = t;
  int k_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = NULL;
      l_52 = t;
      t = SSL_is_string(l_52);
      ;
      LocalPopChoice(k_55);
    }
  else
    {
      t = j_55;
      {
        ATerm l_55 = t;
        int n_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_23, t);
            ;
            LocalPopChoice(n_55);
          }
        else
          {
            t = l_55;
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
                        ATerm p_55 = t;
                        int q_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_55);
                          }
                        else
                          {
                            t = p_55;
                            t = debug_1_0(d_23, t);
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
                      t = h_13(x_52, y_52, t);
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
  t = term_r_55;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_55, c_53);
  t = d_13(d_53, c_53, t);
  {
    ATerm u_55 = t;
    int v_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_53 = NULL,f_53 = NULL;
        t = eval_config_0_0(t);
        e_53 = t;
        t = term_r_55;
        f_53 = t;
        t = SSL_table_put(f_53, c_53, e_53);
        t = e_53;
        ;
        LocalPopChoice(v_55);
      }
    else
      {
        t = u_55;
      }
  }
  return(t);
}
ATerm j_12 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL;
  k_53 = t;
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_48, x_48);
        t = d_13(w_48, x_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_56 = ATgetFirst((ATermList) t);
            j_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_55);
        t = SSL_table_put(w_48, x_48, j_53);
        t = (ATerm) ATmakeAppl(sym__3, w_48, x_48, j_53);
      }
    else
      {
        t = y_55;
        t = SSL_table_remove(w_48, x_48);
        t = (ATerm) ATmakeAppl(sym__2, w_48, x_48);
      }
    t = k_53;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,z_53 = NULL;
  o_53 = t;
  t = p_92(t);
  n_53 = t;
  {
    ATerm b_56 = t;
    int c_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_54 = NULL;
        t = term_f_49;
        a_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_53, term_f_49);
        t = d_13(n_53, a_54, t);
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
        m_53 = ATgetFirst((ATermList) t);
        l_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_f_49;
    z_53 = t;
    t = SSL_table_put(n_53, z_53, l_53);
    t = m_53;
    {
      ATerm e_23 (ATerm t)
      {
        ATerm d_54 = NULL;
        d_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_53, d_54);
        t = j_12(n_53, d_54, t);
        return(t);
      }
      t = map_1_0(e_23, t);
      t = o_53;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_74 (ATerm), ATerm t_74 (ATerm), ATerm t)
{
  ATerm k_56 = t;
  int l_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_74(t);
      t = t_74(t);
      ;
      LocalPopChoice(l_56);
    }
  else
    {
      t = k_56;
      t = t_74(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL,p_54 = NULL;
  j_54 = t;
  t = o_92(t);
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_54, term_f_49);
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_54 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_56 = ATgetArgument(t, 0);
            ATerm y_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_49;
        x_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_54, term_f_49);
        t = d_13(i_54, x_54, t);
        ;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        t = (ATerm) ATempty;
      }
    l_54 = t;
    t = term_f_49;
    m_54 = t;
    t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATempty);
    p_54 = t;
    t = SSL_table_put(i_54, m_54, p_54);
    t = j_54;
  }
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = term_a_50;
  return(t);
}
ATerm l_23 (ATerm t)
{
  ATerm g_55 = NULL;
  g_55 = t;
  {
    ATerm z_56 = t;
    int a_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_55);
        ;
        LocalPopChoice(a_57);
      }
    else
      {
        t = z_56;
        t = g_55;
      }
  }
  return(t);
}
ATerm m_23 (ATerm t)
{
  t = term_a_50;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm a_55 = NULL;
  ATerm i_23 (ATerm t)
  {
    ATerm b_55 = NULL;
    b_55 = t;
    {
      ATerm d_57 = t;
      int f_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_55 = NULL,d_55 = NULL;
          t = term_a_50;
          c_55 = t;
          t = term_f_49;
          d_55 = t;
          t = term_u_50;
          t = d_13(c_55, d_55, t);
          ;
          LocalPopChoice(f_57);
        }
      else
        {
          t = d_57;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((a_55 != NULL) && (a_55 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_55 = ATgetFirst((ATermList) t);
          {
            ATerm h_57 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = a_55;
      t = map_1_0(l_23, t);
      t = b_55;
      t = end_scope_1_0(m_23, t);
    }
    return(t);
  }
  t = begin_scope_1_0(g_23, t);
  t = restore_always_2_0(p_103, i_23, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_55, term_i_33);
        t = geq_0_0(t);
        t = m_55;
        t = v_95(t);
        ;
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        t = m_55;
      }
  }
  return(t);
}
ATerm l_12 (ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm q_57 = t;
  int s_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_36, d_36);
      ;
      LocalPopChoice(s_57);
    }
  else
    {
      t = q_57;
      t = SSL_addr(c_36, d_36);
    }
  return(t);
}
ATerm n_12 (ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_36, j_36);
      ;
      LocalPopChoice(w_57);
    }
  else
    {
      t = v_57;
      t = SSL_subtr(i_36, j_36);
    }
  return(t);
}
ATerm o_12 (ATerm t_45, ATerm v_45, ATerm x_45, ATerm z_45, ATerm u_45, ATerm w_45, ATerm y_45, ATerm a_46, ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,w_55 = NULL,x_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
  t = n_12(t_45, u_45, t);
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
  t = n_12(v_45, w_45, t);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, y_45);
  t = n_12(x_45, y_45, t);
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_45, a_46);
  t = n_12(z_45, a_46, t);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__4, s_55, t_55, w_55, x_55);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,m_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_57 = ATgetArgument(t, 0);
      if(match_cons(z_57, sym__4))
        {
          d_56 = ATgetArgument(z_57, 0);
          e_56 = ATgetArgument(z_57, 1);
          f_56 = ATgetArgument(z_57, 2);
          g_56 = ATgetArgument(z_57, 3);
        }
      else
        _fail(t);
      {
        ATerm a_58 = ATgetArgument(t, 1);
        if(match_cons(a_58, sym__4))
          {
            h_56 = ATgetArgument(a_58, 0);
            i_56 = ATgetArgument(a_58, 1);
            j_56 = ATgetArgument(a_58, 2);
            m_56 = ATgetArgument(a_58, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_12(d_56, e_56, f_56, g_56, h_56, i_56, j_56, m_56, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,u_56 = NULL,v_56 = NULL,x_56 = NULL,b_57 = NULL,c_57 = NULL,e_57 = NULL,g_57 = NULL,i_57 = NULL;
  v_56 = t;
  t = times_0_0(t);
  n_56 = t;
  t = v_56;
  t = j_99(t);
  o_56 = t;
  t = times_0_0(t);
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_56, n_56);
  t = diff_times_0_0(t);
  r_56 = t;
  if(match_cons(t, sym__4))
    {
      e_57 = ATgetArgument(t, 0);
      {
        ATerm c_58 = ATgetArgument(t, 1);
      }
      g_57 = ATgetArgument(t, 2);
      {
        ATerm e_58 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_57, g_57);
  t = l_12(e_57, g_57, t);
  i_57 = t;
  t = SSL_TicksToSeconds(i_57);
  p_56 = t;
  t = r_56;
  if(match_cons(t, sym__4))
    {
      ATerm f_58 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
      {
        ATerm g_58 = ATgetArgument(t, 2);
      }
      b_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_56, b_57);
  t = l_12(x_56, b_57, t);
  c_57 = t;
  t = SSL_TicksToSeconds(c_57);
  q_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_56), term_j_58), p_56), term_i_58);
  t = i_99(t);
  t = o_56;
  return(t);
}
ATerm debug_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,o_57 = NULL;
  j_57 = t;
  t = j_94(t);
  k_57 = t;
  t = term_u_30;
  l_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_57), k_57);
  o_57 = t;
  t = SSL_printnl(l_57, o_57);
  t = j_57;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm p_57 = NULL,r_57 = NULL,t_57 = NULL,u_57 = NULL;
  p_57 = t;
  t = term_l_58;
  t = get_config_0_0(t);
  r_57 = t;
  t = term_s_31;
  t_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_58), term_t_58), term_s_58), term_r_58), term_q_58), term_p_58), term_o_58), r_57), term_n_58);
  u_57 = t;
  t = SSL_printnl(t_57, u_57);
  t = p_57;
  return(t);
}
ATerm p_12 (ATerm o_39, ATerm p_39, ATerm t)
{
  t = SSL_copy(o_39, p_39);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  ATerm n_23 (ATerm t)
  {
    ATerm y_57 = NULL,b_58 = NULL;
    y_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_57), y_57);
    t = d_13(not_null(x_57), y_57, t);
    b_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_57, b_58);
    return(t);
  }
  if(((x_57 != NULL) && (x_57 != t)))
    _fail(t);
  else
    x_57 = t;
  t = SSL_table_keys(x_57);
  t = map_1_0(n_23, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  {
    ATerm v_58 = t;
    int z_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_58 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        h_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_58, term_j_35);
        t = geq_0_0(t);
        t = d_58;
        t = z_95(t);
        ;
        LocalPopChoice(z_58);
      }
    else
      {
        t = v_58;
        t = d_58;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  {
    ATerm a_59 = t;
    int b_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_58 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        m_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_58, term_q_35);
        t = geq_0_0(t);
        t = k_58;
        t = y_95(t);
        ;
        LocalPopChoice(b_59);
      }
    else
      {
        t = a_59;
        t = k_58;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym__2))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_58;
        if((x_58 != t))
          {
            _fail(t);
          }
        t = w_58;
        ;
        LocalPopChoice(f_59);
      }
    else
      {
        t = d_59;
        t = (ATerm) ATmakeAppl(sym__2, x_58, y_58);
        {
          ATerm h_59 = t;
          int i_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_58, y_58);
              ;
              LocalPopChoice(i_59);
            }
          else
            {
              t = h_59;
              t = SSL_gtr(x_58, y_58);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_58, y_58);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  {
    ATerm j_59 = t;
    int k_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL;
        t = term_r_30;
        t = get_config_0_0(t);
        e_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_59, term_u_35);
        t = geq_0_0(t);
        t = c_59;
        t = a_96(t);
        ;
        LocalPopChoice(k_59);
      }
    else
      {
        t = j_59;
        t = c_59;
      }
  }
  return(t);
}
ATerm s_12 (ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm c_26, ATerm b_26, ATerm t)
{
  t = w_85(t);
  {
    ATerm o_23 (ATerm t)
    {
      ATerm g_59 = NULL;
      g_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_26, g_59);
      t = v_85(t);
      return(t);
    }
    t = fetch_1_0(o_23, t);
    t = b_26;
  }
  return(t);
}
ATerm t_12 (ATerm s_85 (ATerm), ATerm y_25, ATerm x_25, ATerm t)
{
  ATerm c_60 (ATerm t)
  {
    ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
    s_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_59 = ATgetFirst((ATermList) t);
            u_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_59 = t;
          int m_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_59;
              {
                ATerm p_23 (ATerm t)
                {
                  t = x_25;
                  return(t);
                }
                t = s_12(s_85, p_23, t_59, u_59, t);
                t = c_60(t);
              }
              ;
              LocalPopChoice(m_59);
            }
          else
            {
              t = l_59;
              {
                ATerm a_36 = NULL,f_36 = NULL,v_14 = NULL;
                t = SSLgetAnnotations(s_59);
                a_36 = t;
                t = u_59;
                t = c_60(t);
                f_36 = t;
                t = (ATerm) ATinsert(CheckATermList(f_36), t_59);
                v_14 = t;
                t = SSLsetAnnotations(v_14, a_36);
              }
            }
        }
      }
    return(t);
  }
  t = y_25;
  t = c_60(t);
  return(t);
}
ATerm r_23 (ATerm t)
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
ATerm u_12 (ATerm o_49, ATerm p_49, ATerm q_49, ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,j_60 = NULL;
  g_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_59 = ATgetArgument(t, 0);
            ATerm q_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
        t = d_13(o_49, p_49, t);
        ;
        LocalPopChoice(o_59);
      }
    else
      {
        t = n_59;
        t = (ATerm) ATempty;
      }
    j_60 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_60, q_49);
    t = t_12(r_23, j_60, q_49, t);
    h_60 = t;
    t = SSL_table_put(o_49, p_49, h_60);
    t = g_60;
  }
  return(t);
}
ATerm v_12 (ATerm r_100 (ATerm), ATerm y_49, ATerm x_49, ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm q_60 = NULL,r_60 = NULL;
    if(match_cons(t, sym__2))
      {
        q_60 = ATgetArgument(t, 0);
        r_60 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_49, q_60, r_60);
    t = r_100(t);
    return(t);
  }
  t = x_49;
  t = map_1_0(u_23, t);
  return(t);
}
ATerm z_12 (ATerm w_38, ATerm x_38, ATerm t)
{
  t = SSL_access(w_38, x_38);
  return(t);
}
ATerm o_61 (ATerm g_61, ATerm t)
{
  t = SSL_fclose(g_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL;
  m_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_61 = ATgetArgument(t, 0);
      {
        ATerm r_59 = t;
        int v_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_61);
            ;
            LocalPopChoice(v_59);
          }
        else
          {
            t = r_59;
            t = o_61(m_61, t);
          }
      }
    }
  else
    {
      t = o_61(m_61, t);
    }
  return(t);
}
ATerm w_12 (ATerm s_42, ATerm t)
{
  t = SSL_read_term_from_stream(s_42);
  return(t);
}
ATerm x_12 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm p_61 = NULL;
  t = SSL_fopen(e_39, f_39);
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_61);
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
ATerm o_63 (ATerm f_62, ATerm t)
{
  ATerm g_62 = NULL;
  t = SSL_explode_term(f_62);
  if(match_cons(t, sym__2))
    {
      ATerm w_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_59 = ATgetArgument(t, 1);
        if(((ATgetType(z_59) == AT_LIST) && !(ATisEmpty(z_59))))
          {
            g_62 = ATgetFirst((ATermList) z_59);
            {
              ATerm a_60 = (ATerm) ATgetNext((ATermList) z_59);
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
ATerm p_63 (ATerm j_62, ATerm k_62, ATerm m_62, ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,u_62 = NULL,e_15 = NULL;
  t = SSLgetAnnotations(m_62);
  q_62 = t;
  t = j_62;
  if(match_cons(t, sym_Path_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_62, k_62);
  e_15 = t;
  t = SSLsetAnnotations(e_15, q_62);
  if(match_cons(t, sym__2))
    {
      o_62 = ATgetArgument(t, 0);
      p_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12(o_62, p_62, t);
  return(t);
}
ATerm q_63 (ATerm w_62, ATerm x_62, ATerm z_62, ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL,h_63 = NULL,f_15 = NULL;
  t = SSLgetAnnotations(z_62);
  d_63 = t;
  t = SSL_is_string(w_62);
  h_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_63, x_62);
  f_15 = t;
  t = SSLsetAnnotations(f_15, d_63);
  if(match_cons(t, sym__2))
    {
      b_63 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12(b_63, c_63, t);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,m_63 = NULL;
  j_63 = t;
  if(match_cons(t, sym__2))
    {
      k_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
      {
        ATerm b_60 = t;
        int d_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_63(j_63, t);
            ;
            LocalPopChoice(d_60);
          }
        else
          {
            t = b_60;
            {
              ATerm e_60 = t;
              int f_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_63(k_63, m_63, j_63, t);
                  ;
                  LocalPopChoice(f_60);
                }
              else
                {
                  t = e_60;
                  t = q_63(k_63, m_63, j_63, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_63(j_63, t);
    }
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = term_i_60;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  ATerm k_60 = t;
  int l_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_63 = NULL;
      v_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_63, term_m_60);
      t = y_12(t);
      ;
      LocalPopChoice(l_60);
    }
  else
    {
      t = k_60;
      t = debug_1_0(v_23, t);
      _fail(t);
    }
  t_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_12(u_63, t);
  s_63 = t;
  t = t_63;
  t = fclose_0_0(t);
  t = s_63;
  return(t);
}
ATerm w_23 (ATerm t)
{
  t = term_n_60;
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = term_o_60;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_60 = t;
  int t_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_63 = NULL,z_63 = NULL;
      x_63 = t;
      t = (ATerm) ATinsert(ATempty, term_u_60);
      z_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_63, (ATerm) ATinsert(ATempty, term_u_60));
      t = z_12(x_63, z_63, t);
      LocalPopChoice(t_60);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_60;
      {
        ATerm v_60 = t;
        int w_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_60 = t;
            if((PushChoice() == 0))
              {
                ATerm b_64 = NULL,c_64 = NULL;
                b_64 = t;
                t = (ATerm) ATinsert(ATempty, term_z_49);
                c_64 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_64, (ATerm) ATinsert(ATempty, term_z_49));
                t = z_12(b_64, c_64, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_60;
              }
            t = debug_1_0(w_23, t);
            ;
            LocalPopChoice(w_60);
          }
        else
          {
            t = v_60;
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
  t = term_y_60;
  return(t);
}
ATerm a_24 (ATerm t)
{
  t = debug_1_0(b_24, t);
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = term_z_60;
  return(t);
}
ATerm c_24 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL;
  t_64 = t;
  t = term_u_30;
  u_64 = t;
  t = (ATerm) ATinsert(ATempty, term_a_61);
  v_64 = t;
  t = SSL_printnl(u_64, v_64);
  t = t_64;
  return(t);
}
ATerm d_24 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,z_64 = NULL;
  if(match_cons(t, sym__3))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      z_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_12(w_64, x_64, z_64, t);
  return(t);
}
ATerm f_24 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  b_65 = t;
  t = term_u_30;
  c_65 = t;
  t = (ATerm) ATinsert(ATempty, term_b_61);
  d_65 = t;
  t = SSL_printnl(c_65, d_65);
  t = b_65;
  return(t);
}
ATerm g_24 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  t = term_u_30;
  g_65 = t;
  t = (ATerm) ATinsert(ATempty, term_a_61);
  h_65 = t;
  t = SSL_printnl(g_65, h_65);
  t = f_65;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,m_64 = NULL,o_64 = NULL,p_64 = NULL;
  d_64 = t;
  t = if_verbose5_1_0(y_23, t);
  {
    ATerm c_61 = t;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL,s_64 = NULL;
        t = term_d_61;
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_64);
        s_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_61, (ATerm) ATmakeAppl(sym_Imported_1, d_64));
        t = d_13(q_64, s_64, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_61;
      }
    g_64 = t;
    t = term_d_61;
    m_64 = t;
    t = term_e_61;
    o_64 = t;
    t = (ATerm) ATinsert(ATempty, d_64);
    p_64 = t;
    t = SSL_table_put(m_64, o_64, p_64);
    t = g_64;
    t = if_verbose4_1_0(a_24, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(c_24, t);
    f_64 = t;
    t = term_d_61;
    k_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_61, f_64);
    t = v_12(d_24, k_64, f_64, t);
    t = if_verbose6_1_0(f_24, t);
    t = term_d_61;
    h_64 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, d_64);
    i_64 = t;
    t = (ATerm) ATempty;
    j_64 = t;
    t = SSL_table_put(h_64, i_64, j_64);
    t = (ATerm) ATmakeAppl(sym__3, term_d_61, (ATerm)ATmakeAppl(sym_Imported_1, d_64), (ATerm) ATempty);
    t = if_verbose4_1_0(g_24, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm v_88 (ATerm), ATerm t)
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
        ATerm f_61 = t;
        int h_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_37 = NULL,r_37 = NULL,s_37 = NULL,k_15 = NULL;
            t = SSLgetAnnotations(w_65);
            m_37 = t;
            t = x_65;
            t = v_88(t);
            r_37 = t;
            t = y_65;
            t = filter_1_0(v_88, t);
            s_37 = t;
            t = (ATerm) ATinsert(CheckATermList(s_37), r_37);
            k_15 = t;
            t = SSLsetAnnotations(k_15, m_37);
            ;
            LocalPopChoice(h_61);
          }
        else
          {
            t = f_61;
            t = y_65;
            t = filter_1_0(v_88, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm g_66 (ATerm t)
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_74(t);
        t = g_66(t);
        ;
        LocalPopChoice(j_61);
      }
    else
      {
        t = i_61;
      }
    return(t);
  }
  t = g_66(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_61 = t;
  int n_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_61;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_61);
    }
  else
    {
      t = k_61;
      {
        ATerm r_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_66 = NULL;
            t = term_w_61;
            h_66 = t;
            t = SSL_getenv(h_66);
            ;
            LocalPopChoice(t_61);
          }
        else
          {
            t = r_61;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_24 (ATerm t)
{
  t = debug_1_0(i_24, t);
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = term_x_61;
  return(t);
}
ATerm j_24 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  t = term_d_61;
  n_66 = t;
  t = term_y_61;
  o_66 = t;
  t = term_z_61;
  t = d_13(n_66, o_66, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_62 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_62;
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
  t = term_b_62;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm j_66 = NULL;
  t = if_verbose5_1_0(h_24, t);
  j_66 = t;
  {
    ATerm c_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_66 = NULL,l_66 = NULL;
        t = term_d_61;
        k_66 = t;
        t = term_e_61;
        l_66 = t;
        t = term_e_62;
        t = d_13(k_66, l_66, t);
        ;
        LocalPopChoice(d_62);
      }
    else
      {
        t = c_62;
        {
          ATerm m_66 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_66 = t;
          t = repeat_1_0(j_24, t);
          t = m_66;
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
  t = term_h_62;
  return(t);
}
ATerm p_67 (ATerm u_66, ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL;
  t = term_d_61;
  y_66 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_66);
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_61, (ATerm) ATmakeAppl(sym_Tool_1, u_66));
  t = d_13(y_66, z_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_62 = ATgetFirst((ATermList) t);
      if(match_cons(i_62, sym__2))
        {
          ATerm n_62 = ATgetArgument(i_62, 0);
          x_66 = ATgetArgument(i_62, 1);
        }
      else
        _fail(t);
      {
        ATerm l_62 = (ATerm) ATgetNext((ATermList) t);
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
  t = term_h_62;
  return(t);
}
ATerm r_24 (ATerm t)
{
  t = term_d_61;
  t = table_getlist_0_0(t);
  t = debug_1_0(t_24, t);
  return(t);
}
ATerm t_24 (ATerm t)
{
  t = term_r_62;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_62 = t;
  int t_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_67 = NULL,b_67 = NULL,d_67 = NULL;
      t = if_verbose5_1_0(m_24, t);
      t = xtc_load_0_0(t);
      d_67 = t;
      if(match_cons(t, sym__2))
        {
          a_67 = ATgetArgument(t, 0);
          b_67 = ATgetArgument(t, 1);
          {
            ATerm v_62 = t;
            int y_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
                t = term_d_61;
                i_67 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_67);
                j_67 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_61, (ATerm) ATmakeAppl(sym_Tool_1, a_67));
                t = d_13(i_67, j_67, t);
                {
                  ATerm o_24 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_67 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_67 != NULL) && (h_67 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_67 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(o_24, t);
                  t = not_null(h_67);
                }
                ;
                LocalPopChoice(y_62);
              }
            else
              {
                t = v_62;
                t = p_67(d_67, t);
              }
          }
        }
      else
        {
          t = p_67(d_67, t);
        }
      t = if_verbose5_1_0(p_24, t);
      ;
      LocalPopChoice(t_62);
    }
  else
    {
      t = s_62;
      {
        ATerm o_67 = NULL,f_38 = NULL,g_38 = NULL;
        o_67 = t;
        t = term_u_30;
        f_38 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_63), o_67), term_a_63);
        g_38 = t;
        t = SSL_printnl(f_38, g_38);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_63), o_67), term_a_63);
        t = if_verbose5_1_0(r_24, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm a_13 (ATerm z_43, ATerm y_43, ATerm t)
{
  ATerm r_67 = NULL,t_67 = NULL,v_67 = NULL;
  t = z_43;
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        t = (ATerm) ATempty;
      }
    t_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_43, t_67);
    t = conc_0_0(t);
    r_67 = t;
    t = term_r_55;
    v_67 = t;
    t = SSL_table_put(v_67, z_43, r_67);
    t = (ATerm) ATmakeAppl(sym__3, term_r_55, z_43, r_67);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_67 = NULL,b_68 = NULL,e_68 = NULL,h_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
      t = term_n_31;
      t = p_0(t);
      j_68 = t;
      t = term_i_63;
      k_68 = t;
      t = term_l_63;
      l_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_63, term_l_63, j_68);
      t = e_13(k_68, l_68, j_68, t);
      _fail(t);
    }
  else
    {
      ATerm r_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_67 = ATgetFirst((ATermList) t);
          b_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_68 = ATgetFirst((ATermList) t);
          h_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_67;
      t = m_0(t);
      t = e_68;
      t = n_0(t);
      r_68 = t;
      t = (ATerm) ATinsert(CheckATermList(h_68), r_68);
    }
  return(t);
}
ATerm b_13 (ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm n_63 = t;
  int r_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_68 = NULL;
      t = w_43;
      t = get_config_0_0(t);
      t = term_r_55;
      s_68 = t;
      t = SSL_table_remove(s_68, w_43);
      t = (ATerm) ATmakeAppl(sym__2, term_r_55, w_43);
      ;
      LocalPopChoice(r_63);
    }
  else
    {
      t = n_63;
      t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
      t = g_13(w_43, x_43, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  ATerm n_69 (ATerm t)
  {
    ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
    m_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_69 = ATgetFirst((ATermList) t);
        l_69 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_38 = NULL,s_38 = NULL,m_15 = NULL;
          t = SSLgetAnnotations(m_69);
          l_38 = t;
          t = l_69;
          t = n_69(t);
          s_38 = t;
          t = (ATerm) ATinsert(CheckATermList(s_38), k_69);
          m_15 = t;
          t = SSLsetAnnotations(m_15, l_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_69;
        t = e_82(t);
      }
    return(t);
  }
  t = n_69(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
  u_68 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_68;
    }
  else
    {
      ATerm u_24 (ATerm t)
      {
        t = not_null(w_68);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_68 = ATgetFirst((ATermList) t);
          if(((w_68 != NULL) && (w_68 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_68;
      t = at_end_1_0(u_24, t);
    }
  return(t);
}
ATerm z_69 (ATerm r_69, ATerm t)
{
  ATerm s_69 = NULL;
  t = SSL_explode_term(r_69);
  if(match_cons(t, sym__2))
    {
      ATerm w_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_69;
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
        ATerm y_63 = t;
        int a_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_24 (ATerm t)
            {
              t = v_69;
              return(t);
            }
            t = u_69;
            t = at_end_1_0(v_24, t);
            ;
            LocalPopChoice(a_64);
          }
        else
          {
            t = y_63;
            t = z_69(w_69, t);
          }
      }
    }
  else
    {
      t = z_69(w_69, t);
    }
  return(t);
}
ATerm c_13 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
  t = a_44;
  {
    ATerm e_64 = t;
    int l_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_64);
      }
    else
      {
        t = e_64;
        t = (ATerm) ATempty;
      }
    f_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_70, b_44);
    t = conc_0_0(t);
    e_70 = t;
    t = term_r_55;
    g_70 = t;
    t = SSL_table_put(g_70, a_44, e_70);
    t = (ATerm) ATmakeAppl(sym__3, term_r_55, a_44, e_70);
  }
  return(t);
}
ATerm b_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_25 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL;
  p_70 = t;
  t = term_v_47;
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_47, p_70);
  t = g_13(q_70, p_70, t);
  t = term_n_31;
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = term_n_64;
  return(t);
}
ATerm e_25 (ATerm t)
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
ATerm g_25 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL;
  w_70 = t;
  t = term_a_31;
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, w_70);
  t = g_13(x_70, w_70, t);
  t = term_n_31;
  return(t);
}
ATerm h_25 (ATerm t)
{
  t = term_r_64;
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm y_70 = NULL;
  y_70 = t;
  if(match_string(t, "-I"))
    {
      t = y_70;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = y_70;
    }
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  a_71 = t;
  t = term_a_52;
  b_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_71), term_a_52);
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_52, (ATerm) ATinsert(ATinsert(ATempty, a_71), term_a_52));
  t = a_13(b_71, c_71, t);
  t = term_n_31;
  return(t);
}
ATerm s_25 (ATerm t)
{
  t = term_y_64;
  return(t);
}
ATerm a_26 (ATerm t)
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
ATerm d_26 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  e_71 = t;
  t = term_o_50;
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_50, e_71);
  t = g_13(f_71, e_71, t);
  t = term_n_31;
  return(t);
}
ATerm e_26 (ATerm t)
{
  t = term_a_65;
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
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  t = term_z_31;
  h_71 = t;
  t = (ATerm) ATinsert(ATempty, g_71);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_31, (ATerm) ATinsert(ATempty, g_71));
  t = c_13(h_71, i_71, t);
  t = term_n_31;
  return(t);
}
ATerm h_26 (ATerm t)
{
  t = term_e_65;
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
  ATerm j_71 = NULL,m_71 = NULL,n_71 = NULL;
  j_71 = t;
  t = term_g_31;
  m_71 = t;
  t = (ATerm) ATinsert(ATempty, j_71);
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATinsert(ATempty, j_71));
  t = a_13(m_71, n_71, t);
  t = term_n_31;
  return(t);
}
ATerm l_26 (ATerm t)
{
  t = term_i_65;
  return(t);
}
ATerm m_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_26 (ATerm t)
{
  ATerm o_71 = NULL,q_71 = NULL,r_71 = NULL;
  o_71 = t;
  t = term_b_31;
  q_71 = t;
  t = (ATerm) ATinsert(ATempty, o_71);
  r_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, (ATerm) ATinsert(ATempty, o_71));
  t = a_13(q_71, r_71, t);
  t = term_n_31;
  return(t);
}
ATerm o_26 (ATerm t)
{
  t = term_j_65;
  return(t);
}
ATerm p_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_26 (ATerm t)
{
  ATerm s_71 = NULL,u_71 = NULL;
  t = term_h_31;
  s_71 = t;
  t = term_n_31;
  u_71 = t;
  t = term_k_65;
  t = g_13(s_71, u_71, t);
  t = term_n_31;
  return(t);
}
ATerm r_26 (ATerm t)
{
  t = term_l_65;
  return(t);
}
ATerm s_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_26 (ATerm t)
{
  ATerm v_71 = NULL,x_71 = NULL;
  t = term_q_51;
  v_71 = t;
  t = term_n_31;
  x_71 = t;
  t = term_m_65;
  t = g_13(v_71, x_71, t);
  t = term_n_31;
  return(t);
}
ATerm u_26 (ATerm t)
{
  t = term_n_65;
  return(t);
}
ATerm v_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_26 (ATerm t)
{
  ATerm y_71 = NULL,a_72 = NULL;
  t = term_d_48;
  y_71 = t;
  t = term_n_31;
  a_72 = t;
  t = term_o_65;
  t = g_13(y_71, a_72, t);
  t = term_n_31;
  return(t);
}
ATerm x_26 (ATerm t)
{
  t = term_p_65;
  return(t);
}
ATerm y_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  t = SSL_string_to_int(b_72);
  c_72 = t;
  t = term_q_34;
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_34, c_72);
  t = g_13(d_72, c_72, t);
  t = term_n_31;
  return(t);
}
ATerm a_27 (ATerm t)
{
  t = term_q_65;
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
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
  e_72 = t;
  t = SSL_string_to_int(e_72);
  f_72 = t;
  t = term_v_34;
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_34, f_72);
  t = g_13(g_72, f_72, t);
  t = term_n_31;
  return(t);
}
ATerm i_27 (ATerm t)
{
  t = term_r_65;
  return(t);
}
ATerm j_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_27 (ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL;
  t = term_o_36;
  h_72 = t;
  t = term_n_31;
  i_72 = t;
  t = term_s_65;
  t = b_13(h_72, i_72, t);
  t = term_n_31;
  return(t);
}
ATerm o_27 (ATerm t)
{
  t = term_t_65;
  return(t);
}
ATerm p_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_27 (ATerm t)
{
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  t = SSL_string_to_int(j_72);
  k_72 = t;
  t = term_r_30;
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, k_72);
  t = g_13(l_72, k_72, t);
  t = term_n_31;
  return(t);
}
ATerm s_27 (ATerm t)
{
  t = term_u_65;
  return(t);
}
ATerm t_27 (ATerm t)
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
ATerm u_27 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  t = term_r_30;
  n_72 = t;
  t = term_h_30;
  o_72 = t;
  t = term_v_65;
  t = g_13(n_72, o_72, t);
  t = term_n_31;
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_z_65;
  return(t);
}
ATerm w_27 (ATerm t)
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
  t = term_a_66;
  s_72 = t;
  t = term_n_31;
  t_72 = t;
  t = term_b_66;
  t = g_13(s_72, t_72, t);
  t = term_n_31;
  return(t);
}
ATerm z_27 (ATerm t)
{
  t = term_c_66;
  return(t);
}
ATerm a_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_28 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL;
  t = term_d_66;
  u_72 = t;
  t = term_n_31;
  v_72 = t;
  t = term_e_66;
  t = g_13(u_72, v_72, t);
  t = term_n_31;
  return(t);
}
ATerm c_28 (ATerm t)
{
  t = term_f_66;
  return(t);
}
ATerm d_28 (ATerm t)
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
ATerm f_28 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL;
  t = term_i_66;
  x_72 = t;
  t = term_n_31;
  y_72 = t;
  t = term_p_66;
  t = g_13(x_72, y_72, t);
  t = term_n_31;
  return(t);
}
ATerm g_28 (ATerm t)
{
  t = term_q_66;
  return(t);
}
ATerm h_28 (ATerm t)
{
  ATerm b_73 = NULL;
  b_73 = t;
  if(match_string(t, "--warning"))
    {
      t = b_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = b_73;
    }
  return(t);
}
ATerm i_28 (ATerm t)
{
  ATerm c_73 = NULL;
  c_73 = t;
  {
    ATerm r_66 = t;
    int s_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,p_15 = NULL;
        t = term_y_47;
        t = get_config_0_0(t);
        i_73 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_73 = ATgetFirst((ATermList) t);
            h_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_73);
        f_73 = t;
        t = g_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = h_73;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_73), g_73);
        p_15 = t;
        t = SSLsetAnnotations(p_15, f_73);
        t = term_y_47;
        d_73 = t;
        t = (ATerm) ATinsert(ATempty, c_73);
        e_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_47, (ATerm) ATinsert(ATempty, c_73));
        t = g_13(d_73, e_73, t);
        ;
        LocalPopChoice(s_66);
      }
    else
      {
        t = r_66;
        {
          ATerm j_73 = NULL,k_73 = NULL;
          t = term_y_47;
          j_73 = t;
          t = (ATerm) ATinsert(ATempty, c_73);
          k_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_47, (ATerm) ATinsert(ATempty, c_73));
          t = a_13(j_73, k_73, t);
        }
      }
    t = term_n_31;
  }
  return(t);
}
ATerm j_28 (ATerm t)
{
  t = term_t_66;
  return(t);
}
ATerm k_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_28 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
  l_73 = t;
  t = term_p_48;
  m_73 = t;
  t = term_i_33;
  n_73 = t;
  t = term_v_66;
  t = g_13(m_73, n_73, t);
  t = l_73;
  return(t);
}
ATerm m_28 (ATerm t)
{
  t = term_p_48;
  return(t);
}
ATerm n_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  t = term_u_48;
  p_73 = t;
  t = term_h_30;
  q_73 = t;
  t = term_w_66;
  t = g_13(p_73, q_73, t);
  t = o_73;
  return(t);
}
ATerm p_28 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm q_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  ATerm r_73 = NULL,v_73 = NULL;
  t = term_b_52;
  r_73 = t;
  t = term_n_31;
  v_73 = t;
  t = term_c_67;
  t = g_13(r_73, v_73, t);
  t = term_n_31;
  return(t);
}
ATerm t_28 (ATerm t)
{
  t = term_e_67;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm f_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(b_25, c_25, d_25, t);
      ;
      LocalPopChoice(g_67);
    }
  else
    {
      t = f_67;
      {
        ATerm k_67 = t;
        int l_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_25, g_25, h_25, t);
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
                  t = ArgOption_3_0(n_25, q_25, s_25, t);
                  ;
                  LocalPopChoice(n_67);
                }
              else
                {
                  t = m_67;
                  {
                    ATerm q_67 = t;
                    int s_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(a_26, d_26, e_26, t);
                        ;
                        LocalPopChoice(s_67);
                      }
                    else
                      {
                        t = q_67;
                        {
                          ATerm u_67 = t;
                          int w_67 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(f_26, g_26, h_26, t);
                              ;
                              LocalPopChoice(w_67);
                            }
                          else
                            {
                              t = u_67;
                              {
                                ATerm x_67 = t;
                                int y_67 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(i_26, j_26, l_26, t);
                                    ;
                                    LocalPopChoice(y_67);
                                  }
                                else
                                  {
                                    t = x_67;
                                    {
                                      ATerm a_68 = t;
                                      int c_68 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(m_26, n_26, o_26, t);
                                          ;
                                          LocalPopChoice(c_68);
                                        }
                                      else
                                        {
                                          t = a_68;
                                          {
                                            ATerm d_68 = t;
                                            int f_68 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(p_26, q_26, r_26, t);
                                                ;
                                                LocalPopChoice(f_68);
                                              }
                                            else
                                              {
                                                t = d_68;
                                                {
                                                  ATerm g_68 = t;
                                                  int i_68 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(s_26, t_26, u_26, t);
                                                      ;
                                                      LocalPopChoice(i_68);
                                                    }
                                                  else
                                                    {
                                                      t = g_68;
                                                      {
                                                        ATerm m_68 = t;
                                                        int n_68 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Option_3_0(v_26, w_26, x_26, t);
                                                            ;
                                                            LocalPopChoice(n_68);
                                                          }
                                                        else
                                                          {
                                                            t = m_68;
                                                            {
                                                              ATerm o_68 = t;
                                                              int p_68 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(y_26, z_26, a_27, t);
                                                                  ;
                                                                  LocalPopChoice(p_68);
                                                                }
                                                              else
                                                                {
                                                                  t = o_68;
                                                                  {
                                                                    ATerm q_68 = t;
                                                                    int t_68 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(f_27, g_27, i_27, t);
                                                                        ;
                                                                        LocalPopChoice(t_68);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_68;
                                                                        {
                                                                          ATerm x_68 = t;
                                                                          int y_68 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(j_27, n_27, o_27, t);
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
                                                                                    t = ArgOption_3_0(p_27, q_27, s_27, t);
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
                                                                                          t = Option_3_0(t_27, u_27, v_27, t);
                                                                                          ;
                                                                                          LocalPopChoice(c_69);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_69;
                                                                                          {
                                                                                            ATerm d_69 = t;
                                                                                            int e_69 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Option_3_0(w_27, x_27, z_27, t);
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
                                                                                                      t = Option_3_0(a_28, b_28, c_28, t);
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
                                                                                                            t = Option_3_0(d_28, f_28, g_28, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(i_69);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_69;
                                                                                                            {
                                                                                                              ATerm j_69 = t;
                                                                                                              int o_69 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(h_28, i_28, j_28, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(o_69);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = j_69;
                                                                                                                  {
                                                                                                                    ATerm p_69 = t;
                                                                                                                    int q_69 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(k_28, l_28, m_28, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(q_69);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_69;
                                                                                                                        {
                                                                                                                          ATerm t_69 = t;
                                                                                                                          int x_69 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Option_3_0(n_28, o_28, p_28, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(x_69);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_69;
                                                                                                                              t = Option_3_0(q_28, s_28, t_28, t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_70), term_q_58), term_n_70), term_m_70), term_l_70), term_q_58), term_k_70), term_j_70), term_i_70), term_h_70), term_d_70), term_c_70), term_b_70), term_a_70), term_y_69);
  return(t);
}
ATerm map_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm k_74 (ATerm t)
  {
    ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
    h_74 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_74;
      }
    else
      {
        ATerm q_39 = NULL,u_39 = NULL,w_39 = NULL,c_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_74 = ATgetFirst((ATermList) t);
            j_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_74);
        q_39 = t;
        t = i_74;
        t = o_81(t);
        u_39 = t;
        t = j_74;
        t = k_74(t);
        w_39 = t;
        t = (ATerm) ATinsert(CheckATermList(w_39), u_39);
        c_16 = t;
        t = SSLsetAnnotations(c_16, q_39);
      }
    return(t);
  }
  t = k_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_74 = ATgetFirst((ATermList) t);
      o_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_74 = NULL,v_74 = NULL;
        ATerm w_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_74)), not_null(v_74));
          return(t);
        }
        t = o_74;
        t = k_0(t);
        if(((u_74 != NULL) && (u_74 != t)))
          _fail(t);
        else
          u_74 = t;
        t = n_74;
        t = j_0(t);
        if(((v_74 != NULL) && (v_74 != t)))
          _fail(t);
        else
          v_74 = t;
        t = o_74;
        t = reverse_acc_2_0(j_0, w_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_31;
      t = k_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_74 = NULL;
  t = term_n_31;
  t = i_0(t);
  w_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_71), w_74), term_z_70), term_q_58), term_u_70), term_q_58), term_t_70), term_s_70), term_q_58), term_r_70);
  return(t);
}
ATerm a_29 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_29 (ATerm t)
{
  ATerm n_75 = NULL;
  n_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_75), term_l_71);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  ATerm p_71 = t;
  int t_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_71;
      t = get_config_0_0(t);
      c_75 = t;
      ;
      LocalPopChoice(t_71);
    }
  else
    {
      t = p_71;
      {
        ATerm x_28 (ATerm t)
        {
          ATerm f_75 = NULL,i_75 = NULL,j_75 = NULL,j_16 = NULL;
          j_75 = t;
          if(match_cons(t, sym_Program_1))
            {
              i_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_75);
          f_75 = t;
          t = i_75;
          if(((c_75 != NULL) && (c_75 != t)))
            _fail(t);
          else
            c_75 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, i_75);
          j_16 = t;
          t = SSLsetAnnotations(j_16, f_75);
          return(t);
        }
        t = fetch_1_0(x_28, t);
      }
    }
  {
    ATerm z_71 = t;
    int q_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 (ATerm t)
        {
          t = not_null(c_75);
          return(t);
        }
        t = short_description_1_0(z_28, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(q_72);
      }
    else
      {
        t = z_71;
      }
    t = term_r_72;
    t = echo_0_0(t);
    t = term_i_63;
    d_75 = t;
    t = term_l_63;
    e_75 = t;
    t = term_z_72;
    t = d_13(d_75, e_75, t);
    t = reverse_acc_2_0(_id, a_29, t);
    t = map_1_0(b_29, t);
    {
      ATerm a_73 = t;
      int w_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_75 = NULL;
          ATerm f_29 (ATerm t)
          {
            t = not_null(c_75);
            return(t);
          }
          t = long_description_1_0(f_29, t);
          q_75 = t;
          t = (ATerm) ATinsert(CheckATermList(q_75), term_q_58);
          t = echo_0_0(t);
          ;
          LocalPopChoice(w_73);
        }
      else
        {
          t = a_73;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm t_76 (ATerm t)
  {
    ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
    q_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_76 = ATgetFirst((ATermList) t);
        s_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_73 = t;
      int y_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_40 = NULL,s_40 = NULL,n_16 = NULL;
          t = SSLgetAnnotations(q_76);
          p_40 = t;
          t = r_76;
          t = y_81(t);
          s_40 = t;
          t = (ATerm) ATinsert(CheckATermList(s_76), s_40);
          n_16 = t;
          t = SSLsetAnnotations(n_16, p_40);
          ;
          LocalPopChoice(y_73);
        }
      else
        {
          t = x_73;
          {
            ATerm a_41 = NULL,h_41 = NULL,u_16 = NULL;
            t = SSLgetAnnotations(q_76);
            a_41 = t;
            t = s_76;
            t = t_76(t);
            h_41 = t;
            t = (ATerm) ATinsert(CheckATermList(h_41), r_76);
            u_16 = t;
            t = SSLsetAnnotations(u_16, a_41);
          }
        }
    }
    return(t);
  }
  t = t_76(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  {
    ATerm z_73 = t;
    int a_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_76;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_74 = ATgetFirst((ATermList) t);
                ATerm c_74 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_76;
          }
        ;
        LocalPopChoice(a_74);
      }
    else
      {
        t = z_73;
        t = (ATerm) ATinsert(ATempty, y_76);
      }
    z_76 = t;
    t = term_s_31;
    a_77 = t;
    t = SSL_printnl(a_77, z_76);
    t = y_76;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_71;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  t = term_d_74;
  g_77 = t;
  t = term_n_31;
  h_77 = t;
  t = term_e_74;
  t = g_13(g_77, h_77, t);
  return(t);
}
ATerm j_29 (ATerm t)
{
  t = term_f_74;
  return(t);
}
ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_29 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,r_77 = NULL;
  t = term_d_74;
  n_77 = t;
  t = term_n_31;
  r_77 = t;
  t = term_e_74;
  t = g_13(n_77, r_77, t);
  t = term_i_66;
  l_77 = t;
  t = term_n_31;
  m_77 = t;
  t = term_p_66;
  t = g_13(l_77, m_77, t);
  t = term_g_74;
  return(t);
}
ATerm m_29 (ATerm t)
{
  t = term_l_74;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_74 = t;
  int p_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_29, i_29, j_29, t);
      ;
      LocalPopChoice(p_74);
    }
  else
    {
      t = m_74;
      t = Option_3_0(k_29, l_29, m_29, t);
    }
  return(t);
}
ATerm d_13 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_table_get(i_50, j_50);
  return(t);
}
ATerm e_13 (ATerm r_48, ATerm s_48, ATerm q_48, ATerm t)
{
  ATerm t_77 = NULL,v_77 = NULL,x_77 = NULL;
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
  {
    ATerm q_74 = t;
    int r_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_74 = ATgetArgument(t, 0);
            ATerm y_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
        t = d_13(r_48, s_48, t);
        ;
        LocalPopChoice(r_74);
      }
    else
      {
        t = q_74;
        t = (ATerm) ATempty;
      }
    v_77 = t;
    t = (ATerm) ATinsert(CheckATermList(v_77), q_48);
    x_77 = t;
    t = SSL_table_put(r_48, s_48, x_77);
    t = t_77;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_78 = NULL,q_78 = NULL,r_78 = NULL;
      t = term_n_31;
      t = h_0(t);
      n_78 = t;
      t = term_i_63;
      q_78 = t;
      t = term_l_63;
      r_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_63, term_l_63, n_78);
      t = e_13(q_78, r_78, n_78, t);
      _fail(t);
    }
  else
    {
      ATerm v_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_78 = ATgetFirst((ATermList) t);
          m_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_78;
      t = d_0(t);
      t = term_n_31;
      t = g_0(t);
      v_78 = t;
      t = (ATerm) ATinsert(CheckATermList(m_78), v_78);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_59 (ATerm), ATerm y_59 (ATerm), ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,c_17 = NULL;
  f_79 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_79 = ATgetFirst((ATermList) t);
      c_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_79);
  a_79 = t;
  t = b_79;
  t = x_59(t);
  d_79 = t;
  t = c_79;
  t = y_59(t);
  e_79 = t;
  t = (ATerm) ATinsert(CheckATermList(e_79), d_79);
  c_17 = t;
  t = SSLsetAnnotations(c_17, a_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,v_79 = NULL,y_79 = NULL,e_17 = NULL;
  q_79 = t;
  {
    ATerm a_75 = t;
    int b_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_75;
        t = o_100(t);
        ;
        LocalPopChoice(b_75);
      }
    else
      {
        t = a_75;
      }
    t = q_79;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_79 = ATgetFirst((ATermList) t);
        t_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_79);
    r_79 = t;
    t = term_w_71;
    y_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_71, s_79);
    t = g_13(y_79, s_79, t);
    t = t_79;
    {
      ATerm x_80 (ATerm t)
      {
        ATerm h_75 = t;
        int k_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_75 = t;
            int m_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_80 = NULL;
                j_80 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_80;
                ;
                LocalPopChoice(m_75);
              }
            else
              {
                t = l_75;
                t = o_100(t);
                t = Cons_2_0(_id, x_80, t);
              }
            ;
            LocalPopChoice(k_75);
          }
        else
          {
            t = h_75;
            {
              ATerm n_80 = NULL,o_80 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_80 = ATgetFirst((ATermList) t);
                  o_80 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_80), (ATerm) ATmakeAppl(sym_Undefined_1, n_80));
            }
          }
        return(t);
      }
      t = x_80(t);
      v_79 = t;
      t = (ATerm) ATinsert(CheckATermList(v_79), (ATerm) ATmakeAppl(sym_Program_1, s_79));
      e_17 = t;
      t = SSLsetAnnotations(e_17, r_79);
    }
  }
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm q_81 = NULL;
  q_81 = t;
  if(match_string(t, "--help"))
    {
      t = q_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_81;
        }
    }
  return(t);
}
ATerm p_29 (ATerm t)
{
  ATerm t_81 = NULL,v_81 = NULL;
  t = term_a_66;
  t_81 = t;
  t = term_n_31;
  v_81 = t;
  t = term_b_66;
  t = g_13(t_81, v_81, t);
  t = term_o_75;
  return(t);
}
ATerm q_29 (ATerm t)
{
  t = term_p_75;
  return(t);
}
ATerm r_29 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,n_81 = NULL;
  g_81 = t;
  t = term_i_63;
  j_81 = t;
  t = term_l_63;
  k_81 = t;
  t = (ATerm) ATempty;
  n_81 = t;
  t = SSL_table_put(j_81, k_81, n_81);
  t = g_81;
  {
    ATerm n_29 (ATerm t)
    {
      ATerm r_75 = t;
      int s_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_100(t);
          ;
          LocalPopChoice(s_75);
        }
      else
        {
          t = r_75;
          {
            ATerm t_75 = t;
            int u_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_29, p_29, q_29, t);
                ;
                LocalPopChoice(u_75);
              }
            else
              {
                t = t_75;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_29, t);
    {
      ATerm v_75 = t;
      int w_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_82 = NULL;
          i_82 = t;
          {
            ATerm x_75 = t;
            int y_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_41 = NULL;
                t = i_82;
                {
                  ATerm z_75 = t;
                  int a_76 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_a_66;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_76);
                    }
                  else
                    {
                      t = z_75;
                      t = fetch_1_0(r_29, t);
                    }
                  t = i_82;
                  t = default_system_usage_0_0(t);
                  t = term_h_30;
                  w_41 = t;
                  t = SSL_exit(w_41);
                }
                ;
                LocalPopChoice(y_75);
              }
            else
              {
                t = x_75;
                {
                  ATerm i_42 = NULL;
                  t = term_d_74;
                  t = get_config_0_0(t);
                  t = i_82;
                  t = default_system_about_0_0(t);
                  t = term_h_30;
                  i_42 = t;
                  t = SSL_exit(i_42);
                }
              }
          }
          ;
          LocalPopChoice(w_75);
        }
      else
        {
          t = v_75;
          {
            ATerm b_76 = t;
            int c_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_82 = NULL,l_82 = NULL,n_82 = NULL;
                ATerm t_29 (ATerm t)
                {
                  ATerm r_82 = NULL,e_83 = NULL,g_83 = NULL,n_17 = NULL;
                  g_83 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_83);
                  r_82 = t;
                  t = e_83;
                  if(((e_81 != NULL) && (e_81 != t)))
                    _fail(t);
                  else
                    e_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_83);
                  n_17 = t;
                  t = SSLsetAnnotations(n_17, r_82);
                  return(t);
                }
                t = fetch_1_0(t_29, t);
                t = term_u_30;
                l_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_81)), term_d_76);
                n_82 = t;
                t = SSL_printnl(l_82, n_82);
                t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_81)), term_d_76));
                t = default_system_usage_0_0(t);
                t = term_i_33;
                j_82 = t;
                t = SSL_exit(j_82);
                ;
                LocalPopChoice(c_76);
              }
            else
              {
                t = b_76;
              }
          }
        }
      f_81 = t;
      t = term_i_63;
      i_81 = t;
      t = SSL_table_destroy(i_81);
      t = f_81;
    }
  }
  return(t);
}
ATerm g_13 (ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm x_83 = NULL;
  t = term_r_55;
  x_83 = t;
  t = SSL_table_put(x_83, t_43, u_43);
  t = (ATerm) ATmakeAppl(sym__3, term_r_55, t_43, u_43);
  return(t);
}
ATerm h_13 (ATerm r_33, ATerm s_33, ATerm t)
{
  t = SSL_strcat(r_33, s_33);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL;
  m_84 = t;
  t = SSL_explode_string(m_84);
  {
    ATerm e_76 = t;
    int f_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_85 (ATerm t)
        {
          ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL;
          l_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_85 = ATgetFirst((ATermList) t);
              n_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_76 = t;
            int h_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_42 = NULL,e_43 = NULL,a_18 = NULL;
                t = SSLgetAnnotations(l_85);
                z_42 = t;
                t = n_85;
                t = p_85(t);
                e_43 = t;
                t = (ATerm) ATinsert(CheckATermList(e_43), m_85);
                a_18 = t;
                t = SSLsetAnnotations(a_18, z_42);
                ;
                LocalPopChoice(h_76);
              }
            else
              {
                t = g_76;
                {
                  ATerm p_43 = NULL,b_18 = NULL;
                  t = SSLgetAnnotations(l_85);
                  p_43 = t;
                  t = m_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, m_85);
                  b_18 = t;
                  t = SSLsetAnnotations(b_18, p_43);
                }
              }
          }
          return(t);
        }
        t = p_85(t);
        ;
        LocalPopChoice(f_76);
      }
    else
      {
        t = e_76;
        t = (ATerm) ATempty;
      }
    l_84 = t;
    t = SSL_implode_string(l_84);
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
  ATerm u_85 = NULL,y_85 = NULL,z_85 = NULL,c_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,q_86 = NULL,t_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,d_87 = NULL,g_87 = NULL,j_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,k_88 = NULL;
  u_85 = t;
  t = term_l_58;
  i_88 = t;
  t = term_i_76;
  k_88 = t;
  t = term_j_76;
  t = g_13(i_88, k_88, t);
  t = term_r_30;
  g_88 = t;
  t = term_i_33;
  h_88 = t;
  t = term_k_76;
  t = g_13(g_88, h_88, t);
  t = term_q_34;
  e_88 = t;
  t = term_h_30;
  f_88 = t;
  t = term_l_76;
  t = g_13(e_88, f_88, t);
  t = term_v_34;
  z_87 = t;
  t = term_u_35;
  d_88 = t;
  t = term_m_76;
  t = g_13(z_87, d_88, t);
  t = term_n_76;
  t = xtc_find_path_0_0(t);
  m_86 = t;
  t = term_o_76;
  t = xtc_find_path_0_0(t);
  n_86 = t;
  t = term_p_76;
  t = xtc_find_path_0_0(t);
  o_86 = t;
  t = term_a_52;
  x_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_86), term_a_52), n_86), term_a_52), m_86), term_a_52);
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_52, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_86), term_a_52), n_86), term_a_52), m_86), term_a_52));
  t = g_13(x_87, y_87, t);
  t = term_z_31;
  o_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_76), term_u_76);
  p_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_31, (ATerm) ATinsert(ATinsert(ATempty, term_v_76), term_u_76));
  t = g_13(o_87, p_87, t);
  t = term_w_76;
  t = xtc_find_path_0_0(t);
  l_86 = t;
  t = term_x_76;
  n_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_86, term_x_76);
  t = h_13(l_86, n_87, t);
  f_86 = t;
  t = term_w_76;
  t = xtc_find_path_0_0(t);
  j_86 = t;
  t = term_x_76;
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_86, term_x_76);
  t = h_13(j_86, m_87, t);
  g_86 = t;
  t = term_b_77;
  t = xtc_find_path_0_0(t);
  i_86 = t;
  t = term_x_76;
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_86, term_x_76);
  t = h_13(i_86, j_87, t);
  h_86 = t;
  t = term_g_31;
  d_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_86), term_a_52), g_86), term_a_52), f_86), term_a_52);
  g_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_86), term_a_52), g_86), term_a_52), f_86), term_a_52));
  t = g_13(d_87, g_87, t);
  t = term_w_76;
  t = xtc_find_path_0_0(t);
  e_86 = t;
  t = term_c_77;
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_86, term_c_77);
  t = h_13(e_86, z_86, t);
  y_85 = t;
  t = term_b_77;
  t = xtc_find_path_0_0(t);
  c_86 = t;
  t = term_c_77;
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, term_c_77);
  t = h_13(c_86, y_86, t);
  z_85 = t;
  t = term_b_31;
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_77), term_i_77), z_85), term_d_77), term_f_77), term_e_77), y_85), term_d_77);
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_77), term_i_77), z_85), term_d_77), term_f_77), term_e_77), y_85), term_d_77));
  t = g_13(w_86, x_86, t);
  t = term_y_47;
  q_86 = t;
  t = (ATerm) ATinsert(ATempty, term_k_77);
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_47, (ATerm) ATinsert(ATempty, term_k_77));
  t = g_13(q_86, t_86, t);
  t = u_85;
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm d_90 = NULL;
  d_90 = t;
  t = term_v_47;
  t = get_config_0_0(t);
  t = debug_1_0(x_29, t);
  t = d_90;
  return(t);
}
ATerm x_29 (ATerm t)
{
  t = term_o_77;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm p_77 = t;
    int q_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_88 = NULL,c_89 = NULL,e_89 = NULL;
        t = term_d_66;
        t = get_config_0_0(t);
        t = term_s_77;
        t = xtc_find_0_0(t);
        n_88 = t;
        t = term_s_31;
        e_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_88, term_s_31);
        t = p_12(n_88, e_89, t);
        t = term_h_30;
        c_89 = t;
        t = SSL_exit(c_89);
        ;
        LocalPopChoice(q_77);
      }
    else
      {
        t = p_77;
      }
    {
      ATerm u_77 = t;
      int w_77 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_89 = NULL;
          t = term_i_66;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_h_30;
          m_89 = t;
          t = SSL_exit(m_89);
          ;
          LocalPopChoice(w_77);
        }
      else
        {
          t = u_77;
        }
      {
        ATerm y_77 = t;
        int z_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_89 = NULL;
            v_89 = t;
            t = term_v_47;
            t = get_config_0_0(t);
            t = v_89;
            ;
            LocalPopChoice(z_77);
          }
        else
          {
            t = y_77;
            {
              ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
              t = term_u_30;
              b_90 = t;
              t = (ATerm) ATinsert(ATempty, term_a_78);
              c_90 = t;
              t = SSL_printnl(b_90, c_90);
              t = term_i_33;
              a_90 = t;
              t = SSL_exit(a_90);
              t = (ATerm) ATinsert(ATempty, term_a_78);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(w_29, t);
      }
    }
  }
  return(t);
}
ATerm y_29 (ATerm t)
{
  t = if_verbose1_1_0(e_30, t);
  return(t);
}
ATerm z_29 (ATerm t)
{
  t = xtc_temp_files_1_0(f_30, t);
  return(t);
}
ATerm e_30 (ATerm t)
{
  ATerm f_90 = NULL,i_90 = NULL,j_90 = NULL;
  f_90 = t;
  t = term_u_30;
  i_90 = t;
  t = (ATerm) ATinsert(CheckATermList(f_90), term_b_78);
  j_90 = t;
  t = SSL_printnl(i_90, j_90);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(CheckATermList(f_90), term_b_78));
  return(t);
}
ATerm f_30 (ATerm t)
{
  ATerm c_78 = t;
  int d_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_90 = NULL;
      t = term_v_47;
      t = get_config_0_0(t);
      k_90 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_90);
      ;
      LocalPopChoice(d_78);
    }
  else
    {
      t = c_78;
      t = term_e_50;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,p_90 = NULL;
  t = run_time_0_0(t);
  m_90 = t;
  t = term_u_30;
  n_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_78), m_90), term_e_78);
  p_90 = t;
  t = SSL_printnl(n_90, p_90);
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_78), m_90), term_e_78));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm g_78 = t;
  int h_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_90 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(y_29, z_29, t);
      t = if_verbose2_1_0(g_30, t);
      t = term_h_30;
      e_90 = t;
      t = SSL_exit(e_90);
      ;
      LocalPopChoice(h_78);
    }
  else
    {
      t = g_78;
      {
        ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL,x_90 = NULL;
        t = run_time_0_0(t);
        t_90 = t;
        t = term_u_30;
        v_90 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_78), t_90), term_i_78);
        x_90 = t;
        t = SSL_printnl(v_90, x_90);
        t = term_i_33;
        u_90 = t;
        t = SSL_exit(u_90);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
