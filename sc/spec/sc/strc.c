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
ATerm term_i_75;
ATerm term_e_75;
ATerm term_d_75;
ATerm term_z_74;
ATerm term_y_74;
ATerm term_q_74;
ATerm term_l_74;
ATerm term_k_74;
ATerm term_i_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_e_74;
ATerm term_c_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_s_73;
ATerm term_r_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_m_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_i_73;
ATerm term_d_73;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_b_72;
ATerm term_n_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_68;
ATerm term_s_68;
ATerm term_n_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_d_68;
ATerm term_c_68;
ATerm term_b_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_y_67;
ATerm term_x_67;
ATerm term_w_67;
ATerm term_v_67;
ATerm term_u_67;
ATerm term_t_67;
ATerm term_s_67;
ATerm term_o_67;
ATerm term_l_67;
ATerm term_k_67;
ATerm term_j_67;
ATerm term_b_67;
ATerm term_s_64;
ATerm term_p_64;
ATerm term_l_64;
ATerm term_k_64;
ATerm term_j_64;
ATerm term_i_64;
ATerm term_h_64;
ATerm term_g_64;
ATerm term_c_64;
ATerm term_b_64;
ATerm term_a_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_s_63;
ATerm term_r_63;
ATerm term_q_63;
ATerm term_p_63;
ATerm term_o_63;
ATerm term_j_62;
ATerm term_h_62;
ATerm term_g_62;
ATerm term_z_61;
ATerm term_y_61;
ATerm term_u_61;
ATerm term_t_61;
ATerm term_o_61;
ATerm term_m_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_j_61;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_y_59;
ATerm term_s_59;
ATerm term_r_59;
ATerm term_o_59;
ATerm term_h_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_c_59;
ATerm term_y_58;
ATerm term_q_58;
ATerm term_n_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_x_57;
ATerm term_s_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_h_57;
ATerm term_p_55;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_g_52;
ATerm term_p_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_s_50;
ATerm term_r_50;
ATerm term_y_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_r_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_m_48;
ATerm term_e_48;
ATerm term_a_48;
ATerm term_x_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_q_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_h_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_v_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_r_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_v_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_b_44;
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
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
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
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_q_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_v_39;
ATerm term_t_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_h_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_l_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_o_36;
ATerm term_g_36;
ATerm term_e_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_x_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_g_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_a_29;
void init_constant_terms (void)
{
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_39, term_u_31, term_k_39);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_39, term_h_29, term_o_39);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_39, term_g_32, term_r_39);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_39, term_k_33, term_x_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_39, term_a_40, term_b_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_40, term_f_40, term_g_40);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_40, term_j_40, term_l_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_40, term_s_40, term_t_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_40, term_b_41, term_c_41);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_41, term_i_41, term_j_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_41, term_m_41, term_n_41);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_41, term_h_33, term_r_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_41, term_u_41, term_v_41);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_41, term_y_41, term_b_42);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_42, term_e_42, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_42, term_i_42, term_j_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_42, term_m_42, term_n_42);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_42, term_q_42, term_r_42);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_42, term_u_42, term_v_42);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_42, term_y_42, term_z_42);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_43, term_c_43, term_d_43);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_43, term_g_43, term_h_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_43, term_k_43, term_l_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_43, term_o_43, term_p_43);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_43, term_e_33, term_s_43);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_43, term_v_43, term_w_43);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_43, term_z_43, term_b_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_44, term_g_44, term_h_44);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym__2, term_n_47, term_v_46);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_58));
  term_q_58 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(sym__2, term_n_58, term_e_59);
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_59));
  term_r_59 = (ATerm) ATmakeAppl(sym__2, term_n_58, term_q_58);
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_l_46);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(sym__2, term_s_48, term_l_46);
  ATprotect(&(term_h_62));
  term_h_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_j_62));
  term_j_62 = (ATerm) ATmakeAppl(sym__2, term_r_45, term_l_46);
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_r_63));
  term_r_63 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_l_46);
  ATprotect(&(term_s_63));
  term_s_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(sym__2, term_t_63, term_l_46);
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_a_29);
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(sym__2, term_b_64, term_l_46);
  ATprotect(&(term_g_64));
  term_g_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_h_64));
  term_h_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_i_64));
  term_i_64 = (ATerm) ATmakeAppl(sym__2, term_h_64, term_l_46);
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_64));
  term_l_64 = (ATerm) ATmakeAppl(sym__2, term_k_64, term_l_46);
  ATprotect(&(term_p_64));
  term_p_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_l_67));
  term_l_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_x_67));
  term_x_67 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_68));
  term_w_68 = (ATerm) ATmakeAppl(sym__2, term_o_60, term_q_60);
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(sym__2, term_x_69, term_l_46);
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9.3", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(sym__2, term_g_55, term_i_73);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_h_29);
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_a_29);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_k_33);
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_r_73));
  term_r_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_i_74));
  term_i_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm foldr_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm i_11 (ATerm q_31, ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm j_11 (ATerm o_31, ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm i_2 (ATerm);
ATerm c_compile_0_0 (ATerm);
ATerm k_11 (ATerm t_51, ATerm u_51, ATerm);
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm a_3 (ATerm);
ATerm d_3 (ATerm);
ATerm s2c_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm s_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm i_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm u_6 (ATerm);
ATerm back_end_0_0 (ATerm);
ATerm if_keep1_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm olevel_2_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm i_7 (ATerm);
ATerm bound_unbound_vars_0_0 (ATerm);
ATerm if_keep5_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm if_keep4_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm if_keep6_1_0 (ATerm c_109 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm j_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm m_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm z_10 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm n_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm u_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm g_13 (ATerm);
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
ATerm g_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm p_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm x_15 (ATerm);
ATerm a_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm j_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm optimize_0_0 (ATerm);
ATerm r_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm save_as_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm if_keep2_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm);
ATerm o_11 (ATerm c_57, ATerm d_57, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_94 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm d_116 (ATerm), ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm warnings_0_0 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm t_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm output_frontend_0_0 (ATerm);
ATerm if_keep3_1_0 (ATerm z_108 (ATerm), ATerm);
ATerm l_11 (ATerm z_85 (ATerm), ATerm e_31, ATerm);
ATerm m_11 (ATerm t_54, ATerm u_54, ATerm);
ATerm n_11 (ATerm l_106 (ATerm), ATerm z_466, ATerm b_55, ATerm);
ATerm q_11 (ATerm s_104 (ATerm), ATerm x_49, ATerm v_49, ATerm);
ATerm h_35 (ATerm o_34, ATerm);
ATerm j_35 (ATerm t_34, ATerm v_34, ATerm w_34, ATerm);
ATerm y_17 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm a_18 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm c_18 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm xtc_io_transform_1_0 (ATerm o_116 (ATerm), ATerm);
ATerm f_18 (ATerm);
ATerm h_18 (ATerm);
ATerm l_18 (ATerm);
ATerm o_18 (ATerm);
ATerm add_main_0_0 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm xtc_exit_0_0 (ATerm);
ATerm s_18 (ATerm);
ATerm xtc_io_exit_0_0 (ATerm);
ATerm get_outfile_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm output_ast_0_0 (ATerm);
ATerm comp_0_2 (ATerm i_31, ATerm j_31, ATerm);
ATerm pass_keep_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm basename_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm d_19 (ATerm);
ATerm f_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm r_11 (ATerm b_31, ATerm);
ATerm parse_0_0 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm t_19 (ATerm);
ATerm w_19 (ATerm);
ATerm y_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm n_20 (ATerm);
ATerm s_20 (ATerm);
ATerm u_20 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm m_21 (ATerm);
ATerm r_21 (ATerm);
ATerm front_end_0_0 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm s_11 (ATerm d_61, ATerm e_61, ATerm);
ATerm end_scope_1_0 (ATerm p_104 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm v_21 (ATerm);
ATerm x_21 (ATerm);
ATerm z_21 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm if_verbose1_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm u_11 (ATerm j_48, ATerm k_48, ATerm);
ATerm w_11 (ATerm p_48, ATerm q_48, ATerm);
ATerm x_11 (ATerm a_58, ATerm c_58, ATerm e_58, ATerm g_58, ATerm b_58, ATerm d_58, ATerm f_58, ATerm h_58, ATerm);
ATerm diff_times_0_0 (ATerm);
ATerm times_0_0 (ATerm);
ATerm profile_p__2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm);
ATerm debug_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm strc_version_0_0 (ATerm);
ATerm y_11 (ATerm v_51, ATerm w_51, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm y_107 (ATerm), ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose6_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm b_12 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm o_38, ATerm n_38, ATerm);
ATerm c_12 (ATerm y_97 (ATerm), ATerm k_38, ATerm j_38, ATerm);
ATerm f_22 (ATerm);
ATerm d_12 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm);
ATerm e_12 (ATerm r_112 (ATerm), ATerm f_62, ATerm e_62, ATerm);
ATerm h_12 (ATerm d_51, ATerm e_51, ATerm);
ATerm i_59 (ATerm b_59, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_12 (ATerm z_54, ATerm);
ATerm g_12 (ATerm l_51, ATerm m_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_61 (ATerm t_59, ATerm);
ATerm s_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm);
ATerm a_62 (ATerm p_60, ATerm r_60, ATerm s_60, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_22 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm i_22 (ATerm);
ATerm k_22 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm u_22 (ATerm);
ATerm w_22 (ATerm);
ATerm y_22 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm d_23 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm a_101 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm m_23 (ATerm);
ATerm o_23 (ATerm);
ATerm n_66 (ATerm c_65, ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm z_23 (ATerm);
ATerm b_24 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm i_12 (ATerm g_56, ATerm f_56, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm j_12 (ATerm d_56, ATerm e_56, ATerm);
ATerm at_end_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_68 (ATerm q_68, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_12 (ATerm h_56, ATerm i_56, ATerm);
ATerm i_24 (ATerm);
ATerm k_24 (ATerm);
ATerm n_24 (ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm t_24 (ATerm);
ATerm u_24 (ATerm);
ATerm v_24 (ATerm);
ATerm w_24 (ATerm);
ATerm x_24 (ATerm);
ATerm y_24 (ATerm);
ATerm z_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm f_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm j_25 (ATerm);
ATerm k_25 (ATerm);
ATerm q_25 (ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm x_25 (ATerm);
ATerm z_25 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm g_26 (ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm j_26 (ATerm);
ATerm l_26 (ATerm);
ATerm q_26 (ATerm);
ATerm r_26 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm x_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm c_27 (ATerm);
ATerm d_27 (ATerm);
ATerm e_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm j_27 (ATerm);
ATerm k_27 (ATerm);
ATerm l_27 (ATerm);
ATerm m_27 (ATerm);
ATerm n_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm q_27 (ATerm);
ATerm sc_options_0_0 (ATerm);
ATerm long_description_1_0 (ATerm i_0 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm v_27 (ATerm);
ATerm z_27 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_94 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_28 (ATerm);
ATerm d_28 (ATerm);
ATerm e_28 (ATerm);
ATerm f_28 (ATerm);
ATerm g_28 (ATerm);
ATerm j_28 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm l_12 (ATerm p_62, ATerm q_62, ATerm);
ATerm m_12 (ATerm y_60, ATerm z_60, ATerm x_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_112 (ATerm), ATerm);
ATerm n_28 (ATerm);
ATerm o_28 (ATerm);
ATerm p_28 (ATerm);
ATerm q_28 (ATerm);
ATerm parse_options_1_0 (ATerm n_112 (ATerm), ATerm);
ATerm o_12 (ATerm a_56, ATerm b_56, ATerm);
ATerm p_12 (ATerm z_45, ATerm a_46, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm init_sc_config_0_0 (ATerm);
ATerm t_28 (ATerm);
ATerm u_28 (ATerm);
ATerm command_line_options_0_0 (ATerm);
ATerm v_28 (ATerm);
ATerm w_28 (ATerm);
ATerm x_28 (ATerm);
ATerm y_28 (ATerm);
ATerm z_28 (ATerm);
ATerm strc_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,p_0 = NULL,r_0 = NULL;
  e_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_0;
      t = x_99(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_0 = ATgetFirst((ATermList) t);
          r_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = foldr_2_0(x_99, y_99, t);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_0, u_0);
      t = y_99(t);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_a_29;
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
  t = u_11(f_1, g_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_0 = NULL,c_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      c_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_0;
  t = foldr_2_0(s_0, t_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm d_1 = NULL;
  d_1 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_1, term_h_29);
        t = geq_0_0(t);
        t = d_1;
        t = w_107(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = d_1;
      }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm p_1 = NULL,u_1 = NULL,v_1 = NULL;
  p_1 = t;
  t = term_i_29;
  u_1 = t;
  t = (ATerm) ATinsert(ATempty, term_l_29);
  v_1 = t;
  t = SSL_printnl(u_1, v_1);
  t = p_1;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  t = term_i_29;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, w_1);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = w_1;
  return(t);
}
ATerm i_11 (ATerm q_31, ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL;
  t = if_verbose2_1_0(w_0, t);
  {
    ATerm n_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_29;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = n_29;
        t = get_outfile_1_0(e_1, t);
      }
    if(((k_1 != NULL) && (k_1 != t)))
      _fail(t);
    else
      k_1 = t;
    t = term_t_29;
    t = get_config_0_0(t);
    if(((l_1 != NULL) && (l_1 != t)))
      _fail(t);
    else
      l_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_1)), not_null(k_1)), term_s_29), not_null(q_31)));
    t = if_verbose3_1_0(i_1, t);
    if(match_cons(t, sym__2))
      {
        if(((n_1 != NULL) && (n_1 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_1 = ATgetArgument(t, 0);
        if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          o_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_1), not_null(o_1));
    {
      ATerm j_1 (ATerm t)
      {
        ATerm z_1 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_1), not_null(o_1));
        t = o_11(not_null(n_1), not_null(o_1), t);
        t = term_v_29;
        z_1 = t;
        t = SSL_exit(z_1);
        return(t);
      }
      t = fork_and_wait_1_0(j_1, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_1));
    }
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm h_2 = NULL,k_2 = NULL,l_2 = NULL;
  h_2 = t;
  t = term_i_29;
  k_2 = t;
  t = (ATerm) ATinsert(ATempty, term_w_29);
  l_2 = t;
  t = SSL_printnl(k_2, l_2);
  t = h_2;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm m_2 = NULL,p_2 = NULL,q_2 = NULL;
  m_2 = t;
  t = term_i_29;
  p_2 = t;
  t = (ATerm) ATinsert(ATempty, m_2);
  q_2 = t;
  t = SSL_printnl(p_2, q_2);
  t = m_2;
  return(t);
}
ATerm j_11 (ATerm o_31, ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(q_1, t);
  if(((c_2 != NULL) && (c_2 != t)))
    _fail(t);
  else
    c_2 = t;
  t = term_y_29;
  t = get_config_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_2), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_2)), term_s_29), not_null(o_31)), term_z_29));
  t = conc_0_0(t);
  if(((d_2 != NULL) && (d_2 != t)))
    _fail(t);
  else
    d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(d_2));
  t = if_verbose3_1_0(s_1, t);
  if(match_cons(t, sym__2))
    {
      if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_2 = ATgetArgument(t, 0);
      if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(g_2));
  {
    ATerm t_1 (ATerm t)
    {
      ATerm r_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(g_2));
      t = o_11(not_null(f_2), not_null(g_2), t);
      t = term_v_29;
      r_2 = t;
      t = SSL_exit(r_2);
      return(t);
    }
    t = fork_and_wait_1_0(t_1, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_2));
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = if_verbose1_1_0(i_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_11(c_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      z_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(z_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL;
  w_2 = t;
  t = term_i_29;
  x_2 = t;
  t = (ATerm) ATinsert(CheckATermList(w_2), term_a_30);
  y_2 = t;
  t = SSL_printnl(x_2, y_2);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(CheckATermList(w_2), term_a_30));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm b_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL;
      u_2 = t;
      t = term_z_29;
      t = get_config_0_0(t);
      t = u_2;
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = b_30;
      t = profile_p__2_0(a_2, b_2, t);
    }
  return(t);
}
ATerm k_11 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_rename(t_51, u_51);
  return(t);
}
ATerm rename_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL;
  w_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL;
        t = w_3;
        t = q_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_g_30;
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_3, term_g_30);
        t = y_11(y_3, r_1, t);
        t = SSL_remove(y_3);
        t = term_g_30;
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm h_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL;
              t = w_3;
              t = q_0(t);
              j_2 = t;
              {
                ATerm m_30 = t;
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
                        if((y_3 != t))
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
                    t = m_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, y_3, j_2);
                t = k_11(y_3, j_2, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_2);
              }
              ;
              LocalPopChoice(l_30);
            }
          else
            {
              t = h_30;
              t = w_3;
              t = q_0(t);
              if((y_3 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_3);
            }
        }
      }
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL;
  t = pass_verbose_0_0(t);
  p_4 = t;
  t = term_o_30;
  t = get_config_0_0(t);
  t = map_1_0(t_2, t);
  r_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_4), (ATerm) ATinsert(ATempty, term_p_30)), p_4);
  t = concat_0_0(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_o_30);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  t = pass_verbose_0_0(t);
  u_4 = t;
  t = term_o_30;
  t = get_config_0_0(t);
  t = map_1_0(d_3, t);
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_4), (ATerm) ATinsert(ATempty, term_p_30)), u_4);
  t = concat_0_0(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_o_30);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 = NULL,o_4 = NULL;
      o_4 = t;
      if(match_cons(t, sym_FILE_1))
        {
          n_4 = ATgetArgument(t, 0);
          {
            ATerm b_3 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(o_4);
            b_3 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_4);
            v_0 = t;
            t = SSLsetAnnotations(v_0, b_3);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_4;
        }
      LocalPopChoice(r_30);
      t = xtc_transform_file_2_0(o_2, s_2, t);
    }
  else
    {
      t = q_30;
      t = xtc_transform_term_2_0(v_2, a_3, t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm s_5 = NULL,u_5 = NULL,w_5 = NULL;
  s_5 = t;
  t = term_i_29;
  u_5 = t;
  t = (ATerm) ATinsert(ATempty, term_s_30);
  w_5 = t;
  t = SSL_printnl(u_5, w_5);
  t = s_5;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  d_6 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            h_6 = ATgetArgument(t, 0);
            {
              ATerm i_3 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(d_6);
              i_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_6);
              y_0 = t;
              t = SSLsetAnnotations(y_0, i_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_6;
          }
        LocalPopChoice(u_30);
        t = xtc_transform_file_2_0(j_3, k_3, t);
      }
    else
      {
        t = t_30;
        t = xtc_transform_term_2_0(n_3, o_3, t);
      }
    t = if_keep1_1_0(p_3, t);
    t = olevel_2_0(r_3, s_3, t);
    t = olevel_2_0(x_4, a_5, t);
    c_6 = t;
    {
      ATerm v_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_7 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              u_7 = ATgetArgument(t, 0);
              {
                ATerm q_4 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(c_6);
                q_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_7);
                c_1 = t;
                t = SSLsetAnnotations(c_1, q_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = c_6;
            }
          LocalPopChoice(w_30);
          t = xtc_transform_file_2_0(e_5, f_5, t);
        }
      else
        {
          t = v_30;
          t = xtc_transform_term_2_0(g_5, h_5, t);
        }
      t = s2c_0_0(t);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL,e_8 = NULL;
            e_8 = t;
            if(match_cons(t, sym_FILE_1))
              {
                d_8 = ATgetArgument(t, 0);
                {
                  ATerm d_5 = NULL,l_3 = NULL;
                  t = SSLgetAnnotations(e_8);
                  d_5 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, d_8);
                  l_3 = t;
                  t = SSLsetAnnotations(l_3, d_5);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_8;
              }
            LocalPopChoice(d_31);
            t = xtc_transform_file_2_0(i_5, j_5, t);
          }
        else
          {
            t = c_31;
            t = xtc_transform_term_2_0(l_5, m_5, t);
          }
        {
          ATerm f_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,u_8 = NULL;
              u_8 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  t_8 = ATgetArgument(t, 0);
                  {
                    ATerm k_5 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(u_8);
                    k_5 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, k_5);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = u_8;
                }
              LocalPopChoice(k_31);
              t = xtc_transform_file_2_0(n_5, o_5, t);
            }
          else
            {
              t = f_31;
              t = xtc_transform_term_2_0(i_6, q_6, t);
            }
          t = rename_to_1_0(r_6, t);
        }
      }
    }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,b_6 = NULL;
  y_5 = t;
  t = term_i_29;
  z_5 = t;
  t = (ATerm) ATinsert(CheckATermList(y_5), term_l_31);
  b_6 = t;
  t = SSL_printnl(z_5, b_6);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(CheckATermList(y_5), term_l_31));
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_6 = NULL;
  t = pass_verbose_0_0(t);
  k_6 = t;
  t = (ATerm) ATinsert(CheckATermList(k_6), term_p_30);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm l_6 = NULL;
  t = pass_verbose_0_0(t);
  l_6 = t;
  t = (ATerm) ATinsert(CheckATermList(l_6), term_p_30);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = save_as_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  n_6 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_6 = ATgetArgument(t, 0);
            {
              ATerm v_3 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(n_6);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_6);
              z_0 = t;
              t = SSLsetAnnotations(z_0, v_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_6;
          }
        LocalPopChoice(w_31);
        t = xtc_transform_file_2_0(t_3, x_3, t);
      }
    else
      {
        t = v_31;
        t = xtc_transform_term_2_0(z_3, b_4, t);
      }
    t = if_keep1_1_0(c_4, t);
    m_6 = t;
    {
      ATerm y_31 = t;
      int z_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              c_7 = ATgetArgument(t, 0);
              {
                ATerm e_4 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(m_6);
                e_4 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_7);
                b_1 = t;
                t = SSLsetAnnotations(b_1, e_4);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = m_6;
            }
          LocalPopChoice(z_31);
          t = xtc_transform_file_2_0(f_4, g_4, t);
        }
      else
        {
          t = y_31;
          t = xtc_transform_term_2_0(h_4, i_4, t);
        }
      t = if_keep1_1_0(s_4, t);
    }
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm v_6 = NULL;
  t = pass_verbose_0_0(t);
  v_6 = t;
  t = (ATerm) ATinsert(CheckATermList(v_6), term_p_30);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm w_6 = NULL;
  t = pass_verbose_0_0(t);
  w_6 = t;
  t = (ATerm) ATinsert(CheckATermList(w_6), term_p_30);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = save_as_1_0(d_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm e_7 = NULL;
  t = pass_verbose_0_0(t);
  e_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), term_p_30);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_p_30);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = save_as_1_0(w_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(b_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = save_as_1_0(c_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm w_7 = NULL;
  t = pass_verbose_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), term_p_30);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm x_7 = NULL;
  t = pass_verbose_0_0(t);
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(x_7), term_p_30);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm g_8 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  g_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_8), term_l_32);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm i_8 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  i_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_8), term_l_32);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = get_outfile_1_0(u_6, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(e_3, t);
  t = profile_p__2_0(f_3, g_3, t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_9, term_u_31);
        t = geq_0_0(t);
        t = g_9;
        t = x_108(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = g_9;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL,p_9 = NULL;
        t = l_9;
        t = t_116(t);
        o_9 = t;
        t = term_t_32;
        t = get_config_0_0(t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, o_9);
        t = geq_0_0(t);
        t = l_9;
        t = u_116(t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = l_9;
      }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm j_7 = NULL;
  t = pass_verbose_0_0(t);
  j_7 = t;
  t = (ATerm) ATinsert(CheckATermList(j_7), term_p_30);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_p_30);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm w_8 = NULL;
  t = pass_verbose_0_0(t);
  w_8 = t;
  t = (ATerm) ATinsert(CheckATermList(w_8), term_p_30);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm y_8 = NULL;
  t = pass_verbose_0_0(t);
  y_8 = t;
  t = (ATerm) ATinsert(CheckATermList(y_8), term_p_30);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_11;
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  h_7 = ATgetArgument(t, 0);
                  {
                    ATerm q_7 = NULL,u_3 = NULL;
                    t = SSLgetAnnotations(b_11);
                    q_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_7);
                    u_3 = t;
                    t = SSLsetAnnotations(u_3, q_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = b_11;
                }
              LocalPopChoice(y_32);
              t = xtc_transform_file_2_0(x_6, y_6, t);
            }
          else
            {
              t = x_32;
              t = xtc_transform_term_2_0(z_6, a_7, t);
            }
        }
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = b_11;
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  p_8 = ATgetArgument(t, 0);
                  {
                    ATerm k_9 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(b_11);
                    k_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, p_8);
                    a_4 = t;
                    t = SSLsetAnnotations(a_4, k_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = b_11;
                }
              LocalPopChoice(a_33);
              t = xtc_transform_file_2_0(b_7, d_7, t);
            }
          else
            {
              t = z_32;
              t = xtc_transform_term_2_0(f_7, i_7, t);
            }
        }
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_12, term_e_33);
        t = geq_0_0(t);
        t = v_11;
        t = b_109(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = v_11;
      }
  }
  return(t);
}
ATerm if_keep4_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_12, term_h_33);
        t = geq_0_0(t);
        t = t_12;
        t = a_109(t);
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = t_12;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_13, term_k_33);
        t = geq_0_0(t);
        t = f_13;
        t = c_109(t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = f_13;
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,r_15 = NULL;
  o_15 = t;
  t = term_i_29;
  q_15 = t;
  t = (ATerm) ATinsert(ATempty, term_l_33);
  r_15 = t;
  t = SSL_printnl(q_15, r_15);
  t = o_15;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm z_15 = NULL;
  t = if_verbose3_1_0(p_7, t);
  t = olevel_2_0(s_7, t_7, t);
  t = olevel_2_0(f_8, h_8, t);
  t = olevel_2_0(s_8, x_8, t);
  z_15 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            e_19 = ATgetArgument(t, 0);
            {
              ATerm r_13 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(z_15);
              r_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_19);
              q_5 = t;
              t = SSLsetAnnotations(q_5, r_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_15;
          }
        LocalPopChoice(o_33);
        t = xtc_transform_file_2_0(j_10, k_10, t);
      }
    else
      {
        t = n_33;
        t = xtc_transform_term_2_0(m_10, q_10, t);
      }
    t = olevel_2_0(r_10, s_10, t);
    t = olevel_2_0(x_12, z_12, t);
    t = olevel_2_0(p_13, q_13, t);
    t = olevel_2_0(i_14, j_14, t);
    t = olevel_2_0(l_15, m_15, t);
  }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t = term_i_29;
  v_15 = t;
  t = (ATerm) ATinsert(CheckATermList(u_15), term_p_33);
  w_15 = t;
  t = SSL_printnl(v_15, w_15);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(CheckATermList(u_15), term_p_33));
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm b_16 = NULL;
  b_16 = t;
  t = term_t_32;
  t = get_config_0_0(t);
  t = debug_1_0(r_7, t);
  t = b_16;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  {
    ATerm t_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_16 = ATgetArgument(t, 0);
            {
              ATerm t_9 = NULL,j_4 = NULL;
              t = SSLgetAnnotations(c_16);
              t_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_16);
              j_4 = t;
              t = SSLsetAnnotations(j_4, t_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_16;
          }
        LocalPopChoice(w_33);
        t = xtc_transform_file_2_0(v_7, y_7, t);
      }
    else
      {
        t = t_33;
        t = xtc_transform_term_2_0(z_7, a_8, t);
      }
    t = if_keep1_1_0(b_8, t);
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm k_16 = NULL;
  t = pass_verbose_0_0(t);
  k_16 = t;
  t = (ATerm) ATinsert(CheckATermList(k_16), term_p_30);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm l_16 = NULL;
  t = pass_verbose_0_0(t);
  l_16 = t;
  t = (ATerm) ATinsert(CheckATermList(l_16), term_p_30);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = save_as_1_0(c_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_x_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  {
    ATerm d_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_17;
        {
          ATerm h_34 = t;
          if((PushChoice() == 0))
            {
              t = term_i_34;
              t = get_config_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_34;
            }
          t = e_17;
          {
            ATerm j_34 = t;
            int k_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_10 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    n_10 = ATgetArgument(t, 0);
                    {
                      ATerm t_11 = NULL,k_4 = NULL;
                      t = SSLgetAnnotations(e_17);
                      t_11 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, n_10);
                      k_4 = t;
                      t = SSLsetAnnotations(k_4, t_11);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = e_17;
                  }
                LocalPopChoice(k_34);
                t = xtc_transform_file_2_0(j_8, k_8, t);
              }
            else
              {
                t = j_34;
                t = xtc_transform_term_2_0(l_8, m_8, t);
              }
            t = if_keep2_1_0(o_8, t);
          }
        }
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = d_34;
        t = e_17;
      }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm x_10 = NULL;
  t = pass_verbose_0_0(t);
  x_10 = t;
  t = (ATerm) ATinsert(CheckATermList(x_10), term_p_30);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm a_11 = NULL;
  t = pass_verbose_0_0(t);
  a_11 = t;
  t = (ATerm) ATinsert(CheckATermList(a_11), term_p_30);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = save_as_1_0(r_8, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm h_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  m_17 = t;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_17 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_17 = ATgetArgument(t, 0);
            {
              ATerm v_12 = NULL,l_4 = NULL;
              t = SSLgetAnnotations(m_17);
              v_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_17);
              l_4 = t;
              t = SSLsetAnnotations(l_4, v_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_17;
          }
        LocalPopChoice(r_34);
        t = xtc_transform_file_2_0(a_9, e_9, t);
      }
    else
      {
        t = q_34;
        t = xtc_transform_term_2_0(f_9, h_9, t);
      }
    t = if_keep6_1_0(j_9, t);
    l_17 = t;
    {
      ATerm s_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_18 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              b_18 = ATgetArgument(t, 0);
              {
                ATerm a_13 = NULL,m_4 = NULL;
                t = SSLgetAnnotations(l_17);
                a_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
                m_4 = t;
                t = SSLsetAnnotations(m_4, a_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_17;
            }
          LocalPopChoice(u_34);
          t = xtc_transform_file_2_0(n_9, q_9, t);
        }
      else
        {
          t = s_34;
          t = xtc_transform_term_2_0(r_9, s_9, t);
        }
      k_17 = t;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                k_18 = ATgetArgument(t, 0);
                {
                  ATerm j_13 = NULL,z_4 = NULL;
                  t = SSLgetAnnotations(k_17);
                  j_13 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, k_18);
                  z_4 = t;
                  t = SSLsetAnnotations(z_4, j_13);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_17;
              }
            LocalPopChoice(y_34);
            t = xtc_transform_file_2_0(u_9, v_9, t);
          }
        else
          {
            t = x_34;
            t = xtc_transform_term_2_0(w_9, x_9, t);
          }
        t = if_keep4_1_0(y_9, t);
        h_17 = t;
        {
          ATerm z_34 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_18 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  t_18 = ATgetArgument(t, 0);
                  {
                    ATerm n_13 = NULL,p_5 = NULL;
                    t = SSLgetAnnotations(h_17);
                    n_13 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, t_18);
                    p_5 = t;
                    t = SSLsetAnnotations(p_5, n_13);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = h_17;
                }
              LocalPopChoice(c_35);
              t = xtc_transform_file_2_0(f_10, g_10, t);
            }
          else
            {
              t = z_34;
              t = xtc_transform_term_2_0(h_10, i_10, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm u_17 = NULL;
  t = pass_verbose_0_0(t);
  u_17 = t;
  t = (ATerm) ATinsert(CheckATermList(u_17), term_p_30);
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm v_17 = NULL;
  t = pass_verbose_0_0(t);
  v_17 = t;
  t = (ATerm) ATinsert(CheckATermList(v_17), term_p_30);
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = save_as_1_0(m_9, t);
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm d_18 = NULL;
  t = pass_verbose_0_0(t);
  d_18 = t;
  t = (ATerm) ATinsert(CheckATermList(d_18), term_p_30);
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm e_18 = NULL;
  t = pass_verbose_0_0(t);
  e_18 = t;
  t = (ATerm) ATinsert(CheckATermList(e_18), term_p_30);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm m_18 = NULL;
  t = pass_verbose_0_0(t);
  m_18 = t;
  t = (ATerm) ATinsert(CheckATermList(m_18), term_p_30);
  return(t);
}
ATerm w_9 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm n_18 = NULL;
  t = pass_verbose_0_0(t);
  n_18 = t;
  t = (ATerm) ATinsert(CheckATermList(n_18), term_p_30);
  return(t);
}
ATerm y_9 (ATerm t)
{
  t = save_as_1_0(e_10, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm x_18 = NULL;
  t = pass_verbose_0_0(t);
  x_18 = t;
  t = (ATerm) ATinsert(CheckATermList(x_18), term_p_30);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm y_18 = NULL;
  t = pass_verbose_0_0(t);
  y_18 = t;
  t = (ATerm) ATinsert(CheckATermList(y_18), term_p_30);
  return(t);
}
ATerm j_10 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm g_19 = NULL;
  t = pass_verbose_0_0(t);
  g_19 = t;
  t = (ATerm) ATinsert(CheckATermList(g_19), term_p_30);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm h_19 = NULL;
  t = pass_verbose_0_0(t);
  h_19 = t;
  t = (ATerm) ATinsert(CheckATermList(h_19), term_p_30);
  return(t);
}
ATerm r_10 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm j_19 = NULL,l_19 = NULL,m_19 = NULL;
  m_19 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_19 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_19 = ATgetArgument(t, 0);
            {
              ATerm v_13 = NULL,r_5 = NULL;
              t = SSLgetAnnotations(m_19);
              v_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_19);
              r_5 = t;
              t = SSLsetAnnotations(r_5, v_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_19;
          }
        LocalPopChoice(q_35);
        t = xtc_transform_file_2_0(u_10, w_10, t);
      }
    else
      {
        t = p_35;
        t = xtc_transform_term_2_0(z_10, d_11, t);
      }
    t = bound_unbound_vars_0_0(t);
    l_19 = t;
    {
      ATerm r_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              c_20 = ATgetArgument(t, 0);
              {
                ATerm z_13 = NULL,t_5 = NULL;
                t = SSLgetAnnotations(l_19);
                z_13 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_20);
                t_5 = t;
                t = SSLsetAnnotations(t_5, z_13);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = l_19;
            }
          LocalPopChoice(u_35);
          t = xtc_transform_file_2_0(e_11, f_11, t);
        }
      else
        {
          t = r_35;
          t = xtc_transform_term_2_0(h_11, z_11, t);
        }
      j_19 = t;
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                m_20 = ATgetArgument(t, 0);
                {
                  ATerm d_14 = NULL,v_5 = NULL;
                  t = SSLgetAnnotations(j_19);
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
                  v_5 = t;
                  t = SSLsetAnnotations(v_5, d_14);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_19;
              }
            LocalPopChoice(w_35);
            t = xtc_transform_file_2_0(a_12, n_12, t);
          }
        else
          {
            t = v_35;
            t = xtc_transform_term_2_0(r_12, s_12, t);
          }
        t = if_keep4_1_0(u_12, t);
      }
    }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm u_19 = NULL;
  t = pass_verbose_0_0(t);
  u_19 = t;
  t = (ATerm) ATinsert(CheckATermList(u_19), term_p_30);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm v_19 = NULL;
  t = pass_verbose_0_0(t);
  v_19 = t;
  t = (ATerm) ATinsert(CheckATermList(v_19), term_p_30);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm f_20 = NULL;
  t = pass_verbose_0_0(t);
  f_20 = t;
  t = (ATerm) ATinsert(CheckATermList(f_20), term_p_30);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm h_20 = NULL;
  t = pass_verbose_0_0(t);
  h_20 = t;
  t = (ATerm) ATinsert(CheckATermList(h_20), term_p_30);
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm o_20 = NULL;
  t = pass_verbose_0_0(t);
  o_20 = t;
  t = (ATerm) ATinsert(CheckATermList(o_20), term_p_30);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm p_20 = NULL;
  t = pass_verbose_0_0(t);
  p_20 = t;
  t = (ATerm) ATinsert(CheckATermList(p_20), term_p_30);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = save_as_1_0(w_12, t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_g_36;
  return(t);
}
ATerm x_12 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm t_20 = NULL,v_20 = NULL;
  v_20 = t;
  {
    ATerm i_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_20 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(v_20);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_20);
              x_5 = t;
              t = SSLsetAnnotations(x_5, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_20;
          }
        LocalPopChoice(k_36);
        t = xtc_transform_file_2_0(b_13, c_13, t);
      }
    else
      {
        t = i_36;
        t = xtc_transform_term_2_0(d_13, e_13, t);
      }
    t_20 = t;
    {
      ATerm l_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              l_21 = ATgetArgument(t, 0);
              {
                ATerm l_14 = NULL,a_6 = NULL;
                t = SSLgetAnnotations(t_20);
                l_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_21);
                a_6 = t;
                t = SSLsetAnnotations(a_6, l_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = t_20;
            }
          LocalPopChoice(m_36);
          t = xtc_transform_file_2_0(g_13, i_13, t);
        }
      else
        {
          t = l_36;
          t = xtc_transform_term_2_0(k_13, l_13, t);
        }
      t = if_keep2_1_0(m_13, t);
    }
  }
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm c_21 = NULL;
  t = pass_verbose_0_0(t);
  c_21 = t;
  t = (ATerm) ATinsert(CheckATermList(c_21), term_p_30);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm d_21 = NULL;
  t = pass_verbose_0_0(t);
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), term_p_30);
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm n_21 = NULL;
  t = pass_verbose_0_0(t);
  n_21 = t;
  t = (ATerm) ATinsert(CheckATermList(n_21), term_p_30);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_p_30);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = save_as_1_0(o_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  t = term_v_36;
  return(t);
}
ATerm p_13 (ATerm t)
{
  t = term_e_33;
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  q_21 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_21 = ATgetArgument(t, 0);
            {
              ATerm p_14 = NULL,e_6 = NULL;
              t = SSLgetAnnotations(q_21);
              p_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_21);
              e_6 = t;
              t = SSLsetAnnotations(e_6, p_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_21;
          }
        LocalPopChoice(x_36);
        t = xtc_transform_file_2_0(s_13, t_13, t);
      }
    else
      {
        t = w_36;
        t = xtc_transform_term_2_0(u_13, w_13, t);
      }
    t = if_keep5_1_0(x_13, t);
    p_21 = t;
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_22 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              j_22 = ATgetArgument(t, 0);
              {
                ATerm t_14 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(p_21);
                t_14 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_22);
                f_6 = t;
                t = SSLsetAnnotations(f_6, t_14);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = p_21;
            }
          LocalPopChoice(a_37);
          t = xtc_transform_file_2_0(a_14, b_14, t);
        }
      else
        {
          t = z_36;
          t = xtc_transform_term_2_0(c_14, e_14, t);
        }
      t = if_keep5_1_0(f_14, t);
    }
  }
  return(t);
}
ATerm s_13 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm a_22 = NULL;
  t = pass_verbose_0_0(t);
  a_22 = t;
  t = (ATerm) ATinsert(CheckATermList(a_22), term_p_30);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm d_22 = NULL;
  t = pass_verbose_0_0(t);
  d_22 = t;
  t = (ATerm) ATinsert(CheckATermList(d_22), term_p_30);
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = save_as_1_0(y_13, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm l_22 = NULL;
  t = pass_verbose_0_0(t);
  l_22 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), term_p_30);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm m_22 = NULL;
  t = pass_verbose_0_0(t);
  m_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), term_p_30);
  return(t);
}
ATerm f_14 (ATerm t)
{
  t = save_as_1_0(g_14, t);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,r_22 = NULL;
  r_22 = t;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            v_22 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,g_6 = NULL;
              t = SSLgetAnnotations(r_22);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
              g_6 = t;
              t = SSLsetAnnotations(g_6, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_22;
          }
        LocalPopChoice(g_37);
        t = xtc_transform_file_2_0(k_14, m_14, t);
      }
    else
      {
        t = f_37;
        t = xtc_transform_term_2_0(n_14, o_14, t);
      }
    t = if_keep3_1_0(q_14, t);
    o_22 = t;
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              e_23 = ATgetArgument(t, 0);
              {
                ATerm b_15 = NULL,j_6 = NULL;
                t = SSLgetAnnotations(o_22);
                b_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_23);
                j_6 = t;
                t = SSLsetAnnotations(j_6, b_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = o_22;
            }
          LocalPopChoice(i_37);
          t = xtc_transform_file_2_0(s_14, u_14, t);
        }
      else
        {
          t = h_37;
          t = xtc_transform_term_2_0(v_14, w_14, t);
        }
      t = if_keep3_1_0(y_14, t);
      t = bound_unbound_vars_0_0(t);
      t = if_keep3_1_0(a_15, t);
      n_22 = t;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_23 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                n_23 = ATgetArgument(t, 0);
                {
                  ATerm f_15 = NULL,o_6 = NULL;
                  t = SSLgetAnnotations(n_22);
                  f_15 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
                  o_6 = t;
                  t = SSLsetAnnotations(o_6, f_15);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = n_22;
              }
            LocalPopChoice(p_37);
            t = xtc_transform_file_2_0(d_15, e_15, t);
          }
        else
          {
            t = o_37;
            t = xtc_transform_term_2_0(g_15, h_15, t);
          }
        t = if_keep3_1_0(i_15, t);
      }
    }
  }
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm z_22 = NULL;
  t = pass_verbose_0_0(t);
  z_22 = t;
  t = (ATerm) ATinsert(CheckATermList(z_22), term_p_30);
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm a_23 = NULL;
  t = pass_verbose_0_0(t);
  a_23 = t;
  t = (ATerm) ATinsert(CheckATermList(a_23), term_p_30);
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = save_as_1_0(r_14, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm i_23 = NULL;
  t = pass_verbose_0_0(t);
  i_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), term_p_30);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm j_23 = NULL;
  t = pass_verbose_0_0(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), term_p_30);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = save_as_1_0(z_14, t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = save_as_1_0(c_15, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm s_23 = NULL;
  t = pass_verbose_0_0(t);
  s_23 = t;
  t = (ATerm) ATinsert(CheckATermList(s_23), term_p_30);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_c_36;
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm u_23 = NULL;
  t = pass_verbose_0_0(t);
  u_23 = t;
  t = (ATerm) ATinsert(CheckATermList(u_23), term_p_30);
  return(t);
}
ATerm i_15 (ATerm t)
{
  t = save_as_1_0(k_15, t);
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  w_23 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_24 = ATgetArgument(t, 0);
            {
              ATerm j_15 = NULL,p_6 = NULL;
              t = SSLgetAnnotations(w_23);
              j_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_24);
              p_6 = t;
              t = SSLsetAnnotations(p_6, j_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_23;
          }
        LocalPopChoice(y_37);
        t = xtc_transform_file_2_0(p_15, s_15, t);
      }
    else
      {
        t = x_37;
        t = xtc_transform_term_2_0(t_15, x_15, t);
      }
    t = if_keep1_1_0(a_16, t);
    v_23 = t;
    {
      ATerm c_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_24 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              j_24 = ATgetArgument(t, 0);
              {
                ATerm n_15 = NULL,s_6 = NULL;
                t = SSLgetAnnotations(v_23);
                n_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_24);
                s_6 = t;
                t = SSLsetAnnotations(s_6, n_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = v_23;
            }
          LocalPopChoice(e_38);
          t = xtc_transform_file_2_0(f_16, g_16, t);
        }
      else
        {
          t = c_38;
          t = xtc_transform_term_2_0(h_16, j_16, t);
        }
      t = if_keep1_1_0(n_16, t);
    }
  }
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm d_24 = NULL;
  t = pass_verbose_0_0(t);
  d_24 = t;
  t = (ATerm) ATinsert(CheckATermList(d_24), term_p_30);
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm f_24 = NULL;
  t = pass_verbose_0_0(t);
  f_24 = t;
  t = (ATerm) ATinsert(CheckATermList(f_24), term_p_30);
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = save_as_1_0(e_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm l_24 = NULL;
  t = pass_verbose_0_0(t);
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(l_24), term_p_30);
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm m_24 = NULL;
  t = pass_verbose_0_0(t);
  m_24 = t;
  t = (ATerm) ATinsert(CheckATermList(m_24), term_p_30);
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = save_as_1_0(o_16, t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(l_7, t);
  t = profile_p__2_0(m_7, n_7, t);
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm a_26 = NULL;
  t = pass_verbose_0_0(t);
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(a_26), term_l_38);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm b_26 = NULL;
  t = pass_verbose_0_0(t);
  b_26 = t;
  t = (ATerm) ATinsert(CheckATermList(b_26), term_l_38);
  return(t);
}
ATerm save_as_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(((n_25 != NULL) && (n_25 != t)))
    _fail(t);
  else
    n_25 = t;
  {
    ATerm p_16 (ATerm t)
    {
      t = get_outfile_1_0(a_86, t);
      if(((l_25 != NULL) && (l_25 != t)))
        _fail(t);
      else
        l_25 = t;
      return(t);
    }
    t = copy_to_1_0(p_16, t);
    {
      ATerm m_38 = t;
      int q_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,y_25 = NULL;
          y_25 = t;
          if(match_cons(t, sym_FILE_1))
            {
              v_25 = ATgetArgument(t, 0);
              {
                ATerm y_15 = NULL,n_8 = NULL;
                t = SSLgetAnnotations(y_25);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_25);
                n_8 = t;
                t = SSLsetAnnotations(n_8, y_15);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = y_25;
            }
          LocalPopChoice(q_38);
          t = xtc_transform_file_2_0(r_16, t_16, t);
        }
      else
        {
          t = m_38;
          t = xtc_transform_term_2_0(u_16, v_16, t);
        }
      {
        ATerm a_17 (ATerm t)
        {
          ATerm c_26 = NULL;
          t = term_r_38;
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_25), term_r_38);
          t = p_12(not_null(l_25), c_26, t);
          if(((m_25 != NULL) && (m_25 != t)))
            _fail(t);
          else
            m_25 = t;
          return(t);
        }
        t = copy_to_1_0(a_17, t);
        t = term_i_29;
        if(((o_25 != NULL) && (o_25 != t)))
          _fail(t);
        else
          o_25 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_25)), term_t_38), not_null(l_25)), term_s_38));
        if(((p_25 != NULL) && (p_25 != t)))
          _fail(t);
        else
          p_25 = t;
        t = SSL_printnl(not_null(o_25), not_null(p_25));
        t = not_null(n_25);
      }
    }
  }
  return(t);
}
ATerm if_keep2_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_26 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_26, term_h_29);
        t = geq_0_0(t);
        t = f_26;
        t = y_108(t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = f_26;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  t = term_g_29;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = term_u_31;
      }
    n_26 = t;
    t = term_u_31;
    p_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_26, term_u_31);
    t = w_11(n_26, p_26, t);
    o_26 = t;
    t = SSL_int_to_string(o_26);
    m_26 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, m_26), term_g_29);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_116, n_116, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm o_11 (ATerm c_57, ATerm d_57, ATerm t)
{
  t = SSL_execvp(c_57, d_57);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,c_28 = NULL;
  w_27 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_27 = ATgetArgument(t, 0);
      {
        ATerm x_16 = NULL,z_16 = NULL;
        t = SSL_int_to_string(x_27);
        x_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_39), x_16), term_z_38);
        z_16 = t;
        t = SSL_concat_strings(z_16);
      }
    }
  else
    {
      ATerm z_17 = NULL,g_18 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
          c_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_27);
      z_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_28), term_c_39), z_17), term_b_39), x_27);
      g_18 = t;
      t = SSL_concat_strings(g_18);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  ATerm b_17 (ATerm t)
  {
    t = g_94(t);
    if(((i_28 != NULL) && (i_28 != t)))
      _fail(t);
    else
      i_28 = t;
    return(t);
  }
  t = fetch_1_0(b_17, t);
  t = not_null(i_28);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_28 = NULL;
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_39 = ATgetArgument(t, 0);
              if(((m_28 != NULL) && (m_28 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_28 = ATgetArgument(t, 1);
              {
                ATerm g_39 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_44), term_d_44), term_x_43), term_t_43), term_q_43), term_m_43), term_i_43), term_e_43), term_a_43), term_w_42), term_s_42), term_o_42), term_k_42), term_g_42), term_c_42), term_w_41), term_s_41), term_p_41), term_k_41), term_f_41), term_u_40), term_m_40), term_h_40), term_c_40), term_y_39), term_t_39), term_p_39), term_l_39);
        t = fetch_elem_1_0(c_17, t);
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(m_28));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_28 = NULL,b_29 = NULL;
  s_28 = t;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_44 = ATgetArgument(t, 0);
            b_29 = ATgetArgument(t, 1);
            {
              ATerm n_44 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_44);
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_19 = NULL,i_19 = NULL,k_19 = NULL;
              t = b_29;
              {
                ATerm q_44 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_44;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                c_19 = t;
                t = term_i_29;
                i_19 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, c_19), term_v_44);
                k_19 = t;
                t = SSL_printnl(i_19, k_19);
                t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(ATinsert(ATempty, c_19), term_v_44));
              }
              ;
              LocalPopChoice(p_44);
            }
          else
            {
              t = o_44;
              t = s_28;
            }
        }
      }
    else
      {
        t = k_44;
        t = s_28;
      }
    t = s_28;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  k_29 = t;
  t = fork_0_0(t);
  j_29 = t;
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_29;
        t = i_109(t);
        ;
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        t = SSL_waitpid(j_29);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_44 = ATgetArgument(t, 0);
            if(((ATgetType(y_44) != AT_INT) || (ATgetInt((ATermInt) y_44) != 0)))
              _fail(t);
            {
              ATerm c_45 = ATgetArgument(t, 1);
            }
            {
              ATerm d_45 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_29;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_116 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  if(((p_29 != NULL) && (p_29 != t)))
    _fail(t);
  else
    p_29 = t;
  t = d_116(t);
  t = xtc_find_0_0(t);
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(p_29));
  {
    ATerm d_17 (ATerm t)
    {
      ATerm q_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(p_29));
      t = o_11(not_null(o_29), not_null(p_29), t);
      t = term_v_29;
      q_29 = t;
      t = SSL_exit(q_29);
      return(t);
    }
    t = fork_and_wait_1_0(d_17, t);
    t = not_null(p_29);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_19 = NULL,z_19 = NULL;
      t = i_30;
      t = xtc_new_file_0_0(t);
      x_19 = t;
      t = n_0(t);
      z_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATinsert(ATinsert(ATempty, x_19), term_s_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(x_19);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_19);
    }
  else
    {
      ATerm q_20 = NULL,r_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_30;
      t = xtc_new_file_0_0(t);
      q_20 = t;
      t = n_0(t);
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_20), term_s_29), k_30), term_i_45));
      t = conc_0_0(t);
      t = xtc_command_1_0(m_0, t);
      t = SSL_close_file(q_20);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_20);
    }
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_j_45;
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm a_31 = NULL,h_31 = NULL;
  t = pass_verbose_0_0(t);
  a_31 = t;
  t = term_k_45;
  t = get_config_0_0(t);
  t = map_1_0(i_17, t);
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(h_31), (ATerm) ATinsert(ATempty, term_p_30)), a_31);
  t = concat_0_0(t);
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_31), term_k_45);
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = term_j_45;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t = pass_verbose_0_0(t);
  s_31 = t;
  t = term_k_45;
  t = get_config_0_0(t);
  t = map_1_0(o_17, t);
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(t_31), (ATerm) ATinsert(ATempty, term_p_30)), s_31);
  t = concat_0_0(t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_31), term_k_45);
  return(t);
}
ATerm warnings_0_0 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = NULL,y_30 = NULL;
      y_30 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_30 = ATgetArgument(t, 0);
          {
            ATerm h_21 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(y_30);
            h_21 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_30);
            q_8 = t;
            t = SSLsetAnnotations(q_8, h_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_30;
        }
      LocalPopChoice(m_45);
      t = xtc_transform_file_2_0(f_17, g_17, t);
    }
  else
    {
      t = l_45;
      t = xtc_transform_term_2_0(j_17, n_17, t);
    }
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm r_23 = NULL;
  t = pass_verbose_0_0(t);
  r_23 = t;
  t = (ATerm) ATinsert(CheckATermList(r_23), term_p_30);
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm t_23 = NULL;
  t = pass_verbose_0_0(t);
  t_23 = t;
  t = (ATerm) ATinsert(CheckATermList(t_23), term_p_30);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = get_outfile_1_0(x_17, t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,q_22 = NULL,x_22 = NULL;
        t = term_r_45;
        t = get_config_0_0(t);
        t = b_33;
        {
          ATerm s_45 = t;
          int t_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_33;
              {
                ATerm u_45 = t;
                int v_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_23 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        p_23 = ATgetArgument(t, 0);
                        {
                          ATerm w_25 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(b_33);
                          w_25 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, w_25);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = b_33;
                      }
                    LocalPopChoice(v_45);
                    t = xtc_transform_file_2_0(p_17, q_17, t);
                  }
                else
                  {
                    t = u_45;
                    t = xtc_transform_term_2_0(r_17, t_17, t);
                  }
              }
              ;
              LocalPopChoice(t_45);
            }
          else
            {
              t = s_45;
              {
                ATerm c_24 = NULL,e_24 = NULL,e_25 = NULL;
                t = term_i_29;
                e_24 = t;
                t = (ATerm) ATinsert(ATempty, term_g_46);
                e_25 = t;
                t = SSL_printnl(e_24, e_25);
                t = term_u_31;
                c_24 = t;
                t = SSL_exit(c_24);
                t = (ATerm) ATinsert(ATempty, term_g_46);
              }
            }
          t = copy_to_1_0(w_17, t);
          p_22 = t;
          t = term_i_29;
          q_22 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_46));
          x_22 = t;
          t = SSL_printnl(q_22, x_22);
          t = p_22;
          t = xtc_io_exit_0_0(t);
        }
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = b_33;
      }
  }
  return(t);
}
ATerm if_keep3_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  {
    ATerm i_46 = t;
    int j_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL;
        t = term_q_32;
        t = get_config_0_0(t);
        q_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_33, term_g_32);
        t = geq_0_0(t);
        t = m_33;
        t = z_108(t);
        ;
        LocalPopChoice(j_46);
      }
    else
      {
        t = i_46;
        t = m_33;
      }
  }
  return(t);
}
ATerm l_11 (ATerm z_85 (ATerm), ATerm e_31, ATerm t)
{
  ATerm s_33 = NULL;
  t = term_l_46;
  t = z_85(t);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(e_31), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_o_46, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_33), (ATerm) ATempty))))));
  return(t);
}
ATerm m_11 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm u_33 = NULL;
  t = SSL_write_term_to_stream_baf(t_54, u_54);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_33);
  return(t);
}
ATerm n_11 (ATerm l_106 (ATerm), ATerm z_466, ATerm b_55, ATerm t)
{
  ATerm v_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_466, term_p_46);
  t = open_stream_0_0(t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_33, b_55);
  t = l_106(t);
  t = fclose_0_0(t);
  t = b_55;
  return(t);
}
ATerm q_11 (ATerm s_104 (ATerm), ATerm x_49, ATerm v_49, ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,e_34 = NULL;
  b_34 = t;
  t = s_104(t);
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_33, x_49, v_49);
  t = m_12(y_33, x_49, v_49, t);
  {
    ATerm q_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL;
        t = term_v_46;
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_33, term_v_46);
        t = l_12(y_33, g_34, t);
        ;
        LocalPopChoice(s_46);
      }
    else
      {
        t = q_46;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_33 = ATgetFirst((ATermList) t);
        a_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_46;
    c_34 = t;
    t = (ATerm) ATinsert(CheckATermList(a_34), (ATerm) ATinsert(CheckATermList(z_33), x_49));
    e_34 = t;
    t = SSL_table_put(y_33, c_34, e_34);
    t = b_34;
  }
  return(t);
}
ATerm h_35 (ATerm o_34, ATerm t)
{
  t = o_34;
  {
    ATerm w_46 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_46 = ATgetArgument(t, 0);
            ATerm z_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_46;
      }
    t = term_c_47;
    t = debug_1_0(y_17, t);
    t = (ATerm) ATmakeAppl(sym__2, o_34, term_p_46);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm j_35 (ATerm t_34, ATerm v_34, ATerm w_34, ATerm t)
{
  t = SSL_open_file(t_34, v_34);
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = term_d_47;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,f_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
      {
        ATerm e_47 = t;
        int g_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_35(a_35, t);
            ;
            LocalPopChoice(g_47);
          }
        else
          {
            t = e_47;
            t = j_35(b_35, f_35, a_35, t);
          }
      }
    }
  else
    {
      t = h_35(a_35, t);
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  t = term_l_46;
  t = new_0_0(t);
  m_35 = t;
  t = term_h_47;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_35, term_h_47);
  t = p_12(m_35, n_35, t);
  o_35 = t;
  {
    ATerm i_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL;
        t = (ATerm) ATinsert(ATempty, term_m_47);
        s_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_35, (ATerm) ATinsert(ATempty, term_m_47));
        t = h_12(o_35, s_35, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(l_47);
      }
    else
      {
        t = i_47;
        t = o_35;
      }
  }
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_35 = NULL,b_36 = NULL;
  t = new_file_0_0(t);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_p_46);
  t = open_file_0_0(t);
  t = term_l_46;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_l_46);
  t = q_11(a_18, y_35, b_36, t);
  t = y_35;
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm h_36 = NULL,j_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(match_cons(o_47, sym_Stream_1))
        {
          h_36 = ATgetArgument(o_47, 0);
        }
      else
        _fail(t);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(h_36, j_36, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm d_36 = NULL,f_36 = NULL;
  d_36 = t;
  t = xtc_new_file_0_0(t);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, d_36);
  t = n_11(c_18, f_36, d_36, t);
  t = SSL_close_file(f_36);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_36);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_36 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_47;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_36 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_m_47);
      p_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_36, (ATerm) ATinsert(ATempty, term_m_47));
      t = h_12(n_36, p_36, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm o_116 (ATerm), ATerm t)
{
  t = read_from_0_0(t);
  t = o_116(t);
  t = write_to_0_0(t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = debug_1_0(h_18, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = term_t_47;
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = save_as_1_0(o_18, t);
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = term_u_47;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL;
  if(((u_36 != NULL) && (u_36 != t)))
    _fail(t);
  else
    u_36 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 (ATerm t)
        {
          ATerm y_36 = NULL;
          ATerm j_18 (ATerm t)
          {
            t = not_null(r_36);
            return(t);
          }
          if(match_cons(t, sym_Specification_1))
            {
              if(((y_36 != NULL) && (y_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_11(j_18, not_null(y_36), t);
          return(t);
        }
        t = term_x_47;
        t = get_config_0_0(t);
        if(((r_36 != NULL) && (r_36 != t)))
          _fail(t);
        else
          r_36 = t;
        t = if_verbose2_1_0(f_18, t);
        t = not_null(u_36);
        t = xtc_io_transform_1_0(i_18, t);
        ;
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        t = not_null(u_36);
      }
    t = if_keep3_1_0(l_18, t);
  }
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_37);
        ;
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
        t = u_37;
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  ATerm p_18 (ATerm t)
  {
    ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
    l_37 = t;
    t = term_n_47;
    m_37 = t;
    t = term_v_46;
    n_37 = t;
    t = term_a_48;
    t = l_12(m_37, n_37, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_37 != NULL) && (j_37 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_37 = ATgetFirst((ATermList) t);
        {
          ATerm b_48 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = not_null(j_37);
    t = map_1_0(q_18, t);
    t = l_37;
    t = end_scope_1_0(r_18, t);
    return(t);
  }
  t = repeat_1_0(p_18, t);
  if(((k_37 != NULL) && (k_37 != t)))
    _fail(t);
  else
    k_37 = t;
  t = SSL_exit(not_null(k_37));
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      t = term_g_30;
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = copy_to_1_0(s_18, t);
  t = term_a_29;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,d_38 = NULL;
  t = y_85(t);
  b_38 = t;
  t = term_e_48;
  t = get_config_0_0(t);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_38, b_38);
  t = p_12(d_38, b_38, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL;
  i_39 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_26 = NULL;
        t = i_39;
        t = o_0(t);
        s_26 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = s_26;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = s_26;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_39, s_26);
        t = y_11(j_39, s_26, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_39);
        ;
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
        {
          ATerm h_48 = t;
          int i_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_27 = NULL;
              t = i_39;
              t = o_0(t);
              f_27 = t;
              {
                ATerm l_48 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_27 = NULL;
                    g_27 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_27;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_27;
                          }
                        else
                          {
                            t = g_27;
                            if((j_39 != t))
                              {
                                _fail(t);
                              }
                            t = g_27;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_48;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_39, f_27);
                t = y_11(j_39, f_27, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_39);
              }
              ;
              LocalPopChoice(i_48);
            }
          else
            {
              t = h_48;
              t = i_39;
              t = o_0(t);
              if((j_39 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_39);
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
  t = term_m_48;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  {
    ATerm n_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_39 = NULL;
        t = term_s_48;
        t = get_config_0_0(t);
        t = u_39;
        t = copy_to_1_0(u_18, t);
        w_39 = t;
        t = (ATerm) ATinsert(ATempty, term_t_48);
        t = echo_0_0(t);
        t = w_39;
        t = xtc_io_exit_0_0(t);
        ;
        LocalPopChoice(r_48);
      }
    else
      {
        t = n_48;
        t = u_39;
      }
  }
  return(t);
}
ATerm comp_0_2 (ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL;
      o_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          n_40 = ATgetArgument(t, 0);
          {
            ATerm r_27 = NULL,z_8 = NULL;
            t = SSLgetAnnotations(o_40);
            r_27 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_40);
            z_8 = t;
            t = SSLsetAnnotations(z_8, r_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_40;
        }
      LocalPopChoice(v_48);
      {
        ATerm w_18 (ATerm t)
        {
          t = not_null(i_31);
          return(t);
        }
        ATerm z_18 (ATerm t)
        {
          ATerm p_40 = NULL;
          t = pass_verbose_0_0(t);
          p_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_31)), p_40), (ATerm) ATinsert(ATempty, term_p_30));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(w_18, z_18, t);
      }
    }
  else
    {
      t = u_48;
      {
        ATerm a_19 (ATerm t)
        {
          t = not_null(i_31);
          return(t);
        }
        ATerm b_19 (ATerm t)
        {
          ATerm r_40 = NULL;
          t = pass_verbose_0_0(t);
          r_40 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_31)), r_40), (ATerm) ATinsert(ATempty, term_p_30));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(a_19, b_19, t);
      }
    }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm v_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  t = term_q_32;
  {
    ATerm w_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_48);
      }
    else
      {
        t = w_48;
        t = term_u_31;
      }
    y_40 = t;
    t = term_u_31;
    a_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_40, term_u_31);
    t = w_11(y_40, a_41, t);
    z_40 = t;
    t = SSL_int_to_string(z_40);
    v_40 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, v_40), term_q_32);
  }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  {
    ATerm a_49 = t;
    int b_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_41 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_41, term_g_32);
        t = geq_0_0(t);
        t = d_41;
        t = x_107(t);
        ;
        LocalPopChoice(b_49);
      }
    else
      {
        t = a_49;
        t = d_41;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  if(((a_42 != NULL) && (a_42 != t)))
    _fail(t);
  else
    a_42 = t;
  t = SSL_explode_string(not_null(a_42));
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_44 (ATerm t)
        {
          ATerm a_44 = NULL,c_44 = NULL,e_44 = NULL;
          a_44 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_44 = ATgetFirst((ATermList) t);
              e_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm f_49 = t;
            int g_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_28 = NULL,l_28 = NULL,b_9 = NULL;
                t = SSLgetAnnotations(a_44);
                h_28 = t;
                t = e_44;
                t = j_44(t);
                l_28 = t;
                t = (ATerm) ATinsert(CheckATermList(l_28), c_44);
                b_9 = t;
                t = SSLsetAnnotations(b_9, h_28);
                ;
                LocalPopChoice(g_49);
              }
            else
              {
                t = f_49;
                {
                  ATerm h_49 = t;
                  int i_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_29 = NULL,c_9 = NULL;
                      t = SSLgetAnnotations(a_44);
                      f_29 = t;
                      t = c_44;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(e_44), c_44);
                      c_9 = t;
                      t = SSLsetAnnotations(c_9, f_29);
                      ;
                      LocalPopChoice(i_49);
                    }
                  else
                    {
                      t = h_49;
                      {
                        ATerm c_30 = NULL,j_30 = NULL,d_9 = NULL;
                        t = SSLgetAnnotations(a_44);
                        c_30 = t;
                        t = c_44;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = e_44;
                        t = t_102(t);
                        j_30 = t;
                        t = (ATerm) ATinsert(CheckATermList(j_30), c_44);
                        d_9 = t;
                        t = SSLsetAnnotations(d_9, c_30);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = j_44(t);
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
      }
    if(((z_41 != NULL) && (z_41 != t)))
      _fail(t);
    else
      z_41 = t;
    t = SSL_implode_string(not_null(z_41));
  }
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = debug_1_0(f_19, t);
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = term_l_49;
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = debug_1_0(o_19, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = term_m_49;
  return(t);
}
ATerm r_11 (ATerm b_31, ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  t = b_31;
  t = basename_1_0(_id, t);
  r_44 = t;
  t = if_verbose3_1_0(d_19, t);
  t = term_n_49;
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_49, r_44);
  t = o_12(u_44, r_44, t);
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_29;
        t = get_config_0_0(t);
        t = basename_1_0(_id, t);
        ;
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        t = r_44;
      }
    s_44 = t;
    t = if_verbose3_1_0(n_19, t);
    t = term_e_48;
    t_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_48, s_44);
    t = o_12(t_44, s_44, t);
    t = (ATerm) ATmakeAppl(sym_FILE_1, r_44);
  }
  return(t);
}
ATerm parse_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_11(h_45, t);
  f_45 = t;
  t = term_r_49;
  z_44 = t;
  t = f_45;
  {
    ATerm s_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_29;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(t_49);
      }
    else
      {
        t = s_49;
        t = term_e_48;
        t = get_config_0_0(t);
      }
    g_45 = t;
    t = f_45;
    t = pass_keep_0_0(t);
    b_45 = t;
    t = term_u_49;
    t = get_config_0_0(t);
    e_45 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_45), e_45), (ATerm) ATinsert(ATinsert(ATempty, g_45), term_w_49));
    t = concat_0_0(t);
    a_45 = t;
    t = f_45;
    t = comp_0_2(z_44, a_45, t);
  }
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = debug_1_0(q_19, t);
  return(t);
}
ATerm q_19 (ATerm t)
{
  t = term_y_49;
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = if_verbose1_1_0(w_19, t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  t = parse_0_0(t);
  t = output_ast_0_0(t);
  t = add_main_0_0(t);
  f_46 = t;
  {
    ATerm z_49 = t;
    int d_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            k_46 = ATgetArgument(t, 0);
            {
              ATerm z_30 = NULL,z_9 = NULL;
              t = SSLgetAnnotations(f_46);
              z_30 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_46);
              z_9 = t;
              t = SSLsetAnnotations(z_9, z_30);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_46;
          }
        LocalPopChoice(d_50);
        t = xtc_transform_file_2_0(y_19, a_20, t);
      }
    else
      {
        t = z_49;
        t = xtc_transform_term_2_0(b_20, d_20, t);
      }
    e_46 = t;
    {
      ATerm e_50 = t;
      int f_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_46 = NULL;
          if(match_cons(t, sym_FILE_1))
            {
              r_46 = ATgetArgument(t, 0);
              {
                ATerm g_31 = NULL,a_10 = NULL;
                t = SSLgetAnnotations(e_46);
                g_31 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, r_46);
                a_10 = t;
                t = SSLsetAnnotations(a_10, g_31);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = e_46;
            }
          LocalPopChoice(f_50);
          t = xtc_transform_file_2_0(e_20, g_20, t);
        }
      else
        {
          t = e_50;
          t = xtc_transform_term_2_0(i_20, j_20, t);
        }
      t = if_keep2_1_0(k_20, t);
      t = output_frontend_0_0(t);
      d_46 = t;
      {
        ATerm g_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_46 = NULL;
            if(match_cons(t, sym_FILE_1))
              {
                y_46 = ATgetArgument(t, 0);
                {
                  ATerm r_31 = NULL,b_10 = NULL;
                  t = SSLgetAnnotations(d_46);
                  r_31 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, y_46);
                  b_10 = t;
                  t = SSLsetAnnotations(b_10, r_31);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_46;
              }
            LocalPopChoice(i_50);
            t = xtc_transform_file_2_0(n_20, s_20, t);
          }
        else
          {
            t = g_50;
            t = xtc_transform_term_2_0(u_20, w_20, t);
          }
        t = if_keep2_1_0(x_20, t);
        t = warnings_0_0(t);
        c_46 = t;
        {
          ATerm k_50 = t;
          int n_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_47 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  f_47 = ATgetArgument(t, 0);
                  {
                    ATerm a_32 = NULL,c_10 = NULL;
                    t = SSLgetAnnotations(c_46);
                    a_32 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, f_47);
                    c_10 = t;
                    t = SSLsetAnnotations(c_10, a_32);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = c_46;
                }
              LocalPopChoice(n_50);
              t = xtc_transform_file_2_0(a_21, b_21, t);
            }
          else
            {
              t = k_50;
              t = xtc_transform_term_2_0(e_21, f_21, t);
            }
          b_46 = t;
          {
            ATerm o_50 = t;
            int q_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_47 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    p_47 = ATgetArgument(t, 0);
                    {
                      ATerm f_32 = NULL,d_10 = NULL;
                      t = SSLgetAnnotations(b_46);
                      f_32 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, p_47);
                      d_10 = t;
                      t = SSLsetAnnotations(d_10, f_32);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = b_46;
                  }
                LocalPopChoice(q_50);
                t = xtc_transform_file_2_0(g_21, i_21, t);
              }
            else
              {
                t = o_50;
                t = xtc_transform_term_2_0(j_21, k_21, t);
              }
            t = if_keep2_1_0(m_21, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  t = term_i_29;
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(w_45), term_r_50);
  y_45 = t;
  t = SSL_printnl(x_45, y_45);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(CheckATermList(w_45), term_r_50));
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm m_46 = NULL;
  t = pass_verbose_0_0(t);
  m_46 = t;
  t = (ATerm) ATinsert(CheckATermList(m_46), term_p_30);
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_s_50;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm n_46 = NULL;
  t = pass_verbose_0_0(t);
  n_46 = t;
  t = (ATerm) ATinsert(CheckATermList(n_46), term_p_30);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = term_v_50;
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm t_46 = NULL;
  t = pass_verbose_0_0(t);
  t_46 = t;
  t = (ATerm) ATinsert(CheckATermList(t_46), term_p_30);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_v_50;
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm u_46 = NULL;
  t = pass_verbose_0_0(t);
  u_46 = t;
  t = (ATerm) ATinsert(CheckATermList(u_46), term_p_30);
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = save_as_1_0(l_20, t);
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_w_50;
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm a_47 = NULL;
  t = pass_verbose_0_0(t);
  a_47 = t;
  t = (ATerm) ATinsert(CheckATermList(a_47), term_p_30);
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_z_50;
  return(t);
}
ATerm w_20 (ATerm t)
{
  ATerm b_47 = NULL;
  t = pass_verbose_0_0(t);
  b_47 = t;
  t = (ATerm) ATinsert(CheckATermList(b_47), term_p_30);
  return(t);
}
ATerm x_20 (ATerm t)
{
  t = save_as_1_0(y_20, t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = term_a_51;
  return(t);
}
ATerm a_21 (ATerm t)
{
  t = term_b_51;
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm j_47 = NULL;
  t = pass_verbose_0_0(t);
  j_47 = t;
  t = (ATerm) ATinsert(CheckATermList(j_47), term_p_30);
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = term_b_51;
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm k_47 = NULL;
  t = pass_verbose_0_0(t);
  k_47 = t;
  t = (ATerm) ATinsert(CheckATermList(k_47), term_p_30);
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = term_j_51;
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm r_47 = NULL;
  t = pass_verbose_0_0(t);
  r_47 = t;
  t = (ATerm) ATinsert(CheckATermList(r_47), term_p_30);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = term_j_51;
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm s_47 = NULL;
  t = pass_verbose_0_0(t);
  s_47 = t;
  t = (ATerm) ATinsert(CheckATermList(s_47), term_p_30);
  return(t);
}
ATerm m_21 (ATerm t)
{
  t = save_as_1_0(r_21, t);
  return(t);
}
ATerm r_21 (ATerm t)
{
  t = term_k_51;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(p_19, t);
  t = profile_p__2_0(r_19, t_19, t);
  return(t);
}
ATerm s_21 (ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
    }
  return(t);
}
ATerm t_21 (ATerm t)
{
  t = term_p_51;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_48 = NULL;
      o_48 = t;
      t = SSL_is_string(o_48);
      ;
      LocalPopChoice(s_51);
    }
  else
    {
      t = r_51;
      {
        ATerm b_52 = t;
        int c_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_21, t);
            ;
            LocalPopChoice(c_52);
          }
        else
          {
            t = b_52;
            {
              ATerm y_48 = NULL,z_48 = NULL,c_49 = NULL;
              y_48 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_48 = ATgetArgument(t, 0);
                  t = z_48;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_48 = ATgetArgument(t, 0);
                      t = z_48;
                      {
                        ATerm e_52 = t;
                        int f_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_52);
                          }
                        else
                          {
                            t = e_52;
                            t = debug_1_0(t_21, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_49 = NULL,k_49 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_48 = ATgetArgument(t, 0);
                          c_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_48;
                      t = eval_config_0_0(t);
                      j_49 = t;
                      t = c_49;
                      t = eval_config_0_0(t);
                      k_49 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
                      t = p_12(j_49, k_49, t);
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
  ATerm o_49 = NULL,a_50 = NULL;
  o_49 = t;
  t = term_g_52;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_52, o_49);
  t = l_12(a_50, o_49, t);
  {
    ATerm i_52 = t;
    int k_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL,c_50 = NULL;
        t = eval_config_0_0(t);
        b_50 = t;
        t = term_g_52;
        c_50 = t;
        t = SSL_table_put(c_50, o_49, b_50);
        t = b_50;
        ;
        LocalPopChoice(k_52);
      }
    else
      {
        t = i_52;
      }
  }
  return(t);
}
ATerm s_11 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm h_50 = NULL,j_50 = NULL;
  j_50 = t;
  {
    ATerm p_52 = t;
    int y_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_61, e_61);
        t = l_12(d_61, e_61, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_53 = ATgetFirst((ATermList) t);
            h_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_52);
        t = SSL_table_put(d_61, e_61, h_50);
        t = (ATerm) ATmakeAppl(sym__3, d_61, e_61, h_50);
      }
    else
      {
        t = p_52;
        t = SSL_table_remove(d_61, e_61);
        t = (ATerm) ATmakeAppl(sym__2, d_61, e_61);
      }
    t = j_50;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,p_50 = NULL,t_50 = NULL,u_50 = NULL;
  if(((t_50 != NULL) && (t_50 != t)))
    _fail(t);
  else
    t_50 = t;
  t = p_104(t);
  if(((p_50 != NULL) && (p_50 != t)))
    _fail(t);
  else
    p_50 = t;
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_50 = NULL;
        t = term_v_46;
        x_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), term_v_46);
        t = l_12(not_null(p_50), x_50, t);
        ;
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_50 != NULL) && (m_50 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_50 = ATgetFirst((ATermList) t);
        if(((l_50 != NULL) && (l_50 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_v_46;
    if(((u_50 != NULL) && (u_50 != t)))
      _fail(t);
    else
      u_50 = t;
    t = SSL_table_put(not_null(p_50), not_null(u_50), not_null(l_50));
    t = not_null(m_50);
    {
      ATerm u_21 (ATerm t)
      {
        ATerm y_50 = NULL;
        y_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_50), y_50);
        t = s_11(not_null(p_50), y_50, t);
        return(t);
      }
      t = map_1_0(u_21, t);
      t = not_null(t_50);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm y_86 (ATerm), ATerm z_86 (ATerm), ATerm t)
{
  ATerm j_53 = t;
  int l_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_86(t);
      t = z_86(t);
      ;
      LocalPopChoice(l_53);
    }
  else
    {
      t = j_53;
      t = z_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  f_51 = t;
  t = o_104(t);
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, term_v_46);
  {
    ATerm m_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_53 = ATgetArgument(t, 0);
            ATerm s_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_46;
        q_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_51, term_v_46);
        t = l_12(c_51, q_51, t);
        ;
        LocalPopChoice(o_53);
      }
    else
      {
        t = m_53;
        t = (ATerm) ATempty;
      }
    g_51 = t;
    t = term_v_46;
    h_51 = t;
    t = (ATerm) ATinsert(CheckATermList(g_51), (ATerm) ATempty);
    i_51 = t;
    t = SSL_table_put(c_51, h_51, i_51);
    t = f_51;
  }
  return(t);
}
ATerm v_21 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm d_52 = NULL;
  d_52 = t;
  {
    ATerm t_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_52);
        ;
        LocalPopChoice(v_53);
      }
    else
      {
        t = t_53;
        t = d_52;
      }
  }
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_n_47;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm x_51 = NULL;
  ATerm w_21 (ATerm t)
  {
    ATerm y_51 = NULL;
    y_51 = t;
    {
      ATerm z_53 = t;
      int b_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_51 = NULL,a_52 = NULL;
          t = term_n_47;
          z_51 = t;
          t = term_v_46;
          a_52 = t;
          t = term_a_48;
          t = l_12(z_51, a_52, t);
          ;
          LocalPopChoice(b_54);
        }
      else
        {
          t = z_53;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((x_51 != NULL) && (x_51 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            x_51 = ATgetFirst((ATermList) t);
          {
            ATerm f_54 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(x_51);
      t = map_1_0(x_21, t);
      t = y_51;
      t = end_scope_1_0(z_21, t);
    }
    return(t);
  }
  t = begin_scope_1_0(v_21, t);
  t = restore_always_2_0(p_115, w_21, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  {
    ATerm g_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        j_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_52, term_u_31);
        t = geq_0_0(t);
        t = h_52;
        t = v_107(t);
        ;
        LocalPopChoice(i_54);
      }
    else
      {
        t = g_54;
        t = h_52;
      }
  }
  return(t);
}
ATerm u_11 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm j_54 = t;
  int l_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_48, k_48);
      ;
      LocalPopChoice(l_54);
    }
  else
    {
      t = j_54;
      t = SSL_addr(j_48, k_48);
    }
  return(t);
}
ATerm w_11 (ATerm p_48, ATerm q_48, ATerm t)
{
  ATerm n_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_48, q_48);
      ;
      LocalPopChoice(q_54);
    }
  else
    {
      t = n_54;
      t = SSL_subtr(p_48, q_48);
    }
  return(t);
}
ATerm x_11 (ATerm a_58, ATerm c_58, ATerm e_58, ATerm g_58, ATerm b_58, ATerm d_58, ATerm f_58, ATerm h_58, ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
  t = w_11(a_58, b_58, t);
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_58, d_58);
  t = w_11(c_58, d_58, t);
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
  t = w_11(e_58, f_58, t);
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_58, h_58);
  t = w_11(g_58, h_58, t);
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__4, l_52, m_52, n_52, o_52);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_54 = ATgetArgument(t, 0);
      if(match_cons(s_54, sym__4))
        {
          q_52 = ATgetArgument(s_54, 0);
          r_52 = ATgetArgument(s_54, 1);
          s_52 = ATgetArgument(s_54, 2);
          t_52 = ATgetArgument(s_54, 3);
        }
      else
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(match_cons(w_54, sym__4))
          {
            u_52 = ATgetArgument(w_54, 0);
            v_52 = ATgetArgument(w_54, 1);
            w_52 = ATgetArgument(w_54, 2);
            x_52 = ATgetArgument(w_54, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_11(q_52, r_52, s_52, t_52, u_52, v_52, w_52, x_52, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL,c_53 = NULL,e_53 = NULL,h_53 = NULL,i_53 = NULL,k_53 = NULL,n_53 = NULL,p_53 = NULL,r_53 = NULL,u_53 = NULL,w_53 = NULL;
  i_53 = t;
  t = times_0_0(t);
  z_52 = t;
  t = i_53;
  t = j_111(t);
  a_53 = t;
  t = times_0_0(t);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_53, z_52);
  t = diff_times_0_0(t);
  e_53 = t;
  if(match_cons(t, sym__4))
    {
      r_53 = ATgetArgument(t, 0);
      {
        ATerm x_54 = ATgetArgument(t, 1);
      }
      u_53 = ATgetArgument(t, 2);
      {
        ATerm y_54 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_53, u_53);
  t = u_11(r_53, u_53, t);
  w_53 = t;
  t = SSL_TicksToSeconds(w_53);
  b_53 = t;
  t = e_53;
  if(match_cons(t, sym__4))
    {
      ATerm a_55 = ATgetArgument(t, 0);
      k_53 = ATgetArgument(t, 1);
      {
        ATerm c_55 = ATgetArgument(t, 2);
      }
      n_53 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_53, n_53);
  t = u_11(k_53, n_53, t);
  p_53 = t;
  t = SSL_TicksToSeconds(p_53);
  c_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_53), term_f_55), b_53), term_e_55);
  t = i_111(t);
  t = a_53;
  return(t);
}
ATerm debug_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,a_54 = NULL,c_54 = NULL;
  x_53 = t;
  t = j_106(t);
  y_53 = t;
  t = term_i_29;
  a_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_53), y_53);
  c_54 = t;
  t = SSL_printnl(a_54, c_54);
  t = x_53;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,h_54 = NULL,k_54 = NULL;
  d_54 = t;
  t = term_g_55;
  t = get_config_0_0(t);
  e_54 = t;
  t = term_g_30;
  h_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_55), term_o_55), term_n_55), term_m_55), term_l_55), term_k_55), term_j_55), e_54), term_h_55);
  k_54 = t;
  t = SSL_printnl(h_54, k_54);
  t = d_54;
  return(t);
}
ATerm y_11 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_copy(v_51, w_51);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_54 = NULL;
  ATerm b_22 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL;
    o_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_54), o_54);
    t = l_12(not_null(m_54), o_54, t);
    p_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
    return(t);
  }
  if(((m_54 != NULL) && (m_54 != t)))
    _fail(t);
  else
    m_54 = t;
  t = SSL_table_keys(not_null(m_54));
  t = map_1_0(b_22, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm r_54 = NULL;
  r_54 = t;
  {
    ATerm q_55 = t;
    int r_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_54 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        v_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_54, term_e_33);
        t = geq_0_0(t);
        t = r_54;
        t = z_107(t);
        ;
        LocalPopChoice(r_55);
      }
    else
      {
        t = q_55;
        t = r_54;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_107 (ATerm), ATerm t)
{
  ATerm d_55 = NULL;
  d_55 = t;
  {
    ATerm s_55 = t;
    int t_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_55 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        i_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_55, term_h_33);
        t = geq_0_0(t);
        t = d_55;
        t = y_107(t);
        ;
        LocalPopChoice(t_55);
      }
    else
      {
        t = s_55;
        t = d_55;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_55;
        if((w_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        ;
        LocalPopChoice(y_55);
      }
    else
      {
        t = u_55;
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        {
          ATerm z_55 = t;
          int c_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_55, x_55);
              ;
              LocalPopChoice(c_56);
            }
          else
            {
              t = z_55;
              t = SSL_gtr(w_55, x_55);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        }
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm q_56 = NULL;
  q_56 = t;
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_56 = NULL;
        t = term_g_29;
        t = get_config_0_0(t);
        s_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_56, term_k_33);
        t = geq_0_0(t);
        t = q_56;
        t = a_108(t);
        ;
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        t = q_56;
      }
  }
  return(t);
}
ATerm b_12 (ATerm b_98 (ATerm), ATerm c_98 (ATerm), ATerm o_38, ATerm n_38, ATerm t)
{
  t = c_98(t);
  {
    ATerm c_22 (ATerm t)
    {
      ATerm v_56 = NULL;
      v_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_38), v_56);
      t = b_98(t);
      return(t);
    }
    t = fetch_1_0(c_22, t);
    t = not_null(n_38);
  }
  return(t);
}
ATerm c_12 (ATerm y_97 (ATerm), ATerm k_38, ATerm j_38, ATerm t)
{
  ATerm v_57 (ATerm t)
  {
    ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
    p_57 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(j_38);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_57 = ATgetFirst((ATermList) t);
            r_57 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_56 = t;
          int m_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_57;
              {
                ATerm e_22 (ATerm t)
                {
                  t = not_null(j_38);
                  return(t);
                }
                t = b_12(y_97, e_22, not_null(q_57), not_null(r_57), t);
                t = v_57(t);
              }
              ;
              LocalPopChoice(m_56);
            }
          else
            {
              t = l_56;
              {
                ATerm l_34 = NULL,p_34 = NULL,l_10 = NULL;
                t = SSLgetAnnotations(p_57);
                l_34 = t;
                t = r_57;
                t = v_57(t);
                p_34 = t;
                t = (ATerm) ATinsert(CheckATermList(p_34), q_57);
                l_10 = t;
                t = SSLsetAnnotations(l_10, l_34);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(k_38);
  t = v_57(t);
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm o_58 = NULL;
  if(match_cons(t, sym__2))
    {
      o_58 = ATgetArgument(t, 0);
      if((o_58 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_12 (ATerm v_61, ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,i_58 = NULL;
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_56 = ATgetArgument(t, 0);
            ATerm r_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
        t = l_12(v_61, w_61, t);
        ;
        LocalPopChoice(o_56);
      }
    else
      {
        t = n_56;
        t = (ATerm) ATempty;
      }
    i_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_58, x_61);
    t = c_12(f_22, i_58, x_61, t);
    z_57 = t;
    t = SSL_table_put(v_61, w_61, z_57);
    t = y_57;
  }
  return(t);
}
ATerm e_12 (ATerm r_112 (ATerm), ATerm f_62, ATerm e_62, ATerm t)
{
  ATerm g_22 (ATerm t)
  {
    ATerm p_58 = NULL,r_58 = NULL;
    if(match_cons(t, sym__2))
      {
        p_58 = ATgetArgument(t, 0);
        r_58 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(f_62), p_58, r_58);
    t = r_112(t);
    return(t);
  }
  t = not_null(e_62);
  t = map_1_0(g_22, t);
  return(t);
}
ATerm h_12 (ATerm d_51, ATerm e_51, ATerm t)
{
  t = SSL_access(d_51, e_51);
  return(t);
}
ATerm i_59 (ATerm b_59, ATerm t)
{
  t = SSL_fclose(b_59);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  g_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_59 = ATgetArgument(t, 0);
      {
        ATerm t_56 = t;
        int u_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_59);
            ;
            LocalPopChoice(u_56);
          }
        else
          {
            t = t_56;
            t = i_59(g_59, t);
          }
      }
    }
  else
    {
      t = i_59(g_59, t);
    }
  return(t);
}
ATerm f_12 (ATerm z_54, ATerm t)
{
  t = SSL_read_term_from_stream(z_54);
  return(t);
}
ATerm g_12 (ATerm l_51, ATerm m_51, ATerm t)
{
  ATerm j_59 = NULL;
  t = SSL_fopen(l_51, m_51);
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_59);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_59 = NULL;
  t = SSL_stdin_stream();
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_59 = NULL;
  t = SSL_stdout_stream();
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_59 = NULL;
  t = SSL_stderr_stream();
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_59);
  return(t);
}
ATerm r_61 (ATerm t_59, ATerm t)
{
  ATerm w_59 = NULL;
  t = SSL_explode_term(t_59);
  if(match_cons(t, sym__2))
    {
      ATerm w_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_56 = ATgetArgument(t, 1);
        if(((ATgetType(x_56) == AT_LIST) && !(ATisEmpty(x_56))))
          {
            w_59 = ATgetFirst((ATermList) x_56);
            {
              ATerm y_56 = (ATerm) ATgetNext((ATermList) x_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_59;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_59;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_59;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_59;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm s_61 (ATerm z_59, ATerm a_60, ATerm b_60, ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,m_60 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(b_60);
  e_60 = t;
  t = z_59;
  if(match_cons(t, sym_Path_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_60, a_60);
  o_10 = t;
  t = SSLsetAnnotations(o_10, e_60);
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(c_60, d_60, t);
  return(t);
}
ATerm a_62 (ATerm p_60, ATerm r_60, ATerm s_60, ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,a_61 = NULL,h_61 = NULL,p_10 = NULL;
  t = SSLgetAnnotations(s_60);
  a_61 = t;
  t = SSL_is_string(p_60);
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_61, r_60);
  p_10 = t;
  t = SSLsetAnnotations(p_10, a_61);
  if(match_cons(t, sym__2))
    {
      t_60 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12(t_60, u_60, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_61 = NULL,p_61 = NULL,q_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_56 = ATgetArgument(t, 0);
      ATerm a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_61 = t;
  if(match_cons(t, sym__2))
    {
      p_61 = ATgetArgument(t, 0);
      q_61 = ATgetArgument(t, 1);
      {
        ATerm b_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_61(n_61, t);
            ;
            LocalPopChoice(e_57);
          }
        else
          {
            t = b_57;
            {
              ATerm f_57 = t;
              int g_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_61(p_61, q_61, n_61, t);
                  ;
                  LocalPopChoice(g_57);
                }
              else
                {
                  t = f_57;
                  t = a_62(p_61, q_61, n_61, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_61(n_61, t);
    }
  return(t);
}
ATerm h_22 (ATerm t)
{
  t = term_h_57;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_62 = NULL;
      i_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_62, term_k_57);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_57);
    }
  else
    {
      t = i_57;
      t = debug_1_0(h_22, t);
      _fail(t);
    }
  c_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_12(d_62, t);
  b_62 = t;
  t = c_62;
  t = fclose_0_0(t);
  t = b_62;
  return(t);
}
ATerm i_22 (ATerm t)
{
  t = term_l_57;
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = term_m_57;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_57 = t;
  int o_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_62 = NULL,l_62 = NULL;
      k_62 = t;
      t = (ATerm) ATinsert(ATempty, term_s_57);
      l_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_62, (ATerm) ATinsert(ATempty, term_s_57));
      t = h_12(k_62, l_62, t);
      LocalPopChoice(o_57);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_57;
      {
        ATerm t_57 = t;
        int u_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_57 = t;
            if((PushChoice() == 0))
              {
                ATerm m_62 = NULL,n_62 = NULL;
                m_62 = t;
                t = (ATerm) ATinsert(ATempty, term_m_47);
                n_62 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_62, (ATerm) ATinsert(ATempty, term_m_47));
                t = h_12(m_62, n_62, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_57;
              }
            t = debug_1_0(i_22, t);
            ;
            LocalPopChoice(u_57);
          }
        else
          {
            t = t_57;
            t = debug_1_0(k_22, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm s_22 (ATerm t)
{
  t = debug_1_0(t_22, t);
  return(t);
}
ATerm t_22 (ATerm t)
{
  t = term_x_57;
  return(t);
}
ATerm u_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = term_j_58;
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  c_63 = t;
  t = term_i_29;
  d_63 = t;
  t = (ATerm) ATinsert(ATempty, term_k_58);
  e_63 = t;
  t = SSL_printnl(d_63, e_63);
  t = c_63;
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
  if(match_cons(t, sym__3))
    {
      f_63 = ATgetArgument(t, 0);
      g_63 = ATgetArgument(t, 1);
      h_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_12(f_63, g_63, h_63, t);
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  i_63 = t;
  t = term_i_29;
  j_63 = t;
  t = (ATerm) ATinsert(ATempty, term_l_58);
  k_63 = t;
  t = SSL_printnl(j_63, k_63);
  t = i_63;
  return(t);
}
ATerm d_23 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  t = term_i_29;
  m_63 = t;
  t = (ATerm) ATinsert(ATempty, term_k_58);
  n_63 = t;
  t = SSL_printnl(m_63, n_63);
  t = l_63;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  o_62 = t;
  t = if_verbose5_1_0(s_22, t);
  {
    ATerm m_58 = t;
    if((PushChoice() == 0))
      {
        ATerm a_63 = NULL,b_63 = NULL;
        t = term_n_58;
        a_63 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_62);
        b_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_58, (ATerm) ATmakeAppl(sym_Imported_1, o_62));
        t = l_12(a_63, b_63, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_58;
      }
    s_62 = t;
    t = term_n_58;
    x_62 = t;
    t = term_q_58;
    y_62 = t;
    t = (ATerm) ATinsert(ATempty, o_62);
    z_62 = t;
    t = SSL_table_put(x_62, y_62, z_62);
    t = s_62;
    t = if_verbose4_1_0(u_22, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_22, t);
    r_62 = t;
    t = term_n_58;
    w_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_58, r_62);
    t = e_12(b_23, w_62, r_62, t);
    t = if_verbose6_1_0(c_23, t);
    t = term_n_58;
    t_62 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_62);
    u_62 = t;
    t = (ATerm) ATempty;
    v_62 = t;
    t = SSL_table_put(t_62, u_62, v_62);
    t = (ATerm) ATmakeAppl(sym__3, term_n_58, (ATerm)ATmakeAppl(sym_Imported_1, o_62), (ATerm) ATempty);
    t = if_verbose4_1_0(d_23, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL;
  d_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_64;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_64 = ATgetFirst((ATermList) t);
          f_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_58 = t;
        int t_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_35 = NULL,z_35 = NULL,a_36 = NULL,t_10 = NULL;
            t = SSLgetAnnotations(d_64);
            t_35 = t;
            t = e_64;
            t = a_101(t);
            z_35 = t;
            t = f_64;
            t = filter_1_0(a_101, t);
            a_36 = t;
            t = (ATerm) ATinsert(CheckATermList(a_36), z_35);
            t_10 = t;
            t = SSLsetAnnotations(t_10, t_35);
            ;
            LocalPopChoice(t_58);
          }
        else
          {
            t = s_58;
            t = f_64;
            t = filter_1_0(a_101, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm m_64 (ATerm t)
  {
    ATerm u_58 = t;
    int v_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        t = m_64(t);
        ;
        LocalPopChoice(v_58);
      }
    else
      {
        t = u_58;
      }
    return(t);
  }
  t = m_64(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_58 = t;
  int x_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_58;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_58);
    }
  else
    {
      t = w_58;
      {
        ATerm z_58 = t;
        int a_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_64 = NULL;
            t = term_c_59;
            n_64 = t;
            t = SSL_getenv(n_64);
            ;
            LocalPopChoice(a_59);
          }
        else
          {
            t = z_58;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = debug_1_0(g_23, t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = term_d_59;
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm w_64 = NULL,y_64 = NULL;
  t = term_n_58;
  w_64 = t;
  t = term_e_59;
  y_64 = t;
  t = term_h_59;
  t = l_12(w_64, y_64, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_59 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_59;
      }
  }
  return(t);
}
ATerm k_23 (ATerm t)
{
  t = debug_1_0(l_23, t);
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_o_59;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_64 = NULL;
  t = if_verbose5_1_0(f_23, t);
  o_64 = t;
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_64 = NULL,u_64 = NULL;
        t = term_n_58;
        t_64 = t;
        t = term_q_58;
        u_64 = t;
        t = term_r_59;
        t = l_12(t_64, u_64, t);
        ;
        LocalPopChoice(q_59);
      }
    else
      {
        t = p_59;
        {
          ATerm v_64 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          v_64 = t;
          t = repeat_1_0(h_23, t);
          t = v_64;
        }
      }
    t = o_64;
    t = if_verbose5_1_0(k_23, t);
  }
  return(t);
}
ATerm m_23 (ATerm t)
{
  t = debug_1_0(o_23, t);
  return(t);
}
ATerm o_23 (ATerm t)
{
  t = term_s_59;
  return(t);
}
ATerm n_66 (ATerm c_65, ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  t = term_n_58;
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_65);
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_58, (ATerm) ATmakeAppl(sym_Tool_1, c_65));
  t = l_12(f_65, g_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_59 = ATgetFirst((ATermList) t);
      if(match_cons(u_59, sym__2))
        {
          ATerm x_59 = ATgetArgument(u_59, 0);
          e_65 = ATgetArgument(u_59, 1);
        }
      else
        _fail(t);
      {
        ATerm v_59 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_65;
  return(t);
}
ATerm x_23 (ATerm t)
{
  t = debug_1_0(y_23, t);
  return(t);
}
ATerm y_23 (ATerm t)
{
  t = term_s_59;
  return(t);
}
ATerm z_23 (ATerm t)
{
  t = term_n_58;
  t = table_getlist_0_0(t);
  t = debug_1_0(b_24, t);
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = term_y_59;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_60 = t;
  int g_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_65 = NULL,k_65 = NULL,l_65 = NULL;
      t = if_verbose5_1_0(m_23, t);
      t = xtc_load_0_0(t);
      if(((l_65 != NULL) && (l_65 != t)))
        _fail(t);
      else
        l_65 = t;
      if(match_cons(t, sym__2))
        {
          h_65 = ATgetArgument(t, 0);
          k_65 = ATgetArgument(t, 1);
          {
            ATerm h_60 = t;
            int i_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_65 = NULL,r_65 = NULL,t_65 = NULL;
                t = term_n_58;
                if(((r_65 != NULL) && (r_65 != t)))
                  _fail(t);
                else
                  r_65 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(h_65));
                if(((t_65 != NULL) && (t_65 != t)))
                  _fail(t);
                else
                  t_65 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_58, (ATerm) ATmakeAppl(sym_Tool_1, not_null(h_65)));
                t = l_12(not_null(r_65), not_null(t_65), t);
                {
                  ATerm q_23 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((k_65 != NULL) && (k_65 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_65 = ATgetArgument(t, 0);
                        if(((q_65 != NULL) && (q_65 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_65 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_23, t);
                  t = not_null(q_65);
                }
                ;
                LocalPopChoice(i_60);
              }
            else
              {
                t = h_60;
                t = n_66(not_null(l_65), t);
              }
          }
        }
      else
        {
          t = n_66(not_null(l_65), t);
        }
      t = if_verbose5_1_0(x_23, t);
      ;
      LocalPopChoice(g_60);
    }
  else
    {
      t = f_60;
      {
        ATerm l_66 = NULL,q_36 = NULL,s_36 = NULL;
        l_66 = t;
        t = term_i_29;
        q_36 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_60), l_66), term_j_60);
        s_36 = t;
        t = SSL_printnl(q_36, s_36);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_60), l_66), term_j_60);
        t = if_verbose5_1_0(z_23, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm i_12 (ATerm g_56, ATerm f_56, ATerm t)
{
  ATerm q_66 = NULL,s_66 = NULL,t_66 = NULL;
  t = g_56;
  {
    ATerm l_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_60);
      }
    else
      {
        t = l_60;
        t = (ATerm) ATempty;
      }
    s_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_56, s_66);
    t = conc_0_0(t);
    q_66 = t;
    t = term_g_52;
    t_66 = t;
    t = SSL_table_put(t_66, g_56, q_66);
    t = (ATerm) ATmakeAppl(sym__3, term_g_52, g_56, q_66);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
      t = term_l_46;
      t = l_0(t);
      g_67 = t;
      t = term_o_60;
      h_67 = t;
      t = term_q_60;
      i_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_60, term_q_60, g_67);
      t = m_12(h_67, i_67, g_67, t);
      _fail(t);
    }
  else
    {
      ATerm m_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_67 = ATgetFirst((ATermList) t);
          d_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_67 = ATgetFirst((ATermList) t);
          f_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_67;
      t = j_0(t);
      t = e_67;
      t = k_0(t);
      m_67 = t;
      t = (ATerm) ATinsert(CheckATermList(f_67), m_67);
    }
  return(t);
}
ATerm j_12 (ATerm d_56, ATerm e_56, ATerm t)
{
  ATerm v_60 = t;
  int w_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_67 = NULL;
      t = d_56;
      t = get_config_0_0(t);
      t = term_g_52;
      n_67 = t;
      t = SSL_table_remove(n_67, d_56);
      t = (ATerm) ATmakeAppl(sym__2, term_g_52, d_56);
      ;
      LocalPopChoice(w_60);
    }
  else
    {
      t = v_60;
      t = (ATerm) ATmakeAppl(sym__2, d_56, e_56);
      t = o_12(d_56, e_56, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm m_68 (ATerm t)
  {
    ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
    l_68 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_68 = ATgetFirst((ATermList) t);
        k_68 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_37 = NULL,e_37 = NULL,v_10 = NULL;
          t = SSLgetAnnotations(l_68);
          b_37 = t;
          t = k_68;
          t = m_68(t);
          e_37 = t;
          t = (ATerm) ATinsert(CheckATermList(e_37), j_68);
          v_10 = t;
          t = SSLsetAnnotations(v_10, b_37);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_68;
        t = k_94(t);
      }
    return(t);
  }
  t = m_68(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_67;
    }
  else
    {
      ATerm g_24 (ATerm t)
      {
        t = not_null(r_67);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_67 != NULL) && (q_67 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_67 = ATgetFirst((ATermList) t);
          if(((r_67 != NULL) && (r_67 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_67);
      t = at_end_1_0(g_24, t);
    }
  return(t);
}
ATerm y_68 (ATerm q_68, ATerm t)
{
  ATerm r_68 = NULL;
  t = SSL_explode_term(q_68);
  if(match_cons(t, sym__2))
    {
      ATerm b_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_68;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  if(((v_68 != NULL) && (v_68 != t)))
    _fail(t);
  else
    v_68 = t;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
      {
        ATerm c_61 = t;
        int f_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_24 (ATerm t)
            {
              t = not_null(u_68);
              return(t);
            }
            t = not_null(t_68);
            t = at_end_1_0(h_24, t);
            ;
            LocalPopChoice(f_61);
          }
        else
          {
            t = c_61;
            t = y_68(not_null(v_68), t);
          }
      }
    }
  else
    {
      t = y_68(not_null(v_68), t);
    }
  return(t);
}
ATerm k_12 (ATerm h_56, ATerm i_56, ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  t = h_56;
  {
    ATerm g_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_61);
      }
    else
      {
        t = g_61;
        t = (ATerm) ATempty;
      }
    a_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_69, i_56);
    t = conc_0_0(t);
    z_68 = t;
    t = term_g_52;
    b_69 = t;
    t = SSL_table_put(b_69, h_56, z_68);
    t = (ATerm) ATmakeAppl(sym__3, term_g_52, h_56, z_68);
  }
  return(t);
}
ATerm i_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  j_69 = t;
  t = term_i_45;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, j_69);
  t = o_12(k_69, j_69, t);
  t = term_l_46;
  return(t);
}
ATerm n_24 (ATerm t)
{
  t = term_j_61;
  return(t);
}
ATerm o_24 (ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  if(match_string(t, "-o"))
    {
      t = l_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_69;
    }
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  m_69 = t;
  t = term_s_29;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, m_69);
  t = o_12(n_69, m_69, t);
  t = term_l_46;
  return(t);
}
ATerm q_24 (ATerm t)
{
  t = term_k_61;
  return(t);
}
ATerm r_24 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  if(match_string(t, "-I"))
    {
      t = o_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = o_69;
    }
  return(t);
}
ATerm s_24 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
  p_69 = t;
  t = term_u_49;
  q_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_69), term_u_49);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_49, (ATerm) ATinsert(ATinsert(ATempty, p_69), term_u_49));
  t = i_12(q_69, r_69, t);
  t = term_l_46;
  return(t);
}
ATerm t_24 (ATerm t)
{
  t = term_l_61;
  return(t);
}
ATerm u_24 (ATerm t)
{
  ATerm s_69 = NULL;
  s_69 = t;
  if(match_string(t, "--main"))
    {
      t = s_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = s_69;
    }
  return(t);
}
ATerm v_24 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL;
  t_69 = t;
  t = term_x_47;
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_47, t_69);
  t = o_12(u_69, t_69, t);
  t = term_l_46;
  return(t);
}
ATerm w_24 (ATerm t)
{
  t = term_m_61;
  return(t);
}
ATerm x_24 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_24 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,z_69 = NULL;
  v_69 = t;
  t = term_o_30;
  w_69 = t;
  t = (ATerm) ATinsert(ATempty, v_69);
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATinsert(ATempty, v_69));
  t = k_12(w_69, z_69, t);
  t = term_l_46;
  return(t);
}
ATerm z_24 (ATerm t)
{
  t = term_o_61;
  return(t);
}
ATerm a_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  a_70 = t;
  t = term_y_29;
  b_70 = t;
  t = (ATerm) ATinsert(ATempty, a_70);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, (ATerm) ATinsert(ATempty, a_70));
  t = i_12(b_70, c_70, t);
  t = term_l_46;
  return(t);
}
ATerm c_25 (ATerm t)
{
  t = term_t_61;
  return(t);
}
ATerm d_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,h_70 = NULL;
  d_70 = t;
  t = term_t_29;
  e_70 = t;
  t = (ATerm) ATinsert(ATempty, d_70);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATempty, d_70));
  t = i_12(e_70, h_70, t);
  t = term_l_46;
  return(t);
}
ATerm g_25 (ATerm t)
{
  t = term_u_61;
  return(t);
}
ATerm h_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL;
  t = term_z_29;
  i_70 = t;
  t = term_l_46;
  j_70 = t;
  t = term_y_61;
  t = o_12(i_70, j_70, t);
  t = term_l_46;
  return(t);
}
ATerm j_25 (ATerm t)
{
  t = term_z_61;
  return(t);
}
ATerm k_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_25 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  t = term_s_48;
  k_70 = t;
  t = term_l_46;
  l_70 = t;
  t = term_g_62;
  t = o_12(k_70, l_70, t);
  t = term_l_46;
  return(t);
}
ATerm r_25 (ATerm t)
{
  t = term_h_62;
  return(t);
}
ATerm s_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm m_70 = NULL,p_70 = NULL;
  t = term_r_45;
  m_70 = t;
  t = term_l_46;
  p_70 = t;
  t = term_j_62;
  t = o_12(m_70, p_70, t);
  t = term_l_46;
  return(t);
}
ATerm u_25 (ATerm t)
{
  t = term_o_63;
  return(t);
}
ATerm x_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  t = SSL_string_to_int(q_70);
  r_70 = t;
  t = term_q_32;
  s_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_32, r_70);
  t = o_12(s_70, r_70, t);
  t = term_l_46;
  return(t);
}
ATerm d_26 (ATerm t)
{
  t = term_p_63;
  return(t);
}
ATerm e_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_26 (ATerm t)
{
  ATerm t_70 = NULL,w_70 = NULL,x_70 = NULL;
  t_70 = t;
  t = SSL_string_to_int(t_70);
  w_70 = t;
  t = term_t_32;
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_32, w_70);
  t = o_12(x_70, w_70, t);
  t = term_l_46;
  return(t);
}
ATerm h_26 (ATerm t)
{
  t = term_q_63;
  return(t);
}
ATerm i_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_26 (ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL;
  t = term_i_34;
  y_70 = t;
  t = term_l_46;
  z_70 = t;
  t = term_r_63;
  t = j_12(y_70, z_70, t);
  t = term_l_46;
  return(t);
}
ATerm l_26 (ATerm t)
{
  t = term_s_63;
  return(t);
}
ATerm q_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--trace-all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_26 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  t = term_t_63;
  a_71 = t;
  t = term_l_46;
  b_71 = t;
  t = term_u_63;
  t = o_12(a_71, b_71, t);
  t = term_l_46;
  return(t);
}
ATerm t_26 (ATerm t)
{
  t = term_v_63;
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
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  c_71 = t;
  t = term_w_63;
  d_71 = t;
  t = (ATerm) ATinsert(ATempty, c_71);
  e_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_63, (ATerm) ATinsert(ATempty, c_71));
  t = i_12(d_71, e_71, t);
  t = term_l_46;
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_x_63;
  return(t);
}
ATerm x_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_26 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  t = SSL_string_to_int(f_71);
  g_71 = t;
  t = term_g_29;
  h_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_29, g_71);
  t = o_12(h_71, g_71, t);
  t = term_l_46;
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = term_y_63;
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm i_71 = NULL;
  i_71 = t;
  if(match_string(t, "-S"))
    {
      t = i_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_71;
    }
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm j_71 = NULL,k_71 = NULL;
  t = term_g_29;
  j_71 = t;
  t = term_a_29;
  k_71 = t;
  t = term_z_63;
  t = o_12(j_71, k_71, t);
  t = term_l_46;
  return(t);
}
ATerm c_27 (ATerm t)
{
  t = term_a_64;
  return(t);
}
ATerm d_27 (ATerm t)
{
  ATerm m_71 = NULL;
  m_71 = t;
  if(match_string(t, "-h"))
    {
      t = m_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = m_71;
    }
  return(t);
}
ATerm e_27 (ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL;
  t = term_b_64;
  n_71 = t;
  t = term_l_46;
  o_71 = t;
  t = term_c_64;
  t = o_12(n_71, o_71, t);
  t = term_l_46;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = term_g_64;
  return(t);
}
ATerm i_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_27 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL;
  t = term_h_64;
  p_71 = t;
  t = term_l_46;
  q_71 = t;
  t = term_i_64;
  t = o_12(p_71, q_71, t);
  t = term_l_46;
  return(t);
}
ATerm k_27 (ATerm t)
{
  t = term_j_64;
  return(t);
}
ATerm l_27 (ATerm t)
{
  ATerm r_71 = NULL;
  r_71 = t;
  if(match_string(t, "-v"))
    {
      t = r_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = r_71;
    }
  return(t);
}
ATerm m_27 (ATerm t)
{
  ATerm s_71 = NULL,v_71 = NULL;
  t = term_k_64;
  s_71 = t;
  t = term_l_46;
  v_71 = t;
  t = term_l_64;
  t = o_12(s_71, v_71, t);
  t = term_l_46;
  return(t);
}
ATerm n_27 (ATerm t)
{
  t = term_p_64;
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm w_71 = NULL;
  w_71 = t;
  if(match_string(t, "--warning"))
    {
      t = w_71;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = w_71;
    }
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm x_71 = NULL;
  x_71 = t;
  {
    ATerm q_64 = t;
    int r_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_71 = NULL,c_72 = NULL,d_72 = NULL,g_72 = NULL,k_72 = NULL,l_72 = NULL,y_10 = NULL;
        t = term_k_45;
        t = get_config_0_0(t);
        l_72 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_72 = ATgetFirst((ATermList) t);
            k_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_72);
        d_72 = t;
        t = g_72;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
          _fail(t);
        t = k_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_72), g_72);
        y_10 = t;
        t = SSLsetAnnotations(y_10, d_72);
        t = term_k_45;
        y_71 = t;
        t = (ATerm) ATinsert(ATempty, x_71);
        c_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATempty, x_71));
        t = o_12(y_71, c_72, t);
        ;
        LocalPopChoice(r_64);
      }
    else
      {
        t = q_64;
        {
          ATerm m_72 = NULL,o_72 = NULL;
          t = term_k_45;
          m_72 = t;
          t = (ATerm) ATinsert(ATempty, x_71);
          o_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATempty, x_71));
          t = i_12(m_72, o_72, t);
        }
      }
    t = term_l_46;
  }
  return(t);
}
ATerm q_27 (ATerm t)
{
  t = term_s_64;
  return(t);
}
ATerm sc_options_0_0 (ATerm t)
{
  ATerm x_64 = t;
  int z_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(i_24, k_24, n_24, t);
      ;
      LocalPopChoice(z_64);
    }
  else
    {
      t = x_64;
      {
        ATerm a_65 = t;
        int b_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_24, p_24, q_24, t);
            ;
            LocalPopChoice(b_65);
          }
        else
          {
            t = a_65;
            {
              ATerm d_65 = t;
              int i_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(r_24, s_24, t_24, t);
                  ;
                  LocalPopChoice(i_65);
                }
              else
                {
                  t = d_65;
                  {
                    ATerm j_65 = t;
                    int m_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(u_24, v_24, w_24, t);
                        ;
                        LocalPopChoice(m_65);
                      }
                    else
                      {
                        t = j_65;
                        {
                          ATerm n_65 = t;
                          int o_65 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(x_24, y_24, z_24, t);
                              ;
                              LocalPopChoice(o_65);
                            }
                          else
                            {
                              t = n_65;
                              {
                                ATerm p_65 = t;
                                int s_65 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(a_25, b_25, c_25, t);
                                    ;
                                    LocalPopChoice(s_65);
                                  }
                                else
                                  {
                                    t = p_65;
                                    {
                                      ATerm u_65 = t;
                                      int v_65 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(d_25, f_25, g_25, t);
                                          ;
                                          LocalPopChoice(v_65);
                                        }
                                      else
                                        {
                                          t = u_65;
                                          {
                                            ATerm w_65 = t;
                                            int x_65 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Option_3_0(h_25, i_25, j_25, t);
                                                ;
                                                LocalPopChoice(x_65);
                                              }
                                            else
                                              {
                                                t = w_65;
                                                {
                                                  ATerm y_65 = t;
                                                  int z_65 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Option_3_0(k_25, q_25, r_25, t);
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
                                                            t = Option_3_0(s_25, t_25, u_25, t);
                                                            ;
                                                            LocalPopChoice(b_66);
                                                          }
                                                        else
                                                          {
                                                            t = a_66;
                                                            {
                                                              ATerm c_66 = t;
                                                              int d_66 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(x_25, z_25, d_26, t);
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
                                                                        t = ArgOption_3_0(e_26, g_26, h_26, t);
                                                                        ;
                                                                        LocalPopChoice(f_66);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_66;
                                                                        {
                                                                          ATerm g_66 = t;
                                                                          int h_66 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(i_26, j_26, l_26, t);
                                                                              ;
                                                                              LocalPopChoice(h_66);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_66;
                                                                              {
                                                                                ATerm i_66 = t;
                                                                                int j_66 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(q_26, r_26, t_26, t);
                                                                                    ;
                                                                                    LocalPopChoice(j_66);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_66;
                                                                                    {
                                                                                      ATerm k_66 = t;
                                                                                      int m_66 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = ArgOption_3_0(u_26, v_26, w_26, t);
                                                                                          ;
                                                                                          LocalPopChoice(m_66);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_66;
                                                                                          {
                                                                                            ATerm o_66 = t;
                                                                                            int p_66 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(x_26, y_26, z_26, t);
                                                                                                ;
                                                                                                LocalPopChoice(p_66);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_66;
                                                                                                {
                                                                                                  ATerm r_66 = t;
                                                                                                  int u_66 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Option_3_0(a_27, b_27, c_27, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_66);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_66;
                                                                                                      {
                                                                                                        ATerm v_66 = t;
                                                                                                        int w_66 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(d_27, e_27, h_27, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_66);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_66;
                                                                                                            {
                                                                                                              ATerm x_66 = t;
                                                                                                              int y_66 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Option_3_0(i_27, j_27, k_27, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(y_66);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_66;
                                                                                                                  {
                                                                                                                    ATerm z_66 = t;
                                                                                                                    int a_67 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Option_3_0(l_27, m_27, n_27, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(a_67);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = z_66;
                                                                                                                        t = ArgOption_3_0(o_27, p_27, q_27, t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_67), term_l_55), term_y_67), term_x_67), term_w_67), term_l_55), term_v_67), term_u_67), term_t_67), term_s_67), term_o_67), term_l_67), term_k_67), term_j_67), term_b_67);
  return(t);
}
ATerm map_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm t_73 (ATerm t)
  {
    ATerm l_73 = NULL,n_73 = NULL,o_73 = NULL;
    l_73 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_73;
      }
    else
      {
        ATerm t_37 = NULL,z_37 = NULL,a_38 = NULL,c_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_73 = ATgetFirst((ATermList) t);
            o_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_73);
        t_37 = t;
        t = n_73;
        t = u_93(t);
        z_37 = t;
        t = o_73;
        t = t_73(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), z_37);
        c_11 = t;
        t = SSLsetAnnotations(c_11, t_37);
      }
    return(t);
  }
  t = t_73(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_73 = ATgetFirst((ATermList) t);
      x_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_74 = NULL,h_74 = NULL;
        ATerm s_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_74)), not_null(h_74));
          return(t);
        }
        t = not_null(x_73);
        t = h_0(t);
        if(((d_74 != NULL) && (d_74 != t)))
          _fail(t);
        else
          d_74 = t;
        t = not_null(w_73);
        t = g_0(t);
        if(((h_74 != NULL) && (h_74 != t)))
          _fail(t);
        else
          h_74 = t;
        t = not_null(x_73);
        t = reverse_acc_2_0(g_0, s_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_46;
      t = h_0(t);
    }
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm j_74 = NULL;
  t = term_l_46;
  t = f_0(t);
  j_74 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_68), j_74), term_e_68), term_l_55), term_d_68), term_l_55), term_c_68), term_b_68), term_l_55), term_a_68);
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm h_75 = NULL;
  h_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_75), term_g_68);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,r_74 = NULL;
  ATerm h_68 = t;
  int i_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_68;
      t = get_config_0_0(t);
      if(((n_74 != NULL) && (n_74 != t)))
        _fail(t);
      else
        n_74 = t;
      ;
      LocalPopChoice(i_68);
    }
  else
    {
      t = h_68;
      {
        ATerm t_27 (ATerm t)
        {
          ATerm s_74 = NULL,t_74 = NULL,c_75 = NULL,g_11 = NULL;
          c_75 = t;
          if(match_cons(t, sym_Program_1))
            {
              t_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_75);
          s_74 = t;
          t = t_74;
          if(((n_74 != NULL) && (n_74 != t)))
            _fail(t);
          else
            n_74 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, t_74);
          g_11 = t;
          t = SSLsetAnnotations(g_11, s_74);
          return(t);
        }
        t = fetch_1_0(t_27, t);
      }
    }
  {
    ATerm o_68 = t;
    int p_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_27 (ATerm t)
        {
          t = not_null(n_74);
          return(t);
        }
        t = short_description_1_0(u_27, t);
        t = echo_0_0(t);
        ;
        LocalPopChoice(p_68);
      }
    else
      {
        t = o_68;
      }
    t = term_s_68;
    t = echo_0_0(t);
    t = term_o_60;
    if(((o_74 != NULL) && (o_74 != t)))
      _fail(t);
    else
      o_74 = t;
    t = term_q_60;
    if(((r_74 != NULL) && (r_74 != t)))
      _fail(t);
    else
      r_74 = t;
    t = term_w_68;
    t = l_12(not_null(o_74), not_null(r_74), t);
    t = reverse_acc_2_0(_id, v_27, t);
    t = map_1_0(z_27, t);
    {
      ATerm x_68 = t;
      int c_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_75 = NULL;
          ATerm a_28 (ATerm t)
          {
            t = not_null(n_74);
            return(t);
          }
          t = long_description_1_0(a_28, t);
          if(((l_75 != NULL) && (l_75 != t)))
            _fail(t);
          else
            l_75 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(l_75)), term_l_55);
          t = echo_0_0(t);
          ;
          LocalPopChoice(c_69);
        }
      else
        {
          t = x_68;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm w_76 (ATerm t)
  {
    ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
    s_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_76 = ATgetFirst((ATermList) t);
        u_76 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_69 = t;
      int e_69 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_38 = NULL,w_38 = NULL,p_11 = NULL;
          t = SSLgetAnnotations(s_76);
          p_38 = t;
          t = t_76;
          t = e_94(t);
          w_38 = t;
          t = (ATerm) ATinsert(CheckATermList(u_76), w_38);
          p_11 = t;
          t = SSLsetAnnotations(p_11, p_38);
          ;
          LocalPopChoice(e_69);
        }
      else
        {
          t = d_69;
          {
            ATerm m_39 = NULL,s_39 = NULL,d_16 = NULL;
            t = SSLgetAnnotations(s_76);
            m_39 = t;
            t = u_76;
            t = w_76(t);
            s_39 = t;
            t = (ATerm) ATinsert(CheckATermList(s_39), t_76);
            d_16 = t;
            t = SSLsetAnnotations(d_16, m_39);
          }
        }
    }
    return(t);
  }
  t = w_76(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,u_77 = NULL;
  r_77 = t;
  {
    ATerm f_69 = t;
    int g_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_77;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_69 = ATgetFirst((ATermList) t);
                ATerm i_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_77;
          }
        ;
        LocalPopChoice(g_69);
      }
    else
      {
        t = f_69;
        t = (ATerm) ATinsert(ATempty, r_77);
      }
    s_77 = t;
    t = term_g_30;
    u_77 = t;
    t = SSL_printnl(u_77, s_77);
    t = r_77;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_68;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_28 (ATerm t)
{
  ATerm e_78 = NULL,g_78 = NULL;
  t = term_x_69;
  e_78 = t;
  t = term_l_46;
  g_78 = t;
  t = term_y_69;
  t = o_12(e_78, g_78, t);
  return(t);
}
ATerm e_28 (ATerm t)
{
  t = term_f_70;
  return(t);
}
ATerm f_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_28 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,v_78 = NULL,w_78 = NULL;
  t = term_x_69;
  v_78 = t;
  t = term_l_46;
  w_78 = t;
  t = term_y_69;
  t = o_12(v_78, w_78, t);
  t = term_k_64;
  p_78 = t;
  t = term_l_46;
  q_78 = t;
  t = term_l_64;
  t = o_12(p_78, q_78, t);
  t = term_g_70;
  return(t);
}
ATerm j_28 (ATerm t)
{
  t = term_n_70;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_70 = t;
  int u_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_28, d_28, e_28, t);
      ;
      LocalPopChoice(u_70);
    }
  else
    {
      t = o_70;
      t = Option_3_0(f_28, g_28, j_28, t);
    }
  return(t);
}
ATerm l_12 (ATerm p_62, ATerm q_62, ATerm t)
{
  t = SSL_table_get(p_62, q_62);
  return(t);
}
ATerm m_12 (ATerm y_60, ATerm z_60, ATerm x_60, ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,c_79 = NULL;
  y_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
  {
    ATerm v_70 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_71 = ATgetArgument(t, 0);
            ATerm u_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_60, z_60);
        t = l_12(y_60, z_60, t);
        ;
        LocalPopChoice(l_71);
      }
    else
      {
        t = v_70;
        t = (ATerm) ATempty;
      }
    z_78 = t;
    t = (ATerm) ATinsert(CheckATermList(z_78), x_60);
    c_79 = t;
    t = SSL_table_put(y_60, z_60, c_79);
    t = y_78;
  }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL;
      t = term_l_46;
      t = d_0(t);
      m_79 = t;
      t = term_o_60;
      n_79 = t;
      t = term_q_60;
      o_79 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_60, term_q_60, m_79);
      t = m_12(n_79, o_79, m_79, t);
      _fail(t);
    }
  else
    {
      ATerm x_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_79 = ATgetFirst((ATermList) t);
          k_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_79;
      t = a_0(t);
      t = term_l_46;
      t = b_0(t);
      x_79 = t;
      t = (ATerm) ATinsert(CheckATermList(k_79), x_79);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,m_16 = NULL;
  e_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_79 = ATgetFirst((ATermList) t);
      b_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_80);
  y_79 = t;
  t = z_79;
  t = e_72(t);
  c_80 = t;
  t = b_80;
  t = f_72(t);
  d_80 = t;
  t = (ATerm) ATinsert(CheckATermList(d_80), c_80);
  m_16 = t;
  t = SSLsetAnnotations(m_16, y_79);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,r_80 = NULL,s_80 = NULL,q_16 = NULL;
  if(((m_80 != NULL) && (m_80 != t)))
    _fail(t);
  else
    m_80 = t;
  {
    ATerm z_71 = t;
    int a_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_72;
        t = o_112(t);
        ;
        LocalPopChoice(a_72);
      }
    else
      {
        t = z_71;
      }
    t = not_null(m_80);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_80 != NULL) && (o_80 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_80 = ATgetFirst((ATermList) t);
        if(((p_80 != NULL) && (p_80 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          p_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(m_80));
    if(((n_80 != NULL) && (n_80 != t)))
      _fail(t);
    else
      n_80 = t;
    t = term_n_68;
    if(((s_80 != NULL) && (s_80 != t)))
      _fail(t);
    else
      s_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_68, not_null(o_80));
    t = o_12(not_null(s_80), not_null(o_80), t);
    t = not_null(p_80);
    {
      ATerm g_81 (ATerm t)
      {
        ATerm h_72 = t;
        int i_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_72 = t;
            int n_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_80 = NULL;
                v_80 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_80;
                ;
                LocalPopChoice(n_72);
              }
            else
              {
                t = j_72;
                t = o_112(t);
                t = Cons_2_0(_id, g_81, t);
              }
            ;
            LocalPopChoice(i_72);
          }
        else
          {
            t = h_72;
            {
              ATerm y_80 = NULL,b_81 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_80 = ATgetFirst((ATermList) t);
                  b_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_81), (ATerm) ATmakeAppl(sym_Undefined_1, y_80));
            }
          }
        return(t);
      }
      t = g_81(t);
      if(((r_80 != NULL) && (r_80 != t)))
        _fail(t);
      else
        r_80 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_80)), (ATerm) ATmakeAppl(sym_Program_1, not_null(o_80)));
      if(((q_16 != NULL) && (q_16 != t)))
        _fail(t);
      else
        q_16 = t;
      t = SSLsetAnnotations(not_null(q_16), not_null(n_80));
    }
  }
  return(t);
}
ATerm n_28 (ATerm t)
{
  ATerm g_82 = NULL;
  g_82 = t;
  if(match_string(t, "--help"))
    {
      t = g_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_82;
        }
    }
  return(t);
}
ATerm o_28 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL;
  t = term_b_64;
  h_82 = t;
  t = term_l_46;
  i_82 = t;
  t = term_c_64;
  t = o_12(h_82, i_82, t);
  t = term_p_72;
  return(t);
}
ATerm p_28 (ATerm t)
{
  t = term_q_72;
  return(t);
}
ATerm q_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_112 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
  if(((w_81 != NULL) && (w_81 != t)))
    _fail(t);
  else
    w_81 = t;
  t = term_o_60;
  if(((a_82 != NULL) && (a_82 != t)))
    _fail(t);
  else
    a_82 = t;
  t = term_q_60;
  if(((b_82 != NULL) && (b_82 != t)))
    _fail(t);
  else
    b_82 = t;
  t = (ATerm) ATempty;
  if(((c_82 != NULL) && (c_82 != t)))
    _fail(t);
  else
    c_82 = t;
  t = SSL_table_put(not_null(a_82), not_null(b_82), not_null(c_82));
  t = not_null(w_81);
  {
    ATerm k_28 (ATerm t)
    {
      ATerm r_72 = t;
      int s_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_112(t);
          ;
          LocalPopChoice(s_72);
        }
      else
        {
          t = r_72;
          {
            ATerm t_72 = t;
            int u_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_28, o_28, p_28, t);
                ;
                LocalPopChoice(u_72);
              }
            else
              {
                t = t_72;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_28, t);
    {
      ATerm v_72 = t;
      int w_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_83 = NULL;
          d_83 = t;
          {
            ATerm x_72 = t;
            int y_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_40 = NULL;
                t = d_83;
                {
                  ATerm z_72 = t;
                  int a_73 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_64;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_73);
                    }
                  else
                    {
                      t = z_72;
                      t = fetch_1_0(q_28, t);
                    }
                  t = d_83;
                  t = default_system_usage_0_0(t);
                  t = term_a_29;
                  d_40 = t;
                  t = SSL_exit(d_40);
                }
                ;
                LocalPopChoice(y_72);
              }
            else
              {
                t = x_72;
                {
                  ATerm k_40 = NULL;
                  t = term_x_69;
                  t = get_config_0_0(t);
                  t = d_83;
                  t = default_system_about_0_0(t);
                  t = term_a_29;
                  k_40 = t;
                  t = SSL_exit(k_40);
                }
              }
          }
          ;
          LocalPopChoice(w_72);
        }
      else
        {
          t = v_72;
          {
            ATerm b_73 = t;
            int c_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_83 = NULL,h_83 = NULL,l_83 = NULL;
                ATerm r_28 (ATerm t)
                {
                  ATerm n_83 = NULL,t_83 = NULL,v_83 = NULL,s_16 = NULL;
                  v_83 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_83);
                  n_83 = t;
                  t = t_83;
                  if(((u_81 != NULL) && (u_81 != t)))
                    _fail(t);
                  else
                    u_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_83);
                  s_16 = t;
                  t = SSLsetAnnotations(s_16, n_83);
                  return(t);
                }
                t = fetch_1_0(r_28, t);
                t = term_i_29;
                if(((h_83 != NULL) && (h_83 != t)))
                  _fail(t);
                else
                  h_83 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_d_73);
                if(((l_83 != NULL) && (l_83 != t)))
                  _fail(t);
                else
                  l_83 = t;
                t = SSL_printnl(not_null(h_83), not_null(l_83));
                t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_d_73));
                t = default_system_usage_0_0(t);
                t = term_u_31;
                if(((f_83 != NULL) && (f_83 != t)))
                  _fail(t);
                else
                  f_83 = t;
                t = SSL_exit(not_null(f_83));
                ;
                LocalPopChoice(c_73);
              }
            else
              {
                t = b_73;
              }
          }
        }
      if(((v_81 != NULL) && (v_81 != t)))
        _fail(t);
      else
        v_81 = t;
      t = term_o_60;
      if(((x_81 != NULL) && (x_81 != t)))
        _fail(t);
      else
        x_81 = t;
      t = SSL_table_destroy(not_null(x_81));
      t = not_null(v_81);
    }
  }
  return(t);
}
ATerm o_12 (ATerm a_56, ATerm b_56, ATerm t)
{
  ATerm d_84 = NULL;
  t = term_g_52;
  d_84 = t;
  t = SSL_table_put(d_84, a_56, b_56);
  t = (ATerm) ATmakeAppl(sym__3, term_g_52, a_56, b_56);
  return(t);
}
ATerm p_12 (ATerm z_45, ATerm a_46, ATerm t)
{
  t = SSL_strcat(z_45, a_46);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  if(((k_84 != NULL) && (k_84 != t)))
    _fail(t);
  else
    k_84 = t;
  t = SSL_explode_string(not_null(k_84));
  {
    ATerm e_73 = t;
    int f_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_85 (ATerm t)
        {
          ATerm g_85 = NULL,j_85 = NULL,k_85 = NULL;
          g_85 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_85 = ATgetFirst((ATermList) t);
              k_85 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm g_73 = t;
            int h_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_40 = NULL,e_41 = NULL,w_16 = NULL;
                t = SSLgetAnnotations(g_85);
                x_40 = t;
                t = k_85;
                t = l_85(t);
                e_41 = t;
                t = (ATerm) ATinsert(CheckATermList(e_41), j_85);
                w_16 = t;
                t = SSLsetAnnotations(w_16, x_40);
                ;
                LocalPopChoice(h_73);
              }
            else
              {
                t = g_73;
                {
                  ATerm o_41 = NULL,y_16 = NULL;
                  t = SSLgetAnnotations(g_85);
                  o_41 = t;
                  t = j_85;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, j_85);
                  y_16 = t;
                  t = SSLsetAnnotations(y_16, o_41);
                }
              }
          }
          return(t);
        }
        t = l_85(t);
        ;
        LocalPopChoice(f_73);
      }
    else
      {
        t = e_73;
        t = (ATerm) ATempty;
      }
    if(((j_84 != NULL) && (j_84 != t)))
      _fail(t);
    else
      j_84 = t;
    t = SSL_implode_string(not_null(j_84));
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
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,b_86 = NULL,c_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  p_85 = t;
  t = term_g_55;
  i_87 = t;
  t = term_i_73;
  j_87 = t;
  t = term_j_73;
  t = o_12(i_87, j_87, t);
  t = term_g_29;
  e_87 = t;
  t = term_h_29;
  h_87 = t;
  t = term_k_73;
  t = o_12(e_87, h_87, t);
  t = term_q_32;
  c_87 = t;
  t = term_a_29;
  d_87 = t;
  t = term_m_73;
  t = o_12(c_87, d_87, t);
  t = term_t_32;
  a_87 = t;
  t = term_k_33;
  b_87 = t;
  t = term_p_73;
  t = o_12(a_87, b_87, t);
  t = term_q_73;
  t = xtc_find_path_0_0(t);
  f_86 = t;
  t = term_r_73;
  t = xtc_find_path_0_0(t);
  g_86 = t;
  t = term_s_73;
  t = xtc_find_path_0_0(t);
  h_86 = t;
  t = term_u_49;
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_86), term_u_49), g_86), term_u_49), f_86), term_u_49);
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_86), term_u_49), g_86), term_u_49), f_86), term_u_49));
  t = o_12(w_86, x_86, t);
  t = term_o_30;
  u_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_73), term_u_73);
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATinsert(ATinsert(ATempty, term_v_73), term_u_73));
  t = o_12(u_86, v_86, t);
  t = term_y_73;
  t = xtc_find_path_0_0(t);
  e_86 = t;
  t = term_z_73;
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_86, term_z_73);
  t = p_12(e_86, t_86, t);
  v_85 = t;
  t = term_y_73;
  t = xtc_find_path_0_0(t);
  c_86 = t;
  t = term_z_73;
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_86, term_z_73);
  t = p_12(c_86, s_86, t);
  w_85 = t;
  t = term_a_74;
  t = xtc_find_path_0_0(t);
  b_86 = t;
  t = term_z_73;
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_86, term_z_73);
  t = p_12(b_86, r_86, t);
  x_85 = t;
  t = term_y_29;
  p_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_85), term_u_49), w_85), term_u_49), v_85), term_u_49);
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_85), term_u_49), w_85), term_u_49), v_85), term_u_49));
  t = o_12(p_86, q_86, t);
  t = term_y_73;
  t = xtc_find_path_0_0(t);
  u_85 = t;
  t = term_b_74;
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_85, term_b_74);
  t = p_12(u_85, o_86, t);
  q_85 = t;
  t = term_a_74;
  t = xtc_find_path_0_0(t);
  s_85 = t;
  t = term_b_74;
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_85, term_b_74);
  t = p_12(s_85, n_86, t);
  r_85 = t;
  t = term_t_29;
  l_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_74), term_g_74), r_85), term_c_74), term_f_74), term_e_74), q_85), term_c_74);
  m_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_74), term_g_74), r_85), term_c_74), term_f_74), term_e_74), q_85), term_c_74));
  t = o_12(l_86, m_86, t);
  t = term_k_45;
  j_86 = t;
  t = (ATerm) ATinsert(ATempty, term_k_74);
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATempty, term_k_74));
  t = o_12(j_86, k_86, t);
  t = p_85;
  return(t);
}
ATerm t_28 (ATerm t)
{
  ATerm z_87 = NULL;
  z_87 = t;
  t = term_i_45;
  t = get_config_0_0(t);
  t = debug_1_0(u_28, t);
  t = z_87;
  return(t);
}
ATerm u_28 (ATerm t)
{
  t = term_l_74;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_sc_config_0_0(t);
  t = parse_options_1_0(sc_options_0_0, t);
  {
    ATerm m_74 = t;
    int p_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
        t = term_h_64;
        t = get_config_0_0(t);
        t = term_q_74;
        t = xtc_find_0_0(t);
        m_87 = t;
        t = term_g_30;
        o_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_87, term_g_30);
        t = y_11(m_87, o_87, t);
        t = term_a_29;
        n_87 = t;
        t = SSL_exit(n_87);
        ;
        LocalPopChoice(p_74);
      }
    else
      {
        t = m_74;
      }
    {
      ATerm u_74 = t;
      int v_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_87 = NULL;
          t = term_k_64;
          t = get_config_0_0(t);
          t = strc_version_0_0(t);
          t = term_a_29;
          r_87 = t;
          t = SSL_exit(r_87);
          ;
          LocalPopChoice(v_74);
        }
      else
        {
          t = u_74;
        }
      {
        ATerm w_74 = t;
        int x_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_87 = NULL;
            u_87 = t;
            t = term_i_45;
            t = get_config_0_0(t);
            t = u_87;
            ;
            LocalPopChoice(x_74);
          }
        else
          {
            t = w_74;
            {
              ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
              t = term_i_29;
              x_87 = t;
              t = (ATerm) ATinsert(ATempty, term_y_74);
              y_87 = t;
              t = SSL_printnl(x_87, y_87);
              t = term_u_31;
              w_87 = t;
              t = SSL_exit(w_87);
              t = (ATerm) ATinsert(ATempty, term_y_74);
            }
          }
        t = if_verbose2_1_0(strc_version_0_0, t);
        t = if_verbose1_1_0(t_28, t);
      }
    }
  }
  return(t);
}
ATerm v_28 (ATerm t)
{
  t = if_verbose1_1_0(x_28, t);
  return(t);
}
ATerm w_28 (ATerm t)
{
  t = xtc_temp_files_1_0(y_28, t);
  return(t);
}
ATerm x_28 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  t = term_i_29;
  c_88 = t;
  t = (ATerm) ATinsert(CheckATermList(b_88), term_z_74);
  d_88 = t;
  t = SSL_printnl(c_88, d_88);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(CheckATermList(b_88), term_z_74));
  return(t);
}
ATerm y_28 (ATerm t)
{
  ATerm a_75 = t;
  int b_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_88 = NULL;
      t = term_i_45;
      t = get_config_0_0(t);
      e_88 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_88);
      ;
      LocalPopChoice(b_75);
    }
  else
    {
      t = a_75;
      t = term_q_47;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
ATerm z_28 (ATerm t)
{
  ATerm f_88 = NULL,g_88 = NULL,h_88 = NULL;
  t = run_time_0_0(t);
  f_88 = t;
  t = term_i_29;
  g_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_75), f_88), term_d_75);
  h_88 = t;
  t = SSL_printnl(g_88, h_88);
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_75), f_88), term_d_75));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm f_75 = t;
  int g_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_88 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(v_28, w_28, t);
      t = if_verbose2_1_0(z_28, t);
      t = term_a_29;
      a_88 = t;
      t = SSL_exit(a_88);
      ;
      LocalPopChoice(g_75);
    }
  else
    {
      t = f_75;
      {
        ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL;
        t = run_time_0_0(t);
        i_88 = t;
        t = term_i_29;
        k_88 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_75), i_88), term_i_75);
        l_88 = t;
        t = SSL_printnl(k_88, l_88);
        t = term_u_31;
        j_88 = t;
        t = SSL_exit(j_88);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
